// Copyright (c) 2010-2025 Antmicro  
// This file is licensed under the MIT License.  
// Full license text is available in 'LICENSE' file.  
  
#include <verilated.h>  
#include "Vuart_top.h"  
  
#include <bitset>  
#include <stdio.h>  
#include <stdlib.h>  
#include <cstdlib>  
#include <cstdint>  
#include <iostream>  
  
#if VM_TRACE  
# include <verilated_fst_c.h>  
#endif  
  
#include "buses/wishbone.h"  
#include "renenode_bus.h"  
#include "peripherals/uart.h"  
  
// ============================================================================  
// UART Configuration Constants  
// ============================================================================  
#define UART_FREQ 80000000              // UART clock frequency in Hz  
#define BAUDRATE 115200                 // Target baud rate for communication  
const int prescaler = static_cast<int>(round(UART_FREQ / BAUDRATE));  // Baud rate prescaler  
  
  
  
// ============================================================================  
// Global Variables  
// ============================================================================  
static UART* uart = nullptr;            // UART peripheral instance for Renode communication  
static Vuart_top* top = nullptr;        // Verilated UART top module instance  
static VerilatedFstC* tfp = nullptr;    // Fast waveform trace file pointer  
vluint64_t main_time = 0;               // Simulation time counter  
  
// ============================================================================  
// eval() - Simulation Cycle Evaluation Function  
// ============================================================================  
// This function is called every simulation cycle to evaluate both the  
// Verilated hardware model and the Renode peripheral agent  
void eval() {  
    static int eval_count = 0;          // Static evaluation counter (for debugging)  
      
#if VM_TRACE  
    main_time++;                        // Increment simulation time for tracing  
    tfp->dump(main_time);               // Dump current state to waveform file  
#endif  
      
    // Evaluate the Verilated UART hardware model  
    top->eval();  
      
    // Evaluate the Renode UART agent for protocol handling  
    uart->eval();  
}  
  
// ============================================================================  
// initAgent() - Initialize UART Peripheral for Renode Integration  
// ============================================================================  
// Creates and configures the UART peripheral instance that bridges the  
// Verilog UART signals with Renode's UART protocol handling  
UART* initAgent() {  
    const int uart_base_addr = 0x80002000;  // UART base address in memory map  
    const int uart_rxtr_reg = 0x0;          // UART transmit/receive register offset  
      
    if (!top) {  
        std::cerr << "Error: Top module is not initialized!" << std::endl;  
        exit(-1);  
    }  
      
    // Create UART agent instance with signal mappings:  
    // - stx_pad_o: UART transmit output signal  
    // - srx_pad_i: UART receive input signal    
    // - prescaler: Baud rate timing generator  
    // - uart_rxt_reg: Register offset for TX/RX operations  
    // - int_o: UART interrupt output signal  
    return new UART(&top->st_pad_o, &top->srx_pad_i, prescaler, uart_rxt_reg, &top->int_o);  
}  
  
// ============================================================================  
// initBus() - Initialize Wishbone Bus Interface for Renode  
// ============================================================================  
// Configures the Wishbone bus interface that allows Renode to access  
// the UART peripheral's registers through memory-mapped I/O  
void initBus(RenodeAgent* agent) {  
    Wishbone* bus = new Wishbone();  
      
    // Map Wishbone bus signals to Verilog module ports  
    bus->wb_clk = &top->wb_clk_i;        // Bus clock signal  
    bus->wb_rst = &top->wb_rst_i;        // Bus reset signal  
    bus->wb_cyc = &top->wb_cyc_i;        // Bus cycle indicator  
    bus->wb_stb = &top->wb_stb_i;        // Bus strobe signal  
    bus->wb_we = &top->wb_we_i;          // Write enable signal  
    bus->wb_ack = &top->wb_ack_o;        // Bus acknowledge signal  
    bus->wb_addr = (uint8_t*)&top->wb_adr_i;    // Bus address (8-bit, 3 lines used)  
    bus->wb_rd_dat = (uint8_t*)&top->wb_dat_o;  // Read data bus  
    bus->wb_wr_dat = (uint8_t*)&top->wb_dat_i;  // Write data bus  
    bus->wb_sel = (uint8_t*)&top->wb_sel_i;     // Byte select signals  
      
    // Configure bus parameters for 32-byte addressable registers  
    bus->addr_lines = 3;                 // 3 address lines (8 registers)  
    bus->granularity = 4;                // 32-bit (4-byte) register granularity  
      
    // Set evaluation callback for bus timing  
    bus->evaluateModel = &eval;  
    agent->addBus(bus);  
}  
  
// ============================================================================  
// Init() - Renode Library Entry Point  
// ============================================================================  
// This function is called by Renode when loading the Verilator library  
// to initialize the hardware simulation and peripheral integration  
RenendeAgent* Init() {  
    // Initialize Verilator runtime environment FIRST  
    const char* argv[] = {nullptr};  
    Verilated::commandArgs(0, argv);  
    top = new Vuart_top();  
      
#if VM_TRACE  
    // Enable waveform tracing for debugging  
    Verilated::traceEverOn(true);  
    tfp = new VerilatedFstC;  
    top->trace(tfp, 1);  
    tfp->open("/home/ammara/renode-source/Custom_UART/source/simx.fst");  
#endif  
      
    // Initialize UART peripheral and connect to Renode  
    uart = initAgent();  
    uart->connectNative();               // Establish native communication channel  
    initBus(uart);                       // Configure Wishbone bus interface  
      
    return uart;                         // Return agent instance to Renode  
}

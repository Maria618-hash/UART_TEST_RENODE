// Copyright (c) 2010-2025 Antmicro
// This file is licensed under the MIT License.
// Full license text is available in 'LICENSE' file.

#include <verilated.h>
#include "Vsimple_spi_top.h"

#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <iostream>

#if VM_TRACE
# include <verilated_fst_c.h>
#endif

#include "buses/wishbone.h"
#include "renode_bus.h"
#include "peripherals/spi.h"

// -------------------
// SPI Clock Settings
// -------------------
#define SPI_FREQ 40000000

static SPI* spi = nullptr;
static Vsimple_spi_top* top = nullptr;
#if VM_TRACE
static VerilatedFstC* tfp = nullptr;
#endif
static uint8_t wb_sel_dummy = 0;
vluint64_t main_time = 0;

// ===============================
// eval() -- called every cycle
// ===============================
void eval() {
       // Clock high
    top->clk_i = 1;
    top->eval();
    
#if VM_TRACE
    main_time++;
    tfp->dump(main_time);
#endif

    // Apply loopback at hardware level if enabled
    if (spi && spi->loopbackEnabled) {
        top->miso_i = top->mosi_o;
        top->eval();
    } else {
        top->miso_i = 0;
    }

    // Evaluate Renode agent
    if (spi)
        spi->eval();

    // Clock low
    top->clk_i = 0;
    top->eval();

#if VM_TRACE
    main_time++;
    tfp->dump(main_time);
#endif
}

// ========================================
// Initialize SPI peripheral for Renode use
// ========================================
SPI* initAgent() {
    const int spi_tx_rx_reg = 0x02; // FIFO register at adr 0b010

    if (!top) {
        std::cerr << "Error: Top module is not initialized!" << std::endl;
        exit(-1);
    }

    // SPI object: (mosi, miso, sck, ss)
    SPI* s = new SPI(
        (uint32_t*)&top->mosi_o,  // Master-out
        (uint32_t*)&top->miso_i,  // Master-in
        (uint32_t*)&top->sck_o,   // SPI clock
        (uint8_t*)&top->ss_o,     // Slave-select array
        1,                        // SS width
        spi_tx_rx_reg
    );

    return s;
}

// =====================================
// Initialize Wishbone bus for Renode
// =====================================
class CustomWishbone : public Wishbone {
private:
    SPI* spi;

public:
    CustomWishbone(SPI* spiPtr) : spi(spiPtr) {}

    virtual uint64_t read(int width, uint64_t addr) override {
        return spi->readByte(addr / granularity);
    }

    virtual void write(int width, uint64_t addr, uint64_t value) override {
        if (addr / granularity == 0x03) { // SPER register
            spi->loopbackEnabled = (value & 0x01) != 0;
            return;
        }
        spi->writeByte(addr / granularity, (uint8_t)value);
    }
};

void initBus(RenodeAgent* agent) {
    CustomWishbone* bus = new CustomWishbone(spi);

    bus->wb_clk    = &top->clk_i;
    bus->wb_rst    = &top->rst_i;
    bus->wb_cyc    = &top->cyc_i;
    bus->wb_stb    = &top->stb_i;
    bus->wb_we     = &top->we_i;
    bus->wb_ack    = &top->ack_o;
    bus->wb_addr   = (uint8_t*)&top->adr_i;
    bus->wb_rd_dat = (uint8_t*)&top->dat_o;
    bus->wb_wr_dat = (uint8_t*)&top->dat_i;
    bus->wb_sel    = &wb_sel_dummy; // 8-bit peripheral → no select lines

    bus->addr_lines = 3;   // adr_i[2:0]
    bus->granularity = 1;  // 8-bit registers

    bus->evaluateModel = &eval;
    agent->addBus(bus);
}

// =====================================
// Renode entry point — Init()
// =====================================
RenodeAgent* Init() {
    // Initialize Verilator
    const char* argv[] = { nullptr };
    Verilated::commandArgs(0, argv);

    top = new Vsimple_spi_top();

#if VM_TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedFstC;
    top->trace(tfp, 1);

    // Save FST file in current working directory for GTKWave
    tfp->open("/home/ammara/renode-source/Custom_SPI/source/spi-m_trace.fst");
#endif

    // Init SPI agent
    spi = initAgent();
    spi->connectNative(); // required by Renode

    // Connect Wishbone bus
    initBus(spi);

    return spi;
}


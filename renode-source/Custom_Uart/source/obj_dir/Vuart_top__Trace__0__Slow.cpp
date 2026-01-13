// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vuart_top__Syms.h"


VL_ATTR_COLD void Vuart_top___024root__trace_init_sub__TOP__0(Vuart_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_init_sub__TOP__0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+150,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"rts_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"cts_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"ri_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("uart_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"SIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+150,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"rts_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"cts_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"ri_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"wb_dat8_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"wb_dat8_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"wb_dat32_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"wb_adr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+92,0,"we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"re_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"SIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"wb_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+92,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wb_re_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"modem_inputs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+158,0,"rts_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"srx_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"ier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"iir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"fcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"mcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"lcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"msr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"scratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"start_dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"lsr_mask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"msi_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"trigger_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"rx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"tx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"dlab",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"cts_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"ri_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"loopback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"cts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"dsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"ri",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cts_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"dsr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"ri_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"dcd_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"lsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"lsr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"lsr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"lsr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"lsr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"lsr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"lsr5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"lsr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"lsr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"lsr0r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"lsr1r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"lsr2r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"lsr3r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"lsr4r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"lsr5r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"lsr6r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"lsr7r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"rls_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rda_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ti_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"thre_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ms_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"tf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"rf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+35,0,"rf_error_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"rf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+105,0,"tf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+106,0,"tstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"counter_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+38,0,"thre_set_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"block_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"block_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+109,0,"serial_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"serial_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"lsr_mask_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"iir_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"msr_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"fifo_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"fifo_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"delayed_modem_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"lsr0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"lsr1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"lsr2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"lsr3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"lsr4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"lsr5_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"lsr6_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"lsr7_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"rls_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"thre_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ms_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"ti_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rda_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"rls_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"thre_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"ms_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ti_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"rda_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"rls_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"rda_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"thre_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ms_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"ti_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_uart_sync_flops", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"init_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+146,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"stage1_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"stage1_clk_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"async_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"sync_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+64,0,"flop_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("receiver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"rf_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"counter_t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+36,0,"rf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+174,0,"rf_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+16,0,"rf_overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"rf_error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"rstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"rcounter16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"rbit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"rshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"rparity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rparity_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"rframing_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"rparity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"counter_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"rf_push_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"rf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+125,0,"rf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"break_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"rcounter16_eq_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rcounter16_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"rcounter16_minus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"sr_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"sr_rec_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"sr_rec_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"sr_rec_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"sr_rec_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"sr_check_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"sr_rec_prepare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"sr_end_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"sr_ca_lc_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"sr_wait1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"sr_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"toc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+131,0,"brc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fifo_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+13,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+16,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+35,0,"error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"data8_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+68,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"word1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"word2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"word3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"word4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"word5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"word6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"word7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"word8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"word9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"word10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"word11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"word12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"word13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"word14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"word15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("transmitter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"SIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+103,0,"tf_push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+93,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"tx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"tstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"tf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+135,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+137,0,"shift_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+138,0,"stx_o_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"parity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"tf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"bit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"tf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"tf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+84,0,"tf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"s_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"s_send_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+200,0,"s_send_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+201,0,"s_send_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"s_send_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"s_pop_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+97,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+84,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+142,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("tfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_interface", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"wb_dat_is",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"wb_adr_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+164,0,"wb_dat8_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"wb_dat8_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"wb_dat32_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"wb_adr_is",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+85,0,"wb_we_is",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"wb_cyc_is",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"wb_stb_is",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"wre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"wbstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_top___024root__trace_init_top(Vuart_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_init_top\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vuart_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vuart_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vuart_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vuart_top___024root__trace_register(Vuart_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_register\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vuart_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vuart_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vuart_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vuart_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart_top___024root__trace_const_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vuart_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_const_0\n"); );
    // Body
    Vuart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top___024root*>(voidSelf);
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vuart_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_top___024root__trace_const_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_const_0_sub_0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+177,(0U),32);
    bufp->fullIData(oldp+178,(vlSelfRef.uart_top__DOT__wb_dat32_o),32);
    bufp->fullIData(oldp+179,(1U),32);
    bufp->fullBit(oldp+180,(0U));
    bufp->fullBit(oldp+181,(0U));
    bufp->fullBit(oldp+182,(1U));
    bufp->fullCData(oldp+183,(0U),4);
    bufp->fullCData(oldp+184,(1U),4);
    bufp->fullCData(oldp+185,(2U),4);
    bufp->fullCData(oldp+186,(3U),4);
    bufp->fullCData(oldp+187,(4U),4);
    bufp->fullCData(oldp+188,(5U),4);
    bufp->fullCData(oldp+189,(6U),4);
    bufp->fullCData(oldp+190,(7U),4);
    bufp->fullCData(oldp+191,(8U),4);
    bufp->fullCData(oldp+192,(9U),4);
    bufp->fullCData(oldp+193,(0x0aU),4);
    bufp->fullIData(oldp+194,(0x0000000bU),32);
    bufp->fullIData(oldp+195,(0x00000100U),32);
    bufp->fullIData(oldp+196,(8U),32);
    bufp->fullIData(oldp+197,(9U),32);
    bufp->fullCData(oldp+198,(0U),3);
    bufp->fullCData(oldp+199,(1U),3);
    bufp->fullCData(oldp+200,(2U),3);
    bufp->fullCData(oldp+201,(3U),3);
    bufp->fullCData(oldp+202,(4U),3);
    bufp->fullCData(oldp+203,(5U),3);
    bufp->fullIData(oldp+204,(0U),32);
}

VL_ATTR_COLD void Vuart_top___024root__trace_full_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vuart_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_full_0\n"); );
    // Body
    Vuart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top___024root*>(voidSelf);
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vuart_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_top___024root__trace_full_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_full_0_sub_0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.uart_top__DOT__re_o));
    bufp->fullBit(oldp+2,(vlSelfRef.uart_top__DOT__regs__DOT__srx_pad));
    bufp->fullCData(oldp+3,(vlSelfRef.uart_top__DOT__regs__DOT__ier),4);
    bufp->fullCData(oldp+4,(vlSelfRef.uart_top__DOT__regs__DOT__iir),4);
    bufp->fullCData(oldp+5,(vlSelfRef.uart_top__DOT__regs__DOT__fcr),2);
    bufp->fullCData(oldp+6,(vlSelfRef.uart_top__DOT__regs__DOT__mcr),5);
    bufp->fullCData(oldp+7,(vlSelfRef.uart_top__DOT__regs__DOT__msr),8);
    bufp->fullCData(oldp+8,(vlSelfRef.uart_top__DOT__regs__DOT__scratch),8);
    bufp->fullBit(oldp+9,(vlSelfRef.uart_top__DOT__regs__DOT__start_dlc));
    bufp->fullBit(oldp+10,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+11,(vlSelfRef.uart_top__DOT__regs__DOT__msi_reset));
    bufp->fullCData(oldp+12,(vlSelfRef.uart_top__DOT__regs__DOT__trigger_level),4);
    bufp->fullBit(oldp+13,(vlSelfRef.uart_top__DOT__regs__DOT__rx_reset));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullCData(oldp+15,(((((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r) 
                                  << 3U) | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r) 
                                    << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r))) 
                               << 4U) | ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r))))),8);
    bufp->fullBit(oldp+16,(vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun));
    bufp->fullBit(oldp+17,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2));
    bufp->fullBit(oldp+18,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3));
    bufp->fullBit(oldp+19,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4));
    bufp->fullBit(oldp+20,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7));
    bufp->fullBit(oldp+21,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r));
    bufp->fullBit(oldp+22,(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r));
    bufp->fullBit(oldp+23,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r));
    bufp->fullBit(oldp+24,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r));
    bufp->fullBit(oldp+25,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r));
    bufp->fullBit(oldp+26,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r));
    bufp->fullBit(oldp+27,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r));
    bufp->fullBit(oldp+28,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r));
    bufp->fullBit(oldp+29,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int));
    bufp->fullBit(oldp+30,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int));
    bufp->fullBit(oldp+31,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int));
    bufp->fullBit(oldp+32,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int));
    bufp->fullBit(oldp+33,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int));
    bufp->fullBit(oldp+34,(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop));
    bufp->fullBit(oldp+35,((0U != (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [0U] | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [1U] | (
                                                   vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0aU] 
                                                                           | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0bU] 
                                                                              | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0cU] 
                                                                                | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0dU] 
                                                                                | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
    bufp->fullSData(oldp+36,(vlSelfRef.uart_top__DOT__regs__DOT__rf_count),9);
    bufp->fullSData(oldp+37,(vlSelfRef.uart_top__DOT__regs__DOT__counter_t),10);
    bufp->fullBit(oldp+38,((1U & (~ (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt))))));
    bufp->fullCData(oldp+39,(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt),8);
    bufp->fullCData(oldp+40,(vlSelfRef.uart_top__DOT__regs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+41,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0_d));
    bufp->fullBit(oldp+42,(vlSelfRef.uart_top__DOT__regs__DOT__lsr1_d));
    bufp->fullBit(oldp+43,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2_d));
    bufp->fullBit(oldp+44,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3_d));
    bufp->fullBit(oldp+45,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4_d));
    bufp->fullBit(oldp+46,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5_d));
    bufp->fullBit(oldp+47,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6_d));
    bufp->fullBit(oldp+48,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7_d));
    bufp->fullBit(oldp+49,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d));
    bufp->fullBit(oldp+50,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d));
    bufp->fullBit(oldp+51,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d));
    bufp->fullBit(oldp+52,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d));
    bufp->fullBit(oldp+53,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d));
    bufp->fullBit(oldp+54,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d)) 
                            & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int))));
    bufp->fullBit(oldp+55,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d)) 
                            & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int))));
    bufp->fullBit(oldp+56,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d)) 
                            & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int))));
    bufp->fullBit(oldp+57,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d)) 
                            & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int))));
    bufp->fullBit(oldp+58,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d)) 
                            & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int))));
    bufp->fullBit(oldp+59,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+60,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+61,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+62,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+63,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+64,(vlSelfRef.uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+65,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+66,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),8);
    bufp->fullIData(oldp+67,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i),32);
    bufp->fullCData(oldp+68,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0U]),3);
    bufp->fullCData(oldp+69,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [1U]),3);
    bufp->fullCData(oldp+70,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [2U]),3);
    bufp->fullCData(oldp+71,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [3U]),3);
    bufp->fullCData(oldp+72,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [4U]),3);
    bufp->fullCData(oldp+73,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]),3);
    bufp->fullCData(oldp+74,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [6U]),3);
    bufp->fullCData(oldp+75,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [7U]),3);
    bufp->fullCData(oldp+76,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [8U]),3);
    bufp->fullCData(oldp+77,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [9U]),3);
    bufp->fullCData(oldp+78,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0aU]),3);
    bufp->fullCData(oldp+79,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0bU]),3);
    bufp->fullCData(oldp+80,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0cU]),3);
    bufp->fullCData(oldp+81,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0dU]),3);
    bufp->fullCData(oldp+82,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0eU]),3);
    bufp->fullCData(oldp+83,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0x0fU]),3);
    bufp->fullBit(oldp+84,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+85,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is));
    bufp->fullBit(oldp+86,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is));
    bufp->fullBit(oldp+87,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is));
    bufp->fullBit(oldp+88,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wre));
    bufp->fullCData(oldp+89,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wbstate),2);
    bufp->fullCData(oldp+90,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is),8);
    bufp->fullCData(oldp+91,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is),3);
    bufp->fullBit(oldp+92,(vlSelfRef.uart_top__DOT__we_o));
    bufp->fullBit(oldp+93,(vlSelfRef.uart_top__DOT__regs__DOT__enable));
    bufp->fullCData(oldp+94,(vlSelfRef.uart_top__DOT__regs__DOT__lcr),8);
    bufp->fullSData(oldp+95,(vlSelfRef.uart_top__DOT__regs__DOT__dl),16);
    bufp->fullSData(oldp+96,(vlSelfRef.uart_top__DOT__regs__DOT__dlc),16);
    bufp->fullBit(oldp+97,(vlSelfRef.uart_top__DOT__regs__DOT__tx_reset));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                  >> 7U))));
    bufp->fullBit(oldp+99,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0));
    bufp->fullBit(oldp+100,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5));
    bufp->fullBit(oldp+101,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6));
    bufp->fullBit(oldp+102,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask));
    bufp->fullBit(oldp+103,(vlSelfRef.uart_top__DOT__regs__DOT__tf_push));
    bufp->fullBit(oldp+104,(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse));
    bufp->fullSData(oldp+105,(vlSelfRef.uart_top__DOT__regs__DOT__tf_count),9);
    bufp->fullCData(oldp+106,(vlSelfRef.uart_top__DOT__regs__DOT__tstate),3);
    bufp->fullCData(oldp+107,(vlSelfRef.uart_top__DOT__regs__DOT__rstate),4);
    bufp->fullCData(oldp+108,(vlSelfRef.uart_top__DOT__regs__DOT__block_value),8);
    bufp->fullBit(oldp+109,(vlSelfRef.uart_top__DOT__regs__DOT__serial_out));
    bufp->fullBit(oldp+110,(vlSelfRef.uart_top__DOT__regs__DOT__serial_in));
    bufp->fullBit(oldp+111,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+112,(vlSelfRef.uart_top__DOT__regs__DOT__iir_read));
    bufp->fullBit(oldp+113,(vlSelfRef.uart_top__DOT__regs__DOT__msr_read));
    bufp->fullBit(oldp+114,(vlSelfRef.uart_top__DOT__regs__DOT__fifo_read));
    bufp->fullBit(oldp+115,(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write));
    bufp->fullCData(oldp+116,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+117,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+118,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+119,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+120,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+121,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+122,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+123,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+124,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+125,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+126,((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+127,((7U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+128,((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+129,((0x0000000fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                              - (IData)(1U)))),4);
    bufp->fullSData(oldp+130,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+131,((0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value) 
                                              >> 2U))),8);
    bufp->fullCData(oldp+132,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),8);
    bufp->fullCData(oldp+133,((0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),8);
    bufp->fullCData(oldp+134,((0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                              >> 3U))),8);
    bufp->fullCData(oldp+135,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+136,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+137,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+138,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+139,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+140,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+141,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+142,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),8);
    bufp->fullCData(oldp+143,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),8);
    bufp->fullCData(oldp+144,((0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),8);
    bufp->fullBit(oldp+145,(vlSelfRef.wb_clk_i));
    bufp->fullBit(oldp+146,(vlSelfRef.wb_rst_i));
    bufp->fullCData(oldp+147,(vlSelfRef.wb_adr_i),3);
    bufp->fullCData(oldp+148,(vlSelfRef.wb_dat_i),8);
    bufp->fullCData(oldp+149,(vlSelfRef.wb_dat_o),8);
    bufp->fullBit(oldp+150,(vlSelfRef.wb_we_i));
    bufp->fullBit(oldp+151,(vlSelfRef.wb_stb_i));
    bufp->fullBit(oldp+152,(vlSelfRef.wb_cyc_i));
    bufp->fullCData(oldp+153,(vlSelfRef.wb_sel_i),4);
    bufp->fullBit(oldp+154,(vlSelfRef.wb_ack_o));
    bufp->fullBit(oldp+155,(vlSelfRef.int_o));
    bufp->fullBit(oldp+156,(vlSelfRef.srx_pad_i));
    bufp->fullBit(oldp+157,(vlSelfRef.stx_pad_o));
    bufp->fullBit(oldp+158,(vlSelfRef.rts_pad_o));
    bufp->fullBit(oldp+159,(vlSelfRef.cts_pad_i));
    bufp->fullBit(oldp+160,(vlSelfRef.dtr_pad_o));
    bufp->fullBit(oldp+161,(vlSelfRef.dsr_pad_i));
    bufp->fullBit(oldp+162,(vlSelfRef.ri_pad_i));
    bufp->fullBit(oldp+163,(vlSelfRef.dcd_pad_i));
    bufp->fullCData(oldp+164,((0x000000ffU & ((4U & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? (IData)(vlSelfRef.uart_top__DOT__regs__DOT__scratch)
                                                    : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? 
                                                   ((((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl)
                                                     : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))))),8);
    bufp->fullCData(oldp+165,(((((IData)(vlSelfRef.cts_pad_i) 
                                 << 3U) | ((IData)(vlSelfRef.dsr_pad_i) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.ri_pad_i) 
                                   << 1U) | (IData)(vlSelfRef.dcd_pad_i)))),4);
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelfRef.cts_pad_i)))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelfRef.dsr_pad_i)))));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelfRef.ri_pad_i)))));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelfRef.dcd_pad_i)))));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 3U))));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 2U))));
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+173,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    bufp->fullSData(oldp+174,((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                << 3U) | vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->fullCData(oldp+175,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
    bufp->fullCData(oldp+176,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
}

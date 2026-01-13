// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimple_spi_top__Syms.h"


VL_ATTR_COLD void Vsimple_spi_top___024root__trace_init_sub__TOP__0(Vsimple_spi_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_init_sub__TOP__0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+46,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+51,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"inta_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"ss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+58,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("simple_spi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"SS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+51,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"inta_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"ss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+58,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"spcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"spsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"sper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"treg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"ss_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+61,0,"rfdout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+36,0,"wfre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"rfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"rfre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"rffull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"rfempty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"wfdout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"wfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"wffull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"wfempty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"tirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"wfov",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"bcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1,0,"wb_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wb_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"spie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"spe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"dwom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cpol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cpha",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"spr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"icnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"spre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+44,0,"espr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"wr_spsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"spif",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"wcol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"clkcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+30,0,"ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("rfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"dw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,1);
    tracep->declBit(c+26,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,1);
    tracep->declBit(c+62,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,1);
    }
    tracep->popPrefix();
    tracep->declBus(c+17,0,"wp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"rp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"wp_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"wp_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"rp_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"gb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"dw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,1);
    tracep->declBit(c+66,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,1);
    tracep->declBit(c+36,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,1);
    }
    tracep->popPrefix();
    tracep->declBus(c+22,0,"wp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"rp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"wp_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"wp_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"rp_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"gb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_init_top(Vsimple_spi_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_init_top\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsimple_spi_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vsimple_spi_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsimple_spi_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsimple_spi_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_register(Vsimple_spi_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_register\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsimple_spi_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsimple_spi_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsimple_spi_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsimple_spi_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_const_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_const_0\n"); );
    // Body
    Vsimple_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_spi_top___024root*>(voidSelf);
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsimple_spi_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_const_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_const_0_sub_0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+74,(1U),32);
    bufp->fullIData(oldp+75,(8U),32);
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_full_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_full_0\n"); );
    // Body
    Vsimple_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_spi_top___024root*>(voidSelf);
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsimple_spi_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_full_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_full_0_sub_0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.simple_spi__DOT__wb_acc));
    bufp->fullBit(oldp+2,(vlSelfRef.simple_spi__DOT__wb_wr));
    bufp->fullBit(oldp+3,(vlSelfRef.simple_spi__DOT__wr_spsr));
    bufp->fullCData(oldp+4,(vlSelfRef.simple_spi__DOT__sper),8);
    bufp->fullBit(oldp+5,(vlSelfRef.simple_spi__DOT__ss_r));
    bufp->fullCData(oldp+6,((3U & ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                   >> 6U))),2);
    bufp->fullCData(oldp+7,((3U & (IData)(vlSelfRef.simple_spi__DOT__sper))),2);
    bufp->fullBit(oldp+8,(vlSelfRef.simple_spi__DOT__spif));
    bufp->fullBit(oldp+9,(vlSelfRef.simple_spi__DOT__wcol));
    bufp->fullCData(oldp+10,(vlSelfRef.simple_spi__DOT__tcnt),2);
    bufp->fullCData(oldp+11,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[3]),8);
    bufp->fullBit(oldp+15,(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb));
    bufp->fullBit(oldp+16,(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb));
    bufp->fullCData(oldp+17,(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp),2);
    bufp->fullCData(oldp+18,(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp),2);
    bufp->fullCData(oldp+19,((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)))),2);
    bufp->fullCData(oldp+20,((3U & ((IData)(2U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)))),2);
    bufp->fullCData(oldp+21,((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp)))),2);
    bufp->fullCData(oldp+22,(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp),2);
    bufp->fullCData(oldp+23,((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)))),2);
    bufp->fullCData(oldp+24,((3U & ((IData)(2U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)))),2);
    bufp->fullCData(oldp+25,(vlSelfRef.simple_spi__DOT__treg),8);
    bufp->fullBit(oldp+26,(vlSelfRef.simple_spi__DOT__rfwe));
    bufp->fullCData(oldp+27,(vlSelfRef.simple_spi__DOT__state),2);
    bufp->fullCData(oldp+28,(vlSelfRef.simple_spi__DOT__bcnt),3);
    bufp->fullSData(oldp+29,(vlSelfRef.simple_spi__DOT__clkcnt),12);
    bufp->fullBit(oldp+30,((1U & (~ (0U != (IData)(vlSelfRef.simple_spi__DOT__clkcnt))))));
    bufp->fullCData(oldp+31,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[3]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.simple_spi__DOT__spcr),8);
    bufp->fullBit(oldp+36,(vlSelfRef.simple_spi__DOT__wfre));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 7U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 6U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 5U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 3U))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                  >> 2U))));
    bufp->fullCData(oldp+43,((3U & (IData)(vlSelfRef.simple_spi__DOT__spcr))),2);
    bufp->fullCData(oldp+44,(vlSelfRef.simple_spi__DOT__espr),4);
    bufp->fullBit(oldp+45,((1U & (~ ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 6U)))));
    bufp->fullBit(oldp+46,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+47,(vlSelfRef.rst_i));
    bufp->fullBit(oldp+48,(vlSelfRef.cyc_i));
    bufp->fullBit(oldp+49,(vlSelfRef.stb_i));
    bufp->fullCData(oldp+50,(vlSelfRef.adr_i),3);
    bufp->fullBit(oldp+51,(vlSelfRef.we_i));
    bufp->fullCData(oldp+52,(vlSelfRef.dat_i),8);
    bufp->fullCData(oldp+53,(vlSelfRef.dat_o),8);
    bufp->fullBit(oldp+54,(vlSelfRef.ack_o));
    bufp->fullBit(oldp+55,(vlSelfRef.inta_o));
    bufp->fullBit(oldp+56,(vlSelfRef.sck_o));
    bufp->fullBit(oldp+57,(vlSelfRef.ss_o));
    bufp->fullBit(oldp+58,(vlSelfRef.mosi_o));
    bufp->fullBit(oldp+59,(vlSelfRef.miso_i));
    bufp->fullCData(oldp+60,((((IData)(vlSelfRef.simple_spi__DOT__spif) 
                               << 7U) | (((IData)(vlSelfRef.simple_spi__DOT__wcol) 
                                          << 6U) | 
                                         ((((IData)(vlSelfRef.simple_spi__DOT__wffull) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.simple_spi__DOT__wfempty) 
                                              << 2U)) 
                                          | ((((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                                               & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                                & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0))))))),8);
    bufp->fullCData(oldp+61,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem
                             [vlSelfRef.simple_spi__DOT__rfifo__DOT__rp]),8);
    bufp->fullBit(oldp+62,(vlSelfRef.simple_spi__DOT__rfre));
    bufp->fullBit(oldp+63,(((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                            & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb))));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                            & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0))));
    bufp->fullCData(oldp+65,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem
                             [vlSelfRef.simple_spi__DOT__wfifo__DOT__rp]),8);
    bufp->fullBit(oldp+66,(vlSelfRef.simple_spi__DOT__wfwe));
    bufp->fullBit(oldp+67,(vlSelfRef.simple_spi__DOT__wffull));
    bufp->fullBit(oldp+68,(vlSelfRef.simple_spi__DOT__wfempty));
    bufp->fullBit(oldp+69,(((~ (0U != (IData)(vlSelfRef.simple_spi__DOT__tcnt))) 
                            & (IData)(vlSelfRef.simple_spi__DOT__rfwe))));
    bufp->fullBit(oldp+70,(((IData)(vlSelfRef.simple_spi__DOT__wfwe) 
                            & (IData)(vlSelfRef.simple_spi__DOT__wffull))));
    bufp->fullBit(oldp+71,((1U & (~ (IData)(vlSelfRef.rst_i)))));
    bufp->fullCData(oldp+72,(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp),2);
    bufp->fullCData(oldp+73,((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp)))),2);
}

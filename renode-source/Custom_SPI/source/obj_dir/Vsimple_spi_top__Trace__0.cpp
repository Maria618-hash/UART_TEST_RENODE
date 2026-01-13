// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimple_spi_top__Syms.h"


void Vsimple_spi_top___024root__trace_chg_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsimple_spi_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_chg_0\n"); );
    // Body
    Vsimple_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_spi_top___024root*>(voidSelf);
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsimple_spi_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_spi_top___024root__trace_chg_0_sub_0(Vsimple_spi_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_chg_0_sub_0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.simple_spi__DOT__wb_acc));
        bufp->chgBit(oldp+1,(vlSelfRef.simple_spi__DOT__wb_wr));
        bufp->chgBit(oldp+2,(vlSelfRef.simple_spi__DOT__wr_spsr));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+3,(vlSelfRef.simple_spi__DOT__sper),8);
        bufp->chgBit(oldp+4,(vlSelfRef.simple_spi__DOT__ss_r));
        bufp->chgCData(oldp+5,((3U & ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                      >> 6U))),2);
        bufp->chgCData(oldp+6,((3U & (IData)(vlSelfRef.simple_spi__DOT__sper))),2);
        bufp->chgBit(oldp+7,(vlSelfRef.simple_spi__DOT__spif));
        bufp->chgBit(oldp+8,(vlSelfRef.simple_spi__DOT__wcol));
        bufp->chgCData(oldp+9,(vlSelfRef.simple_spi__DOT__tcnt),2);
        bufp->chgCData(oldp+10,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[3]),8);
        bufp->chgBit(oldp+14,(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb));
        bufp->chgBit(oldp+15,(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+16,(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp),2);
        bufp->chgCData(oldp+17,(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp),2);
        bufp->chgCData(oldp+18,((3U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)))),2);
        bufp->chgCData(oldp+19,((3U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)))),2);
        bufp->chgCData(oldp+20,((3U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp)))),2);
        bufp->chgCData(oldp+21,(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp),2);
        bufp->chgCData(oldp+22,((3U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)))),2);
        bufp->chgCData(oldp+23,((3U & ((IData)(2U) 
                                       + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+24,(vlSelfRef.simple_spi__DOT__treg),8);
        bufp->chgBit(oldp+25,(vlSelfRef.simple_spi__DOT__rfwe));
        bufp->chgCData(oldp+26,(vlSelfRef.simple_spi__DOT__state),2);
        bufp->chgCData(oldp+27,(vlSelfRef.simple_spi__DOT__bcnt),3);
        bufp->chgSData(oldp+28,(vlSelfRef.simple_spi__DOT__clkcnt),12);
        bufp->chgBit(oldp+29,((1U & (~ (0U != (IData)(vlSelfRef.simple_spi__DOT__clkcnt))))));
        bufp->chgCData(oldp+30,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[3]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+34,(vlSelfRef.simple_spi__DOT__spcr),8);
        bufp->chgBit(oldp+35,(vlSelfRef.simple_spi__DOT__wfre));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 7U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 6U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 4U))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 3U))));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                     >> 2U))));
        bufp->chgCData(oldp+42,((3U & (IData)(vlSelfRef.simple_spi__DOT__spcr))),2);
        bufp->chgCData(oldp+43,(vlSelfRef.simple_spi__DOT__espr),4);
        bufp->chgBit(oldp+44,((1U & (~ ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                        >> 6U)))));
    }
    bufp->chgBit(oldp+45,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+46,(vlSelfRef.rst_i));
    bufp->chgBit(oldp+47,(vlSelfRef.cyc_i));
    bufp->chgBit(oldp+48,(vlSelfRef.stb_i));
    bufp->chgCData(oldp+49,(vlSelfRef.adr_i),3);
    bufp->chgBit(oldp+50,(vlSelfRef.we_i));
    bufp->chgCData(oldp+51,(vlSelfRef.dat_i),8);
    bufp->chgCData(oldp+52,(vlSelfRef.dat_o),8);
    bufp->chgBit(oldp+53,(vlSelfRef.ack_o));
    bufp->chgBit(oldp+54,(vlSelfRef.inta_o));
    bufp->chgBit(oldp+55,(vlSelfRef.sck_o));
    bufp->chgBit(oldp+56,(vlSelfRef.ss_o));
    bufp->chgBit(oldp+57,(vlSelfRef.mosi_o));
    bufp->chgBit(oldp+58,(vlSelfRef.miso_i));
    bufp->chgCData(oldp+59,((((IData)(vlSelfRef.simple_spi__DOT__spif) 
                              << 7U) | (((IData)(vlSelfRef.simple_spi__DOT__wcol) 
                                         << 6U) | (
                                                   (((IData)(vlSelfRef.simple_spi__DOT__wffull) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.simple_spi__DOT__wfempty) 
                                                       << 2U)) 
                                                   | ((((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                                                        & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                                       << 1U) 
                                                      | ((~ (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0))))))),8);
    bufp->chgCData(oldp+60,(vlSelfRef.simple_spi__DOT__rfifo__DOT__mem
                            [vlSelfRef.simple_spi__DOT__rfifo__DOT__rp]),8);
    bufp->chgBit(oldp+61,(vlSelfRef.simple_spi__DOT__rfre));
    bufp->chgBit(oldp+62,(((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                           & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb))));
    bufp->chgBit(oldp+63,(((~ (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                           & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0))));
    bufp->chgCData(oldp+64,(vlSelfRef.simple_spi__DOT__wfifo__DOT__mem
                            [vlSelfRef.simple_spi__DOT__wfifo__DOT__rp]),8);
    bufp->chgBit(oldp+65,(vlSelfRef.simple_spi__DOT__wfwe));
    bufp->chgBit(oldp+66,(vlSelfRef.simple_spi__DOT__wffull));
    bufp->chgBit(oldp+67,(vlSelfRef.simple_spi__DOT__wfempty));
    bufp->chgBit(oldp+68,(((~ (0U != (IData)(vlSelfRef.simple_spi__DOT__tcnt))) 
                           & (IData)(vlSelfRef.simple_spi__DOT__rfwe))));
    bufp->chgBit(oldp+69,(((IData)(vlSelfRef.simple_spi__DOT__wfwe) 
                           & (IData)(vlSelfRef.simple_spi__DOT__wffull))));
    bufp->chgBit(oldp+70,((1U & (~ (IData)(vlSelfRef.rst_i)))));
    bufp->chgCData(oldp+71,(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp),2);
    bufp->chgCData(oldp+72,((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp)))),2);
}

void Vsimple_spi_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root__trace_cleanup\n"); );
    // Body
    Vsimple_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_spi_top___024root*>(voidSelf);
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

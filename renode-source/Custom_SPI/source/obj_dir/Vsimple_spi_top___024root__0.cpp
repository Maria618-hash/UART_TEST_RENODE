// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_spi_top.h for the primary calling header

#include "Vsimple_spi_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsimple_spi_top___024root___eval_triggers__ico(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_triggers__ico\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_spi_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vsimple_spi_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsimple_spi_top___024root___ico_sequent__TOP__0(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___ico_sequent__TOP__0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_spi__DOT__wb_acc = ((IData)(vlSelfRef.cyc_i) 
                                         & (IData)(vlSelfRef.stb_i));
    vlSelfRef.simple_spi__DOT__wb_wr = ((IData)(vlSelfRef.simple_spi__DOT__wb_acc) 
                                        & (IData)(vlSelfRef.we_i));
    vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__wb_acc) 
           & ((2U == (IData)(vlSelfRef.adr_i)) & (IData)(vlSelfRef.ack_o)));
    vlSelfRef.simple_spi__DOT__wr_spsr = ((IData)(vlSelfRef.simple_spi__DOT__wb_wr) 
                                          & (1U == (IData)(vlSelfRef.adr_i)));
    vlSelfRef.simple_spi__DOT__rfre = ((~ (IData)(vlSelfRef.we_i)) 
                                       & (IData)(vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0));
    vlSelfRef.simple_spi__DOT__wfwe = ((IData)(vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0) 
                                       & (IData)(vlSelfRef.we_i));
}

void Vsimple_spi_top___024root___eval_ico(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_ico\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vsimple_spi_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vsimple_spi_top___024root___eval_phase__ico(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_phase__ico\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsimple_spi_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vsimple_spi_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vsimple_spi_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsimple_spi_top___024root___eval_triggers__act(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_triggers__act\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.rst_i) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_i__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk_i) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_i__0 = vlSelfRef.rst_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_spi_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsimple_spi_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsimple_spi_top___024root___nba_sequent__TOP__0(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_sequent__TOP__0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__simple_spi__DOT__spif;
    __Vdly__simple_spi__DOT__spif = 0;
    CData/*0:0*/ __Vdly__simple_spi__DOT__wcol;
    __Vdly__simple_spi__DOT__wcol = 0;
    CData/*7:0*/ __VdlyVal__simple_spi__DOT__rfifo__DOT__mem__v0;
    __VdlyVal__simple_spi__DOT__rfifo__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__simple_spi__DOT__rfifo__DOT__mem__v0;
    __VdlyDim0__simple_spi__DOT__rfifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_spi__DOT__rfifo__DOT__mem__v0;
    __VdlySet__simple_spi__DOT__rfifo__DOT__mem__v0 = 0;
    // Body
    vlSelfRef.__Vdly__simple_spi__DOT__clkcnt = vlSelfRef.simple_spi__DOT__clkcnt;
    __Vdly__simple_spi__DOT__wcol = vlSelfRef.simple_spi__DOT__wcol;
    vlSelfRef.__VdlySet__simple_spi__DOT__wfifo__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__simple_spi__DOT__state = vlSelfRef.simple_spi__DOT__state;
    vlSelfRef.__Vdly__simple_spi__DOT__bcnt = vlSelfRef.simple_spi__DOT__bcnt;
    vlSelfRef.__Vdly__simple_spi__DOT__wfre = vlSelfRef.simple_spi__DOT__wfre;
    vlSelfRef.__Vdly__sck_o = vlSelfRef.sck_o;
    vlSelfRef.__Vdly__simple_spi__DOT__treg = vlSelfRef.simple_spi__DOT__treg;
    __Vdly__simple_spi__DOT__spif = vlSelfRef.simple_spi__DOT__spif;
    __VdlySet__simple_spi__DOT__rfifo__DOT__mem__v0 = 0U;
    vlSelfRef.ack_o = ((~ (IData)(vlSelfRef.rst_i)) 
                       & ((IData)(vlSelfRef.simple_spi__DOT__wb_acc) 
                          & (~ (IData)(vlSelfRef.ack_o))));
    vlSelfRef.__Vdly__simple_spi__DOT__clkcnt = (0x00000fffU 
                                                 & ((((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                                      >> 6U) 
                                                     & ((0U 
                                                         != (IData)(vlSelfRef.simple_spi__DOT__clkcnt)) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.simple_spi__DOT__state))))
                                                     ? 
                                                    ((IData)(vlSelfRef.simple_spi__DOT__clkcnt) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                       ? 0x0fffU
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 0x07ffU
                                                         : 0x03ffU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 0x01ffU
                                                         : 0x00ffU)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 0x007fU
                                                         : 0x003fU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 7U
                                                         : 0x001fU))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 0x000fU
                                                         : 3U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.simple_spi__DOT__espr))
                                                         ? 1U
                                                         : 0U))))));
    __Vdly__simple_spi__DOT__wcol = ((~ ((~ ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                             >> 6U)) 
                                         | (IData)(vlSelfRef.rst_i))) 
                                     & ((((IData)(vlSelfRef.simple_spi__DOT__wfwe) 
                                          & (IData)(vlSelfRef.simple_spi__DOT__wffull)) 
                                         | (IData)(vlSelfRef.simple_spi__DOT__wcol)) 
                                        & (~ ((IData)(vlSelfRef.simple_spi__DOT__wr_spsr) 
                                              & ((IData)(vlSelfRef.dat_i) 
                                                 >> 6U)))));
    if (vlSelfRef.simple_spi__DOT__wfwe) {
        vlSelfRef.__VdlyVal__simple_spi__DOT__wfifo__DOT__mem__v0 
            = vlSelfRef.dat_i;
        vlSelfRef.__VdlyDim0__simple_spi__DOT__wfifo__DOT__mem__v0 
            = vlSelfRef.simple_spi__DOT__wfifo__DOT__wp;
        vlSelfRef.__VdlySet__simple_spi__DOT__wfifo__DOT__mem__v0 = 1U;
    }
    __Vdly__simple_spi__DOT__spif = ((~ ((~ ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                             >> 6U)) 
                                         | (IData)(vlSelfRef.rst_i))) 
                                     & ((((~ (0U != (IData)(vlSelfRef.simple_spi__DOT__tcnt))) 
                                          & (IData)(vlSelfRef.simple_spi__DOT__rfwe)) 
                                         | (IData)(vlSelfRef.simple_spi__DOT__spif)) 
                                        & (~ ((IData)(vlSelfRef.simple_spi__DOT__wr_spsr) 
                                              & ((IData)(vlSelfRef.dat_i) 
                                                 >> 7U)))));
    if ((0x00000040U & (IData)(vlSelfRef.simple_spi__DOT__spcr))) {
        if (vlSelfRef.simple_spi__DOT__rfwe) {
            vlSelfRef.simple_spi__DOT__tcnt = (3U & 
                                               ((0U 
                                                 != (IData)(vlSelfRef.simple_spi__DOT__tcnt))
                                                 ? 
                                                ((IData)(vlSelfRef.simple_spi__DOT__tcnt) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                                 >> 6U)));
        }
    } else {
        vlSelfRef.simple_spi__DOT__tcnt = (3U & ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                                 >> 6U));
    }
    if (vlSelfRef.simple_spi__DOT__rfwe) {
        __VdlyVal__simple_spi__DOT__rfifo__DOT__mem__v0 
            = vlSelfRef.simple_spi__DOT__treg;
        __VdlyDim0__simple_spi__DOT__rfifo__DOT__mem__v0 
            = vlSelfRef.simple_spi__DOT__rfifo__DOT__wp;
        __VdlySet__simple_spi__DOT__rfifo__DOT__mem__v0 = 1U;
    }
    vlSelfRef.inta_o = ((IData)(vlSelfRef.simple_spi__DOT__spif) 
                        & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                           >> 7U));
    vlSelfRef.dat_o = ((4U & (IData)(vlSelfRef.adr_i))
                        ? ((2U & (IData)(vlSelfRef.adr_i))
                            ? 0U : ((1U & (IData)(vlSelfRef.adr_i))
                                     ? 0U : (IData)(vlSelfRef.simple_spi__DOT__ss_r)))
                        : ((2U & (IData)(vlSelfRef.adr_i))
                            ? ((1U & (IData)(vlSelfRef.adr_i))
                                ? (IData)(vlSelfRef.simple_spi__DOT__sper)
                                : vlSelfRef.simple_spi__DOT__rfifo__DOT__mem
                               [vlSelfRef.simple_spi__DOT__rfifo__DOT__rp])
                            : ((1U & (IData)(vlSelfRef.adr_i))
                                ? (((IData)(vlSelfRef.simple_spi__DOT__spif) 
                                    << 7U) | (((IData)(vlSelfRef.simple_spi__DOT__wcol) 
                                               << 6U) 
                                              | ((((IData)(vlSelfRef.simple_spi__DOT__wffull) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.simple_spi__DOT__wfempty) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                                                      & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                                     << 1U) 
                                                    | ((~ (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__gb)) 
                                                       & (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0))))))
                                : (IData)(vlSelfRef.simple_spi__DOT__spcr))));
    if (vlSelfRef.rst_i) {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__gb = 0U;
        vlSelfRef.simple_spi__DOT__ss_r = 0U;
        vlSelfRef.simple_spi__DOT__sper = 0U;
        vlSelfRef.simple_spi__DOT__rfifo__DOT__gb = 0U;
    } else {
        if ((0x00000040U & (IData)(vlSelfRef.simple_spi__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp))) 
                  == (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp)) 
                 & (IData)(vlSelfRef.simple_spi__DOT__wfwe))) {
                vlSelfRef.simple_spi__DOT__wfifo__DOT__gb = 1U;
            } else if (vlSelfRef.simple_spi__DOT__wfre) {
                vlSelfRef.simple_spi__DOT__wfifo__DOT__gb = 0U;
            }
            if ((((3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp))) 
                  == (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp)) 
                 & (IData)(vlSelfRef.simple_spi__DOT__rfwe))) {
                vlSelfRef.simple_spi__DOT__rfifo__DOT__gb = 1U;
            } else if (vlSelfRef.simple_spi__DOT__rfre) {
                vlSelfRef.simple_spi__DOT__rfifo__DOT__gb = 0U;
            }
        } else {
            vlSelfRef.simple_spi__DOT__wfifo__DOT__gb = 0U;
            vlSelfRef.simple_spi__DOT__rfifo__DOT__gb = 0U;
        }
        if (vlSelfRef.simple_spi__DOT__wb_wr) {
            if ((4U == (IData)(vlSelfRef.adr_i))) {
                vlSelfRef.simple_spi__DOT__ss_r = (1U 
                                                   & (IData)(vlSelfRef.dat_i));
            }
            if ((3U == (IData)(vlSelfRef.adr_i))) {
                vlSelfRef.simple_spi__DOT__sper = vlSelfRef.dat_i;
            }
        }
    }
    vlSelfRef.simple_spi__DOT__wcol = __Vdly__simple_spi__DOT__wcol;
    if (__VdlySet__simple_spi__DOT__rfifo__DOT__mem__v0) {
        vlSelfRef.simple_spi__DOT__rfifo__DOT__mem[__VdlyDim0__simple_spi__DOT__rfifo__DOT__mem__v0] 
            = __VdlyVal__simple_spi__DOT__rfifo__DOT__mem__v0;
    }
    vlSelfRef.simple_spi__DOT__spif = __Vdly__simple_spi__DOT__spif;
    vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__wb_acc) 
           & ((2U == (IData)(vlSelfRef.adr_i)) & (IData)(vlSelfRef.ack_o)));
    vlSelfRef.ss_o = (1U & (~ (IData)(vlSelfRef.simple_spi__DOT__ss_r)));
}

void Vsimple_spi_top___024root___nba_sequent__TOP__1(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_sequent__TOP__1\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_i) {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__wp = 0U;
        vlSelfRef.simple_spi__DOT__rfifo__DOT__rp = 0U;
        vlSelfRef.simple_spi__DOT__rfifo__DOT__wp = 0U;
    } else if ((0x00000040U & (IData)(vlSelfRef.simple_spi__DOT__spcr))) {
        if (vlSelfRef.simple_spi__DOT__wfwe) {
            vlSelfRef.simple_spi__DOT__wfifo__DOT__wp 
                = vlSelfRef.simple_spi__DOT__wfifo__DOT__wp_p1;
        }
        if (vlSelfRef.simple_spi__DOT__rfre) {
            vlSelfRef.simple_spi__DOT__rfifo__DOT__rp 
                = vlSelfRef.simple_spi__DOT__rfifo__DOT__rp_p1;
        }
        if (vlSelfRef.simple_spi__DOT__rfwe) {
            vlSelfRef.simple_spi__DOT__rfifo__DOT__wp 
                = vlSelfRef.simple_spi__DOT__rfifo__DOT__wp_p1;
        }
    } else {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__wp = 0U;
        vlSelfRef.simple_spi__DOT__rfifo__DOT__rp = 0U;
        vlSelfRef.simple_spi__DOT__rfifo__DOT__wp = 0U;
    }
    vlSelfRef.simple_spi__DOT__wfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)));
    vlSelfRef.simple_spi__DOT__rfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp)));
    vlSelfRef.simple_spi__DOT__rfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)));
    vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp) 
           == (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp));
}

void Vsimple_spi_top___024root___nba_sequent__TOP__2(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_sequent__TOP__2\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_spi__DOT__wfwe = ((IData)(vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0) 
                                       & (IData)(vlSelfRef.we_i));
    vlSelfRef.simple_spi__DOT__rfre = ((~ (IData)(vlSelfRef.we_i)) 
                                       & (IData)(vlSelfRef.simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0));
    if ((1U & ((~ ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                   >> 6U)) | (IData)(vlSelfRef.rst_i)))) {
        vlSelfRef.__Vdly__simple_spi__DOT__state = 0U;
        vlSelfRef.__Vdly__simple_spi__DOT__bcnt = 0U;
        vlSelfRef.__Vdly__simple_spi__DOT__treg = 0U;
        vlSelfRef.__Vdly__simple_spi__DOT__wfre = 0U;
        vlSelfRef.simple_spi__DOT__rfwe = 0U;
        vlSelfRef.__Vdly__sck_o = 0U;
    } else {
        vlSelfRef.__Vdly__simple_spi__DOT__wfre = 0U;
        vlSelfRef.simple_spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelfRef.simple_spi__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.simple_spi__DOT__state))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.simple_spi__DOT__clkcnt))))) {
                    vlSelfRef.__Vdly__simple_spi__DOT__treg 
                        = ((0x000000feU & ((IData)(vlSelfRef.simple_spi__DOT__treg) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.miso_i));
                    vlSelfRef.__Vdly__simple_spi__DOT__bcnt 
                        = (7U & ((IData)(vlSelfRef.simple_spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelfRef.simple_spi__DOT__bcnt))) {
                        vlSelfRef.__Vdly__sck_o = (1U 
                                                   & (~ (IData)(vlSelfRef.sck_o)));
                        vlSelfRef.__Vdly__simple_spi__DOT__state = 1U;
                    } else {
                        vlSelfRef.__Vdly__simple_spi__DOT__state = 0U;
                        vlSelfRef.__Vdly__sck_o = (1U 
                                                   & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                                      >> 3U));
                        vlSelfRef.simple_spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__simple_spi__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.simple_spi__DOT__state))) {
            if ((1U & (~ (0U != (IData)(vlSelfRef.simple_spi__DOT__clkcnt))))) {
                vlSelfRef.__Vdly__sck_o = (1U & (~ (IData)(vlSelfRef.sck_o)));
                vlSelfRef.__Vdly__simple_spi__DOT__state = 3U;
            }
        } else {
            vlSelfRef.__Vdly__sck_o = (1U & ((IData)(vlSelfRef.simple_spi__DOT__spcr) 
                                             >> 3U));
            vlSelfRef.__Vdly__simple_spi__DOT__bcnt = 7U;
            vlSelfRef.__Vdly__simple_spi__DOT__treg 
                = vlSelfRef.simple_spi__DOT__wfifo__DOT__mem
                [vlSelfRef.simple_spi__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelfRef.simple_spi__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelfRef.simple_spi__DOT__spcr))) {
                    vlSelfRef.__Vdly__sck_o = (1U & 
                                               (~ (IData)(vlSelfRef.sck_o)));
                }
                vlSelfRef.__Vdly__simple_spi__DOT__wfre = 1U;
                vlSelfRef.__Vdly__simple_spi__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.simple_spi__DOT__bcnt = vlSelfRef.__Vdly__simple_spi__DOT__bcnt;
    vlSelfRef.sck_o = vlSelfRef.__Vdly__sck_o;
    vlSelfRef.simple_spi__DOT__state = vlSelfRef.__Vdly__simple_spi__DOT__state;
    vlSelfRef.simple_spi__DOT__clkcnt = vlSelfRef.__Vdly__simple_spi__DOT__clkcnt;
    if (vlSelfRef.__VdlySet__simple_spi__DOT__wfifo__DOT__mem__v0) {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__mem[vlSelfRef.__VdlyDim0__simple_spi__DOT__wfifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__simple_spi__DOT__wfifo__DOT__mem__v0;
    }
    vlSelfRef.simple_spi__DOT__treg = vlSelfRef.__Vdly__simple_spi__DOT__treg;
    vlSelfRef.mosi_o = (1U & ((IData)(vlSelfRef.simple_spi__DOT__treg) 
                              >> 7U));
}

void Vsimple_spi_top___024root___nba_sequent__TOP__3(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_sequent__TOP__3\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_i) {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__rp = 0U;
    } else if ((0x00000040U & (IData)(vlSelfRef.simple_spi__DOT__spcr))) {
        if (vlSelfRef.simple_spi__DOT__wfre) {
            vlSelfRef.simple_spi__DOT__wfifo__DOT__rp 
                = vlSelfRef.simple_spi__DOT__wfifo__DOT__rp_p1;
        }
    } else {
        vlSelfRef.simple_spi__DOT__wfifo__DOT__rp = 0U;
    }
    vlSelfRef.simple_spi__DOT__wfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp)));
    vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp));
}

void Vsimple_spi_top___024root___nba_sequent__TOP__4(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_sequent__TOP__4\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_spi__DOT__wfre = vlSelfRef.__Vdly__simple_spi__DOT__wfre;
    if (vlSelfRef.rst_i) {
        vlSelfRef.simple_spi__DOT__spcr = 0x10U;
    } else if (vlSelfRef.simple_spi__DOT__wb_wr) {
        if ((0U == (IData)(vlSelfRef.adr_i))) {
            vlSelfRef.simple_spi__DOT__spcr = (0x10U 
                                               | (IData)(vlSelfRef.dat_i));
        }
    }
    vlSelfRef.simple_spi__DOT__espr = ((0x0000000cU 
                                        & ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                           << 2U)) 
                                       | (3U & (IData)(vlSelfRef.simple_spi__DOT__spcr)));
}

void Vsimple_spi_top___024root___nba_comb__TOP__0(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___nba_comb__TOP__0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_spi__DOT__wffull = ((IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                                         & (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb));
    vlSelfRef.simple_spi__DOT__wfempty = ((~ (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb)) 
                                          & (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0));
}

void Vsimple_spi_top___024root___eval_nba(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_nba\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_spi_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vsimple_spi_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsimple_spi_top___024root___eval_phase__act(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_phase__act\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsimple_spi_top___024root___eval_triggers__act(vlSelf);
    Vsimple_spi_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vsimple_spi_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsimple_spi_top___024root___eval_phase__nba(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_phase__nba\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsimple_spi_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsimple_spi_top___024root___eval_nba(vlSelf);
        Vsimple_spi_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsimple_spi_top___024root___eval(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_spi_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("simple_spi_top.v", 69, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vsimple_spi_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_spi_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("simple_spi_top.v", 69, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsimple_spi_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("simple_spi_top.v", 69, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsimple_spi_top___024root___eval_phase__act(vlSelf));
    } while (Vsimple_spi_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsimple_spi_top___024root___eval_debug_assertions(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_debug_assertions\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_i & 0xfeU)))) {
        Verilated::overWidthError("rst_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.cyc_i & 0xfeU)))) {
        Verilated::overWidthError("cyc_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.stb_i & 0xfeU)))) {
        Verilated::overWidthError("stb_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.adr_i & 0xf8U)))) {
        Verilated::overWidthError("adr_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.we_i & 0xfeU)))) {
        Verilated::overWidthError("we_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.miso_i & 0xfeU)))) {
        Verilated::overWidthError("miso_i");
    }
}
#endif  // VL_DEBUG

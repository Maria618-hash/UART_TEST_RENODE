// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top.h for the primary calling header

#include "Vuart_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_top___024root___eval_triggers__ico(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_triggers__ico\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vuart_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___trigger_anySet__ico\n"); );
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

void Vuart_top___024root___ico_sequent__TOP__0(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___ico_sequent__TOP__0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr))
                                                 ? 
                                                ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 
                                                ((((IData)(vlSelfRef.cts_pad_i) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.dsr_pad_i) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.ri_pad_i) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.dcd_pad_i))));
}

void Vuart_top___024root___eval_ico(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_ico\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vuart_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vuart_top___024root___eval_phase__ico(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_phase__ico\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vuart_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vuart_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vuart_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_top___024root___eval_triggers__act(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_triggers__act\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.wb_rst_i) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wb_rst_i__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.wb_clk_i) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0 = vlSelfRef.wb_clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__wb_rst_i__0 = vlSelfRef.wb_rst_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vuart_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vuart_top__ConstPool__TABLE_hfe0a76eb_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vuart_top__ConstPool__TABLE_hf2e16bbf_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vuart_top__ConstPool__TABLE_h973921df_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vuart_top__ConstPool__TABLE_hc518cd25_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vuart_top__ConstPool__TABLE_h2f4a0a86_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vuart_top__ConstPool__TABLE_h6f4cb3c7_0;

void Vuart_top___024root___nba_sequent__TOP__0(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___nba_sequent__TOP__0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__rf_pop;
    __Vdly__uart_top__DOT__regs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__msi_reset;
    __Vdly__uart_top__DOT__regs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__msr;
    __Vdly__uart_top__DOT__regs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr0r;
    __Vdly__uart_top__DOT__regs__DOT__lsr0r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr1r;
    __Vdly__uart_top__DOT__regs__DOT__lsr1r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr2r;
    __Vdly__uart_top__DOT__regs__DOT__lsr2r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr3r;
    __Vdly__uart_top__DOT__regs__DOT__lsr3r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr4r;
    __Vdly__uart_top__DOT__regs__DOT__lsr4r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr5r;
    __Vdly__uart_top__DOT__regs__DOT__lsr5r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr6r;
    __Vdly__uart_top__DOT__regs__DOT__lsr6r = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__lsr7r;
    __Vdly__uart_top__DOT__regs__DOT__lsr7r = 0;
    CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__block_cnt;
    __Vdly__uart_top__DOT__regs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__rls_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__rda_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__thre_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__ms_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__ti_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__ti_int_pnd = 0;
    SData/*9:0*/ __Vdly__uart_top__DOT__regs__DOT__counter_t;
    __Vdly__uart_top__DOT__regs__DOT__counter_t = 0;
    CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    SData/*8:0*/ __Vdly__uart_top__DOT__regs__DOT__rf_count;
    __Vdly__uart_top__DOT__regs__DOT__rf_count = 0;
    CData/*2:0*/ __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1;
    __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1 = 0;
    CData/*2:0*/ __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2;
    __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 = 0;
    CData/*7:0*/ __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2;
    __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 = 0;
    // Body
    __Vdly__uart_top__DOT__regs__DOT__msi_reset = vlSelfRef.uart_top__DOT__regs__DOT__msi_reset;
    __Vdly__uart_top__DOT__regs__DOT__lsr6r = vlSelfRef.uart_top__DOT__regs__DOT__lsr6r;
    __Vdly__uart_top__DOT__regs__DOT__lsr7r = vlSelfRef.uart_top__DOT__regs__DOT__lsr7r;
    __Vdly__uart_top__DOT__regs__DOT__lsr5r = vlSelfRef.uart_top__DOT__regs__DOT__lsr5r;
    __Vdly__uart_top__DOT__regs__DOT__lsr2r = vlSelfRef.uart_top__DOT__regs__DOT__lsr2r;
    __Vdly__uart_top__DOT__regs__DOT__lsr3r = vlSelfRef.uart_top__DOT__regs__DOT__lsr3r;
    __Vdly__uart_top__DOT__regs__DOT__lsr4r = vlSelfRef.uart_top__DOT__regs__DOT__lsr4r;
    __Vdly__uart_top__DOT__regs__DOT__msr = vlSelfRef.uart_top__DOT__regs__DOT__msr;
    __Vdly__uart_top__DOT__regs__DOT__lsr0r = vlSelfRef.uart_top__DOT__regs__DOT__lsr0r;
    __Vdly__uart_top__DOT__regs__DOT__rf_pop = vlSelfRef.uart_top__DOT__regs__DOT__rf_pop;
    __Vdly__uart_top__DOT__regs__DOT__ms_int_pnd = vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__ti_int_pnd = vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__rls_int_pnd = vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__rda_int_pnd = vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__thre_int_pnd 
        = vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd;
    __Vdly__uart_top__DOT__regs__DOT__lsr1r = vlSelfRef.uart_top__DOT__regs__DOT__lsr1r;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__uart_top__DOT__regs__DOT__block_cnt = vlSelfRef.uart_top__DOT__regs__DOT__block_cnt;
    __Vdly__uart_top__DOT__regs__DOT__counter_t = vlSelfRef.uart_top__DOT__regs__DOT__counter_t;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate 
        = vlSelfRef.uart_top__DOT__regs__DOT__tstate;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate 
        = vlSelfRef.uart_top__DOT__regs__DOT__rstate;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__dlc 
        = vlSelfRef.uart_top__DOT__regs__DOT__dlc;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__uart_top__DOT__regs__DOT__rf_count = vlSelfRef.uart_top__DOT__regs__DOT__rf_count;
    __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1 = 0U;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 = 0U;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count 
        = vlSelfRef.uart_top__DOT__regs__DOT__tf_count;
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i)) {
            vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[(0x000000ffU 
                                                                                & vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i)] = 0U;
            vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i 
                = ((IData)(1U) + vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i);
        }
    } else if (vlSelfRef.uart_top__DOT__regs__DOT__rx_reset) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i)) {
            vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[(0x000000ffU 
                                                                                & vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i)] = 0U;
            vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i 
                = ((IData)(1U) + vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i);
        }
    }
    __Vdly__uart_top__DOT__regs__DOT__lsr6r = ((IData)(vlSelfRef.wb_rst_i) 
                                               | ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr7r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr5r = ((IData)(vlSelfRef.wb_rst_i) 
                                               | ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr2r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr3r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr4r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4_d))))));
    __Vdly__uart_top__DOT__regs__DOT__lsr0r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ 
                                                   ((((1U 
                                                       == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)) 
                                                      & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop)) 
                                                     & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse))) 
                                                    | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rx_reset))) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0_d))))));
    __Vdly__uart_top__DOT__regs__DOT__ms_int_pnd = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr_read)) 
                                            & (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int)) 
                                               | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                     >> 3U)))));
    __Vdly__uart_top__DOT__regs__DOT__ti_int_pnd = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_read)) 
                                            & (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int)) 
                                               | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier)))));
    __Vdly__uart_top__DOT__regs__DOT__rls_int_pnd = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                            & (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int)) 
                                               | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                     >> 2U)))));
    __Vdly__uart_top__DOT__regs__DOT__rda_int_pnd = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & ((~ (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count) 
                                                 == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__trigger_level)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_read))) 
                                            & (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int)) 
                                               | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier)))));
    __Vdly__uart_top__DOT__regs__DOT__thre_int_pnd 
        = ((~ (IData)(vlSelfRef.wb_rst_i)) & ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write) 
                                                  | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__iir_read) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__iir))))) 
                                              & (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int)) 
                                                 | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                       >> 1U)))));
    __Vdly__uart_top__DOT__regs__DOT__lsr1r = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                               & ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                                     | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun) 
                                                        & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1_d))))));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition));
    vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is 
        = ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && (IData)(vlSelfRef.wb_we_i));
    vlSelfRef.int_o = (1U & ((~ (IData)(vlSelfRef.wb_rst_i)) 
                             & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd)
                                 ? (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask))
                                 : ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd) 
                                    | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd)
                                        ? (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_read))
                                        : ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd)
                                            ? (~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__iir_read)))
                                            : ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd) 
                                               & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr_read)))))))));
    vlSelfRef.uart_top__DOT__regs__DOT__srx_pad = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.wb_rst_i))) 
                                                   && (IData)(vlSelfRef.uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
    __Vtableidx1 = ((((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is) 
                      << 4U) | ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is) 
                                << 3U)) | (((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wbstate) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.wb_rst_i)));
    vlSelfRef.wb_ack_o = Vuart_top__ConstPool__TABLE_hfe0a76eb_0
        [__Vtableidx1];
    if ((2U & Vuart_top__ConstPool__TABLE_hf2e16bbf_0
         [__Vtableidx1])) {
        vlSelfRef.uart_top__DOT__wb_interface__DOT__wbstate 
            = Vuart_top__ConstPool__TABLE_h973921df_0
            [__Vtableidx1];
    }
    vlSelfRef.uart_top__DOT__wb_interface__DOT__wre 
        = Vuart_top__ConstPool__TABLE_hc518cd25_0[__Vtableidx1];
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push));
    if (vlSelfRef.wb_rst_i) {
        __Vdly__uart_top__DOT__regs__DOT__msi_reset = 1U;
        __Vdly__uart_top__DOT__regs__DOT__msr = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__msi_reset 
            = __Vdly__uart_top__DOT__regs__DOT__msi_reset;
        __Vdly__uart_top__DOT__regs__DOT__rf_pop = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__uart_top__DOT__regs__DOT__block_cnt = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__block_cnt 
            = __Vdly__uart_top__DOT__regs__DOT__block_cnt;
        __Vdly__uart_top__DOT__regs__DOT__counter_t = 0x027fU;
        vlSelfRef.uart_top__DOT__regs__DOT__counter_t 
            = __Vdly__uart_top__DOT__regs__DOT__counter_t;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__dlc = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__uart_top__DOT__regs__DOT__rf_count = 0U;
    } else {
        if (vlSelfRef.uart_top__DOT__regs__DOT__msi_reset) {
            __Vdly__uart_top__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelfRef.uart_top__DOT__regs__DOT__msr_read) {
            __Vdly__uart_top__DOT__regs__DOT__msi_reset = 1U;
        }
        __Vdly__uart_top__DOT__regs__DOT__msr = ((0xf0U 
                                                  & (IData)(__Vdly__uart_top__DOT__regs__DOT__msr)) 
                                                 | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__msi_reset)
                                                     ? 0U
                                                     : 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr) 
                                                        | (((((2U 
                                                               & ((~ (IData)(vlSelfRef.dcd_pad_i)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ (IData)(vlSelfRef.ri_pad_i)))) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & ((~ (IData)(vlSelfRef.dsr_pad_i)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ (IData)(vlSelfRef.cts_pad_i))))) 
                                                           ^ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__delayed_modem_signals))))));
        __Vdly__uart_top__DOT__regs__DOT__msr = ((0x0fU 
                                                  & (IData)(__Vdly__uart_top__DOT__regs__DOT__msr)) 
                                                 | ((((2U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                            >> 1U))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 3U))) 
                                                       << 4U)));
        vlSelfRef.uart_top__DOT__regs__DOT__msi_reset 
            = __Vdly__uart_top__DOT__regs__DOT__msi_reset;
        if (vlSelfRef.uart_top__DOT__regs__DOT__rf_pop) {
            __Vdly__uart_top__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.uart_top__DOT__re_o) 
                     & (0U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))) 
                    & (~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__uart_top__DOT__regs__DOT__rf_pop = 1U;
        }
        if (vlSelfRef.uart_top__DOT__regs__DOT__serial_in) {
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value) 
                                  >> 2U));
        } else if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b) 
                                  - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write))) {
            __Vdly__uart_top__DOT__regs__DOT__block_cnt 
                = vlSelfRef.uart_top__DOT__regs__DOT__block_value;
        } else if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt)))) {
            __Vdly__uart_top__DOT__regs__DOT__block_cnt 
                = (0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt) 
                                  - (IData)(1U)));
        }
        vlSelfRef.uart_top__DOT__regs__DOT__block_cnt 
            = __Vdly__uart_top__DOT__regs__DOT__block_cnt;
        if ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)))) {
            __Vdly__uart_top__DOT__regs__DOT__counter_t 
                = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__counter_t)))) {
            __Vdly__uart_top__DOT__regs__DOT__counter_t 
                = (0x000003ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__counter_t) 
                                  - (IData)(1U)));
        }
        vlSelfRef.uart_top__DOT__regs__DOT__counter_t 
            = __Vdly__uart_top__DOT__regs__DOT__counter_t;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__dlc 
            = (0x0000ffffU & ((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__start_dlc) 
                                     | (~ (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dlc)))))
                               ? ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl) 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__dlc) 
                               - (IData)(1U))));
        if (vlSelfRef.uart_top__DOT__regs__DOT__rx_reset) {
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__uart_top__DOT__regs__DOT__rf_count = 0U;
        } else if ((2U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop)))) {
            if ((0x0100U > (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count))) {
                __Vdly__uart_top__DOT__regs__DOT__rf_count 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)));
                __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 
                    = (7U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in));
                __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 
                    = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count))) {
                __Vdly__uart_top__DOT__regs__DOT__rf_count 
                    = (0x000001ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count) 
                                      - (IData)(1U)));
                __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1 
                    = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1 = 1U;
                __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop)))) {
            __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 
                = (7U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 
                = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2 = 1U;
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    }
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0] 
            = __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    }
    if (__VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v1] = 0U;
    }
    if (__VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2] 
            = __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v2;
    }
    vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd 
        = __Vdly__uart_top__DOT__regs__DOT__rda_int_pnd;
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.uart_top__DOT__regs__DOT__fcr = 3U;
        vlSelfRef.uart_top__DOT__regs__DOT__mcr = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelfRef.wb_dat_o = 0U;
    } else {
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (2U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__fcr 
                = (3U & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is) 
                         >> 6U));
        }
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (4U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__mcr 
                = (0x0000001fU & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is));
        }
        if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask))) {
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_push) 
                    & (0x0100U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        vlSelfRef.wb_dat_o = (0x000000ffU & ((4U & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
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
                                                    : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))));
    }
    vlSelfRef.uart_top__DOT__regs__DOT__lsr7r = __Vdly__uart_top__DOT__regs__DOT__lsr7r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr6r = __Vdly__uart_top__DOT__regs__DOT__lsr6r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr0r = __Vdly__uart_top__DOT__regs__DOT__lsr0r;
    vlSelfRef.uart_top__DOT__regs__DOT__msr = __Vdly__uart_top__DOT__regs__DOT__msr;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr5r = __Vdly__uart_top__DOT__regs__DOT__lsr5r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr4r = __Vdly__uart_top__DOT__regs__DOT__lsr4r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr3r = __Vdly__uart_top__DOT__regs__DOT__lsr3r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr2r = __Vdly__uart_top__DOT__regs__DOT__lsr2r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr1r = __Vdly__uart_top__DOT__regs__DOT__lsr1r;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr6_d = ((IData)(vlSelfRef.wb_rst_i) 
                                                  | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr7_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr5_d = ((IData)(vlSelfRef.wb_rst_i) 
                                                  | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr2_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr3_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr4_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr0_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0));
    vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int));
    vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int));
    vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int));
    vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d = 
        ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int));
    vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d 
        = ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr1_d = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun));
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.uart_top__DOT__regs__DOT__delayed_modem_signals = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__scratch = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__ier = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun = 0U;
    } else {
        vlSelfRef.uart_top__DOT__regs__DOT__delayed_modem_signals 
            = ((((2U & ((~ (IData)(vlSelfRef.dcd_pad_i)) 
                        << 1U)) | (1U & (~ (IData)(vlSelfRef.ri_pad_i)))) 
                << 2U) | ((2U & ((~ (IData)(vlSelfRef.dsr_pad_i)) 
                                 << 1U)) | (1U & (~ (IData)(vlSelfRef.cts_pad_i)))));
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (7U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__scratch 
                = vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is;
        }
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (1U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((1U & (~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelfRef.uart_top__DOT__regs__DOT__ier 
                    = (0x0000000fU & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
        if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask))) {
            vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop))) 
                    & (0x0100U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun = 1U;
        }
    }
    vlSelfRef.uart_top__DOT__regs__DOT__start_dlc = 
        ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && 
         (((IData)(vlSelfRef.uart_top__DOT__we_o) & 
           (0U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))) 
          && (1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                    >> 7U))));
    vlSelfRef.uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((~ (IData)(vlSelfRef.wb_rst_i)) & (IData)(vlSelfRef.srx_pad_i));
    __Vtableidx2 = vlSelfRef.uart_top__DOT__regs__DOT__fcr;
    vlSelfRef.uart_top__DOT__regs__DOT__trigger_level 
        = Vuart_top__ConstPool__TABLE_h2f4a0a86_0[__Vtableidx2];
    vlSelfRef.rts_pad_o = (1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                 >> 1U));
    vlSelfRef.dtr_pad_o = (1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr))
                                                 ? 
                                                ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 
                                                ((((IData)(vlSelfRef.cts_pad_i) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.dsr_pad_i) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.ri_pad_i) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.dcd_pad_i))));
    vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is 
        = ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && (IData)(vlSelfRef.wb_stb_i));
    vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is 
        = ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && (IData)(vlSelfRef.wb_cyc_i));
    __Vtableidx4 = ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd) 
                      << 5U) | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd) 
                                 << 4U) | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int) 
                        << 2U) | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSelfRef.wb_rst_i))));
    vlSelfRef.uart_top__DOT__regs__DOT__iir = Vuart_top__ConstPool__TABLE_h6f4cb3c7_0
        [__Vtableidx4];
    vlSelfRef.uart_top__DOT__regs__DOT__lsr2 = (1U 
                                                & (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                                   >> 1U));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr3 = (1U 
                                                & vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.uart_top__DOT__regs__DOT__lsr4 = (1U 
                                                & (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                                   >> 2U));
    vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd 
        = __Vdly__uart_top__DOT__regs__DOT__ms_int_pnd;
    vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd 
        = __Vdly__uart_top__DOT__regs__DOT__thre_int_pnd;
    vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd 
        = __Vdly__uart_top__DOT__regs__DOT__ti_int_pnd;
    vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd 
        = __Vdly__uart_top__DOT__regs__DOT__rls_int_pnd;
    vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0 
        = ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is) 
           & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wre));
    vlSelfRef.uart_top__DOT__regs__DOT__thre_int = 
        (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
          >> 1U) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r));
    vlSelfRef.uart_top__DOT__regs__DOT__ms_int = (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                   >> 3U) 
                                                  & (0U 
                                                     != 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr))));
    vlSelfRef.uart_top__DOT__regs__DOT__rls_int = (
                                                   ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                                      | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                                         | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                                            | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r)))));
    vlSelfRef.uart_top__DOT__regs__DOT__rf_pop = __Vdly__uart_top__DOT__regs__DOT__rf_pop;
    vlSelfRef.uart_top__DOT__regs__DOT__rf_count = __Vdly__uart_top__DOT__regs__DOT__rf_count;
    vlSelfRef.uart_top__DOT__re_o = ((~ (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is)) 
                                     & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is) 
                                        & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0)));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr7 = ((0U 
                                                 != 
                                                 (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [0U] 
                                                  | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [1U] 
                                                     | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0x0fU])))))))))))))))) 
                                                | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun));
    vlSelfRef.uart_top__DOT__regs__DOT__rda_int = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                   & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count) 
                                                      >= (IData)(vlSelfRef.uart_top__DOT__regs__DOT__trigger_level)));
    vlSelfRef.uart_top__DOT__regs__DOT__ti_int = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__counter_t)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count))));
    vlSelfRef.uart_top__DOT__regs__DOT__rx_reset = 
        ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && 
         (((IData)(vlSelfRef.uart_top__DOT__we_o) & 
           (2U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))) 
          && (1U & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is) 
                    >> 1U))));
}

void Vuart_top___024root___nba_sequent__TOP__1(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___nba_sequent__TOP__1\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    // Body
    __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __VdlySet__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse) {
        __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.uart_top__DOT__regs__DOT__tf_push) {
        __VdlyVal__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is;
        __VdlyDim0__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (__VdlySet__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__VdlySet__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
}

extern const VlUnpacked<CData/*7:0*/, 256> Vuart_top__ConstPool__TABLE_h688915ee_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vuart_top__ConstPool__TABLE_hb2548040_0;

void Vuart_top___024root___nba_sequent__TOP__2(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___nba_sequent__TOP__2\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1;
    uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__rstate 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b;
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count = 0U;
    } else {
        if (vlSelfRef.uart_top__DOT__regs__DOT__enable) {
            if ((8U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in) 
                                | (0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error))));
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error)));
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 4U;
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity)));
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 3U;
                            } else {
                                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 4U;
                                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 2U;
                        }
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                ? ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 2U;
                            vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 6U;
                        }
                        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x00000010U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                  ? ((0x00000020U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                      ? (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x00000020U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                      ? (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 9U;
                } else {
                    if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in)));
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 0x0aU;
                    }
                    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                    if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity 
                            = vlSelfRef.uart_top__DOT__regs__DOT__serial_in;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 8U;
                    }
                    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in) 
                                        << 7U) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                              >> 1U))));
                            }
                        } else {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                    ? ((0xc0U & (IData)(vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x0000001fU 
                                           & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                              >> 1U))))
                                    : ((0xe0U & (IData)(vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in) 
                                           << 4U) | 
                                          (0x0000000fU 
                                           & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift) 
                                              >> 1U)))));
                        }
                    }
                    if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 7U;
                    }
                    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rstate))) {
                vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate 
                        = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                if (((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate = 1U;
                }
            }
        }
        vlSelfRef.uart_top__DOT__regs__DOT__rstate 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__rstate;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift;
        vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b 
            = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b;
        if (vlSelfRef.uart_top__DOT__regs__DOT__tx_reset) {
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0x0100U > (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count))) {
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count)));
                vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count))) {
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count 
                    = (0x000001ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count) 
                                      - (IData)(1U)));
            }
        } else if ((3U == (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    }
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.uart_top__DOT__regs__DOT__tx_reset = 
        ((1U & (~ (IData)(vlSelfRef.wb_rst_i))) && 
         (((IData)(vlSelfRef.uart_top__DOT__we_o) & 
           (2U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))) 
          && (1U & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is) 
                    >> 2U))));
    vlSelfRef.uart_top__DOT__regs__DOT__tf_push = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.wb_rst_i))) 
                                                   && (((IData)(vlSelfRef.uart_top__DOT__we_o) 
                                                        & (0U 
                                                           == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                                               >> 7U)))));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr0 = ((0U 
                                                 == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse));
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
    } else if (vlSelfRef.uart_top__DOT__regs__DOT__enable) {
        if ((4U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
            if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 0U;
            } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
                vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                    if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_8(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                    } else {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000007fU 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                    }
                } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x0000003fU 
                                              & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                } else {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x0000001fU 
                                              & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                }
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out 
                    = (0x0000007fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                      >> 1U));
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out 
                    = (1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 1U;
            } else {
                if ((0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 0U;
                    } else {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
                        = ((0U == (4U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr)))
                            ? 0x0dU : ((4U == (7U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr)))
                                        ? 0x15U : 0x1dU));
                }
                vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
            if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
                if ((0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 4U;
                    } else {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0x0fU;
                }
                vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
            } else {
                vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
                if ((0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((0U < (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                = (7U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                         - (IData)(1U)));
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out 
                                = ((0x40U & (IData)(vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                   | (0x0000003fU & 
                                      ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                       >> 1U)));
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out 
                                = (1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out));
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 2U;
                        } else if ((8U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out 
                                = ((0x00000010U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))
                                    ? ((1U & (~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                                 >> 5U))) 
                                       && (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                    : ((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                              >> 5U)) 
                                       || (1U & (~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 3U;
                        } else {
                            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 4U;
                        }
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                    } else {
                        vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0x0fU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate))) {
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
            if ((0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                if ((1U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter))) {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 2U;
                } else {
                    vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter 
                        = (0x0000001fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter) 
                                          - (IData)(1U)));
                }
            } else {
                vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = 0x0fU;
            }
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
        } else if ((0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count))) {
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 5U;
        } else {
            vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate = 0U;
            vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        }
    } else {
        vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
    }
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.uart_top__DOT__regs__DOT__tstate = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tstate;
    vlSelfRef.uart_top__DOT__regs__DOT__tf_count = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__tf_count;
    vlSelfRef.uart_top__DOT__regs__DOT__lsr5 = ((~ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt))) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count)));
    vlSelfRef.uart_top__DOT__regs__DOT__enable = ((~ (IData)(vlSelfRef.wb_rst_i)) 
                                                  & ((0U 
                                                      != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl)) 
                                                     & (~ 
                                                        (0U 
                                                         != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dlc)))));
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.uart_top__DOT__regs__DOT__dl = (0x00ffU 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl));
        vlSelfRef.uart_top__DOT__regs__DOT__dl = (0xff00U 
                                                  & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl));
        vlSelfRef.uart_top__DOT__regs__DOT__lcr = 3U;
        vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is = 0U;
        vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is = 0U;
    } else {
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (1U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x00000080U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                vlSelfRef.uart_top__DOT__regs__DOT__dl 
                    = ((0x00ffU & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl)) 
                       | ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (0U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x00000080U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr))) {
                vlSelfRef.uart_top__DOT__regs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__dl)) 
                       | (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
        if (((IData)(vlSelfRef.uart_top__DOT__we_o) 
             & (3U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSelfRef.uart_top__DOT__regs__DOT__lcr 
                = vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is;
        }
        vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is 
            = vlSelfRef.wb_dat_i;
        vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is 
            = vlSelfRef.wb_adr_i;
    }
    vlSelfRef.uart_top__DOT__regs__DOT__lsr6 = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate)));
    vlSelfRef.uart_top__DOT__regs__DOT__dlc = vlSelfRef.__Vdly__uart_top__DOT__regs__DOT__dlc;
    vlSelfRef.uart_top__DOT__we_o = ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is) 
                                     & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is) 
                                        & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0)));
    __Vtableidx3 = vlSelfRef.uart_top__DOT__regs__DOT__lcr;
    vlSelfRef.uart_top__DOT__regs__DOT__block_value 
        = Vuart_top__ConstPool__TABLE_h688915ee_0[__Vtableidx3];
    __Vtableidx5 = vlSelfRef.uart_top__DOT__regs__DOT__lcr;
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vuart_top__ConstPool__TABLE_hb2548040_0[__Vtableidx5];
    vlSelfRef.uart_top__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.stx_pad_o = (IData)((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                    >> 4U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_out)));
    vlSelfRef.uart_top__DOT__regs__DOT__serial_in = 
        ((0x00000010U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr))
          ? (IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_out)
          : (IData)(vlSelfRef.uart_top__DOT__regs__DOT__srx_pad));
    vlSelfRef.uart_top__DOT__regs__DOT__iir_read = 
        ((IData)(vlSelfRef.uart_top__DOT__re_o) & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                                     >> 7U)) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelfRef.uart_top__DOT__regs__DOT__msr_read = 
        ((IData)(vlSelfRef.uart_top__DOT__re_o) & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                                     >> 7U)) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.uart_top__DOT__re_o) & 
           ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                >> 7U)) & (5U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))));
    uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1 
        = ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask = 
        ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_d)) 
         & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition));
    vlSelfRef.uart_top__DOT__regs__DOT__fifo_read = 
        ((IData)(vlSelfRef.uart_top__DOT__re_o) & (IData)(uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.uart_top__DOT__regs__DOT__fifo_write 
        = ((IData)(vlSelfRef.uart_top__DOT__we_o) & (IData)(uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1));
}

void Vuart_top___024root___nba_comb__TOP__0(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___nba_comb__TOP__0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
}

void Vuart_top___024root___eval_nba(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_nba\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vuart_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top___024root___eval_phase__act(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_phase__act\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_top___024root___eval_triggers__act(vlSelf);
    Vuart_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vuart_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top___024root___eval_phase__nba(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_phase__nba\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_top___024root___eval_nba(vlSelf);
        Vuart_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_top___024root___eval(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vuart_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("uart_top.v", 137, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vuart_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("uart_top.v", 137, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("uart_top.v", 137, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vuart_top___024root___eval_phase__act(vlSelf));
    } while (Vuart_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vuart_top___024root___eval_debug_assertions(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_debug_assertions\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.wb_clk_i & 0xfeU)))) {
        Verilated::overWidthError("wb_clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_rst_i & 0xfeU)))) {
        Verilated::overWidthError("wb_rst_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_adr_i & 0xf8U)))) {
        Verilated::overWidthError("wb_adr_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_we_i & 0xfeU)))) {
        Verilated::overWidthError("wb_we_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_stb_i & 0xfeU)))) {
        Verilated::overWidthError("wb_stb_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_cyc_i & 0xfeU)))) {
        Verilated::overWidthError("wb_cyc_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.wb_sel_i & 0xf0U)))) {
        Verilated::overWidthError("wb_sel_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.srx_pad_i & 0xfeU)))) {
        Verilated::overWidthError("srx_pad_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.cts_pad_i & 0xfeU)))) {
        Verilated::overWidthError("cts_pad_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.dsr_pad_i & 0xfeU)))) {
        Verilated::overWidthError("dsr_pad_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.ri_pad_i & 0xfeU)))) {
        Verilated::overWidthError("ri_pad_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcd_pad_i & 0xfeU)))) {
        Verilated::overWidthError("dcd_pad_i");
    }
}
#endif  // VL_DEBUG

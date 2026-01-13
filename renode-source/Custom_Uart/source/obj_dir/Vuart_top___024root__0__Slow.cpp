// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top.h for the primary calling header

#include "Vuart_top__pch.h"

VL_ATTR_COLD void Vuart_top___024root___eval_static(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_static\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0 = vlSelfRef.wb_clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__wb_rst_i__0 = vlSelfRef.wb_rst_i;
}

VL_ATTR_COLD void Vuart_top___024root___eval_initial(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_initial\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuart_top___024root___eval_final(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_final\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_top___024root___eval_phase__stl(Vuart_top___024root* vlSelf);

VL_ATTR_COLD void Vuart_top___024root___eval_settle(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_settle\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("uart_top.v", 137, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vuart_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vuart_top___024root___eval_triggers__stl(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_triggers__stl\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vuart_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vuart_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 256> Vuart_top__ConstPool__TABLE_h688915ee_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vuart_top__ConstPool__TABLE_hb2548040_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vuart_top__ConstPool__TABLE_h2f4a0a86_0;

VL_ATTR_COLD void Vuart_top___024root___stl_sequent__TOP__0(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___stl_sequent__TOP__0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1;
    uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.rts_pad_o = (1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                 >> 1U));
    vlSelfRef.dtr_pad_o = (1U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr));
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.uart_top__DOT__regs__DOT__thre_int = 
        (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
          >> 1U) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r));
    vlSelfRef.uart_top__DOT__regs__DOT__ms_int = (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                   >> 3U) 
                                                  & (0U 
                                                     != 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__msr))));
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
    vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.uart_top__DOT__regs__DOT__ti_int = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__counter_t)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count))));
    __Vtableidx3 = vlSelfRef.uart_top__DOT__regs__DOT__lcr;
    vlSelfRef.uart_top__DOT__regs__DOT__block_value 
        = Vuart_top__ConstPool__TABLE_h688915ee_0[__Vtableidx3];
    __Vtableidx5 = vlSelfRef.uart_top__DOT__regs__DOT__lcr;
    vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vuart_top__ConstPool__TABLE_hb2548040_0[__Vtableidx5];
    vlSelfRef.uart_top__DOT__regs__DOT__rls_int = (
                                                   ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                    >> 2U) 
                                                   & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                                      | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                                         | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                                            | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r)))));
    vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr5 = ((~ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt))) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tf_count)));
    __Vtableidx2 = vlSelfRef.uart_top__DOT__regs__DOT__fcr;
    vlSelfRef.uart_top__DOT__regs__DOT__trigger_level 
        = Vuart_top__ConstPool__TABLE_h2f4a0a86_0[__Vtableidx2];
    uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1 
        = ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is)));
    vlSelfRef.uart_top__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    if ((0x00000010U & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 
            ((0x0000000cU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                             << 2U)) | ((2U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                                 >> 3U))));
        vlSelfRef.uart_top__DOT__regs__DOT__serial_in 
            = vlSelfRef.uart_top__DOT__regs__DOT__serial_out;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 
            ((((IData)(vlSelfRef.cts_pad_i) << 3U) 
              | ((IData)(vlSelfRef.dsr_pad_i) << 2U)) 
             | (((IData)(vlSelfRef.ri_pad_i) << 1U) 
                | (IData)(vlSelfRef.dcd_pad_i)));
        vlSelfRef.uart_top__DOT__regs__DOT__serial_in 
            = vlSelfRef.uart_top__DOT__regs__DOT__srx_pad;
    }
    vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0 
        = ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is) 
           & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wre));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr0 = ((0U 
                                                 == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count)) 
                                                & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse));
    vlSelfRef.uart_top__DOT__regs__DOT__lsr6 = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__tstate)));
    vlSelfRef.uart_top__DOT__regs__DOT__rda_int = ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__ier) 
                                                   & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__rf_count) 
                                                      >= (IData)(vlSelfRef.uart_top__DOT__regs__DOT__trigger_level)));
    vlSelfRef.stx_pad_o = (IData)((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                    >> 4U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__serial_out)));
    vlSelfRef.uart_top__DOT__we_o = ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is) 
                                     & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is) 
                                        & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0)));
    vlSelfRef.uart_top__DOT__re_o = ((~ (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is)) 
                                     & ((IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is) 
                                        & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0)));
    vlSelfRef.uart_top__DOT__regs__DOT__fifo_write 
        = ((IData)(vlSelfRef.uart_top__DOT__we_o) & (IData)(uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.uart_top__DOT__regs__DOT__fifo_read = 
        ((IData)(vlSelfRef.uart_top__DOT__re_o) & (IData)(uart_top__DOT__regs__DOT____VdfgRegularize_hf5566834_0_1));
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
    vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask = 
        ((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_d)) 
         & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition));
}

VL_ATTR_COLD void Vuart_top___024root____Vm_traceActivitySetAll(Vuart_top___024root* vlSelf);

VL_ATTR_COLD void Vuart_top___024root___eval_stl(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_stl\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vuart_top___024root___stl_sequent__TOP__0(vlSelf);
        Vuart_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vuart_top___024root___eval_phase__stl(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___eval_phase__stl\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vuart_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vuart_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vuart_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vuart_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge wb_clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge wb_rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_top___024root____Vm_traceActivitySetAll(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root____Vm_traceActivitySetAll\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vuart_top___024root___ctor_var_reset(Vuart_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root___ctor_var_reset\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->wb_clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1747718400071218055ull);
    vlSelf->wb_rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828509590113575919ull);
    vlSelf->wb_adr_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6337488299811284232ull);
    vlSelf->wb_dat_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4299709251288665756ull);
    vlSelf->wb_dat_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13245586172715350507ull);
    vlSelf->wb_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4424384679403006522ull);
    vlSelf->wb_stb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3848577124203828822ull);
    vlSelf->wb_cyc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11834999475235453719ull);
    vlSelf->wb_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1694725105564769181ull);
    vlSelf->wb_sel_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9222131742674891774ull);
    vlSelf->int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218699907187632612ull);
    vlSelf->stx_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10248140424758287709ull);
    vlSelf->srx_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11049881744685350141ull);
    vlSelf->rts_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5161150044651881625ull);
    vlSelf->cts_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9027795954929363516ull);
    vlSelf->dtr_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3410300533944712745ull);
    vlSelf->dsr_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5663774790257790435ull);
    vlSelf->ri_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7187715540692298008ull);
    vlSelf->dcd_pad_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8064464015994001680ull);
    vlSelf->uart_top__DOT__wb_dat32_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11921864654487556455ull);
    vlSelf->uart_top__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16360742408377800777ull);
    vlSelf->uart_top__DOT__re_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1456748394191827691ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wb_dat_is = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8276151762100431729ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wb_adr_is = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9974642757503554992ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wb_we_is = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5421173724110846374ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wb_cyc_is = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2845378779508657878ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wb_stb_is = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7012026525571978847ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15501672659712482738ull);
    vlSelf->uart_top__DOT__wb_interface__DOT__wbstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15070939538661050242ull);
    vlSelf->uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17245206167405177873ull);
    vlSelf->uart_top__DOT__regs__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039305296417502853ull);
    vlSelf->uart_top__DOT__regs__DOT__srx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12692294952242019295ull);
    vlSelf->uart_top__DOT__regs__DOT__ier = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8991238041370784564ull);
    vlSelf->uart_top__DOT__regs__DOT__iir = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15464453768568826458ull);
    vlSelf->uart_top__DOT__regs__DOT__fcr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7696471522437776850ull);
    vlSelf->uart_top__DOT__regs__DOT__mcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9426842434982826480ull);
    vlSelf->uart_top__DOT__regs__DOT__lcr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 867322096795519107ull);
    vlSelf->uart_top__DOT__regs__DOT__msr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5978005628170317462ull);
    vlSelf->uart_top__DOT__regs__DOT__dl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18288642305114217425ull);
    vlSelf->uart_top__DOT__regs__DOT__scratch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10198676027801237724ull);
    vlSelf->uart_top__DOT__regs__DOT__start_dlc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2855256918486310042ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr_mask_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15276982312198146539ull);
    vlSelf->uart_top__DOT__regs__DOT__msi_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3083406762570947063ull);
    vlSelf->uart_top__DOT__regs__DOT__dlc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4457329850233328934ull);
    vlSelf->uart_top__DOT__regs__DOT__trigger_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17314227150067577073ull);
    vlSelf->uart_top__DOT__regs__DOT__rx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4591911947280565175ull);
    vlSelf->uart_top__DOT__regs__DOT__tx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1326646752223692090ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1506698777921511864ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13392608341294423487ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6898378247263043599ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16187845801861049648ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5371307293056538627ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6884981151914015646ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6918317026752040526ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr0r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6314976736104934066ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr1r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12057711714649139151ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr2r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340668225674649951ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr3r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4881502398644507667ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr4r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12193206824954616350ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr5r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11986919225269146724ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr6r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1857148151176351326ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr7r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15147560188077451560ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14645940406478930011ull);
    vlSelf->uart_top__DOT__regs__DOT__rls_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13786921840387456752ull);
    vlSelf->uart_top__DOT__regs__DOT__rda_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2668897398396743553ull);
    vlSelf->uart_top__DOT__regs__DOT__ti_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 582118359908550064ull);
    vlSelf->uart_top__DOT__regs__DOT__thre_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10170981943029505767ull);
    vlSelf->uart_top__DOT__regs__DOT__ms_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7775419195029181916ull);
    vlSelf->uart_top__DOT__regs__DOT__tf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13067895737695663274ull);
    vlSelf->uart_top__DOT__regs__DOT__rf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9072278755125111569ull);
    vlSelf->uart_top__DOT__regs__DOT__rf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4394913344058628820ull);
    vlSelf->uart_top__DOT__regs__DOT__rf_push_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14415881789793923265ull);
    vlSelf->uart_top__DOT__regs__DOT__rf_count = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12179146113814893264ull);
    vlSelf->uart_top__DOT__regs__DOT__tf_count = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12074087367223963341ull);
    vlSelf->uart_top__DOT__regs__DOT__tstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8854647011178039940ull);
    vlSelf->uart_top__DOT__regs__DOT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16709213504809227108ull);
    vlSelf->uart_top__DOT__regs__DOT__counter_t = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10014686198437077205ull);
    vlSelf->uart_top__DOT__regs__DOT__block_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 465519308531189796ull);
    vlSelf->uart_top__DOT__regs__DOT__block_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7219091543893713362ull);
    vlSelf->uart_top__DOT__regs__DOT__serial_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8264564809817320007ull);
    vlSelf->uart_top__DOT__regs__DOT__serial_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5477492206550011797ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr_mask_condition = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14309742669074071855ull);
    vlSelf->uart_top__DOT__regs__DOT__iir_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 490479350805655290ull);
    vlSelf->uart_top__DOT__regs__DOT__msr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 960551217637147839ull);
    vlSelf->uart_top__DOT__regs__DOT__fifo_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1025967146132651874ull);
    vlSelf->uart_top__DOT__regs__DOT__fifo_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12885036501152300638ull);
    vlSelf->uart_top__DOT__regs__DOT__delayed_modem_signals = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15410120688706867982ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr0_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2087618092675052034ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2315462842573732180ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr2_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16094422810080593436ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr3_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14704493953186919503ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr4_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6854773086706817206ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr5_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15691258633095763260ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr6_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9938833197878719385ull);
    vlSelf->uart_top__DOT__regs__DOT__lsr7_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4784254198535727373ull);
    vlSelf->uart_top__DOT__regs__DOT__rls_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4534227731129369595ull);
    vlSelf->uart_top__DOT__regs__DOT__thre_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7141629456790236896ull);
    vlSelf->uart_top__DOT__regs__DOT__ms_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14050752461274762938ull);
    vlSelf->uart_top__DOT__regs__DOT__ti_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8148339177097042153ull);
    vlSelf->uart_top__DOT__regs__DOT__rda_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15115006874304452813ull);
    vlSelf->uart_top__DOT__regs__DOT__rls_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7600013107446044095ull);
    vlSelf->uart_top__DOT__regs__DOT__rda_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4574128461029601851ull);
    vlSelf->uart_top__DOT__regs__DOT__thre_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5508860198107026288ull);
    vlSelf->uart_top__DOT__regs__DOT__ms_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16013912710177260007ull);
    vlSelf->uart_top__DOT__regs__DOT__ti_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10993313968396802985ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12553819065029145351ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7500941761060442356ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__shift_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 734145276064421571ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 336027688338733485ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3184437477704453559ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4930056796590826600ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10423245405252454890ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16996067821120165556ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1000654961694435929ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10320546576399010566ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11340342830628382386ull);
    vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3246050121552380107ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17479414151311559101ull);
    }
    vlSelf->uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14260899288104030666ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9227848862911953923ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8664658542315015495ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rshift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 64328530899623916ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rparity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15439043964877172729ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rparity_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17397210972931354585ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rframing_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16821271764312700670ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6027148082169109014ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__counter_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2454321435952491369ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679512087708619290ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17519291960782077674ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16347040815779821570ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3706562789049177933ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3189032015925269343ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5860793312129321375ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__toc_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7517113772656385575ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 641582906667636838ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10314872742789737068ull);
    }
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14600116190818190261ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15369009317804111681ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5759182876629284506ull);
    vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2754348624302196525ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3326500773460314956ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5614032309088458142ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__dlc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10627713534886302644ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__tstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5671591891564401660ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5281119089077193886ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13009671371766590767ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2555686180744977984ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10681130878452393334ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9677614998245427696ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9816512700476421873ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__tf_count = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4581429416317000835ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17596839925556067475ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2350280680346978035ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15909917361470600104ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9866586794370245640ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14778786374182695134ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17513023385253303408ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9188810100158932462ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3276987989390812358ull);
    vlSelf->__Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14559256217248461810ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__wb_clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538859055193387686ull);
    vlSelf->__Vtrigprevexpr___TOP__wb_rst_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18145353915605619240ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

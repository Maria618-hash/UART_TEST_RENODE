// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_spi_top.h for the primary calling header

#include "Vsimple_spi_top__pch.h"

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_static(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_static\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_i__0 = vlSelfRef.rst_i;
}

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_initial(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_initial\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_final(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_final\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimple_spi_top___024root___eval_phase__stl(Vsimple_spi_top___024root* vlSelf);

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_settle(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_settle\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_spi_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("simple_spi_top.v", 69, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsimple_spi_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_triggers__stl(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_triggers__stl\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_spi_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsimple_spi_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsimple_spi_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsimple_spi_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vsimple_spi_top___024root___stl_sequent__TOP__0(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___stl_sequent__TOP__0\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_spi__DOT__rfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp)));
    vlSelfRef.simple_spi__DOT__rfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp)));
    vlSelfRef.simple_spi__DOT__wfifo__DOT__wp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp)));
    vlSelfRef.simple_spi__DOT__wfifo__DOT__rp_p1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp)));
    vlSelfRef.ss_o = (1U & (~ (IData)(vlSelfRef.simple_spi__DOT__ss_r)));
    vlSelfRef.mosi_o = (1U & ((IData)(vlSelfRef.simple_spi__DOT__treg) 
                              >> 7U));
    vlSelfRef.simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__rp) 
           == (IData)(vlSelfRef.simple_spi__DOT__rfifo__DOT__wp));
    vlSelfRef.simple_spi__DOT__espr = ((0x0000000cU 
                                        & ((IData)(vlSelfRef.simple_spi__DOT__sper) 
                                           << 2U)) 
                                       | (3U & (IData)(vlSelfRef.simple_spi__DOT__spcr)));
    vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 
        = ((IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__wp));
    vlSelfRef.simple_spi__DOT__wb_acc = ((IData)(vlSelfRef.cyc_i) 
                                         & (IData)(vlSelfRef.stb_i));
    vlSelfRef.simple_spi__DOT__wffull = ((IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0) 
                                         & (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb));
    vlSelfRef.simple_spi__DOT__wfempty = ((~ (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT__gb)) 
                                          & (IData)(vlSelfRef.simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0));
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

VL_ATTR_COLD void Vsimple_spi_top___024root____Vm_traceActivitySetAll(Vsimple_spi_top___024root* vlSelf);

VL_ATTR_COLD void Vsimple_spi_top___024root___eval_stl(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_stl\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsimple_spi_top___024root___stl_sequent__TOP__0(vlSelf);
        Vsimple_spi_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsimple_spi_top___024root___eval_phase__stl(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___eval_phase__stl\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimple_spi_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsimple_spi_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsimple_spi_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsimple_spi_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vsimple_spi_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vsimple_spi_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_spi_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsimple_spi_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_spi_top___024root____Vm_traceActivitySetAll(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root____Vm_traceActivitySetAll\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vsimple_spi_top___024root___ctor_var_reset(Vsimple_spi_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_spi_top___024root___ctor_var_reset\n"); );
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->cyc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7338607325379039587ull);
    vlSelf->stb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4362139752825076625ull);
    vlSelf->adr_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11470979669467844474ull);
    vlSelf->we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580956079526588133ull);
    vlSelf->dat_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5998267606277628212ull);
    vlSelf->dat_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5977260043037727347ull);
    vlSelf->ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7968475957095882202ull);
    vlSelf->inta_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2889587249974653726ull);
    vlSelf->sck_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760444349007854102ull);
    vlSelf->ss_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17428559085133479747ull);
    vlSelf->mosi_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15029141262240027923ull);
    vlSelf->miso_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7624723196927002945ull);
    vlSelf->simple_spi__DOT__spcr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16829519761456076017ull);
    vlSelf->simple_spi__DOT__sper = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18409980078750770900ull);
    vlSelf->simple_spi__DOT__treg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11900983161350085342ull);
    vlSelf->simple_spi__DOT__ss_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2417377728312319621ull);
    vlSelf->simple_spi__DOT__wfre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9849226623755263072ull);
    vlSelf->simple_spi__DOT__rfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410896213226043051ull);
    vlSelf->simple_spi__DOT__rfre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7423293145110010425ull);
    vlSelf->simple_spi__DOT__wfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14887359417310432747ull);
    vlSelf->simple_spi__DOT__wffull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15941398561206684476ull);
    vlSelf->simple_spi__DOT__wfempty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11885821727732182487ull);
    vlSelf->simple_spi__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1164554463612980941ull);
    vlSelf->simple_spi__DOT__bcnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16732699541617115405ull);
    vlSelf->simple_spi__DOT__wb_acc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16014101349809952868ull);
    vlSelf->simple_spi__DOT__wb_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304470510935109288ull);
    vlSelf->simple_spi__DOT__espr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3872088319911115848ull);
    vlSelf->simple_spi__DOT__wr_spsr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7782737637531000102ull);
    vlSelf->simple_spi__DOT__spif = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2341962245395663621ull);
    vlSelf->simple_spi__DOT__wcol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12204792976875582174ull);
    vlSelf->simple_spi__DOT__clkcnt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4543642911033310910ull);
    vlSelf->simple_spi__DOT__tcnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6013799566243945024ull);
    vlSelf->simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716050670608113028ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simple_spi__DOT__rfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5782676827927910970ull);
    }
    vlSelf->simple_spi__DOT__rfifo__DOT__wp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15059842343584362815ull);
    vlSelf->simple_spi__DOT__rfifo__DOT__rp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14948788246848073684ull);
    vlSelf->simple_spi__DOT__rfifo__DOT__wp_p1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2877437287325919374ull);
    vlSelf->simple_spi__DOT__rfifo__DOT__rp_p1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1388267785038911661ull);
    vlSelf->simple_spi__DOT__rfifo__DOT__gb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14718540763159977632ull);
    vlSelf->simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 284799015276280967ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simple_spi__DOT__wfifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1324609739305680304ull);
    }
    vlSelf->simple_spi__DOT__wfifo__DOT__wp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15350462914745974712ull);
    vlSelf->simple_spi__DOT__wfifo__DOT__rp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14860406220306813544ull);
    vlSelf->simple_spi__DOT__wfifo__DOT__wp_p1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3267279662723473013ull);
    vlSelf->simple_spi__DOT__wfifo__DOT__rp_p1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9709377465489259643ull);
    vlSelf->simple_spi__DOT__wfifo__DOT__gb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3758462115385444587ull);
    vlSelf->simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814047671068016310ull);
    vlSelf->__Vdly__simple_spi__DOT__clkcnt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11015024361435282152ull);
    vlSelf->__Vdly__simple_spi__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4212067033837224157ull);
    vlSelf->__Vdly__simple_spi__DOT__bcnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11444415353789720022ull);
    vlSelf->__Vdly__simple_spi__DOT__treg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5736176120731469114ull);
    vlSelf->__Vdly__simple_spi__DOT__wfre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5630814135738827053ull);
    vlSelf->__Vdly__sck_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9412875247486530097ull);
    vlSelf->__VdlyVal__simple_spi__DOT__wfifo__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11186979136765057600ull);
    vlSelf->__VdlyDim0__simple_spi__DOT__wfifo__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9484966548773796170ull);
    vlSelf->__VdlySet__simple_spi__DOT__wfifo__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5180302250530674226ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

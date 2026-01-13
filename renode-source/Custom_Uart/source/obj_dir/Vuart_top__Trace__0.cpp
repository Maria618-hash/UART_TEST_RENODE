// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vuart_top__Syms.h"


void Vuart_top___024root__trace_chg_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vuart_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_chg_0\n"); );
    // Body
    Vuart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top___024root*>(voidSelf);
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vuart_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_top___024root__trace_chg_0_sub_0(Vuart_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_chg_0_sub_0\n"); );
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.uart_top__DOT__re_o));
        bufp->chgBit(oldp+1,(vlSelfRef.uart_top__DOT__regs__DOT__srx_pad));
        bufp->chgCData(oldp+2,(vlSelfRef.uart_top__DOT__regs__DOT__ier),4);
        bufp->chgCData(oldp+3,(vlSelfRef.uart_top__DOT__regs__DOT__iir),4);
        bufp->chgCData(oldp+4,(vlSelfRef.uart_top__DOT__regs__DOT__fcr),2);
        bufp->chgCData(oldp+5,(vlSelfRef.uart_top__DOT__regs__DOT__mcr),5);
        bufp->chgCData(oldp+6,(vlSelfRef.uart_top__DOT__regs__DOT__msr),8);
        bufp->chgCData(oldp+7,(vlSelfRef.uart_top__DOT__regs__DOT__scratch),8);
        bufp->chgBit(oldp+8,(vlSelfRef.uart_top__DOT__regs__DOT__start_dlc));
        bufp->chgBit(oldp+9,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+10,(vlSelfRef.uart_top__DOT__regs__DOT__msi_reset));
        bufp->chgCData(oldp+11,(vlSelfRef.uart_top__DOT__regs__DOT__trigger_level),4);
        bufp->chgBit(oldp+12,(vlSelfRef.uart_top__DOT__regs__DOT__rx_reset));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__mcr) 
                                     >> 4U))));
        bufp->chgCData(oldp+14,(((((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r) 
                                     << 3U) | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r) 
                                       << 1U) | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r))) 
                                  << 4U) | ((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+15,(vlSelfRef.uart_top__DOT__regs__DOT__rf_overrun));
        bufp->chgBit(oldp+16,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2));
        bufp->chgBit(oldp+17,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3));
        bufp->chgBit(oldp+18,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4));
        bufp->chgBit(oldp+19,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7));
        bufp->chgBit(oldp+20,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0r));
        bufp->chgBit(oldp+21,(vlSelfRef.uart_top__DOT__regs__DOT__lsr1r));
        bufp->chgBit(oldp+22,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2r));
        bufp->chgBit(oldp+23,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3r));
        bufp->chgBit(oldp+24,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4r));
        bufp->chgBit(oldp+25,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5r));
        bufp->chgBit(oldp+26,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6r));
        bufp->chgBit(oldp+27,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7r));
        bufp->chgBit(oldp+28,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int));
        bufp->chgBit(oldp+29,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int));
        bufp->chgBit(oldp+30,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int));
        bufp->chgBit(oldp+31,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int));
        bufp->chgBit(oldp+32,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int));
        bufp->chgBit(oldp+33,(vlSelfRef.uart_top__DOT__regs__DOT__rf_pop));
        bufp->chgBit(oldp+34,((0U != (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                      [0U] | (vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0x0fU]))))))))))))))))));
        bufp->chgSData(oldp+35,(vlSelfRef.uart_top__DOT__regs__DOT__rf_count),9);
        bufp->chgSData(oldp+36,(vlSelfRef.uart_top__DOT__regs__DOT__counter_t),10);
        bufp->chgBit(oldp+37,((1U & (~ (0U != (IData)(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt))))));
        bufp->chgCData(oldp+38,(vlSelfRef.uart_top__DOT__regs__DOT__block_cnt),8);
        bufp->chgCData(oldp+39,(vlSelfRef.uart_top__DOT__regs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+40,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0_d));
        bufp->chgBit(oldp+41,(vlSelfRef.uart_top__DOT__regs__DOT__lsr1_d));
        bufp->chgBit(oldp+42,(vlSelfRef.uart_top__DOT__regs__DOT__lsr2_d));
        bufp->chgBit(oldp+43,(vlSelfRef.uart_top__DOT__regs__DOT__lsr3_d));
        bufp->chgBit(oldp+44,(vlSelfRef.uart_top__DOT__regs__DOT__lsr4_d));
        bufp->chgBit(oldp+45,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5_d));
        bufp->chgBit(oldp+46,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6_d));
        bufp->chgBit(oldp+47,(vlSelfRef.uart_top__DOT__regs__DOT__lsr7_d));
        bufp->chgBit(oldp+48,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d));
        bufp->chgBit(oldp+49,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d));
        bufp->chgBit(oldp+50,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d));
        bufp->chgBit(oldp+51,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d));
        bufp->chgBit(oldp+52,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d));
        bufp->chgBit(oldp+53,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_d)) 
                               & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rls_int))));
        bufp->chgBit(oldp+54,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_d)) 
                               & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__thre_int))));
        bufp->chgBit(oldp+55,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_d)) 
                               & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ms_int))));
        bufp->chgBit(oldp+56,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_d)) 
                               & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__ti_int))));
        bufp->chgBit(oldp+57,(((~ (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_d)) 
                               & (IData)(vlSelfRef.uart_top__DOT__regs__DOT__rda_int))));
        bufp->chgBit(oldp+58,(vlSelfRef.uart_top__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+59,(vlSelfRef.uart_top__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+60,(vlSelfRef.uart_top__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+61,(vlSelfRef.uart_top__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+62,(vlSelfRef.uart_top__DOT__regs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+63,(vlSelfRef.uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+64,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q));
        bufp->chgCData(oldp+65,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),8);
        bufp->chgIData(oldp+66,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i),32);
        bufp->chgCData(oldp+67,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0U]),3);
        bufp->chgCData(oldp+68,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [1U]),3);
        bufp->chgCData(oldp+69,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]),3);
        bufp->chgCData(oldp+70,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [3U]),3);
        bufp->chgCData(oldp+71,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [4U]),3);
        bufp->chgCData(oldp+72,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [5U]),3);
        bufp->chgCData(oldp+73,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [6U]),3);
        bufp->chgCData(oldp+74,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [7U]),3);
        bufp->chgCData(oldp+75,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [8U]),3);
        bufp->chgCData(oldp+76,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [9U]),3);
        bufp->chgCData(oldp+77,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0aU]),3);
        bufp->chgCData(oldp+78,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0bU]),3);
        bufp->chgCData(oldp+79,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0cU]),3);
        bufp->chgCData(oldp+80,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0dU]),3);
        bufp->chgCData(oldp+81,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0eU]),3);
        bufp->chgCData(oldp+82,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [0x0fU]),3);
        bufp->chgBit(oldp+83,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgBit(oldp+84,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_we_is));
        bufp->chgBit(oldp+85,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_cyc_is));
        bufp->chgBit(oldp+86,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_stb_is));
        bufp->chgBit(oldp+87,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wre));
        bufp->chgCData(oldp+88,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wbstate),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+89,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_dat_is),8);
        bufp->chgCData(oldp+90,(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is),3);
        bufp->chgBit(oldp+91,(vlSelfRef.uart_top__DOT__we_o));
        bufp->chgBit(oldp+92,(vlSelfRef.uart_top__DOT__regs__DOT__enable));
        bufp->chgCData(oldp+93,(vlSelfRef.uart_top__DOT__regs__DOT__lcr),8);
        bufp->chgSData(oldp+94,(vlSelfRef.uart_top__DOT__regs__DOT__dl),16);
        bufp->chgSData(oldp+95,(vlSelfRef.uart_top__DOT__regs__DOT__dlc),16);
        bufp->chgBit(oldp+96,(vlSelfRef.uart_top__DOT__regs__DOT__tx_reset));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__lcr) 
                                     >> 7U))));
        bufp->chgBit(oldp+98,(vlSelfRef.uart_top__DOT__regs__DOT__lsr0));
        bufp->chgBit(oldp+99,(vlSelfRef.uart_top__DOT__regs__DOT__lsr5));
        bufp->chgBit(oldp+100,(vlSelfRef.uart_top__DOT__regs__DOT__lsr6));
        bufp->chgBit(oldp+101,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+102,(vlSelfRef.uart_top__DOT__regs__DOT__tf_push));
        bufp->chgBit(oldp+103,(vlSelfRef.uart_top__DOT__regs__DOT__rf_push_pulse));
        bufp->chgSData(oldp+104,(vlSelfRef.uart_top__DOT__regs__DOT__tf_count),9);
        bufp->chgCData(oldp+105,(vlSelfRef.uart_top__DOT__regs__DOT__tstate),3);
        bufp->chgCData(oldp+106,(vlSelfRef.uart_top__DOT__regs__DOT__rstate),4);
        bufp->chgCData(oldp+107,(vlSelfRef.uart_top__DOT__regs__DOT__block_value),8);
        bufp->chgBit(oldp+108,(vlSelfRef.uart_top__DOT__regs__DOT__serial_out));
        bufp->chgBit(oldp+109,(vlSelfRef.uart_top__DOT__regs__DOT__serial_in));
        bufp->chgBit(oldp+110,(vlSelfRef.uart_top__DOT__regs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+111,(vlSelfRef.uart_top__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+112,(vlSelfRef.uart_top__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+113,(vlSelfRef.uart_top__DOT__regs__DOT__fifo_read));
        bufp->chgBit(oldp+114,(vlSelfRef.uart_top__DOT__regs__DOT__fifo_write));
        bufp->chgCData(oldp+115,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+116,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+117,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+118,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+119,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+120,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+121,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+122,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b),8);
        bufp->chgSData(oldp+123,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+124,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+125,((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+126,((7U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+127,((0U == (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+128,((0x0000000fU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                                 - (IData)(1U)))),4);
        bufp->chgSData(oldp+129,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+130,((0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
        bufp->chgCData(oldp+131,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),8);
        bufp->chgCData(oldp+132,((0x000000ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),8);
        bufp->chgCData(oldp+133,((0x000000ffU & ((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
        bufp->chgCData(oldp+134,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+135,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+136,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+137,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+138,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+139,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+140,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__bit_out));
        bufp->chgCData(oldp+141,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),8);
        bufp->chgCData(oldp+142,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),8);
        bufp->chgCData(oldp+143,((0x000000ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),8);
    }
    bufp->chgBit(oldp+144,(vlSelfRef.wb_clk_i));
    bufp->chgBit(oldp+145,(vlSelfRef.wb_rst_i));
    bufp->chgCData(oldp+146,(vlSelfRef.wb_adr_i),3);
    bufp->chgCData(oldp+147,(vlSelfRef.wb_dat_i),8);
    bufp->chgCData(oldp+148,(vlSelfRef.wb_dat_o),8);
    bufp->chgBit(oldp+149,(vlSelfRef.wb_we_i));
    bufp->chgBit(oldp+150,(vlSelfRef.wb_stb_i));
    bufp->chgBit(oldp+151,(vlSelfRef.wb_cyc_i));
    bufp->chgCData(oldp+152,(vlSelfRef.wb_sel_i),4);
    bufp->chgBit(oldp+153,(vlSelfRef.wb_ack_o));
    bufp->chgBit(oldp+154,(vlSelfRef.int_o));
    bufp->chgBit(oldp+155,(vlSelfRef.srx_pad_i));
    bufp->chgBit(oldp+156,(vlSelfRef.stx_pad_o));
    bufp->chgBit(oldp+157,(vlSelfRef.rts_pad_o));
    bufp->chgBit(oldp+158,(vlSelfRef.cts_pad_i));
    bufp->chgBit(oldp+159,(vlSelfRef.dtr_pad_o));
    bufp->chgBit(oldp+160,(vlSelfRef.dsr_pad_i));
    bufp->chgBit(oldp+161,(vlSelfRef.ri_pad_i));
    bufp->chgBit(oldp+162,(vlSelfRef.dcd_pad_i));
    bufp->chgCData(oldp+163,((0x000000ffU & ((4U & (IData)(vlSelfRef.uart_top__DOT__wb_interface__DOT__wb_adr_is))
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
    bufp->chgCData(oldp+164,(((((IData)(vlSelfRef.cts_pad_i) 
                                << 3U) | ((IData)(vlSelfRef.dsr_pad_i) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.ri_pad_i) 
                                << 1U) | (IData)(vlSelfRef.dcd_pad_i)))),4);
    bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelfRef.cts_pad_i)))));
    bufp->chgBit(oldp+166,((1U & (~ (IData)(vlSelfRef.dsr_pad_i)))));
    bufp->chgBit(oldp+167,((1U & (~ (IData)(vlSelfRef.ri_pad_i)))));
    bufp->chgBit(oldp+168,((1U & (~ (IData)(vlSelfRef.dcd_pad_i)))));
    bufp->chgBit(oldp+169,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                  >> 3U))));
    bufp->chgBit(oldp+170,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                  >> 2U))));
    bufp->chgBit(oldp+171,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                  >> 1U))));
    bufp->chgBit(oldp+172,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    bufp->chgSData(oldp+173,((((IData)(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                               << 3U) | vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+174,(vlSelfRef.uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
    bufp->chgCData(oldp+175,(vlSelfRef.uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
}

void Vuart_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top___024root__trace_cleanup\n"); );
    // Body
    Vuart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top___024root*>(voidSelf);
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

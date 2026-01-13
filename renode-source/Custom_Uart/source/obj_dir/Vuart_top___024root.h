// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_top.h for the primary calling header

#ifndef VERILATED_VUART_TOP___024ROOT_H_
#define VERILATED_VUART_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vuart_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(wb_clk_i,0,0);
        VL_IN8(wb_rst_i,0,0);
        VL_IN8(wb_adr_i,2,0);
        VL_IN8(wb_dat_i,7,0);
        VL_OUT8(wb_dat_o,7,0);
        VL_IN8(wb_we_i,0,0);
        VL_IN8(wb_stb_i,0,0);
        VL_IN8(wb_cyc_i,0,0);
        VL_OUT8(wb_ack_o,0,0);
        VL_IN8(wb_sel_i,3,0);
        VL_OUT8(int_o,0,0);
        VL_OUT8(stx_pad_o,0,0);
        VL_IN8(srx_pad_i,0,0);
        VL_OUT8(rts_pad_o,0,0);
        VL_IN8(cts_pad_i,0,0);
        VL_OUT8(dtr_pad_o,0,0);
        VL_IN8(dsr_pad_i,0,0);
        VL_IN8(ri_pad_i,0,0);
        VL_IN8(dcd_pad_i,0,0);
        CData/*0:0*/ uart_top__DOT__we_o;
        CData/*0:0*/ uart_top__DOT__re_o;
        CData/*7:0*/ uart_top__DOT__wb_interface__DOT__wb_dat_is;
        CData/*2:0*/ uart_top__DOT__wb_interface__DOT__wb_adr_is;
        CData/*0:0*/ uart_top__DOT__wb_interface__DOT__wb_we_is;
        CData/*0:0*/ uart_top__DOT__wb_interface__DOT__wb_cyc_is;
        CData/*0:0*/ uart_top__DOT__wb_interface__DOT__wb_stb_is;
        CData/*0:0*/ uart_top__DOT__wb_interface__DOT__wre;
        CData/*1:0*/ uart_top__DOT__wb_interface__DOT__wbstate;
        CData/*0:0*/ uart_top__DOT__wb_interface__DOT____VdfgRegularize_h92150d0f_0_0;
        CData/*0:0*/ uart_top__DOT__regs__DOT__enable;
        CData/*0:0*/ uart_top__DOT__regs__DOT__srx_pad;
        CData/*3:0*/ uart_top__DOT__regs__DOT__ier;
        CData/*3:0*/ uart_top__DOT__regs__DOT__iir;
        CData/*1:0*/ uart_top__DOT__regs__DOT__fcr;
        CData/*4:0*/ uart_top__DOT__regs__DOT__mcr;
        CData/*7:0*/ uart_top__DOT__regs__DOT__lcr;
        CData/*7:0*/ uart_top__DOT__regs__DOT__msr;
        CData/*7:0*/ uart_top__DOT__regs__DOT__scratch;
        CData/*0:0*/ uart_top__DOT__regs__DOT__start_dlc;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr_mask_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__msi_reset;
        CData/*3:0*/ uart_top__DOT__regs__DOT__trigger_level;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rx_reset;
        CData/*0:0*/ uart_top__DOT__regs__DOT__tx_reset;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr0;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr2;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr3;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr4;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr5;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr6;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr7;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr0r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr1r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr2r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr3r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr4r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr5r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr6r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr7r;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr_mask;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rls_int;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rda_int;
        CData/*0:0*/ uart_top__DOT__regs__DOT__ti_int;
        CData/*0:0*/ uart_top__DOT__regs__DOT__thre_int;
    };
    struct {
        CData/*0:0*/ uart_top__DOT__regs__DOT__ms_int;
        CData/*0:0*/ uart_top__DOT__regs__DOT__tf_push;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rf_pop;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rf_overrun;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rf_push_pulse;
        CData/*2:0*/ uart_top__DOT__regs__DOT__tstate;
        CData/*3:0*/ uart_top__DOT__regs__DOT__rstate;
        CData/*7:0*/ uart_top__DOT__regs__DOT__block_cnt;
        CData/*7:0*/ uart_top__DOT__regs__DOT__block_value;
        CData/*0:0*/ uart_top__DOT__regs__DOT__serial_out;
        CData/*0:0*/ uart_top__DOT__regs__DOT__serial_in;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr_mask_condition;
        CData/*0:0*/ uart_top__DOT__regs__DOT__iir_read;
        CData/*0:0*/ uart_top__DOT__regs__DOT__msr_read;
        CData/*0:0*/ uart_top__DOT__regs__DOT__fifo_read;
        CData/*0:0*/ uart_top__DOT__regs__DOT__fifo_write;
        CData/*3:0*/ uart_top__DOT__regs__DOT__delayed_modem_signals;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr0_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr1_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr2_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr3_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr4_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr5_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr6_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__lsr7_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rls_int_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__thre_int_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__ms_int_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__ti_int_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rda_int_d;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rls_int_pnd;
        CData/*0:0*/ uart_top__DOT__regs__DOT__rda_int_pnd;
        CData/*0:0*/ uart_top__DOT__regs__DOT__thre_int_pnd;
        CData/*0:0*/ uart_top__DOT__regs__DOT__ms_int_pnd;
        CData/*0:0*/ uart_top__DOT__regs__DOT__ti_int_pnd;
        CData/*4:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__counter;
        CData/*2:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter;
        CData/*6:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__shift_out;
        CData/*0:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__stx_o_tmp;
        CData/*0:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor;
        CData/*0:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__tf_pop;
        CData/*0:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
        CData/*7:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__tf_data_out;
        CData/*0:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__tf_overrun;
        CData/*7:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        CData/*7:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
        CData/*7:0*/ uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        CData/*0:0*/ uart_top__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0;
        CData/*3:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rcounter16;
        CData/*2:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter;
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rshift;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rparity;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rparity_error;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rframing_error;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor;
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__counter_b;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rf_push_q;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rf_push;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7;
        CData/*0:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0;
        CData/*3:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    };
    struct {
        CData/*7:0*/ uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*2:0*/ __Vdly__uart_top__DOT__regs__DOT__tstate;
        CData/*4:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__counter;
        CData/*6:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__shift_out;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_out;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__parity_xor;
        CData/*2:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__bit_counter;
        CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
        CData/*3:0*/ __Vdly__uart_top__DOT__regs__DOT__rstate;
        CData/*2:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rbit_counter;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_xor;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rframing_error;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity_error;
        CData/*0:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rparity;
        CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__rshift;
        CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__counter_b;
        CData/*7:0*/ __Vdly__uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wb_clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wb_rst_i__0;
        SData/*15:0*/ uart_top__DOT__regs__DOT__dl;
        SData/*15:0*/ uart_top__DOT__regs__DOT__dlc;
        SData/*8:0*/ uart_top__DOT__regs__DOT__rf_count;
        SData/*8:0*/ uart_top__DOT__regs__DOT__tf_count;
        SData/*9:0*/ uart_top__DOT__regs__DOT__counter_t;
        SData/*10:0*/ uart_top__DOT__regs__DOT__receiver__DOT__rf_data_in;
        SData/*9:0*/ uart_top__DOT__regs__DOT__receiver__DOT__toc_value;
        SData/*15:0*/ __Vdly__uart_top__DOT__regs__DOT__dlc;
        SData/*8:0*/ __Vdly__uart_top__DOT__regs__DOT__tf_count;
        IData/*31:0*/ uart_top__DOT__wb_dat32_o;
        IData/*31:0*/ uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 256> uart_top__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram;
        VlUnpacked<CData/*2:0*/, 256> uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo;
        VlUnpacked<CData/*7:0*/, 256> uart_top__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vuart_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_top___024root(Vuart_top__Syms* symsp, const char* v__name);
    ~Vuart_top___024root();
    VL_UNCOPYABLE(Vuart_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

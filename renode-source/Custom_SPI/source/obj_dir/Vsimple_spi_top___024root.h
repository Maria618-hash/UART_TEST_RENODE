// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimple_spi_top.h for the primary calling header

#ifndef VERILATED_VSIMPLE_SPI_TOP___024ROOT_H_
#define VERILATED_VSIMPLE_SPI_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vsimple_spi_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimple_spi_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(cyc_i,0,0);
        VL_IN8(stb_i,0,0);
        VL_IN8(adr_i,2,0);
        VL_IN8(we_i,0,0);
        VL_IN8(dat_i,7,0);
        VL_OUT8(dat_o,7,0);
        VL_OUT8(ack_o,0,0);
        VL_OUT8(inta_o,0,0);
        VL_OUT8(sck_o,0,0);
        VL_OUT8(ss_o,0,0);
        VL_OUT8(mosi_o,0,0);
        VL_IN8(miso_i,0,0);
        CData/*7:0*/ simple_spi__DOT__spcr;
        CData/*7:0*/ simple_spi__DOT__sper;
        CData/*7:0*/ simple_spi__DOT__treg;
        CData/*0:0*/ simple_spi__DOT__ss_r;
        CData/*0:0*/ simple_spi__DOT__wfre;
        CData/*0:0*/ simple_spi__DOT__rfwe;
        CData/*0:0*/ simple_spi__DOT__rfre;
        CData/*0:0*/ simple_spi__DOT__wfwe;
        CData/*0:0*/ simple_spi__DOT__wffull;
        CData/*0:0*/ simple_spi__DOT__wfempty;
        CData/*1:0*/ simple_spi__DOT__state;
        CData/*2:0*/ simple_spi__DOT__bcnt;
        CData/*0:0*/ simple_spi__DOT__wb_acc;
        CData/*0:0*/ simple_spi__DOT__wb_wr;
        CData/*3:0*/ simple_spi__DOT__espr;
        CData/*0:0*/ simple_spi__DOT__wr_spsr;
        CData/*0:0*/ simple_spi__DOT__spif;
        CData/*0:0*/ simple_spi__DOT__wcol;
        CData/*1:0*/ simple_spi__DOT__tcnt;
        CData/*0:0*/ simple_spi__DOT____VdfgRegularize_h8f87dc80_0_0;
        CData/*1:0*/ simple_spi__DOT__rfifo__DOT__wp;
        CData/*1:0*/ simple_spi__DOT__rfifo__DOT__rp;
        CData/*1:0*/ simple_spi__DOT__rfifo__DOT__wp_p1;
        CData/*1:0*/ simple_spi__DOT__rfifo__DOT__rp_p1;
        CData/*0:0*/ simple_spi__DOT__rfifo__DOT__gb;
        CData/*0:0*/ simple_spi__DOT__rfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0;
        CData/*1:0*/ simple_spi__DOT__wfifo__DOT__wp;
        CData/*1:0*/ simple_spi__DOT__wfifo__DOT__rp;
        CData/*1:0*/ simple_spi__DOT__wfifo__DOT__wp_p1;
        CData/*1:0*/ simple_spi__DOT__wfifo__DOT__rp_p1;
        CData/*0:0*/ simple_spi__DOT__wfifo__DOT__gb;
        CData/*0:0*/ simple_spi__DOT__wfifo__DOT____VdfgRegularize_hf8b1b9ba_0_0;
        CData/*1:0*/ __Vdly__simple_spi__DOT__state;
        CData/*2:0*/ __Vdly__simple_spi__DOT__bcnt;
        CData/*7:0*/ __Vdly__simple_spi__DOT__treg;
        CData/*0:0*/ __Vdly__simple_spi__DOT__wfre;
        CData/*0:0*/ __Vdly__sck_o;
        CData/*7:0*/ __VdlyVal__simple_spi__DOT__wfifo__DOT__mem__v0;
        CData/*1:0*/ __VdlyDim0__simple_spi__DOT__wfifo__DOT__mem__v0;
        CData/*0:0*/ __VdlySet__simple_spi__DOT__wfifo__DOT__mem__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_i__0;
        SData/*11:0*/ simple_spi__DOT__clkcnt;
        SData/*11:0*/ __Vdly__simple_spi__DOT__clkcnt;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4> simple_spi__DOT__rfifo__DOT__mem;
        VlUnpacked<CData/*7:0*/, 4> simple_spi__DOT__wfifo__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vsimple_spi_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimple_spi_top___024root(Vsimple_spi_top__Syms* symsp, const char* v__name);
    ~Vsimple_spi_top___024root();
    VL_UNCOPYABLE(Vsimple_spi_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

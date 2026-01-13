// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_top__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vuart_top::Vuart_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_top__Syms(contextp(), _vcname__, this)}
    , wb_clk_i{vlSymsp->TOP.wb_clk_i}
    , wb_rst_i{vlSymsp->TOP.wb_rst_i}
    , wb_adr_i{vlSymsp->TOP.wb_adr_i}
    , wb_dat_i{vlSymsp->TOP.wb_dat_i}
    , wb_dat_o{vlSymsp->TOP.wb_dat_o}
    , wb_we_i{vlSymsp->TOP.wb_we_i}
    , wb_stb_i{vlSymsp->TOP.wb_stb_i}
    , wb_cyc_i{vlSymsp->TOP.wb_cyc_i}
    , wb_ack_o{vlSymsp->TOP.wb_ack_o}
    , wb_sel_i{vlSymsp->TOP.wb_sel_i}
    , int_o{vlSymsp->TOP.int_o}
    , stx_pad_o{vlSymsp->TOP.stx_pad_o}
    , srx_pad_i{vlSymsp->TOP.srx_pad_i}
    , rts_pad_o{vlSymsp->TOP.rts_pad_o}
    , cts_pad_i{vlSymsp->TOP.cts_pad_i}
    , dtr_pad_o{vlSymsp->TOP.dtr_pad_o}
    , dsr_pad_i{vlSymsp->TOP.dsr_pad_i}
    , ri_pad_i{vlSymsp->TOP.ri_pad_i}
    , dcd_pad_i{vlSymsp->TOP.dcd_pad_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vuart_top::Vuart_top(const char* _vcname__)
    : Vuart_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_top::~Vuart_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_top___024root___eval_debug_assertions(Vuart_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_top___024root___eval_static(Vuart_top___024root* vlSelf);
void Vuart_top___024root___eval_initial(Vuart_top___024root* vlSelf);
void Vuart_top___024root___eval_settle(Vuart_top___024root* vlSelf);
void Vuart_top___024root___eval(Vuart_top___024root* vlSelf);

void Vuart_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_top___024root___eval_static(&(vlSymsp->TOP));
        Vuart_top___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuart_top::eventsPending() { return false; }

uint64_t Vuart_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vuart_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_top___024root___eval_final(Vuart_top___024root* vlSelf);

VL_ATTR_COLD void Vuart_top::final() {
    Vuart_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_top::hierName() const { return vlSymsp->name(); }
const char* Vuart_top::modelName() const { return "Vuart_top"; }
unsigned Vuart_top::threads() const { return 1; }
void Vuart_top::prepareClone() const { contextp()->prepareClone(); }
void Vuart_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vuart_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vuart_top___024root__trace_decl_types(VerilatedFst* tracep);

void Vuart_top___024root__trace_init_top(Vuart_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_top___024root*>(voidSelf);
    Vuart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vuart_top___024root__trace_decl_types(tracep);
    Vuart_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_top___024root__trace_register(Vuart_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vuart_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vuart_top::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuart_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimple_spi_top__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vsimple_spi_top::Vsimple_spi_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimple_spi_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , cyc_i{vlSymsp->TOP.cyc_i}
    , stb_i{vlSymsp->TOP.stb_i}
    , adr_i{vlSymsp->TOP.adr_i}
    , we_i{vlSymsp->TOP.we_i}
    , dat_i{vlSymsp->TOP.dat_i}
    , dat_o{vlSymsp->TOP.dat_o}
    , ack_o{vlSymsp->TOP.ack_o}
    , inta_o{vlSymsp->TOP.inta_o}
    , sck_o{vlSymsp->TOP.sck_o}
    , ss_o{vlSymsp->TOP.ss_o}
    , mosi_o{vlSymsp->TOP.mosi_o}
    , miso_i{vlSymsp->TOP.miso_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsimple_spi_top::Vsimple_spi_top(const char* _vcname__)
    : Vsimple_spi_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimple_spi_top::~Vsimple_spi_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimple_spi_top___024root___eval_debug_assertions(Vsimple_spi_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_spi_top___024root___eval_static(Vsimple_spi_top___024root* vlSelf);
void Vsimple_spi_top___024root___eval_initial(Vsimple_spi_top___024root* vlSelf);
void Vsimple_spi_top___024root___eval_settle(Vsimple_spi_top___024root* vlSelf);
void Vsimple_spi_top___024root___eval(Vsimple_spi_top___024root* vlSelf);

void Vsimple_spi_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple_spi_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimple_spi_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimple_spi_top___024root___eval_static(&(vlSymsp->TOP));
        Vsimple_spi_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsimple_spi_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimple_spi_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimple_spi_top::eventsPending() { return false; }

uint64_t Vsimple_spi_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsimple_spi_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimple_spi_top___024root___eval_final(Vsimple_spi_top___024root* vlSelf);

VL_ATTR_COLD void Vsimple_spi_top::final() {
    Vsimple_spi_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimple_spi_top::hierName() const { return vlSymsp->name(); }
const char* Vsimple_spi_top::modelName() const { return "Vsimple_spi_top"; }
unsigned Vsimple_spi_top::threads() const { return 1; }
void Vsimple_spi_top::prepareClone() const { contextp()->prepareClone(); }
void Vsimple_spi_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsimple_spi_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimple_spi_top___024root__trace_decl_types(VerilatedFst* tracep);

void Vsimple_spi_top___024root__trace_init_top(Vsimple_spi_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimple_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_spi_top___024root*>(voidSelf);
    Vsimple_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsimple_spi_top___024root__trace_decl_types(tracep);
    Vsimple_spi_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimple_spi_top___024root__trace_register(Vsimple_spi_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vsimple_spi_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimple_spi_top::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimple_spi_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

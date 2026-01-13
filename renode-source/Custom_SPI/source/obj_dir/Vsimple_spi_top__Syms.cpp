// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimple_spi_top__pch.h"
#include "Vsimple_spi_top.h"
#include "Vsimple_spi_top___024root.h"

// FUNCTIONS
Vsimple_spi_top__Syms::~Vsimple_spi_top__Syms()
{
}

Vsimple_spi_top__Syms::Vsimple_spi_top__Syms(VerilatedContext* contextp, const char* namep, Vsimple_spi_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(260);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

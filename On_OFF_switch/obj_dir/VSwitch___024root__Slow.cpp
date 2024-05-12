// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSwitch.h for the primary calling header

#include "verilated.h"

#include "VSwitch__Syms.h"
#include "VSwitch___024root.h"

void VSwitch___024root___ctor_var_reset(VSwitch___024root* vlSelf);

VSwitch___024root::VSwitch___024root(VSwitch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSwitch___024root___ctor_var_reset(this);
}

void VSwitch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSwitch___024root::~VSwitch___024root() {
}

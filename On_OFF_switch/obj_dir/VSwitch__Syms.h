// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSWITCH__SYMS_H_
#define VERILATED_VSWITCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSwitch.h"

// INCLUDE MODULE CLASSES
#include "VSwitch___024root.h"

// SYMS CLASS (contains all model state)
class VSwitch__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSwitch* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSwitch___024root              TOP;

    // CONSTRUCTORS
    VSwitch__Syms(VerilatedContext* contextp, const char* namep, VSwitch* modelp);
    ~VSwitch__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

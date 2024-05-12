// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSwitch.h for the primary calling header

#include "verilated.h"

#include "VSwitch__Syms.h"
#include "VSwitch___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSwitch___024root___dump_triggers__stl(VSwitch___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSwitch___024root___eval_triggers__stl(VSwitch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSwitch___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

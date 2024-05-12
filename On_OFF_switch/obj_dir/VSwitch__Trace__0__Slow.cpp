// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSwitch__Syms.h"


VL_ATTR_COLD void VSwitch___024root__trace_init_sub__TOP__0(VSwitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSwitch___024root__trace_init_top(VSwitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root__trace_init_top\n"); );
    // Body
    VSwitch___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSwitch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSwitch___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSwitch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSwitch___024root__trace_register(VSwitch___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSwitch___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSwitch___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSwitch___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSwitch___024root__trace_full_sub_0(VSwitch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSwitch___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root__trace_full_top_0\n"); );
    // Init
    VSwitch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSwitch___024root*>(voidSelf);
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSwitch___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSwitch___024root__trace_full_sub_0(VSwitch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSwitch___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->f));
}

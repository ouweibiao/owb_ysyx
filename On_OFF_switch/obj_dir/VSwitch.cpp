// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSwitch.h"
#include "VSwitch__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSwitch::VSwitch(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSwitch__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSwitch::VSwitch(const char* _vcname__)
    : VSwitch(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSwitch::~VSwitch() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSwitch___024root___eval_debug_assertions(VSwitch___024root* vlSelf);
#endif  // VL_DEBUG
void VSwitch___024root___eval_static(VSwitch___024root* vlSelf);
void VSwitch___024root___eval_initial(VSwitch___024root* vlSelf);
void VSwitch___024root___eval_settle(VSwitch___024root* vlSelf);
void VSwitch___024root___eval(VSwitch___024root* vlSelf);

void VSwitch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSwitch::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSwitch___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSwitch___024root___eval_static(&(vlSymsp->TOP));
        VSwitch___024root___eval_initial(&(vlSymsp->TOP));
        VSwitch___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSwitch___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSwitch::eventsPending() { return false; }

uint64_t VSwitch::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSwitch::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSwitch___024root___eval_final(VSwitch___024root* vlSelf);

VL_ATTR_COLD void VSwitch::final() {
    VSwitch___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSwitch::hierName() const { return vlSymsp->name(); }
const char* VSwitch::modelName() const { return "VSwitch"; }
unsigned VSwitch::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSwitch::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSwitch___024root__trace_init_top(VSwitch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSwitch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSwitch___024root*>(voidSelf);
    VSwitch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSwitch___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSwitch___024root__trace_register(VSwitch___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSwitch::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSwitch::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSwitch___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

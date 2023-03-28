// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimTop__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_core_inst_mem_in_rdata{vlSymsp->TOP.io_core_inst_mem_in_rdata}
    , io_core_inst_mem_in_rvalid{vlSymsp->TOP.io_core_inst_mem_in_rvalid}
    , io_core_inst_mem_in_wvalid{vlSymsp->TOP.io_core_inst_mem_in_wvalid}
    , io_core_data_mem_in_rdata{vlSymsp->TOP.io_core_data_mem_in_rdata}
    , io_core_data_mem_in_rvalid{vlSymsp->TOP.io_core_data_mem_in_rvalid}
    , io_core_data_mem_in_wvalid{vlSymsp->TOP.io_core_data_mem_in_wvalid}
    , io_core_inst_mem_out_en{vlSymsp->TOP.io_core_inst_mem_out_en}
    , io_core_inst_mem_out_wr{vlSymsp->TOP.io_core_inst_mem_out_wr}
    , io_core_inst_mem_out_addr{vlSymsp->TOP.io_core_inst_mem_out_addr}
    , io_core_inst_mem_out_rready{vlSymsp->TOP.io_core_inst_mem_out_rready}
    , io_core_inst_mem_out_wready{vlSymsp->TOP.io_core_inst_mem_out_wready}
    , io_core_inst_mem_out_wdata{vlSymsp->TOP.io_core_inst_mem_out_wdata}
    , io_core_inst_mem_out_wmask{vlSymsp->TOP.io_core_inst_mem_out_wmask}
    , io_core_data_mem_out_en{vlSymsp->TOP.io_core_data_mem_out_en}
    , io_core_data_mem_out_wr{vlSymsp->TOP.io_core_data_mem_out_wr}
    , io_core_data_mem_out_addr{vlSymsp->TOP.io_core_data_mem_out_addr}
    , io_core_data_mem_out_rready{vlSymsp->TOP.io_core_data_mem_out_rready}
    , io_core_data_mem_out_wready{vlSymsp->TOP.io_core_data_mem_out_wready}
    , io_core_data_mem_out_wdata{vlSymsp->TOP.io_core_data_mem_out_wdata}
    , io_core_data_mem_out_wmask{vlSymsp->TOP.io_core_data_mem_out_wmask}
    , io_core_debug_debug_pc{vlSymsp->TOP.io_core_debug_debug_pc}
    , io_core_debug_debug_rf_we{vlSymsp->TOP.io_core_debug_debug_rf_we}
    , io_core_debug_debug_rf_wnum{vlSymsp->TOP.io_core_debug_debug_rf_wnum}
    , io_core_debug_debug_rf_wdata{vlSymsp->TOP.io_core_debug_debug_rf_wdata}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf);
void VSimTop___024root___eval(VSimTop___024root* vlSelf);
QData VSimTop___024root___change_request(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___final(VSimTop___024root* vlSelf);

static void _eval_initial_loop(VSimTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimTop___024root___eval_settle(&(vlSymsp->TOP));
        VSimTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../build/SimTop.v", 744, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../build/SimTop.v", 744, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VSimTop::final() {
    VSimTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VSimTop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimTop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VSimTop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedVcd;


//----------

VL_MODULE(VSimTop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_core_inst_mem_out_en,0,0);
    VL_OUT8(io_core_inst_mem_out_wr,0,0);
    VL_OUT8(io_core_inst_mem_out_rready,0,0);
    VL_OUT8(io_core_inst_mem_out_wready,0,0);
    VL_OUT8(io_core_inst_mem_out_wmask,7,0);
    VL_OUT8(io_core_data_mem_out_en,0,0);
    VL_OUT8(io_core_data_mem_out_wr,0,0);
    VL_OUT8(io_core_data_mem_out_rready,0,0);
    VL_OUT8(io_core_data_mem_out_wready,0,0);
    VL_OUT8(io_core_data_mem_out_wmask,7,0);
    VL_OUT8(io_core_debug_debug_rf_we,0,0);
    VL_OUT8(io_core_debug_debug_rf_wnum,4,0);
    VL_IN64(io_core_inst_mem_in_rdata,63,0);
    VL_IN64(io_core_inst_mem_in_rvalid,63,0);
    VL_IN64(io_core_inst_mem_in_wvalid,63,0);
    VL_IN64(io_core_data_mem_in_rdata,63,0);
    VL_IN64(io_core_data_mem_in_rvalid,63,0);
    VL_IN64(io_core_data_mem_in_wvalid,63,0);
    VL_OUT64(io_core_inst_mem_out_addr,63,0);
    VL_OUT64(io_core_inst_mem_out_wdata,63,0);
    VL_OUT64(io_core_data_mem_out_addr,63,0);
    VL_OUT64(io_core_data_mem_out_wdata,63,0);
    VL_OUT64(io_core_debug_debug_pc,63,0);
    VL_OUT64(io_core_debug_debug_nextpc,63,0);
    VL_OUT64(io_core_debug_debug_rf_wdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_br;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr;
        CData/*6:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type;
        CData/*6:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_3;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2;
        SData/*8:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type;
        SData/*9:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN;
        SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0;
        SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__inst;
        IData/*16:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1;
        VlWide<3>/*64:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__pc_seq;
        QData/*32:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__tmprdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_rval;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec_rval;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc_rval;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_src_T_16;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file;
    };

    // LOCAL VARIABLES
    CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1;
    QData/*63:0*/ __Vtask_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read__0__rdata;
    QData/*63:0*/ __Vtask_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_read__3__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop___024root);  ///< Copying not allowed
  public:
    VSimTop___024root(const char* name);
    ~VSimTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

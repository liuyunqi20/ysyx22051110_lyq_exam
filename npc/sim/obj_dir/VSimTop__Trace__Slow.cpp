// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+236,"clock", false,-1);
        tracep->declBit(c+237,"reset", false,-1);
        tracep->declQuad(c+238,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+242,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+243,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+244,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+246,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+236,"SimTop clock", false,-1);
        tracep->declBit(c+237,"SimTop reset", false,-1);
        tracep->declQuad(c+238,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+242,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+243,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+244,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+246,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+236,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top reset", false,-1);
        tracep->declQuad(c+238,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+242,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+243,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+244,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+246,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+236,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_if io_inst_mem_ar_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_if io_inst_mem_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_if io_inst_mem_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+11,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBit(c+13,"SimTop my_core_top my_if io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+14,"SimTop my_core_top my_if io_if2mem_ms_wait_fs", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop my_core_top my_if io_inst_mem_ar_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_core_top my_if io_inst_mem_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_core_top my_if io_inst_mem_rd_ready", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+22,"SimTop my_core_top my_if io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_if io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_if io_fs_next_ok", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+18,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_core_top my_if fs_wait_ms", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_if fs_state", false,-1, 2,0);
        tracep->declBus(c+21,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declQuad(c+26,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+24,"SimTop my_core_top my_if fs_next_ok", false,-1);
        tracep->declQuad(c+28,"SimTop my_core_top my_if unnamedblk1 fs_inst_data", false,-1, 63,0);
        tracep->declBit(c+236,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+21,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+30,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+31,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+34,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+35,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+36,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+38,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+43,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+44,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+45,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+31,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+15,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+51,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+236,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+54,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+55,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+21,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+57,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+34,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+35,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+36,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+40,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+43,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+44,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+45,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+236,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+58,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+59,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+31,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+30,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+47,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+236,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+31,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+58,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+59,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+30,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+32,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+60+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+15,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+34,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+35,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+36,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+38,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+43,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+44,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+45,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+31,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+15,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+51,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+38,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+31,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+39,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+45,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+124,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+126,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+128,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+129,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+130,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+34,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+134,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+138,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+142,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+145,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+147,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+148,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+149,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+236,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+31,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+39,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+45,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+124,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_mem io_has_intr", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_mem io_data_mem_ar_ready", false,-1);
        tracep->declBit(c+152,"SimTop my_core_top my_mem io_data_mem_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_mem io_data_mem_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+153,"SimTop my_core_top my_mem io_data_mem_aw_ready", false,-1);
        tracep->declBit(c+154,"SimTop my_core_top my_mem io_data_mem_wt_ready", false,-1);
        tracep->declBit(c+155,"SimTop my_core_top my_mem io_data_mem_b_valid", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_mem io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_mem io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+45,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+31,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+156,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop my_core_top my_mem io_data_mem_ar_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_mem io_data_mem_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+161,"SimTop my_core_top my_mem io_data_mem_rd_ready", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_mem io_data_mem_aw_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_mem io_data_mem_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+163,"SimTop my_core_top my_mem io_data_mem_wt_valid", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_mem io_data_mem_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_mem io_data_mem_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+165,"SimTop my_core_top my_mem io_data_mem_b_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top my_mem io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+14,"SimTop my_core_top my_mem io_if2mem_ms_wait_fs", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_mem ms_wait_fs", false,-1);
        tracep->declBit(c+166,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBus(c+167,"SimTop my_core_top my_mem ms_state", false,-1, 3,0);
        tracep->declBit(c+168,"SimTop my_core_top my_mem rd_req", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_mem wt_req", false,-1);
        tracep->declQuad(c+170,"SimTop my_core_top my_mem ms_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+172,"SimTop my_core_top my_mem mrdata", false,-1, 63,0);
        tracep->declBus(c+174,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+175,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+176,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+15,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+38,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+45,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+46,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+31,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+156,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+53,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+177,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+179,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+24,"SimTop my_core_top my_wb io_fs_next_ok", false,-1);
        tracep->declBit(c+30,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+31,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+11,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+53,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+183,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+184,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+236,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+187,"SimTop my_core_top my_clint io_en", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_clint io_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_clint io_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+193,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+195,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+236,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+45,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+53,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+183,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+184,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+192,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+179,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+197,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+198,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+199,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+200,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+201,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+202,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+206,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+208,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+210,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+212,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_csr has_intr_t", false,-1);
        tracep->declBit(c+236,"SimTop my_core_top my_axi_bridge clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_axi_bridge reset", false,-1);
        tracep->declBit(c+214,"SimTop my_core_top my_axi_bridge io_ar_valid", false,-1);
        tracep->declQuad(c+215,"SimTop my_core_top my_axi_bridge io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+217,"SimTop my_core_top my_axi_bridge io_rd_ready", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_axi_bridge io_aw_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_axi_bridge io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+218,"SimTop my_core_top my_axi_bridge io_wt_valid", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_axi_bridge io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_axi_bridge io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+219,"SimTop my_core_top my_axi_bridge io_b_ready", false,-1);
        tracep->declQuad(c+220,"SimTop my_core_top my_axi_bridge io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+222,"SimTop my_core_top my_axi_bridge io_sram_rd_resp", false,-1);
        tracep->declBit(c+187,"SimTop my_core_top my_axi_bridge io_sram_wt_resp", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge io_ar_ready", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_axi_bridge io_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_axi_bridge io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+153,"SimTop my_core_top my_axi_bridge io_aw_ready", false,-1);
        tracep->declBit(c+224,"SimTop my_core_top my_axi_bridge io_wt_ready", false,-1);
        tracep->declBit(c+225,"SimTop my_core_top my_axi_bridge io_b_valid", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_axi_bridge io_sram_rd_en", false,-1);
        tracep->declQuad(c+215,"SimTop my_core_top my_axi_bridge io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+187,"SimTop my_core_top my_axi_bridge io_sram_wt_en", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_axi_bridge io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_axi_bridge io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+226,"SimTop my_core_top my_axi_bridge io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBus(c+227,"SimTop my_core_top my_axi_bridge rstate", false,-1, 2,0);
        tracep->declBus(c+228,"SimTop my_core_top my_axi_bridge wstate", false,-1, 2,0);
        tracep->declBit(c+229,"SimTop my_core_top my_axi_bridge rd_wait_sel", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_axi_bridge rdata_r", false,-1, 63,0);
        tracep->declBit(c+230,"SimTop my_core_top my_axi_bridge resp_data_ok", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_axi_bridge waddr_r", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_axi_bridge wdata_r", false,-1, 63,0);
        tracep->declBus(c+226,"SimTop my_core_top my_axi_bridge wmask_r", false,-1, 7,0);
        tracep->declBit(c+231,"SimTop my_core_top my_axi_bridge b_wait_ready", false,-1);
        tracep->declBit(c+232,"SimTop my_core_top my_axi_bridge unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+236,"SimTop my_core_top my_arbiter clock", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_arbiter reset", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top my_arbiter io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_core_top my_arbiter io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_core_top my_arbiter io_in_0_rd_ready", false,-1);
        tracep->declBit(c+158,"SimTop my_core_top my_arbiter io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+161,"SimTop my_core_top my_arbiter io_in_1_rd_ready", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_arbiter io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+163,"SimTop my_core_top my_arbiter io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_arbiter io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_arbiter io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+165,"SimTop my_core_top my_arbiter io_in_1_b_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_arbiter io_out_ar_ready", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+153,"SimTop my_core_top my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+224,"SimTop my_core_top my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+225,"SimTop my_core_top my_arbiter io_out_b_valid", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_arbiter io_in_0_ar_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_arbiter io_in_0_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_arbiter io_in_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+151,"SimTop my_core_top my_arbiter io_in_1_ar_ready", false,-1);
        tracep->declBit(c+152,"SimTop my_core_top my_arbiter io_in_1_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_arbiter io_in_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+153,"SimTop my_core_top my_arbiter io_in_1_aw_ready", false,-1);
        tracep->declBit(c+154,"SimTop my_core_top my_arbiter io_in_1_wt_ready", false,-1);
        tracep->declBit(c+155,"SimTop my_core_top my_arbiter io_in_1_b_valid", false,-1);
        tracep->declBit(c+214,"SimTop my_core_top my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+215,"SimTop my_core_top my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+217,"SimTop my_core_top my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+218,"SimTop my_core_top my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+219,"SimTop my_core_top my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+234,"SimTop my_core_top my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_core_top my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop my_core_top my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_core_top my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+214,"SimTop my_core_top my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+215,"SimTop my_core_top my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+235,"SimTop my_core_top my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+153,"SimTop my_core_top my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+153,"SimTop my_core_top my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+162,"SimTop my_core_top my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+222,"SimTop my_core_top my_rmem_port en", false,-1);
        tracep->declBit(c+247,"SimTop my_core_top my_rmem_port wr", false,-1);
        tracep->declQuad(c+215,"SimTop my_core_top my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+220,"SimTop my_core_top my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+248,"SimTop my_core_top my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+187,"SimTop my_core_top my_wmem_port en", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_wmem_port wr", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+226,"SimTop my_core_top my_wmem_port wmask", false,-1, 7,0);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
        tracep->fullQData(oldp+3,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
        tracep->fullBit(oldp+5,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
        tracep->fullBit(oldp+6,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__rstate))));
        tracep->fullBit(oldp+7,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_rd_valid_T_1) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__rd_chosen)))));
        tracep->fullQData(oldp+8,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__rdata_r),64);
        tracep->fullBit(oldp+10,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
        tracep->fullQData(oldp+11,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullBit(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok));
        tracep->fullBit(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
        tracep->fullQData(oldp+15,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2));
        tracep->fullQData(oldp+18,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+20,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                        >> 2U))));
        tracep->fullIData(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullBit(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2mem_fs_mem_ok_T));
        tracep->fullBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
        tracep->fullBit(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
        tracep->fullCData(oldp+25,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
        tracep->fullQData(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullQData(oldp+28,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+31,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+32,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
        tracep->fullIData(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
        tracep->fullBit(oldp+35,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+36,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+38,((((((0x37U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (((((((0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                          & (0xe3U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x263U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & ((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                              | (0x83U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             | (0x103U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            | (0x203U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           | (0x283U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          | (0x303U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x183U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        | (((((0x23U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                              & (0xa3U 
                                                 != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             & (0x123U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0x1a3U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (((((((((((((((((((((((((0x13U 
                                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                                     | (0x113U 
                                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                                    | (0x193U 
                                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                                   | (0x213U 
                                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                                  | (0x313U 
                                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                                 | (0x393U 
                                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                                | (0x93U 
                                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                               | (0x293U 
                                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                              | (0x4293U 
                                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                             | (0x1bU 
                                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                            | (0x9bU 
                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                           | (0x29bU 
                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                          | (0x829bU 
                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                         | (0x33U 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                        | (0x8033U 
                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                       | (0xb3U 
                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                      | (0x133U 
                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                     | (0x1b3U 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x233U 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x2b3U 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                  | (0x82b3U 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                 | (0x333U 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                | (0x3b3U 
                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                               | (0x3bU 
                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                              | (((((((((((((((((((((((((0x803bU 
                                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                                        | (0xbbU 
                                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                       | (0x2bbU 
                                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                      | (0x82bbU 
                                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                     | (0x433U 
                                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                    | (0x4b3U 
                                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                   | (0x5b3U 
                                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                  | (0x533U 
                                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                 | (0x43bU 
                                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                                | (0x633U 
                                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                               | (0x6b3U 
                                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                              | (0x63bU 
                                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                             | (0x6bbU 
                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                            | (0x733U 
                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                           | (0x7b3U 
                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                          | (0x73bU 
                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                         | (0x7bbU 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                        | (0xf3U 
                                                           == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                       | (0x173U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                      | (0x1f3U 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     | (0x2f3U 
                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                    | (0x373U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                   | (0x3f3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x73U 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                 | (0x30200073U 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)))))))));
        tracep->fullBit(oldp+39,((((((((((((0x37U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                           & (0x17U 
                                              != (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                          & (0x6fU 
                                             != (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                         & (0x67U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                        & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  & (((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                          | (0x83U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x103U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
        tracep->fullBit(oldp+40,((((((((((((0x37U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                           & (0x17U 
                                              != (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                          & (0x6fU 
                                             != (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                         & (0x67U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                        & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  & (((((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                              | (0x83U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             | (0x103U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            | (0x203U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           | (0x283U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          | (0x303U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x183U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
        tracep->fullBit(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+43,(((((((((((((((((0x37U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                & (0x17U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                               & (0x6fU 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                              & (0x67U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                             & (0x63U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0xe3U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x263U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0x2e3U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x363U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x83U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (0x103U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    & (0x203U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  & ((((((((((((((((0x303U 
                                                    != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                   & (0x183U 
                                                      != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  & (0x23U 
                                                     != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 & (0xa3U 
                                                    != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                & (0x123U 
                                                   != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0x1a3U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              & (0x13U 
                                                 != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             & (0x113U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0x193U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x213U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0x313U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x393U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x93U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                       & (0x293U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                      & (0x4293U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                     & (((((0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                           | (0x9bU 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                          | (0x29bU 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                         | (0x829bU 
                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                        | ((((((0x33U 
                                                != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                               & (0x8033U 
                                                  != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                              & (0xb3U 
                                                 != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                             & (0x133U 
                                                != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                            & (0x1b3U 
                                               != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11)))))));
        tracep->fullCData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+53,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+54,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+55,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+59,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+128,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+136,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+137,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                          ? (((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                       >> 0x3fU)) 
                                              ^ (~ (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                            >> 0x3fU)))) 
                                             & ((IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                         >> 0x3fU)) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                   >> 0x1fU)))
                                          : (((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                         >> 0x3fU))) 
                                             & ((IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                         >> 0x3fU)) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                   >> 0x1fU)))))));
        VL_EXTEND_WQ(127,64, __Vtemp46, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp47, __Vtemp46, 
                      (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
        __Vtemp48[0U] = __Vtemp47[0U];
        __Vtemp48[1U] = __Vtemp47[1U];
        __Vtemp48[2U] = __Vtemp47[2U];
        __Vtemp48[3U] = (0x7fffffffU & __Vtemp47[3U]);
        tracep->fullWData(oldp+138,(__Vtemp48),127);
        __Vtemp50[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        __Vtemp50[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                 >> 0x20U));
        __Vtemp50[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                       >> 0x3fU)));
        __Vtemp51[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
        __Vtemp51[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                 >> 0x20U));
        __Vtemp51[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                       >> 0x3fU)));
        VL_DIVS_WWW(65, __Vtemp52, __Vtemp50, __Vtemp51);
        __Vtemp53[0U] = __Vtemp52[0U];
        __Vtemp53[1U] = __Vtemp52[1U];
        __Vtemp53[2U] = (1U & __Vtemp52[2U]);
        tracep->fullWData(oldp+142,(__Vtemp53),65);
        tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+148,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullBit(oldp+151,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2)) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__rstate)))));
        tracep->fullBit(oldp+152,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_rd_valid_T_1) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__rd_chosen))));
        tracep->fullBit(oldp+153,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wstate))));
        tracep->fullBit(oldp+154,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wstate) 
                                    >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+155,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_b_valid_T_1) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullBit(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1));
        tracep->fullQData(oldp+159,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullBit(oldp+161,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 1U))));
        tracep->fullBit(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_aw_valid_T_1));
        tracep->fullBit(oldp+163,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 2U))));
        tracep->fullCData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wt_bits_wstrb),8);
        tracep->fullBit(oldp+165,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 3U))));
        tracep->fullBit(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullCData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),4);
        tracep->fullBit(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rd_req));
        tracep->fullBit(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__wt_req));
        tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
        tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
        tracep->fullCData(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+176,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullQData(oldp+179,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+181,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+183,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+184,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+185,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullBit(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge_io_sram_wt_en));
        tracep->fullQData(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__waddr_r),64);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wdata_r),64);
        tracep->fullBit(oldp+192,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullQData(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullCData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+206,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+212,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullBit(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+215,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2)
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc
                                      : (0xfffffffffffffff8ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result))),64);
        tracep->fullBit(oldp+217,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                             >> 2U)))));
        tracep->fullBit(oldp+218,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__wt_chosen) 
                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                      >> 2U))));
        tracep->fullBit(oldp+219,(vlSelf->SimTop__DOT__my_core_top__DOT___my_arbiter_io_out_b_ready));
        tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__my_core_top__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_sram_rd_en_T_3));
        tracep->fullBit(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_rd_valid_T_1));
        tracep->fullBit(oldp+224,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wstate) 
                                         >> 1U))));
        tracep->fullBit(oldp+225,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT___io_b_valid_T_1));
        tracep->fullCData(oldp+226,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wmask_r),8);
        tracep->fullCData(oldp+227,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__rstate),3);
        tracep->fullCData(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__wstate),3);
        tracep->fullBit(oldp+229,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__rd_wait_sel));
        tracep->fullBit(oldp+230,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__resp_data_ok));
        tracep->fullBit(oldp+231,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__b_wait_ready));
        tracep->fullBit(oldp+232,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+233,(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+234,(vlSelf->SimTop__DOT__my_core_top__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2)))));
        tracep->fullBit(oldp+236,(vlSelf->clock));
        tracep->fullBit(oldp+237,(vlSelf->reset));
        tracep->fullQData(oldp+238,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+240,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+242,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+243,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+244,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+246,(vlSelf->io_core_debug_raise_intr));
        tracep->fullBit(oldp+247,(0U));
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__tmprdata),64);
        tracep->fullBit(oldp+250,(1U));
    }
}

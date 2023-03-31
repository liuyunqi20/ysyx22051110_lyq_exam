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
        tracep->declBit(c+177,"clock", false,-1);
        tracep->declBit(c+178,"reset", false,-1);
        tracep->declQuad(c+179,"io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+183,"io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+185,"io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+187,"io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+189,"io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+191,"io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+192,"io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+193,"io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+195,"io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+196,"io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+197,"io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+199,"io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+200,"io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+201,"io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+202,"io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+204,"io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+205,"io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+206,"io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+208,"io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+209,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+213,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+214,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+215,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop clock", false,-1);
        tracep->declBit(c+178,"SimTop reset", false,-1);
        tracep->declQuad(c+179,"SimTop io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+183,"SimTop io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+189,"SimTop io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+191,"SimTop io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+192,"SimTop io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+193,"SimTop io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+195,"SimTop io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+196,"SimTop io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+197,"SimTop io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+199,"SimTop io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+200,"SimTop io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+201,"SimTop io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+202,"SimTop io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+204,"SimTop io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+205,"SimTop io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+206,"SimTop io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+208,"SimTop io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+209,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+213,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+214,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+215,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top reset", false,-1);
        tracep->declQuad(c+193,"SimTop my_core_top io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+200,"SimTop my_core_top io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+201,"SimTop my_core_top io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+202,"SimTop my_core_top io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"SimTop my_core_top io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+208,"SimTop my_core_top io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+209,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+213,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+214,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+215,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+7,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declQuad(c+193,"SimTop my_core_top my_if io_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+12,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declBit(c+177,"SimTop my_core_top my_if my_imem_port clk", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_if my_imem_port reset", false,-1);
        tracep->declBit(c+219,"SimTop my_core_top my_if my_imem_port en", false,-1);
        tracep->declBit(c+220,"SimTop my_core_top my_if my_imem_port wr", false,-1);
        tracep->declQuad(c+12,"SimTop my_core_top my_if my_imem_port addr", false,-1, 63,0);
        tracep->declQuad(c+217,"SimTop my_core_top my_if my_imem_port rdata", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+26,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+27,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+28,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+34,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+177,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+37,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+38,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+40,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+18,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+14,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+23,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+26,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+27,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+28,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+177,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+41,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+42,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+15,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+30,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+41,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+42,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+43+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+9,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+14,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+26,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+27,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+28,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+34,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+14,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+22,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+28,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+107,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+109,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+111,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+112,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+117,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+119,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+120,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+121,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+125,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+128,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+130,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+131,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+132,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+14,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+22,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+25,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+28,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+107,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+133,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_core_top my_mem io_data_mem_out_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_mem io_data_mem_out_wr", false,-1);
        tracep->declQuad(c+135,"SimTop my_core_top my_mem io_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_mem io_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+208,"SimTop my_core_top my_mem io_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+135,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBus(c+137,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+138,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+139,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declBit(c+23,"SimTop my_core_top my_mem my_dmem_port en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_mem my_dmem_port wr", false,-1);
        tracep->declQuad(c+135,"SimTop my_core_top my_mem my_dmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_mem my_dmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+140,"SimTop my_core_top my_mem my_dmem_port wmask", false,-1, 7,0);
        tracep->declQuad(c+141,"SimTop my_core_top my_mem my_dmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+221,"SimTop my_core_top my_mem my_dmem_port tmprdata", false,-1, 63,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+133,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+36,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+145,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+146,"SimTop my_core_top my_wb io_csr_out_mepc", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+7,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+28,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+36,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+177,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_clint io_en", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_clint io_wr", false,-1);
        tracep->declQuad(c+135,"SimTop my_core_top my_clint io_waddr", false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop my_core_top my_clint io_wdata", false,-1, 63,0);
        tracep->declBit(c+154,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+155,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+157,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+159,"SimTop my_core_top my_clint unnamedblk1 wen", false,-1);
        tracep->declBit(c+177,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+178,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+36,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+154,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+143,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop my_core_top my_csr io_out_mepc", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+145,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declBus(c+160,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+161,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+162,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+163,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+164,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+165,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+167,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+169,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+171,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+173,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_csr mstatus_rval", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+145,"SimTop my_core_top my_csr has_intr_t", false,-1);
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
        tracep->fullBit(oldp+6,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_br));
        tracep->fullQData(oldp+7,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullQData(oldp+9,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullIData(oldp+11,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullQData(oldp+12,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we));
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+16,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
        tracep->fullIData(oldp+18,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
        tracep->fullBit(oldp+19,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+20,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+22,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en));
        tracep->fullBit(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+25,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+26,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+27,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+28,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+29,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+32,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+36,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+37,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+38,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+42,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+75,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+77,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+79,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+89,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+101,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+119,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+120,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
        tracep->fullWData(oldp+121,(__Vtemp48),127);
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
        tracep->fullWData(oldp+125,(__Vtemp53),65);
        tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullQData(oldp+135,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullCData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+138,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullCData(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10),8);
        tracep->fullQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata),64);
        tracep->fullQData(oldp+143,(((0x342U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                 >> 0x14U))
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause
                                      : ((0x341U == 
                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                           >> 0x14U))
                                          ? (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                          : ((0x305U 
                                              == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                  >> 0x14U))
                                              ? (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)
                                              : ((0x300U 
                                                  == 
                                                  (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_rval
                                                  : 0ULL))))),64);
        tracep->fullBit(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullQData(oldp+146,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullQData(oldp+148,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+150,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+151,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+152,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullBit(oldp+154,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullQData(oldp+155,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
        tracep->fullCData(oldp+160,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_rval),64);
        tracep->fullBit(oldp+177,(vlSelf->clock));
        tracep->fullBit(oldp+178,(vlSelf->reset));
        tracep->fullQData(oldp+179,(vlSelf->io_core_inst_mem_in_rdata),64);
        tracep->fullQData(oldp+181,(vlSelf->io_core_inst_mem_in_rvalid),64);
        tracep->fullQData(oldp+183,(vlSelf->io_core_inst_mem_in_wvalid),64);
        tracep->fullQData(oldp+185,(vlSelf->io_core_data_mem_in_rdata),64);
        tracep->fullQData(oldp+187,(vlSelf->io_core_data_mem_in_rvalid),64);
        tracep->fullQData(oldp+189,(vlSelf->io_core_data_mem_in_wvalid),64);
        tracep->fullBit(oldp+191,(vlSelf->io_core_inst_mem_out_en));
        tracep->fullBit(oldp+192,(vlSelf->io_core_inst_mem_out_wr));
        tracep->fullQData(oldp+193,(vlSelf->io_core_inst_mem_out_addr),64);
        tracep->fullBit(oldp+195,(vlSelf->io_core_inst_mem_out_rready));
        tracep->fullBit(oldp+196,(vlSelf->io_core_inst_mem_out_wready));
        tracep->fullQData(oldp+197,(vlSelf->io_core_inst_mem_out_wdata),64);
        tracep->fullCData(oldp+199,(vlSelf->io_core_inst_mem_out_wmask),8);
        tracep->fullBit(oldp+200,(vlSelf->io_core_data_mem_out_en));
        tracep->fullBit(oldp+201,(vlSelf->io_core_data_mem_out_wr));
        tracep->fullQData(oldp+202,(vlSelf->io_core_data_mem_out_addr),64);
        tracep->fullBit(oldp+204,(vlSelf->io_core_data_mem_out_rready));
        tracep->fullBit(oldp+205,(vlSelf->io_core_data_mem_out_wready));
        tracep->fullQData(oldp+206,(vlSelf->io_core_data_mem_out_wdata),64);
        tracep->fullCData(oldp+208,(vlSelf->io_core_data_mem_out_wmask),8);
        tracep->fullQData(oldp+209,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+211,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+213,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+214,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+215,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullQData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata),64);
        tracep->fullBit(oldp+219,(1U));
        tracep->fullBit(oldp+220,(0U));
        tracep->fullQData(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__tmprdata),64);
    }
}

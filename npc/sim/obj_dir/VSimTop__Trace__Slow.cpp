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
        tracep->declBit(c+239,"clock", false,-1);
        tracep->declBit(c+240,"reset", false,-1);
        tracep->declQuad(c+241,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+243,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+245,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+246,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+247,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+249,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+239,"SimTop clock", false,-1);
        tracep->declBit(c+240,"SimTop reset", false,-1);
        tracep->declQuad(c+241,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+245,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+246,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+247,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+249,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top reset", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top io_axi_sram_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top io_axi_sram_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top io_axi_sram_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top io_axi_sram_0_aw_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top io_axi_sram_0_wt_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top io_axi_sram_0_b_valid", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top io_axi_sram_1_ar_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top io_axi_sram_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top io_axi_sram_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top io_axi_sram_1_aw_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top io_axi_sram_1_wt_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top io_axi_sram_1_b_valid", false,-1);
        tracep->declQuad(c+241,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+245,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+246,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+247,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+12,"SimTop my_core_top io_axi_sram_0_ar_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top io_axi_sram_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top io_axi_sram_0_rd_ready", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top io_axi_sram_0_aw_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top io_axi_sram_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+16,"SimTop my_core_top io_axi_sram_0_wt_valid", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top io_axi_sram_0_b_ready", false,-1);
        tracep->declBit(c+18,"SimTop my_core_top io_axi_sram_1_ar_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top io_axi_sram_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+21,"SimTop my_core_top io_axi_sram_1_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top io_axi_sram_1_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top io_axi_sram_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_core_top io_axi_sram_1_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top io_axi_sram_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top io_axi_sram_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_core_top io_axi_sram_1_b_ready", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+28,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_inst_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+33,"SimTop my_core_top my_if io_inst_mem_addr_ok", false,-1);
        tracep->declBit(c+34,"SimTop my_core_top my_if io_inst_mem_data_ok", false,-1);
        tracep->declBit(c+35,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+36,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBit(c+38,"SimTop my_core_top my_if io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_if io_if2mem_ms_wait_fs", false,-1);
        tracep->declQuad(c+40,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declBit(c+42,"SimTop my_core_top my_if io_inst_mem_en", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_if io_inst_mem_addr", false,-1, 63,0);
        tracep->declBus(c+43,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+34,"SimTop my_core_top my_if io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+44,"SimTop my_core_top my_if io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+45,"SimTop my_core_top my_if io_fs_next_ok", false,-1);
        tracep->declQuad(c+40,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_if fs_wait_ms", false,-1);
        tracep->declBus(c+46,"SimTop my_core_top my_if fs_state", false,-1, 2,0);
        tracep->declBus(c+43,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declQuad(c+47,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+45,"SimTop my_core_top my_if fs_next_ok", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_if unnamedblk1 fs_inst_data", false,-1, 63,0);
        tracep->declBit(c+239,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+40,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+43,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+51,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+53,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+55,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+56,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+57,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+58,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+59,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+60,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+61,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+63,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+64,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+65,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+66,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+52,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+40,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+239,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+73,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+74,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+43,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+76,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+55,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+56,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+57,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+60,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+58,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+61,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+63,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+64,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+65,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+66,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+239,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+78,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+52,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+53,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+51,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+68,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+239,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+77,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+78,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+51,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+53,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+79+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+40,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+55,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+56,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+57,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+58,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+59,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+60,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+61,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+63,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+64,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+65,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+66,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+52,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+40,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+59,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+60,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+61,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+63,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+66,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+143,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+28,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+30,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+145,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+147,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+148,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+28,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+151,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+55,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+153,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+155,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+156,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+157,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+161,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+164,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+166,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+167,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+168,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+239,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+60,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+61,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+63,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+66,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+143,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_mem io_data_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+169,"SimTop my_core_top my_mem io_data_mem_data_ok", false,-1);
        tracep->declBit(c+34,"SimTop my_core_top my_mem io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+44,"SimTop my_core_top my_mem io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+66,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+52,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+170,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+172,"SimTop my_core_top my_mem io_data_mem_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_mem io_data_mem_wr", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top my_mem io_data_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_mem io_data_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_mem io_data_mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+38,"SimTop my_core_top my_mem io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_mem io_if2mem_ms_wait_fs", false,-1);
        tracep->declBit(c+39,"SimTop my_core_top my_mem ms_wait_fs", false,-1);
        tracep->declBit(c+173,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBus(c+174,"SimTop my_core_top my_mem ms_state", false,-1, 1,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_mem ms_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+177,"SimTop my_core_top my_mem mrdata", false,-1, 63,0);
        tracep->declBus(c+179,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+180,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+181,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+40,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+59,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+66,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+67,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+52,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+170,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+72,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+182,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+184,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+186,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+45,"SimTop my_core_top my_wb io_fs_next_ok", false,-1);
        tracep->declBit(c+51,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+53,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+35,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+36,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+66,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+72,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+188,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+189,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+40,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+239,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+66,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+72,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+68,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+188,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+189,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+40,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declQuad(c+182,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+186,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declQuad(c+184,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+192,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+193,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+194,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+195,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+196,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+197,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+199,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+203,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+186,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+207,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+239,"SimTop my_core_top my_axi_bridge0 clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_axi_bridge0 reset", false,-1);
        tracep->declBit(c+42,"SimTop my_core_top my_axi_bridge0 io_in_en", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_axi_bridge0 io_in_wr", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_axi_bridge0 io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+251,"SimTop my_core_top my_axi_bridge0 io_in_wdata", false,-1, 63,0);
        tracep->declBus(c+253,"SimTop my_core_top my_axi_bridge0 io_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+1,"SimTop my_core_top my_axi_bridge0 io_out_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top my_axi_bridge0 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge0 io_out_aw_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge0 io_out_wt_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_axi_bridge0 io_out_b_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_in_rdata", false,-1, 63,0);
        tracep->declBit(c+33,"SimTop my_core_top my_axi_bridge0 io_in_addr_ok", false,-1);
        tracep->declBit(c+34,"SimTop my_core_top my_axi_bridge0 io_in_data_ok", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top my_axi_bridge0 io_out_ar_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_axi_bridge0 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_axi_bridge0 io_out_rd_ready", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_axi_bridge0 io_out_aw_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_axi_bridge0 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+16,"SimTop my_core_top my_axi_bridge0 io_out_wt_valid", false,-1);
        tracep->declQuad(c+251,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+253,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+17,"SimTop my_core_top my_axi_bridge0 io_out_b_ready", false,-1);
        tracep->declBus(c+209,"SimTop my_core_top my_axi_bridge0 state", false,-1, 3,0);
        tracep->declBit(c+239,"SimTop my_core_top my_axi_bridge1 clock", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_axi_bridge1 reset", false,-1);
        tracep->declBit(c+172,"SimTop my_core_top my_axi_bridge1 io_in_en", false,-1);
        tracep->declBit(c+62,"SimTop my_core_top my_axi_bridge1 io_in_wr", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top my_axi_bridge1 io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_axi_bridge1 io_in_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_axi_bridge1 io_in_wstrb", false,-1, 7,0);
        tracep->declBit(c+8,"SimTop my_core_top my_axi_bridge1 io_out_ar_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top my_axi_bridge1 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge1 io_out_aw_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top my_axi_bridge1 io_out_wt_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_axi_bridge1 io_out_b_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_in_rdata", false,-1, 63,0);
        tracep->declBit(c+210,"SimTop my_core_top my_axi_bridge1 io_in_addr_ok", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_axi_bridge1 io_in_data_ok", false,-1);
        tracep->declBit(c+18,"SimTop my_core_top my_axi_bridge1 io_out_ar_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top my_axi_bridge1 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+21,"SimTop my_core_top my_axi_bridge1 io_out_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_axi_bridge1 io_out_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_core_top my_axi_bridge1 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_core_top my_axi_bridge1 io_out_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_core_top my_axi_bridge1 io_out_b_ready", false,-1);
        tracep->declBus(c+211,"SimTop my_core_top my_axi_bridge1 state", false,-1, 3,0);
        tracep->declBit(c+239,"SimTop my_axi_sram clock", false,-1);
        tracep->declBit(c+240,"SimTop my_axi_sram reset", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_axi_sram io_in_0_rd_ready", false,-1);
        tracep->declBit(c+250,"SimTop my_axi_sram io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+16,"SimTop my_axi_sram io_in_0_wt_valid", false,-1);
        tracep->declBit(c+17,"SimTop my_axi_sram io_in_0_b_ready", false,-1);
        tracep->declBit(c+18,"SimTop my_axi_sram io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+21,"SimTop my_axi_sram io_in_1_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_axi_sram io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_axi_sram io_in_1_b_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram io_in_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_axi_sram io_in_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram io_in_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram io_in_0_aw_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram io_in_0_wt_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_axi_sram io_in_0_b_valid", false,-1);
        tracep->declBit(c+8,"SimTop my_axi_sram io_in_1_ar_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram io_in_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram io_in_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram io_in_1_aw_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_axi_sram io_in_1_wt_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram io_in_1_b_valid", false,-1);
        tracep->declBit(c+239,"SimTop my_axi_sram my_arbiter clock", false,-1);
        tracep->declBit(c+240,"SimTop my_axi_sram my_arbiter reset", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram my_arbiter io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram my_arbiter io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_axi_sram my_arbiter io_in_0_rd_ready", false,-1);
        tracep->declBit(c+250,"SimTop my_axi_sram my_arbiter io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram my_arbiter io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+16,"SimTop my_axi_sram my_arbiter io_in_0_wt_valid", false,-1);
        tracep->declBit(c+17,"SimTop my_axi_sram my_arbiter io_in_0_b_ready", false,-1);
        tracep->declBit(c+18,"SimTop my_axi_sram my_arbiter io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+21,"SimTop my_axi_sram my_arbiter io_in_1_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram my_arbiter io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+23,"SimTop my_axi_sram my_arbiter io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_axi_sram my_arbiter io_in_1_b_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter io_out_ar_ready", false,-1);
        tracep->declBit(c+212,"SimTop my_axi_sram my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+213,"SimTop my_axi_sram my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+214,"SimTop my_axi_sram my_arbiter io_out_b_valid", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter io_in_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_axi_sram my_arbiter io_in_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_in_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_in_0_aw_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_in_0_wt_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_axi_sram my_arbiter io_in_0_b_valid", false,-1);
        tracep->declBit(c+8,"SimTop my_axi_sram my_arbiter io_in_1_ar_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter io_in_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_in_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_in_1_aw_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_axi_sram my_arbiter io_in_1_wt_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter io_in_1_b_valid", false,-1);
        tracep->declBit(c+215,"SimTop my_axi_sram my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+216,"SimTop my_axi_sram my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+218,"SimTop my_axi_sram my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+219,"SimTop my_axi_sram my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+220,"SimTop my_axi_sram my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+221,"SimTop my_axi_sram my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+222,"SimTop my_axi_sram my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+18,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+215,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+216,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+223,"SimTop my_axi_sram my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+250,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_valid", false,-1);
        tracep->declQuad(c+13,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+22,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_ready", false,-1);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+254,"SimTop my_axi_sram my_arbiter arbiter_wt io_chosen", false,-1);
        tracep->declBit(c+239,"SimTop my_axi_sram my_axi_sram_driver clock", false,-1);
        tracep->declBit(c+240,"SimTop my_axi_sram my_axi_sram_driver reset", false,-1);
        tracep->declBit(c+215,"SimTop my_axi_sram my_axi_sram_driver io_ar_valid", false,-1);
        tracep->declQuad(c+216,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+218,"SimTop my_axi_sram my_axi_sram_driver io_rd_ready", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram my_axi_sram_driver io_aw_valid", false,-1);
        tracep->declQuad(c+19,"SimTop my_axi_sram my_axi_sram_driver io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+219,"SimTop my_axi_sram my_axi_sram_driver io_wt_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+220,"SimTop my_axi_sram my_axi_sram_driver io_b_ready", false,-1);
        tracep->declQuad(c+224,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+226,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_resp", false,-1);
        tracep->declBit(c+227,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_resp", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_axi_sram_driver io_ar_ready", false,-1);
        tracep->declBit(c+212,"SimTop my_axi_sram my_axi_sram_driver io_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_axi_sram_driver io_aw_ready", false,-1);
        tracep->declBit(c+213,"SimTop my_axi_sram my_axi_sram_driver io_wt_ready", false,-1);
        tracep->declBit(c+214,"SimTop my_axi_sram my_axi_sram_driver io_b_valid", false,-1);
        tracep->declBit(c+226,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_en", false,-1);
        tracep->declQuad(c+216,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+227,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_en", false,-1);
        tracep->declQuad(c+228,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+230,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+232,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBus(c+233,"SimTop my_axi_sram my_axi_sram_driver rstate", false,-1, 2,0);
        tracep->declBus(c+234,"SimTop my_axi_sram my_axi_sram_driver wstate", false,-1, 2,0);
        tracep->declBit(c+235,"SimTop my_axi_sram my_axi_sram_driver rd_wait_sel", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver rdata_r", false,-1, 63,0);
        tracep->declBit(c+236,"SimTop my_axi_sram my_axi_sram_driver resp_data_ok", false,-1);
        tracep->declQuad(c+228,"SimTop my_axi_sram my_axi_sram_driver waddr_r", false,-1, 63,0);
        tracep->declQuad(c+230,"SimTop my_axi_sram my_axi_sram_driver wdata_r", false,-1, 63,0);
        tracep->declBus(c+232,"SimTop my_axi_sram my_axi_sram_driver wmask_r", false,-1, 7,0);
        tracep->declBit(c+237,"SimTop my_axi_sram my_axi_sram_driver b_wait_ready", false,-1);
        tracep->declBit(c+238,"SimTop my_axi_sram my_axi_sram_driver unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+226,"SimTop my_axi_sram my_rmem_port en", false,-1);
        tracep->declBit(c+250,"SimTop my_axi_sram my_rmem_port wr", false,-1);
        tracep->declQuad(c+216,"SimTop my_axi_sram my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+224,"SimTop my_axi_sram my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+255,"SimTop my_axi_sram my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+227,"SimTop my_axi_sram my_wmem_port en", false,-1);
        tracep->declBit(c+254,"SimTop my_axi_sram my_wmem_port wr", false,-1);
        tracep->declQuad(c+228,"SimTop my_axi_sram my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+230,"SimTop my_axi_sram my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+232,"SimTop my_axi_sram my_wmem_port wmask", false,-1, 7,0);
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
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))));
        tracep->fullBit(oldp+2,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_valid_T_1) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)))));
        tracep->fullQData(oldp+3,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r),64);
        tracep->fullBit(oldp+5,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))));
        tracep->fullBit(oldp+6,((1U & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                        >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))))));
        tracep->fullBit(oldp+7,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_b_valid_T_1) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
        tracep->fullBit(oldp+8,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_3)) 
                                       & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)))));
        tracep->fullBit(oldp+9,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_valid_T_1) 
                                 & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen))));
        tracep->fullBit(oldp+10,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                   >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+11,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_b_valid_T_1) 
                                  & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+12,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_3));
        tracep->fullQData(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+15,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+16,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 2U))));
        tracep->fullBit(oldp+17,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 3U))));
        tracep->fullBit(oldp+18,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_3));
        tracep->fullQData(oldp+19,((0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullBit(oldp+21,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_2));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 2U))));
        tracep->fullQData(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullCData(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wstrb),8);
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 3U))));
        tracep->fullQData(oldp+28,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
        tracep->fullQData(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
        tracep->fullBit(oldp+32,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
        tracep->fullBit(oldp+33,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_addr_ok_T) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_addr_ok_T_1))));
        tracep->fullBit(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_data_ok));
        tracep->fullBit(oldp+35,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullQData(oldp+36,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullBit(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok));
        tracep->fullBit(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
        tracep->fullQData(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+42,((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                         >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms))))));
        tracep->fullIData(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullBit(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
        tracep->fullBit(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
        tracep->fullCData(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
        tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+52,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
        tracep->fullIData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
        tracep->fullBit(oldp+56,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+57,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+59,((((((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+60,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+61,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+64,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+65,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+72,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+73,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+74,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+77,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+79,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+89,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+101,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+148,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+155,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+156,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
        VL_EXTEND_WQ(127,64, __Vtemp48, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp49, __Vtemp48, 
                      (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
        __Vtemp50[0U] = __Vtemp49[0U];
        __Vtemp50[1U] = __Vtemp49[1U];
        __Vtemp50[2U] = __Vtemp49[2U];
        __Vtemp50[3U] = (0x7fffffffU & __Vtemp49[3U]);
        tracep->fullWData(oldp+157,(__Vtemp50),127);
        __Vtemp52[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        __Vtemp52[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                 >> 0x20U));
        __Vtemp52[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                       >> 0x3fU)));
        __Vtemp53[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
        __Vtemp53[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                 >> 0x20U));
        __Vtemp53[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                       >> 0x3fU)));
        VL_DIVS_WWW(65, __Vtemp54, __Vtemp52, __Vtemp53);
        __Vtemp55[0U] = __Vtemp54[0U];
        __Vtemp55[1U] = __Vtemp54[1U];
        __Vtemp55[2U] = (1U & __Vtemp54[2U]);
        tracep->fullWData(oldp+161,(__Vtemp55),65);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_data_ok));
        tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullBit(oldp+172,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_en));
        tracep->fullBit(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullCData(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),2);
        tracep->fullQData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
        tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
        tracep->fullCData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullQData(oldp+184,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+186,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+188,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+189,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+190,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+207,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullCData(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
        tracep->fullBit(oldp+210,(((((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_3)) 
                                     & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)) 
                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_3)) 
                                   | ((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                        >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)) 
                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                         >> 2U)))));
        tracep->fullCData(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
        tracep->fullBit(oldp+212,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_valid_T_1));
        tracep->fullBit(oldp+213,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                         >> 1U))));
        tracep->fullBit(oldp+214,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_b_valid_T_1));
        tracep->fullBit(oldp+215,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+216,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_3)
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc
                                      : (0xfffffffffffffff8ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result))),64);
        tracep->fullBit(oldp+218,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 1U)))));
        tracep->fullBit(oldp+219,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 2U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 2U)))));
        tracep->fullBit(oldp+220,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_b_ready));
        tracep->fullBit(oldp+221,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_3)))));
        tracep->fullQData(oldp+224,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+226,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3));
        tracep->fullBit(oldp+227,((1U & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                          >> 2U) & 
                                         (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__b_wait_ready))))));
        tracep->fullQData(oldp+228,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__waddr_r),64);
        tracep->fullQData(oldp+230,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wdata_r),64);
        tracep->fullCData(oldp+232,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wmask_r),8);
        tracep->fullCData(oldp+233,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
        tracep->fullCData(oldp+234,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
        tracep->fullBit(oldp+235,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_wait_sel));
        tracep->fullBit(oldp+236,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__resp_data_ok));
        tracep->fullBit(oldp+237,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__b_wait_ready));
        tracep->fullBit(oldp+238,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+239,(vlSelf->clock));
        tracep->fullBit(oldp+240,(vlSelf->reset));
        tracep->fullQData(oldp+241,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+243,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+245,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+246,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+247,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+249,(vlSelf->io_core_debug_raise_intr));
        tracep->fullBit(oldp+250,(0U));
        tracep->fullQData(oldp+251,(0ULL),64);
        tracep->fullCData(oldp+253,(0U),8);
        tracep->fullBit(oldp+254,(1U));
        tracep->fullQData(oldp+255,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

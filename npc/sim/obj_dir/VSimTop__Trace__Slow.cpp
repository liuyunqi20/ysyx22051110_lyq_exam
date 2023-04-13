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
        tracep->declBit(c+222,"clock", false,-1);
        tracep->declBit(c+223,"reset", false,-1);
        tracep->declQuad(c+224,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+226,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+228,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+229,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+230,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+232,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+222,"SimTop clock", false,-1);
        tracep->declBit(c+223,"SimTop reset", false,-1);
        tracep->declQuad(c+224,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+226,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+228,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+229,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+230,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+232,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top reset", false,-1);
        tracep->declQuad(c+224,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+226,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+228,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+229,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+230,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+232,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_if io_inst_mem_ar_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_if io_inst_mem_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_if io_inst_mem_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+11,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+226,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_if io_inst_mem_ar_valid", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_if io_inst_mem_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+18,"SimTop my_core_top my_if io_inst_mem_rd_ready", false,-1);
        tracep->declBus(c+19,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+20,"SimTop my_core_top my_if io_fs_mem_ok", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBus(c+21,"SimTop my_core_top my_if fs_state", false,-1, 2,0);
        tracep->declBus(c+19,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declBit(c+222,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+19,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+22,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+23,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+27,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+28,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+30,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+32,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+33,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+34,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+35,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+36,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+37,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+23,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+43,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+222,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+47,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+19,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+49,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+26,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+27,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+28,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+30,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+32,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+33,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+34,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+35,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+36,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+37,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+222,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+50,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+51,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+23,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+22,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+39,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+222,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+23,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+50,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+51,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+22,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+52+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+13,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+27,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+28,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+30,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+32,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+33,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+34,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+35,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+36,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+37,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+23,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+43,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+30,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+23,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+31,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+32,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+33,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+34,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+37,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+116,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+118,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+120,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+121,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+122,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+124,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+126,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+128,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+129,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+130,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+134,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+137,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+139,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+140,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+141,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+222,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+30,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+23,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+31,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+32,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+33,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+34,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+37,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+116,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop my_core_top my_mem io_has_intr", false,-1);
        tracep->declBit(c+143,"SimTop my_core_top my_mem io_data_mem_ar_ready", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_mem io_data_mem_rd_valid", false,-1);
        tracep->declQuad(c+145,"SimTop my_core_top my_mem io_data_mem_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+147,"SimTop my_core_top my_mem io_data_mem_aw_ready", false,-1);
        tracep->declBit(c+148,"SimTop my_core_top my_mem io_data_mem_wt_ready", false,-1);
        tracep->declBit(c+149,"SimTop my_core_top my_mem io_data_mem_b_valid", false,-1);
        tracep->declBit(c+30,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+23,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+150,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+152,"SimTop my_core_top my_mem io_data_mem_ar_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_mem io_data_mem_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+155,"SimTop my_core_top my_mem io_data_mem_rd_ready", false,-1);
        tracep->declBit(c+156,"SimTop my_core_top my_mem io_data_mem_aw_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_mem io_data_mem_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+157,"SimTop my_core_top my_mem io_data_mem_wt_valid", false,-1);
        tracep->declQuad(c+41,"SimTop my_core_top my_mem io_data_mem_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+158,"SimTop my_core_top my_mem io_data_mem_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+159,"SimTop my_core_top my_mem io_data_mem_b_ready", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBit(c+160,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBus(c+161,"SimTop my_core_top my_mem ms_state", false,-1, 5,0);
        tracep->declQuad(c+162,"SimTop my_core_top my_mem mrdata", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+165,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+166,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+30,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+38,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+23,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+150,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+45,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+167,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+169,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+171,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_core_top my_wb io_fs_mem_ok", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+23,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+24,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+11,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+45,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+173,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+174,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+10,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+149,"SimTop my_core_top my_clint io_en", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_clint io_waddr", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_clint io_wdata", false,-1, 63,0);
        tracep->declBit(c+181,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+182,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+184,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+222,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+37,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+45,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+39,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+173,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+174,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+181,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+167,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+171,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+169,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+186,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+187,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+188,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+189,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+190,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+191,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+193,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+197,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+199,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+171,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop my_core_top my_csr has_intr_t", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_isram clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_isram reset", false,-1);
        tracep->declBit(c+15,"SimTop my_core_top my_isram io_ar_valid", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_isram io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+18,"SimTop my_core_top my_isram io_rd_ready", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_isram io_aw_valid", false,-1);
        tracep->declQuad(c+234,"SimTop my_core_top my_isram io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+233,"SimTop my_core_top my_isram io_wt_valid", false,-1);
        tracep->declQuad(c+234,"SimTop my_core_top my_isram io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+236,"SimTop my_core_top my_isram io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+233,"SimTop my_core_top my_isram io_b_ready", false,-1);
        tracep->declQuad(c+203,"SimTop my_core_top my_isram io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_isram io_sram_rd_sel", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_isram io_sram_wt_sel", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_isram io_ar_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_isram io_rd_valid", false,-1);
        tracep->declQuad(c+8,"SimTop my_core_top my_isram io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+205,"SimTop my_core_top my_isram io_aw_ready", false,-1);
        tracep->declBit(c+206,"SimTop my_core_top my_isram io_wt_ready", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_isram io_b_valid", false,-1);
        tracep->declBit(c+15,"SimTop my_core_top my_isram io_sram_rd_en", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_isram io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+207,"SimTop my_core_top my_isram io_sram_wt_en", false,-1);
        tracep->declQuad(c+208,"SimTop my_core_top my_isram io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"SimTop my_core_top my_isram io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+212,"SimTop my_core_top my_isram io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBus(c+213,"SimTop my_core_top my_isram rstate", false,-1, 2,0);
        tracep->declBus(c+214,"SimTop my_core_top my_isram wstate", false,-1, 2,0);
        tracep->declQuad(c+8,"SimTop my_core_top my_isram rdata_r", false,-1, 63,0);
        tracep->declQuad(c+208,"SimTop my_core_top my_isram waddr_r", false,-1, 63,0);
        tracep->declQuad(c+210,"SimTop my_core_top my_isram wdata_r", false,-1, 63,0);
        tracep->declBus(c+212,"SimTop my_core_top my_isram wmask_r", false,-1, 7,0);
        tracep->declBit(c+222,"SimTop my_core_top my_dsram clock", false,-1);
        tracep->declBit(c+223,"SimTop my_core_top my_dsram reset", false,-1);
        tracep->declBit(c+152,"SimTop my_core_top my_dsram io_ar_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_dsram io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBit(c+155,"SimTop my_core_top my_dsram io_rd_ready", false,-1);
        tracep->declBit(c+156,"SimTop my_core_top my_dsram io_aw_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_dsram io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+157,"SimTop my_core_top my_dsram io_wt_valid", false,-1);
        tracep->declQuad(c+41,"SimTop my_core_top my_dsram io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+158,"SimTop my_core_top my_dsram io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+159,"SimTop my_core_top my_dsram io_b_ready", false,-1);
        tracep->declQuad(c+203,"SimTop my_core_top my_dsram io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+215,"SimTop my_core_top my_dsram io_sram_rd_sel", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_dsram io_sram_wt_sel", false,-1);
        tracep->declBit(c+143,"SimTop my_core_top my_dsram io_ar_ready", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_dsram io_rd_valid", false,-1);
        tracep->declQuad(c+145,"SimTop my_core_top my_dsram io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+147,"SimTop my_core_top my_dsram io_aw_ready", false,-1);
        tracep->declBit(c+148,"SimTop my_core_top my_dsram io_wt_ready", false,-1);
        tracep->declBit(c+149,"SimTop my_core_top my_dsram io_b_valid", false,-1);
        tracep->declBit(c+152,"SimTop my_core_top my_dsram io_sram_rd_en", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_dsram io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+149,"SimTop my_core_top my_dsram io_sram_wt_en", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_dsram io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_dsram io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+216,"SimTop my_core_top my_dsram io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBus(c+217,"SimTop my_core_top my_dsram rstate", false,-1, 2,0);
        tracep->declBus(c+218,"SimTop my_core_top my_dsram wstate", false,-1, 2,0);
        tracep->declQuad(c+145,"SimTop my_core_top my_dsram rdata_r", false,-1, 63,0);
        tracep->declQuad(c+177,"SimTop my_core_top my_dsram waddr_r", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_dsram wdata_r", false,-1, 63,0);
        tracep->declBus(c+216,"SimTop my_core_top my_dsram wmask_r", false,-1, 7,0);
        tracep->declBit(c+15,"SimTop my_core_top my_arbit io_rd_IFU_en", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_arbit io_rd_IFU_addr", false,-1, 63,0);
        tracep->declBit(c+152,"SimTop my_core_top my_arbit io_rd_MSU_en", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_arbit io_rd_MSU_addr", false,-1, 63,0);
        tracep->declBit(c+149,"SimTop my_core_top my_arbit io_wt_MSU_en", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_arbit io_wt_MSU_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_arbit io_wt_MSU_wdata", false,-1, 63,0);
        tracep->declBus(c+216,"SimTop my_core_top my_arbit io_wt_MSU_wmask", false,-1, 7,0);
        tracep->declQuad(c+203,"SimTop my_core_top my_arbit io_mem_rd_rdata", false,-1, 63,0);
        tracep->declQuad(c+203,"SimTop my_core_top my_arbit io_rd_IFU_rdata", false,-1, 63,0);
        tracep->declQuad(c+203,"SimTop my_core_top my_arbit io_rd_MSU_rdata", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_arbit io_sel_rd_IFU", false,-1);
        tracep->declBit(c+215,"SimTop my_core_top my_arbit io_sel_rd_MSU", false,-1);
        tracep->declBit(c+219,"SimTop my_core_top my_arbit io_mem_rd_en", false,-1);
        tracep->declQuad(c+220,"SimTop my_core_top my_arbit io_mem_rd_addr", false,-1, 63,0);
        tracep->declBit(c+149,"SimTop my_core_top my_arbit io_mem_wt_en", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_arbit io_mem_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_arbit io_mem_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+216,"SimTop my_core_top my_arbit io_mem_wt_wmask", false,-1, 7,0);
        tracep->declBit(c+15,"SimTop my_core_top my_arbit arbiter_src io_rd_IFU_en", false,-1);
        tracep->declBit(c+152,"SimTop my_core_top my_arbit arbiter_src io_rd_MSU_en", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_arbit arbiter_src io_rd_IFU_addr", false,-1, 63,0);
        tracep->declQuad(c+153,"SimTop my_core_top my_arbit arbiter_src io_rd_MSU_addr", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_arbit arbiter_src io_out_0_valid", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_arbit arbiter_src io_out_0_bits", false,-1, 63,0);
        tracep->declBit(c+152,"SimTop my_core_top my_arbit arbiter_src io_out_1_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_arbit arbiter_src io_out_1_bits", false,-1, 63,0);
        tracep->declBit(c+15,"SimTop my_core_top my_arbit arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_arbit arbiter_rd io_in_0_bits", false,-1, 63,0);
        tracep->declBit(c+152,"SimTop my_core_top my_arbit arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+153,"SimTop my_core_top my_arbit arbiter_rd io_in_1_bits", false,-1, 63,0);
        tracep->declBit(c+219,"SimTop my_core_top my_arbit arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+220,"SimTop my_core_top my_arbit arbiter_rd io_out_bits", false,-1, 63,0);
        tracep->declBit(c+215,"SimTop my_core_top my_arbit arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+219,"SimTop my_core_top my_rmem_port en", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_rmem_port wr", false,-1);
        tracep->declQuad(c+220,"SimTop my_core_top my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+203,"SimTop my_core_top my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop my_core_top my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+149,"SimTop my_core_top my_wmem_port en", false,-1);
        tracep->declBit(c+237,"SimTop my_core_top my_wmem_port wr", false,-1);
        tracep->declQuad(c+177,"SimTop my_core_top my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+216,"SimTop my_core_top my_wmem_port wmask", false,-1, 7,0);
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
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
        tracep->fullQData(oldp+3,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
        tracep->fullBit(oldp+5,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
        tracep->fullBit(oldp+6,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate))));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate) 
                                       >> 1U))));
        tracep->fullQData(oldp+8,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rdata_r),64);
        tracep->fullBit(oldp+10,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
        tracep->fullQData(oldp+11,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullQData(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+15,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                        >> 1U))));
        tracep->fullQData(oldp+16,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+18,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                        >> 2U))));
        tracep->fullIData(oldp+19,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullBit(oldp+20,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_fs_mem_ok_T_1));
        tracep->fullCData(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
        tracep->fullBit(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+23,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
        tracep->fullIData(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
        tracep->fullBit(oldp+27,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+28,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+29,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+30,((((((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+31,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+32,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+33,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+35,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+36,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+45,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+46,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+47,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+51,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+128,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+129,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
        VL_EXTEND_WQ(127,64, __Vtemp47, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp48, __Vtemp47, 
                      (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
        __Vtemp49[0U] = __Vtemp48[0U];
        __Vtemp49[1U] = __Vtemp48[1U];
        __Vtemp49[2U] = __Vtemp48[2U];
        __Vtemp49[3U] = (0x7fffffffU & __Vtemp48[3U]);
        tracep->fullWData(oldp+130,(__Vtemp49),127);
        __Vtemp51[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        __Vtemp51[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                 >> 0x20U));
        __Vtemp51[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                       >> 0x3fU)));
        __Vtemp52[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
        __Vtemp52[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                 >> 0x20U));
        __Vtemp52[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                       >> 0x3fU)));
        VL_DIVS_WWW(65, __Vtemp53, __Vtemp51, __Vtemp52);
        __Vtemp54[0U] = __Vtemp53[0U];
        __Vtemp54[1U] = __Vtemp53[1U];
        __Vtemp54[2U] = (1U & __Vtemp53[2U]);
        tracep->fullWData(oldp+134,(__Vtemp54),65);
        tracep->fullQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullBit(oldp+143,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate))));
        tracep->fullBit(oldp+144,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
                                         >> 1U))));
        tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rdata_r),64);
        tracep->fullBit(oldp+147,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate))));
        tracep->fullBit(oldp+148,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                                         >> 1U))));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                                         >> 2U))));
        tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullBit(oldp+152,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_5));
        tracep->fullQData(oldp+153,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullBit(oldp+155,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 2U))));
        tracep->fullBit(oldp+156,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_aw_valid_T_4));
        tracep->fullBit(oldp+157,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 4U))));
        tracep->fullCData(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wt_bits_wstrb),8);
        tracep->fullBit(oldp+159,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                         >> 5U))));
        tracep->fullBit(oldp+160,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullCData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),6);
        tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
        tracep->fullCData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullQData(oldp+169,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+171,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+173,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+174,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+175,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__waddr_r),64);
        tracep->fullQData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wdata_r),64);
        tracep->fullBit(oldp+181,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullCData(oldp+186,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+201,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullQData(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+205,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate) 
                                         >> 1U))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate) 
                                         >> 2U))));
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__waddr_r),64);
        tracep->fullQData(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wdata_r),64);
        tracep->fullCData(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wmask_r),8);
        tracep->fullCData(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate),3);
        tracep->fullCData(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate),3);
        tracep->fullBit(oldp+215,((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                            >> 1U)))));
        tracep->fullCData(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wmask_r),8);
        tracep->fullCData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate),3);
        tracep->fullCData(oldp+218,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate),3);
        tracep->fullBit(oldp+219,((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                          >> 1U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_5)))));
        tracep->fullQData(oldp+220,(((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc
                                      : (0xfffffffffffffff8ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result))),64);
        tracep->fullBit(oldp+222,(vlSelf->clock));
        tracep->fullBit(oldp+223,(vlSelf->reset));
        tracep->fullQData(oldp+224,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+226,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+228,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+229,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+230,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+232,(vlSelf->io_core_debug_raise_intr));
        tracep->fullBit(oldp+233,(0U));
        tracep->fullQData(oldp+234,(0ULL),64);
        tracep->fullCData(oldp+236,(0U),8);
        tracep->fullBit(oldp+237,(1U));
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

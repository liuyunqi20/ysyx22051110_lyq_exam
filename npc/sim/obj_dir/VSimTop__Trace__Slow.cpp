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
        tracep->declBit(c+1443,"clock", false,-1);
        tracep->declBit(c+1444,"reset", false,-1);
        tracep->declQuad(c+1445,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+1447,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+1449,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+1450,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+1451,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+1453,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+1443,"SimTop clock", false,-1);
        tracep->declBit(c+1444,"SimTop reset", false,-1);
        tracep->declQuad(c+1445,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+1447,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+1449,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+1450,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+1451,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+1453,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top reset", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top io_axi_sram_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top io_axi_sram_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top io_axi_sram_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top io_axi_sram_0_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top io_axi_sram_0_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top io_axi_sram_0_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top io_axi_sram_0_b_valid", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top io_axi_sram_1_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top io_axi_sram_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top io_axi_sram_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top io_axi_sram_1_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top io_axi_sram_1_aw_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top io_axi_sram_1_wt_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top io_axi_sram_1_b_valid", false,-1);
        tracep->declQuad(c+1445,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+1447,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+1449,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+1450,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+1451,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+1453,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top io_axi_sram_0_ar_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top io_axi_sram_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+1454,"SimTop my_core_top io_axi_sram_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+16,"SimTop my_core_top io_axi_sram_0_rd_ready", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top io_axi_sram_0_aw_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top io_axi_sram_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop my_core_top io_axi_sram_0_wt_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_core_top io_axi_sram_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+20,"SimTop my_core_top io_axi_sram_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"SimTop my_core_top io_axi_sram_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top io_axi_sram_0_b_ready", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top io_axi_sram_1_ar_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top io_axi_sram_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top io_axi_sram_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_core_top io_axi_sram_1_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_core_top io_axi_sram_1_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top io_axi_sram_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+29,"SimTop my_core_top io_axi_sram_1_wt_valid", false,-1);
        tracep->declQuad(c+30,"SimTop my_core_top io_axi_sram_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+32,"SimTop my_core_top io_axi_sram_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+33,"SimTop my_core_top io_axi_sram_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+34,"SimTop my_core_top io_axi_sram_1_b_ready", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+35,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+37,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+39,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_if io_inst_mem_req_ready", false,-1);
        tracep->declQuad(c+41,"SimTop my_core_top my_if io_inst_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+43,"SimTop my_core_top my_if io_inst_mem_ret_valid", false,-1);
        tracep->declBit(c+44,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+45,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBit(c+47,"SimTop my_core_top my_if io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+48,"SimTop my_core_top my_if io_if2mem_ms_wait_fs", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+1447,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declBit(c+51,"SimTop my_core_top my_if io_inst_mem_req_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top my_if io_inst_mem_req_bits_addr", false,-1, 63,0);
        tracep->declBus(c+52,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+43,"SimTop my_core_top my_if io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+53,"SimTop my_core_top my_if io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+54,"SimTop my_core_top my_if io_fs_next_ok", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+14,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBit(c+53,"SimTop my_core_top my_if fs_wait_ms", false,-1);
        tracep->declBus(c+55,"SimTop my_core_top my_if fs_state", false,-1, 2,0);
        tracep->declBus(c+52,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declQuad(c+56,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+54,"SimTop my_core_top my_if fs_next_ok", false,-1);
        tracep->declQuad(c+58,"SimTop my_core_top my_if unnamedblk1 fs_inst_data", false,-1, 63,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+52,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+60,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+61,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+62,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+64,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+65,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+66,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+67,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+68,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+69,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+70,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+73,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+74,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+75,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+61,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+81,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+84,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+85,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+52,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+87,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+64,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+65,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+66,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+68,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+69,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+67,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+70,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+73,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+74,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+75,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+88,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+89,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+61,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+62,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+60,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+77,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+61,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+88,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+89,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+60,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+62,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+90+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+49,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+64,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+65,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+66,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+67,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+68,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+69,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+70,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+73,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+74,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+75,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+61,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+81,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+68,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+61,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+69,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+70,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+75,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+154,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+35,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+37,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+39,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+156,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+159,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+35,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+160,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+64,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+164,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+166,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+167,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+168,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+172,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+177,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+178,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+179,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+68,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+61,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+69,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+70,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+75,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+154,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declBit(c+180,"SimTop my_core_top my_mem io_has_intr", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_mem io_data_mem_req_ready", false,-1);
        tracep->declQuad(c+182,"SimTop my_core_top my_mem io_data_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+184,"SimTop my_core_top my_mem io_data_mem_ret_valid", false,-1);
        tracep->declBit(c+43,"SimTop my_core_top my_mem io_if2mem_fs_mem_ok", false,-1);
        tracep->declBit(c+53,"SimTop my_core_top my_mem io_if2mem_fs_wait_ms", false,-1);
        tracep->declBit(c+68,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+75,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+61,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+187,"SimTop my_core_top my_mem io_data_mem_req_valid", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_mem io_data_mem_req_bits_wr", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_mem io_data_mem_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_mem io_data_mem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+190,"SimTop my_core_top my_mem io_data_mem_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+47,"SimTop my_core_top my_mem io_if2mem_ms_mem_ok", false,-1);
        tracep->declBit(c+48,"SimTop my_core_top my_mem io_if2mem_ms_wait_fs", false,-1);
        tracep->declBit(c+48,"SimTop my_core_top my_mem ms_wait_fs", false,-1);
        tracep->declBit(c+191,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBus(c+192,"SimTop my_core_top my_mem ms_state", false,-1, 1,0);
        tracep->declQuad(c+193,"SimTop my_core_top my_mem ms_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+195,"SimTop my_core_top my_mem mrdata", false,-1, 63,0);
        tracep->declBus(c+197,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+198,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+199,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+68,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+75,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+76,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+61,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+83,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+200,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+180,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+202,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+54,"SimTop my_core_top my_wb io_fs_next_ok", false,-1);
        tracep->declBit(c+60,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+61,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+62,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+45,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+75,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+83,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+206,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+207,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+208,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+75,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+83,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+77,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+206,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+207,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+49,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+208,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+210,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+200,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+180,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+202,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+211,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+212,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+213,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+214,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+215,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+216,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+218,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+220,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+222,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+224,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+226,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+180,"SimTop my_core_top my_csr has_intr_t", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_axi_bridge0 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_axi_bridge0 reset", false,-1);
        tracep->declBit(c+51,"SimTop my_core_top my_axi_bridge0 io_in_req_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+1456,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+1454,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+1460,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top my_axi_bridge0 io_out_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top my_axi_bridge0 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge0 io_out_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_axi_bridge0 io_out_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top my_axi_bridge0 io_out_b_valid", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_axi_bridge0 io_in_req_ready", false,-1);
        tracep->declQuad(c+41,"SimTop my_core_top my_axi_bridge0 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+43,"SimTop my_core_top my_axi_bridge0 io_in_ret_valid", false,-1);
        tracep->declBit(c+228,"SimTop my_core_top my_axi_bridge0 io_in_rlast", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top my_axi_bridge0 io_out_ar_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top my_axi_bridge0 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+1454,"SimTop my_core_top my_axi_bridge0 io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+16,"SimTop my_core_top my_axi_bridge0 io_out_rd_ready", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_axi_bridge0 io_out_aw_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_core_top my_axi_bridge0 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop my_core_top my_axi_bridge0 io_out_wt_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+20,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_axi_bridge0 io_out_b_ready", false,-1);
        tracep->declBus(c+229,"SimTop my_core_top my_axi_bridge0 state", false,-1, 3,0);
        tracep->declBit(c+230,"SimTop my_core_top my_axi_bridge0 rd_widx", false,-1);
        tracep->declBit(c+231,"SimTop my_core_top my_axi_bridge0 rd_after_wt_r", false,-1);
        tracep->declArray(c+232,"SimTop my_core_top my_axi_bridge0 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+236,"SimTop my_core_top my_axi_bridge0 wtag_r", false,-1, 59,0);
        tracep->declBus(c+20,"SimTop my_core_top my_axi_bridge0 wstrb_r", false,-1, 7,0);
        tracep->declBus(c+238,"SimTop my_core_top my_axi_bridge0 wt_widx_r", false,-1, 1,0);
        tracep->declBit(c+239,"SimTop my_core_top my_axi_bridge0 burst_cnt", false,-1);
        tracep->declBus(c+240,"SimTop my_core_top my_axi_bridge0 burst_len", false,-1, 7,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_axi_bridge0 rd_after_wt", false,-1);
        tracep->declBus(c+238,"SimTop my_core_top my_axi_bridge0 wt_widx", false,-1, 1,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_axi_bridge1 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_axi_bridge1 reset", false,-1);
        tracep->declBit(c+241,"SimTop my_core_top my_axi_bridge1 io_in_req_valid", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+243,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+247,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top my_axi_bridge1 io_out_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top my_axi_bridge1 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge1 io_out_aw_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_axi_bridge1 io_out_wt_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top my_axi_bridge1 io_out_b_valid", false,-1);
        tracep->declBit(c+249,"SimTop my_core_top my_axi_bridge1 io_in_req_ready", false,-1);
        tracep->declQuad(c+250,"SimTop my_core_top my_axi_bridge1 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+252,"SimTop my_core_top my_axi_bridge1 io_in_ret_valid", false,-1);
        tracep->declBit(c+253,"SimTop my_core_top my_axi_bridge1 io_in_rlast", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_axi_bridge1 io_out_ar_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_axi_bridge1 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_core_top my_axi_bridge1 io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_core_top my_axi_bridge1 io_out_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_core_top my_axi_bridge1 io_out_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_axi_bridge1 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+29,"SimTop my_core_top my_axi_bridge1 io_out_wt_valid", false,-1);
        tracep->declQuad(c+30,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+32,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+33,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+34,"SimTop my_core_top my_axi_bridge1 io_out_b_ready", false,-1);
        tracep->declBus(c+254,"SimTop my_core_top my_axi_bridge1 state", false,-1, 3,0);
        tracep->declBit(c+255,"SimTop my_core_top my_axi_bridge1 rd_widx", false,-1);
        tracep->declBit(c+256,"SimTop my_core_top my_axi_bridge1 rd_after_wt_r", false,-1);
        tracep->declArray(c+257,"SimTop my_core_top my_axi_bridge1 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+261,"SimTop my_core_top my_axi_bridge1 wtag_r", false,-1, 59,0);
        tracep->declBus(c+32,"SimTop my_core_top my_axi_bridge1 wstrb_r", false,-1, 7,0);
        tracep->declBus(c+263,"SimTop my_core_top my_axi_bridge1 wt_widx_r", false,-1, 1,0);
        tracep->declBit(c+264,"SimTop my_core_top my_axi_bridge1 burst_cnt", false,-1);
        tracep->declBus(c+265,"SimTop my_core_top my_axi_bridge1 burst_len", false,-1, 7,0);
        tracep->declBit(c+266,"SimTop my_core_top my_axi_bridge1 rd_after_wt", false,-1);
        tracep->declBus(c+267,"SimTop my_core_top my_axi_bridge1 wt_widx", false,-1, 1,0);
        tracep->declBit(c+268,"SimTop my_core_top my_mmc io_in_req_valid", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_mmc io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_mmc io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+243,"SimTop my_core_top my_mmc io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+247,"SimTop my_core_top my_mmc io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_mmc io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+269,"SimTop my_core_top my_mmc io_clint_out_clint_hit", false,-1);
        tracep->declBit(c+270,"SimTop my_core_top my_mmc io_clint_out_ret_valid", false,-1);
        tracep->declBit(c+249,"SimTop my_core_top my_mmc io_axi_out_req_ready", false,-1);
        tracep->declQuad(c+250,"SimTop my_core_top my_mmc io_axi_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+252,"SimTop my_core_top my_mmc io_axi_out_ret_valid", false,-1);
        tracep->declBit(c+253,"SimTop my_core_top my_mmc io_axi_out_rlast", false,-1);
        tracep->declBit(c+271,"SimTop my_core_top my_mmc io_in_req_ready", false,-1);
        tracep->declQuad(c+250,"SimTop my_core_top my_mmc io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+272,"SimTop my_core_top my_mmc io_in_ret_valid", false,-1);
        tracep->declBit(c+273,"SimTop my_core_top my_mmc io_in_rlast", false,-1);
        tracep->declBit(c+274,"SimTop my_core_top my_mmc io_clint_out_en", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_mmc io_clint_out_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_mmc io_clint_out_addr", false,-1, 63,0);
        tracep->declQuad(c+275,"SimTop my_core_top my_mmc io_clint_out_wdata", false,-1, 63,0);
        tracep->declBit(c+241,"SimTop my_core_top my_mmc io_axi_out_req_valid", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_mmc io_axi_out_req_bits_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_mmc io_axi_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+243,"SimTop my_core_top my_mmc io_axi_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+247,"SimTop my_core_top my_mmc io_axi_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_mmc io_axi_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache reset", false,-1);
        tracep->declBit(c+187,"SimTop my_core_top my_dcache io_in_req_valid", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_dcache io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_dcache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_dcache io_in_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+190,"SimTop my_core_top my_dcache io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+271,"SimTop my_core_top my_dcache io_out_req_ready", false,-1);
        tracep->declQuad(c+250,"SimTop my_core_top my_dcache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+272,"SimTop my_core_top my_dcache io_out_ret_valid", false,-1);
        tracep->declBit(c+273,"SimTop my_core_top my_dcache io_out_rlast", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_dcache io_in_req_ready", false,-1);
        tracep->declQuad(c+182,"SimTop my_core_top my_dcache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+184,"SimTop my_core_top my_dcache io_in_ret_valid", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache io_out_req_valid", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_dcache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_dcache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+243,"SimTop my_core_top my_dcache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+247,"SimTop my_core_top my_dcache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_dcache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+277,"SimTop my_core_top my_dcache data_addr", false,-1, 5,0);
        tracep->declBit(c+187,"SimTop my_core_top my_dcache stage1 io_cpu_valid", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wr", false,-1);
        tracep->declQuad(c+188,"SimTop my_core_top my_dcache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+190,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+278,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_dcache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_dcache stage1 io_rd_en", false,-1);
        tracep->declBus(c+279,"SimTop my_core_top my_dcache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+187,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+79,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+190,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBus(c+280,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+279,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+281,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache stage2 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache stage2 reset", false,-1);
        tracep->declBit(c+187,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+79,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+190,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBus(c+280,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+279,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+281,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+282,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+286,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+290,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+292,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+294,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+296,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+298,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+278,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+299,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+300,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+301,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+303,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+304,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+305,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+307,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+309,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+299,"SimTop my_core_top my_dcache stage2 s2_valid", false,-1);
        tracep->declBit(c+300,"SimTop my_core_top my_dcache stage2 buf_wr", false,-1);
        tracep->declQuad(c+301,"SimTop my_core_top my_dcache stage2 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+303,"SimTop my_core_top my_dcache stage2 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+304,"SimTop my_core_top my_dcache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+305,"SimTop my_core_top my_dcache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+307,"SimTop my_core_top my_dcache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+1462,"SimTop my_core_top my_dcache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+313,"SimTop my_core_top my_dcache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+313,"SimTop my_core_top my_dcache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache stage3 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache stage3 reset", false,-1);
        tracep->declBit(c+299,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+300,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+301,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+303,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+304,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+305,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+307,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+1455,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+1461,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+309,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+271,"SimTop my_core_top my_dcache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+250,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+272,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+273,"SimTop my_core_top my_dcache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+182,"SimTop my_core_top my_dcache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+184,"SimTop my_core_top my_dcache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+298,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+314,"SimTop my_core_top my_dcache stage3 io_wt_en", false,-1);
        tracep->declBus(c+315,"SimTop my_core_top my_dcache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+316,"SimTop my_core_top my_dcache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+243,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+247,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+317,"SimTop my_core_top my_dcache stage3 s3_valid", false,-1);
        tracep->declBit(c+318,"SimTop my_core_top my_dcache stage3 buf_wr", false,-1);
        tracep->declQuad(c+319,"SimTop my_core_top my_dcache stage3 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+321,"SimTop my_core_top my_dcache stage3 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+248,"SimTop my_core_top my_dcache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+322,"SimTop my_core_top my_dcache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+316,"SimTop my_core_top my_dcache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+323,"SimTop my_core_top my_dcache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+324,"SimTop my_core_top my_dcache stage3 buf_hit", false,-1);
        tracep->declBus(c+315,"SimTop my_core_top my_dcache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+325,"SimTop my_core_top my_dcache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+326,"SimTop my_core_top my_dcache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+327,"SimTop my_core_top my_dcache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+328,"SimTop my_core_top my_dcache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+330,"SimTop my_core_top my_dcache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+332,"SimTop my_core_top my_dcache stage3 state", false,-1, 5,0);
        tracep->declBit(c+333,"SimTop my_core_top my_dcache stage3 cnt", false,-1);
        tracep->declQuad(c+334,"SimTop my_core_top my_dcache stage3 cpu_word_mask", false,-1, 63,0);
        tracep->declBit(c+336,"SimTop my_core_top my_dcache stage3 hit", false,-1);
        tracep->declBit(c+337,"SimTop my_core_top my_dcache stage3 wb_en", false,-1);
        tracep->declBit(c+338,"SimTop my_core_top my_dcache stage3 burst_last", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_dcache stage3 refill_hit", false,-1);
        tracep->declBit(c+340,"SimTop my_core_top my_dcache stage3 unnamedblk1 refill_come", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+274,"SimTop my_core_top my_clint io_in_en", false,-1);
        tracep->declBit(c+242,"SimTop my_core_top my_clint io_in_wr", false,-1);
        tracep->declQuad(c+24,"SimTop my_core_top my_clint io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+275,"SimTop my_core_top my_clint io_in_wdata", false,-1, 63,0);
        tracep->declBit(c+269,"SimTop my_core_top my_clint io_in_clint_hit", false,-1);
        tracep->declBit(c+270,"SimTop my_core_top my_clint io_in_ret_valid", false,-1);
        tracep->declBit(c+210,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+341,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+345,"SimTop my_core_top my_clint hit_mtime", false,-1);
        tracep->declBit(c+346,"SimTop my_core_top my_clint hit_mtimecmp", false,-1);
        tracep->declBit(c+270,"SimTop my_core_top my_clint ret_valid", false,-1);
        tracep->declBit(c+347,"SimTop my_core_top my_clint unnamedblk1 wen", false,-1);
        tracep->declBit(c+1443,"SimTop my_axi_sram clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_axi_sram reset", false,-1);
        tracep->declBit(c+13,"SimTop my_axi_sram io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+1454,"SimTop my_axi_sram io_in_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+16,"SimTop my_axi_sram io_in_0_rd_ready", false,-1);
        tracep->declBit(c+1455,"SimTop my_axi_sram io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop my_axi_sram io_in_0_wt_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_axi_sram io_in_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+20,"SimTop my_axi_sram io_in_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"SimTop my_axi_sram io_in_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram io_in_0_b_ready", false,-1);
        tracep->declBit(c+23,"SimTop my_axi_sram io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram io_in_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_axi_sram io_in_1_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_axi_sram io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+29,"SimTop my_axi_sram io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+30,"SimTop my_axi_sram io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+32,"SimTop my_axi_sram io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+33,"SimTop my_axi_sram io_in_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+34,"SimTop my_axi_sram io_in_1_b_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram io_in_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_axi_sram io_in_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram io_in_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram io_in_0_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram io_in_0_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_axi_sram io_in_0_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_axi_sram io_in_0_b_valid", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram io_in_1_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_axi_sram io_in_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram io_in_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram io_in_1_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram io_in_1_aw_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram io_in_1_wt_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram io_in_1_b_valid", false,-1);
        tracep->declBit(c+1443,"SimTop my_axi_sram my_arbiter clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_axi_sram my_arbiter reset", false,-1);
        tracep->declBit(c+13,"SimTop my_axi_sram my_arbiter io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram my_arbiter io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+1454,"SimTop my_axi_sram my_arbiter io_in_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+16,"SimTop my_axi_sram my_arbiter io_in_0_rd_ready", false,-1);
        tracep->declBit(c+1455,"SimTop my_axi_sram my_arbiter io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram my_arbiter io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop my_axi_sram my_arbiter io_in_0_wt_valid", false,-1);
        tracep->declQuad(c+18,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+20,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+21,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+22,"SimTop my_axi_sram my_arbiter io_in_0_b_ready", false,-1);
        tracep->declBit(c+23,"SimTop my_axi_sram my_arbiter io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram my_arbiter io_in_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+27,"SimTop my_axi_sram my_arbiter io_in_1_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_axi_sram my_arbiter io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+29,"SimTop my_axi_sram my_arbiter io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+30,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+32,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+33,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+34,"SimTop my_axi_sram my_arbiter io_in_1_b_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter io_out_ar_ready", false,-1);
        tracep->declBit(c+348,"SimTop my_axi_sram my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+349,"SimTop my_axi_sram my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+350,"SimTop my_axi_sram my_arbiter io_out_b_valid", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter io_in_0_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_axi_sram my_arbiter io_in_0_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_in_0_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_in_0_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_in_0_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_axi_sram my_arbiter io_in_0_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_axi_sram my_arbiter io_in_0_b_valid", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter io_in_1_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_axi_sram my_arbiter io_in_1_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_in_1_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_in_1_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_in_1_aw_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter io_in_1_wt_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram my_arbiter io_in_1_b_valid", false,-1);
        tracep->declBit(c+351,"SimTop my_axi_sram my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+352,"SimTop my_axi_sram my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+354,"SimTop my_axi_sram my_arbiter io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+355,"SimTop my_axi_sram my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_axi_sram my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+356,"SimTop my_axi_sram my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+357,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+359,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+360,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+361,"SimTop my_axi_sram my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+362,"SimTop my_axi_sram my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+363,"SimTop my_axi_sram my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+13,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+1454,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+23,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+26,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+351,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+352,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+354,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+364,"SimTop my_axi_sram my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+1455,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_valid", false,-1);
        tracep->declQuad(c+14,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+28,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+1460,"SimTop my_axi_sram my_arbiter arbiter_wt io_chosen", false,-1);
        tracep->declBit(c+1443,"SimTop my_axi_sram my_axi_sram_driver clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_axi_sram my_axi_sram_driver reset", false,-1);
        tracep->declBit(c+351,"SimTop my_axi_sram my_axi_sram_driver io_ar_valid", false,-1);
        tracep->declQuad(c+352,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+354,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+355,"SimTop my_axi_sram my_axi_sram_driver io_rd_ready", false,-1);
        tracep->declBit(c+28,"SimTop my_axi_sram my_axi_sram_driver io_aw_valid", false,-1);
        tracep->declQuad(c+24,"SimTop my_axi_sram my_axi_sram_driver io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+356,"SimTop my_axi_sram my_axi_sram_driver io_wt_valid", false,-1);
        tracep->declQuad(c+357,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+359,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+360,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wlast", false,-1);
        tracep->declBit(c+361,"SimTop my_axi_sram my_axi_sram_driver io_b_ready", false,-1);
        tracep->declQuad(c+365,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+367,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_resp", false,-1);
        tracep->declBit(c+368,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_resp", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_axi_sram_driver io_ar_ready", false,-1);
        tracep->declBit(c+348,"SimTop my_axi_sram my_axi_sram_driver io_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_axi_sram_driver io_aw_ready", false,-1);
        tracep->declBit(c+349,"SimTop my_axi_sram my_axi_sram_driver io_wt_ready", false,-1);
        tracep->declBit(c+350,"SimTop my_axi_sram my_axi_sram_driver io_b_valid", false,-1);
        tracep->declBit(c+369,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_en", false,-1);
        tracep->declQuad(c+370,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+372,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_en", false,-1);
        tracep->declQuad(c+373,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+357,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+359,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBit(c+348,"SimTop my_axi_sram my_axi_sram_driver rdata_ok", false,-1);
        tracep->declBus(c+375,"SimTop my_axi_sram my_axi_sram_driver rstate", false,-1, 2,0);
        tracep->declBus(c+376,"SimTop my_axi_sram my_axi_sram_driver wstate", false,-1, 2,0);
        tracep->declQuad(c+377,"SimTop my_axi_sram my_axi_sram_driver ar_buf_araddr", false,-1, 63,0);
        tracep->declBus(c+379,"SimTop my_axi_sram my_axi_sram_driver ar_buf_arlen", false,-1, 7,0);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver rdata_r", false,-1, 63,0);
        tracep->declBus(c+380,"SimTop my_axi_sram my_axi_sram_driver rd_cnt", false,-1, 7,0);
        tracep->declBit(c+381,"SimTop my_axi_sram my_axi_sram_driver rd_idx", false,-1);
        tracep->declQuad(c+382,"SimTop my_axi_sram my_axi_sram_driver aw_buf_awaddr", false,-1, 63,0);
        tracep->declBit(c+384,"SimTop my_axi_sram my_axi_sram_driver wt_cnt", false,-1);
        tracep->declBit(c+385,"SimTop my_axi_sram my_axi_sram_driver unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+369,"SimTop my_axi_sram my_rmem_port en", false,-1);
        tracep->declBit(c+1455,"SimTop my_axi_sram my_rmem_port wr", false,-1);
        tracep->declQuad(c+370,"SimTop my_axi_sram my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop my_axi_sram my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+1463,"SimTop my_axi_sram my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+372,"SimTop my_axi_sram my_wmem_port en", false,-1);
        tracep->declBit(c+1460,"SimTop my_axi_sram my_wmem_port wr", false,-1);
        tracep->declQuad(c+373,"SimTop my_axi_sram my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+357,"SimTop my_axi_sram my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+359,"SimTop my_axi_sram my_wmem_port wmask", false,-1, 7,0);
        tracep->declBit(c+1443,"SimTop my_axi_sram rd_resp_en_rdelayer clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_axi_sram rd_resp_en_rdelayer reset", false,-1);
        tracep->declBit(c+369,"SimTop my_axi_sram rd_resp_en_rdelayer io_in", false,-1);
        tracep->declBit(c+367,"SimTop my_axi_sram rd_resp_en_rdelayer io_out", false,-1);
        tracep->declBit(c+386,"SimTop my_axi_sram rd_resp_en_rdelayer delaying", false,-1);
        tracep->declBit(c+387,"SimTop my_axi_sram rd_resp_en_rdelayer r_r", false,-1);
        tracep->declBit(c+388,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_1", false,-1);
        tracep->declBit(c+389,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_2", false,-1);
        tracep->declBit(c+390,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_3", false,-1);
        tracep->declBit(c+367,"SimTop my_axi_sram rd_resp_en_rdelayer r", false,-1);
        tracep->declBit(c+391,"SimTop my_axi_sram rd_resp_en_rdelayer unnamedblk1 din", false,-1);
        tracep->declBit(c+1443,"SimTop my_axi_sram wt_resp_en_wdelayer clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_axi_sram wt_resp_en_wdelayer reset", false,-1);
        tracep->declBit(c+372,"SimTop my_axi_sram wt_resp_en_wdelayer io_in", false,-1);
        tracep->declBit(c+368,"SimTop my_axi_sram wt_resp_en_wdelayer io_out", false,-1);
        tracep->declBit(c+392,"SimTop my_axi_sram wt_resp_en_wdelayer delaying", false,-1);
        tracep->declBit(c+393,"SimTop my_axi_sram wt_resp_en_wdelayer r_r", false,-1);
        tracep->declBit(c+394,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_1", false,-1);
        tracep->declBit(c+395,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_2", false,-1);
        tracep->declBit(c+396,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_3", false,-1);
        tracep->declBit(c+368,"SimTop my_axi_sram wt_resp_en_wdelayer r", false,-1);
        tracep->declBit(c+397,"SimTop my_axi_sram wt_resp_en_wdelayer unnamedblk1 din", false,-1);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache CacheDataRam clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache CacheDataRam reset", false,-1);
        tracep->declBit(c+398,"SimTop my_core_top my_dcache CacheDataRam io_CEN", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_dcache CacheDataRam io_WEN", false,-1);
        tracep->declBus(c+277,"SimTop my_core_top my_dcache CacheDataRam io_A", false,-1, 5,0);
        tracep->declArray(c+400,"SimTop my_core_top my_dcache CacheDataRam io_Q", false,-1, 127,0);
        tracep->declArray(c+404,"SimTop my_core_top my_dcache CacheDataRam ram_0", false,-1, 127,0);
        tracep->declArray(c+408,"SimTop my_core_top my_dcache CacheDataRam ram_1", false,-1, 127,0);
        tracep->declArray(c+412,"SimTop my_core_top my_dcache CacheDataRam ram_2", false,-1, 127,0);
        tracep->declArray(c+416,"SimTop my_core_top my_dcache CacheDataRam ram_3", false,-1, 127,0);
        tracep->declArray(c+420,"SimTop my_core_top my_dcache CacheDataRam ram_4", false,-1, 127,0);
        tracep->declArray(c+424,"SimTop my_core_top my_dcache CacheDataRam ram_5", false,-1, 127,0);
        tracep->declArray(c+428,"SimTop my_core_top my_dcache CacheDataRam ram_6", false,-1, 127,0);
        tracep->declArray(c+432,"SimTop my_core_top my_dcache CacheDataRam ram_7", false,-1, 127,0);
        tracep->declArray(c+436,"SimTop my_core_top my_dcache CacheDataRam ram_8", false,-1, 127,0);
        tracep->declArray(c+440,"SimTop my_core_top my_dcache CacheDataRam ram_9", false,-1, 127,0);
        tracep->declArray(c+444,"SimTop my_core_top my_dcache CacheDataRam ram_10", false,-1, 127,0);
        tracep->declArray(c+448,"SimTop my_core_top my_dcache CacheDataRam ram_11", false,-1, 127,0);
        tracep->declArray(c+452,"SimTop my_core_top my_dcache CacheDataRam ram_12", false,-1, 127,0);
        tracep->declArray(c+456,"SimTop my_core_top my_dcache CacheDataRam ram_13", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_dcache CacheDataRam ram_14", false,-1, 127,0);
        tracep->declArray(c+464,"SimTop my_core_top my_dcache CacheDataRam ram_15", false,-1, 127,0);
        tracep->declArray(c+468,"SimTop my_core_top my_dcache CacheDataRam ram_16", false,-1, 127,0);
        tracep->declArray(c+472,"SimTop my_core_top my_dcache CacheDataRam ram_17", false,-1, 127,0);
        tracep->declArray(c+476,"SimTop my_core_top my_dcache CacheDataRam ram_18", false,-1, 127,0);
        tracep->declArray(c+480,"SimTop my_core_top my_dcache CacheDataRam ram_19", false,-1, 127,0);
        tracep->declArray(c+484,"SimTop my_core_top my_dcache CacheDataRam ram_20", false,-1, 127,0);
        tracep->declArray(c+488,"SimTop my_core_top my_dcache CacheDataRam ram_21", false,-1, 127,0);
        tracep->declArray(c+492,"SimTop my_core_top my_dcache CacheDataRam ram_22", false,-1, 127,0);
        tracep->declArray(c+496,"SimTop my_core_top my_dcache CacheDataRam ram_23", false,-1, 127,0);
        tracep->declArray(c+500,"SimTop my_core_top my_dcache CacheDataRam ram_24", false,-1, 127,0);
        tracep->declArray(c+504,"SimTop my_core_top my_dcache CacheDataRam ram_25", false,-1, 127,0);
        tracep->declArray(c+508,"SimTop my_core_top my_dcache CacheDataRam ram_26", false,-1, 127,0);
        tracep->declArray(c+512,"SimTop my_core_top my_dcache CacheDataRam ram_27", false,-1, 127,0);
        tracep->declArray(c+516,"SimTop my_core_top my_dcache CacheDataRam ram_28", false,-1, 127,0);
        tracep->declArray(c+520,"SimTop my_core_top my_dcache CacheDataRam ram_29", false,-1, 127,0);
        tracep->declArray(c+524,"SimTop my_core_top my_dcache CacheDataRam ram_30", false,-1, 127,0);
        tracep->declArray(c+528,"SimTop my_core_top my_dcache CacheDataRam ram_31", false,-1, 127,0);
        tracep->declArray(c+532,"SimTop my_core_top my_dcache CacheDataRam ram_32", false,-1, 127,0);
        tracep->declArray(c+536,"SimTop my_core_top my_dcache CacheDataRam ram_33", false,-1, 127,0);
        tracep->declArray(c+540,"SimTop my_core_top my_dcache CacheDataRam ram_34", false,-1, 127,0);
        tracep->declArray(c+544,"SimTop my_core_top my_dcache CacheDataRam ram_35", false,-1, 127,0);
        tracep->declArray(c+548,"SimTop my_core_top my_dcache CacheDataRam ram_36", false,-1, 127,0);
        tracep->declArray(c+552,"SimTop my_core_top my_dcache CacheDataRam ram_37", false,-1, 127,0);
        tracep->declArray(c+556,"SimTop my_core_top my_dcache CacheDataRam ram_38", false,-1, 127,0);
        tracep->declArray(c+560,"SimTop my_core_top my_dcache CacheDataRam ram_39", false,-1, 127,0);
        tracep->declArray(c+564,"SimTop my_core_top my_dcache CacheDataRam ram_40", false,-1, 127,0);
        tracep->declArray(c+568,"SimTop my_core_top my_dcache CacheDataRam ram_41", false,-1, 127,0);
        tracep->declArray(c+572,"SimTop my_core_top my_dcache CacheDataRam ram_42", false,-1, 127,0);
        tracep->declArray(c+576,"SimTop my_core_top my_dcache CacheDataRam ram_43", false,-1, 127,0);
        tracep->declArray(c+580,"SimTop my_core_top my_dcache CacheDataRam ram_44", false,-1, 127,0);
        tracep->declArray(c+584,"SimTop my_core_top my_dcache CacheDataRam ram_45", false,-1, 127,0);
        tracep->declArray(c+588,"SimTop my_core_top my_dcache CacheDataRam ram_46", false,-1, 127,0);
        tracep->declArray(c+592,"SimTop my_core_top my_dcache CacheDataRam ram_47", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRam ram_48", false,-1, 127,0);
        tracep->declArray(c+600,"SimTop my_core_top my_dcache CacheDataRam ram_49", false,-1, 127,0);
        tracep->declArray(c+604,"SimTop my_core_top my_dcache CacheDataRam ram_50", false,-1, 127,0);
        tracep->declArray(c+608,"SimTop my_core_top my_dcache CacheDataRam ram_51", false,-1, 127,0);
        tracep->declArray(c+612,"SimTop my_core_top my_dcache CacheDataRam ram_52", false,-1, 127,0);
        tracep->declArray(c+616,"SimTop my_core_top my_dcache CacheDataRam ram_53", false,-1, 127,0);
        tracep->declArray(c+620,"SimTop my_core_top my_dcache CacheDataRam ram_54", false,-1, 127,0);
        tracep->declArray(c+624,"SimTop my_core_top my_dcache CacheDataRam ram_55", false,-1, 127,0);
        tracep->declArray(c+628,"SimTop my_core_top my_dcache CacheDataRam ram_56", false,-1, 127,0);
        tracep->declArray(c+632,"SimTop my_core_top my_dcache CacheDataRam ram_57", false,-1, 127,0);
        tracep->declArray(c+636,"SimTop my_core_top my_dcache CacheDataRam ram_58", false,-1, 127,0);
        tracep->declArray(c+640,"SimTop my_core_top my_dcache CacheDataRam ram_59", false,-1, 127,0);
        tracep->declArray(c+644,"SimTop my_core_top my_dcache CacheDataRam ram_60", false,-1, 127,0);
        tracep->declArray(c+648,"SimTop my_core_top my_dcache CacheDataRam ram_61", false,-1, 127,0);
        tracep->declArray(c+652,"SimTop my_core_top my_dcache CacheDataRam ram_62", false,-1, 127,0);
        tracep->declArray(c+656,"SimTop my_core_top my_dcache CacheDataRam ram_63", false,-1, 127,0);
        tracep->declArray(c+400,"SimTop my_core_top my_dcache CacheDataRam rdata", false,-1, 127,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache CacheDataRam_1 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache CacheDataRam_1 reset", false,-1);
        tracep->declBit(c+398,"SimTop my_core_top my_dcache CacheDataRam_1 io_CEN", false,-1);
        tracep->declBit(c+660,"SimTop my_core_top my_dcache CacheDataRam_1 io_WEN", false,-1);
        tracep->declBus(c+277,"SimTop my_core_top my_dcache CacheDataRam_1 io_A", false,-1, 5,0);
        tracep->declArray(c+661,"SimTop my_core_top my_dcache CacheDataRam_1 io_Q", false,-1, 127,0);
        tracep->declArray(c+665,"SimTop my_core_top my_dcache CacheDataRam_1 ram_0", false,-1, 127,0);
        tracep->declArray(c+669,"SimTop my_core_top my_dcache CacheDataRam_1 ram_1", false,-1, 127,0);
        tracep->declArray(c+673,"SimTop my_core_top my_dcache CacheDataRam_1 ram_2", false,-1, 127,0);
        tracep->declArray(c+677,"SimTop my_core_top my_dcache CacheDataRam_1 ram_3", false,-1, 127,0);
        tracep->declArray(c+681,"SimTop my_core_top my_dcache CacheDataRam_1 ram_4", false,-1, 127,0);
        tracep->declArray(c+685,"SimTop my_core_top my_dcache CacheDataRam_1 ram_5", false,-1, 127,0);
        tracep->declArray(c+689,"SimTop my_core_top my_dcache CacheDataRam_1 ram_6", false,-1, 127,0);
        tracep->declArray(c+693,"SimTop my_core_top my_dcache CacheDataRam_1 ram_7", false,-1, 127,0);
        tracep->declArray(c+697,"SimTop my_core_top my_dcache CacheDataRam_1 ram_8", false,-1, 127,0);
        tracep->declArray(c+701,"SimTop my_core_top my_dcache CacheDataRam_1 ram_9", false,-1, 127,0);
        tracep->declArray(c+705,"SimTop my_core_top my_dcache CacheDataRam_1 ram_10", false,-1, 127,0);
        tracep->declArray(c+709,"SimTop my_core_top my_dcache CacheDataRam_1 ram_11", false,-1, 127,0);
        tracep->declArray(c+713,"SimTop my_core_top my_dcache CacheDataRam_1 ram_12", false,-1, 127,0);
        tracep->declArray(c+717,"SimTop my_core_top my_dcache CacheDataRam_1 ram_13", false,-1, 127,0);
        tracep->declArray(c+721,"SimTop my_core_top my_dcache CacheDataRam_1 ram_14", false,-1, 127,0);
        tracep->declArray(c+725,"SimTop my_core_top my_dcache CacheDataRam_1 ram_15", false,-1, 127,0);
        tracep->declArray(c+729,"SimTop my_core_top my_dcache CacheDataRam_1 ram_16", false,-1, 127,0);
        tracep->declArray(c+733,"SimTop my_core_top my_dcache CacheDataRam_1 ram_17", false,-1, 127,0);
        tracep->declArray(c+737,"SimTop my_core_top my_dcache CacheDataRam_1 ram_18", false,-1, 127,0);
        tracep->declArray(c+741,"SimTop my_core_top my_dcache CacheDataRam_1 ram_19", false,-1, 127,0);
        tracep->declArray(c+745,"SimTop my_core_top my_dcache CacheDataRam_1 ram_20", false,-1, 127,0);
        tracep->declArray(c+749,"SimTop my_core_top my_dcache CacheDataRam_1 ram_21", false,-1, 127,0);
        tracep->declArray(c+753,"SimTop my_core_top my_dcache CacheDataRam_1 ram_22", false,-1, 127,0);
        tracep->declArray(c+757,"SimTop my_core_top my_dcache CacheDataRam_1 ram_23", false,-1, 127,0);
        tracep->declArray(c+761,"SimTop my_core_top my_dcache CacheDataRam_1 ram_24", false,-1, 127,0);
        tracep->declArray(c+765,"SimTop my_core_top my_dcache CacheDataRam_1 ram_25", false,-1, 127,0);
        tracep->declArray(c+769,"SimTop my_core_top my_dcache CacheDataRam_1 ram_26", false,-1, 127,0);
        tracep->declArray(c+773,"SimTop my_core_top my_dcache CacheDataRam_1 ram_27", false,-1, 127,0);
        tracep->declArray(c+777,"SimTop my_core_top my_dcache CacheDataRam_1 ram_28", false,-1, 127,0);
        tracep->declArray(c+781,"SimTop my_core_top my_dcache CacheDataRam_1 ram_29", false,-1, 127,0);
        tracep->declArray(c+785,"SimTop my_core_top my_dcache CacheDataRam_1 ram_30", false,-1, 127,0);
        tracep->declArray(c+789,"SimTop my_core_top my_dcache CacheDataRam_1 ram_31", false,-1, 127,0);
        tracep->declArray(c+793,"SimTop my_core_top my_dcache CacheDataRam_1 ram_32", false,-1, 127,0);
        tracep->declArray(c+797,"SimTop my_core_top my_dcache CacheDataRam_1 ram_33", false,-1, 127,0);
        tracep->declArray(c+801,"SimTop my_core_top my_dcache CacheDataRam_1 ram_34", false,-1, 127,0);
        tracep->declArray(c+805,"SimTop my_core_top my_dcache CacheDataRam_1 ram_35", false,-1, 127,0);
        tracep->declArray(c+809,"SimTop my_core_top my_dcache CacheDataRam_1 ram_36", false,-1, 127,0);
        tracep->declArray(c+813,"SimTop my_core_top my_dcache CacheDataRam_1 ram_37", false,-1, 127,0);
        tracep->declArray(c+817,"SimTop my_core_top my_dcache CacheDataRam_1 ram_38", false,-1, 127,0);
        tracep->declArray(c+821,"SimTop my_core_top my_dcache CacheDataRam_1 ram_39", false,-1, 127,0);
        tracep->declArray(c+825,"SimTop my_core_top my_dcache CacheDataRam_1 ram_40", false,-1, 127,0);
        tracep->declArray(c+829,"SimTop my_core_top my_dcache CacheDataRam_1 ram_41", false,-1, 127,0);
        tracep->declArray(c+833,"SimTop my_core_top my_dcache CacheDataRam_1 ram_42", false,-1, 127,0);
        tracep->declArray(c+837,"SimTop my_core_top my_dcache CacheDataRam_1 ram_43", false,-1, 127,0);
        tracep->declArray(c+841,"SimTop my_core_top my_dcache CacheDataRam_1 ram_44", false,-1, 127,0);
        tracep->declArray(c+845,"SimTop my_core_top my_dcache CacheDataRam_1 ram_45", false,-1, 127,0);
        tracep->declArray(c+849,"SimTop my_core_top my_dcache CacheDataRam_1 ram_46", false,-1, 127,0);
        tracep->declArray(c+853,"SimTop my_core_top my_dcache CacheDataRam_1 ram_47", false,-1, 127,0);
        tracep->declArray(c+857,"SimTop my_core_top my_dcache CacheDataRam_1 ram_48", false,-1, 127,0);
        tracep->declArray(c+861,"SimTop my_core_top my_dcache CacheDataRam_1 ram_49", false,-1, 127,0);
        tracep->declArray(c+865,"SimTop my_core_top my_dcache CacheDataRam_1 ram_50", false,-1, 127,0);
        tracep->declArray(c+869,"SimTop my_core_top my_dcache CacheDataRam_1 ram_51", false,-1, 127,0);
        tracep->declArray(c+873,"SimTop my_core_top my_dcache CacheDataRam_1 ram_52", false,-1, 127,0);
        tracep->declArray(c+877,"SimTop my_core_top my_dcache CacheDataRam_1 ram_53", false,-1, 127,0);
        tracep->declArray(c+881,"SimTop my_core_top my_dcache CacheDataRam_1 ram_54", false,-1, 127,0);
        tracep->declArray(c+885,"SimTop my_core_top my_dcache CacheDataRam_1 ram_55", false,-1, 127,0);
        tracep->declArray(c+889,"SimTop my_core_top my_dcache CacheDataRam_1 ram_56", false,-1, 127,0);
        tracep->declArray(c+893,"SimTop my_core_top my_dcache CacheDataRam_1 ram_57", false,-1, 127,0);
        tracep->declArray(c+897,"SimTop my_core_top my_dcache CacheDataRam_1 ram_58", false,-1, 127,0);
        tracep->declArray(c+901,"SimTop my_core_top my_dcache CacheDataRam_1 ram_59", false,-1, 127,0);
        tracep->declArray(c+905,"SimTop my_core_top my_dcache CacheDataRam_1 ram_60", false,-1, 127,0);
        tracep->declArray(c+909,"SimTop my_core_top my_dcache CacheDataRam_1 ram_61", false,-1, 127,0);
        tracep->declArray(c+913,"SimTop my_core_top my_dcache CacheDataRam_1 ram_62", false,-1, 127,0);
        tracep->declArray(c+917,"SimTop my_core_top my_dcache CacheDataRam_1 ram_63", false,-1, 127,0);
        tracep->declArray(c+661,"SimTop my_core_top my_dcache CacheDataRam_1 rdata", false,-1, 127,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache CacheDataRam_2 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache CacheDataRam_2 reset", false,-1);
        tracep->declBit(c+398,"SimTop my_core_top my_dcache CacheDataRam_2 io_CEN", false,-1);
        tracep->declBit(c+921,"SimTop my_core_top my_dcache CacheDataRam_2 io_WEN", false,-1);
        tracep->declBus(c+277,"SimTop my_core_top my_dcache CacheDataRam_2 io_A", false,-1, 5,0);
        tracep->declArray(c+922,"SimTop my_core_top my_dcache CacheDataRam_2 io_Q", false,-1, 127,0);
        tracep->declArray(c+926,"SimTop my_core_top my_dcache CacheDataRam_2 ram_0", false,-1, 127,0);
        tracep->declArray(c+930,"SimTop my_core_top my_dcache CacheDataRam_2 ram_1", false,-1, 127,0);
        tracep->declArray(c+934,"SimTop my_core_top my_dcache CacheDataRam_2 ram_2", false,-1, 127,0);
        tracep->declArray(c+938,"SimTop my_core_top my_dcache CacheDataRam_2 ram_3", false,-1, 127,0);
        tracep->declArray(c+942,"SimTop my_core_top my_dcache CacheDataRam_2 ram_4", false,-1, 127,0);
        tracep->declArray(c+946,"SimTop my_core_top my_dcache CacheDataRam_2 ram_5", false,-1, 127,0);
        tracep->declArray(c+950,"SimTop my_core_top my_dcache CacheDataRam_2 ram_6", false,-1, 127,0);
        tracep->declArray(c+954,"SimTop my_core_top my_dcache CacheDataRam_2 ram_7", false,-1, 127,0);
        tracep->declArray(c+958,"SimTop my_core_top my_dcache CacheDataRam_2 ram_8", false,-1, 127,0);
        tracep->declArray(c+962,"SimTop my_core_top my_dcache CacheDataRam_2 ram_9", false,-1, 127,0);
        tracep->declArray(c+966,"SimTop my_core_top my_dcache CacheDataRam_2 ram_10", false,-1, 127,0);
        tracep->declArray(c+970,"SimTop my_core_top my_dcache CacheDataRam_2 ram_11", false,-1, 127,0);
        tracep->declArray(c+974,"SimTop my_core_top my_dcache CacheDataRam_2 ram_12", false,-1, 127,0);
        tracep->declArray(c+978,"SimTop my_core_top my_dcache CacheDataRam_2 ram_13", false,-1, 127,0);
        tracep->declArray(c+982,"SimTop my_core_top my_dcache CacheDataRam_2 ram_14", false,-1, 127,0);
        tracep->declArray(c+986,"SimTop my_core_top my_dcache CacheDataRam_2 ram_15", false,-1, 127,0);
        tracep->declArray(c+990,"SimTop my_core_top my_dcache CacheDataRam_2 ram_16", false,-1, 127,0);
        tracep->declArray(c+994,"SimTop my_core_top my_dcache CacheDataRam_2 ram_17", false,-1, 127,0);
        tracep->declArray(c+998,"SimTop my_core_top my_dcache CacheDataRam_2 ram_18", false,-1, 127,0);
        tracep->declArray(c+1002,"SimTop my_core_top my_dcache CacheDataRam_2 ram_19", false,-1, 127,0);
        tracep->declArray(c+1006,"SimTop my_core_top my_dcache CacheDataRam_2 ram_20", false,-1, 127,0);
        tracep->declArray(c+1010,"SimTop my_core_top my_dcache CacheDataRam_2 ram_21", false,-1, 127,0);
        tracep->declArray(c+1014,"SimTop my_core_top my_dcache CacheDataRam_2 ram_22", false,-1, 127,0);
        tracep->declArray(c+1018,"SimTop my_core_top my_dcache CacheDataRam_2 ram_23", false,-1, 127,0);
        tracep->declArray(c+1022,"SimTop my_core_top my_dcache CacheDataRam_2 ram_24", false,-1, 127,0);
        tracep->declArray(c+1026,"SimTop my_core_top my_dcache CacheDataRam_2 ram_25", false,-1, 127,0);
        tracep->declArray(c+1030,"SimTop my_core_top my_dcache CacheDataRam_2 ram_26", false,-1, 127,0);
        tracep->declArray(c+1034,"SimTop my_core_top my_dcache CacheDataRam_2 ram_27", false,-1, 127,0);
        tracep->declArray(c+1038,"SimTop my_core_top my_dcache CacheDataRam_2 ram_28", false,-1, 127,0);
        tracep->declArray(c+1042,"SimTop my_core_top my_dcache CacheDataRam_2 ram_29", false,-1, 127,0);
        tracep->declArray(c+1046,"SimTop my_core_top my_dcache CacheDataRam_2 ram_30", false,-1, 127,0);
        tracep->declArray(c+1050,"SimTop my_core_top my_dcache CacheDataRam_2 ram_31", false,-1, 127,0);
        tracep->declArray(c+1054,"SimTop my_core_top my_dcache CacheDataRam_2 ram_32", false,-1, 127,0);
        tracep->declArray(c+1058,"SimTop my_core_top my_dcache CacheDataRam_2 ram_33", false,-1, 127,0);
        tracep->declArray(c+1062,"SimTop my_core_top my_dcache CacheDataRam_2 ram_34", false,-1, 127,0);
        tracep->declArray(c+1066,"SimTop my_core_top my_dcache CacheDataRam_2 ram_35", false,-1, 127,0);
        tracep->declArray(c+1070,"SimTop my_core_top my_dcache CacheDataRam_2 ram_36", false,-1, 127,0);
        tracep->declArray(c+1074,"SimTop my_core_top my_dcache CacheDataRam_2 ram_37", false,-1, 127,0);
        tracep->declArray(c+1078,"SimTop my_core_top my_dcache CacheDataRam_2 ram_38", false,-1, 127,0);
        tracep->declArray(c+1082,"SimTop my_core_top my_dcache CacheDataRam_2 ram_39", false,-1, 127,0);
        tracep->declArray(c+1086,"SimTop my_core_top my_dcache CacheDataRam_2 ram_40", false,-1, 127,0);
        tracep->declArray(c+1090,"SimTop my_core_top my_dcache CacheDataRam_2 ram_41", false,-1, 127,0);
        tracep->declArray(c+1094,"SimTop my_core_top my_dcache CacheDataRam_2 ram_42", false,-1, 127,0);
        tracep->declArray(c+1098,"SimTop my_core_top my_dcache CacheDataRam_2 ram_43", false,-1, 127,0);
        tracep->declArray(c+1102,"SimTop my_core_top my_dcache CacheDataRam_2 ram_44", false,-1, 127,0);
        tracep->declArray(c+1106,"SimTop my_core_top my_dcache CacheDataRam_2 ram_45", false,-1, 127,0);
        tracep->declArray(c+1110,"SimTop my_core_top my_dcache CacheDataRam_2 ram_46", false,-1, 127,0);
        tracep->declArray(c+1114,"SimTop my_core_top my_dcache CacheDataRam_2 ram_47", false,-1, 127,0);
        tracep->declArray(c+1118,"SimTop my_core_top my_dcache CacheDataRam_2 ram_48", false,-1, 127,0);
        tracep->declArray(c+1122,"SimTop my_core_top my_dcache CacheDataRam_2 ram_49", false,-1, 127,0);
        tracep->declArray(c+1126,"SimTop my_core_top my_dcache CacheDataRam_2 ram_50", false,-1, 127,0);
        tracep->declArray(c+1130,"SimTop my_core_top my_dcache CacheDataRam_2 ram_51", false,-1, 127,0);
        tracep->declArray(c+1134,"SimTop my_core_top my_dcache CacheDataRam_2 ram_52", false,-1, 127,0);
        tracep->declArray(c+1138,"SimTop my_core_top my_dcache CacheDataRam_2 ram_53", false,-1, 127,0);
        tracep->declArray(c+1142,"SimTop my_core_top my_dcache CacheDataRam_2 ram_54", false,-1, 127,0);
        tracep->declArray(c+1146,"SimTop my_core_top my_dcache CacheDataRam_2 ram_55", false,-1, 127,0);
        tracep->declArray(c+1150,"SimTop my_core_top my_dcache CacheDataRam_2 ram_56", false,-1, 127,0);
        tracep->declArray(c+1154,"SimTop my_core_top my_dcache CacheDataRam_2 ram_57", false,-1, 127,0);
        tracep->declArray(c+1158,"SimTop my_core_top my_dcache CacheDataRam_2 ram_58", false,-1, 127,0);
        tracep->declArray(c+1162,"SimTop my_core_top my_dcache CacheDataRam_2 ram_59", false,-1, 127,0);
        tracep->declArray(c+1166,"SimTop my_core_top my_dcache CacheDataRam_2 ram_60", false,-1, 127,0);
        tracep->declArray(c+1170,"SimTop my_core_top my_dcache CacheDataRam_2 ram_61", false,-1, 127,0);
        tracep->declArray(c+1174,"SimTop my_core_top my_dcache CacheDataRam_2 ram_62", false,-1, 127,0);
        tracep->declArray(c+1178,"SimTop my_core_top my_dcache CacheDataRam_2 ram_63", false,-1, 127,0);
        tracep->declArray(c+922,"SimTop my_core_top my_dcache CacheDataRam_2 rdata", false,-1, 127,0);
        tracep->declBit(c+1443,"SimTop my_core_top my_dcache CacheDataRam_3 clock", false,-1);
        tracep->declBit(c+1444,"SimTop my_core_top my_dcache CacheDataRam_3 reset", false,-1);
        tracep->declBit(c+398,"SimTop my_core_top my_dcache CacheDataRam_3 io_CEN", false,-1);
        tracep->declBit(c+1182,"SimTop my_core_top my_dcache CacheDataRam_3 io_WEN", false,-1);
        tracep->declBus(c+277,"SimTop my_core_top my_dcache CacheDataRam_3 io_A", false,-1, 5,0);
        tracep->declArray(c+1183,"SimTop my_core_top my_dcache CacheDataRam_3 io_Q", false,-1, 127,0);
        tracep->declArray(c+1187,"SimTop my_core_top my_dcache CacheDataRam_3 ram_0", false,-1, 127,0);
        tracep->declArray(c+1191,"SimTop my_core_top my_dcache CacheDataRam_3 ram_1", false,-1, 127,0);
        tracep->declArray(c+1195,"SimTop my_core_top my_dcache CacheDataRam_3 ram_2", false,-1, 127,0);
        tracep->declArray(c+1199,"SimTop my_core_top my_dcache CacheDataRam_3 ram_3", false,-1, 127,0);
        tracep->declArray(c+1203,"SimTop my_core_top my_dcache CacheDataRam_3 ram_4", false,-1, 127,0);
        tracep->declArray(c+1207,"SimTop my_core_top my_dcache CacheDataRam_3 ram_5", false,-1, 127,0);
        tracep->declArray(c+1211,"SimTop my_core_top my_dcache CacheDataRam_3 ram_6", false,-1, 127,0);
        tracep->declArray(c+1215,"SimTop my_core_top my_dcache CacheDataRam_3 ram_7", false,-1, 127,0);
        tracep->declArray(c+1219,"SimTop my_core_top my_dcache CacheDataRam_3 ram_8", false,-1, 127,0);
        tracep->declArray(c+1223,"SimTop my_core_top my_dcache CacheDataRam_3 ram_9", false,-1, 127,0);
        tracep->declArray(c+1227,"SimTop my_core_top my_dcache CacheDataRam_3 ram_10", false,-1, 127,0);
        tracep->declArray(c+1231,"SimTop my_core_top my_dcache CacheDataRam_3 ram_11", false,-1, 127,0);
        tracep->declArray(c+1235,"SimTop my_core_top my_dcache CacheDataRam_3 ram_12", false,-1, 127,0);
        tracep->declArray(c+1239,"SimTop my_core_top my_dcache CacheDataRam_3 ram_13", false,-1, 127,0);
        tracep->declArray(c+1243,"SimTop my_core_top my_dcache CacheDataRam_3 ram_14", false,-1, 127,0);
        tracep->declArray(c+1247,"SimTop my_core_top my_dcache CacheDataRam_3 ram_15", false,-1, 127,0);
        tracep->declArray(c+1251,"SimTop my_core_top my_dcache CacheDataRam_3 ram_16", false,-1, 127,0);
        tracep->declArray(c+1255,"SimTop my_core_top my_dcache CacheDataRam_3 ram_17", false,-1, 127,0);
        tracep->declArray(c+1259,"SimTop my_core_top my_dcache CacheDataRam_3 ram_18", false,-1, 127,0);
        tracep->declArray(c+1263,"SimTop my_core_top my_dcache CacheDataRam_3 ram_19", false,-1, 127,0);
        tracep->declArray(c+1267,"SimTop my_core_top my_dcache CacheDataRam_3 ram_20", false,-1, 127,0);
        tracep->declArray(c+1271,"SimTop my_core_top my_dcache CacheDataRam_3 ram_21", false,-1, 127,0);
        tracep->declArray(c+1275,"SimTop my_core_top my_dcache CacheDataRam_3 ram_22", false,-1, 127,0);
        tracep->declArray(c+1279,"SimTop my_core_top my_dcache CacheDataRam_3 ram_23", false,-1, 127,0);
        tracep->declArray(c+1283,"SimTop my_core_top my_dcache CacheDataRam_3 ram_24", false,-1, 127,0);
        tracep->declArray(c+1287,"SimTop my_core_top my_dcache CacheDataRam_3 ram_25", false,-1, 127,0);
        tracep->declArray(c+1291,"SimTop my_core_top my_dcache CacheDataRam_3 ram_26", false,-1, 127,0);
        tracep->declArray(c+1295,"SimTop my_core_top my_dcache CacheDataRam_3 ram_27", false,-1, 127,0);
        tracep->declArray(c+1299,"SimTop my_core_top my_dcache CacheDataRam_3 ram_28", false,-1, 127,0);
        tracep->declArray(c+1303,"SimTop my_core_top my_dcache CacheDataRam_3 ram_29", false,-1, 127,0);
        tracep->declArray(c+1307,"SimTop my_core_top my_dcache CacheDataRam_3 ram_30", false,-1, 127,0);
        tracep->declArray(c+1311,"SimTop my_core_top my_dcache CacheDataRam_3 ram_31", false,-1, 127,0);
        tracep->declArray(c+1315,"SimTop my_core_top my_dcache CacheDataRam_3 ram_32", false,-1, 127,0);
        tracep->declArray(c+1319,"SimTop my_core_top my_dcache CacheDataRam_3 ram_33", false,-1, 127,0);
        tracep->declArray(c+1323,"SimTop my_core_top my_dcache CacheDataRam_3 ram_34", false,-1, 127,0);
        tracep->declArray(c+1327,"SimTop my_core_top my_dcache CacheDataRam_3 ram_35", false,-1, 127,0);
        tracep->declArray(c+1331,"SimTop my_core_top my_dcache CacheDataRam_3 ram_36", false,-1, 127,0);
        tracep->declArray(c+1335,"SimTop my_core_top my_dcache CacheDataRam_3 ram_37", false,-1, 127,0);
        tracep->declArray(c+1339,"SimTop my_core_top my_dcache CacheDataRam_3 ram_38", false,-1, 127,0);
        tracep->declArray(c+1343,"SimTop my_core_top my_dcache CacheDataRam_3 ram_39", false,-1, 127,0);
        tracep->declArray(c+1347,"SimTop my_core_top my_dcache CacheDataRam_3 ram_40", false,-1, 127,0);
        tracep->declArray(c+1351,"SimTop my_core_top my_dcache CacheDataRam_3 ram_41", false,-1, 127,0);
        tracep->declArray(c+1355,"SimTop my_core_top my_dcache CacheDataRam_3 ram_42", false,-1, 127,0);
        tracep->declArray(c+1359,"SimTop my_core_top my_dcache CacheDataRam_3 ram_43", false,-1, 127,0);
        tracep->declArray(c+1363,"SimTop my_core_top my_dcache CacheDataRam_3 ram_44", false,-1, 127,0);
        tracep->declArray(c+1367,"SimTop my_core_top my_dcache CacheDataRam_3 ram_45", false,-1, 127,0);
        tracep->declArray(c+1371,"SimTop my_core_top my_dcache CacheDataRam_3 ram_46", false,-1, 127,0);
        tracep->declArray(c+1375,"SimTop my_core_top my_dcache CacheDataRam_3 ram_47", false,-1, 127,0);
        tracep->declArray(c+1379,"SimTop my_core_top my_dcache CacheDataRam_3 ram_48", false,-1, 127,0);
        tracep->declArray(c+1383,"SimTop my_core_top my_dcache CacheDataRam_3 ram_49", false,-1, 127,0);
        tracep->declArray(c+1387,"SimTop my_core_top my_dcache CacheDataRam_3 ram_50", false,-1, 127,0);
        tracep->declArray(c+1391,"SimTop my_core_top my_dcache CacheDataRam_3 ram_51", false,-1, 127,0);
        tracep->declArray(c+1395,"SimTop my_core_top my_dcache CacheDataRam_3 ram_52", false,-1, 127,0);
        tracep->declArray(c+1399,"SimTop my_core_top my_dcache CacheDataRam_3 ram_53", false,-1, 127,0);
        tracep->declArray(c+1403,"SimTop my_core_top my_dcache CacheDataRam_3 ram_54", false,-1, 127,0);
        tracep->declArray(c+1407,"SimTop my_core_top my_dcache CacheDataRam_3 ram_55", false,-1, 127,0);
        tracep->declArray(c+1411,"SimTop my_core_top my_dcache CacheDataRam_3 ram_56", false,-1, 127,0);
        tracep->declArray(c+1415,"SimTop my_core_top my_dcache CacheDataRam_3 ram_57", false,-1, 127,0);
        tracep->declArray(c+1419,"SimTop my_core_top my_dcache CacheDataRam_3 ram_58", false,-1, 127,0);
        tracep->declArray(c+1423,"SimTop my_core_top my_dcache CacheDataRam_3 ram_59", false,-1, 127,0);
        tracep->declArray(c+1427,"SimTop my_core_top my_dcache CacheDataRam_3 ram_60", false,-1, 127,0);
        tracep->declArray(c+1431,"SimTop my_core_top my_dcache CacheDataRam_3 ram_61", false,-1, 127,0);
        tracep->declArray(c+1435,"SimTop my_core_top my_dcache CacheDataRam_3 ram_62", false,-1, 127,0);
        tracep->declArray(c+1439,"SimTop my_core_top my_dcache CacheDataRam_3 ram_63", false,-1, 127,0);
        tracep->declArray(c+1183,"SimTop my_core_top my_dcache CacheDataRam_3 rdata", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))));
        tracep->fullBit(oldp+2,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)))));
        tracep->fullQData(oldp+3,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r),64);
        tracep->fullBit(oldp+5,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
        tracep->fullBit(oldp+6,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))));
        tracep->fullBit(oldp+7,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
        tracep->fullBit(oldp+8,((1U & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                        >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))))));
        tracep->fullBit(oldp+9,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)) 
                                       & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)))));
        tracep->fullBit(oldp+10,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                                  & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen))));
        tracep->fullBit(oldp+11,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                  & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+12,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                   >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5));
        tracep->fullQData(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+16,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+17,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 2U))));
        tracep->fullQData(oldp+18,(((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx_r))
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                     : ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx_r))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U])))
                                         : 0ULL))),64);
        tracep->fullCData(oldp+20,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r),8);
        tracep->fullBit(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3));
        tracep->fullBit(oldp+22,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 3U))));
        tracep->fullBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
        tracep->fullQData(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr),64);
        tracep->fullCData(oldp+26,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)))),8);
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+28,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
        tracep->fullBit(oldp+29,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 2U))));
        tracep->fullQData(oldp+30,(((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx))
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                     : ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U])))
                                         : 0ULL))),64);
        tracep->fullCData(oldp+32,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r),8);
        tracep->fullBit(oldp+33,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3));
        tracep->fullBit(oldp+34,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 3U))));
        tracep->fullQData(oldp+35,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
        tracep->fullQData(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
        tracep->fullBit(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
        tracep->fullBit(oldp+40,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1))));
        tracep->fullQData(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
        tracep->fullBit(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
        tracep->fullQData(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullBit(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok));
        tracep->fullBit(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
        tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_2));
        tracep->fullIData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullBit(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
        tracep->fullBit(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
        tracep->fullCData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+61,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
        tracep->fullIData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
        tracep->fullBit(oldp+65,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+66,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+68,((((((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+69,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+70,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+71,(((((((((((((((((((0x37U 
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
                                          & (0x3e3U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x83U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x103U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x203U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    & (0x303U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   & (0x183U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  & ((((0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                       | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
        tracep->fullCData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+73,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+75,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+77,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+79,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+83,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+84,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+85,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+89,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+166,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+167,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
        VL_EXTEND_WQ(127,64, __Vtemp59, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp60, __Vtemp59, 
                      (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
        __Vtemp61[0U] = __Vtemp60[0U];
        __Vtemp61[1U] = __Vtemp60[1U];
        __Vtemp61[2U] = __Vtemp60[2U];
        __Vtemp61[3U] = (0x7fffffffU & __Vtemp60[3U]);
        tracep->fullWData(oldp+168,(__Vtemp61),127);
        __Vtemp63[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        __Vtemp63[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                 >> 0x20U));
        __Vtemp63[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                       >> 0x3fU)));
        __Vtemp64[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
        __Vtemp64[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                 >> 0x20U));
        __Vtemp64[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                       >> 0x3fU)));
        VL_DIVS_WWW(65, __Vtemp65, __Vtemp63, __Vtemp64);
        __Vtemp66[0U] = __Vtemp65[0U];
        __Vtemp66[1U] = __Vtemp65[1U];
        __Vtemp66[2U] = (1U & __Vtemp65[2U]);
        tracep->fullWData(oldp+172,(__Vtemp66),65);
        tracep->fullQData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullBit(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
        tracep->fullBit(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
        tracep->fullQData(oldp+185,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullBit(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_3));
        tracep->fullQData(oldp+188,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullCData(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
        tracep->fullBit(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullCData(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),2);
        tracep->fullQData(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
        tracep->fullQData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
        tracep->fullCData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullQData(oldp+202,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+204,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+206,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+208,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullBit(oldp+210,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullCData(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+218,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+224,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+226,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullBit(oldp+228,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r) 
                                   | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3))));
        tracep->fullCData(oldp+229,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
        tracep->fullBit(oldp+230,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
        tracep->fullBit(oldp+231,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+232,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
        tracep->fullQData(oldp+236,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
        tracep->fullCData(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx_r),2);
        tracep->fullBit(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
        tracep->fullCData(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
        tracep->fullBit(oldp+241,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
        tracep->fullBit(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
        tracep->fullWData(oldp+243,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
        tracep->fullCData(oldp+247,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                      : 0xffU)),8);
        tracep->fullBit(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+249,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
        tracep->fullQData(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
        tracep->fullBit(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+254,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
        tracep->fullBit(oldp+255,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
        tracep->fullBit(oldp+256,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+257,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
        tracep->fullQData(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
        tracep->fullCData(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx_r),2);
        tracep->fullBit(oldp+264,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
        tracep->fullCData(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
        tracep->fullBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
        tracep->fullCData(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx),2);
        tracep->fullBit(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+269,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
        tracep->fullBit(oldp+270,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
        tracep->fullBit(oldp+271,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_req_ready));
        tracep->fullBit(oldp+272,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
        tracep->fullBit(oldp+273,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
        tracep->fullBit(oldp+274,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
        tracep->fullQData(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
        tracep->fullCData(oldp+277,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr),6);
        tracep->fullBit(oldp+278,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
        tracep->fullCData(oldp+279,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+280,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+281,((8U & ((IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                    >> 3U)) 
                                           << 3U))),4);
        tracep->fullQData(oldp+282,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
        tracep->fullQData(oldp+288,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
        tracep->fullQData(oldp+290,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
        tracep->fullBit(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullBit(oldp+299,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+300,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
        tracep->fullQData(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
        tracep->fullCData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
        tracep->fullBit(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+306,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+307,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullCData(oldp+308,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H)))))),2);
        tracep->fullQData(oldp+309,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                         ? (((QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                         ? (((QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                        ? (((QData)((IData)(
                                                            vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                       ? (((QData)((IData)(
                                                           vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))
                                       : 0ULL))),64);
        tracep->fullQData(oldp+311,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                         ? (((QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                         ? (((QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                        ? (((QData)((IData)(
                                                            vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                       ? (((QData)((IData)(
                                                           vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))
                                       : 0ULL))),64);
        tracep->fullCData(oldp+313,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
        tracep->fullBit(oldp+314,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+315,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+316,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
        tracep->fullBit(oldp+317,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
        tracep->fullBit(oldp+318,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
        tracep->fullQData(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
        tracep->fullCData(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
        tracep->fullIData(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullCData(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+330,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+332,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+333,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
        tracep->fullQData(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
        tracep->fullBit(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
        tracep->fullBit(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_hit));
        tracep->fullBit(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
        tracep->fullQData(oldp+341,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+343,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+345,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+346,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+347,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
        tracep->fullBit(oldp+348,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
        tracep->fullBit(oldp+349,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
        tracep->fullBit(oldp+350,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                         >> 2U))));
        tracep->fullBit(oldp+351,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+352,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
        tracep->fullCData(oldp+354,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                      ? 0U : (1U & 
                                              (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
        tracep->fullBit(oldp+355,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 1U)))));
        tracep->fullBit(oldp+356,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
        tracep->fullQData(oldp+357,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? ((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx))
                                          ? (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                          : ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U])))
                                              : 0ULL))
                                      : ((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx_r))
                                          ? (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                          : ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx_r))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U])))
                                              : 0ULL)))),64);
        tracep->fullCData(oldp+359,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                      : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
        tracep->fullBit(oldp+360,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                    : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
        tracep->fullBit(oldp+361,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 3U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 3U)))));
        tracep->fullBit(oldp+362,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+363,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
        tracep->fullQData(oldp+365,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+367,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
        tracep->fullBit(oldp+368,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
        tracep->fullBit(oldp+369,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
        tracep->fullQData(oldp+370,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                       ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                          >> 3U) : 
                                      ((0x1ffffffffffffffeULL 
                                        & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                           >> 3U)) 
                                       | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                     << 3U)),64);
        tracep->fullBit(oldp+372,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                    >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
        tracep->fullQData(oldp+373,(((0xfffffffffffffff0ULL 
                                      & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_cnt) 
                                                        << 3U))))),64);
        tracep->fullCData(oldp+375,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
        tracep->fullCData(oldp+376,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
        tracep->fullQData(oldp+377,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
        tracep->fullCData(oldp+379,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
        tracep->fullCData(oldp+380,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
        tracep->fullBit(oldp+381,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
        tracep->fullQData(oldp+382,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
        tracep->fullBit(oldp+384,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_cnt));
        tracep->fullBit(oldp+385,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+386,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
        tracep->fullBit(oldp+387,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
        tracep->fullBit(oldp+388,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+389,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+390,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+391,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+392,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
        tracep->fullBit(oldp+393,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
        tracep->fullBit(oldp+394,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+395,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+396,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+397,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+398,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12));
        tracep->fullBit(oldp+399,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam__io_WEN));
        tracep->fullWData(oldp+400,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata),128);
        tracep->fullWData(oldp+404,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_0),128);
        tracep->fullWData(oldp+408,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_1),128);
        tracep->fullWData(oldp+412,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_2),128);
        tracep->fullWData(oldp+416,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_3),128);
        tracep->fullWData(oldp+420,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_4),128);
        tracep->fullWData(oldp+424,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_5),128);
        tracep->fullWData(oldp+428,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_6),128);
        tracep->fullWData(oldp+432,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_7),128);
        tracep->fullWData(oldp+436,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_8),128);
        tracep->fullWData(oldp+440,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_9),128);
        tracep->fullWData(oldp+444,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_10),128);
        tracep->fullWData(oldp+448,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_11),128);
        tracep->fullWData(oldp+452,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_12),128);
        tracep->fullWData(oldp+456,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_13),128);
        tracep->fullWData(oldp+460,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_14),128);
        tracep->fullWData(oldp+464,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_15),128);
        tracep->fullWData(oldp+468,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_16),128);
        tracep->fullWData(oldp+472,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_17),128);
        tracep->fullWData(oldp+476,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_18),128);
        tracep->fullWData(oldp+480,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_19),128);
        tracep->fullWData(oldp+484,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_20),128);
        tracep->fullWData(oldp+488,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_21),128);
        tracep->fullWData(oldp+492,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_22),128);
        tracep->fullWData(oldp+496,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_23),128);
        tracep->fullWData(oldp+500,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_24),128);
        tracep->fullWData(oldp+504,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_25),128);
        tracep->fullWData(oldp+508,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_26),128);
        tracep->fullWData(oldp+512,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_27),128);
        tracep->fullWData(oldp+516,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_28),128);
        tracep->fullWData(oldp+520,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_29),128);
        tracep->fullWData(oldp+524,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_30),128);
        tracep->fullWData(oldp+528,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_31),128);
        tracep->fullWData(oldp+532,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_32),128);
        tracep->fullWData(oldp+536,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_33),128);
        tracep->fullWData(oldp+540,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_34),128);
        tracep->fullWData(oldp+544,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_35),128);
        tracep->fullWData(oldp+548,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_36),128);
        tracep->fullWData(oldp+552,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_37),128);
        tracep->fullWData(oldp+556,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_38),128);
        tracep->fullWData(oldp+560,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_39),128);
        tracep->fullWData(oldp+564,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_40),128);
        tracep->fullWData(oldp+568,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_41),128);
        tracep->fullWData(oldp+572,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_42),128);
        tracep->fullWData(oldp+576,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_43),128);
        tracep->fullWData(oldp+580,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_44),128);
        tracep->fullWData(oldp+584,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_45),128);
        tracep->fullWData(oldp+588,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_46),128);
        tracep->fullWData(oldp+592,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_47),128);
        tracep->fullWData(oldp+596,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_48),128);
        tracep->fullWData(oldp+600,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_49),128);
        tracep->fullWData(oldp+604,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_50),128);
        tracep->fullWData(oldp+608,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_51),128);
        tracep->fullWData(oldp+612,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_52),128);
        tracep->fullWData(oldp+616,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_53),128);
        tracep->fullWData(oldp+620,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_54),128);
        tracep->fullWData(oldp+624,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_55),128);
        tracep->fullWData(oldp+628,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_56),128);
        tracep->fullWData(oldp+632,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_57),128);
        tracep->fullWData(oldp+636,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_58),128);
        tracep->fullWData(oldp+640,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_59),128);
        tracep->fullWData(oldp+644,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_60),128);
        tracep->fullWData(oldp+648,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_61),128);
        tracep->fullWData(oldp+652,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_62),128);
        tracep->fullWData(oldp+656,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_63),128);
        tracep->fullBit(oldp+660,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
        tracep->fullWData(oldp+661,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata),128);
        tracep->fullWData(oldp+665,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_0),128);
        tracep->fullWData(oldp+669,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_1),128);
        tracep->fullWData(oldp+673,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_2),128);
        tracep->fullWData(oldp+677,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_3),128);
        tracep->fullWData(oldp+681,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_4),128);
        tracep->fullWData(oldp+685,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_5),128);
        tracep->fullWData(oldp+689,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_6),128);
        tracep->fullWData(oldp+693,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_7),128);
        tracep->fullWData(oldp+697,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_8),128);
        tracep->fullWData(oldp+701,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_9),128);
        tracep->fullWData(oldp+705,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_10),128);
        tracep->fullWData(oldp+709,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_11),128);
        tracep->fullWData(oldp+713,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_12),128);
        tracep->fullWData(oldp+717,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_13),128);
        tracep->fullWData(oldp+721,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_14),128);
        tracep->fullWData(oldp+725,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_15),128);
        tracep->fullWData(oldp+729,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_16),128);
        tracep->fullWData(oldp+733,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_17),128);
        tracep->fullWData(oldp+737,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_18),128);
        tracep->fullWData(oldp+741,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_19),128);
        tracep->fullWData(oldp+745,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_20),128);
        tracep->fullWData(oldp+749,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_21),128);
        tracep->fullWData(oldp+753,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_22),128);
        tracep->fullWData(oldp+757,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_23),128);
        tracep->fullWData(oldp+761,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_24),128);
        tracep->fullWData(oldp+765,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_25),128);
        tracep->fullWData(oldp+769,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_26),128);
        tracep->fullWData(oldp+773,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_27),128);
        tracep->fullWData(oldp+777,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_28),128);
        tracep->fullWData(oldp+781,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_29),128);
        tracep->fullWData(oldp+785,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_30),128);
        tracep->fullWData(oldp+789,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_31),128);
        tracep->fullWData(oldp+793,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_32),128);
        tracep->fullWData(oldp+797,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_33),128);
        tracep->fullWData(oldp+801,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_34),128);
        tracep->fullWData(oldp+805,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_35),128);
        tracep->fullWData(oldp+809,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_36),128);
        tracep->fullWData(oldp+813,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_37),128);
        tracep->fullWData(oldp+817,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_38),128);
        tracep->fullWData(oldp+821,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_39),128);
        tracep->fullWData(oldp+825,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_40),128);
        tracep->fullWData(oldp+829,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_41),128);
        tracep->fullWData(oldp+833,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_42),128);
        tracep->fullWData(oldp+837,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_43),128);
        tracep->fullWData(oldp+841,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_44),128);
        tracep->fullWData(oldp+845,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_45),128);
        tracep->fullWData(oldp+849,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_46),128);
        tracep->fullWData(oldp+853,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_47),128);
        tracep->fullWData(oldp+857,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_48),128);
        tracep->fullWData(oldp+861,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_49),128);
        tracep->fullWData(oldp+865,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_50),128);
        tracep->fullWData(oldp+869,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_51),128);
        tracep->fullWData(oldp+873,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_52),128);
        tracep->fullWData(oldp+877,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_53),128);
        tracep->fullWData(oldp+881,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_54),128);
        tracep->fullWData(oldp+885,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_55),128);
        tracep->fullWData(oldp+889,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_56),128);
        tracep->fullWData(oldp+893,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_57),128);
        tracep->fullWData(oldp+897,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_58),128);
        tracep->fullWData(oldp+901,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_59),128);
        tracep->fullWData(oldp+905,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_60),128);
        tracep->fullWData(oldp+909,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_61),128);
        tracep->fullWData(oldp+913,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_62),128);
        tracep->fullWData(oldp+917,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_63),128);
        tracep->fullBit(oldp+921,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
        tracep->fullWData(oldp+922,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata),128);
        tracep->fullWData(oldp+926,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_0),128);
        tracep->fullWData(oldp+930,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_1),128);
        tracep->fullWData(oldp+934,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_2),128);
        tracep->fullWData(oldp+938,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_3),128);
        tracep->fullWData(oldp+942,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_4),128);
        tracep->fullWData(oldp+946,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_5),128);
        tracep->fullWData(oldp+950,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_6),128);
        tracep->fullWData(oldp+954,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_7),128);
        tracep->fullWData(oldp+958,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_8),128);
        tracep->fullWData(oldp+962,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_9),128);
        tracep->fullWData(oldp+966,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_10),128);
        tracep->fullWData(oldp+970,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_11),128);
        tracep->fullWData(oldp+974,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_12),128);
        tracep->fullWData(oldp+978,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_13),128);
        tracep->fullWData(oldp+982,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_14),128);
        tracep->fullWData(oldp+986,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_15),128);
        tracep->fullWData(oldp+990,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_16),128);
        tracep->fullWData(oldp+994,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_17),128);
        tracep->fullWData(oldp+998,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_18),128);
        tracep->fullWData(oldp+1002,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_19),128);
        tracep->fullWData(oldp+1006,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_20),128);
        tracep->fullWData(oldp+1010,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_21),128);
        tracep->fullWData(oldp+1014,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_22),128);
        tracep->fullWData(oldp+1018,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_23),128);
        tracep->fullWData(oldp+1022,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_24),128);
        tracep->fullWData(oldp+1026,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_25),128);
        tracep->fullWData(oldp+1030,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_26),128);
        tracep->fullWData(oldp+1034,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_27),128);
        tracep->fullWData(oldp+1038,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_28),128);
        tracep->fullWData(oldp+1042,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_29),128);
        tracep->fullWData(oldp+1046,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_30),128);
        tracep->fullWData(oldp+1050,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_31),128);
        tracep->fullWData(oldp+1054,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_32),128);
        tracep->fullWData(oldp+1058,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_33),128);
        tracep->fullWData(oldp+1062,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_34),128);
        tracep->fullWData(oldp+1066,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_35),128);
        tracep->fullWData(oldp+1070,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_36),128);
        tracep->fullWData(oldp+1074,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_37),128);
        tracep->fullWData(oldp+1078,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_38),128);
        tracep->fullWData(oldp+1082,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_39),128);
        tracep->fullWData(oldp+1086,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_40),128);
        tracep->fullWData(oldp+1090,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_41),128);
        tracep->fullWData(oldp+1094,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_42),128);
        tracep->fullWData(oldp+1098,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_43),128);
        tracep->fullWData(oldp+1102,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_44),128);
        tracep->fullWData(oldp+1106,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_45),128);
        tracep->fullWData(oldp+1110,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_46),128);
        tracep->fullWData(oldp+1114,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_47),128);
        tracep->fullWData(oldp+1118,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_48),128);
        tracep->fullWData(oldp+1122,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_49),128);
        tracep->fullWData(oldp+1126,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_50),128);
        tracep->fullWData(oldp+1130,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_51),128);
        tracep->fullWData(oldp+1134,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_52),128);
        tracep->fullWData(oldp+1138,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_53),128);
        tracep->fullWData(oldp+1142,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_54),128);
        tracep->fullWData(oldp+1146,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_55),128);
        tracep->fullWData(oldp+1150,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_56),128);
        tracep->fullWData(oldp+1154,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_57),128);
        tracep->fullWData(oldp+1158,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_58),128);
        tracep->fullWData(oldp+1162,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_59),128);
        tracep->fullWData(oldp+1166,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_60),128);
        tracep->fullWData(oldp+1170,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_61),128);
        tracep->fullWData(oldp+1174,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_62),128);
        tracep->fullWData(oldp+1178,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_63),128);
        tracep->fullBit(oldp+1182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
        tracep->fullWData(oldp+1183,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata),128);
        tracep->fullWData(oldp+1187,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_0),128);
        tracep->fullWData(oldp+1191,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_1),128);
        tracep->fullWData(oldp+1195,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_2),128);
        tracep->fullWData(oldp+1199,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_3),128);
        tracep->fullWData(oldp+1203,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_4),128);
        tracep->fullWData(oldp+1207,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_5),128);
        tracep->fullWData(oldp+1211,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_6),128);
        tracep->fullWData(oldp+1215,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_7),128);
        tracep->fullWData(oldp+1219,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_8),128);
        tracep->fullWData(oldp+1223,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_9),128);
        tracep->fullWData(oldp+1227,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_10),128);
        tracep->fullWData(oldp+1231,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_11),128);
        tracep->fullWData(oldp+1235,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_12),128);
        tracep->fullWData(oldp+1239,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_13),128);
        tracep->fullWData(oldp+1243,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_14),128);
        tracep->fullWData(oldp+1247,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_15),128);
        tracep->fullWData(oldp+1251,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_16),128);
        tracep->fullWData(oldp+1255,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_17),128);
        tracep->fullWData(oldp+1259,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_18),128);
        tracep->fullWData(oldp+1263,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_19),128);
        tracep->fullWData(oldp+1267,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_20),128);
        tracep->fullWData(oldp+1271,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_21),128);
        tracep->fullWData(oldp+1275,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_22),128);
        tracep->fullWData(oldp+1279,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_23),128);
        tracep->fullWData(oldp+1283,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_24),128);
        tracep->fullWData(oldp+1287,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_25),128);
        tracep->fullWData(oldp+1291,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_26),128);
        tracep->fullWData(oldp+1295,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_27),128);
        tracep->fullWData(oldp+1299,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_28),128);
        tracep->fullWData(oldp+1303,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_29),128);
        tracep->fullWData(oldp+1307,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_30),128);
        tracep->fullWData(oldp+1311,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_31),128);
        tracep->fullWData(oldp+1315,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_32),128);
        tracep->fullWData(oldp+1319,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_33),128);
        tracep->fullWData(oldp+1323,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_34),128);
        tracep->fullWData(oldp+1327,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_35),128);
        tracep->fullWData(oldp+1331,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_36),128);
        tracep->fullWData(oldp+1335,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_37),128);
        tracep->fullWData(oldp+1339,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_38),128);
        tracep->fullWData(oldp+1343,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_39),128);
        tracep->fullWData(oldp+1347,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_40),128);
        tracep->fullWData(oldp+1351,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_41),128);
        tracep->fullWData(oldp+1355,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_42),128);
        tracep->fullWData(oldp+1359,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_43),128);
        tracep->fullWData(oldp+1363,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_44),128);
        tracep->fullWData(oldp+1367,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_45),128);
        tracep->fullWData(oldp+1371,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_46),128);
        tracep->fullWData(oldp+1375,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_47),128);
        tracep->fullWData(oldp+1379,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_48),128);
        tracep->fullWData(oldp+1383,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_49),128);
        tracep->fullWData(oldp+1387,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_50),128);
        tracep->fullWData(oldp+1391,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_51),128);
        tracep->fullWData(oldp+1395,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_52),128);
        tracep->fullWData(oldp+1399,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_53),128);
        tracep->fullWData(oldp+1403,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_54),128);
        tracep->fullWData(oldp+1407,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_55),128);
        tracep->fullWData(oldp+1411,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_56),128);
        tracep->fullWData(oldp+1415,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_57),128);
        tracep->fullWData(oldp+1419,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_58),128);
        tracep->fullWData(oldp+1423,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_59),128);
        tracep->fullWData(oldp+1427,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_60),128);
        tracep->fullWData(oldp+1431,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_61),128);
        tracep->fullWData(oldp+1435,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_62),128);
        tracep->fullWData(oldp+1439,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_63),128);
        tracep->fullBit(oldp+1443,(vlSelf->clock));
        tracep->fullBit(oldp+1444,(vlSelf->reset));
        tracep->fullQData(oldp+1445,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+1447,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+1449,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+1450,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+1451,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+1453,(vlSelf->io_core_debug_raise_intr));
        tracep->fullCData(oldp+1454,(0U),8);
        tracep->fullBit(oldp+1455,(0U));
        __Vtemp67[0U] = 0U;
        __Vtemp67[1U] = 0U;
        __Vtemp67[2U] = 0U;
        __Vtemp67[3U] = 0U;
        tracep->fullWData(oldp+1456,(__Vtemp67),128);
        tracep->fullBit(oldp+1460,(1U));
        tracep->fullIData(oldp+1461,(0U),23);
        tracep->fullCData(oldp+1462,(0U),4);
        tracep->fullQData(oldp+1463,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

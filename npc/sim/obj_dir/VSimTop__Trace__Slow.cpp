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
        tracep->declBit(c+706,"clock", false,-1);
        tracep->declBit(c+707,"reset", false,-1);
        tracep->declQuad(c+708,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+710,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+711,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+712,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+714,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+706,"SimTop clock", false,-1);
        tracep->declBit(c+707,"SimTop reset", false,-1);
        tracep->declQuad(c+708,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+710,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+711,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+712,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+714,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top reset", false,-1);
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
        tracep->declBit(c+11,"SimTop my_core_top io_axi_sram_1_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top io_axi_sram_1_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top io_axi_sram_1_b_valid", false,-1);
        tracep->declQuad(c+708,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+710,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+711,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+712,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+714,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+14,"SimTop my_core_top io_axi_sram_0_ar_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top io_axi_sram_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_core_top io_axi_sram_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+18,"SimTop my_core_top io_axi_sram_0_rd_ready", false,-1);
        tracep->declBit(c+19,"SimTop my_core_top io_axi_sram_0_aw_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top io_axi_sram_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_core_top io_axi_sram_0_wt_valid", false,-1);
        tracep->declQuad(c+21,"SimTop my_core_top io_axi_sram_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+23,"SimTop my_core_top io_axi_sram_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+24,"SimTop my_core_top io_axi_sram_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top io_axi_sram_0_b_ready", false,-1);
        tracep->declBit(c+26,"SimTop my_core_top io_axi_sram_1_ar_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top io_axi_sram_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_core_top io_axi_sram_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+30,"SimTop my_core_top io_axi_sram_1_rd_ready", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top io_axi_sram_1_aw_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top io_axi_sram_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_core_top io_axi_sram_1_wt_valid", false,-1);
        tracep->declQuad(c+33,"SimTop my_core_top io_axi_sram_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+35,"SimTop my_core_top io_axi_sram_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"SimTop my_core_top io_axi_sram_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+37,"SimTop my_core_top io_axi_sram_1_b_ready", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+38,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+40,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_if io_inst_mem_req_ready", false,-1);
        tracep->declQuad(c+42,"SimTop my_core_top my_if io_inst_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_if io_inst_mem_ret_valid", false,-1);
        tracep->declBit(c+45,"SimTop my_core_top my_if io_if2id_ready", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+47,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBit(c+49,"SimTop my_core_top my_if io_inst_mem_req_valid", false,-1);
        tracep->declQuad(c+50,"SimTop my_core_top my_if io_inst_mem_req_bits_addr", false,-1, 63,0);
        tracep->declBit(c+52,"SimTop my_core_top my_if io_inst_mem_req_bits_mthrough", false,-1);
        tracep->declBit(c+53,"SimTop my_core_top my_if io_if2id_valid", false,-1);
        tracep->declBus(c+54,"SimTop my_core_top my_if io_if2id_bits_inst", false,-1, 31,0);
        tracep->declBus(c+55,"SimTop my_core_top my_if io_if2id_bits_pc", false,-1, 31,0);
        tracep->declQuad(c+56,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declBit(c+58,"SimTop my_core_top my_if fs_wait_r", false,-1);
        tracep->declBus(c+59,"SimTop my_core_top my_if fs_state", false,-1, 5,0);
        tracep->declQuad(c+60,"SimTop my_core_top my_if nextpc_r", false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+64,"SimTop my_core_top my_if fs_mem_ok", false,-1);
        tracep->declQuad(c+65,"SimTop my_core_top my_if fs_inst_data", false,-1, 63,0);
        tracep->declQuad(c+50,"SimTop my_core_top my_if mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+52,"SimTop my_core_top my_if mm io_mthrough", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_id reset", false,-1);
        tracep->declBit(c+53,"SimTop my_core_top my_id io_if2id_valid", false,-1);
        tracep->declBus(c+54,"SimTop my_core_top my_id io_if2id_bits_inst", false,-1, 31,0);
        tracep->declBus(c+55,"SimTop my_core_top my_id io_if2id_bits_pc", false,-1, 31,0);
        tracep->declBit(c+67,"SimTop my_core_top my_id io_id2ex_ready", false,-1);
        tracep->declBit(c+68,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+69,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_id io_exc_flush", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_id io_br_flush", false,-1);
        tracep->declBit(c+45,"SimTop my_core_top my_id io_if2id_ready", false,-1);
        tracep->declBit(c+72,"SimTop my_core_top my_id io_id2ex_valid", false,-1);
        tracep->declBus(c+73,"SimTop my_core_top my_id io_id2ex_bits_alu_op", false,-1, 22,0);
        tracep->declBit(c+74,"SimTop my_core_top my_id io_id2ex_bits_src1_sel", false,-1);
        tracep->declBit(c+75,"SimTop my_core_top my_id io_id2ex_bits_src2_sel", false,-1);
        tracep->declBus(c+76,"SimTop my_core_top my_id io_id2ex_bits_br_type", false,-1, 8,0);
        tracep->declBit(c+77,"SimTop my_core_top my_id io_id2ex_bits_gr_we", false,-1);
        tracep->declBit(c+78,"SimTop my_core_top my_id io_id2ex_bits_wb_sel", false,-1);
        tracep->declBit(c+79,"SimTop my_core_top my_id io_id2ex_bits_mem_en", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_id io_id2ex_bits_mem_wr", false,-1);
        tracep->declBus(c+81,"SimTop my_core_top my_id io_id2ex_bits_mem_type", false,-1, 6,0);
        tracep->declBit(c+82,"SimTop my_core_top my_id io_id2ex_bits_rv64w", false,-1);
        tracep->declBus(c+83,"SimTop my_core_top my_id io_id2ex_bits_ex_sel", false,-1, 2,0);
        tracep->declBus(c+84,"SimTop my_core_top my_id io_id2ex_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+85,"SimTop my_core_top my_id io_id2ex_bits_exc_type", false,-1, 1,0);
        tracep->declBus(c+86,"SimTop my_core_top my_id io_id2ex_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+87,"SimTop my_core_top my_id io_id2ex_bits_pc", false,-1, 63,0);
        tracep->declBus(c+89,"SimTop my_core_top my_id io_id2ex_bits_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+90,"SimTop my_core_top my_id io_id2ex_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"SimTop my_core_top my_id io_id2ex_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_id io_id2ex_bits_rs2", false,-1, 63,0);
        tracep->declQuad(c+95,"SimTop my_core_top my_id io_id2ex_bits_imm", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_id io_id2ex_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+97,"SimTop my_core_top my_id io_id2ex_bits_csr_num", false,-1, 11,0);
        tracep->declBit(c+72,"SimTop my_core_top my_id ds_valid", false,-1);
        tracep->declBus(c+98,"SimTop my_core_top my_id fs_ds_r_inst", false,-1, 31,0);
        tracep->declBus(c+99,"SimTop my_core_top my_id fs_ds_r_pc", false,-1, 31,0);
        tracep->declBus(c+89,"SimTop my_core_top my_id rf_raddr1", false,-1, 4,0);
        tracep->declBit(c+706,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+100,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+101,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+98,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+103,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+73,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+74,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+75,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+77,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+78,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+76,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+79,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+81,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+82,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+83,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+84,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+85,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+706,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+89,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+90,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+69,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+68,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+91,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+706,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+69,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+89,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+90,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+68,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+70,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+91,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+104+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declBit(c+706,"SimTop my_core_top my_ex clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_ex reset", false,-1);
        tracep->declBit(c+72,"SimTop my_core_top my_ex io_id2ex_valid", false,-1);
        tracep->declBus(c+73,"SimTop my_core_top my_ex io_id2ex_bits_alu_op", false,-1, 22,0);
        tracep->declBit(c+74,"SimTop my_core_top my_ex io_id2ex_bits_src1_sel", false,-1);
        tracep->declBit(c+75,"SimTop my_core_top my_ex io_id2ex_bits_src2_sel", false,-1);
        tracep->declBus(c+76,"SimTop my_core_top my_ex io_id2ex_bits_br_type", false,-1, 8,0);
        tracep->declBit(c+77,"SimTop my_core_top my_ex io_id2ex_bits_gr_we", false,-1);
        tracep->declBit(c+78,"SimTop my_core_top my_ex io_id2ex_bits_wb_sel", false,-1);
        tracep->declBit(c+79,"SimTop my_core_top my_ex io_id2ex_bits_mem_en", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_ex io_id2ex_bits_mem_wr", false,-1);
        tracep->declBus(c+81,"SimTop my_core_top my_ex io_id2ex_bits_mem_type", false,-1, 6,0);
        tracep->declBit(c+82,"SimTop my_core_top my_ex io_id2ex_bits_rv64w", false,-1);
        tracep->declBus(c+83,"SimTop my_core_top my_ex io_id2ex_bits_ex_sel", false,-1, 2,0);
        tracep->declBus(c+84,"SimTop my_core_top my_ex io_id2ex_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+85,"SimTop my_core_top my_ex io_id2ex_bits_exc_type", false,-1, 1,0);
        tracep->declBus(c+86,"SimTop my_core_top my_ex io_id2ex_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+87,"SimTop my_core_top my_ex io_id2ex_bits_pc", false,-1, 63,0);
        tracep->declBus(c+89,"SimTop my_core_top my_ex io_id2ex_bits_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+90,"SimTop my_core_top my_ex io_id2ex_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"SimTop my_core_top my_ex io_id2ex_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_ex io_id2ex_bits_rs2", false,-1, 63,0);
        tracep->declQuad(c+95,"SimTop my_core_top my_ex io_id2ex_bits_imm", false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop my_core_top my_ex io_id2ex_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+97,"SimTop my_core_top my_ex io_id2ex_bits_csr_num", false,-1, 11,0);
        tracep->declBit(c+168,"SimTop my_core_top my_ex io_ex2mem_ready", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_ex io_exc_flush", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_ex io_br_flush", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_ex io_ms_forward_valid", false,-1);
        tracep->declBit(c+170,"SimTop my_core_top my_ex io_ms_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+171,"SimTop my_core_top my_ex io_ms_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop my_core_top my_ex io_ms_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+174,"SimTop my_core_top my_ex io_ws_forward_valid", false,-1);
        tracep->declBit(c+174,"SimTop my_core_top my_ex io_ws_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+69,"SimTop my_core_top my_ex io_ws_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_ex io_ws_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+67,"SimTop my_core_top my_ex io_id2ex_ready", false,-1);
        tracep->declBit(c+175,"SimTop my_core_top my_ex io_ex2mem_valid", false,-1);
        tracep->declBus(c+176,"SimTop my_core_top my_ex io_ex2mem_bits_pc", false,-1, 31,0);
        tracep->declBit(c+177,"SimTop my_core_top my_ex io_ex2mem_bits_gr_we", false,-1);
        tracep->declBus(c+178,"SimTop my_core_top my_ex io_ex2mem_bits_dest", false,-1, 4,0);
        tracep->declBit(c+179,"SimTop my_core_top my_ex io_ex2mem_bits_wb_sel", false,-1);
        tracep->declBit(c+180,"SimTop my_core_top my_ex io_ex2mem_bits_mem_en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_ex io_ex2mem_bits_mem_wr", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_ex io_ex2mem_bits_mem_type", false,-1, 6,0);
        tracep->declBus(c+183,"SimTop my_core_top my_ex io_ex2mem_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+184,"SimTop my_core_top my_ex io_ex2mem_bits_exc_type", false,-1, 1,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_ex io_ex2mem_bits_result", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop my_core_top my_ex io_ex2mem_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+189,"SimTop my_core_top my_ex io_ex2mem_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_ex io_ex2mem_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop my_core_top my_ex io_ex2mem_bits_br_br_target", false,-1, 63,0);
        tracep->declBit(c+194,"SimTop my_core_top my_ex io_ex2mem_bits_br_br_en", false,-1);
        tracep->declBit(c+195,"SimTop my_core_top my_ex es_valid", false,-1);
        tracep->declBus(c+196,"SimTop my_core_top my_ex ds_es_r_alu_op", false,-1, 22,0);
        tracep->declBit(c+197,"SimTop my_core_top my_ex ds_es_r_src1_sel", false,-1);
        tracep->declBit(c+198,"SimTop my_core_top my_ex ds_es_r_src2_sel", false,-1);
        tracep->declBus(c+199,"SimTop my_core_top my_ex ds_es_r_br_type", false,-1, 8,0);
        tracep->declBit(c+177,"SimTop my_core_top my_ex ds_es_r_gr_we", false,-1);
        tracep->declBit(c+179,"SimTop my_core_top my_ex ds_es_r_wb_sel", false,-1);
        tracep->declBit(c+180,"SimTop my_core_top my_ex ds_es_r_mem_en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_ex ds_es_r_mem_wr", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_ex ds_es_r_mem_type", false,-1, 6,0);
        tracep->declBit(c+200,"SimTop my_core_top my_ex ds_es_r_rv64w", false,-1);
        tracep->declBus(c+201,"SimTop my_core_top my_ex ds_es_r_ex_sel", false,-1, 2,0);
        tracep->declBus(c+183,"SimTop my_core_top my_ex ds_es_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+184,"SimTop my_core_top my_ex ds_es_r_exc_type", false,-1, 1,0);
        tracep->declBus(c+178,"SimTop my_core_top my_ex ds_es_r_dest", false,-1, 4,0);
        tracep->declQuad(c+202,"SimTop my_core_top my_ex ds_es_r_pc", false,-1, 63,0);
        tracep->declBus(c+204,"SimTop my_core_top my_ex ds_es_r_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+205,"SimTop my_core_top my_ex ds_es_r_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_ex ds_es_r_rs1", false,-1, 63,0);
        tracep->declQuad(c+206,"SimTop my_core_top my_ex ds_es_r_rs2", false,-1, 63,0);
        tracep->declQuad(c+208,"SimTop my_core_top my_ex ds_es_r_imm", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop my_core_top my_ex ds_es_r_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+189,"SimTop my_core_top my_ex ds_es_r_csr_num", false,-1, 11,0);
        tracep->declBit(c+210,"SimTop my_core_top my_ex rs1_depend_ms", false,-1);
        tracep->declBit(c+211,"SimTop my_core_top my_ex rs1_depend_ws", false,-1);
        tracep->declBit(c+212,"SimTop my_core_top my_ex rs2_depend_ms", false,-1);
        tracep->declBit(c+213,"SimTop my_core_top my_ex rs2_depend_ws", false,-1);
        tracep->declQuad(c+214,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+216,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+217,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declBit(c+218,"SimTop my_core_top my_ex es_ready_go", false,-1);
        tracep->declQuad(c+219,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+221,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+196,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+223,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+225,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+226,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+227,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+231,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+234,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+236,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+237,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+238,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+706,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+175,"SimTop my_core_top my_mem io_ex2mem_valid", false,-1);
        tracep->declBus(c+176,"SimTop my_core_top my_mem io_ex2mem_bits_pc", false,-1, 31,0);
        tracep->declBit(c+177,"SimTop my_core_top my_mem io_ex2mem_bits_gr_we", false,-1);
        tracep->declBus(c+178,"SimTop my_core_top my_mem io_ex2mem_bits_dest", false,-1, 4,0);
        tracep->declBit(c+179,"SimTop my_core_top my_mem io_ex2mem_bits_wb_sel", false,-1);
        tracep->declBit(c+180,"SimTop my_core_top my_mem io_ex2mem_bits_mem_en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_mem io_ex2mem_bits_mem_wr", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_mem io_ex2mem_bits_mem_type", false,-1, 6,0);
        tracep->declBus(c+183,"SimTop my_core_top my_mem io_ex2mem_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+184,"SimTop my_core_top my_mem io_ex2mem_bits_exc_type", false,-1, 1,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_mem io_ex2mem_bits_result", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop my_core_top my_mem io_ex2mem_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+189,"SimTop my_core_top my_mem io_ex2mem_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+190,"SimTop my_core_top my_mem io_ex2mem_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop my_core_top my_mem io_ex2mem_bits_br_br_target", false,-1, 63,0);
        tracep->declBit(c+194,"SimTop my_core_top my_mem io_ex2mem_bits_br_br_en", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_mem io_exc_flush", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top my_mem io_data_mem_req_ready", false,-1);
        tracep->declQuad(c+240,"SimTop my_core_top my_mem io_data_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+242,"SimTop my_core_top my_mem io_data_mem_ret_valid", false,-1);
        tracep->declBit(c+168,"SimTop my_core_top my_mem io_ex2mem_ready", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_mem io_mem2wb_valid", false,-1);
        tracep->declBus(c+243,"SimTop my_core_top my_mem io_mem2wb_bits_pc", false,-1, 31,0);
        tracep->declBit(c+244,"SimTop my_core_top my_mem io_mem2wb_bits_gr_we", false,-1);
        tracep->declBus(c+245,"SimTop my_core_top my_mem io_mem2wb_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+246,"SimTop my_core_top my_mem io_mem2wb_bits_exc_type", false,-1, 1,0);
        tracep->declBus(c+171,"SimTop my_core_top my_mem io_mem2wb_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop my_core_top my_mem io_mem2wb_bits_result", false,-1, 63,0);
        tracep->declBus(c+247,"SimTop my_core_top my_mem io_mem2wb_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+248,"SimTop my_core_top my_mem io_mem2wb_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+38,"SimTop my_core_top my_mem io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+40,"SimTop my_core_top my_mem io_branch_br_en", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_mem io_data_mem_req_valid", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_mem io_data_mem_req_bits_wr", false,-1);
        tracep->declQuad(c+252,"SimTop my_core_top my_mem io_data_mem_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop my_core_top my_mem io_data_mem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+256,"SimTop my_core_top my_mem io_data_mem_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+257,"SimTop my_core_top my_mem io_data_mem_req_bits_mthrough", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_mem io_ms_forward_valid", false,-1);
        tracep->declBit(c+170,"SimTop my_core_top my_mem io_ms_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+171,"SimTop my_core_top my_mem io_ms_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop my_core_top my_mem io_ms_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+170,"SimTop my_core_top my_mem ms_valid", false,-1);
        tracep->declBus(c+243,"SimTop my_core_top my_mem es_ms_r_pc", false,-1, 31,0);
        tracep->declBit(c+244,"SimTop my_core_top my_mem es_ms_r_gr_we", false,-1);
        tracep->declBus(c+171,"SimTop my_core_top my_mem es_ms_r_dest", false,-1, 4,0);
        tracep->declBit(c+258,"SimTop my_core_top my_mem es_ms_r_wb_sel", false,-1);
        tracep->declBit(c+259,"SimTop my_core_top my_mem es_ms_r_mem_en", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_mem es_ms_r_mem_wr", false,-1);
        tracep->declBus(c+260,"SimTop my_core_top my_mem es_ms_r_mem_type", false,-1, 6,0);
        tracep->declBus(c+245,"SimTop my_core_top my_mem es_ms_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+246,"SimTop my_core_top my_mem es_ms_r_exc_type", false,-1, 1,0);
        tracep->declQuad(c+261,"SimTop my_core_top my_mem es_ms_r_result", false,-1, 63,0);
        tracep->declQuad(c+263,"SimTop my_core_top my_mem es_ms_r_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+247,"SimTop my_core_top my_mem es_ms_r_csr_num", false,-1, 11,0);
        tracep->declQuad(c+248,"SimTop my_core_top my_mem es_ms_r_rs1", false,-1, 63,0);
        tracep->declQuad(c+38,"SimTop my_core_top my_mem es_ms_r_br_br_target", false,-1, 63,0);
        tracep->declBit(c+265,"SimTop my_core_top my_mem es_ms_r_br_br_en", false,-1);
        tracep->declQuad(c+252,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBus(c+266,"SimTop my_core_top my_mem ms_state", false,-1, 2,0);
        tracep->declBit(c+267,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_mem ms_ready_go", false,-1);
        tracep->declBus(c+269,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+270,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+271,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+252,"SimTop my_core_top my_mem mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+257,"SimTop my_core_top my_mem mm io_mthrough", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_wb clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_wb reset", false,-1);
        tracep->declBit(c+169,"SimTop my_core_top my_wb io_mem2wb_valid", false,-1);
        tracep->declBus(c+243,"SimTop my_core_top my_wb io_mem2wb_bits_pc", false,-1, 31,0);
        tracep->declBit(c+244,"SimTop my_core_top my_wb io_mem2wb_bits_gr_we", false,-1);
        tracep->declBus(c+245,"SimTop my_core_top my_wb io_mem2wb_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+246,"SimTop my_core_top my_wb io_mem2wb_bits_exc_type", false,-1, 1,0);
        tracep->declBus(c+171,"SimTop my_core_top my_wb io_mem2wb_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop my_core_top my_wb io_mem2wb_bits_result", false,-1, 63,0);
        tracep->declBus(c+247,"SimTop my_core_top my_wb io_mem2wb_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+248,"SimTop my_core_top my_wb io_mem2wb_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+272,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+274,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+275,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+68,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+69,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+47,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+279,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+280,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+281,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+283,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+284,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+285,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+287,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+174,"SimTop my_core_top my_wb io_ws_forward_valid", false,-1);
        tracep->declBit(c+174,"SimTop my_core_top my_wb io_ws_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+69,"SimTop my_core_top my_wb io_ws_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+70,"SimTop my_core_top my_wb io_ws_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+174,"SimTop my_core_top my_wb ws_valid", false,-1);
        tracep->declBus(c+289,"SimTop my_core_top my_wb ms_ws_r_pc", false,-1, 31,0);
        tracep->declBit(c+290,"SimTop my_core_top my_wb ms_ws_r_gr_we", false,-1);
        tracep->declBus(c+279,"SimTop my_core_top my_wb ms_ws_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+291,"SimTop my_core_top my_wb ms_ws_r_exc_type", false,-1, 1,0);
        tracep->declBus(c+69,"SimTop my_core_top my_wb ms_ws_r_dest", false,-1, 4,0);
        tracep->declQuad(c+292,"SimTop my_core_top my_wb ms_ws_r_result", false,-1, 63,0);
        tracep->declBus(c+280,"SimTop my_core_top my_wb ms_ws_r_csr_num", false,-1, 11,0);
        tracep->declQuad(c+281,"SimTop my_core_top my_wb ms_ws_r_rs1", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+279,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+280,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+281,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+283,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+284,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+285,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+287,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+294,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+272,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+274,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+275,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+295,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+296,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+297,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+298,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+299,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+300,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+302,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+304,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+306,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+308,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+310,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+274,"SimTop my_core_top my_csr has_intr_t", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_axi_bridge0 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_axi_bridge0 reset", false,-1);
        tracep->declBit(c+312,"SimTop my_core_top my_axi_bridge0 io_in_req_valid", false,-1);
        tracep->declBit(c+313,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+314,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+318,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+319,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top my_axi_bridge0 io_out_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top my_axi_bridge0 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge0 io_out_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_axi_bridge0 io_out_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top my_axi_bridge0 io_out_b_valid", false,-1);
        tracep->declBit(c+320,"SimTop my_core_top my_axi_bridge0 io_in_req_ready", false,-1);
        tracep->declQuad(c+321,"SimTop my_core_top my_axi_bridge0 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+323,"SimTop my_core_top my_axi_bridge0 io_in_ret_valid", false,-1);
        tracep->declBit(c+324,"SimTop my_core_top my_axi_bridge0 io_in_rlast", false,-1);
        tracep->declBit(c+14,"SimTop my_core_top my_axi_bridge0 io_out_ar_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_axi_bridge0 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_core_top my_axi_bridge0 io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+18,"SimTop my_core_top my_axi_bridge0 io_out_rd_ready", false,-1);
        tracep->declBit(c+19,"SimTop my_core_top my_axi_bridge0 io_out_aw_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_axi_bridge0 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_core_top my_axi_bridge0 io_out_wt_valid", false,-1);
        tracep->declQuad(c+21,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+23,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+24,"SimTop my_core_top my_axi_bridge0 io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_axi_bridge0 io_out_b_ready", false,-1);
        tracep->declBus(c+325,"SimTop my_core_top my_axi_bridge0 state", false,-1, 3,0);
        tracep->declBit(c+326,"SimTop my_core_top my_axi_bridge0 rd_widx", false,-1);
        tracep->declBit(c+327,"SimTop my_core_top my_axi_bridge0 rd_after_wt_r", false,-1);
        tracep->declArray(c+328,"SimTop my_core_top my_axi_bridge0 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+332,"SimTop my_core_top my_axi_bridge0 wtag_r", false,-1, 59,0);
        tracep->declBus(c+23,"SimTop my_core_top my_axi_bridge0 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+334,"SimTop my_core_top my_axi_bridge0 wt_widx", false,-1);
        tracep->declBit(c+335,"SimTop my_core_top my_axi_bridge0 burst_cnt", false,-1);
        tracep->declBus(c+336,"SimTop my_core_top my_axi_bridge0 burst_len", false,-1, 7,0);
        tracep->declBit(c+337,"SimTop my_core_top my_axi_bridge0 rd_after_wt", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_axi_bridge1 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_axi_bridge1 reset", false,-1);
        tracep->declBit(c+338,"SimTop my_core_top my_axi_bridge1 io_in_req_valid", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+340,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+344,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top my_axi_bridge1 io_out_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top my_axi_bridge1 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_axi_bridge1 io_out_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top my_axi_bridge1 io_out_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top my_axi_bridge1 io_out_b_valid", false,-1);
        tracep->declBit(c+346,"SimTop my_core_top my_axi_bridge1 io_in_req_ready", false,-1);
        tracep->declQuad(c+347,"SimTop my_core_top my_axi_bridge1 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+349,"SimTop my_core_top my_axi_bridge1 io_in_ret_valid", false,-1);
        tracep->declBit(c+350,"SimTop my_core_top my_axi_bridge1 io_in_rlast", false,-1);
        tracep->declBit(c+26,"SimTop my_core_top my_axi_bridge1 io_out_ar_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_axi_bridge1 io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_core_top my_axi_bridge1 io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+30,"SimTop my_core_top my_axi_bridge1 io_out_rd_ready", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top my_axi_bridge1 io_out_aw_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_axi_bridge1 io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_core_top my_axi_bridge1 io_out_wt_valid", false,-1);
        tracep->declQuad(c+33,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+35,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"SimTop my_core_top my_axi_bridge1 io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+37,"SimTop my_core_top my_axi_bridge1 io_out_b_ready", false,-1);
        tracep->declBus(c+351,"SimTop my_core_top my_axi_bridge1 state", false,-1, 3,0);
        tracep->declBit(c+352,"SimTop my_core_top my_axi_bridge1 rd_widx", false,-1);
        tracep->declBit(c+353,"SimTop my_core_top my_axi_bridge1 rd_after_wt_r", false,-1);
        tracep->declArray(c+354,"SimTop my_core_top my_axi_bridge1 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+358,"SimTop my_core_top my_axi_bridge1 wtag_r", false,-1, 59,0);
        tracep->declBus(c+35,"SimTop my_core_top my_axi_bridge1 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+360,"SimTop my_core_top my_axi_bridge1 wt_widx", false,-1);
        tracep->declBit(c+361,"SimTop my_core_top my_axi_bridge1 burst_cnt", false,-1);
        tracep->declBus(c+362,"SimTop my_core_top my_axi_bridge1 burst_len", false,-1, 7,0);
        tracep->declBit(c+363,"SimTop my_core_top my_axi_bridge1 rd_after_wt", false,-1);
        tracep->declBit(c+364,"SimTop my_core_top my_mmc io_in_req_valid", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_mmc io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+340,"SimTop my_core_top my_mmc io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+344,"SimTop my_core_top my_mmc io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_mmc io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+365,"SimTop my_core_top my_mmc io_clint_out_clint_hit", false,-1);
        tracep->declBit(c+366,"SimTop my_core_top my_mmc io_clint_out_ret_valid", false,-1);
        tracep->declBit(c+346,"SimTop my_core_top my_mmc io_axi_out_req_ready", false,-1);
        tracep->declQuad(c+347,"SimTop my_core_top my_mmc io_axi_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+349,"SimTop my_core_top my_mmc io_axi_out_ret_valid", false,-1);
        tracep->declBit(c+350,"SimTop my_core_top my_mmc io_axi_out_rlast", false,-1);
        tracep->declBit(c+367,"SimTop my_core_top my_mmc io_in_req_ready", false,-1);
        tracep->declQuad(c+347,"SimTop my_core_top my_mmc io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+368,"SimTop my_core_top my_mmc io_in_ret_valid", false,-1);
        tracep->declBit(c+369,"SimTop my_core_top my_mmc io_in_rlast", false,-1);
        tracep->declBit(c+370,"SimTop my_core_top my_mmc io_clint_out_en", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_mmc io_clint_out_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_clint_out_addr", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop my_core_top my_mmc io_clint_out_wdata", false,-1, 63,0);
        tracep->declBit(c+338,"SimTop my_core_top my_mmc io_axi_out_req_valid", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_mmc io_axi_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_axi_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+340,"SimTop my_core_top my_mmc io_axi_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+344,"SimTop my_core_top my_mmc io_axi_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_mmc io_axi_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_icache clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache reset", false,-1);
        tracep->declBit(c+49,"SimTop my_core_top my_icache io_in_req_valid", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+50,"SimTop my_core_top my_icache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+716,"SimTop my_core_top my_icache io_in_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+718,"SimTop my_core_top my_icache io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+320,"SimTop my_core_top my_icache io_out_req_ready", false,-1);
        tracep->declQuad(c+321,"SimTop my_core_top my_icache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+323,"SimTop my_core_top my_icache io_out_ret_valid", false,-1);
        tracep->declBit(c+324,"SimTop my_core_top my_icache io_out_rlast", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache io_in_req_ready", false,-1);
        tracep->declQuad(c+42,"SimTop my_core_top my_icache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_icache io_in_ret_valid", false,-1);
        tracep->declBit(c+312,"SimTop my_core_top my_icache io_out_req_valid", false,-1);
        tracep->declBit(c+313,"SimTop my_core_top my_icache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+314,"SimTop my_core_top my_icache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+318,"SimTop my_core_top my_icache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+319,"SimTop my_core_top my_icache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+373,"SimTop my_core_top my_icache cache_addr", false,-1, 5,0);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage1 io_cpu_valid", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache stage1 io_cpu_bits_wr", false,-1);
        tracep->declQuad(c+50,"SimTop my_core_top my_icache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+716,"SimTop my_core_top my_icache stage1 io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+718,"SimTop my_core_top my_icache stage1 io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+374,"SimTop my_core_top my_icache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache stage1 io_rd_en", false,-1);
        tracep->declBus(c+375,"SimTop my_core_top my_icache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+716,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+718,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+376,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+375,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+377,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache stage2 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache stage2 reset", false,-1);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+716,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+718,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+376,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+375,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+377,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+378,"SimTop my_core_top my_icache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+379,"SimTop my_core_top my_icache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+380,"SimTop my_core_top my_icache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+381,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+383,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+385,"SimTop my_core_top my_icache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+386,"SimTop my_core_top my_icache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+387,"SimTop my_core_top my_icache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+388,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+392,"SimTop my_core_top my_icache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+393,"SimTop my_core_top my_icache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+394,"SimTop my_core_top my_icache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+395,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+397,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+399,"SimTop my_core_top my_icache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+400,"SimTop my_core_top my_icache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+401,"SimTop my_core_top my_icache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+402,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+404,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+374,"SimTop my_core_top my_icache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+374,"SimTop my_core_top my_icache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+407,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+408,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+410,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+411,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+412,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+413,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+414,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+415,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+416,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+417,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+418,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+419,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+420,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+406,"SimTop my_core_top my_icache stage2 s2_valid", false,-1);
        tracep->declBit(c+407,"SimTop my_core_top my_icache stage2 buf_wr", false,-1);
        tracep->declQuad(c+408,"SimTop my_core_top my_icache stage2 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+410,"SimTop my_core_top my_icache stage2 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+411,"SimTop my_core_top my_icache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+412,"SimTop my_core_top my_icache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+413,"SimTop my_core_top my_icache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+414,"SimTop my_core_top my_icache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+424,"SimTop my_core_top my_icache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+425,"SimTop my_core_top my_icache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+426,"SimTop my_core_top my_icache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache stage3 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache stage3 reset", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+407,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+408,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+410,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+411,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+412,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+413,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+414,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+415,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+416,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+417,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+418,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+419,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+420,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+320,"SimTop my_core_top my_icache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+321,"SimTop my_core_top my_icache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+323,"SimTop my_core_top my_icache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+324,"SimTop my_core_top my_icache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+42,"SimTop my_core_top my_icache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_icache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+374,"SimTop my_core_top my_icache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache stage3 io_wt_en", false,-1);
        tracep->declBus(c+428,"SimTop my_core_top my_icache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+429,"SimTop my_core_top my_icache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBit(c+430,"SimTop my_core_top my_icache stage3 io_wt_line_dirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+432,"SimTop my_core_top my_icache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+434,"SimTop my_core_top my_icache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+312,"SimTop my_core_top my_icache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+313,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+314,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+318,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+319,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache stage3 s3_valid", false,-1);
        tracep->declBit(c+430,"SimTop my_core_top my_icache stage3 buf_wr", false,-1);
        tracep->declQuad(c+437,"SimTop my_core_top my_icache stage3 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+439,"SimTop my_core_top my_icache stage3 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+319,"SimTop my_core_top my_icache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+429,"SimTop my_core_top my_icache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+440,"SimTop my_core_top my_icache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+441,"SimTop my_core_top my_icache stage3 buf_hit", false,-1);
        tracep->declBus(c+428,"SimTop my_core_top my_icache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+442,"SimTop my_core_top my_icache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+443,"SimTop my_core_top my_icache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+444,"SimTop my_core_top my_icache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+445,"SimTop my_core_top my_icache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+447,"SimTop my_core_top my_icache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+449,"SimTop my_core_top my_icache stage3 state", false,-1, 5,0);
        tracep->declBit(c+450,"SimTop my_core_top my_icache stage3 cnt", false,-1);
        tracep->declQuad(c+451,"SimTop my_core_top my_icache stage3 cpu_word_mask", false,-1, 63,0);
        tracep->declBit(c+453,"SimTop my_core_top my_icache stage3 hit", false,-1);
        tracep->declBit(c+454,"SimTop my_core_top my_icache stage3 write_hit", false,-1);
        tracep->declBit(c+455,"SimTop my_core_top my_icache stage3 wb_en", false,-1);
        tracep->declBit(c+456,"SimTop my_core_top my_icache stage3 burst_last", false,-1);
        tracep->declBit(c+457,"SimTop my_core_top my_icache stage3 refill_come", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_icache CacheDataRamV clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache CacheDataRamV reset", false,-1);
        tracep->declBit(c+458,"SimTop my_core_top my_icache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+459,"SimTop my_core_top my_icache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+373,"SimTop my_core_top my_icache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_icache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+464,"SimTop my_core_top my_icache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+468,"SimTop my_core_top my_icache CacheDataRamV cen", false,-1);
        tracep->declBit(c+469,"SimTop my_core_top my_icache CacheDataRamV wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_icache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+464,"SimTop my_core_top my_icache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+470,"SimTop my_core_top my_icache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+459,"SimTop my_core_top my_icache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+373,"SimTop my_core_top my_icache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_icache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+471,"SimTop my_core_top my_icache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+468,"SimTop my_core_top my_icache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+475,"SimTop my_core_top my_icache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_icache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+471,"SimTop my_core_top my_icache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+476,"SimTop my_core_top my_icache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+459,"SimTop my_core_top my_icache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+373,"SimTop my_core_top my_icache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_icache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+477,"SimTop my_core_top my_icache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+468,"SimTop my_core_top my_icache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+481,"SimTop my_core_top my_icache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_icache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+477,"SimTop my_core_top my_icache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_icache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+482,"SimTop my_core_top my_icache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+459,"SimTop my_core_top my_icache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+373,"SimTop my_core_top my_icache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_icache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+483,"SimTop my_core_top my_icache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+468,"SimTop my_core_top my_icache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+487,"SimTop my_core_top my_icache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_icache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+483,"SimTop my_core_top my_icache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+460,"SimTop my_core_top my_icache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache cache_meta clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache cache_meta reset", false,-1);
        tracep->declBit(c+468,"SimTop my_core_top my_icache cache_meta io_en", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache cache_meta io_wr", false,-1);
        tracep->declBus(c+428,"SimTop my_core_top my_icache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+488,"SimTop my_core_top my_icache cache_meta io_index", false,-1, 4,0);
        tracep->declBit(c+430,"SimTop my_core_top my_icache cache_meta io_in_dirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+378,"SimTop my_core_top my_icache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+379,"SimTop my_core_top my_icache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+380,"SimTop my_core_top my_icache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+386,"SimTop my_core_top my_icache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+387,"SimTop my_core_top my_icache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+393,"SimTop my_core_top my_icache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+394,"SimTop my_core_top my_icache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+400,"SimTop my_core_top my_icache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+401,"SimTop my_core_top my_icache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+706,"SimTop my_core_top my_icache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+489,"SimTop my_core_top my_icache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+378,"SimTop my_core_top my_icache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+380,"SimTop my_core_top my_icache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+373,"SimTop my_core_top my_icache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+430,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+490,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+492,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+380,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+378,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+494,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+386,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+387,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+373,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+430,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+495,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+497,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+387,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+386,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+499,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+393,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+394,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+373,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+430,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+500,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+502,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+394,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+393,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+504,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+427,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+400,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+401,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+373,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+430,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+431,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+505,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+507,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+401,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+400,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache reset", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_dcache io_in_req_valid", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_dcache io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+252,"SimTop my_core_top my_dcache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop my_core_top my_dcache io_in_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+256,"SimTop my_core_top my_dcache io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+367,"SimTop my_core_top my_dcache io_out_req_ready", false,-1);
        tracep->declQuad(c+347,"SimTop my_core_top my_dcache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+368,"SimTop my_core_top my_dcache io_out_ret_valid", false,-1);
        tracep->declBit(c+369,"SimTop my_core_top my_dcache io_out_rlast", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top my_dcache io_in_req_ready", false,-1);
        tracep->declQuad(c+240,"SimTop my_core_top my_dcache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+242,"SimTop my_core_top my_dcache io_in_ret_valid", false,-1);
        tracep->declBit(c+364,"SimTop my_core_top my_dcache io_out_req_valid", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_dcache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+340,"SimTop my_core_top my_dcache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+344,"SimTop my_core_top my_dcache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache cache_addr", false,-1, 5,0);
        tracep->declBit(c+250,"SimTop my_core_top my_dcache stage1 io_cpu_valid", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wr", false,-1);
        tracep->declQuad(c+252,"SimTop my_core_top my_dcache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+256,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+510,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top my_dcache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+239,"SimTop my_core_top my_dcache stage1 io_rd_en", false,-1);
        tracep->declBus(c+511,"SimTop my_core_top my_dcache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+250,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+254,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+256,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+512,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+511,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+513,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache stage2 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache stage2 reset", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+251,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+254,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+256,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+512,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+511,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+513,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+514,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+515,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+516,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+517,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+519,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+522,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+523,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+524,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+526,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+529,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+530,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+531,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+533,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+536,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+537,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+538,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+540,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+510,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+510,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+543,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+544,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+546,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+547,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+548,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+549,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+550,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+551,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+552,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+553,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+554,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+555,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+556,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+558,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache stage2 s2_valid", false,-1);
        tracep->declBit(c+543,"SimTop my_core_top my_dcache stage2 buf_wr", false,-1);
        tracep->declQuad(c+544,"SimTop my_core_top my_dcache stage2 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+546,"SimTop my_core_top my_dcache stage2 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+547,"SimTop my_core_top my_dcache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+548,"SimTop my_core_top my_dcache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+549,"SimTop my_core_top my_dcache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+550,"SimTop my_core_top my_dcache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+560,"SimTop my_core_top my_dcache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+561,"SimTop my_core_top my_dcache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+562,"SimTop my_core_top my_dcache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache stage3 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache stage3 reset", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+543,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+544,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+546,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+547,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+548,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+549,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+550,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+551,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+552,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+553,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+554,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+555,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+556,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+558,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+367,"SimTop my_core_top my_dcache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+347,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+368,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+369,"SimTop my_core_top my_dcache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+240,"SimTop my_core_top my_dcache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+242,"SimTop my_core_top my_dcache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+510,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache stage3 io_wt_en", false,-1);
        tracep->declBus(c+564,"SimTop my_core_top my_dcache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+565,"SimTop my_core_top my_dcache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache stage3 io_wt_line_dirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+568,"SimTop my_core_top my_dcache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+570,"SimTop my_core_top my_dcache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+364,"SimTop my_core_top my_dcache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+340,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+344,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache stage3 s3_valid", false,-1);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache stage3 buf_wr", false,-1);
        tracep->declQuad(c+573,"SimTop my_core_top my_dcache stage3 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+575,"SimTop my_core_top my_dcache stage3 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+565,"SimTop my_core_top my_dcache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+576,"SimTop my_core_top my_dcache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+577,"SimTop my_core_top my_dcache stage3 buf_hit", false,-1);
        tracep->declBus(c+564,"SimTop my_core_top my_dcache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+578,"SimTop my_core_top my_dcache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+579,"SimTop my_core_top my_dcache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+580,"SimTop my_core_top my_dcache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+581,"SimTop my_core_top my_dcache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+583,"SimTop my_core_top my_dcache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+585,"SimTop my_core_top my_dcache stage3 state", false,-1, 5,0);
        tracep->declBit(c+586,"SimTop my_core_top my_dcache stage3 cnt", false,-1);
        tracep->declQuad(c+587,"SimTop my_core_top my_dcache stage3 cpu_word_mask", false,-1, 63,0);
        tracep->declBit(c+589,"SimTop my_core_top my_dcache stage3 hit", false,-1);
        tracep->declBit(c+590,"SimTop my_core_top my_dcache stage3 write_hit", false,-1);
        tracep->declBit(c+591,"SimTop my_core_top my_dcache stage3 wb_en", false,-1);
        tracep->declBit(c+592,"SimTop my_core_top my_dcache stage3 burst_last", false,-1);
        tracep->declBit(c+593,"SimTop my_core_top my_dcache stage3 refill_come", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache CacheDataRamV clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_dcache CacheDataRamV reset", false,-1);
        tracep->declBit(c+594,"SimTop my_core_top my_dcache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+595,"SimTop my_core_top my_dcache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_dcache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+600,"SimTop my_core_top my_dcache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+604,"SimTop my_core_top my_dcache CacheDataRamV cen", false,-1);
        tracep->declBit(c+605,"SimTop my_core_top my_dcache CacheDataRamV wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_dcache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+600,"SimTop my_core_top my_dcache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_dcache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+606,"SimTop my_core_top my_dcache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+595,"SimTop my_core_top my_dcache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_dcache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+607,"SimTop my_core_top my_dcache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+604,"SimTop my_core_top my_dcache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+611,"SimTop my_core_top my_dcache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_dcache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+607,"SimTop my_core_top my_dcache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_dcache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+612,"SimTop my_core_top my_dcache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+595,"SimTop my_core_top my_dcache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_dcache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+613,"SimTop my_core_top my_dcache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+604,"SimTop my_core_top my_dcache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+617,"SimTop my_core_top my_dcache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_dcache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+613,"SimTop my_core_top my_dcache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+715,"SimTop my_core_top my_dcache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+618,"SimTop my_core_top my_dcache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+595,"SimTop my_core_top my_dcache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+719,"SimTop my_core_top my_dcache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+619,"SimTop my_core_top my_dcache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+604,"SimTop my_core_top my_dcache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+623,"SimTop my_core_top my_dcache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+723,"SimTop my_core_top my_dcache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+619,"SimTop my_core_top my_dcache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+596,"SimTop my_core_top my_dcache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache cache_meta clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache cache_meta reset", false,-1);
        tracep->declBit(c+604,"SimTop my_core_top my_dcache cache_meta io_en", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache cache_meta io_wr", false,-1);
        tracep->declBus(c+564,"SimTop my_core_top my_dcache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+624,"SimTop my_core_top my_dcache cache_meta io_index", false,-1, 4,0);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache cache_meta io_in_dirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+514,"SimTop my_core_top my_dcache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+515,"SimTop my_core_top my_dcache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+516,"SimTop my_core_top my_dcache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+522,"SimTop my_core_top my_dcache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+523,"SimTop my_core_top my_dcache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+529,"SimTop my_core_top my_dcache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+530,"SimTop my_core_top my_dcache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+536,"SimTop my_core_top my_dcache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+537,"SimTop my_core_top my_dcache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+625,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+514,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+516,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+626,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+628,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+516,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+514,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+630,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+522,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+523,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+631,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+633,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+523,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+522,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+635,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+529,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+530,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+636,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+638,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+530,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+529,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+640,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+563,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+536,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+537,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+727,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+566,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+641,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+643,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+537,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+536,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+706,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+707,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+370,"SimTop my_core_top my_clint io_in_en", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_clint io_in_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_clint io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop my_core_top my_clint io_in_wdata", false,-1, 63,0);
        tracep->declBit(c+365,"SimTop my_core_top my_clint io_in_clint_hit", false,-1);
        tracep->declBit(c+366,"SimTop my_core_top my_clint io_in_ret_valid", false,-1);
        tracep->declBit(c+294,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+645,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+647,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+649,"SimTop my_core_top my_clint hit_mtime", false,-1);
        tracep->declBit(c+650,"SimTop my_core_top my_clint hit_mtimecmp", false,-1);
        tracep->declBit(c+366,"SimTop my_core_top my_clint ret_valid", false,-1);
        tracep->declBit(c+651,"SimTop my_core_top my_clint unnamedblk1 wen", false,-1);
        tracep->declBit(c+706,"SimTop my_axi_sram clock", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram reset", false,-1);
        tracep->declBit(c+14,"SimTop my_axi_sram io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_axi_sram io_in_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+18,"SimTop my_axi_sram io_in_0_rd_ready", false,-1);
        tracep->declBit(c+19,"SimTop my_axi_sram io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_axi_sram io_in_0_wt_valid", false,-1);
        tracep->declQuad(c+21,"SimTop my_axi_sram io_in_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+23,"SimTop my_axi_sram io_in_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+24,"SimTop my_axi_sram io_in_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+25,"SimTop my_axi_sram io_in_0_b_ready", false,-1);
        tracep->declBit(c+26,"SimTop my_axi_sram io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_axi_sram io_in_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+30,"SimTop my_axi_sram io_in_1_rd_ready", false,-1);
        tracep->declBit(c+31,"SimTop my_axi_sram io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_axi_sram io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+33,"SimTop my_axi_sram io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+35,"SimTop my_axi_sram io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"SimTop my_axi_sram io_in_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+37,"SimTop my_axi_sram io_in_1_b_ready", false,-1);
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
        tracep->declBit(c+11,"SimTop my_axi_sram io_in_1_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram io_in_1_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_axi_sram io_in_1_b_valid", false,-1);
        tracep->declBit(c+706,"SimTop my_axi_sram my_arbiter clock", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram my_arbiter reset", false,-1);
        tracep->declBit(c+14,"SimTop my_axi_sram my_arbiter io_in_0_ar_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter io_in_0_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_axi_sram my_arbiter io_in_0_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+18,"SimTop my_axi_sram my_arbiter io_in_0_rd_ready", false,-1);
        tracep->declBit(c+19,"SimTop my_axi_sram my_arbiter io_in_0_aw_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter io_in_0_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop my_axi_sram my_arbiter io_in_0_wt_valid", false,-1);
        tracep->declQuad(c+21,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+23,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+24,"SimTop my_axi_sram my_arbiter io_in_0_wt_bits_wlast", false,-1);
        tracep->declBit(c+25,"SimTop my_axi_sram my_arbiter io_in_0_b_ready", false,-1);
        tracep->declBit(c+26,"SimTop my_axi_sram my_arbiter io_in_1_ar_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter io_in_1_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_axi_sram my_arbiter io_in_1_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+30,"SimTop my_axi_sram my_arbiter io_in_1_rd_ready", false,-1);
        tracep->declBit(c+31,"SimTop my_axi_sram my_arbiter io_in_1_aw_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter io_in_1_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+32,"SimTop my_axi_sram my_arbiter io_in_1_wt_valid", false,-1);
        tracep->declQuad(c+33,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+35,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+36,"SimTop my_axi_sram my_arbiter io_in_1_wt_bits_wlast", false,-1);
        tracep->declBit(c+37,"SimTop my_axi_sram my_arbiter io_in_1_b_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter io_out_ar_ready", false,-1);
        tracep->declBit(c+652,"SimTop my_axi_sram my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+653,"SimTop my_axi_sram my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+654,"SimTop my_axi_sram my_arbiter io_out_b_valid", false,-1);
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
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter io_in_1_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_axi_sram my_arbiter io_in_1_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_axi_sram my_arbiter io_in_1_b_valid", false,-1);
        tracep->declBit(c+655,"SimTop my_axi_sram my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+656,"SimTop my_axi_sram my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+658,"SimTop my_axi_sram my_arbiter io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+659,"SimTop my_axi_sram my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+660,"SimTop my_axi_sram my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+661,"SimTop my_axi_sram my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+663,"SimTop my_axi_sram my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+664,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+666,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+667,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+668,"SimTop my_axi_sram my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+669,"SimTop my_axi_sram my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+670,"SimTop my_axi_sram my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+14,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+655,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+656,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+658,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+671,"SimTop my_axi_sram my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+19,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+31,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+660,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+661,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+672,"SimTop my_axi_sram my_arbiter arbiter_wt io_chosen", false,-1);
        tracep->declBit(c+706,"SimTop my_axi_sram my_axi_sram_driver clock", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram my_axi_sram_driver reset", false,-1);
        tracep->declBit(c+655,"SimTop my_axi_sram my_axi_sram_driver io_ar_valid", false,-1);
        tracep->declQuad(c+656,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+658,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+659,"SimTop my_axi_sram my_axi_sram_driver io_rd_ready", false,-1);
        tracep->declBit(c+660,"SimTop my_axi_sram my_axi_sram_driver io_aw_valid", false,-1);
        tracep->declQuad(c+661,"SimTop my_axi_sram my_axi_sram_driver io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+663,"SimTop my_axi_sram my_axi_sram_driver io_wt_valid", false,-1);
        tracep->declQuad(c+664,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+666,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+667,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wlast", false,-1);
        tracep->declBit(c+668,"SimTop my_axi_sram my_axi_sram_driver io_b_ready", false,-1);
        tracep->declQuad(c+673,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+675,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_resp", false,-1);
        tracep->declBit(c+676,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_resp", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_axi_sram_driver io_ar_ready", false,-1);
        tracep->declBit(c+652,"SimTop my_axi_sram my_axi_sram_driver io_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_axi_sram_driver io_aw_ready", false,-1);
        tracep->declBit(c+653,"SimTop my_axi_sram my_axi_sram_driver io_wt_ready", false,-1);
        tracep->declBit(c+654,"SimTop my_axi_sram my_axi_sram_driver io_b_valid", false,-1);
        tracep->declBit(c+677,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_en", false,-1);
        tracep->declQuad(c+678,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+680,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_en", false,-1);
        tracep->declQuad(c+681,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+664,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+666,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBit(c+652,"SimTop my_axi_sram my_axi_sram_driver rdata_ok", false,-1);
        tracep->declBus(c+683,"SimTop my_axi_sram my_axi_sram_driver rstate", false,-1, 2,0);
        tracep->declBus(c+684,"SimTop my_axi_sram my_axi_sram_driver wstate", false,-1, 2,0);
        tracep->declQuad(c+685,"SimTop my_axi_sram my_axi_sram_driver ar_buf_araddr", false,-1, 63,0);
        tracep->declBus(c+687,"SimTop my_axi_sram my_axi_sram_driver ar_buf_arlen", false,-1, 7,0);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver rdata_r", false,-1, 63,0);
        tracep->declBus(c+688,"SimTop my_axi_sram my_axi_sram_driver rd_cnt", false,-1, 7,0);
        tracep->declBit(c+689,"SimTop my_axi_sram my_axi_sram_driver rd_idx", false,-1);
        tracep->declQuad(c+690,"SimTop my_axi_sram my_axi_sram_driver aw_buf_awaddr", false,-1, 63,0);
        tracep->declBit(c+692,"SimTop my_axi_sram my_axi_sram_driver wt_widx", false,-1);
        tracep->declBit(c+693,"SimTop my_axi_sram my_axi_sram_driver unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+675,"SimTop my_axi_sram my_rmem_port en", false,-1);
        tracep->declBit(c+715,"SimTop my_axi_sram my_rmem_port wr", false,-1);
        tracep->declQuad(c+678,"SimTop my_axi_sram my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+673,"SimTop my_axi_sram my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+728,"SimTop my_axi_sram my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+676,"SimTop my_axi_sram my_wmem_port en", false,-1);
        tracep->declBit(c+727,"SimTop my_axi_sram my_wmem_port wr", false,-1);
        tracep->declQuad(c+681,"SimTop my_axi_sram my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+664,"SimTop my_axi_sram my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+666,"SimTop my_axi_sram my_wmem_port wmask", false,-1, 7,0);
        tracep->declBit(c+706,"SimTop my_axi_sram rd_resp_en_rdelayer clock", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram rd_resp_en_rdelayer reset", false,-1);
        tracep->declBit(c+677,"SimTop my_axi_sram rd_resp_en_rdelayer io_in", false,-1);
        tracep->declBit(c+675,"SimTop my_axi_sram rd_resp_en_rdelayer io_out", false,-1);
        tracep->declBit(c+694,"SimTop my_axi_sram rd_resp_en_rdelayer delaying", false,-1);
        tracep->declBit(c+695,"SimTop my_axi_sram rd_resp_en_rdelayer r_r", false,-1);
        tracep->declBit(c+696,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_1", false,-1);
        tracep->declBit(c+697,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_2", false,-1);
        tracep->declBit(c+698,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_3", false,-1);
        tracep->declBit(c+675,"SimTop my_axi_sram rd_resp_en_rdelayer r", false,-1);
        tracep->declBit(c+699,"SimTop my_axi_sram rd_resp_en_rdelayer unnamedblk1 din", false,-1);
        tracep->declBit(c+706,"SimTop my_axi_sram wt_resp_en_wdelayer clock", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram wt_resp_en_wdelayer reset", false,-1);
        tracep->declBit(c+680,"SimTop my_axi_sram wt_resp_en_wdelayer io_in", false,-1);
        tracep->declBit(c+676,"SimTop my_axi_sram wt_resp_en_wdelayer io_out", false,-1);
        tracep->declBit(c+700,"SimTop my_axi_sram wt_resp_en_wdelayer delaying", false,-1);
        tracep->declBit(c+701,"SimTop my_axi_sram wt_resp_en_wdelayer r_r", false,-1);
        tracep->declBit(c+702,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_1", false,-1);
        tracep->declBit(c+703,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_2", false,-1);
        tracep->declBit(c+704,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_3", false,-1);
        tracep->declBit(c+676,"SimTop my_axi_sram wt_resp_en_wdelayer r", false,-1);
        tracep->declBit(c+705,"SimTop my_axi_sram wt_resp_en_wdelayer unnamedblk1 din", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp85;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
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
        tracep->fullBit(oldp+11,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)) 
                                        & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate)))));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                  & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+13,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                   >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
        tracep->fullBit(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5));
        tracep->fullQData(oldp+15,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr),64);
        tracep->fullCData(oldp+17,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))),8);
        tracep->fullBit(oldp+18,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+19,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 2U))));
        tracep->fullQData(oldp+21,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U]))))),64);
        tracep->fullCData(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r),8);
        tracep->fullBit(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3));
        tracep->fullBit(oldp+25,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                        >> 3U))));
        tracep->fullBit(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
        tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr),64);
        tracep->fullCData(oldp+29,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)))),8);
        tracep->fullBit(oldp+30,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 1U))));
        tracep->fullBit(oldp+31,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
        tracep->fullBit(oldp+32,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 2U))));
        tracep->fullQData(oldp+33,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))),64);
        tracep->fullCData(oldp+35,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r),8);
        tracep->fullBit(oldp+36,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3));
        tracep->fullBit(oldp+37,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                        >> 3U))));
        tracep->fullQData(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target),64);
        tracep->fullBit(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1));
        tracep->fullBit(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T));
        tracep->fullQData(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata),64);
        tracep->fullBit(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid));
        tracep->fullBit(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2));
        tracep->fullBit(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
        tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullBit(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
        tracep->fullQData(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2),64);
        tracep->fullBit(oldp+52,((IData)((0x80000000ULL 
                                          != (0xe0000000ULL 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)))));
        tracep->fullBit(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4));
        tracep->fullIData(oldp+54,(((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                >> 0x20U))
                                     : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data))),32);
        tracep->fullIData(oldp+55,((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),32);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
        tracep->fullCData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullBit(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
        tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2));
        tracep->fullBit(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest),5);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2),64);
        tracep->fullBit(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid));
        tracep->fullIData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_alu_op),23);
        tracep->fullBit(oldp+74,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))))));
        tracep->fullBit(oldp+75,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+76,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
                                     ? 1U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                              ? 0x80U
                                              : ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                                  ? 0x100U
                                                  : 
                                                 ((0x63U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                   ? 2U
                                                   : 
                                                  ((0xe3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 4U
                                                    : 
                                                   ((0x263U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 8U
                                                     : 
                                                    ((0x2e3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                      ? 0x10U
                                                      : 
                                                     ((0x363U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                       ? 0x20U
                                                       : 
                                                      ((0x3e3U 
                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                        ? 0x40U
                                                        : 
                                                       ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8) 
                                                        | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9)))))))))))),9);
        tracep->fullBit(oldp+77,((((((0x37U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
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
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                 | (0x30200073U 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))))))));
        tracep->fullBit(oldp+78,((((((((((((0x37U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                           & (0x17U 
                                              != (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                          & (0x6fU 
                                             != (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                         & (0x67U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
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
        tracep->fullBit(oldp+79,((((((((((((0x37U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                           & (0x17U 
                                              != (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                          & (0x6fU 
                                             != (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                         & (0x67U != 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
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
        tracep->fullBit(oldp+80,(((((((((((((((((((0x37U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                  & (0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                 & (0x6fU 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                & (0x67U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
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
        tracep->fullCData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_mem_type),7);
        tracep->fullBit(oldp+82,(((((((((((((((((0x37U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                & (0x17U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                               & (0x6fU 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                              & (0x67U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
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
        tracep->fullCData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_ex_sel),3);
        tracep->fullCData(oldp+84,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15))
                                     ? 0U : ((0xf3U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                              ? 1U : 
                                             ((0x173U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                               ? 2U
                                               : ((0x1f3U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                   ? 4U
                                                   : 
                                                  ((0x2f3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x373U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x3f3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                     << 2U)))))))),3);
        tracep->fullCData(oldp+85,(((((((((((((((((
                                                   (((((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                       | (0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                      | (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                     | (0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                    | (0x63U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                   | (0xe3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x263U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x2e3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x363U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x3e3U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (3U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
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
                                        | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       | (((((((((((((((((0x23U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                         | (0xa3U 
                                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                        | (0x123U 
                                                           == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                       | (0x1a3U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                      | (0x13U 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
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
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                                      | (((((((((((((((((0x33U 
                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
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
                                              | (0x803bU 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                             | (0xbbU 
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                            | (0x2bbU 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                           | (0x82bbU 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                          | (0x433U 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                         | (0x4b3U 
                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                                     | (((((((((((((((((0x5b3U 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
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
                                        | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))
                                     ? 0U : ((0x73U 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)
                                              ? 1U : 
                                             ((0x30200073U 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst) 
                                              << 1U)))),2);
        tracep->fullCData(oldp+86,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+87,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc))),64);
        tracep->fullCData(oldp+89,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1),5);
        tracep->fullCData(oldp+90,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+91,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1))
                                     ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                    [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1])),64);
        tracep->fullQData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_imm),64);
        tracep->fullSData(oldp+97,((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst),32);
        tracep->fullIData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc),32);
        tracep->fullBit(oldp+100,(((IData)((0x73U == 
                                            (0xfffffU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                   & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 0x14U)))));
        tracep->fullQData(oldp+101,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))),64);
        tracep->fullCData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullBit(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2));
        tracep->fullBit(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ms_forward_valid_T));
        tracep->fullBit(oldp+170,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid));
        tracep->fullCData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest),5);
        tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T),64);
        tracep->fullBit(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid));
        tracep->fullBit(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid));
        tracep->fullIData(oldp+176,((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc)),32);
        tracep->fullBit(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we));
        tracep->fullCData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest),5);
        tracep->fullBit(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel));
        tracep->fullBit(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en));
        tracep->fullBit(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr));
        tracep->fullCData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type),7);
        tracep->fullCData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op),3);
        tracep->fullCData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type),2);
        tracep->fullQData(oldp+185,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                                      ? (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc)
                                      : (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                                           : 0ULL) 
                                         | (QData)((IData)(
                                                           (1U 
                                                            & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                                 >> 1U) 
                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)) 
                                                               | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                                   >> 2U) 
                                                                  & (~ 
                                                                     vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))))))))),64);
        tracep->fullQData(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata),64);
        tracep->fullSData(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num),12);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1),64);
        tracep->fullQData(oldp+192,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                                      : (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc 
                                         + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm))),64);
        tracep->fullBit(oldp+194,((((((((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                            >> 1U) 
                                           & (0ULL 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res)) 
                                          | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                              >> 2U) 
                                             & (0U 
                                                != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res))) 
                                         | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                             >> 3U) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2))) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                            >> 4U) 
                                           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                           >> 5U) & 
                                          (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                          >> 6U) & 
                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])) 
                                     | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                        >> 7U)) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                                   >> 8U)) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid))));
        tracep->fullBit(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
        tracep->fullIData(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op),23);
        tracep->fullBit(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel));
        tracep->fullBit(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel));
        tracep->fullSData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type),9);
        tracep->fullBit(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w));
        tracep->fullCData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel),3);
        tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc),64);
        tracep->fullCData(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1_addr),5);
        tracep->fullCData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2_addr),5);
        tracep->fullQData(oldp+206,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2),64);
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm),64);
        tracep->fullBit(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs1_depend_ms));
        tracep->fullBit(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs1_depend_ws));
        tracep->fullBit(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs2_depend_ms));
        tracep->fullBit(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs2_depend_ws));
        tracep->fullQData(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullBit(oldp+218,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_ready_go));
        tracep->fullQData(oldp+219,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+225,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+226,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
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
        VL_EXTEND_WQ(127,64, __Vtemp75, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp76, __Vtemp75, 
                      (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
        __Vtemp77[0U] = __Vtemp76[0U];
        __Vtemp77[1U] = __Vtemp76[1U];
        __Vtemp77[2U] = __Vtemp76[2U];
        __Vtemp77[3U] = (0x7fffffffU & __Vtemp76[3U]);
        tracep->fullWData(oldp+227,(__Vtemp77),127);
        __Vtemp79[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
        __Vtemp79[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                 >> 0x20U));
        __Vtemp79[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                       >> 0x3fU)));
        __Vtemp80[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
        __Vtemp80[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                 >> 0x20U));
        __Vtemp80[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                       >> 0x3fU)));
        VL_DIVS_WWW(65, __Vtemp81, __Vtemp79, __Vtemp80);
        __Vtemp82[0U] = __Vtemp81[0U];
        __Vtemp82[1U] = __Vtemp81[1U];
        __Vtemp82[2U] = (1U & __Vtemp81[2U]);
        tracep->fullWData(oldp+231,(__Vtemp82),65);
        tracep->fullQData(oldp+234,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+236,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+237,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
        tracep->fullQData(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
        tracep->fullBit(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
        tracep->fullIData(oldp+243,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc),32);
        tracep->fullBit(oldp+244,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we));
        tracep->fullCData(oldp+245,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op),3);
        tracep->fullCData(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type),2);
        tracep->fullSData(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num),12);
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1),64);
        tracep->fullBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
        tracep->fullBit(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr));
        tracep->fullQData(oldp+252,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)),64);
        tracep->fullQData(oldp+254,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                         ? (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))))))))))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                         ? (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))))))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                        ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))
                                        : 0ULL)) | 
                                     ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata
                                       : 0ULL))),64);
        tracep->fullCData(oldp+256,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
        tracep->fullBit(oldp+257,((IData)((0x80000000ULL 
                                           != (0xe0000000ULL 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))));
        tracep->fullBit(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel));
        tracep->fullBit(oldp+259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en));
        tracep->fullCData(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type),7);
        tracep->fullQData(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result),64);
        tracep->fullQData(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata),64);
        tracep->fullBit(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en));
        tracep->fullCData(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),3);
        tracep->fullBit(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullBit(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go));
        tracep->fullCData(oldp+269,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+270,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+271,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+272,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullBit(oldp+274,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullQData(oldp+275,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+277,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullCData(oldp+279,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op),3);
        tracep->fullSData(oldp+280,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num),12);
        tracep->fullQData(oldp+281,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1),64);
        tracep->fullBit(oldp+283,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))));
        tracep->fullBit(oldp+284,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+285,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc))),64);
        tracep->fullQData(oldp+287,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullIData(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc),32);
        tracep->fullBit(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we));
        tracep->fullCData(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type),2);
        tracep->fullQData(oldp+292,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result),64);
        tracep->fullBit(oldp+294,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullCData(oldp+295,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+296,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+297,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+299,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+300,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+302,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+306,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+308,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+310,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullBit(oldp+312,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+313,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
            __Vtemp85[0U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                      ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata));
            __Vtemp85[1U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                       ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata) 
                                     >> 0x20U));
            __Vtemp85[2U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                      : 0ULL));
            __Vtemp85[3U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                       : 0ULL) >> 0x20U));
        } else {
            __Vtemp85[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
            __Vtemp85[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                     >> 0x20U));
            __Vtemp85[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
            __Vtemp85[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                     >> 0x20U));
        }
        tracep->fullWData(oldp+314,(__Vtemp85),128);
        tracep->fullCData(oldp+318,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                                      : 0xffU)),8);
        tracep->fullBit(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+320,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt))));
        tracep->fullQData(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
        tracep->fullBit(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
        tracep->fullBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
        tracep->fullBit(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
        tracep->fullQData(oldp+332,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
        tracep->fullBit(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
        tracep->fullBit(oldp+335,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
        tracep->fullCData(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
        tracep->fullBit(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
        tracep->fullBit(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
        tracep->fullBit(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
        tracep->fullWData(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
        tracep->fullCData(oldp+344,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                      : 0xffU)),8);
        tracep->fullBit(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+346,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
        tracep->fullQData(oldp+347,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
        tracep->fullBit(oldp+349,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+350,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
        tracep->fullBit(oldp+352,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
        tracep->fullBit(oldp+353,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+354,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
        tracep->fullQData(oldp+358,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
        tracep->fullBit(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
        tracep->fullBit(oldp+361,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
        tracep->fullCData(oldp+362,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
        tracep->fullBit(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
        tracep->fullBit(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+365,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
        tracep->fullBit(oldp+366,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
        tracep->fullBit(oldp+367,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)))));
        tracep->fullBit(oldp+368,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
        tracep->fullBit(oldp+369,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
        tracep->fullBit(oldp+370,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
        tracep->fullQData(oldp+371,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
        tracep->fullCData(oldp+373,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),6);
        tracep->fullBit(oldp+374,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullCData(oldp+375,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+376,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+377,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2))),4);
        tracep->fullBit(oldp+378,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+379,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+380,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+381,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+385,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+386,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+387,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+390,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+392,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+393,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+394,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+395,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+397,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+399,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+400,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+401,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+404,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+406,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+407,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr));
        tracep->fullQData(oldp+408,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata),64);
        tracep->fullCData(oldp+410,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb),8);
        tracep->fullBit(oldp+411,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+412,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+413,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+414,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+415,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+416,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+417,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+418,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+419,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                                   : 0U)) 
                                      | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                          : 0U)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                                       : 0U))),23);
        tracep->fullQData(oldp+420,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                       ? (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                                       : 0ULL))),64);
        tracep->fullQData(oldp+422,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                       ? (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                                       : 0ULL))),64);
        tracep->fullCData(oldp+424,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+425,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+426,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+427,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+428,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+429,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
        tracep->fullBit(oldp+430,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
        tracep->fullIData(oldp+431,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+432,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4),64);
        tracep->fullQData(oldp+434,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4),64);
        tracep->fullBit(oldp+436,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
        tracep->fullQData(oldp+437,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata),64);
        tracep->fullCData(oldp+439,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb),8);
        tracep->fullCData(oldp+440,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+441,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+442,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+443,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+444,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+445,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+447,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+449,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+450,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
        tracep->fullQData(oldp+451,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask),64);
        tracep->fullBit(oldp+453,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+454,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit));
        tracep->fullBit(oldp+455,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
        tracep->fullBit(oldp+456,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+457,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+458,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21)))));
        tracep->fullWData(oldp+460,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27),128);
        tracep->fullWData(oldp+464,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+468,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
        tracep->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+470,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+471,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+476,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+477,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+482,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+483,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+488,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),5);
        tracep->fullBit(oldp+489,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+490,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+492,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+494,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+495,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+497,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+499,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+500,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+502,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+504,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+505,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+507,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullCData(oldp+509,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),6);
        tracep->fullBit(oldp+510,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullCData(oldp+511,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+512,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+513,((8U & ((IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                    >> 3U)) 
                                           << 3U))),4);
        tracep->fullBit(oldp+514,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+515,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+516,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+517,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+519,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+521,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+522,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+523,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+524,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+526,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+528,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+529,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+530,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+531,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+533,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+535,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+536,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+537,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+538,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+540,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+542,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+543,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
        tracep->fullQData(oldp+544,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
        tracep->fullCData(oldp+546,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
        tracep->fullBit(oldp+547,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+548,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+549,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+550,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+551,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+552,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+553,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+554,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+555,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                                   : 0U)) 
                                      | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                          : 0U)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                                       : 0U))),23);
        tracep->fullQData(oldp+556,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                       ? (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                                       : 0ULL))),64);
        tracep->fullQData(oldp+558,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))
                                         : 0ULL) | 
                                       ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                         : 0ULL)) | 
                                      ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                        : 0ULL)) | 
                                     ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                       ? (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                                       : 0ULL))),64);
        tracep->fullCData(oldp+560,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+561,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+562,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+563,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+564,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+565,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
        tracep->fullBit(oldp+566,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
        tracep->fullIData(oldp+567,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+568,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4),64);
        tracep->fullQData(oldp+570,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4),64);
        tracep->fullBit(oldp+572,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
        tracep->fullQData(oldp+573,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
        tracep->fullCData(oldp+575,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
        tracep->fullCData(oldp+576,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+577,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+578,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+579,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+580,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+581,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+583,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+585,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+586,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
        tracep->fullQData(oldp+587,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
        tracep->fullBit(oldp+589,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+590,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit));
        tracep->fullBit(oldp+591,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
        tracep->fullBit(oldp+592,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+593,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+594,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+595,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21)))));
        tracep->fullWData(oldp+596,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27),128);
        tracep->fullWData(oldp+600,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+604,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
        tracep->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+606,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+607,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+612,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+613,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+618,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+619,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+624,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),5);
        tracep->fullBit(oldp+625,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+626,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+628,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+630,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+631,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+633,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+635,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+636,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+638,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+640,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+641,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+643,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullQData(oldp+645,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+647,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+649,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+650,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+651,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
        tracep->fullBit(oldp+652,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
        tracep->fullBit(oldp+653,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
        tracep->fullBit(oldp+654,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                         >> 2U))));
        tracep->fullBit(oldp+655,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+656,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
        tracep->fullCData(oldp+658,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                      ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                      : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
        tracep->fullBit(oldp+659,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 1U)))));
        tracep->fullBit(oldp+660,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
        tracep->fullQData(oldp+661,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
        tracep->fullBit(oldp+663,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
        tracep->fullQData(oldp+664,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
                                          ? (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))
                                      : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
                                          ? (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U])))))),64);
        tracep->fullCData(oldp+666,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                      : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
        tracep->fullBit(oldp+667,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                    : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
        tracep->fullBit(oldp+668,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 3U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 3U)))));
        tracep->fullBit(oldp+669,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+670,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+671,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
        tracep->fullBit(oldp+672,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
        tracep->fullQData(oldp+673,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+675,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
        tracep->fullBit(oldp+676,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
        tracep->fullBit(oldp+677,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
        tracep->fullQData(oldp+678,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                       ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                          >> 3U) : 
                                      ((0x1ffffffffffffffeULL 
                                        & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                           >> 3U)) 
                                       | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                     << 3U)),64);
        tracep->fullBit(oldp+680,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                    >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
        tracep->fullQData(oldp+681,(((0xfffffffffffffff0ULL 
                                      & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                        << 3U))))),64);
        tracep->fullCData(oldp+683,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
        tracep->fullCData(oldp+684,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
        tracep->fullQData(oldp+685,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
        tracep->fullCData(oldp+687,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
        tracep->fullCData(oldp+688,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
        tracep->fullBit(oldp+689,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
        tracep->fullQData(oldp+690,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
        tracep->fullBit(oldp+692,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
        tracep->fullBit(oldp+693,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+694,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
        tracep->fullBit(oldp+695,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
        tracep->fullBit(oldp+696,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+697,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+698,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+699,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+700,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
        tracep->fullBit(oldp+701,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
        tracep->fullBit(oldp+702,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+703,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+704,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+705,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+706,(vlSelf->clock));
        tracep->fullBit(oldp+707,(vlSelf->reset));
        tracep->fullQData(oldp+708,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullBit(oldp+710,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+711,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+712,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+714,(vlSelf->io_core_debug_raise_intr));
        tracep->fullBit(oldp+715,(0U));
        tracep->fullQData(oldp+716,(0ULL),64);
        tracep->fullCData(oldp+718,(0U),8);
        __Vtemp86[0U] = 0U;
        __Vtemp86[1U] = 0U;
        __Vtemp86[2U] = 0U;
        __Vtemp86[3U] = 0U;
        tracep->fullWData(oldp+719,(__Vtemp86),128);
        __Vtemp87[0U] = 0xffffffffU;
        __Vtemp87[1U] = 0xffffffffU;
        __Vtemp87[2U] = 0xffffffffU;
        __Vtemp87[3U] = 0xffffffffU;
        tracep->fullWData(oldp+723,(__Vtemp87),128);
        tracep->fullBit(oldp+727,(1U));
        tracep->fullQData(oldp+728,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

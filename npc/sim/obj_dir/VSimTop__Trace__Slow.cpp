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
        tracep->declBit(c+712,"clock", false,-1);
        tracep->declBit(c+713,"reset", false,-1);
        tracep->declQuad(c+714,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+716,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+717,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+718,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+720,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+712,"SimTop clock", false,-1);
        tracep->declBit(c+713,"SimTop reset", false,-1);
        tracep->declQuad(c+714,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+716,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+717,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+718,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+720,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top reset", false,-1);
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
        tracep->declQuad(c+714,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+716,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+717,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+718,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+720,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
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
        tracep->declBit(c+712,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_if reset", false,-1);
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
        tracep->declQuad(c+55,"SimTop my_core_top my_if io_if2id_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+55,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declBit(c+57,"SimTop my_core_top my_if fs_wait_r", false,-1);
        tracep->declBus(c+58,"SimTop my_core_top my_if fs_state", false,-1, 5,0);
        tracep->declQuad(c+59,"SimTop my_core_top my_if nextpc_r", false,-1, 63,0);
        tracep->declQuad(c+61,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+63,"SimTop my_core_top my_if fs_mem_ok", false,-1);
        tracep->declQuad(c+64,"SimTop my_core_top my_if fs_inst_data", false,-1, 63,0);
        tracep->declQuad(c+50,"SimTop my_core_top my_if mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+52,"SimTop my_core_top my_if mm io_mthrough", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_id reset", false,-1);
        tracep->declBit(c+53,"SimTop my_core_top my_id io_if2id_valid", false,-1);
        tracep->declBus(c+54,"SimTop my_core_top my_id io_if2id_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+55,"SimTop my_core_top my_id io_if2id_bits_pc", false,-1, 63,0);
        tracep->declBit(c+66,"SimTop my_core_top my_id io_id2ex_ready", false,-1);
        tracep->declBit(c+67,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_id io_exc_flush", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_id io_br_flush", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_id io_es_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_id io_es_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+73,"SimTop my_core_top my_id io_es_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+75,"SimTop my_core_top my_id io_ms_forward_valid", false,-1);
        tracep->declBit(c+76,"SimTop my_core_top my_id io_ms_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_id io_ms_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop my_core_top my_id io_ms_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+80,"SimTop my_core_top my_id io_ws_forward_valid", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_id io_ws_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_id io_ws_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_id io_ws_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+81,"SimTop my_core_top my_id io_ebreak", false,-1);
        tracep->declBit(c+45,"SimTop my_core_top my_id io_if2id_ready", false,-1);
        tracep->declBit(c+82,"SimTop my_core_top my_id io_id2ex_valid", false,-1);
        tracep->declBus(c+83,"SimTop my_core_top my_id io_id2ex_bits_alu_op", false,-1, 22,0);
        tracep->declBit(c+84,"SimTop my_core_top my_id io_id2ex_bits_src1_sel", false,-1);
        tracep->declBit(c+85,"SimTop my_core_top my_id io_id2ex_bits_src2_sel", false,-1);
        tracep->declBus(c+86,"SimTop my_core_top my_id io_id2ex_bits_br_type", false,-1, 8,0);
        tracep->declBit(c+87,"SimTop my_core_top my_id io_id2ex_bits_gr_we", false,-1);
        tracep->declBit(c+88,"SimTop my_core_top my_id io_id2ex_bits_wb_sel", false,-1);
        tracep->declBit(c+89,"SimTop my_core_top my_id io_id2ex_bits_mem_en", false,-1);
        tracep->declBit(c+90,"SimTop my_core_top my_id io_id2ex_bits_mem_wr", false,-1);
        tracep->declBus(c+91,"SimTop my_core_top my_id io_id2ex_bits_mem_type", false,-1, 6,0);
        tracep->declBit(c+92,"SimTop my_core_top my_id io_id2ex_bits_rv64w", false,-1);
        tracep->declBus(c+93,"SimTop my_core_top my_id io_id2ex_bits_ex_sel", false,-1, 2,0);
        tracep->declBus(c+94,"SimTop my_core_top my_id io_id2ex_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+95,"SimTop my_core_top my_id io_id2ex_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+96,"SimTop my_core_top my_id io_id2ex_bits_is_ebreak", false,-1);
        tracep->declBus(c+97,"SimTop my_core_top my_id io_id2ex_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+98,"SimTop my_core_top my_id io_id2ex_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+100,"SimTop my_core_top my_id io_id2ex_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_id io_id2ex_bits_rs2", false,-1, 63,0);
        tracep->declQuad(c+104,"SimTop my_core_top my_id io_id2ex_bits_imm", false,-1, 63,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_id io_id2ex_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"SimTop my_core_top my_id io_id2ex_bits_csr_num", false,-1, 11,0);
        tracep->declBit(c+107,"SimTop my_core_top my_id ds_valid", false,-1);
        tracep->declBus(c+108,"SimTop my_core_top my_id fs_ds_r_inst", false,-1, 31,0);
        tracep->declQuad(c+98,"SimTop my_core_top my_id fs_ds_r_pc", false,-1, 63,0);
        tracep->declBus(c+109,"SimTop my_core_top my_id rf_raddr1", false,-1, 4,0);
        tracep->declBit(c+110,"SimTop my_core_top my_id rs1_depend_es", false,-1);
        tracep->declBit(c+111,"SimTop my_core_top my_id rs1_depend_ms", false,-1);
        tracep->declBit(c+112,"SimTop my_core_top my_id rs1_depend_ws", false,-1);
        tracep->declBit(c+113,"SimTop my_core_top my_id rs2_depend_es", false,-1);
        tracep->declBit(c+114,"SimTop my_core_top my_id rs2_depend_ms", false,-1);
        tracep->declBit(c+115,"SimTop my_core_top my_id rs2_depend_ws", false,-1);
        tracep->declQuad(c+102,"SimTop my_core_top my_id rf_rdata2", false,-1, 63,0);
        tracep->declBit(c+116,"SimTop my_core_top my_id ds_ready_go", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+81,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+117,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+108,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+119,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+83,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+84,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+85,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+87,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+88,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+86,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+89,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+90,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+91,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+92,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+93,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+94,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+95,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+712,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+109,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+120,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+68,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+67,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+121,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+712,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+109,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+120,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+67,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+69,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+125+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declBit(c+712,"SimTop my_core_top my_ex clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_ex reset", false,-1);
        tracep->declBit(c+82,"SimTop my_core_top my_ex io_id2ex_valid", false,-1);
        tracep->declBus(c+83,"SimTop my_core_top my_ex io_id2ex_bits_alu_op", false,-1, 22,0);
        tracep->declBit(c+84,"SimTop my_core_top my_ex io_id2ex_bits_src1_sel", false,-1);
        tracep->declBit(c+85,"SimTop my_core_top my_ex io_id2ex_bits_src2_sel", false,-1);
        tracep->declBus(c+86,"SimTop my_core_top my_ex io_id2ex_bits_br_type", false,-1, 8,0);
        tracep->declBit(c+87,"SimTop my_core_top my_ex io_id2ex_bits_gr_we", false,-1);
        tracep->declBit(c+88,"SimTop my_core_top my_ex io_id2ex_bits_wb_sel", false,-1);
        tracep->declBit(c+89,"SimTop my_core_top my_ex io_id2ex_bits_mem_en", false,-1);
        tracep->declBit(c+90,"SimTop my_core_top my_ex io_id2ex_bits_mem_wr", false,-1);
        tracep->declBus(c+91,"SimTop my_core_top my_ex io_id2ex_bits_mem_type", false,-1, 6,0);
        tracep->declBit(c+92,"SimTop my_core_top my_ex io_id2ex_bits_rv64w", false,-1);
        tracep->declBus(c+93,"SimTop my_core_top my_ex io_id2ex_bits_ex_sel", false,-1, 2,0);
        tracep->declBus(c+94,"SimTop my_core_top my_ex io_id2ex_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+95,"SimTop my_core_top my_ex io_id2ex_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+96,"SimTop my_core_top my_ex io_id2ex_bits_is_ebreak", false,-1);
        tracep->declBus(c+97,"SimTop my_core_top my_ex io_id2ex_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+98,"SimTop my_core_top my_ex io_id2ex_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+100,"SimTop my_core_top my_ex io_id2ex_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_ex io_id2ex_bits_rs2", false,-1, 63,0);
        tracep->declQuad(c+104,"SimTop my_core_top my_ex io_id2ex_bits_imm", false,-1, 63,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_ex io_id2ex_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+106,"SimTop my_core_top my_ex io_id2ex_bits_csr_num", false,-1, 11,0);
        tracep->declBit(c+189,"SimTop my_core_top my_ex io_ex2mem_ready", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_ex io_exc_flush", false,-1);
        tracep->declBit(c+40,"SimTop my_core_top my_ex io_br_flush", false,-1);
        tracep->declBit(c+66,"SimTop my_core_top my_ex io_id2ex_ready", false,-1);
        tracep->declBit(c+190,"SimTop my_core_top my_ex io_ex2mem_valid", false,-1);
        tracep->declQuad(c+191,"SimTop my_core_top my_ex io_ex2mem_bits_pc", false,-1, 63,0);
        tracep->declBit(c+193,"SimTop my_core_top my_ex io_ex2mem_bits_gr_we", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_ex2mem_bits_dest", false,-1, 4,0);
        tracep->declBit(c+194,"SimTop my_core_top my_ex io_ex2mem_bits_wb_sel", false,-1);
        tracep->declBit(c+195,"SimTop my_core_top my_ex io_ex2mem_bits_mem_en", false,-1);
        tracep->declBit(c+196,"SimTop my_core_top my_ex io_ex2mem_bits_mem_wr", false,-1);
        tracep->declBus(c+197,"SimTop my_core_top my_ex io_ex2mem_bits_mem_type", false,-1, 6,0);
        tracep->declBus(c+198,"SimTop my_core_top my_ex io_ex2mem_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+199,"SimTop my_core_top my_ex io_ex2mem_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+200,"SimTop my_core_top my_ex io_ex2mem_bits_is_ebreak", false,-1);
        tracep->declQuad(c+73,"SimTop my_core_top my_ex io_ex2mem_bits_result", false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop my_core_top my_ex io_ex2mem_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop my_core_top my_ex io_ex2mem_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_ex io_ex2mem_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+206,"SimTop my_core_top my_ex io_ex2mem_bits_br_br_target", false,-1, 63,0);
        tracep->declBit(c+208,"SimTop my_core_top my_ex io_ex2mem_bits_br_br_en", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_ex io_es_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_ex io_es_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+73,"SimTop my_core_top my_ex io_es_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+190,"SimTop my_core_top my_ex es_valid", false,-1);
        tracep->declBus(c+209,"SimTop my_core_top my_ex ds_es_r_alu_op", false,-1, 22,0);
        tracep->declBit(c+210,"SimTop my_core_top my_ex ds_es_r_src1_sel", false,-1);
        tracep->declBit(c+211,"SimTop my_core_top my_ex ds_es_r_src2_sel", false,-1);
        tracep->declBus(c+212,"SimTop my_core_top my_ex ds_es_r_br_type", false,-1, 8,0);
        tracep->declBit(c+193,"SimTop my_core_top my_ex ds_es_r_gr_we", false,-1);
        tracep->declBit(c+194,"SimTop my_core_top my_ex ds_es_r_wb_sel", false,-1);
        tracep->declBit(c+195,"SimTop my_core_top my_ex ds_es_r_mem_en", false,-1);
        tracep->declBit(c+196,"SimTop my_core_top my_ex ds_es_r_mem_wr", false,-1);
        tracep->declBus(c+197,"SimTop my_core_top my_ex ds_es_r_mem_type", false,-1, 6,0);
        tracep->declBit(c+213,"SimTop my_core_top my_ex ds_es_r_rv64w", false,-1);
        tracep->declBus(c+214,"SimTop my_core_top my_ex ds_es_r_ex_sel", false,-1, 2,0);
        tracep->declBus(c+198,"SimTop my_core_top my_ex ds_es_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+199,"SimTop my_core_top my_ex ds_es_r_exc_type", false,-1, 1,0);
        tracep->declBit(c+200,"SimTop my_core_top my_ex ds_es_r_is_ebreak", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_ex ds_es_r_dest", false,-1, 4,0);
        tracep->declQuad(c+191,"SimTop my_core_top my_ex ds_es_r_pc", false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_ex ds_es_r_rs1", false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop my_core_top my_ex ds_es_r_rs2", false,-1, 63,0);
        tracep->declQuad(c+217,"SimTop my_core_top my_ex ds_es_r_imm", false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop my_core_top my_ex ds_es_r_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop my_core_top my_ex ds_es_r_csr_num", false,-1, 11,0);
        tracep->declQuad(c+219,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+221,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+223,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+225,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+209,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+227,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+229,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+230,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+231,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+235,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+238,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+240,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+241,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+242,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+712,"SimTop my_core_top my_mem clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_mem reset", false,-1);
        tracep->declBit(c+190,"SimTop my_core_top my_mem io_ex2mem_valid", false,-1);
        tracep->declQuad(c+191,"SimTop my_core_top my_mem io_ex2mem_bits_pc", false,-1, 63,0);
        tracep->declBit(c+193,"SimTop my_core_top my_mem io_ex2mem_bits_gr_we", false,-1);
        tracep->declBus(c+72,"SimTop my_core_top my_mem io_ex2mem_bits_dest", false,-1, 4,0);
        tracep->declBit(c+194,"SimTop my_core_top my_mem io_ex2mem_bits_wb_sel", false,-1);
        tracep->declBit(c+195,"SimTop my_core_top my_mem io_ex2mem_bits_mem_en", false,-1);
        tracep->declBit(c+196,"SimTop my_core_top my_mem io_ex2mem_bits_mem_wr", false,-1);
        tracep->declBus(c+197,"SimTop my_core_top my_mem io_ex2mem_bits_mem_type", false,-1, 6,0);
        tracep->declBus(c+198,"SimTop my_core_top my_mem io_ex2mem_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+199,"SimTop my_core_top my_mem io_ex2mem_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+200,"SimTop my_core_top my_mem io_ex2mem_bits_is_ebreak", false,-1);
        tracep->declQuad(c+73,"SimTop my_core_top my_mem io_ex2mem_bits_result", false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop my_core_top my_mem io_ex2mem_bits_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop my_core_top my_mem io_ex2mem_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+204,"SimTop my_core_top my_mem io_ex2mem_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+206,"SimTop my_core_top my_mem io_ex2mem_bits_br_br_target", false,-1, 63,0);
        tracep->declBit(c+208,"SimTop my_core_top my_mem io_ex2mem_bits_br_br_en", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_mem io_exc_flush", false,-1);
        tracep->declBit(c+243,"SimTop my_core_top my_mem io_data_mem_req_ready", false,-1);
        tracep->declQuad(c+244,"SimTop my_core_top my_mem io_data_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+246,"SimTop my_core_top my_mem io_data_mem_ret_valid", false,-1);
        tracep->declBit(c+189,"SimTop my_core_top my_mem io_ex2mem_ready", false,-1);
        tracep->declBit(c+247,"SimTop my_core_top my_mem io_mem2wb_valid", false,-1);
        tracep->declQuad(c+248,"SimTop my_core_top my_mem io_mem2wb_bits_pc", false,-1, 63,0);
        tracep->declBit(c+250,"SimTop my_core_top my_mem io_mem2wb_bits_gr_we", false,-1);
        tracep->declBus(c+251,"SimTop my_core_top my_mem io_mem2wb_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+252,"SimTop my_core_top my_mem io_mem2wb_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+253,"SimTop my_core_top my_mem io_mem2wb_bits_is_ebreak", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_mem io_mem2wb_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop my_core_top my_mem io_mem2wb_bits_result", false,-1, 63,0);
        tracep->declBus(c+254,"SimTop my_core_top my_mem io_mem2wb_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+255,"SimTop my_core_top my_mem io_mem2wb_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+38,"SimTop my_core_top my_mem io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+40,"SimTop my_core_top my_mem io_branch_br_en", false,-1);
        tracep->declBit(c+257,"SimTop my_core_top my_mem io_data_mem_req_valid", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_mem io_data_mem_req_bits_wr", false,-1);
        tracep->declQuad(c+259,"SimTop my_core_top my_mem io_data_mem_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+261,"SimTop my_core_top my_mem io_data_mem_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+263,"SimTop my_core_top my_mem io_data_mem_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+264,"SimTop my_core_top my_mem io_data_mem_req_bits_mthrough", false,-1);
        tracep->declBit(c+75,"SimTop my_core_top my_mem io_ms_forward_valid", false,-1);
        tracep->declBit(c+76,"SimTop my_core_top my_mem io_ms_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_mem io_ms_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop my_core_top my_mem io_ms_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+76,"SimTop my_core_top my_mem ms_valid", false,-1);
        tracep->declQuad(c+248,"SimTop my_core_top my_mem es_ms_r_pc", false,-1, 63,0);
        tracep->declBit(c+250,"SimTop my_core_top my_mem es_ms_r_gr_we", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_mem es_ms_r_dest", false,-1, 4,0);
        tracep->declBit(c+265,"SimTop my_core_top my_mem es_ms_r_wb_sel", false,-1);
        tracep->declBit(c+266,"SimTop my_core_top my_mem es_ms_r_mem_en", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_mem es_ms_r_mem_wr", false,-1);
        tracep->declBus(c+267,"SimTop my_core_top my_mem es_ms_r_mem_type", false,-1, 6,0);
        tracep->declBus(c+251,"SimTop my_core_top my_mem es_ms_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+252,"SimTop my_core_top my_mem es_ms_r_exc_type", false,-1, 1,0);
        tracep->declBit(c+253,"SimTop my_core_top my_mem es_ms_r_is_ebreak", false,-1);
        tracep->declQuad(c+268,"SimTop my_core_top my_mem es_ms_r_result", false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop my_core_top my_mem es_ms_r_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+254,"SimTop my_core_top my_mem es_ms_r_csr_num", false,-1, 11,0);
        tracep->declQuad(c+255,"SimTop my_core_top my_mem es_ms_r_rs1", false,-1, 63,0);
        tracep->declQuad(c+38,"SimTop my_core_top my_mem es_ms_r_br_br_target", false,-1, 63,0);
        tracep->declBit(c+272,"SimTop my_core_top my_mem es_ms_r_br_br_en", false,-1);
        tracep->declQuad(c+259,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBus(c+273,"SimTop my_core_top my_mem ms_state", false,-1, 2,0);
        tracep->declBit(c+274,"SimTop my_core_top my_mem ms_mem_en", false,-1);
        tracep->declBit(c+275,"SimTop my_core_top my_mem ms_ready_go", false,-1);
        tracep->declBus(c+276,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+277,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+278,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declQuad(c+259,"SimTop my_core_top my_mem mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+264,"SimTop my_core_top my_mem mm io_mthrough", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_wb clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_wb reset", false,-1);
        tracep->declBit(c+247,"SimTop my_core_top my_wb io_mem2wb_valid", false,-1);
        tracep->declQuad(c+248,"SimTop my_core_top my_wb io_mem2wb_bits_pc", false,-1, 63,0);
        tracep->declBit(c+250,"SimTop my_core_top my_wb io_mem2wb_bits_gr_we", false,-1);
        tracep->declBus(c+251,"SimTop my_core_top my_wb io_mem2wb_bits_csr_op", false,-1, 2,0);
        tracep->declBus(c+252,"SimTop my_core_top my_wb io_mem2wb_bits_exc_type", false,-1, 1,0);
        tracep->declBit(c+253,"SimTop my_core_top my_wb io_mem2wb_bits_is_ebreak", false,-1);
        tracep->declBus(c+77,"SimTop my_core_top my_wb io_mem2wb_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop my_core_top my_wb io_mem2wb_bits_result", false,-1, 63,0);
        tracep->declBus(c+254,"SimTop my_core_top my_wb io_mem2wb_bits_csr_num", false,-1, 11,0);
        tracep->declQuad(c+255,"SimTop my_core_top my_wb io_mem2wb_bits_rs1", false,-1, 63,0);
        tracep->declQuad(c+279,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+281,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+282,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+67,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+47,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+286,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+287,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+288,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+290,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+291,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+292,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+294,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+80,"SimTop my_core_top my_wb io_ws_forward_valid", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_wb io_ws_forward_bits_stage_valid", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_wb io_ws_forward_bits_dest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_wb io_ws_forward_bits_data", false,-1, 63,0);
        tracep->declBit(c+81,"SimTop my_core_top my_wb io_ebreak", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_wb ws_valid", false,-1);
        tracep->declQuad(c+292,"SimTop my_core_top my_wb ms_ws_r_pc", false,-1, 63,0);
        tracep->declBit(c+296,"SimTop my_core_top my_wb ms_ws_r_gr_we", false,-1);
        tracep->declBus(c+286,"SimTop my_core_top my_wb ms_ws_r_csr_op", false,-1, 2,0);
        tracep->declBus(c+297,"SimTop my_core_top my_wb ms_ws_r_exc_type", false,-1, 1,0);
        tracep->declBit(c+81,"SimTop my_core_top my_wb ms_ws_r_is_ebreak", false,-1);
        tracep->declBus(c+68,"SimTop my_core_top my_wb ms_ws_r_dest", false,-1, 4,0);
        tracep->declQuad(c+298,"SimTop my_core_top my_wb ms_ws_r_result", false,-1, 63,0);
        tracep->declBus(c+287,"SimTop my_core_top my_wb ms_ws_r_csr_num", false,-1, 11,0);
        tracep->declQuad(c+288,"SimTop my_core_top my_wb ms_ws_r_rs1", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+286,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+287,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+288,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+290,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+291,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+292,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+294,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+300,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+279,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+281,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+282,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+301,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+302,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+303,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+304,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+306,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+308,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+310,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+312,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+314,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+281,"SimTop my_core_top my_csr has_intr_t", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_axi_bridge0 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_axi_bridge0 reset", false,-1);
        tracep->declBit(c+318,"SimTop my_core_top my_axi_bridge0 io_in_req_valid", false,-1);
        tracep->declBit(c+319,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+320,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+324,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+325,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top my_axi_bridge0 io_out_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top my_axi_bridge0 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge0 io_out_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_axi_bridge0 io_out_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top my_axi_bridge0 io_out_b_valid", false,-1);
        tracep->declBit(c+326,"SimTop my_core_top my_axi_bridge0 io_in_req_ready", false,-1);
        tracep->declQuad(c+327,"SimTop my_core_top my_axi_bridge0 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+329,"SimTop my_core_top my_axi_bridge0 io_in_ret_valid", false,-1);
        tracep->declBit(c+330,"SimTop my_core_top my_axi_bridge0 io_in_rlast", false,-1);
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
        tracep->declBus(c+331,"SimTop my_core_top my_axi_bridge0 state", false,-1, 3,0);
        tracep->declBit(c+332,"SimTop my_core_top my_axi_bridge0 rd_widx", false,-1);
        tracep->declBit(c+333,"SimTop my_core_top my_axi_bridge0 rd_after_wt_r", false,-1);
        tracep->declArray(c+334,"SimTop my_core_top my_axi_bridge0 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+338,"SimTop my_core_top my_axi_bridge0 wtag_r", false,-1, 59,0);
        tracep->declBus(c+23,"SimTop my_core_top my_axi_bridge0 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+340,"SimTop my_core_top my_axi_bridge0 wt_widx", false,-1);
        tracep->declBit(c+341,"SimTop my_core_top my_axi_bridge0 burst_cnt", false,-1);
        tracep->declBus(c+342,"SimTop my_core_top my_axi_bridge0 burst_len", false,-1, 7,0);
        tracep->declBit(c+343,"SimTop my_core_top my_axi_bridge0 rd_after_wt", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_axi_bridge1 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_axi_bridge1 reset", false,-1);
        tracep->declBit(c+344,"SimTop my_core_top my_axi_bridge1 io_in_req_valid", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+346,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+350,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top my_axi_bridge1 io_out_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top my_axi_bridge1 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_axi_bridge1 io_out_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top my_axi_bridge1 io_out_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top my_axi_bridge1 io_out_b_valid", false,-1);
        tracep->declBit(c+352,"SimTop my_core_top my_axi_bridge1 io_in_req_ready", false,-1);
        tracep->declQuad(c+353,"SimTop my_core_top my_axi_bridge1 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+355,"SimTop my_core_top my_axi_bridge1 io_in_ret_valid", false,-1);
        tracep->declBit(c+356,"SimTop my_core_top my_axi_bridge1 io_in_rlast", false,-1);
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
        tracep->declBus(c+357,"SimTop my_core_top my_axi_bridge1 state", false,-1, 3,0);
        tracep->declBit(c+358,"SimTop my_core_top my_axi_bridge1 rd_widx", false,-1);
        tracep->declBit(c+359,"SimTop my_core_top my_axi_bridge1 rd_after_wt_r", false,-1);
        tracep->declArray(c+360,"SimTop my_core_top my_axi_bridge1 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+364,"SimTop my_core_top my_axi_bridge1 wtag_r", false,-1, 59,0);
        tracep->declBus(c+35,"SimTop my_core_top my_axi_bridge1 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+366,"SimTop my_core_top my_axi_bridge1 wt_widx", false,-1);
        tracep->declBit(c+367,"SimTop my_core_top my_axi_bridge1 burst_cnt", false,-1);
        tracep->declBus(c+368,"SimTop my_core_top my_axi_bridge1 burst_len", false,-1, 7,0);
        tracep->declBit(c+369,"SimTop my_core_top my_axi_bridge1 rd_after_wt", false,-1);
        tracep->declBit(c+370,"SimTop my_core_top my_mmc io_in_req_valid", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_mmc io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+346,"SimTop my_core_top my_mmc io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+350,"SimTop my_core_top my_mmc io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_mmc io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+371,"SimTop my_core_top my_mmc io_clint_out_clint_hit", false,-1);
        tracep->declBit(c+372,"SimTop my_core_top my_mmc io_clint_out_ret_valid", false,-1);
        tracep->declBit(c+352,"SimTop my_core_top my_mmc io_axi_out_req_ready", false,-1);
        tracep->declQuad(c+353,"SimTop my_core_top my_mmc io_axi_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+355,"SimTop my_core_top my_mmc io_axi_out_ret_valid", false,-1);
        tracep->declBit(c+356,"SimTop my_core_top my_mmc io_axi_out_rlast", false,-1);
        tracep->declBit(c+373,"SimTop my_core_top my_mmc io_in_req_ready", false,-1);
        tracep->declQuad(c+353,"SimTop my_core_top my_mmc io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+374,"SimTop my_core_top my_mmc io_in_ret_valid", false,-1);
        tracep->declBit(c+375,"SimTop my_core_top my_mmc io_in_rlast", false,-1);
        tracep->declBit(c+376,"SimTop my_core_top my_mmc io_clint_out_en", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_mmc io_clint_out_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_clint_out_addr", false,-1, 63,0);
        tracep->declQuad(c+377,"SimTop my_core_top my_mmc io_clint_out_wdata", false,-1, 63,0);
        tracep->declBit(c+344,"SimTop my_core_top my_mmc io_axi_out_req_valid", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_mmc io_axi_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_axi_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+346,"SimTop my_core_top my_mmc io_axi_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+350,"SimTop my_core_top my_mmc io_axi_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_mmc io_axi_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_icache clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache reset", false,-1);
        tracep->declBit(c+49,"SimTop my_core_top my_icache io_in_req_valid", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+50,"SimTop my_core_top my_icache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+722,"SimTop my_core_top my_icache io_in_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+724,"SimTop my_core_top my_icache io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+326,"SimTop my_core_top my_icache io_out_req_ready", false,-1);
        tracep->declQuad(c+327,"SimTop my_core_top my_icache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+329,"SimTop my_core_top my_icache io_out_ret_valid", false,-1);
        tracep->declBit(c+330,"SimTop my_core_top my_icache io_out_rlast", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache io_in_req_ready", false,-1);
        tracep->declQuad(c+42,"SimTop my_core_top my_icache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_icache io_in_ret_valid", false,-1);
        tracep->declBit(c+318,"SimTop my_core_top my_icache io_out_req_valid", false,-1);
        tracep->declBit(c+319,"SimTop my_core_top my_icache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+320,"SimTop my_core_top my_icache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+324,"SimTop my_core_top my_icache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+325,"SimTop my_core_top my_icache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+379,"SimTop my_core_top my_icache cache_addr", false,-1, 5,0);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage1 io_cpu_valid", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache stage1 io_cpu_bits_wr", false,-1);
        tracep->declQuad(c+50,"SimTop my_core_top my_icache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+722,"SimTop my_core_top my_icache stage1 io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+724,"SimTop my_core_top my_icache stage1 io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+380,"SimTop my_core_top my_icache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+41,"SimTop my_core_top my_icache stage1 io_rd_en", false,-1);
        tracep->declBus(c+381,"SimTop my_core_top my_icache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+722,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+724,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+382,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+381,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+383,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache stage2 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache stage2 reset", false,-1);
        tracep->declBit(c+49,"SimTop my_core_top my_icache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+722,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+724,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+52,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+382,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+381,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+383,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+384,"SimTop my_core_top my_icache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+385,"SimTop my_core_top my_icache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+386,"SimTop my_core_top my_icache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+387,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+389,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+391,"SimTop my_core_top my_icache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+392,"SimTop my_core_top my_icache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+393,"SimTop my_core_top my_icache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+394,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+396,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+398,"SimTop my_core_top my_icache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_icache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+400,"SimTop my_core_top my_icache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+401,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+403,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+405,"SimTop my_core_top my_icache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+407,"SimTop my_core_top my_icache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+408,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+410,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+380,"SimTop my_core_top my_icache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+380,"SimTop my_core_top my_icache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+412,"SimTop my_core_top my_icache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+413,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+414,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+416,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+417,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+418,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+419,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+420,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+421,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+422,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+423,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+424,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+425,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+426,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+412,"SimTop my_core_top my_icache stage2 s2_valid", false,-1);
        tracep->declBit(c+413,"SimTop my_core_top my_icache stage2 buf_wr", false,-1);
        tracep->declQuad(c+414,"SimTop my_core_top my_icache stage2 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+416,"SimTop my_core_top my_icache stage2 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+417,"SimTop my_core_top my_icache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+418,"SimTop my_core_top my_icache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+419,"SimTop my_core_top my_icache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+420,"SimTop my_core_top my_icache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+430,"SimTop my_core_top my_icache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+431,"SimTop my_core_top my_icache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+432,"SimTop my_core_top my_icache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache stage3 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache stage3 reset", false,-1);
        tracep->declBit(c+412,"SimTop my_core_top my_icache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+413,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+414,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+416,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+417,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+418,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+419,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+420,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+421,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+422,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+423,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+424,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+425,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+426,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+326,"SimTop my_core_top my_icache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+327,"SimTop my_core_top my_icache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+329,"SimTop my_core_top my_icache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+330,"SimTop my_core_top my_icache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+42,"SimTop my_core_top my_icache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"SimTop my_core_top my_icache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+380,"SimTop my_core_top my_icache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache stage3 io_wt_en", false,-1);
        tracep->declBus(c+434,"SimTop my_core_top my_icache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+435,"SimTop my_core_top my_icache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBit(c+436,"SimTop my_core_top my_icache stage3 io_wt_line_dirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+438,"SimTop my_core_top my_icache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+440,"SimTop my_core_top my_icache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+318,"SimTop my_core_top my_icache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+319,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+320,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+324,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+325,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache stage3 s3_valid", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache stage3 buf_wr", false,-1);
        tracep->declQuad(c+443,"SimTop my_core_top my_icache stage3 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+445,"SimTop my_core_top my_icache stage3 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+325,"SimTop my_core_top my_icache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+435,"SimTop my_core_top my_icache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+446,"SimTop my_core_top my_icache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+447,"SimTop my_core_top my_icache stage3 buf_hit", false,-1);
        tracep->declBus(c+434,"SimTop my_core_top my_icache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+448,"SimTop my_core_top my_icache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+449,"SimTop my_core_top my_icache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+450,"SimTop my_core_top my_icache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+451,"SimTop my_core_top my_icache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+453,"SimTop my_core_top my_icache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+455,"SimTop my_core_top my_icache stage3 state", false,-1, 5,0);
        tracep->declBit(c+456,"SimTop my_core_top my_icache stage3 cnt", false,-1);
        tracep->declQuad(c+457,"SimTop my_core_top my_icache stage3 cpu_word_mask", false,-1, 63,0);
        tracep->declBit(c+459,"SimTop my_core_top my_icache stage3 hit", false,-1);
        tracep->declBit(c+460,"SimTop my_core_top my_icache stage3 write_hit", false,-1);
        tracep->declBit(c+461,"SimTop my_core_top my_icache stage3 wb_en", false,-1);
        tracep->declBit(c+462,"SimTop my_core_top my_icache stage3 burst_last", false,-1);
        tracep->declBit(c+463,"SimTop my_core_top my_icache stage3 refill_come", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_icache CacheDataRamV clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache CacheDataRamV reset", false,-1);
        tracep->declBit(c+464,"SimTop my_core_top my_icache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+465,"SimTop my_core_top my_icache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+379,"SimTop my_core_top my_icache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_icache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+470,"SimTop my_core_top my_icache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+474,"SimTop my_core_top my_icache CacheDataRamV cen", false,-1);
        tracep->declBit(c+475,"SimTop my_core_top my_icache CacheDataRamV wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_icache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+470,"SimTop my_core_top my_icache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+476,"SimTop my_core_top my_icache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+465,"SimTop my_core_top my_icache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+379,"SimTop my_core_top my_icache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_icache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+477,"SimTop my_core_top my_icache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+474,"SimTop my_core_top my_icache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+481,"SimTop my_core_top my_icache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_icache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+477,"SimTop my_core_top my_icache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+482,"SimTop my_core_top my_icache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+465,"SimTop my_core_top my_icache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+379,"SimTop my_core_top my_icache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_icache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+483,"SimTop my_core_top my_icache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+474,"SimTop my_core_top my_icache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+487,"SimTop my_core_top my_icache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_icache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+483,"SimTop my_core_top my_icache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_icache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+488,"SimTop my_core_top my_icache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+465,"SimTop my_core_top my_icache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+379,"SimTop my_core_top my_icache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_icache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+489,"SimTop my_core_top my_icache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+474,"SimTop my_core_top my_icache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+493,"SimTop my_core_top my_icache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_icache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+489,"SimTop my_core_top my_icache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+466,"SimTop my_core_top my_icache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache cache_meta clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache cache_meta reset", false,-1);
        tracep->declBit(c+474,"SimTop my_core_top my_icache cache_meta io_en", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta io_wr", false,-1);
        tracep->declBus(c+434,"SimTop my_core_top my_icache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+494,"SimTop my_core_top my_icache cache_meta io_index", false,-1, 4,0);
        tracep->declBit(c+436,"SimTop my_core_top my_icache cache_meta io_in_dirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+384,"SimTop my_core_top my_icache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+386,"SimTop my_core_top my_icache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+391,"SimTop my_core_top my_icache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+393,"SimTop my_core_top my_icache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+398,"SimTop my_core_top my_icache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+400,"SimTop my_core_top my_icache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+405,"SimTop my_core_top my_icache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+407,"SimTop my_core_top my_icache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+712,"SimTop my_core_top my_icache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+495,"SimTop my_core_top my_icache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+384,"SimTop my_core_top my_icache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+386,"SimTop my_core_top my_icache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+496,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+498,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+386,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+384,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+385,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+500,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+391,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+393,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+501,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+503,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+393,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+391,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+392,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+505,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+398,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+400,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+506,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+508,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+400,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+398,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+399,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+510,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+405,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+407,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+379,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+436,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+437,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+511,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+513,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+407,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+405,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+406,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache reset", false,-1);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache io_in_req_valid", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_dcache io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+259,"SimTop my_core_top my_dcache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+261,"SimTop my_core_top my_dcache io_in_req_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+263,"SimTop my_core_top my_dcache io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+264,"SimTop my_core_top my_dcache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+373,"SimTop my_core_top my_dcache io_out_req_ready", false,-1);
        tracep->declQuad(c+353,"SimTop my_core_top my_dcache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+374,"SimTop my_core_top my_dcache io_out_ret_valid", false,-1);
        tracep->declBit(c+375,"SimTop my_core_top my_dcache io_out_rlast", false,-1);
        tracep->declBit(c+243,"SimTop my_core_top my_dcache io_in_req_ready", false,-1);
        tracep->declQuad(c+244,"SimTop my_core_top my_dcache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+246,"SimTop my_core_top my_dcache io_in_ret_valid", false,-1);
        tracep->declBit(c+370,"SimTop my_core_top my_dcache io_out_req_valid", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+346,"SimTop my_core_top my_dcache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+350,"SimTop my_core_top my_dcache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_dcache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache cache_addr", false,-1, 5,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage1 io_cpu_valid", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wr", false,-1);
        tracep->declQuad(c+259,"SimTop my_core_top my_dcache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+261,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+263,"SimTop my_core_top my_dcache stage1 io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+264,"SimTop my_core_top my_dcache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+516,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+243,"SimTop my_core_top my_dcache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+243,"SimTop my_core_top my_dcache stage1 io_rd_en", false,-1);
        tracep->declBus(c+517,"SimTop my_core_top my_dcache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+261,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+263,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+264,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+518,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+517,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+519,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache stage2 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache stage2 reset", false,-1);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+258,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wr", false,-1);
        tracep->declQuad(c+261,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+263,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+264,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+518,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+517,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+519,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+520,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+522,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+523,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+525,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+527,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+529,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+530,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+532,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+534,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+536,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+537,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+539,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+541,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+543,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+544,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+546,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+516,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+516,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+548,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+549,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+550,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+552,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+553,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+554,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+555,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+556,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+557,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+558,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+559,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+560,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+561,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+562,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+564,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+548,"SimTop my_core_top my_dcache stage2 s2_valid", false,-1);
        tracep->declBit(c+549,"SimTop my_core_top my_dcache stage2 buf_wr", false,-1);
        tracep->declQuad(c+550,"SimTop my_core_top my_dcache stage2 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+552,"SimTop my_core_top my_dcache stage2 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+553,"SimTop my_core_top my_dcache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+554,"SimTop my_core_top my_dcache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+555,"SimTop my_core_top my_dcache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+556,"SimTop my_core_top my_dcache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+566,"SimTop my_core_top my_dcache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+567,"SimTop my_core_top my_dcache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+568,"SimTop my_core_top my_dcache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache stage3 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache stage3 reset", false,-1);
        tracep->declBit(c+548,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+549,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wr", false,-1);
        tracep->declQuad(c+550,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+552,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+553,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+554,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+555,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+556,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+557,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+558,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+559,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+560,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+561,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+562,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+564,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+373,"SimTop my_core_top my_dcache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+353,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+374,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+375,"SimTop my_core_top my_dcache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+244,"SimTop my_core_top my_dcache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+246,"SimTop my_core_top my_dcache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+516,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache stage3 io_wt_en", false,-1);
        tracep->declBus(c+570,"SimTop my_core_top my_dcache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+571,"SimTop my_core_top my_dcache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache stage3 io_wt_line_dirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+574,"SimTop my_core_top my_dcache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+576,"SimTop my_core_top my_dcache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+370,"SimTop my_core_top my_dcache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+346,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+350,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+578,"SimTop my_core_top my_dcache stage3 s3_valid", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache stage3 buf_wr", false,-1);
        tracep->declQuad(c+579,"SimTop my_core_top my_dcache stage3 buf_wdata", false,-1, 63,0);
        tracep->declBus(c+581,"SimTop my_core_top my_dcache stage3 buf_wstrb", false,-1, 7,0);
        tracep->declBit(c+351,"SimTop my_core_top my_dcache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+571,"SimTop my_core_top my_dcache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+582,"SimTop my_core_top my_dcache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+583,"SimTop my_core_top my_dcache stage3 buf_hit", false,-1);
        tracep->declBus(c+570,"SimTop my_core_top my_dcache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+584,"SimTop my_core_top my_dcache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+585,"SimTop my_core_top my_dcache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+586,"SimTop my_core_top my_dcache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+587,"SimTop my_core_top my_dcache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+589,"SimTop my_core_top my_dcache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+591,"SimTop my_core_top my_dcache stage3 state", false,-1, 5,0);
        tracep->declBit(c+592,"SimTop my_core_top my_dcache stage3 cnt", false,-1);
        tracep->declQuad(c+593,"SimTop my_core_top my_dcache stage3 cpu_word_mask", false,-1, 63,0);
        tracep->declBit(c+595,"SimTop my_core_top my_dcache stage3 hit", false,-1);
        tracep->declBit(c+596,"SimTop my_core_top my_dcache stage3 write_hit", false,-1);
        tracep->declBit(c+597,"SimTop my_core_top my_dcache stage3 wb_en", false,-1);
        tracep->declBit(c+598,"SimTop my_core_top my_dcache stage3 burst_last", false,-1);
        tracep->declBit(c+599,"SimTop my_core_top my_dcache stage3 refill_come", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache CacheDataRamV clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_dcache CacheDataRamV reset", false,-1);
        tracep->declBit(c+600,"SimTop my_core_top my_dcache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+601,"SimTop my_core_top my_dcache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_dcache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+606,"SimTop my_core_top my_dcache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+610,"SimTop my_core_top my_dcache CacheDataRamV cen", false,-1);
        tracep->declBit(c+611,"SimTop my_core_top my_dcache CacheDataRamV wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_dcache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+606,"SimTop my_core_top my_dcache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_dcache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+612,"SimTop my_core_top my_dcache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+601,"SimTop my_core_top my_dcache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_dcache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+613,"SimTop my_core_top my_dcache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+610,"SimTop my_core_top my_dcache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+617,"SimTop my_core_top my_dcache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_dcache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+613,"SimTop my_core_top my_dcache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_dcache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+618,"SimTop my_core_top my_dcache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+601,"SimTop my_core_top my_dcache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_dcache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+619,"SimTop my_core_top my_dcache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+610,"SimTop my_core_top my_dcache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+623,"SimTop my_core_top my_dcache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_dcache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+619,"SimTop my_core_top my_dcache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+721,"SimTop my_core_top my_dcache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+624,"SimTop my_core_top my_dcache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+601,"SimTop my_core_top my_dcache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+725,"SimTop my_core_top my_dcache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+625,"SimTop my_core_top my_dcache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+610,"SimTop my_core_top my_dcache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+629,"SimTop my_core_top my_dcache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+729,"SimTop my_core_top my_dcache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+625,"SimTop my_core_top my_dcache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+602,"SimTop my_core_top my_dcache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache cache_meta clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache cache_meta reset", false,-1);
        tracep->declBit(c+610,"SimTop my_core_top my_dcache cache_meta io_en", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache cache_meta io_wr", false,-1);
        tracep->declBus(c+570,"SimTop my_core_top my_dcache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+630,"SimTop my_core_top my_dcache cache_meta io_index", false,-1, 4,0);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache cache_meta io_in_dirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+520,"SimTop my_core_top my_dcache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+522,"SimTop my_core_top my_dcache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+527,"SimTop my_core_top my_dcache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+529,"SimTop my_core_top my_dcache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+534,"SimTop my_core_top my_dcache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+536,"SimTop my_core_top my_dcache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+541,"SimTop my_core_top my_dcache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+543,"SimTop my_core_top my_dcache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+631,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+520,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+522,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+632,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+634,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+522,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+520,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+521,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+636,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+527,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+529,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+637,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+639,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+529,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+527,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+528,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+641,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+534,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+536,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+642,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+644,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+536,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+534,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+535,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+646,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+569,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+541,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+543,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+515,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+733,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+572,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+573,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+647,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+649,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+543,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+541,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+542,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+712,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+713,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+376,"SimTop my_core_top my_clint io_in_en", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_clint io_in_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_clint io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+377,"SimTop my_core_top my_clint io_in_wdata", false,-1, 63,0);
        tracep->declBit(c+371,"SimTop my_core_top my_clint io_in_clint_hit", false,-1);
        tracep->declBit(c+372,"SimTop my_core_top my_clint io_in_ret_valid", false,-1);
        tracep->declBit(c+300,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+651,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+653,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+655,"SimTop my_core_top my_clint hit_mtime", false,-1);
        tracep->declBit(c+656,"SimTop my_core_top my_clint hit_mtimecmp", false,-1);
        tracep->declBit(c+372,"SimTop my_core_top my_clint ret_valid", false,-1);
        tracep->declBit(c+657,"SimTop my_core_top my_clint unnamedblk1 wen", false,-1);
        tracep->declBit(c+712,"SimTop my_axi_sram clock", false,-1);
        tracep->declBit(c+713,"SimTop my_axi_sram reset", false,-1);
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
        tracep->declBit(c+712,"SimTop my_axi_sram my_arbiter clock", false,-1);
        tracep->declBit(c+713,"SimTop my_axi_sram my_arbiter reset", false,-1);
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
        tracep->declBit(c+658,"SimTop my_axi_sram my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+659,"SimTop my_axi_sram my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+660,"SimTop my_axi_sram my_arbiter io_out_b_valid", false,-1);
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
        tracep->declBit(c+661,"SimTop my_axi_sram my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+662,"SimTop my_axi_sram my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+664,"SimTop my_axi_sram my_arbiter io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+665,"SimTop my_axi_sram my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+666,"SimTop my_axi_sram my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+667,"SimTop my_axi_sram my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+669,"SimTop my_axi_sram my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+670,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+672,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+673,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+674,"SimTop my_axi_sram my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+675,"SimTop my_axi_sram my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+676,"SimTop my_axi_sram my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+14,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+661,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+662,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+664,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+677,"SimTop my_axi_sram my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+19,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+31,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+666,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+667,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+678,"SimTop my_axi_sram my_arbiter arbiter_wt io_chosen", false,-1);
        tracep->declBit(c+712,"SimTop my_axi_sram my_axi_sram_driver clock", false,-1);
        tracep->declBit(c+713,"SimTop my_axi_sram my_axi_sram_driver reset", false,-1);
        tracep->declBit(c+661,"SimTop my_axi_sram my_axi_sram_driver io_ar_valid", false,-1);
        tracep->declQuad(c+662,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+664,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+665,"SimTop my_axi_sram my_axi_sram_driver io_rd_ready", false,-1);
        tracep->declBit(c+666,"SimTop my_axi_sram my_axi_sram_driver io_aw_valid", false,-1);
        tracep->declQuad(c+667,"SimTop my_axi_sram my_axi_sram_driver io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+669,"SimTop my_axi_sram my_axi_sram_driver io_wt_valid", false,-1);
        tracep->declQuad(c+670,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+672,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+673,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wlast", false,-1);
        tracep->declBit(c+674,"SimTop my_axi_sram my_axi_sram_driver io_b_ready", false,-1);
        tracep->declQuad(c+679,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+681,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_resp", false,-1);
        tracep->declBit(c+682,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_resp", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_axi_sram_driver io_ar_ready", false,-1);
        tracep->declBit(c+658,"SimTop my_axi_sram my_axi_sram_driver io_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_axi_sram_driver io_aw_ready", false,-1);
        tracep->declBit(c+659,"SimTop my_axi_sram my_axi_sram_driver io_wt_ready", false,-1);
        tracep->declBit(c+660,"SimTop my_axi_sram my_axi_sram_driver io_b_valid", false,-1);
        tracep->declBit(c+683,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_en", false,-1);
        tracep->declQuad(c+684,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+686,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_en", false,-1);
        tracep->declQuad(c+687,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+670,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+672,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBit(c+658,"SimTop my_axi_sram my_axi_sram_driver rdata_ok", false,-1);
        tracep->declBus(c+689,"SimTop my_axi_sram my_axi_sram_driver rstate", false,-1, 2,0);
        tracep->declBus(c+690,"SimTop my_axi_sram my_axi_sram_driver wstate", false,-1, 2,0);
        tracep->declQuad(c+691,"SimTop my_axi_sram my_axi_sram_driver ar_buf_araddr", false,-1, 63,0);
        tracep->declBus(c+693,"SimTop my_axi_sram my_axi_sram_driver ar_buf_arlen", false,-1, 7,0);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver rdata_r", false,-1, 63,0);
        tracep->declBus(c+694,"SimTop my_axi_sram my_axi_sram_driver rd_cnt", false,-1, 7,0);
        tracep->declBit(c+695,"SimTop my_axi_sram my_axi_sram_driver rd_idx", false,-1);
        tracep->declQuad(c+696,"SimTop my_axi_sram my_axi_sram_driver aw_buf_awaddr", false,-1, 63,0);
        tracep->declBit(c+698,"SimTop my_axi_sram my_axi_sram_driver wt_widx", false,-1);
        tracep->declBit(c+699,"SimTop my_axi_sram my_axi_sram_driver unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+681,"SimTop my_axi_sram my_rmem_port en", false,-1);
        tracep->declBit(c+721,"SimTop my_axi_sram my_rmem_port wr", false,-1);
        tracep->declQuad(c+684,"SimTop my_axi_sram my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop my_axi_sram my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+734,"SimTop my_axi_sram my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+682,"SimTop my_axi_sram my_wmem_port en", false,-1);
        tracep->declBit(c+733,"SimTop my_axi_sram my_wmem_port wr", false,-1);
        tracep->declQuad(c+687,"SimTop my_axi_sram my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+670,"SimTop my_axi_sram my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+672,"SimTop my_axi_sram my_wmem_port wmask", false,-1, 7,0);
        tracep->declBit(c+712,"SimTop my_axi_sram rd_resp_en_rdelayer clock", false,-1);
        tracep->declBit(c+713,"SimTop my_axi_sram rd_resp_en_rdelayer reset", false,-1);
        tracep->declBit(c+683,"SimTop my_axi_sram rd_resp_en_rdelayer io_in", false,-1);
        tracep->declBit(c+681,"SimTop my_axi_sram rd_resp_en_rdelayer io_out", false,-1);
        tracep->declBit(c+700,"SimTop my_axi_sram rd_resp_en_rdelayer delaying", false,-1);
        tracep->declBit(c+701,"SimTop my_axi_sram rd_resp_en_rdelayer r_r", false,-1);
        tracep->declBit(c+702,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_1", false,-1);
        tracep->declBit(c+703,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_2", false,-1);
        tracep->declBit(c+704,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_3", false,-1);
        tracep->declBit(c+681,"SimTop my_axi_sram rd_resp_en_rdelayer r", false,-1);
        tracep->declBit(c+705,"SimTop my_axi_sram rd_resp_en_rdelayer unnamedblk1 din", false,-1);
        tracep->declBit(c+712,"SimTop my_axi_sram wt_resp_en_wdelayer clock", false,-1);
        tracep->declBit(c+713,"SimTop my_axi_sram wt_resp_en_wdelayer reset", false,-1);
        tracep->declBit(c+686,"SimTop my_axi_sram wt_resp_en_wdelayer io_in", false,-1);
        tracep->declBit(c+682,"SimTop my_axi_sram wt_resp_en_wdelayer io_out", false,-1);
        tracep->declBit(c+706,"SimTop my_axi_sram wt_resp_en_wdelayer delaying", false,-1);
        tracep->declBit(c+707,"SimTop my_axi_sram wt_resp_en_wdelayer r_r", false,-1);
        tracep->declBit(c+708,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_1", false,-1);
        tracep->declBit(c+709,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_2", false,-1);
        tracep->declBit(c+710,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_3", false,-1);
        tracep->declBit(c+682,"SimTop my_axi_sram wt_resp_en_wdelayer r", false,-1);
        tracep->declBit(c+711,"SimTop my_axi_sram wt_resp_en_wdelayer unnamedblk1 din", false,-1);
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
        tracep->fullQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
        tracep->fullCData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
        tracep->fullQData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r),64);
        tracep->fullQData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullBit(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2));
        tracep->fullBit(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
        tracep->fullCData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest),5);
        tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2),64);
        tracep->fullBit(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_es_forward_bits_stage_valid));
        tracep->fullCData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest),5);
        tracep->fullQData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T),64);
        tracep->fullBit(oldp+75,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_valid));
        tracep->fullBit(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid));
        tracep->fullCData(oldp+77,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest),5);
        tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T),64);
        tracep->fullBit(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid));
        tracep->fullBit(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_is_ebreak));
        tracep->fullBit(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid));
        tracep->fullIData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_alu_op),23);
        tracep->fullBit(oldp+84,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))))));
        tracep->fullBit(oldp+85,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+86,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
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
        tracep->fullBit(oldp+87,((((((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+88,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+89,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+90,(((((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_mem_type),7);
        tracep->fullBit(oldp+92,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_ex_sel),3);
        tracep->fullCData(oldp+94,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14) 
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
        tracep->fullCData(oldp+95,(((((((((((((((((
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
        tracep->fullBit(oldp+96,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                            >> 0x14U)))));
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc),64);
        tracep->fullQData(oldp+100,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_es)
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T
                                      : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ms)
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ws)
                                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2
                                              : ((0U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1))
                                                  ? 0ULL
                                                  : 
                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                                 [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1]))))),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_rdata2),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_imm),64);
        tracep->fullSData(oldp+106,((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid));
        tracep->fullIData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst),32);
        tracep->fullCData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1),5);
        tracep->fullBit(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_es));
        tracep->fullBit(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ms));
        tracep->fullBit(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ws));
        tracep->fullBit(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_es));
        tracep->fullBit(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ms));
        tracep->fullBit(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ws));
        tracep->fullBit(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_ready_go));
        tracep->fullQData(oldp+117,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))),64);
        tracep->fullCData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+120,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+121,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1))
                                      ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                     [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1])),64);
        tracep->fullQData(oldp+123,(((0U == (0x1fU 
                                             & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                     [(0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+155,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+185,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullBit(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2));
        tracep->fullBit(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
        tracep->fullQData(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc),64);
        tracep->fullBit(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we));
        tracep->fullBit(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel));
        tracep->fullBit(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en));
        tracep->fullBit(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr));
        tracep->fullCData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type),7);
        tracep->fullCData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op),3);
        tracep->fullCData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type),2);
        tracep->fullBit(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_is_ebreak));
        tracep->fullQData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata),64);
        tracep->fullSData(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num),12);
        tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1),64);
        tracep->fullQData(oldp+206,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                                      : (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc 
                                         + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm))),64);
        tracep->fullBit(oldp+208,((((((((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
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
        tracep->fullIData(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op),23);
        tracep->fullBit(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel));
        tracep->fullBit(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel));
        tracep->fullSData(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type),9);
        tracep->fullBit(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w));
        tracep->fullCData(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel),3);
        tracep->fullQData(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2),64);
        tracep->fullQData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm),64);
        tracep->fullQData(oldp+219,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+225,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+227,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+229,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+230,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
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
        tracep->fullWData(oldp+231,(__Vtemp77),127);
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
        tracep->fullWData(oldp+235,(__Vtemp82),65);
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+241,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+243,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
        tracep->fullQData(oldp+244,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
        tracep->fullBit(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
        tracep->fullBit(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T));
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc),64);
        tracep->fullBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we));
        tracep->fullCData(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op),3);
        tracep->fullCData(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type),2);
        tracep->fullBit(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_is_ebreak));
        tracep->fullSData(oldp+254,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num),12);
        tracep->fullQData(oldp+255,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1),64);
        tracep->fullBit(oldp+257,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
        tracep->fullBit(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr));
        tracep->fullQData(oldp+259,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)),64);
        tracep->fullQData(oldp+261,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
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
        tracep->fullCData(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
        tracep->fullBit(oldp+264,((IData)((0x80000000ULL 
                                           != (0xe0000000ULL 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))));
        tracep->fullBit(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel));
        tracep->fullBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en));
        tracep->fullCData(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type),7);
        tracep->fullQData(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result),64);
        tracep->fullQData(oldp+270,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata),64);
        tracep->fullBit(oldp+272,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en));
        tracep->fullCData(oldp+273,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),3);
        tracep->fullBit(oldp+274,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
        tracep->fullBit(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go));
        tracep->fullCData(oldp+276,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+277,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+278,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullQData(oldp+279,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullBit(oldp+281,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullQData(oldp+282,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+284,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullCData(oldp+286,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op),3);
        tracep->fullSData(oldp+287,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num),12);
        tracep->fullQData(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1),64);
        tracep->fullBit(oldp+290,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))));
        tracep->fullBit(oldp+291,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+292,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc),64);
        tracep->fullQData(oldp+294,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullBit(oldp+296,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we));
        tracep->fullCData(oldp+297,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type),2);
        tracep->fullQData(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result),64);
        tracep->fullBit(oldp+300,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullCData(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+302,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+306,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+308,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+310,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+312,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+314,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+316,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullBit(oldp+318,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr));
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
        tracep->fullWData(oldp+320,(__Vtemp85),128);
        tracep->fullCData(oldp+324,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                                      : 0xffU)),8);
        tracep->fullBit(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+326,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt))));
        tracep->fullQData(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
        tracep->fullBit(oldp+329,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+330,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+331,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
        tracep->fullBit(oldp+332,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
        tracep->fullBit(oldp+333,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
        tracep->fullQData(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
        tracep->fullBit(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
        tracep->fullBit(oldp+341,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
        tracep->fullCData(oldp+342,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
        tracep->fullBit(oldp+343,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
        tracep->fullBit(oldp+344,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
        tracep->fullBit(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
        tracep->fullWData(oldp+346,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
        tracep->fullCData(oldp+350,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                      : 0xffU)),8);
        tracep->fullBit(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+352,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
        tracep->fullQData(oldp+353,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
        tracep->fullBit(oldp+355,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+356,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+357,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
        tracep->fullBit(oldp+358,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
        tracep->fullBit(oldp+359,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
        tracep->fullQData(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
        tracep->fullBit(oldp+366,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
        tracep->fullBit(oldp+367,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
        tracep->fullCData(oldp+368,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
        tracep->fullBit(oldp+369,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
        tracep->fullBit(oldp+370,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+371,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
        tracep->fullBit(oldp+372,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
        tracep->fullBit(oldp+373,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)))));
        tracep->fullBit(oldp+374,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
        tracep->fullBit(oldp+375,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
        tracep->fullBit(oldp+376,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
        tracep->fullQData(oldp+377,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
        tracep->fullCData(oldp+379,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),6);
        tracep->fullBit(oldp+380,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullCData(oldp+381,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+382,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+383,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2))),4);
        tracep->fullBit(oldp+384,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+385,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+386,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+387,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+389,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+391,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+392,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+393,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+398,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+399,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+400,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+401,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+403,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+405,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+406,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+407,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+412,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+413,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr));
        tracep->fullQData(oldp+414,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata),64);
        tracep->fullCData(oldp+416,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb),8);
        tracep->fullBit(oldp+417,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+418,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+419,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+420,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+421,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+422,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+423,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+424,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+425,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+426,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+428,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullCData(oldp+430,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+431,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+432,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+433,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+434,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+435,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
        tracep->fullBit(oldp+436,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
        tracep->fullIData(oldp+437,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+438,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4),64);
        tracep->fullQData(oldp+440,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4),64);
        tracep->fullBit(oldp+442,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
        tracep->fullQData(oldp+443,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata),64);
        tracep->fullCData(oldp+445,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb),8);
        tracep->fullCData(oldp+446,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+447,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+448,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+449,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+450,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+451,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+453,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+455,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+456,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
        tracep->fullQData(oldp+457,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask),64);
        tracep->fullBit(oldp+459,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+460,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit));
        tracep->fullBit(oldp+461,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
        tracep->fullBit(oldp+462,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+463,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+464,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21)))));
        tracep->fullWData(oldp+466,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27),128);
        tracep->fullWData(oldp+470,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+474,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
        tracep->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+476,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+477,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+482,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+483,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+488,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+489,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+494,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),5);
        tracep->fullBit(oldp+495,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+496,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+498,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+500,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+501,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+503,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+505,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+506,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+508,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+510,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+511,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+513,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullCData(oldp+515,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),6);
        tracep->fullBit(oldp+516,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullCData(oldp+517,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+518,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+519,((8U & ((IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                    >> 3U)) 
                                           << 3U))),4);
        tracep->fullBit(oldp+520,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+521,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+522,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+523,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+525,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+527,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+528,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+529,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+530,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+532,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+534,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+535,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+536,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+537,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+539,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+541,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+542,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+543,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+544,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+546,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+548,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+549,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
        tracep->fullQData(oldp+550,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
        tracep->fullCData(oldp+552,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
        tracep->fullBit(oldp+553,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+554,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+555,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+556,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+557,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+558,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+559,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+560,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+561,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+562,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+564,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullCData(oldp+566,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+567,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+568,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+569,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+570,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+571,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
        tracep->fullBit(oldp+572,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
        tracep->fullIData(oldp+573,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+574,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4),64);
        tracep->fullQData(oldp+576,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4),64);
        tracep->fullBit(oldp+578,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
        tracep->fullQData(oldp+579,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
        tracep->fullCData(oldp+581,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
        tracep->fullCData(oldp+582,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+583,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+584,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+585,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+586,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+587,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+589,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+591,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+592,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
        tracep->fullQData(oldp+593,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
        tracep->fullBit(oldp+595,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+596,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit));
        tracep->fullBit(oldp+597,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
        tracep->fullBit(oldp+598,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+599,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+600,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21)))));
        tracep->fullWData(oldp+602,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27),128);
        tracep->fullWData(oldp+606,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+610,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
        tracep->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+612,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+613,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+618,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+619,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+624,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+625,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+629,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+630,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),5);
        tracep->fullBit(oldp+631,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+632,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+634,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+636,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+637,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+639,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+641,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+642,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+644,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+646,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+647,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+649,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullQData(oldp+651,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+653,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+655,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+656,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
        tracep->fullBit(oldp+657,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
        tracep->fullBit(oldp+658,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
        tracep->fullBit(oldp+659,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
        tracep->fullBit(oldp+660,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                         >> 2U))));
        tracep->fullBit(oldp+661,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+662,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
        tracep->fullCData(oldp+664,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                      ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                      : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
        tracep->fullBit(oldp+665,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 1U)))));
        tracep->fullBit(oldp+666,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
        tracep->fullQData(oldp+667,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
        tracep->fullBit(oldp+669,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
        tracep->fullQData(oldp+670,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
        tracep->fullCData(oldp+672,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                      : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
        tracep->fullBit(oldp+673,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                    : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
        tracep->fullBit(oldp+674,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 3U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 3U)))));
        tracep->fullBit(oldp+675,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+676,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+677,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
        tracep->fullBit(oldp+678,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
        tracep->fullQData(oldp+679,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+681,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
        tracep->fullBit(oldp+682,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
        tracep->fullBit(oldp+683,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
        tracep->fullQData(oldp+684,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                       ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                          >> 3U) : 
                                      ((0x1ffffffffffffffeULL 
                                        & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                           >> 3U)) 
                                       | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                     << 3U)),64);
        tracep->fullBit(oldp+686,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                    >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
        tracep->fullQData(oldp+687,(((0xfffffffffffffff0ULL 
                                      & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                        << 3U))))),64);
        tracep->fullCData(oldp+689,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
        tracep->fullCData(oldp+690,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
        tracep->fullQData(oldp+691,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
        tracep->fullCData(oldp+693,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
        tracep->fullCData(oldp+694,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
        tracep->fullBit(oldp+695,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
        tracep->fullQData(oldp+696,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
        tracep->fullBit(oldp+698,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
        tracep->fullBit(oldp+699,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+700,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
        tracep->fullBit(oldp+701,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
        tracep->fullBit(oldp+702,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+703,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+704,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+705,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+706,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
        tracep->fullBit(oldp+707,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
        tracep->fullBit(oldp+708,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+709,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+710,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+711,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+712,(vlSelf->clock));
        tracep->fullBit(oldp+713,(vlSelf->reset));
        tracep->fullQData(oldp+714,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullBit(oldp+716,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+717,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+718,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+720,(vlSelf->io_core_debug_raise_intr));
        tracep->fullBit(oldp+721,(0U));
        tracep->fullQData(oldp+722,(0ULL),64);
        tracep->fullCData(oldp+724,(0U),8);
        __Vtemp86[0U] = 0U;
        __Vtemp86[1U] = 0U;
        __Vtemp86[2U] = 0U;
        __Vtemp86[3U] = 0U;
        tracep->fullWData(oldp+725,(__Vtemp86),128);
        __Vtemp87[0U] = 0xffffffffU;
        __Vtemp87[1U] = 0xffffffffU;
        __Vtemp87[2U] = 0xffffffffU;
        __Vtemp87[3U] = 0xffffffffU;
        tracep->fullWData(oldp+729,(__Vtemp87),128);
        tracep->fullBit(oldp+733,(1U));
        tracep->fullQData(oldp+734,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

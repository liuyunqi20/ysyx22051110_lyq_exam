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
        tracep->declBit(c+181,"clock", false,-1);
        tracep->declBit(c+182,"reset", false,-1);
        tracep->declQuad(c+183,"io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+185,"io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+187,"io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+189,"io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+191,"io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+193,"io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+195,"io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+196,"io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+197,"io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+199,"io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+200,"io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+201,"io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+203,"io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+204,"io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+205,"io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+206,"io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+208,"io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+209,"io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+210,"io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+212,"io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+213,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+217,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+218,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+219,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+221,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+181,"SimTop clock", false,-1);
        tracep->declBit(c+182,"SimTop reset", false,-1);
        tracep->declQuad(c+183,"SimTop io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+189,"SimTop io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+191,"SimTop io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+193,"SimTop io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+195,"SimTop io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+196,"SimTop io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+197,"SimTop io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+199,"SimTop io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+200,"SimTop io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+201,"SimTop io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+204,"SimTop io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+205,"SimTop io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+206,"SimTop io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+208,"SimTop io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+209,"SimTop io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+210,"SimTop io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+212,"SimTop io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+213,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+217,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+218,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+219,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+221,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top reset", false,-1);
        tracep->declQuad(c+197,"SimTop my_core_top io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+204,"SimTop my_core_top io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+205,"SimTop my_core_top io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+206,"SimTop my_core_top io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"SimTop my_core_top io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+212,"SimTop my_core_top io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+213,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop my_core_top io_core_debug_debug_nextpc", false,-1, 63,0);
        tracep->declBit(c+217,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+218,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+219,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+221,"SimTop my_core_top io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_if io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+7,"SimTop my_core_top my_if io_exc_br_exc_target", false,-1, 63,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop my_core_top my_if io_nextpc", false,-1, 63,0);
        tracep->declQuad(c+197,"SimTop my_core_top my_if io_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+12,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declBit(c+181,"SimTop my_core_top my_if my_imem_port clk", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_if my_imem_port reset", false,-1);
        tracep->declBit(c+224,"SimTop my_core_top my_if my_imem_port en", false,-1);
        tracep->declBit(c+225,"SimTop my_core_top my_if my_imem_port wr", false,-1);
        tracep->declQuad(c+12,"SimTop my_core_top my_if my_imem_port addr", false,-1, 63,0);
        tracep->declQuad(c+222,"SimTop my_core_top my_if my_imem_port rdata", false,-1, 63,0);
        tracep->declBit(c+181,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+22,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+26,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+27,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_id io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_id io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+35,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_id io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+181,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+39,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+11,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+41,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBus(c+18,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+24,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+26,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+27,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_id my_decoder io_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_id my_decoder io_exc_type", false,-1, 1,0);
        tracep->declBit(c+181,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+42,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+43,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+15,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+31,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+181,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+42,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+43,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+14,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+16,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+44+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+9,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 22,0);
        tracep->declBit(c+19,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+21,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+22,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+23,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+26,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+27,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+28,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+29,"SimTop my_core_top my_ex io_id2ex_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_ex io_id2ex_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+35,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_ex io_id2ex_csr_num", false,-1, 11,0);
        tracep->declBit(c+22,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+23,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+26,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+29,"SimTop my_core_top my_ex io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_ex io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+108,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_ex io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_ex io_ex2mem_rs1", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+110,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+112,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+113,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+116,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+18,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+118,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+120,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+121,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+122,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+126,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+129,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+131,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+132,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+133,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+22,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+23,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+24,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+26,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declBus(c+29,"SimTop my_core_top my_mem io_ex2mem_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_mem io_ex2mem_exc_type", false,-1, 1,0);
        tracep->declQuad(c+108,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_mem io_ex2mem_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_mem io_ex2mem_rs1", false,-1, 63,0);
        tracep->declBit(c+134,"SimTop my_core_top my_mem io_has_intr", false,-1);
        tracep->declBit(c+22,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_mem io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_mem io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_mem io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_mem io_mem2wb_rs1", false,-1, 63,0);
        tracep->declBit(c+137,"SimTop my_core_top my_mem io_data_mem_out_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_mem io_data_mem_out_wr", false,-1);
        tracep->declQuad(c+138,"SimTop my_core_top my_mem io_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_mem io_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+212,"SimTop my_core_top my_mem io_data_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+140,"SimTop my_core_top my_mem has_trap", false,-1);
        tracep->declQuad(c+138,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBus(c+141,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+142,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+143,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declBit(c+144,"SimTop my_core_top my_mem my_dmem_port en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_mem my_dmem_port wr", false,-1);
        tracep->declQuad(c+138,"SimTop my_core_top my_mem my_dmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_mem my_dmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+145,"SimTop my_core_top my_mem my_dmem_port wmask", false,-1, 7,0);
        tracep->declQuad(c+146,"SimTop my_core_top my_mem my_dmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+226,"SimTop my_core_top my_mem my_dmem_port tmprdata", false,-1, 63,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_wb io_pc", false,-1, 63,0);
        tracep->declBit(c+22,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_wb io_mem2wb_csr_op", false,-1, 2,0);
        tracep->declBus(c+30,"SimTop my_core_top my_wb io_mem2wb_exc_type", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBus(c+37,"SimTop my_core_top my_wb io_mem2wb_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_wb io_mem2wb_rs1", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop my_core_top my_wb io_csr_op_csr_old", false,-1, 63,0);
        tracep->declBit(c+134,"SimTop my_core_top my_wb io_csr_exc_intr_t", false,-1);
        tracep->declQuad(c+150,"SimTop my_core_top my_wb io_csr_exc_mret_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_wb io_csr_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+14,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+15,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_core_top my_wb io_exc_br_exc_br", false,-1);
        tracep->declQuad(c+7,"SimTop my_core_top my_wb io_exc_br_exc_target", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_core_top my_wb io_csr_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+37,"SimTop my_core_top my_wb io_csr_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_wb io_csr_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+154,"SimTop my_core_top my_wb io_csr_exc_ecall", false,-1);
        tracep->declBit(c+155,"SimTop my_core_top my_wb io_csr_exc_mret", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_wb io_csr_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop my_core_top my_wb io_csr_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_core_top my_wb has_trap", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_clint io_en", false,-1);
        tracep->declBit(c+25,"SimTop my_core_top my_clint io_wr", false,-1);
        tracep->declQuad(c+138,"SimTop my_core_top my_clint io_waddr", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop my_core_top my_clint io_wdata", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop my_core_top my_clint io_has_intr_t", false,-1);
        tracep->declQuad(c+159,"SimTop my_core_top my_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+161,"SimTop my_core_top my_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+163,"SimTop my_core_top my_clint unnamedblk1 wen", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_csr clock", false,-1);
        tracep->declBit(c+182,"SimTop my_core_top my_csr reset", false,-1);
        tracep->declBus(c+29,"SimTop my_core_top my_csr io_op_csr_op", false,-1, 2,0);
        tracep->declBus(c+37,"SimTop my_core_top my_csr io_op_csr_num", false,-1, 11,0);
        tracep->declQuad(c+31,"SimTop my_core_top my_csr io_op_csr_wdata", false,-1, 63,0);
        tracep->declBit(c+154,"SimTop my_core_top my_csr io_exc_ecall", false,-1);
        tracep->declBit(c+155,"SimTop my_core_top my_csr io_exc_mret", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_csr io_exc_epc", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop my_core_top my_csr io_exc_exc_code", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop my_core_top my_csr io_clint_intr_t", false,-1);
        tracep->declQuad(c+148,"SimTop my_core_top my_csr io_op_csr_old", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_csr io_out_mtvec", false,-1, 63,0);
        tracep->declBit(c+134,"SimTop my_core_top my_csr io_exc_intr_t", false,-1);
        tracep->declQuad(c+150,"SimTop my_core_top my_csr io_exc_mret_addr", false,-1, 63,0);
        tracep->declBus(c+164,"SimTop my_core_top my_csr mstatus_sxl", false,-1, 1,0);
        tracep->declBus(c+165,"SimTop my_core_top my_csr mstatus_uxl", false,-1, 1,0);
        tracep->declBus(c+166,"SimTop my_core_top my_csr mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+167,"SimTop my_core_top my_csr mstatus_mie", false,-1);
        tracep->declBit(c+168,"SimTop my_core_top my_csr mstatus_mpie", false,-1);
        tracep->declQuad(c+169,"SimTop my_core_top my_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+171,"SimTop my_core_top my_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+173,"SimTop my_core_top my_csr mtvec", false,-1, 63,0);
        tracep->declQuad(c+175,"SimTop my_core_top my_csr mip", false,-1, 63,0);
        tracep->declQuad(c+177,"SimTop my_core_top my_csr mie", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_csr mtvec_rval", false,-1, 63,0);
        tracep->declQuad(c+179,"SimTop my_core_top my_csr mepc_rval", false,-1, 63,0);
        tracep->declBit(c+134,"SimTop my_core_top my_csr has_intr_t", false,-1);
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
        tracep->fullBit(oldp+6,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
        tracep->fullQData(oldp+7,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
        tracep->fullQData(oldp+9,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullIData(oldp+11,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullQData(oldp+12,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
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
        tracep->fullBit(oldp+22,((((((0x37U == (0x7fU 
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
        tracep->fullBit(oldp+23,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en));
        tracep->fullBit(oldp+25,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+27,(((((((((((((((((0x37U 
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
        tracep->fullCData(oldp+28,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullCData(oldp+29,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
        tracep->fullCData(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
        tracep->fullQData(oldp+31,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
        tracep->fullQData(oldp+33,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+35,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullSData(oldp+37,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+38,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+39,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+43,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+120,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+121,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
        tracep->fullWData(oldp+122,(__Vtemp48),127);
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
        tracep->fullWData(oldp+126,(__Vtemp53),65);
        tracep->fullQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullBit(oldp+134,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
        tracep->fullQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullBit(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_out_en));
        tracep->fullQData(oldp+138,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullBit(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__has_trap));
        tracep->fullCData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullBit(oldp+144,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT____Vcellinp__my_dmem_port__en));
        tracep->fullCData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10),8);
        tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata),64);
        tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
        tracep->fullQData(oldp+150,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                    >> 0x3fU)))
                                      ? (0xfffffffffffffffcULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                      : (4ULL + (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
        tracep->fullQData(oldp+152,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
        tracep->fullBit(oldp+154,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
        tracep->fullBit(oldp+155,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+156,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullBit(oldp+158,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                   >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
        tracep->fullQData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
        tracep->fullQData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
        tracep->fullCData(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
        tracep->fullCData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
        tracep->fullCData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
        tracep->fullQData(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
        tracep->fullQData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
        tracep->fullQData(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+175,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
        tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
        tracep->fullQData(oldp+179,((0xfffffffffffffffcULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
        tracep->fullBit(oldp+181,(vlSelf->clock));
        tracep->fullBit(oldp+182,(vlSelf->reset));
        tracep->fullQData(oldp+183,(vlSelf->io_core_inst_mem_in_rdata),64);
        tracep->fullQData(oldp+185,(vlSelf->io_core_inst_mem_in_rvalid),64);
        tracep->fullQData(oldp+187,(vlSelf->io_core_inst_mem_in_wvalid),64);
        tracep->fullQData(oldp+189,(vlSelf->io_core_data_mem_in_rdata),64);
        tracep->fullQData(oldp+191,(vlSelf->io_core_data_mem_in_rvalid),64);
        tracep->fullQData(oldp+193,(vlSelf->io_core_data_mem_in_wvalid),64);
        tracep->fullBit(oldp+195,(vlSelf->io_core_inst_mem_out_en));
        tracep->fullBit(oldp+196,(vlSelf->io_core_inst_mem_out_wr));
        tracep->fullQData(oldp+197,(vlSelf->io_core_inst_mem_out_addr),64);
        tracep->fullBit(oldp+199,(vlSelf->io_core_inst_mem_out_rready));
        tracep->fullBit(oldp+200,(vlSelf->io_core_inst_mem_out_wready));
        tracep->fullQData(oldp+201,(vlSelf->io_core_inst_mem_out_wdata),64);
        tracep->fullCData(oldp+203,(vlSelf->io_core_inst_mem_out_wmask),8);
        tracep->fullBit(oldp+204,(vlSelf->io_core_data_mem_out_en));
        tracep->fullBit(oldp+205,(vlSelf->io_core_data_mem_out_wr));
        tracep->fullQData(oldp+206,(vlSelf->io_core_data_mem_out_addr),64);
        tracep->fullBit(oldp+208,(vlSelf->io_core_data_mem_out_rready));
        tracep->fullBit(oldp+209,(vlSelf->io_core_data_mem_out_wready));
        tracep->fullQData(oldp+210,(vlSelf->io_core_data_mem_out_wdata),64);
        tracep->fullCData(oldp+212,(vlSelf->io_core_data_mem_out_wmask),8);
        tracep->fullQData(oldp+213,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullQData(oldp+215,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->fullBit(oldp+217,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+218,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+219,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+221,(vlSelf->io_core_debug_raise_intr));
        tracep->fullQData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata),64);
        tracep->fullBit(oldp+224,(1U));
        tracep->fullBit(oldp+225,(0U));
        tracep->fullQData(oldp+226,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__tmprdata),64);
    }
}

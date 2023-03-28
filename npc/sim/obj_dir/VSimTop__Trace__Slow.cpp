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
        tracep->declBit(c+136,"clock", false,-1);
        tracep->declBit(c+137,"reset", false,-1);
        tracep->declQuad(c+138,"io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+140,"io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+142,"io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+144,"io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+146,"io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+148,"io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+150,"io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+151,"io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+152,"io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+154,"io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+155,"io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+156,"io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+158,"io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+159,"io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+160,"io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+161,"io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+163,"io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+164,"io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+165,"io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+167,"io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+168,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+170,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+171,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+172,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop clock", false,-1);
        tracep->declBit(c+137,"SimTop reset", false,-1);
        tracep->declQuad(c+138,"SimTop io_core_inst_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+140,"SimTop io_core_inst_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop io_core_inst_mem_in_wvalid", false,-1, 63,0);
        tracep->declQuad(c+144,"SimTop io_core_data_mem_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop io_core_data_mem_in_rvalid", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop io_core_data_mem_in_wvalid", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop io_core_inst_mem_out_en", false,-1);
        tracep->declBit(c+151,"SimTop io_core_inst_mem_out_wr", false,-1);
        tracep->declQuad(c+152,"SimTop io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+154,"SimTop io_core_inst_mem_out_rready", false,-1);
        tracep->declBit(c+155,"SimTop io_core_inst_mem_out_wready", false,-1);
        tracep->declQuad(c+156,"SimTop io_core_inst_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+158,"SimTop io_core_inst_mem_out_wmask", false,-1, 7,0);
        tracep->declBit(c+159,"SimTop io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+160,"SimTop io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+161,"SimTop io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+163,"SimTop io_core_data_mem_out_rready", false,-1);
        tracep->declBit(c+164,"SimTop io_core_data_mem_out_wready", false,-1);
        tracep->declQuad(c+165,"SimTop io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+167,"SimTop io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+170,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+171,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top reset", false,-1);
        tracep->declQuad(c+152,"SimTop my_core_top io_core_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBit(c+159,"SimTop my_core_top io_core_data_mem_out_en", false,-1);
        tracep->declBit(c+160,"SimTop my_core_top io_core_data_mem_out_wr", false,-1);
        tracep->declQuad(c+161,"SimTop my_core_top io_core_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+165,"SimTop my_core_top io_core_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+167,"SimTop my_core_top io_core_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+168,"SimTop my_core_top io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+170,"SimTop my_core_top io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+171,"SimTop my_core_top io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+172,"SimTop my_core_top io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_if reset", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_if io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_if io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_if io_branch_br_en", false,-1);
        tracep->declQuad(c+6,"SimTop my_core_top my_if io_pc", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop my_core_top my_if io_inst_mem_out_addr", false,-1, 63,0);
        tracep->declBus(c+8,"SimTop my_core_top my_if io_if2id_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+9,"SimTop my_core_top my_if nextpc", false,-1, 63,0);
        tracep->declBus(c+8,"SimTop my_core_top my_if inst", false,-1, 31,0);
        tracep->declBit(c+136,"SimTop my_core_top my_if my_imem_port clk", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_if my_imem_port reset", false,-1);
        tracep->declBit(c+176,"SimTop my_core_top my_if my_imem_port en", false,-1);
        tracep->declBit(c+177,"SimTop my_core_top my_if my_imem_port wr", false,-1);
        tracep->declQuad(c+9,"SimTop my_core_top my_if my_imem_port addr", false,-1, 63,0);
        tracep->declQuad(c+174,"SimTop my_core_top my_if my_imem_port rdata", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_id reset", false,-1);
        tracep->declQuad(c+6,"SimTop my_core_top my_id io_pc", false,-1, 63,0);
        tracep->declBus(c+8,"SimTop my_core_top my_id io_if2id_inst", false,-1, 31,0);
        tracep->declBit(c+11,"SimTop my_core_top my_id io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_id io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_id io_wb2rf_wdata", false,-1, 63,0);
        tracep->declBus(c+15,"SimTop my_core_top my_id io_id2ex_alu_op", false,-1, 24,0);
        tracep->declBit(c+16,"SimTop my_core_top my_id io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top my_id io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+18,"SimTop my_core_top my_id io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+11,"SimTop my_core_top my_id io_id2ex_gr_we", false,-1);
        tracep->declBit(c+19,"SimTop my_core_top my_id io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_id io_id2ex_mem_en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_id io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+22,"SimTop my_core_top my_id io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+23,"SimTop my_core_top my_id io_id2ex_rv64w", false,-1);
        tracep->declBus(c+24,"SimTop my_core_top my_id io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+12,"SimTop my_core_top my_id io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+6,"SimTop my_core_top my_id io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+25,"SimTop my_core_top my_id io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_id io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+29,"SimTop my_core_top my_id io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_id io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+31,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+32,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+8,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+34,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 5,0);
        tracep->declBus(c+35,"SimTop my_core_top my_id my_decoder io_alu_op", false,-1, 22,0);
        tracep->declBit(c+16,"SimTop my_core_top my_id my_decoder io_src1_sel", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top my_id my_decoder io_src2_sel", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_id my_decoder io_rf_we", false,-1);
        tracep->declBit(c+19,"SimTop my_core_top my_id my_decoder io_wb_sel", false,-1);
        tracep->declBus(c+18,"SimTop my_core_top my_id my_decoder io_br_type", false,-1, 8,0);
        tracep->declBit(c+20,"SimTop my_core_top my_id my_decoder io_mem_en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_id my_decoder io_mem_wr", false,-1);
        tracep->declBus(c+22,"SimTop my_core_top my_id my_decoder io_mem_type", false,-1, 6,0);
        tracep->declBit(c+23,"SimTop my_core_top my_id my_decoder io_rv64w", false,-1);
        tracep->declBus(c+24,"SimTop my_core_top my_id my_decoder io_ex_sel", false,-1, 2,0);
        tracep->declBit(c+136,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+36,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+37,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBus(c+12,"SimTop my_core_top my_id my_rf io_waddr", false,-1, 4,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_id my_rf io_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"SimTop my_core_top my_id my_rf io_wen", false,-1);
        tracep->declQuad(c+25,"SimTop my_core_top my_id my_rf io_rdata1", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_id my_rf io_rdata2", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+36,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+37,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+11,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+13,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+25,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+38+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declQuad(c+6,"SimTop my_core_top my_ex io_pc", false,-1, 63,0);
        tracep->declBus(c+15,"SimTop my_core_top my_ex io_id2ex_alu_op", false,-1, 24,0);
        tracep->declBit(c+16,"SimTop my_core_top my_ex io_id2ex_src1_sel", false,-1);
        tracep->declBit(c+17,"SimTop my_core_top my_ex io_id2ex_src2_sel", false,-1);
        tracep->declBus(c+18,"SimTop my_core_top my_ex io_id2ex_br_type", false,-1, 8,0);
        tracep->declBit(c+11,"SimTop my_core_top my_ex io_id2ex_gr_we", false,-1);
        tracep->declBit(c+19,"SimTop my_core_top my_ex io_id2ex_wb_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_ex io_id2ex_mem_en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_ex io_id2ex_mem_wr", false,-1);
        tracep->declBus(c+22,"SimTop my_core_top my_ex io_id2ex_mem_type", false,-1, 6,0);
        tracep->declBit(c+23,"SimTop my_core_top my_ex io_id2ex_rv64w", false,-1);
        tracep->declBus(c+24,"SimTop my_core_top my_ex io_id2ex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+12,"SimTop my_core_top my_ex io_id2ex_dest", false,-1, 4,0);
        tracep->declQuad(c+6,"SimTop my_core_top my_ex io_id2ex_pc", false,-1, 63,0);
        tracep->declQuad(c+25,"SimTop my_core_top my_ex io_id2ex_rs1", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_ex io_id2ex_rs2", false,-1, 63,0);
        tracep->declQuad(c+29,"SimTop my_core_top my_ex io_id2ex_imm", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_ex io_id2ex_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"SimTop my_core_top my_ex io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_ex io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+19,"SimTop my_core_top my_ex io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_ex io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_ex io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+22,"SimTop my_core_top my_ex io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_ex io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_ex io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex io_branch_pc_seq", false,-1, 63,0);
        tracep->declQuad(c+3,"SimTop my_core_top my_ex io_branch_br_target", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_ex io_branch_br_en", false,-1);
        tracep->declQuad(c+104,"SimTop my_core_top my_ex alu_res", false,-1, 63,0);
        tracep->declBit(c+106,"SimTop my_core_top my_ex s1_lt_s2", false,-1);
        tracep->declBit(c+107,"SimTop my_core_top my_ex is_jal", false,-1);
        tracep->declQuad(c+1,"SimTop my_core_top my_ex pc_seq", false,-1, 63,0);
        tracep->declQuad(c+108,"SimTop my_core_top my_ex my_alu io_src1", false,-1, 63,0);
        tracep->declQuad(c+110,"SimTop my_core_top my_ex my_alu io_src2", false,-1, 63,0);
        tracep->declBus(c+35,"SimTop my_core_top my_ex my_alu io_alu_op", false,-1, 22,0);
        tracep->declQuad(c+112,"SimTop my_core_top my_ex my_alu io_res", false,-1, 63,0);
        tracep->declBit(c+114,"SimTop my_core_top my_ex my_alu io_cout", false,-1);
        tracep->declBit(c+115,"SimTop my_core_top my_ex my_alu io_overflow", false,-1);
        tracep->declArray(c+116,"SimTop my_core_top my_ex my_alu sll", false,-1, 126,0);
        tracep->declArray(c+120,"SimTop my_core_top my_ex my_alu div_res", false,-1, 64,0);
        tracep->declQuad(c+123,"SimTop my_core_top my_ex my_alu divw_res", false,-1, 32,0);
        tracep->declBus(c+125,"SimTop my_core_top my_ex my_alu divuw_res", false,-1, 31,0);
        tracep->declBus(c+126,"SimTop my_core_top my_ex my_alu remw_res", false,-1, 31,0);
        tracep->declBus(c+127,"SimTop my_core_top my_ex my_alu remuw_res", false,-1, 31,0);
        tracep->declBit(c+11,"SimTop my_core_top my_mem io_ex2mem_gr_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_mem io_ex2mem_dest", false,-1, 4,0);
        tracep->declBit(c+19,"SimTop my_core_top my_mem io_ex2mem_wb_sel", false,-1);
        tracep->declBit(c+20,"SimTop my_core_top my_mem io_ex2mem_mem_en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_mem io_ex2mem_mem_wr", false,-1);
        tracep->declBus(c+22,"SimTop my_core_top my_mem io_ex2mem_mem_type", false,-1, 6,0);
        tracep->declQuad(c+102,"SimTop my_core_top my_mem io_ex2mem_result", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_mem io_ex2mem_mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_mem io_mem2wb_result", false,-1, 63,0);
        tracep->declBit(c+11,"SimTop my_core_top my_mem io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_mem io_mem2wb_dest", false,-1, 4,0);
        tracep->declBit(c+159,"SimTop my_core_top my_mem io_data_mem_out_en", false,-1);
        tracep->declBit(c+160,"SimTop my_core_top my_mem io_data_mem_out_wr", false,-1);
        tracep->declQuad(c+161,"SimTop my_core_top my_mem io_data_mem_out_addr", false,-1, 63,0);
        tracep->declQuad(c+165,"SimTop my_core_top my_mem io_data_mem_out_wdata", false,-1, 63,0);
        tracep->declBus(c+167,"SimTop my_core_top my_mem io_data_mem_out_wmask", false,-1, 7,0);
        tracep->declQuad(c+128,"SimTop my_core_top my_mem maddr", false,-1, 63,0);
        tracep->declBus(c+130,"SimTop my_core_top my_mem rdata_b", false,-1, 7,0);
        tracep->declBus(c+131,"SimTop my_core_top my_mem rdata_h", false,-1, 15,0);
        tracep->declBus(c+132,"SimTop my_core_top my_mem rdata_w", false,-1, 31,0);
        tracep->declBit(c+20,"SimTop my_core_top my_mem my_dmem_port en", false,-1);
        tracep->declBit(c+21,"SimTop my_core_top my_mem my_dmem_port wr", false,-1);
        tracep->declQuad(c+128,"SimTop my_core_top my_mem my_dmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop my_core_top my_mem my_dmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+133,"SimTop my_core_top my_mem my_dmem_port wmask", false,-1, 7,0);
        tracep->declQuad(c+134,"SimTop my_core_top my_mem my_dmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"SimTop my_core_top my_mem my_dmem_port tmprdata", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_wb io_mem2wb_result", false,-1, 63,0);
        tracep->declBit(c+11,"SimTop my_core_top my_wb io_mem2wb_gr_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_wb io_mem2wb_dest", false,-1, 4,0);
        tracep->declBit(c+11,"SimTop my_core_top my_wb io_wb2rf_rf_we", false,-1);
        tracep->declBus(c+12,"SimTop my_core_top my_wb io_wb2rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+13,"SimTop my_core_top my_wb io_wb2rf_wdata", false,-1, 63,0);
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
        tracep->fullQData(oldp+6,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullIData(oldp+8,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
        tracep->fullQData(oldp+9,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
        tracep->fullBit(oldp+11,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we));
        tracep->fullCData(oldp+12,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
        tracep->fullIData(oldp+15,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_alu_op),25);
        tracep->fullBit(oldp+16,(((0x37U != (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                  & ((0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
        tracep->fullBit(oldp+17,((((0x37U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
        tracep->fullSData(oldp+18,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
        tracep->fullBit(oldp+19,((((((((((((0x37U != 
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
        tracep->fullBit(oldp+20,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en));
        tracep->fullBit(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
        tracep->fullCData(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
        tracep->fullBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rv64w));
        tracep->fullCData(oldp+24,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
        tracep->fullQData(oldp+25,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1))
                                     ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                    [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1])),64);
        tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
        tracep->fullQData(oldp+29,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
        tracep->fullBit(oldp+31,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+32,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
        tracep->fullCData(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),6);
        tracep->fullIData(oldp+35,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_alu_op),23);
        tracep->fullCData(oldp+36,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+37,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
        tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
        tracep->fullBit(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
        tracep->fullBit(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
        tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
        tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
        tracep->fullBit(oldp+114,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
        tracep->fullBit(oldp+115,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_alu_op)
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
        tracep->fullWData(oldp+116,(__Vtemp48),127);
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
        tracep->fullWData(oldp+120,(__Vtemp53),65);
        tracep->fullQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
        tracep->fullIData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
        tracep->fullIData(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
        tracep->fullIData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
        tracep->fullQData(oldp+128,((0xfffffffffffffff8ULL 
                                     & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
        tracep->fullCData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
        tracep->fullSData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
        tracep->fullIData(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
        tracep->fullCData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10),8);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata),64);
        tracep->fullBit(oldp+136,(vlSelf->clock));
        tracep->fullBit(oldp+137,(vlSelf->reset));
        tracep->fullQData(oldp+138,(vlSelf->io_core_inst_mem_in_rdata),64);
        tracep->fullQData(oldp+140,(vlSelf->io_core_inst_mem_in_rvalid),64);
        tracep->fullQData(oldp+142,(vlSelf->io_core_inst_mem_in_wvalid),64);
        tracep->fullQData(oldp+144,(vlSelf->io_core_data_mem_in_rdata),64);
        tracep->fullQData(oldp+146,(vlSelf->io_core_data_mem_in_rvalid),64);
        tracep->fullQData(oldp+148,(vlSelf->io_core_data_mem_in_wvalid),64);
        tracep->fullBit(oldp+150,(vlSelf->io_core_inst_mem_out_en));
        tracep->fullBit(oldp+151,(vlSelf->io_core_inst_mem_out_wr));
        tracep->fullQData(oldp+152,(vlSelf->io_core_inst_mem_out_addr),64);
        tracep->fullBit(oldp+154,(vlSelf->io_core_inst_mem_out_rready));
        tracep->fullBit(oldp+155,(vlSelf->io_core_inst_mem_out_wready));
        tracep->fullQData(oldp+156,(vlSelf->io_core_inst_mem_out_wdata),64);
        tracep->fullCData(oldp+158,(vlSelf->io_core_inst_mem_out_wmask),8);
        tracep->fullBit(oldp+159,(vlSelf->io_core_data_mem_out_en));
        tracep->fullBit(oldp+160,(vlSelf->io_core_data_mem_out_wr));
        tracep->fullQData(oldp+161,(vlSelf->io_core_data_mem_out_addr),64);
        tracep->fullBit(oldp+163,(vlSelf->io_core_data_mem_out_rready));
        tracep->fullBit(oldp+164,(vlSelf->io_core_data_mem_out_wready));
        tracep->fullQData(oldp+165,(vlSelf->io_core_data_mem_out_wdata),64);
        tracep->fullCData(oldp+167,(vlSelf->io_core_data_mem_out_wmask),8);
        tracep->fullQData(oldp+168,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullBit(oldp+170,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+171,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+172,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata),64);
        tracep->fullBit(oldp+176,(1U));
        tracep->fullBit(oldp+177,(0U));
        tracep->fullQData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__tmprdata),64);
    }
}

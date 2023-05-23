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
        tracep->declBit(c+432,"clock", false,-1);
        tracep->declBit(c+433,"reset", false,-1);
        tracep->declQuad(c+434,"io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+436,"io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+437,"io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+438,"io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+440,"io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+432,"SimTop clock", false,-1);
        tracep->declBit(c+433,"SimTop reset", false,-1);
        tracep->declQuad(c+434,"SimTop io_core_debug_debug_pc", false,-1, 63,0);
        tracep->declBit(c+436,"SimTop io_core_debug_debug_rf_we", false,-1);
        tracep->declBus(c+437,"SimTop io_core_debug_debug_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+438,"SimTop io_core_debug_debug_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+440,"SimTop io_core_debug_raise_intr", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top reset", false,-1);
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
        tracep->declBit(c+432,"SimTop my_core_top my_if clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_if reset", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_if io_inst_mem_req_ready", false,-1);
        tracep->declQuad(c+39,"SimTop my_core_top my_if io_inst_mem_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+41,"SimTop my_core_top my_if io_inst_mem_ret_valid", false,-1);
        tracep->declBit(c+42,"SimTop my_core_top my_if io_if2id_ready", false,-1);
        tracep->declBit(c+43,"SimTop my_core_top my_if io_inst_mem_req_valid", false,-1);
        tracep->declQuad(c+44,"SimTop my_core_top my_if io_inst_mem_req_bits_addr", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_if io_inst_mem_req_bits_mthrough", false,-1);
        tracep->declBit(c+47,"SimTop my_core_top my_if io_if2id_valid", false,-1);
        tracep->declBus(c+48,"SimTop my_core_top my_if io_if2id_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+49,"SimTop my_core_top my_if pc", false,-1, 63,0);
        tracep->declBit(c+51,"SimTop my_core_top my_if fs_wait_r", false,-1);
        tracep->declBus(c+52,"SimTop my_core_top my_if fs_state", false,-1, 5,0);
        tracep->declQuad(c+53,"SimTop my_core_top my_if rdata_buf", false,-1, 63,0);
        tracep->declBit(c+55,"SimTop my_core_top my_if fs_mem_ok", false,-1);
        tracep->declQuad(c+56,"SimTop my_core_top my_if fs_inst_data", false,-1, 63,0);
        tracep->declQuad(c+44,"SimTop my_core_top my_if mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_if mm io_mthrough", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_id clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_id reset", false,-1);
        tracep->declBit(c+47,"SimTop my_core_top my_id io_if2id_valid", false,-1);
        tracep->declBus(c+48,"SimTop my_core_top my_id io_if2id_bits_inst", false,-1, 31,0);
        tracep->declBit(c+58,"SimTop my_core_top my_id io_id2ex_ready", false,-1);
        tracep->declBit(c+42,"SimTop my_core_top my_id io_if2id_ready", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_id io_id2ex_valid", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_id ds_valid", false,-1);
        tracep->declBus(c+60,"SimTop my_core_top my_id fs_ds_r_inst", false,-1, 31,0);
        tracep->declBit(c+432,"SimTop my_core_top my_id my_inst_monitor clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_id my_inst_monitor reset", false,-1);
        tracep->declBit(c+61,"SimTop my_core_top my_id my_inst_monitor inst_ebreak", false,-1);
        tracep->declQuad(c+62,"SimTop my_core_top my_id my_inst_monitor inst", false,-1, 63,0);
        tracep->declBus(c+60,"SimTop my_core_top my_id my_decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+64,"SimTop my_core_top my_id my_decoder io_inst_type", false,-1, 6,0);
        tracep->declBit(c+432,"SimTop my_core_top my_id my_rf clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_id my_rf reset", false,-1);
        tracep->declBus(c+65,"SimTop my_core_top my_id my_rf io_raddr1", false,-1, 4,0);
        tracep->declBus(c+66,"SimTop my_core_top my_id my_rf io_raddr2", false,-1, 4,0);
        tracep->declBit(c+432,"SimTop my_core_top my_id my_rf my_gpr clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_id my_rf my_gpr reset", false,-1);
        tracep->declBus(c+441,"SimTop my_core_top my_id my_rf my_gpr waddr", false,-1, 4,0);
        tracep->declBus(c+65,"SimTop my_core_top my_id my_rf my_gpr raddr1", false,-1, 4,0);
        tracep->declBus(c+66,"SimTop my_core_top my_id my_rf my_gpr raddr2", false,-1, 4,0);
        tracep->declBit(c+442,"SimTop my_core_top my_id my_rf my_gpr wen", false,-1);
        tracep->declQuad(c+443,"SimTop my_core_top my_id my_rf my_gpr wdata", false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop my_core_top my_id my_rf my_gpr rdata1", false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop my_core_top my_id my_rf my_gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+445+i*2,"SimTop my_core_top my_id my_rf my_gpr reg_file", true,(i+0), 63,0);}}
        tracep->declBit(c+432,"SimTop my_core_top my_ex clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_ex reset", false,-1);
        tracep->declBit(c+59,"SimTop my_core_top my_ex io_id2ex_valid", false,-1);
        tracep->declBit(c+58,"SimTop my_core_top my_ex io_id2ex_ready", false,-1);
        tracep->declBit(c+71,"SimTop my_core_top my_ex es_valid", false,-1);
        tracep->declBit(c+509,"SimTop my_core_top my_mem io_data_mem_req_bits_mthrough", false,-1);
        tracep->declQuad(c+443,"SimTop my_core_top my_mem mm io_addr_in", false,-1, 63,0);
        tracep->declBit(c+509,"SimTop my_core_top my_mem mm io_mthrough", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_axi_bridge0 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_axi_bridge0 reset", false,-1);
        tracep->declBit(c+72,"SimTop my_core_top my_axi_bridge0 io_in_req_valid", false,-1);
        tracep->declBit(c+73,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+74,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+78,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+79,"SimTop my_core_top my_axi_bridge0 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+1,"SimTop my_core_top my_axi_bridge0 io_out_ar_ready", false,-1);
        tracep->declBit(c+2,"SimTop my_core_top my_axi_bridge0 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge0 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_core_top my_axi_bridge0 io_out_aw_ready", false,-1);
        tracep->declBit(c+7,"SimTop my_core_top my_axi_bridge0 io_out_wt_ready", false,-1);
        tracep->declBit(c+8,"SimTop my_core_top my_axi_bridge0 io_out_b_valid", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_axi_bridge0 io_in_req_ready", false,-1);
        tracep->declQuad(c+81,"SimTop my_core_top my_axi_bridge0 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"SimTop my_core_top my_axi_bridge0 io_in_ret_valid", false,-1);
        tracep->declBit(c+84,"SimTop my_core_top my_axi_bridge0 io_in_rlast", false,-1);
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
        tracep->declBus(c+85,"SimTop my_core_top my_axi_bridge0 state", false,-1, 3,0);
        tracep->declBit(c+86,"SimTop my_core_top my_axi_bridge0 rd_widx", false,-1);
        tracep->declBit(c+87,"SimTop my_core_top my_axi_bridge0 rd_after_wt_r", false,-1);
        tracep->declArray(c+88,"SimTop my_core_top my_axi_bridge0 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+92,"SimTop my_core_top my_axi_bridge0 wtag_r", false,-1, 59,0);
        tracep->declBus(c+23,"SimTop my_core_top my_axi_bridge0 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+94,"SimTop my_core_top my_axi_bridge0 wt_widx", false,-1);
        tracep->declBit(c+95,"SimTop my_core_top my_axi_bridge0 burst_cnt", false,-1);
        tracep->declBus(c+96,"SimTop my_core_top my_axi_bridge0 burst_len", false,-1, 7,0);
        tracep->declBit(c+97,"SimTop my_core_top my_axi_bridge0 rd_after_wt", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_axi_bridge1 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_axi_bridge1 reset", false,-1);
        tracep->declBit(c+98,"SimTop my_core_top my_axi_bridge1 io_in_req_valid", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+100,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+104,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+105,"SimTop my_core_top my_axi_bridge1 io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+9,"SimTop my_core_top my_axi_bridge1 io_out_ar_ready", false,-1);
        tracep->declBit(c+10,"SimTop my_core_top my_axi_bridge1 io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_core_top my_axi_bridge1 io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+11,"SimTop my_core_top my_axi_bridge1 io_out_aw_ready", false,-1);
        tracep->declBit(c+12,"SimTop my_core_top my_axi_bridge1 io_out_wt_ready", false,-1);
        tracep->declBit(c+13,"SimTop my_core_top my_axi_bridge1 io_out_b_valid", false,-1);
        tracep->declBit(c+106,"SimTop my_core_top my_axi_bridge1 io_in_req_ready", false,-1);
        tracep->declQuad(c+107,"SimTop my_core_top my_axi_bridge1 io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+109,"SimTop my_core_top my_axi_bridge1 io_in_ret_valid", false,-1);
        tracep->declBit(c+110,"SimTop my_core_top my_axi_bridge1 io_in_rlast", false,-1);
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
        tracep->declBus(c+111,"SimTop my_core_top my_axi_bridge1 state", false,-1, 3,0);
        tracep->declBit(c+112,"SimTop my_core_top my_axi_bridge1 rd_widx", false,-1);
        tracep->declBit(c+113,"SimTop my_core_top my_axi_bridge1 rd_after_wt_r", false,-1);
        tracep->declArray(c+114,"SimTop my_core_top my_axi_bridge1 wdata_r", false,-1, 127,0);
        tracep->declQuad(c+118,"SimTop my_core_top my_axi_bridge1 wtag_r", false,-1, 59,0);
        tracep->declBus(c+35,"SimTop my_core_top my_axi_bridge1 wstrb_r", false,-1, 7,0);
        tracep->declBit(c+120,"SimTop my_core_top my_axi_bridge1 wt_widx", false,-1);
        tracep->declBit(c+121,"SimTop my_core_top my_axi_bridge1 burst_cnt", false,-1);
        tracep->declBus(c+122,"SimTop my_core_top my_axi_bridge1 burst_len", false,-1, 7,0);
        tracep->declBit(c+123,"SimTop my_core_top my_axi_bridge1 rd_after_wt", false,-1);
        tracep->declBit(c+124,"SimTop my_core_top my_mmc io_in_req_valid", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_mmc io_in_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_in_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+100,"SimTop my_core_top my_mmc io_in_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+104,"SimTop my_core_top my_mmc io_in_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+105,"SimTop my_core_top my_mmc io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+125,"SimTop my_core_top my_mmc io_clint_out_clint_hit", false,-1);
        tracep->declBit(c+126,"SimTop my_core_top my_mmc io_clint_out_ret_valid", false,-1);
        tracep->declBit(c+106,"SimTop my_core_top my_mmc io_axi_out_req_ready", false,-1);
        tracep->declQuad(c+107,"SimTop my_core_top my_mmc io_axi_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+109,"SimTop my_core_top my_mmc io_axi_out_ret_valid", false,-1);
        tracep->declBit(c+110,"SimTop my_core_top my_mmc io_axi_out_rlast", false,-1);
        tracep->declBit(c+127,"SimTop my_core_top my_mmc io_in_req_ready", false,-1);
        tracep->declQuad(c+107,"SimTop my_core_top my_mmc io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+128,"SimTop my_core_top my_mmc io_in_ret_valid", false,-1);
        tracep->declBit(c+129,"SimTop my_core_top my_mmc io_in_rlast", false,-1);
        tracep->declBit(c+130,"SimTop my_core_top my_mmc io_clint_out_en", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_mmc io_clint_out_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_clint_out_addr", false,-1, 63,0);
        tracep->declBit(c+98,"SimTop my_core_top my_mmc io_axi_out_req_valid", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_mmc io_axi_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_mmc io_axi_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+100,"SimTop my_core_top my_mmc io_axi_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+104,"SimTop my_core_top my_mmc io_axi_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+105,"SimTop my_core_top my_mmc io_axi_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_icache clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache reset", false,-1);
        tracep->declBit(c+43,"SimTop my_core_top my_icache io_in_req_valid", false,-1);
        tracep->declQuad(c+44,"SimTop my_core_top my_icache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_icache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+80,"SimTop my_core_top my_icache io_out_req_ready", false,-1);
        tracep->declQuad(c+81,"SimTop my_core_top my_icache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"SimTop my_core_top my_icache io_out_ret_valid", false,-1);
        tracep->declBit(c+84,"SimTop my_core_top my_icache io_out_rlast", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_icache io_in_req_ready", false,-1);
        tracep->declQuad(c+39,"SimTop my_core_top my_icache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+41,"SimTop my_core_top my_icache io_in_ret_valid", false,-1);
        tracep->declBit(c+72,"SimTop my_core_top my_icache io_out_req_valid", false,-1);
        tracep->declBit(c+73,"SimTop my_core_top my_icache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+74,"SimTop my_core_top my_icache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+78,"SimTop my_core_top my_icache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+79,"SimTop my_core_top my_icache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+131,"SimTop my_core_top my_icache cache_addr", false,-1, 5,0);
        tracep->declBit(c+43,"SimTop my_core_top my_icache stage1 io_cpu_valid", false,-1);
        tracep->declQuad(c+44,"SimTop my_core_top my_icache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declBit(c+46,"SimTop my_core_top my_icache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+132,"SimTop my_core_top my_icache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_icache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+38,"SimTop my_core_top my_icache stage1 io_rd_en", false,-1);
        tracep->declBus(c+133,"SimTop my_core_top my_icache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+43,"SimTop my_core_top my_icache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+134,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+133,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+135,"SimTop my_core_top my_icache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache stage2 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache stage2 reset", false,-1);
        tracep->declBit(c+43,"SimTop my_core_top my_icache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+46,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+134,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+133,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+135,"SimTop my_core_top my_icache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+136,"SimTop my_core_top my_icache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_icache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+138,"SimTop my_core_top my_icache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+139,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop my_core_top my_icache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+143,"SimTop my_core_top my_icache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_icache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+145,"SimTop my_core_top my_icache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+146,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop my_core_top my_icache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+150,"SimTop my_core_top my_icache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_icache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+152,"SimTop my_core_top my_icache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+153,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+155,"SimTop my_core_top my_icache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+157,"SimTop my_core_top my_icache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+158,"SimTop my_core_top my_icache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+159,"SimTop my_core_top my_icache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+160,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop my_core_top my_icache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+132,"SimTop my_core_top my_icache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+132,"SimTop my_core_top my_icache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+164,"SimTop my_core_top my_icache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+165,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+166,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+167,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+168,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+169,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+170,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+171,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+172,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+173,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+174,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+176,"SimTop my_core_top my_icache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+164,"SimTop my_core_top my_icache stage2 s2_valid", false,-1);
        tracep->declBit(c+165,"SimTop my_core_top my_icache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+166,"SimTop my_core_top my_icache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+167,"SimTop my_core_top my_icache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+168,"SimTop my_core_top my_icache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+178,"SimTop my_core_top my_icache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+179,"SimTop my_core_top my_icache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+180,"SimTop my_core_top my_icache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache stage3 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache stage3 reset", false,-1);
        tracep->declBit(c+164,"SimTop my_core_top my_icache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+165,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+166,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+167,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+168,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+169,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+170,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+171,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+172,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+173,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+174,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+176,"SimTop my_core_top my_icache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+80,"SimTop my_core_top my_icache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+81,"SimTop my_core_top my_icache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"SimTop my_core_top my_icache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+84,"SimTop my_core_top my_icache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+39,"SimTop my_core_top my_icache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+41,"SimTop my_core_top my_icache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+132,"SimTop my_core_top my_icache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache stage3 io_wt_en", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_icache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+183,"SimTop my_core_top my_icache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBus(c+184,"SimTop my_core_top my_icache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+185,"SimTop my_core_top my_icache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop my_core_top my_icache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+72,"SimTop my_core_top my_icache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+73,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+15,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+74,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+78,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+79,"SimTop my_core_top my_icache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+189,"SimTop my_core_top my_icache stage3 hit", false,-1);
        tracep->declBit(c+190,"SimTop my_core_top my_icache stage3 s3_valid", false,-1);
        tracep->declBit(c+79,"SimTop my_core_top my_icache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+184,"SimTop my_core_top my_icache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+183,"SimTop my_core_top my_icache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+191,"SimTop my_core_top my_icache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+192,"SimTop my_core_top my_icache stage3 buf_hit", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_icache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+193,"SimTop my_core_top my_icache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+194,"SimTop my_core_top my_icache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+195,"SimTop my_core_top my_icache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+196,"SimTop my_core_top my_icache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+198,"SimTop my_core_top my_icache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+200,"SimTop my_core_top my_icache stage3 state", false,-1, 5,0);
        tracep->declBit(c+201,"SimTop my_core_top my_icache stage3 cnt", false,-1);
        tracep->declBit(c+73,"SimTop my_core_top my_icache stage3 wb_en", false,-1);
        tracep->declBit(c+202,"SimTop my_core_top my_icache stage3 burst_last", false,-1);
        tracep->declBit(c+203,"SimTop my_core_top my_icache stage3 refill_come", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_icache CacheDataRamV clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache CacheDataRamV reset", false,-1);
        tracep->declBit(c+204,"SimTop my_core_top my_icache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+205,"SimTop my_core_top my_icache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+131,"SimTop my_core_top my_icache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_icache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+210,"SimTop my_core_top my_icache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+214,"SimTop my_core_top my_icache CacheDataRamV cen", false,-1);
        tracep->declBit(c+215,"SimTop my_core_top my_icache CacheDataRamV wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_icache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+210,"SimTop my_core_top my_icache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+216,"SimTop my_core_top my_icache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+205,"SimTop my_core_top my_icache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+131,"SimTop my_core_top my_icache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_icache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+217,"SimTop my_core_top my_icache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+214,"SimTop my_core_top my_icache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+221,"SimTop my_core_top my_icache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_icache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+217,"SimTop my_core_top my_icache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+222,"SimTop my_core_top my_icache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+205,"SimTop my_core_top my_icache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+131,"SimTop my_core_top my_icache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_icache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+223,"SimTop my_core_top my_icache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+214,"SimTop my_core_top my_icache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+227,"SimTop my_core_top my_icache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_icache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+223,"SimTop my_core_top my_icache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+228,"SimTop my_core_top my_icache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+205,"SimTop my_core_top my_icache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+131,"SimTop my_core_top my_icache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_icache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+229,"SimTop my_core_top my_icache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+214,"SimTop my_core_top my_icache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+233,"SimTop my_core_top my_icache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_icache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+229,"SimTop my_core_top my_icache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+206,"SimTop my_core_top my_icache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache cache_meta clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta reset", false,-1);
        tracep->declBit(c+214,"SimTop my_core_top my_icache cache_meta io_en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache cache_meta io_wr", false,-1);
        tracep->declBus(c+182,"SimTop my_core_top my_icache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+234,"SimTop my_core_top my_icache cache_meta io_index", false,-1, 4,0);
        tracep->declBus(c+184,"SimTop my_core_top my_icache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+136,"SimTop my_core_top my_icache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_icache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+138,"SimTop my_core_top my_icache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+143,"SimTop my_core_top my_icache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_icache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+145,"SimTop my_core_top my_icache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+150,"SimTop my_core_top my_icache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_icache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+152,"SimTop my_core_top my_icache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+157,"SimTop my_core_top my_icache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+158,"SimTop my_core_top my_icache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+159,"SimTop my_core_top my_icache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+432,"SimTop my_core_top my_icache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+235,"SimTop my_core_top my_icache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+136,"SimTop my_core_top my_icache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_icache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+138,"SimTop my_core_top my_icache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+131,"SimTop my_core_top my_icache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+184,"SimTop my_core_top my_icache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+236,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop my_core_top my_icache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+138,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+136,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+137,"SimTop my_core_top my_icache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+240,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+143,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+145,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+131,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+184,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+241,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+145,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+143,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+144,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+245,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+150,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+152,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+131,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+184,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+246,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+248,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+152,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+150,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+151,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+250,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+181,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+157,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+158,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+159,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+131,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+184,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+251,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+253,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+159,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+157,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+158,"SimTop my_core_top my_icache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache reset", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache io_in_req_valid", false,-1);
        tracep->declQuad(c+443,"SimTop my_core_top my_dcache io_in_req_bits_addr", false,-1, 63,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache io_in_req_bits_mthrough", false,-1);
        tracep->declBit(c+127,"SimTop my_core_top my_dcache io_out_req_ready", false,-1);
        tracep->declQuad(c+107,"SimTop my_core_top my_dcache io_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+128,"SimTop my_core_top my_dcache io_out_ret_valid", false,-1);
        tracep->declBit(c+129,"SimTop my_core_top my_dcache io_out_rlast", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache io_in_req_ready", false,-1);
        tracep->declQuad(c+255,"SimTop my_core_top my_dcache io_in_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache io_in_ret_valid", false,-1);
        tracep->declBit(c+124,"SimTop my_core_top my_dcache io_out_req_valid", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_dcache io_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache io_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+100,"SimTop my_core_top my_dcache io_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+104,"SimTop my_core_top my_dcache io_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+105,"SimTop my_core_top my_dcache io_out_req_bits_mthrough", false,-1);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache cache_addr", false,-1, 5,0);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache stage1 io_cpu_valid", false,-1);
        tracep->declQuad(c+443,"SimTop my_core_top my_dcache stage1 io_cpu_bits_addr", false,-1, 63,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache stage1 io_cpu_bits_mthrough", false,-1);
        tracep->declBit(c+259,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache stage1 io_cpu_ready", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache stage1 io_rd_en", false,-1);
        tracep->declBus(c+441,"SimTop my_core_top my_dcache stage1 io_rd_index", false,-1, 4,0);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+518,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+441,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+519,"SimTop my_core_top my_dcache stage1 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache stage2 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache stage2 reset", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_valid", false,-1);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_mthrough", false,-1);
        tracep->declBus(c+518,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_tag", false,-1, 22,0);
        tracep->declBus(c+441,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_index", false,-1, 4,0);
        tracep->declBus(c+519,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_bits_offset", false,-1, 3,0);
        tracep->declBit(c+260,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_valid", false,-1);
        tracep->declBit(c+261,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_dirty", false,-1);
        tracep->declBus(c+262,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_tag", false,-1, 22,0);
        tracep->declQuad(c+263,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_0", false,-1, 63,0);
        tracep->declQuad(c+265,"SimTop my_core_top my_dcache stage2 io_rd_lines_0_data_1", false,-1, 63,0);
        tracep->declBit(c+267,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_valid", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_dirty", false,-1);
        tracep->declBus(c+269,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_tag", false,-1, 22,0);
        tracep->declQuad(c+270,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_0", false,-1, 63,0);
        tracep->declQuad(c+272,"SimTop my_core_top my_dcache stage2 io_rd_lines_1_data_1", false,-1, 63,0);
        tracep->declBit(c+274,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_valid", false,-1);
        tracep->declBit(c+275,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_dirty", false,-1);
        tracep->declBus(c+276,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_tag", false,-1, 22,0);
        tracep->declQuad(c+277,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_0", false,-1, 63,0);
        tracep->declQuad(c+279,"SimTop my_core_top my_dcache stage2 io_rd_lines_2_data_1", false,-1, 63,0);
        tracep->declBit(c+281,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_valid", false,-1);
        tracep->declBit(c+282,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_dirty", false,-1);
        tracep->declBus(c+283,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_tag", false,-1, 22,0);
        tracep->declQuad(c+284,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_0", false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop my_core_top my_dcache stage2 io_rd_lines_3_data_1", false,-1, 63,0);
        tracep->declBit(c+259,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+259,"SimTop my_core_top my_dcache stage2 io_s1_to_s2_ready", false,-1);
        tracep->declBit(c+288,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+289,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+290,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+291,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+292,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+293,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+294,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+295,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+296,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+297,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+298,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+300,"SimTop my_core_top my_dcache stage2 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+288,"SimTop my_core_top my_dcache stage2 s2_valid", false,-1);
        tracep->declBit(c+289,"SimTop my_core_top my_dcache stage2 buf_mthrough", false,-1);
        tracep->declBus(c+290,"SimTop my_core_top my_dcache stage2 buf_tag", false,-1, 22,0);
        tracep->declBus(c+291,"SimTop my_core_top my_dcache stage2 buf_index", false,-1, 4,0);
        tracep->declBus(c+292,"SimTop my_core_top my_dcache stage2 buf_offset", false,-1, 3,0);
        tracep->declBus(c+302,"SimTop my_core_top my_dcache stage2 hit_array", false,-1, 3,0);
        tracep->declBus(c+303,"SimTop my_core_top my_dcache stage2 replace1H", false,-1, 3,0);
        tracep->declBus(c+304,"SimTop my_core_top my_dcache stage2 target_way1H", false,-1, 3,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache stage3 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache stage3 reset", false,-1);
        tracep->declBit(c+288,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_valid", false,-1);
        tracep->declBit(c+289,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_mthrough", false,-1);
        tracep->declBus(c+290,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_tag", false,-1, 22,0);
        tracep->declBus(c+291,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_index", false,-1, 4,0);
        tracep->declBus(c+292,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_offset", false,-1, 3,0);
        tracep->declBit(c+293,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_hit", false,-1);
        tracep->declBus(c+294,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_way", false,-1, 1,0);
        tracep->declBit(c+295,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_valid", false,-1);
        tracep->declBit(c+296,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_dirty", false,-1);
        tracep->declBus(c+297,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+298,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+300,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_bits_target_line_data_1", false,-1, 63,0);
        tracep->declBit(c+127,"SimTop my_core_top my_dcache stage3 io_mem_out_req_ready", false,-1);
        tracep->declQuad(c+107,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_rdata", false,-1, 63,0);
        tracep->declBit(c+128,"SimTop my_core_top my_dcache stage3 io_mem_out_ret_valid", false,-1);
        tracep->declBit(c+129,"SimTop my_core_top my_dcache stage3 io_mem_out_rlast", false,-1);
        tracep->declQuad(c+255,"SimTop my_core_top my_dcache stage3 io_cpu_rdata", false,-1, 63,0);
        tracep->declBit(c+257,"SimTop my_core_top my_dcache stage3 io_cpu_valid", false,-1);
        tracep->declBit(c+259,"SimTop my_core_top my_dcache stage3 io_s2_to_s3_ready", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache stage3 io_wt_en", false,-1);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache stage3 io_wt_way", false,-1, 1,0);
        tracep->declBus(c+307,"SimTop my_core_top my_dcache stage3 io_wt_index", false,-1, 4,0);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache stage3 io_wt_line_tag", false,-1, 22,0);
        tracep->declQuad(c+309,"SimTop my_core_top my_dcache stage3 io_wt_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop my_core_top my_dcache stage3 io_wt_line_data_1", false,-1, 63,0);
        tracep->declBit(c+124,"SimTop my_core_top my_dcache stage3 io_mem_out_req_valid", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_addr", false,-1, 63,0);
        tracep->declArray(c+100,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wdata", false,-1, 127,0);
        tracep->declBus(c+104,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+105,"SimTop my_core_top my_dcache stage3 io_mem_out_req_bits_mthrough", false,-1);
        tracep->declBit(c+313,"SimTop my_core_top my_dcache stage3 hit", false,-1);
        tracep->declBit(c+314,"SimTop my_core_top my_dcache stage3 s3_valid", false,-1);
        tracep->declBit(c+105,"SimTop my_core_top my_dcache stage3 buf_mthrough", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache stage3 buf_tag", false,-1, 22,0);
        tracep->declBus(c+307,"SimTop my_core_top my_dcache stage3 buf_index", false,-1, 4,0);
        tracep->declBus(c+315,"SimTop my_core_top my_dcache stage3 buf_offset", false,-1, 3,0);
        tracep->declBit(c+316,"SimTop my_core_top my_dcache stage3 buf_hit", false,-1);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache stage3 buf_target_way", false,-1, 1,0);
        tracep->declBit(c+317,"SimTop my_core_top my_dcache stage3 buf_target_line_valid", false,-1);
        tracep->declBit(c+318,"SimTop my_core_top my_dcache stage3 buf_target_line_dirty", false,-1);
        tracep->declBus(c+319,"SimTop my_core_top my_dcache stage3 buf_target_line_tag", false,-1, 22,0);
        tracep->declQuad(c+320,"SimTop my_core_top my_dcache stage3 buf_target_line_data_0", false,-1, 63,0);
        tracep->declQuad(c+322,"SimTop my_core_top my_dcache stage3 buf_target_line_data_1", false,-1, 63,0);
        tracep->declBus(c+324,"SimTop my_core_top my_dcache stage3 state", false,-1, 5,0);
        tracep->declBit(c+325,"SimTop my_core_top my_dcache stage3 cnt", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_dcache stage3 wb_en", false,-1);
        tracep->declBit(c+326,"SimTop my_core_top my_dcache stage3 burst_last", false,-1);
        tracep->declBit(c+327,"SimTop my_core_top my_dcache stage3 refill_come", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache CacheDataRamV clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache CacheDataRamV reset", false,-1);
        tracep->declBit(c+328,"SimTop my_core_top my_dcache CacheDataRamV WEN", false,-1);
        tracep->declBit(c+329,"SimTop my_core_top my_dcache CacheDataRamV CEN", false,-1);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache CacheDataRamV A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_dcache CacheDataRamV BWEN", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV D", false,-1, 127,0);
        tracep->declArray(c+334,"SimTop my_core_top my_dcache CacheDataRamV Q", false,-1, 127,0);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache CacheDataRamV cen", false,-1);
        tracep->declBit(c+338,"SimTop my_core_top my_dcache CacheDataRamV wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_dcache CacheDataRamV bwen", false,-1, 127,0);
        tracep->declArray(c+334,"SimTop my_core_top my_dcache CacheDataRamV rdata", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache CacheDataRamV_1 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache CacheDataRamV_1 reset", false,-1);
        tracep->declBit(c+339,"SimTop my_core_top my_dcache CacheDataRamV_1 WEN", false,-1);
        tracep->declBit(c+329,"SimTop my_core_top my_dcache CacheDataRamV_1 CEN", false,-1);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache CacheDataRamV_1 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_dcache CacheDataRamV_1 BWEN", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_1 D", false,-1, 127,0);
        tracep->declArray(c+340,"SimTop my_core_top my_dcache CacheDataRamV_1 Q", false,-1, 127,0);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache CacheDataRamV_1 cen", false,-1);
        tracep->declBit(c+344,"SimTop my_core_top my_dcache CacheDataRamV_1 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_dcache CacheDataRamV_1 bwen", false,-1, 127,0);
        tracep->declArray(c+340,"SimTop my_core_top my_dcache CacheDataRamV_1 rdata", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_1 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache CacheDataRamV_2 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache CacheDataRamV_2 reset", false,-1);
        tracep->declBit(c+345,"SimTop my_core_top my_dcache CacheDataRamV_2 WEN", false,-1);
        tracep->declBit(c+329,"SimTop my_core_top my_dcache CacheDataRamV_2 CEN", false,-1);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache CacheDataRamV_2 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_dcache CacheDataRamV_2 BWEN", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_2 D", false,-1, 127,0);
        tracep->declArray(c+346,"SimTop my_core_top my_dcache CacheDataRamV_2 Q", false,-1, 127,0);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache CacheDataRamV_2 cen", false,-1);
        tracep->declBit(c+350,"SimTop my_core_top my_dcache CacheDataRamV_2 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_dcache CacheDataRamV_2 bwen", false,-1, 127,0);
        tracep->declArray(c+346,"SimTop my_core_top my_dcache CacheDataRamV_2 rdata", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_2 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache CacheDataRamV_3 clock", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache CacheDataRamV_3 reset", false,-1);
        tracep->declBit(c+351,"SimTop my_core_top my_dcache CacheDataRamV_3 WEN", false,-1);
        tracep->declBit(c+329,"SimTop my_core_top my_dcache CacheDataRamV_3 CEN", false,-1);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache CacheDataRamV_3 A", false,-1, 5,0);
        tracep->declArray(c+510,"SimTop my_core_top my_dcache CacheDataRamV_3 BWEN", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_3 D", false,-1, 127,0);
        tracep->declArray(c+352,"SimTop my_core_top my_dcache CacheDataRamV_3 Q", false,-1, 127,0);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache CacheDataRamV_3 cen", false,-1);
        tracep->declBit(c+356,"SimTop my_core_top my_dcache CacheDataRamV_3 wen", false,-1);
        tracep->declArray(c+514,"SimTop my_core_top my_dcache CacheDataRamV_3 bwen", false,-1, 127,0);
        tracep->declArray(c+352,"SimTop my_core_top my_dcache CacheDataRamV_3 rdata", false,-1, 127,0);
        tracep->declArray(c+330,"SimTop my_core_top my_dcache CacheDataRamV_3 wdata", false,-1, 127,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache cache_meta clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache cache_meta reset", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta io_en", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta io_wr", false,-1);
        tracep->declBus(c+306,"SimTop my_core_top my_dcache cache_meta io_way", false,-1, 1,0);
        tracep->declBus(c+357,"SimTop my_core_top my_dcache cache_meta io_index", false,-1, 4,0);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache cache_meta io_in_tag", false,-1, 22,0);
        tracep->declBit(c+260,"SimTop my_core_top my_dcache cache_meta io_out_0_valid", false,-1);
        tracep->declBit(c+261,"SimTop my_core_top my_dcache cache_meta io_out_0_dirty", false,-1);
        tracep->declBus(c+262,"SimTop my_core_top my_dcache cache_meta io_out_0_tag", false,-1, 22,0);
        tracep->declBit(c+267,"SimTop my_core_top my_dcache cache_meta io_out_1_valid", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache cache_meta io_out_1_dirty", false,-1);
        tracep->declBus(c+269,"SimTop my_core_top my_dcache cache_meta io_out_1_tag", false,-1, 22,0);
        tracep->declBit(c+274,"SimTop my_core_top my_dcache cache_meta io_out_2_valid", false,-1);
        tracep->declBit(c+275,"SimTop my_core_top my_dcache cache_meta io_out_2_dirty", false,-1);
        tracep->declBus(c+276,"SimTop my_core_top my_dcache cache_meta io_out_2_tag", false,-1, 22,0);
        tracep->declBit(c+281,"SimTop my_core_top my_dcache cache_meta io_out_3_valid", false,-1);
        tracep->declBit(c+282,"SimTop my_core_top my_dcache cache_meta io_out_3_dirty", false,-1);
        tracep->declBus(c+283,"SimTop my_core_top my_dcache cache_meta io_out_3_tag", false,-1, 22,0);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV reset", false,-1);
        tracep->declBit(c+358,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV en", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wr", false,-1);
        tracep->declBit(c+260,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV valid", false,-1);
        tracep->declBit(c+261,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV dirty", false,-1);
        tracep->declBus(c+262,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV tag", false,-1, 22,0);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wdirty", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV wtag", false,-1, 22,0);
        tracep->declQuad(c+359,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_valid", false,-1, 63,0);
        tracep->declQuad(c+361,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV ram_dirty", false,-1, 63,0);
        tracep->declBus(c+262,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rtag", false,-1, 22,0);
        tracep->declBit(c+260,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rvalid", false,-1);
        tracep->declBit(c+261,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 reset", false,-1);
        tracep->declBit(c+363,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 en", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wr", false,-1);
        tracep->declBit(c+267,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 valid", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 dirty", false,-1);
        tracep->declBus(c+269,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 tag", false,-1, 22,0);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wdirty", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 wtag", false,-1, 22,0);
        tracep->declQuad(c+364,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+269,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rtag", false,-1, 22,0);
        tracep->declBit(c+267,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rvalid", false,-1);
        tracep->declBit(c+268,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_1 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 reset", false,-1);
        tracep->declBit(c+368,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 en", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wr", false,-1);
        tracep->declBit(c+274,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 valid", false,-1);
        tracep->declBit(c+275,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 dirty", false,-1);
        tracep->declBus(c+276,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 tag", false,-1, 22,0);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wdirty", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 wtag", false,-1, 22,0);
        tracep->declQuad(c+369,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+276,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rtag", false,-1, 22,0);
        tracep->declBit(c+274,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rvalid", false,-1);
        tracep->declBit(c+275,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_2 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 reset", false,-1);
        tracep->declBit(c+373,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 en", false,-1);
        tracep->declBit(c+305,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wr", false,-1);
        tracep->declBit(c+281,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 valid", false,-1);
        tracep->declBit(c+282,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 dirty", false,-1);
        tracep->declBus(c+283,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 tag", false,-1, 22,0);
        tracep->declBus(c+258,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 addr", false,-1, 5,0);
        tracep->declBit(c+509,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wvalid", false,-1);
        tracep->declBit(c+442,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wdirty", false,-1);
        tracep->declBus(c+308,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 wtag", false,-1, 22,0);
        tracep->declQuad(c+374,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_valid", false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 ram_dirty", false,-1, 63,0);
        tracep->declBus(c+283,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rtag", false,-1, 22,0);
        tracep->declBit(c+281,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rvalid", false,-1);
        tracep->declBit(c+282,"SimTop my_core_top my_dcache cache_meta CacheMetaRamV_3 rdirty", false,-1);
        tracep->declBit(c+432,"SimTop my_core_top my_clint clock", false,-1);
        tracep->declBit(c+433,"SimTop my_core_top my_clint reset", false,-1);
        tracep->declBit(c+130,"SimTop my_core_top my_clint io_in_en", false,-1);
        tracep->declBit(c+99,"SimTop my_core_top my_clint io_in_wr", false,-1);
        tracep->declQuad(c+27,"SimTop my_core_top my_clint io_in_addr", false,-1, 63,0);
        tracep->declBit(c+125,"SimTop my_core_top my_clint io_in_clint_hit", false,-1);
        tracep->declBit(c+126,"SimTop my_core_top my_clint io_in_ret_valid", false,-1);
        tracep->declBit(c+126,"SimTop my_core_top my_clint ret_valid", false,-1);
        tracep->declBit(c+432,"SimTop my_axi_sram clock", false,-1);
        tracep->declBit(c+433,"SimTop my_axi_sram reset", false,-1);
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
        tracep->declBit(c+432,"SimTop my_axi_sram my_arbiter clock", false,-1);
        tracep->declBit(c+433,"SimTop my_axi_sram my_arbiter reset", false,-1);
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
        tracep->declBit(c+378,"SimTop my_axi_sram my_arbiter io_out_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_arbiter io_out_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter io_out_aw_ready", false,-1);
        tracep->declBit(c+379,"SimTop my_axi_sram my_arbiter io_out_wt_ready", false,-1);
        tracep->declBit(c+380,"SimTop my_axi_sram my_arbiter io_out_b_valid", false,-1);
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
        tracep->declBit(c+381,"SimTop my_axi_sram my_arbiter io_out_ar_valid", false,-1);
        tracep->declQuad(c+382,"SimTop my_axi_sram my_arbiter io_out_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+384,"SimTop my_axi_sram my_arbiter io_out_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+385,"SimTop my_axi_sram my_arbiter io_out_rd_ready", false,-1);
        tracep->declBit(c+386,"SimTop my_axi_sram my_arbiter io_out_aw_valid", false,-1);
        tracep->declQuad(c+387,"SimTop my_axi_sram my_arbiter io_out_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+389,"SimTop my_axi_sram my_arbiter io_out_wt_valid", false,-1);
        tracep->declQuad(c+390,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+392,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+393,"SimTop my_axi_sram my_arbiter io_out_wt_bits_wlast", false,-1);
        tracep->declBit(c+394,"SimTop my_axi_sram my_arbiter io_out_b_ready", false,-1);
        tracep->declBit(c+395,"SimTop my_axi_sram my_arbiter rd_chosen", false,-1);
        tracep->declBit(c+396,"SimTop my_axi_sram my_arbiter wt_chosen", false,-1);
        tracep->declBit(c+14,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+17,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+29,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_ready", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_0_ready", false,-1);
        tracep->declBit(c+9,"SimTop my_axi_sram my_arbiter arbiter_rd io_in_1_ready", false,-1);
        tracep->declBit(c+381,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_valid", false,-1);
        tracep->declQuad(c+382,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+384,"SimTop my_axi_sram my_arbiter arbiter_rd io_out_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+397,"SimTop my_axi_sram my_arbiter arbiter_rd io_chosen", false,-1);
        tracep->declBit(c+19,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_valid", false,-1);
        tracep->declQuad(c+15,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+31,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_valid", false,-1);
        tracep->declQuad(c+27,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_ready", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_0_ready", false,-1);
        tracep->declBit(c+11,"SimTop my_axi_sram my_arbiter arbiter_wt io_in_1_ready", false,-1);
        tracep->declBit(c+386,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_valid", false,-1);
        tracep->declQuad(c+387,"SimTop my_axi_sram my_arbiter arbiter_wt io_out_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+398,"SimTop my_axi_sram my_arbiter arbiter_wt io_chosen", false,-1);
        tracep->declBit(c+432,"SimTop my_axi_sram my_axi_sram_driver clock", false,-1);
        tracep->declBit(c+433,"SimTop my_axi_sram my_axi_sram_driver reset", false,-1);
        tracep->declBit(c+381,"SimTop my_axi_sram my_axi_sram_driver io_ar_valid", false,-1);
        tracep->declQuad(c+382,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+384,"SimTop my_axi_sram my_axi_sram_driver io_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+385,"SimTop my_axi_sram my_axi_sram_driver io_rd_ready", false,-1);
        tracep->declBit(c+386,"SimTop my_axi_sram my_axi_sram_driver io_aw_valid", false,-1);
        tracep->declQuad(c+387,"SimTop my_axi_sram my_axi_sram_driver io_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+389,"SimTop my_axi_sram my_axi_sram_driver io_wt_valid", false,-1);
        tracep->declQuad(c+390,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+392,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+393,"SimTop my_axi_sram my_axi_sram_driver io_wt_bits_wlast", false,-1);
        tracep->declBit(c+394,"SimTop my_axi_sram my_axi_sram_driver io_b_ready", false,-1);
        tracep->declQuad(c+399,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_rdata", false,-1, 63,0);
        tracep->declBit(c+401,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_resp", false,-1);
        tracep->declBit(c+402,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_resp", false,-1);
        tracep->declBit(c+1,"SimTop my_axi_sram my_axi_sram_driver io_ar_ready", false,-1);
        tracep->declBit(c+378,"SimTop my_axi_sram my_axi_sram_driver io_rd_valid", false,-1);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+5,"SimTop my_axi_sram my_axi_sram_driver io_rd_bits_rlast", false,-1);
        tracep->declBit(c+6,"SimTop my_axi_sram my_axi_sram_driver io_aw_ready", false,-1);
        tracep->declBit(c+379,"SimTop my_axi_sram my_axi_sram_driver io_wt_ready", false,-1);
        tracep->declBit(c+380,"SimTop my_axi_sram my_axi_sram_driver io_b_valid", false,-1);
        tracep->declBit(c+403,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_en", false,-1);
        tracep->declQuad(c+404,"SimTop my_axi_sram my_axi_sram_driver io_sram_rd_addr", false,-1, 63,0);
        tracep->declBit(c+406,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_en", false,-1);
        tracep->declQuad(c+407,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_addr", false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wdata", false,-1, 63,0);
        tracep->declBus(c+392,"SimTop my_axi_sram my_axi_sram_driver io_sram_wt_wmask", false,-1, 7,0);
        tracep->declBit(c+378,"SimTop my_axi_sram my_axi_sram_driver rdata_ok", false,-1);
        tracep->declBus(c+409,"SimTop my_axi_sram my_axi_sram_driver rstate", false,-1, 2,0);
        tracep->declBus(c+410,"SimTop my_axi_sram my_axi_sram_driver wstate", false,-1, 2,0);
        tracep->declQuad(c+411,"SimTop my_axi_sram my_axi_sram_driver ar_buf_araddr", false,-1, 63,0);
        tracep->declBus(c+413,"SimTop my_axi_sram my_axi_sram_driver ar_buf_arlen", false,-1, 7,0);
        tracep->declQuad(c+3,"SimTop my_axi_sram my_axi_sram_driver rdata_r", false,-1, 63,0);
        tracep->declBus(c+414,"SimTop my_axi_sram my_axi_sram_driver rd_cnt", false,-1, 7,0);
        tracep->declBit(c+415,"SimTop my_axi_sram my_axi_sram_driver rd_idx", false,-1);
        tracep->declQuad(c+416,"SimTop my_axi_sram my_axi_sram_driver aw_buf_awaddr", false,-1, 63,0);
        tracep->declBit(c+418,"SimTop my_axi_sram my_axi_sram_driver wt_widx", false,-1);
        tracep->declBit(c+419,"SimTop my_axi_sram my_axi_sram_driver unnamedblk1 rdata_arrive", false,-1);
        tracep->declBit(c+401,"SimTop my_axi_sram my_rmem_port en", false,-1);
        tracep->declBit(c+442,"SimTop my_axi_sram my_rmem_port wr", false,-1);
        tracep->declQuad(c+404,"SimTop my_axi_sram my_rmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+399,"SimTop my_axi_sram my_rmem_port rdata", false,-1, 63,0);
        tracep->declQuad(c+520,"SimTop my_axi_sram my_rmem_port tmprdata", false,-1, 63,0);
        tracep->declBit(c+402,"SimTop my_axi_sram my_wmem_port en", false,-1);
        tracep->declBit(c+509,"SimTop my_axi_sram my_wmem_port wr", false,-1);
        tracep->declQuad(c+407,"SimTop my_axi_sram my_wmem_port addr", false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop my_axi_sram my_wmem_port wdata", false,-1, 63,0);
        tracep->declBus(c+392,"SimTop my_axi_sram my_wmem_port wmask", false,-1, 7,0);
        tracep->declBit(c+432,"SimTop my_axi_sram rd_resp_en_rdelayer clock", false,-1);
        tracep->declBit(c+433,"SimTop my_axi_sram rd_resp_en_rdelayer reset", false,-1);
        tracep->declBit(c+403,"SimTop my_axi_sram rd_resp_en_rdelayer io_in", false,-1);
        tracep->declBit(c+401,"SimTop my_axi_sram rd_resp_en_rdelayer io_out", false,-1);
        tracep->declBit(c+420,"SimTop my_axi_sram rd_resp_en_rdelayer delaying", false,-1);
        tracep->declBit(c+421,"SimTop my_axi_sram rd_resp_en_rdelayer r_r", false,-1);
        tracep->declBit(c+422,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_1", false,-1);
        tracep->declBit(c+423,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_2", false,-1);
        tracep->declBit(c+424,"SimTop my_axi_sram rd_resp_en_rdelayer r_r_3", false,-1);
        tracep->declBit(c+401,"SimTop my_axi_sram rd_resp_en_rdelayer r", false,-1);
        tracep->declBit(c+425,"SimTop my_axi_sram rd_resp_en_rdelayer unnamedblk1 din", false,-1);
        tracep->declBit(c+432,"SimTop my_axi_sram wt_resp_en_wdelayer clock", false,-1);
        tracep->declBit(c+433,"SimTop my_axi_sram wt_resp_en_wdelayer reset", false,-1);
        tracep->declBit(c+406,"SimTop my_axi_sram wt_resp_en_wdelayer io_in", false,-1);
        tracep->declBit(c+402,"SimTop my_axi_sram wt_resp_en_wdelayer io_out", false,-1);
        tracep->declBit(c+426,"SimTop my_axi_sram wt_resp_en_wdelayer delaying", false,-1);
        tracep->declBit(c+427,"SimTop my_axi_sram wt_resp_en_wdelayer r_r", false,-1);
        tracep->declBit(c+428,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_1", false,-1);
        tracep->declBit(c+429,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_2", false,-1);
        tracep->declBit(c+430,"SimTop my_axi_sram wt_resp_en_wdelayer r_r_3", false,-1);
        tracep->declBit(c+402,"SimTop my_axi_sram wt_resp_en_wdelayer r", false,-1);
        tracep->declBit(c+431,"SimTop my_axi_sram wt_resp_en_wdelayer unnamedblk1 din", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
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
        tracep->fullBit(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T));
        tracep->fullQData(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata),64);
        tracep->fullBit(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid));
        tracep->fullBit(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2));
        tracep->fullBit(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
        tracep->fullQData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2),64);
        tracep->fullBit(oldp+46,((IData)((0x80000000ULL 
                                          != (0xe0000000ULL 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)))));
        tracep->fullBit(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T));
        tracep->fullIData(oldp+48,(((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                >> 0x20U))
                                     : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data))),32);
        tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
        tracep->fullBit(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
        tracep->fullCData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
        tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
        tracep->fullBit(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
        tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data),64);
        tracep->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid)))));
        tracep->fullBit(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid));
        tracep->fullIData(oldp+60,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst),32);
        tracep->fullBit(oldp+61,(((IData)((0x73U == 
                                           (0xfffffU 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                  & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                            >> 0x14U)))));
        tracep->fullQData(oldp+62,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))),64);
        tracep->fullCData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
        tracep->fullCData(oldp+65,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
        tracep->fullCData(oldp+66,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+67,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1))
                                     ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                    [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1])),64);
        tracep->fullQData(oldp+69,(((0U == (0x1fU & 
                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                    [(0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                               >> 0x14U))])),64);
        tracep->fullBit(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
        tracep->fullBit(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
            __Vtemp27[0U] = 0U;
            __Vtemp27[1U] = 0U;
            __Vtemp27[2U] = 0U;
            __Vtemp27[3U] = 0U;
        } else {
            __Vtemp27[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
            __Vtemp27[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                     >> 0x20U));
            __Vtemp27[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
            __Vtemp27[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                     >> 0x20U));
        }
        tracep->fullWData(oldp+74,(__Vtemp27),128);
        tracep->fullCData(oldp+78,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                     ? 0U : 0xffU)),8);
        tracep->fullBit(oldp+79,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+80,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt))));
        tracep->fullQData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
        tracep->fullBit(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
        tracep->fullBit(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
        tracep->fullBit(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
        tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
        tracep->fullBit(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
        tracep->fullBit(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
        tracep->fullCData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
        tracep->fullBit(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
        tracep->fullBit(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
        tracep->fullBit(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough) {
            __Vtemp30[0U] = 0U;
            __Vtemp30[1U] = 0U;
            __Vtemp30[2U] = 0U;
            __Vtemp30[3U] = 0U;
        } else {
            __Vtemp30[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0);
            __Vtemp30[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                                     >> 0x20U));
            __Vtemp30[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1);
            __Vtemp30[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                                     >> 0x20U));
        }
        tracep->fullWData(oldp+100,(__Vtemp30),128);
        tracep->fullCData(oldp+104,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                      ? 0U : 0xffU)),8);
        tracep->fullBit(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
        tracep->fullBit(oldp+106,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
        tracep->fullQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
        tracep->fullBit(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
        tracep->fullBit(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
        tracep->fullCData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
        tracep->fullBit(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
        tracep->fullBit(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
        tracep->fullWData(oldp+114,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
        tracep->fullBit(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
        tracep->fullBit(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
        tracep->fullCData(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
        tracep->fullBit(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
        tracep->fullBit(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        tracep->fullBit(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
        tracep->fullBit(oldp+126,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
        tracep->fullBit(oldp+127,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)))));
        tracep->fullBit(oldp+128,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
        tracep->fullBit(oldp+129,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
        tracep->fullBit(oldp+130,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
        tracep->fullCData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),6);
        tracep->fullBit(oldp+132,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullCData(oldp+133,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                      >> 4U)))),5);
        tracep->fullIData(oldp+134,((0x7fffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+135,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2))),4);
        tracep->fullBit(oldp+136,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+138,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+144,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+152,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+153,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+155,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+160,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+162,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+169,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+170,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+171,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+172,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+173,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+174,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+176,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullCData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
        tracep->fullIData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+185,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3),64);
        tracep->fullQData(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3),64);
        tracep->fullBit(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
        tracep->fullCData(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
        tracep->fullBit(oldp+202,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21)))));
        tracep->fullWData(oldp+206,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27),128);
        tracep->fullWData(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
        tracep->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+229,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+234,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),5);
        tracep->fullBit(oldp+235,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+236,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+241,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+243,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+245,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullQData(oldp+255,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit)
                                      ? ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
                                          : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0)
                                      : ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                                          : ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3
                                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3)))),64);
        tracep->fullBit(oldp+257,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit) 
                                      | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                          ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                                          : ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                               >> 3U) 
                                              ^ (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) 
                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come)))))));
        tracep->fullCData(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),6);
        tracep->fullBit(oldp+259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
        tracep->fullBit(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
        tracep->fullBit(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
        tracep->fullIData(oldp+262,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
        tracep->fullQData(oldp+263,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+265,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
        tracep->fullBit(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
        tracep->fullIData(oldp+269,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
        tracep->fullQData(oldp+270,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+272,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+274,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
        tracep->fullBit(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
        tracep->fullIData(oldp+276,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
        tracep->fullQData(oldp+277,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+279,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+281,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
        tracep->fullBit(oldp+282,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
        tracep->fullIData(oldp+283,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
        tracep->fullBit(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
        tracep->fullBit(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
        tracep->fullIData(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
        tracep->fullCData(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
        tracep->fullCData(oldp+292,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
        tracep->fullBit(oldp+293,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))));
        tracep->fullCData(oldp+294,((((IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                                   >> 2U)))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))))),2);
        tracep->fullBit(oldp+295,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
        tracep->fullBit(oldp+296,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
        tracep->fullIData(oldp+297,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+298,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullQData(oldp+300,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
        tracep->fullCData(oldp+302,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array),4);
        tracep->fullCData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
        tracep->fullCData(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H),4);
        tracep->fullBit(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
        tracep->fullCData(oldp+306,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
        tracep->fullCData(oldp+307,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
        tracep->fullIData(oldp+308,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
        tracep->fullQData(oldp+309,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3),64);
        tracep->fullQData(oldp+311,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3),64);
        tracep->fullBit(oldp+313,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
        tracep->fullBit(oldp+314,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
        tracep->fullCData(oldp+315,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
        tracep->fullBit(oldp+316,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
        tracep->fullBit(oldp+317,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
        tracep->fullBit(oldp+318,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
        tracep->fullIData(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
        tracep->fullQData(oldp+320,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
        tracep->fullQData(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
        tracep->fullCData(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
        tracep->fullBit(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
        tracep->fullBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
        tracep->fullBit(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come));
        tracep->fullBit(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN));
        tracep->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))));
        tracep->fullWData(oldp+330,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27),128);
        tracep->fullWData(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata),128);
        tracep->fullBit(oldp+338,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))));
        tracep->fullBit(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN));
        tracep->fullWData(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata),128);
        tracep->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
        tracep->fullBit(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN));
        tracep->fullWData(oldp+346,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata),128);
        tracep->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
        tracep->fullBit(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN));
        tracep->fullWData(oldp+352,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata),128);
        tracep->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
        tracep->fullCData(oldp+357,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),5);
        tracep->fullBit(oldp+358,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
        tracep->fullQData(oldp+359,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
        tracep->fullQData(oldp+361,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
        tracep->fullBit(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
        tracep->fullQData(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
        tracep->fullQData(oldp+366,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
        tracep->fullBit(oldp+368,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
        tracep->fullQData(oldp+369,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
        tracep->fullQData(oldp+371,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
        tracep->fullBit(oldp+373,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
        tracep->fullQData(oldp+374,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
        tracep->fullQData(oldp+376,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
        tracep->fullBit(oldp+378,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
        tracep->fullBit(oldp+379,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
        tracep->fullBit(oldp+380,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                         >> 2U))));
        tracep->fullBit(oldp+381,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
        tracep->fullQData(oldp+382,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
        tracep->fullCData(oldp+384,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                      ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                      : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
        tracep->fullBit(oldp+385,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 1U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 1U)))));
        tracep->fullBit(oldp+386,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
        tracep->fullQData(oldp+387,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
        tracep->fullBit(oldp+389,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
        tracep->fullQData(oldp+390,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
        tracep->fullCData(oldp+392,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                      ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                      : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
        tracep->fullBit(oldp+393,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                    : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
        tracep->fullBit(oldp+394,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                          ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                             >> 3U)
                                          : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                             >> 3U)))));
        tracep->fullBit(oldp+395,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
        tracep->fullBit(oldp+396,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
        tracep->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
        tracep->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
        tracep->fullQData(oldp+399,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
        tracep->fullBit(oldp+401,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
        tracep->fullBit(oldp+402,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
        tracep->fullBit(oldp+403,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
        tracep->fullQData(oldp+404,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                       ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                          >> 3U) : 
                                      ((0x1ffffffffffffffeULL 
                                        & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                           >> 3U)) 
                                       | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                     << 3U)),64);
        tracep->fullBit(oldp+406,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                    >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
        tracep->fullQData(oldp+407,(((0xfffffffffffffff0ULL 
                                      & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                        << 3U))))),64);
        tracep->fullCData(oldp+409,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
        tracep->fullCData(oldp+410,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
        tracep->fullQData(oldp+411,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
        tracep->fullCData(oldp+413,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
        tracep->fullCData(oldp+414,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
        tracep->fullBit(oldp+415,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
        tracep->fullQData(oldp+416,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
        tracep->fullBit(oldp+418,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
        tracep->fullBit(oldp+419,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
        tracep->fullBit(oldp+420,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
        tracep->fullBit(oldp+421,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
        tracep->fullBit(oldp+422,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+423,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+424,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+425,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+426,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
        tracep->fullBit(oldp+427,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
        tracep->fullBit(oldp+428,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
        tracep->fullBit(oldp+429,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
        tracep->fullBit(oldp+430,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
        tracep->fullBit(oldp+431,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        tracep->fullBit(oldp+432,(vlSelf->clock));
        tracep->fullBit(oldp+433,(vlSelf->reset));
        tracep->fullQData(oldp+434,(vlSelf->io_core_debug_debug_pc),64);
        tracep->fullBit(oldp+436,(vlSelf->io_core_debug_debug_rf_we));
        tracep->fullCData(oldp+437,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->fullQData(oldp+438,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->fullBit(oldp+440,(vlSelf->io_core_debug_raise_intr));
        tracep->fullCData(oldp+441,(0U),5);
        tracep->fullBit(oldp+442,(0U));
        tracep->fullQData(oldp+443,(0ULL),64);
        tracep->fullQData(oldp+445,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
        tracep->fullQData(oldp+447,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
        tracep->fullQData(oldp+449,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
        tracep->fullQData(oldp+451,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
        tracep->fullQData(oldp+453,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
        tracep->fullQData(oldp+455,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
        tracep->fullQData(oldp+457,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
        tracep->fullQData(oldp+459,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
        tracep->fullQData(oldp+461,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
        tracep->fullQData(oldp+463,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
        tracep->fullQData(oldp+465,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
        tracep->fullQData(oldp+467,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
        tracep->fullQData(oldp+469,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
        tracep->fullQData(oldp+471,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
        tracep->fullQData(oldp+473,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
        tracep->fullQData(oldp+475,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
        tracep->fullQData(oldp+477,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
        tracep->fullQData(oldp+479,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
        tracep->fullQData(oldp+481,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
        tracep->fullQData(oldp+483,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
        tracep->fullQData(oldp+485,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
        tracep->fullQData(oldp+487,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
        tracep->fullQData(oldp+489,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
        tracep->fullQData(oldp+491,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
        tracep->fullQData(oldp+493,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
        tracep->fullQData(oldp+495,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
        tracep->fullQData(oldp+497,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
        tracep->fullQData(oldp+499,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
        tracep->fullQData(oldp+501,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
        tracep->fullQData(oldp+503,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
        tracep->fullQData(oldp+505,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
        tracep->fullQData(oldp+507,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
        tracep->fullBit(oldp+509,(1U));
        __Vtemp31[0U] = 0U;
        __Vtemp31[1U] = 0U;
        __Vtemp31[2U] = 0U;
        __Vtemp31[3U] = 0U;
        tracep->fullWData(oldp+510,(__Vtemp31),128);
        __Vtemp32[0U] = 0xffffffffU;
        __Vtemp32[1U] = 0xffffffffU;
        __Vtemp32[2U] = 0xffffffffU;
        __Vtemp32[3U] = 0xffffffffU;
        tracep->fullWData(oldp+514,(__Vtemp32),128);
        tracep->fullIData(oldp+518,(0U),23);
        tracep->fullCData(oldp+519,(0U),4);
        tracep->fullQData(oldp+520,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata),64);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedVcd;


//----------

VL_MODULE(VSimTop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_core_debug_debug_rf_we,0,0);
    VL_OUT8(io_core_debug_debug_rf_wnum,4,0);
    VL_OUT8(io_core_debug_raise_intr,0,0);
    VL_OUT64(io_core_debug_debug_pc,63,0);
    VL_OUT64(io_core_debug_debug_rf_wdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7;
        CData/*6:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_3;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H;
    };
    struct {
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty;
    };
    struct {
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok;
        CData/*2:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
        CData/*2:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3;
        CData/*7:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen;
        CData/*7:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata;
    };
    struct {
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data;
        QData/*59:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r;
        QData/*59:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr;
        QData/*63:0*/ SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag;
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag;
    };
    struct {
        VlUnpacked<IData/*22:0*/, 64> SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag;
    };

    // LOCAL VARIABLES
    CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en;
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop___024root);  ///< Copying not allowed
  public:
    VSimTop___024root(const char* name);
    ~VSimTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

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
    VL_OUT64(io_core_debug_debug_nextpc,63,0);
    VL_OUT64(io_core_debug_debug_rf_wdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_mem_io_if_mem_ms_mem_ok;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en;
        CData/*6:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___T_4;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___fs_state_T_12;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___fs_state_T_10;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_3;
        CData/*6:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__has_trap;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_10;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_wb__DOT__exc_buf;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2;
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
    };
    struct {
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
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_24;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_30;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come;
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
    };
    struct {
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_24;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_30;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr;
        CData/*7:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit;
        CData/*1:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty;
        CData/*5:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_hit;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14;
        CData/*3:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23;
        CData/*4:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25;
        CData/*2:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen;
        CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_2;
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
    };
    struct {
        CData/*7:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10;
        CData/*0:0*/ SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive;
        SData/*8:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type;
        SData/*9:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN;
        SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0;
        SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__inst;
        IData/*16:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1;
        VlWide<3>/*64:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res;
        IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_31;
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
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_31;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata;
        VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag;
        IData/*22:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__exc_target_r;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__unnamedblk2__DOT__fs_inst_data;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__pc_seq;
        QData/*32:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        QData/*59:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r;
        QData/*59:0*/ SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___masked_refill_data_0_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___masked_refill_data_0_T_3;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime;
        QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp;
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
    };
    struct {
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
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1;
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

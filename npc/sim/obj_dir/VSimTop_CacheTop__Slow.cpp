// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop_CacheTop.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop_CacheTop___ctor_var_reset(VSimTop_CacheTop* vlSelf);

VSimTop_CacheTop::VSimTop_CacheTop(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop_CacheTop___ctor_var_reset(this);
}

void VSimTop_CacheTop::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop_CacheTop::~VSimTop_CacheTop() {
}

void VSimTop_CacheTop___settle__TOP__SimTop__DOT__my_core_top__DOT__my_icache__9(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___settle__TOP__SimTop__DOT__my_core_top__DOT__my_icache__9\n"); );
    // Body
    vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6 = 
        (1U & ((IData)(vlSelf->__PVT__stage3__DOT__state) 
               >> 5U));
    vlSelf->__PVT__stage3__DOT__refill_hit = ((IData)(vlSelf->__PVT__stage3__DOT__cnt) 
                                              == (1U 
                                                  & ((IData)(vlSelf->__PVT__stage3__DOT__buf_offset) 
                                                     >> 3U)));
    vlSelf->__PVT__stage3__DOT__cpu_word_mask = (((QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 7U)))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 6U)))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 5U)))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 4U)))))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb)))))))))));
    vlSelf->__PVT__stage3__DOT__hit = ((IData)(vlSelf->__PVT__stage3__DOT__buf_hit) 
                                       & (IData)(vlSelf->__PVT__stage3__DOT__state));
    vlSelf->__PVT__stage2__DOT__hit_array = ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                == vlSelf->__PVT__meta_rd_3_tag) 
                                               & (IData)(vlSelf->__PVT__meta_rd_3_valid)) 
                                              << 3U) 
                                             | ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                   == vlSelf->__PVT__meta_rd_2_tag) 
                                                  & (IData)(vlSelf->__PVT__meta_rd_2_valid)) 
                                                 << 2U) 
                                                | ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                      == vlSelf->__PVT__meta_rd_1_tag) 
                                                     & (IData)(vlSelf->__PVT__meta_rd_1_valid)) 
                                                    << 1U) 
                                                   | ((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                       == vlSelf->__PVT__meta_rd_0_tag) 
                                                      & (IData)(vlSelf->__PVT__meta_rd_0_valid)))));
    vlSelf->__PVT__stage3__DOT__burst_last = ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3) 
                                              & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T)));
    vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2 
        = (vlSelf->__PVT__stage3__DOT__buf_wdata & vlSelf->__PVT__stage3__DOT__cpu_word_mask);
    vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->__PVT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                 | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->__PVT__stage3__DOT___io_mem_out_req_valid_T_5 
        = ((IData)(vlSelf->__PVT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
               & (~ (IData)(vlSelf->__PVT__stage3__DOT__hit))) 
              | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                 >> 2U)));
    vlSelf->__PVT__stage3__DOT__wb_en = ((((IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_valid) 
                                           & (IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_dirty)) 
                                          & (~ (IData)(vlSelf->__PVT__stage3__DOT__hit))) 
                                         & (IData)(vlSelf->__PVT__stage3__DOT__state));
    vlSelf->__PVT__stage2__DOT__target_way1H = ((0U 
                                                 != (IData)(vlSelf->__PVT__stage2__DOT__hit_array))
                                                 ? (IData)(vlSelf->__PVT__stage2__DOT__hit_array)
                                                 : (IData)(vlSelf->__PVT__stage2__DOT__replace1H));
    vlSelf->io_in_ret_valid = ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                               | ((0x10U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                   ? (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                                   : (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                       >> 3U) & (IData)(vlSelf->__PVT__stage3__DOT__burst_last))));
    vlSelf->__PVT___stage3_io_wt_en = ((IData)(vlSelf->__PVT__stage3__DOT__s3_valid) 
                                       & ((((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                            & (IData)(vlSelf->__PVT__stage3__DOT__hit)) 
                                           & (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)) 
                                          | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                              >> 3U) 
                                             & (IData)(vlSelf->__PVT__stage3__DOT__burst_last))));
    vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3 
        = ((vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata 
            & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
           | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2);
    vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->__PVT__stage2__DOT__s2_valid)) 
                 | (IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1)));
    vlSelf->io_out_req_bits_addr = (((QData)((IData)(
                                                     ((IData)(vlSelf->__PVT__stage3__DOT__wb_en)
                                                       ? vlSelf->__PVT__stage3__DOT__buf_target_line_tag
                                                       : vlSelf->__PVT__stage3__DOT__buf_tag))) 
                                     << 9U) | (QData)((IData)(
                                                              (((IData)(vlSelf->__PVT__stage3__DOT__buf_index) 
                                                                << 4U) 
                                                               | (IData)(vlSelf->__PVT__stage3__DOT__buf_offset)))));
    vlSelf->io_out_req_bits_wr = ((IData)(vlSelf->__PVT__stage3__DOT__wb_en) 
                                  | ((IData)(vlSelf->__PVT__stage3__DOT__buf_mthrough) 
                                     & (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)));
    vlSelf->__Vcellinp__CacheDataRam__io_WEN = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_1__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (1U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_2__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_3__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (3U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__PVT__data_addr = (0x1fU & ((IData)(vlSelf->__PVT___stage3_io_wt_en)
                                          ? (IData)(vlSelf->__PVT__stage3__DOT__buf_index)
                                          : (IData)(
                                                    (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                     >> 4U))));
    vlSelf->__PVT__stage1__DOT___io_cpu_ready_T = ((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                                                   & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
    vlSelf->__PVT___T_18 = ((IData)(vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) 
                            | (IData)(vlSelf->__PVT___stage3_io_wt_en));
}

void VSimTop_CacheTop___settle__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__8(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___settle__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__8\n"); );
    // Body
    vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6 = 
        (1U & ((IData)(vlSelf->__PVT__stage3__DOT__state) 
               >> 5U));
    if (vlSelf->__PVT__stage3__DOT__buf_mthrough) {
        vlSelf->io_out_req_bits_wdata[0U] = (IData)(
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                      ? 0ULL
                                                      : vlSelf->__PVT__stage3__DOT__buf_wdata));
        vlSelf->io_out_req_bits_wdata[1U] = (IData)(
                                                    (((8U 
                                                       & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                       ? 0ULL
                                                       : vlSelf->__PVT__stage3__DOT__buf_wdata) 
                                                     >> 0x20U));
        vlSelf->io_out_req_bits_wdata[2U] = (IData)(
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                      ? vlSelf->__PVT__stage3__DOT__buf_wdata
                                                      : 0ULL));
        vlSelf->io_out_req_bits_wdata[3U] = (IData)(
                                                    (((8U 
                                                       & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                       ? vlSelf->__PVT__stage3__DOT__buf_wdata
                                                       : 0ULL) 
                                                     >> 0x20U));
    } else {
        vlSelf->io_out_req_bits_wdata[0U] = (IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_data_0);
        vlSelf->io_out_req_bits_wdata[1U] = (IData)(
                                                    (vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                                                     >> 0x20U));
        vlSelf->io_out_req_bits_wdata[2U] = (IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_data_1);
        vlSelf->io_out_req_bits_wdata[3U] = (IData)(
                                                    (vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                                                     >> 0x20U));
    }
    vlSelf->__PVT__stage3__DOT__refill_hit = ((IData)(vlSelf->__PVT__stage3__DOT__cnt) 
                                              == (1U 
                                                  & ((IData)(vlSelf->__PVT__stage3__DOT__buf_offset) 
                                                     >> 3U)));
    vlSelf->__PVT__stage3__DOT__cpu_word_mask = (((QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 7U)))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 6U)))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 5U)))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 4U)))))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__stage3__DOT__buf_wstrb)))))))))));
    vlSelf->__PVT__stage3__DOT__hit = ((IData)(vlSelf->__PVT__stage3__DOT__buf_hit) 
                                       & (IData)(vlSelf->__PVT__stage3__DOT__state));
    vlSelf->__PVT__stage2__DOT__hit_array = ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                == vlSelf->__PVT__meta_rd_3_tag) 
                                               & (IData)(vlSelf->__PVT__meta_rd_3_valid)) 
                                              << 3U) 
                                             | ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                   == vlSelf->__PVT__meta_rd_2_tag) 
                                                  & (IData)(vlSelf->__PVT__meta_rd_2_valid)) 
                                                 << 2U) 
                                                | ((((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                      == vlSelf->__PVT__meta_rd_1_tag) 
                                                     & (IData)(vlSelf->__PVT__meta_rd_1_valid)) 
                                                    << 1U) 
                                                   | ((vlSelf->__PVT__stage2__DOT__buf_tag 
                                                       == vlSelf->__PVT__meta_rd_0_tag) 
                                                      & (IData)(vlSelf->__PVT__meta_rd_0_valid)))));
    vlSelf->__PVT__stage3__DOT__burst_last = ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid) 
                                              & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                  >> 1U) 
                                                 | ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                                    | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
    vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2 
        = (vlSelf->__PVT__stage3__DOT__buf_wdata & vlSelf->__PVT__stage3__DOT__cpu_word_mask);
    vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->__PVT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid))) 
                 | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->__PVT__stage3__DOT___io_mem_out_req_valid_T_5 
        = ((IData)(vlSelf->__PVT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
               & (~ (IData)(vlSelf->__PVT__stage3__DOT__hit))) 
              | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                 >> 2U)));
    vlSelf->__PVT__stage3__DOT__wb_en = ((((IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_valid) 
                                           & (IData)(vlSelf->__PVT__stage3__DOT__buf_target_line_dirty)) 
                                          & (~ (IData)(vlSelf->__PVT__stage3__DOT__hit))) 
                                         & (IData)(vlSelf->__PVT__stage3__DOT__state));
    vlSelf->__PVT__stage2__DOT__target_way1H = ((0U 
                                                 != (IData)(vlSelf->__PVT__stage2__DOT__hit_array))
                                                 ? (IData)(vlSelf->__PVT__stage2__DOT__hit_array)
                                                 : (IData)(vlSelf->__PVT__stage2__DOT__replace1H));
    vlSelf->io_in_ret_valid = ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                               | ((0x10U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                   ? (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                                   : (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                       >> 3U) & (IData)(vlSelf->__PVT__stage3__DOT__burst_last))));
    vlSelf->__PVT___stage3_io_wt_en = ((IData)(vlSelf->__PVT__stage3__DOT__s3_valid) 
                                       & ((((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                            & (IData)(vlSelf->__PVT__stage3__DOT__hit)) 
                                           & (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)) 
                                          | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                              >> 3U) 
                                             & (IData)(vlSelf->__PVT__stage3__DOT__burst_last))));
    vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3 
        = ((vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata 
            & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
           | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2);
    vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->__PVT__stage2__DOT__s2_valid)) 
                 | (IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1)));
    vlSelf->io_out_req_bits_wr = ((IData)(vlSelf->__PVT__stage3__DOT__wb_en) 
                                  | ((IData)(vlSelf->__PVT__stage3__DOT__buf_mthrough) 
                                     & (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)));
    vlSelf->io_out_req_bits_addr = (((QData)((IData)(
                                                     ((IData)(vlSelf->__PVT__stage3__DOT__wb_en)
                                                       ? vlSelf->__PVT__stage3__DOT__buf_target_line_tag
                                                       : vlSelf->__PVT__stage3__DOT__buf_tag))) 
                                     << 9U) | (QData)((IData)(
                                                              (((IData)(vlSelf->__PVT__stage3__DOT__buf_index) 
                                                                << 4U) 
                                                               | (IData)(vlSelf->__PVT__stage3__DOT__buf_offset)))));
    vlSelf->__Vcellinp__CacheDataRam__io_WEN = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_1__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (1U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_2__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__Vcellinp__CacheDataRam_3__io_WEN = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                      & (3U 
                                                         == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)))));
    vlSelf->__PVT__data_addr = (0x1fU & ((IData)(vlSelf->__PVT___stage3_io_wt_en)
                                          ? (IData)(vlSelf->__PVT__stage3__DOT__buf_index)
                                          : (IData)(
                                                    (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                     >> 4U))));
    vlSelf->io_in_ret_rdata = ((IData)(vlSelf->__PVT__stage3__DOT__hit)
                                ? ((8U & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                    ? vlSelf->__PVT__stage3__DOT__buf_target_line_data_1
                                    : vlSelf->__PVT__stage3__DOT__buf_target_line_data_0)
                                : ((0x10U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                    ? vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                                    : ((8U & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                        ? ((1U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                            ? ((8U 
                                                & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                ? (
                                                   (vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                                                    & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
                                                   | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2)
                                                : vlSelf->__PVT__stage3__DOT__buf_target_line_data_1)
                                            : ((IData)(vlSelf->__PVT__stage3__DOT__cnt)
                                                ? ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                                                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                                                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata)
                                                : vlSelf->__PVT__stage3__DOT__buf_target_line_data_1))
                                        : ((1U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                            ? ((8U 
                                                & (IData)(vlSelf->__PVT__stage3__DOT__buf_offset))
                                                ? vlSelf->__PVT__stage3__DOT__buf_target_line_data_0
                                                : (
                                                   (vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                                                    & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
                                                   | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2))
                                            : ((IData)(vlSelf->__PVT__stage3__DOT__cnt)
                                                ? vlSelf->__PVT__stage3__DOT__buf_target_line_data_0
                                                : ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                                                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                                                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata))))));
    vlSelf->__PVT__stage1__DOT___io_cpu_ready_T = ((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                                                   & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
    vlSelf->__PVT___T_18 = ((IData)(vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) 
                            | (IData)(vlSelf->__PVT___stage3_io_wt_en));
}

void VSimTop_CacheTop___ctor_var_reset(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_req_bits_wr = VL_RAND_RESET_I(1);
    vlSelf->io_in_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_in_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_in_req_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->io_in_req_bits_mthrough = VL_RAND_RESET_I(1);
    vlSelf->io_out_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_ret_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_out_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_in_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_ret_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_in_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_req_bits_wr = VL_RAND_RESET_I(1);
    vlSelf->io_out_req_bits_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->io_out_req_bits_wdata);
    vlSelf->io_out_req_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->io_out_req_bits_mthrough = VL_RAND_RESET_I(1);
    vlSelf->__PVT___stage3_io_wt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_4_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_4_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_5_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_5_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_6_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_6_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_7_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_7_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_8_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_8_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_9_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_9_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_10_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_10_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_11_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_11_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_12_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_12_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_13_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_13_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_14_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_14_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_15_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_15_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_16_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_16_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_17_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_17_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_18_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_18_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_19_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_19_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_20_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_20_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_21_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_21_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_22_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_22_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_23_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_23_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_24_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_24_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_25_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_25_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_26_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_26_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_27_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_27_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_28_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_28_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_29_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_29_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_30_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_30_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_0_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_31_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_0_31_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_4_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_4_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_5_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_5_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_6_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_6_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_7_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_7_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_8_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_8_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_9_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_9_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_10_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_10_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_11_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_11_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_12_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_12_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_13_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_13_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_14_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_14_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_15_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_15_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_16_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_16_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_17_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_17_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_18_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_18_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_19_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_19_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_20_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_20_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_21_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_21_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_22_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_22_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_23_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_23_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_24_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_24_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_25_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_25_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_26_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_26_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_27_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_27_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_28_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_28_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_29_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_29_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_30_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_30_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_1_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_31_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_1_31_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_4_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_4_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_5_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_5_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_6_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_6_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_7_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_7_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_8_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_8_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_9_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_9_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_10_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_10_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_11_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_11_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_12_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_12_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_13_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_13_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_14_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_14_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_15_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_15_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_16_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_16_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_17_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_17_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_18_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_18_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_19_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_19_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_20_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_20_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_21_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_21_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_22_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_22_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_23_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_23_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_24_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_24_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_25_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_25_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_26_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_26_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_27_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_27_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_28_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_28_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_29_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_29_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_30_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_30_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_2_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_31_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_2_31_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_4_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_4_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_5_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_5_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_6_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_6_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_7_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_7_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_8_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_8_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_9_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_9_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_10_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_10_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_11_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_11_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_12_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_12_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_13_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_13_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_14_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_14_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_15_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_15_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_16_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_16_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_17_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_17_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_18_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_18_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_19_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_19_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_20_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_20_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_21_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_21_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_22_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_22_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_23_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_23_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_24_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_24_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_25_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_25_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_26_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_26_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_27_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_27_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_28_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_28_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_29_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_29_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_30_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_30_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__cache_meta_3_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_31_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_meta_3_31_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__meta_rd_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__meta_rd_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__meta_rd_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__meta_rd_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__meta_rd_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__data_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT___T_18 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CacheDataRam__io_WEN = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CacheDataRam_1__io_WEN = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CacheDataRam_2__io_WEN = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CacheDataRam_3__io_WEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_410 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_414 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_418 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_422 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_31 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_39 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_426 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_43 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_430 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_47 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_434 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_438 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_442 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_59 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_446 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_63 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_450 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_454 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_71 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_458 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_75 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_462 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_79 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_466 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_83 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_470 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_87 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_474 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_91 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_478 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_95 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_482 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_99 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_486 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_103 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_490 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_107 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_494 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_111 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_498 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_115 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_502 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_119 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_506 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_123 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_510 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_127 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_514 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_131 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_518 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_135 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_522 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_139 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_526 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_143 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_530 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_147 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_151 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_155 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_159 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_163 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_167 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_171 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_175 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_179 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_183 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_187 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_191 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_195 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_199 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_203 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_207 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_211 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_215 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_219 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_223 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_227 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_231 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_235 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_243 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_247 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_251 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_255 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_259 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_263 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_267 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_271 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_275 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_279 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_283 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_287 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_291 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_295 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_299 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_303 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_307 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_311 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_315 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_319 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_323 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_327 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_331 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_335 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_339 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_343 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_347 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_351 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_355 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_359 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_363 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_367 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_371 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_375 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_379 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_383 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_387 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_391 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_395 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_399 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_403 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_407 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_411 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_415 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_419 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_423 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_427 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_431 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_435 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_439 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_443 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_447 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_451 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_455 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_459 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_463 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_467 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_471 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_475 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_479 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_483 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_487 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_491 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_495 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_499 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_503 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_507 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_511 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_515 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_519 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_523 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_527 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_531 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT___T_535 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage1__DOT___io_cpu_ready_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage2__DOT__s2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage2__DOT__buf_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage2__DOT__buf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage2__DOT__buf_wstrb = VL_RAND_RESET_I(8);
    vlSelf->__PVT__stage2__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage2__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__stage2__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__stage2__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage2__DOT__hit_array = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage2__DOT__replace1H = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage2__DOT__target_way1H = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT__buf_wstrb = VL_RAND_RESET_I(8);
    vlSelf->__PVT__stage3__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__stage3__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__stage3__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage3__DOT__buf_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_target_way = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stage3__DOT__buf_target_line_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_target_line_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__buf_target_line_tag = VL_RAND_RESET_I(23);
    vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->__PVT__stage3__DOT__cnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__cpu_word_mask = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__stage3__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__burst_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__refill_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT___io_mem_out_req_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__cache_meta_0_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_27_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_26_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_25_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_24_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_23_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_22_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_21_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_20_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_19_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_18_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_17_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_16_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_28_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_29_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_1_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_3_30_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__meta_rd_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_0_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__meta_rd_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cache_meta_2_31_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__meta_rd_0_tag = VL_RAND_RESET_I(23);
    vlSelf->__Vdly__meta_rd_1_tag = VL_RAND_RESET_I(23);
    vlSelf->__Vdly__meta_rd_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__meta_rd_2_tag = VL_RAND_RESET_I(23);
    vlSelf->__Vdly__meta_rd_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__meta_rd_3_tag = VL_RAND_RESET_I(23);
    vlSelf->__Vdly__stage3__DOT__buf_wr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stage3__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stage3__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__stage3__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__stage3__DOT__cnt = VL_RAND_RESET_I(1);
}

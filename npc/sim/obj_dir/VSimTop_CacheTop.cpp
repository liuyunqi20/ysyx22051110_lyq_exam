// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop_CacheTop.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__1(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__1\n"); );
    // Variables
    VlWide<23>/*735:0*/ __Vtemp31;
    VlWide<23>/*735:0*/ __Vtemp61;
    VlWide<23>/*735:0*/ __Vtemp91;
    VlWide<23>/*735:0*/ __Vtemp121;
    // Body
    vlSelf->__Vdly__stage3__DOT__cnt = vlSelf->__PVT__stage3__DOT__cnt;
    vlSelf->__Vdly__stage3__DOT__buf_offset = vlSelf->__PVT__stage3__DOT__buf_offset;
    vlSelf->__Vdly__stage3__DOT__buf_mthrough = vlSelf->__PVT__stage3__DOT__buf_mthrough;
    vlSelf->__Vdly__stage3__DOT__buf_wr = vlSelf->__PVT__stage3__DOT__buf_wr;
    vlSelf->__Vdly__stage3__DOT__state = vlSelf->__PVT__stage3__DOT__state;
    vlSelf->__Vdly__cache_meta_2_31_valid = vlSelf->__PVT__cache_meta_2_31_valid;
    vlSelf->__Vdly__cache_meta_0_31_valid = vlSelf->__PVT__cache_meta_0_31_valid;
    vlSelf->__Vdly__cache_meta_3_31_valid = vlSelf->__PVT__cache_meta_3_31_valid;
    vlSelf->__Vdly__cache_meta_1_31_valid = vlSelf->__PVT__cache_meta_1_31_valid;
    vlSelf->__Vdly__cache_meta_3_30_valid = vlSelf->__PVT__cache_meta_3_30_valid;
    vlSelf->__Vdly__cache_meta_2_30_valid = vlSelf->__PVT__cache_meta_2_30_valid;
    vlSelf->__Vdly__cache_meta_1_30_valid = vlSelf->__PVT__cache_meta_1_30_valid;
    vlSelf->__Vdly__cache_meta_0_30_valid = vlSelf->__PVT__cache_meta_0_30_valid;
    vlSelf->__Vdly__cache_meta_3_29_valid = vlSelf->__PVT__cache_meta_3_29_valid;
    vlSelf->__Vdly__cache_meta_2_29_valid = vlSelf->__PVT__cache_meta_2_29_valid;
    vlSelf->__Vdly__cache_meta_1_29_valid = vlSelf->__PVT__cache_meta_1_29_valid;
    vlSelf->__Vdly__cache_meta_0_29_valid = vlSelf->__PVT__cache_meta_0_29_valid;
    vlSelf->__Vdly__cache_meta_3_28_valid = vlSelf->__PVT__cache_meta_3_28_valid;
    vlSelf->__Vdly__cache_meta_2_28_valid = vlSelf->__PVT__cache_meta_2_28_valid;
    vlSelf->__Vdly__cache_meta_1_28_valid = vlSelf->__PVT__cache_meta_1_28_valid;
    vlSelf->__Vdly__cache_meta_0_28_valid = vlSelf->__PVT__cache_meta_0_28_valid;
    vlSelf->__Vdly__cache_meta_3_11_valid = vlSelf->__PVT__cache_meta_3_11_valid;
    vlSelf->__Vdly__cache_meta_2_11_valid = vlSelf->__PVT__cache_meta_2_11_valid;
    vlSelf->__Vdly__cache_meta_1_11_valid = vlSelf->__PVT__cache_meta_1_11_valid;
    vlSelf->__Vdly__cache_meta_0_11_valid = vlSelf->__PVT__cache_meta_0_11_valid;
    vlSelf->__Vdly__cache_meta_3_10_valid = vlSelf->__PVT__cache_meta_3_10_valid;
    vlSelf->__Vdly__cache_meta_2_10_valid = vlSelf->__PVT__cache_meta_2_10_valid;
    vlSelf->__Vdly__cache_meta_1_10_valid = vlSelf->__PVT__cache_meta_1_10_valid;
    vlSelf->__Vdly__cache_meta_0_10_valid = vlSelf->__PVT__cache_meta_0_10_valid;
    vlSelf->__Vdly__cache_meta_3_9_valid = vlSelf->__PVT__cache_meta_3_9_valid;
    vlSelf->__Vdly__cache_meta_2_9_valid = vlSelf->__PVT__cache_meta_2_9_valid;
    vlSelf->__Vdly__cache_meta_1_9_valid = vlSelf->__PVT__cache_meta_1_9_valid;
    vlSelf->__Vdly__cache_meta_0_9_valid = vlSelf->__PVT__cache_meta_0_9_valid;
    vlSelf->__Vdly__cache_meta_3_8_valid = vlSelf->__PVT__cache_meta_3_8_valid;
    vlSelf->__Vdly__cache_meta_2_8_valid = vlSelf->__PVT__cache_meta_2_8_valid;
    vlSelf->__Vdly__cache_meta_1_8_valid = vlSelf->__PVT__cache_meta_1_8_valid;
    vlSelf->__Vdly__cache_meta_0_8_valid = vlSelf->__PVT__cache_meta_0_8_valid;
    vlSelf->__Vdly__cache_meta_3_6_valid = vlSelf->__PVT__cache_meta_3_6_valid;
    vlSelf->__Vdly__cache_meta_2_6_valid = vlSelf->__PVT__cache_meta_2_6_valid;
    vlSelf->__Vdly__cache_meta_1_6_valid = vlSelf->__PVT__cache_meta_1_6_valid;
    vlSelf->__Vdly__cache_meta_0_6_valid = vlSelf->__PVT__cache_meta_0_6_valid;
    vlSelf->__Vdly__cache_meta_3_5_valid = vlSelf->__PVT__cache_meta_3_5_valid;
    vlSelf->__Vdly__cache_meta_2_5_valid = vlSelf->__PVT__cache_meta_2_5_valid;
    vlSelf->__Vdly__cache_meta_1_5_valid = vlSelf->__PVT__cache_meta_1_5_valid;
    vlSelf->__Vdly__cache_meta_0_5_valid = vlSelf->__PVT__cache_meta_0_5_valid;
    vlSelf->__Vdly__cache_meta_3_4_valid = vlSelf->__PVT__cache_meta_3_4_valid;
    vlSelf->__Vdly__cache_meta_2_4_valid = vlSelf->__PVT__cache_meta_2_4_valid;
    vlSelf->__Vdly__cache_meta_1_4_valid = vlSelf->__PVT__cache_meta_1_4_valid;
    vlSelf->__Vdly__cache_meta_0_4_valid = vlSelf->__PVT__cache_meta_0_4_valid;
    vlSelf->__Vdly__cache_meta_3_3_valid = vlSelf->__PVT__cache_meta_3_3_valid;
    vlSelf->__Vdly__cache_meta_2_3_valid = vlSelf->__PVT__cache_meta_2_3_valid;
    vlSelf->__Vdly__cache_meta_1_3_valid = vlSelf->__PVT__cache_meta_1_3_valid;
    vlSelf->__Vdly__cache_meta_0_3_valid = vlSelf->__PVT__cache_meta_0_3_valid;
    vlSelf->__Vdly__cache_meta_3_2_valid = vlSelf->__PVT__cache_meta_3_2_valid;
    vlSelf->__Vdly__cache_meta_2_2_valid = vlSelf->__PVT__cache_meta_2_2_valid;
    vlSelf->__Vdly__cache_meta_1_2_valid = vlSelf->__PVT__cache_meta_1_2_valid;
    vlSelf->__Vdly__cache_meta_0_2_valid = vlSelf->__PVT__cache_meta_0_2_valid;
    vlSelf->__Vdly__cache_meta_3_1_valid = vlSelf->__PVT__cache_meta_3_1_valid;
    vlSelf->__Vdly__cache_meta_2_1_valid = vlSelf->__PVT__cache_meta_2_1_valid;
    vlSelf->__Vdly__cache_meta_1_1_valid = vlSelf->__PVT__cache_meta_1_1_valid;
    vlSelf->__Vdly__cache_meta_0_1_valid = vlSelf->__PVT__cache_meta_0_1_valid;
    vlSelf->__Vdly__cache_meta_3_0_valid = vlSelf->__PVT__cache_meta_3_0_valid;
    vlSelf->__Vdly__cache_meta_2_0_valid = vlSelf->__PVT__cache_meta_2_0_valid;
    vlSelf->__Vdly__cache_meta_1_0_valid = vlSelf->__PVT__cache_meta_1_0_valid;
    vlSelf->__Vdly__cache_meta_0_0_valid = vlSelf->__PVT__cache_meta_0_0_valid;
    vlSelf->__Vdly__cache_meta_3_7_valid = vlSelf->__PVT__cache_meta_3_7_valid;
    vlSelf->__Vdly__cache_meta_2_7_valid = vlSelf->__PVT__cache_meta_2_7_valid;
    vlSelf->__Vdly__cache_meta_1_7_valid = vlSelf->__PVT__cache_meta_1_7_valid;
    vlSelf->__Vdly__cache_meta_0_7_valid = vlSelf->__PVT__cache_meta_0_7_valid;
    vlSelf->__Vdly__cache_meta_3_12_valid = vlSelf->__PVT__cache_meta_3_12_valid;
    vlSelf->__Vdly__cache_meta_2_12_valid = vlSelf->__PVT__cache_meta_2_12_valid;
    vlSelf->__Vdly__cache_meta_1_12_valid = vlSelf->__PVT__cache_meta_1_12_valid;
    vlSelf->__Vdly__cache_meta_0_12_valid = vlSelf->__PVT__cache_meta_0_12_valid;
    vlSelf->__Vdly__cache_meta_3_13_valid = vlSelf->__PVT__cache_meta_3_13_valid;
    vlSelf->__Vdly__cache_meta_2_13_valid = vlSelf->__PVT__cache_meta_2_13_valid;
    vlSelf->__Vdly__cache_meta_1_13_valid = vlSelf->__PVT__cache_meta_1_13_valid;
    vlSelf->__Vdly__cache_meta_0_13_valid = vlSelf->__PVT__cache_meta_0_13_valid;
    vlSelf->__Vdly__cache_meta_3_14_valid = vlSelf->__PVT__cache_meta_3_14_valid;
    vlSelf->__Vdly__cache_meta_2_14_valid = vlSelf->__PVT__cache_meta_2_14_valid;
    vlSelf->__Vdly__cache_meta_1_14_valid = vlSelf->__PVT__cache_meta_1_14_valid;
    vlSelf->__Vdly__cache_meta_0_14_valid = vlSelf->__PVT__cache_meta_0_14_valid;
    vlSelf->__Vdly__cache_meta_3_15_valid = vlSelf->__PVT__cache_meta_3_15_valid;
    vlSelf->__Vdly__cache_meta_2_15_valid = vlSelf->__PVT__cache_meta_2_15_valid;
    vlSelf->__Vdly__cache_meta_1_15_valid = vlSelf->__PVT__cache_meta_1_15_valid;
    vlSelf->__Vdly__cache_meta_0_15_valid = vlSelf->__PVT__cache_meta_0_15_valid;
    vlSelf->__Vdly__cache_meta_3_16_valid = vlSelf->__PVT__cache_meta_3_16_valid;
    vlSelf->__Vdly__cache_meta_2_16_valid = vlSelf->__PVT__cache_meta_2_16_valid;
    vlSelf->__Vdly__cache_meta_1_16_valid = vlSelf->__PVT__cache_meta_1_16_valid;
    vlSelf->__Vdly__cache_meta_0_16_valid = vlSelf->__PVT__cache_meta_0_16_valid;
    vlSelf->__Vdly__cache_meta_3_17_valid = vlSelf->__PVT__cache_meta_3_17_valid;
    vlSelf->__Vdly__cache_meta_2_17_valid = vlSelf->__PVT__cache_meta_2_17_valid;
    vlSelf->__Vdly__cache_meta_1_17_valid = vlSelf->__PVT__cache_meta_1_17_valid;
    vlSelf->__Vdly__cache_meta_0_17_valid = vlSelf->__PVT__cache_meta_0_17_valid;
    vlSelf->__Vdly__cache_meta_3_18_valid = vlSelf->__PVT__cache_meta_3_18_valid;
    vlSelf->__Vdly__cache_meta_2_18_valid = vlSelf->__PVT__cache_meta_2_18_valid;
    vlSelf->__Vdly__cache_meta_1_18_valid = vlSelf->__PVT__cache_meta_1_18_valid;
    vlSelf->__Vdly__cache_meta_0_18_valid = vlSelf->__PVT__cache_meta_0_18_valid;
    vlSelf->__Vdly__cache_meta_3_19_valid = vlSelf->__PVT__cache_meta_3_19_valid;
    vlSelf->__Vdly__cache_meta_2_19_valid = vlSelf->__PVT__cache_meta_2_19_valid;
    vlSelf->__Vdly__cache_meta_1_19_valid = vlSelf->__PVT__cache_meta_1_19_valid;
    vlSelf->__Vdly__cache_meta_0_19_valid = vlSelf->__PVT__cache_meta_0_19_valid;
    vlSelf->__Vdly__cache_meta_3_20_valid = vlSelf->__PVT__cache_meta_3_20_valid;
    vlSelf->__Vdly__cache_meta_2_20_valid = vlSelf->__PVT__cache_meta_2_20_valid;
    vlSelf->__Vdly__cache_meta_1_20_valid = vlSelf->__PVT__cache_meta_1_20_valid;
    vlSelf->__Vdly__cache_meta_0_20_valid = vlSelf->__PVT__cache_meta_0_20_valid;
    vlSelf->__Vdly__cache_meta_3_21_valid = vlSelf->__PVT__cache_meta_3_21_valid;
    vlSelf->__Vdly__cache_meta_2_21_valid = vlSelf->__PVT__cache_meta_2_21_valid;
    vlSelf->__Vdly__cache_meta_1_21_valid = vlSelf->__PVT__cache_meta_1_21_valid;
    vlSelf->__Vdly__cache_meta_0_21_valid = vlSelf->__PVT__cache_meta_0_21_valid;
    vlSelf->__Vdly__cache_meta_3_22_valid = vlSelf->__PVT__cache_meta_3_22_valid;
    vlSelf->__Vdly__cache_meta_2_22_valid = vlSelf->__PVT__cache_meta_2_22_valid;
    vlSelf->__Vdly__cache_meta_1_22_valid = vlSelf->__PVT__cache_meta_1_22_valid;
    vlSelf->__Vdly__cache_meta_0_22_valid = vlSelf->__PVT__cache_meta_0_22_valid;
    vlSelf->__Vdly__cache_meta_3_23_valid = vlSelf->__PVT__cache_meta_3_23_valid;
    vlSelf->__Vdly__cache_meta_2_23_valid = vlSelf->__PVT__cache_meta_2_23_valid;
    vlSelf->__Vdly__cache_meta_1_23_valid = vlSelf->__PVT__cache_meta_1_23_valid;
    vlSelf->__Vdly__cache_meta_0_23_valid = vlSelf->__PVT__cache_meta_0_23_valid;
    vlSelf->__Vdly__cache_meta_3_24_valid = vlSelf->__PVT__cache_meta_3_24_valid;
    vlSelf->__Vdly__cache_meta_2_24_valid = vlSelf->__PVT__cache_meta_2_24_valid;
    vlSelf->__Vdly__cache_meta_1_24_valid = vlSelf->__PVT__cache_meta_1_24_valid;
    vlSelf->__Vdly__cache_meta_0_24_valid = vlSelf->__PVT__cache_meta_0_24_valid;
    vlSelf->__Vdly__cache_meta_3_25_valid = vlSelf->__PVT__cache_meta_3_25_valid;
    vlSelf->__Vdly__cache_meta_2_25_valid = vlSelf->__PVT__cache_meta_2_25_valid;
    vlSelf->__Vdly__cache_meta_1_25_valid = vlSelf->__PVT__cache_meta_1_25_valid;
    vlSelf->__Vdly__cache_meta_0_25_valid = vlSelf->__PVT__cache_meta_0_25_valid;
    vlSelf->__Vdly__cache_meta_3_26_valid = vlSelf->__PVT__cache_meta_3_26_valid;
    vlSelf->__Vdly__cache_meta_2_26_valid = vlSelf->__PVT__cache_meta_2_26_valid;
    vlSelf->__Vdly__cache_meta_1_26_valid = vlSelf->__PVT__cache_meta_1_26_valid;
    vlSelf->__Vdly__cache_meta_0_26_valid = vlSelf->__PVT__cache_meta_0_26_valid;
    vlSelf->__Vdly__cache_meta_3_27_valid = vlSelf->__PVT__cache_meta_3_27_valid;
    vlSelf->__Vdly__cache_meta_2_27_valid = vlSelf->__PVT__cache_meta_2_27_valid;
    vlSelf->__Vdly__cache_meta_1_27_valid = vlSelf->__PVT__cache_meta_1_27_valid;
    vlSelf->__Vdly__cache_meta_0_27_valid = vlSelf->__PVT__cache_meta_0_27_valid;
    vlSelf->__Vdly__meta_rd_3_dirty = vlSelf->__PVT__meta_rd_3_dirty;
    vlSelf->__Vdly__meta_rd_2_dirty = vlSelf->__PVT__meta_rd_2_dirty;
    vlSelf->__Vdly__meta_rd_1_dirty = vlSelf->__PVT__meta_rd_1_dirty;
    vlSelf->__Vdly__meta_rd_0_dirty = vlSelf->__PVT__meta_rd_0_dirty;
    vlSelf->__Vdly__meta_rd_3_tag = vlSelf->__PVT__meta_rd_3_tag;
    vlSelf->__Vdly__meta_rd_2_tag = vlSelf->__PVT__meta_rd_2_tag;
    vlSelf->__Vdly__meta_rd_1_tag = vlSelf->__PVT__meta_rd_1_tag;
    vlSelf->__Vdly__meta_rd_0_tag = vlSelf->__PVT__meta_rd_0_tag;
    vlSelf->__PVT__stage2__DOT__replace1H = ((IData)(vlSymsp->TOP.reset)
                                              ? 1U : 
                                             ((0xeU 
                                               & ((IData)(vlSelf->__PVT__stage2__DOT__replace1H) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__stage2__DOT__replace1H) 
                                                    >> 3U))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->__PVT__stage3__DOT__s3_valid = vlSelf->__PVT__stage2__DOT__s2_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_3_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_3_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_3_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_3_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_3_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_3_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_3_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_3_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_3_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_3_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_3_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_3_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_3_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_2_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_2_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_2_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_2_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_2_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_2_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_2_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_2_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_2_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_2_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_2_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_2_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_2_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_1_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_1_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_1_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_1_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_1_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_1_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_1_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_1_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_1_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_1_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_1_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_1_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_1_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_0_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_0_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_0_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_0_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_0_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_0_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_0_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_0_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_0_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_0_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_0_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_0_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_0_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_3_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp31[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_3_1_tag)) 
                                  << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_3_0_tag))));
        __Vtemp31[1U] = ((vlSelf->__PVT__cache_meta_3_2_tag 
                          << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_3_1_tag)) 
                                                << 0x17U) 
                                               | (QData)((IData)(vlSelf->__PVT__cache_meta_3_0_tag))) 
                                              >> 0x20U)));
        __Vtemp31[2U] = ((vlSelf->__PVT__cache_meta_3_4_tag 
                          << 0x1cU) | ((vlSelf->__PVT__cache_meta_3_3_tag 
                                        << 5U) | (vlSelf->__PVT__cache_meta_3_2_tag 
                                                  >> 0x12U)));
        __Vtemp31[3U] = ((vlSelf->__PVT__cache_meta_3_5_tag 
                          << 0x13U) | (vlSelf->__PVT__cache_meta_3_4_tag 
                                       >> 4U));
        __Vtemp31[4U] = ((vlSelf->__PVT__cache_meta_3_6_tag 
                          << 0xaU) | (vlSelf->__PVT__cache_meta_3_5_tag 
                                      >> 0xdU));
        __Vtemp31[5U] = ((vlSelf->__PVT__cache_meta_3_8_tag 
                          << 0x18U) | ((vlSelf->__PVT__cache_meta_3_7_tag 
                                        << 1U) | (vlSelf->__PVT__cache_meta_3_6_tag 
                                                  >> 0x16U)));
        __Vtemp31[6U] = ((vlSelf->__PVT__cache_meta_3_9_tag 
                          << 0xfU) | (vlSelf->__PVT__cache_meta_3_8_tag 
                                      >> 8U));
        __Vtemp31[7U] = ((vlSelf->__PVT__cache_meta_3_11_tag 
                          << 0x1dU) | ((vlSelf->__PVT__cache_meta_3_10_tag 
                                        << 6U) | (vlSelf->__PVT__cache_meta_3_9_tag 
                                                  >> 0x11U)));
        __Vtemp31[8U] = ((vlSelf->__PVT__cache_meta_3_12_tag 
                          << 0x14U) | (vlSelf->__PVT__cache_meta_3_11_tag 
                                       >> 3U));
        __Vtemp31[9U] = ((vlSelf->__PVT__cache_meta_3_13_tag 
                          << 0xbU) | (vlSelf->__PVT__cache_meta_3_12_tag 
                                      >> 0xcU));
        __Vtemp31[0xaU] = ((vlSelf->__PVT__cache_meta_3_15_tag 
                            << 0x19U) | ((vlSelf->__PVT__cache_meta_3_14_tag 
                                          << 2U) | 
                                         (vlSelf->__PVT__cache_meta_3_13_tag 
                                          >> 0x15U)));
        __Vtemp31[0xbU] = ((vlSelf->__PVT__cache_meta_3_16_tag 
                            << 0x10U) | (vlSelf->__PVT__cache_meta_3_15_tag 
                                         >> 7U));
        __Vtemp31[0xcU] = ((vlSelf->__PVT__cache_meta_3_18_tag 
                            << 0x1eU) | ((vlSelf->__PVT__cache_meta_3_17_tag 
                                          << 7U) | 
                                         (vlSelf->__PVT__cache_meta_3_16_tag 
                                          >> 0x10U)));
        __Vtemp31[0xdU] = ((vlSelf->__PVT__cache_meta_3_19_tag 
                            << 0x15U) | (vlSelf->__PVT__cache_meta_3_18_tag 
                                         >> 2U));
        __Vtemp31[0xeU] = ((vlSelf->__PVT__cache_meta_3_20_tag 
                            << 0xcU) | (vlSelf->__PVT__cache_meta_3_19_tag 
                                        >> 0xbU));
        __Vtemp31[0xfU] = ((vlSelf->__PVT__cache_meta_3_22_tag 
                            << 0x1aU) | ((vlSelf->__PVT__cache_meta_3_21_tag 
                                          << 3U) | 
                                         (vlSelf->__PVT__cache_meta_3_20_tag 
                                          >> 0x14U)));
        __Vtemp31[0x10U] = ((vlSelf->__PVT__cache_meta_3_23_tag 
                             << 0x11U) | (vlSelf->__PVT__cache_meta_3_22_tag 
                                          >> 6U));
        __Vtemp31[0x11U] = ((vlSelf->__PVT__cache_meta_3_25_tag 
                             << 0x1fU) | ((vlSelf->__PVT__cache_meta_3_24_tag 
                                           << 8U) | 
                                          (vlSelf->__PVT__cache_meta_3_23_tag 
                                           >> 0xfU)));
        __Vtemp31[0x12U] = ((vlSelf->__PVT__cache_meta_3_26_tag 
                             << 0x16U) | (vlSelf->__PVT__cache_meta_3_25_tag 
                                          >> 1U));
        __Vtemp31[0x13U] = ((vlSelf->__PVT__cache_meta_3_27_tag 
                             << 0xdU) | (vlSelf->__PVT__cache_meta_3_26_tag 
                                         >> 0xaU));
        __Vtemp31[0x14U] = ((vlSelf->__PVT__cache_meta_3_29_tag 
                             << 0x1bU) | ((vlSelf->__PVT__cache_meta_3_28_tag 
                                           << 4U) | 
                                          (vlSelf->__PVT__cache_meta_3_27_tag 
                                           >> 0x13U)));
        __Vtemp31[0x15U] = ((vlSelf->__PVT__cache_meta_3_30_tag 
                             << 0x12U) | (vlSelf->__PVT__cache_meta_3_29_tag 
                                          >> 5U));
        __Vtemp31[0x16U] = ((vlSelf->__PVT__cache_meta_3_31_tag 
                             << 9U) | (vlSelf->__PVT__cache_meta_3_30_tag 
                                       >> 0xeU));
        vlSelf->__Vdly__meta_rd_3_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp31[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp31[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_2_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp61[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_2_1_tag)) 
                                  << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_2_0_tag))));
        __Vtemp61[1U] = ((vlSelf->__PVT__cache_meta_2_2_tag 
                          << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_2_1_tag)) 
                                                << 0x17U) 
                                               | (QData)((IData)(vlSelf->__PVT__cache_meta_2_0_tag))) 
                                              >> 0x20U)));
        __Vtemp61[2U] = ((vlSelf->__PVT__cache_meta_2_4_tag 
                          << 0x1cU) | ((vlSelf->__PVT__cache_meta_2_3_tag 
                                        << 5U) | (vlSelf->__PVT__cache_meta_2_2_tag 
                                                  >> 0x12U)));
        __Vtemp61[3U] = ((vlSelf->__PVT__cache_meta_2_5_tag 
                          << 0x13U) | (vlSelf->__PVT__cache_meta_2_4_tag 
                                       >> 4U));
        __Vtemp61[4U] = ((vlSelf->__PVT__cache_meta_2_6_tag 
                          << 0xaU) | (vlSelf->__PVT__cache_meta_2_5_tag 
                                      >> 0xdU));
        __Vtemp61[5U] = ((vlSelf->__PVT__cache_meta_2_8_tag 
                          << 0x18U) | ((vlSelf->__PVT__cache_meta_2_7_tag 
                                        << 1U) | (vlSelf->__PVT__cache_meta_2_6_tag 
                                                  >> 0x16U)));
        __Vtemp61[6U] = ((vlSelf->__PVT__cache_meta_2_9_tag 
                          << 0xfU) | (vlSelf->__PVT__cache_meta_2_8_tag 
                                      >> 8U));
        __Vtemp61[7U] = ((vlSelf->__PVT__cache_meta_2_11_tag 
                          << 0x1dU) | ((vlSelf->__PVT__cache_meta_2_10_tag 
                                        << 6U) | (vlSelf->__PVT__cache_meta_2_9_tag 
                                                  >> 0x11U)));
        __Vtemp61[8U] = ((vlSelf->__PVT__cache_meta_2_12_tag 
                          << 0x14U) | (vlSelf->__PVT__cache_meta_2_11_tag 
                                       >> 3U));
        __Vtemp61[9U] = ((vlSelf->__PVT__cache_meta_2_13_tag 
                          << 0xbU) | (vlSelf->__PVT__cache_meta_2_12_tag 
                                      >> 0xcU));
        __Vtemp61[0xaU] = ((vlSelf->__PVT__cache_meta_2_15_tag 
                            << 0x19U) | ((vlSelf->__PVT__cache_meta_2_14_tag 
                                          << 2U) | 
                                         (vlSelf->__PVT__cache_meta_2_13_tag 
                                          >> 0x15U)));
        __Vtemp61[0xbU] = ((vlSelf->__PVT__cache_meta_2_16_tag 
                            << 0x10U) | (vlSelf->__PVT__cache_meta_2_15_tag 
                                         >> 7U));
        __Vtemp61[0xcU] = ((vlSelf->__PVT__cache_meta_2_18_tag 
                            << 0x1eU) | ((vlSelf->__PVT__cache_meta_2_17_tag 
                                          << 7U) | 
                                         (vlSelf->__PVT__cache_meta_2_16_tag 
                                          >> 0x10U)));
        __Vtemp61[0xdU] = ((vlSelf->__PVT__cache_meta_2_19_tag 
                            << 0x15U) | (vlSelf->__PVT__cache_meta_2_18_tag 
                                         >> 2U));
        __Vtemp61[0xeU] = ((vlSelf->__PVT__cache_meta_2_20_tag 
                            << 0xcU) | (vlSelf->__PVT__cache_meta_2_19_tag 
                                        >> 0xbU));
        __Vtemp61[0xfU] = ((vlSelf->__PVT__cache_meta_2_22_tag 
                            << 0x1aU) | ((vlSelf->__PVT__cache_meta_2_21_tag 
                                          << 3U) | 
                                         (vlSelf->__PVT__cache_meta_2_20_tag 
                                          >> 0x14U)));
        __Vtemp61[0x10U] = ((vlSelf->__PVT__cache_meta_2_23_tag 
                             << 0x11U) | (vlSelf->__PVT__cache_meta_2_22_tag 
                                          >> 6U));
        __Vtemp61[0x11U] = ((vlSelf->__PVT__cache_meta_2_25_tag 
                             << 0x1fU) | ((vlSelf->__PVT__cache_meta_2_24_tag 
                                           << 8U) | 
                                          (vlSelf->__PVT__cache_meta_2_23_tag 
                                           >> 0xfU)));
        __Vtemp61[0x12U] = ((vlSelf->__PVT__cache_meta_2_26_tag 
                             << 0x16U) | (vlSelf->__PVT__cache_meta_2_25_tag 
                                          >> 1U));
        __Vtemp61[0x13U] = ((vlSelf->__PVT__cache_meta_2_27_tag 
                             << 0xdU) | (vlSelf->__PVT__cache_meta_2_26_tag 
                                         >> 0xaU));
        __Vtemp61[0x14U] = ((vlSelf->__PVT__cache_meta_2_29_tag 
                             << 0x1bU) | ((vlSelf->__PVT__cache_meta_2_28_tag 
                                           << 4U) | 
                                          (vlSelf->__PVT__cache_meta_2_27_tag 
                                           >> 0x13U)));
        __Vtemp61[0x15U] = ((vlSelf->__PVT__cache_meta_2_30_tag 
                             << 0x12U) | (vlSelf->__PVT__cache_meta_2_29_tag 
                                          >> 5U));
        __Vtemp61[0x16U] = ((vlSelf->__PVT__cache_meta_2_31_tag 
                             << 9U) | (vlSelf->__PVT__cache_meta_2_30_tag 
                                       >> 0xeU));
        vlSelf->__Vdly__meta_rd_2_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp61[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp61[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_1_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp91[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_1_1_tag)) 
                                  << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_1_0_tag))));
        __Vtemp91[1U] = ((vlSelf->__PVT__cache_meta_1_2_tag 
                          << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_1_1_tag)) 
                                                << 0x17U) 
                                               | (QData)((IData)(vlSelf->__PVT__cache_meta_1_0_tag))) 
                                              >> 0x20U)));
        __Vtemp91[2U] = ((vlSelf->__PVT__cache_meta_1_4_tag 
                          << 0x1cU) | ((vlSelf->__PVT__cache_meta_1_3_tag 
                                        << 5U) | (vlSelf->__PVT__cache_meta_1_2_tag 
                                                  >> 0x12U)));
        __Vtemp91[3U] = ((vlSelf->__PVT__cache_meta_1_5_tag 
                          << 0x13U) | (vlSelf->__PVT__cache_meta_1_4_tag 
                                       >> 4U));
        __Vtemp91[4U] = ((vlSelf->__PVT__cache_meta_1_6_tag 
                          << 0xaU) | (vlSelf->__PVT__cache_meta_1_5_tag 
                                      >> 0xdU));
        __Vtemp91[5U] = ((vlSelf->__PVT__cache_meta_1_8_tag 
                          << 0x18U) | ((vlSelf->__PVT__cache_meta_1_7_tag 
                                        << 1U) | (vlSelf->__PVT__cache_meta_1_6_tag 
                                                  >> 0x16U)));
        __Vtemp91[6U] = ((vlSelf->__PVT__cache_meta_1_9_tag 
                          << 0xfU) | (vlSelf->__PVT__cache_meta_1_8_tag 
                                      >> 8U));
        __Vtemp91[7U] = ((vlSelf->__PVT__cache_meta_1_11_tag 
                          << 0x1dU) | ((vlSelf->__PVT__cache_meta_1_10_tag 
                                        << 6U) | (vlSelf->__PVT__cache_meta_1_9_tag 
                                                  >> 0x11U)));
        __Vtemp91[8U] = ((vlSelf->__PVT__cache_meta_1_12_tag 
                          << 0x14U) | (vlSelf->__PVT__cache_meta_1_11_tag 
                                       >> 3U));
        __Vtemp91[9U] = ((vlSelf->__PVT__cache_meta_1_13_tag 
                          << 0xbU) | (vlSelf->__PVT__cache_meta_1_12_tag 
                                      >> 0xcU));
        __Vtemp91[0xaU] = ((vlSelf->__PVT__cache_meta_1_15_tag 
                            << 0x19U) | ((vlSelf->__PVT__cache_meta_1_14_tag 
                                          << 2U) | 
                                         (vlSelf->__PVT__cache_meta_1_13_tag 
                                          >> 0x15U)));
        __Vtemp91[0xbU] = ((vlSelf->__PVT__cache_meta_1_16_tag 
                            << 0x10U) | (vlSelf->__PVT__cache_meta_1_15_tag 
                                         >> 7U));
        __Vtemp91[0xcU] = ((vlSelf->__PVT__cache_meta_1_18_tag 
                            << 0x1eU) | ((vlSelf->__PVT__cache_meta_1_17_tag 
                                          << 7U) | 
                                         (vlSelf->__PVT__cache_meta_1_16_tag 
                                          >> 0x10U)));
        __Vtemp91[0xdU] = ((vlSelf->__PVT__cache_meta_1_19_tag 
                            << 0x15U) | (vlSelf->__PVT__cache_meta_1_18_tag 
                                         >> 2U));
        __Vtemp91[0xeU] = ((vlSelf->__PVT__cache_meta_1_20_tag 
                            << 0xcU) | (vlSelf->__PVT__cache_meta_1_19_tag 
                                        >> 0xbU));
        __Vtemp91[0xfU] = ((vlSelf->__PVT__cache_meta_1_22_tag 
                            << 0x1aU) | ((vlSelf->__PVT__cache_meta_1_21_tag 
                                          << 3U) | 
                                         (vlSelf->__PVT__cache_meta_1_20_tag 
                                          >> 0x14U)));
        __Vtemp91[0x10U] = ((vlSelf->__PVT__cache_meta_1_23_tag 
                             << 0x11U) | (vlSelf->__PVT__cache_meta_1_22_tag 
                                          >> 6U));
        __Vtemp91[0x11U] = ((vlSelf->__PVT__cache_meta_1_25_tag 
                             << 0x1fU) | ((vlSelf->__PVT__cache_meta_1_24_tag 
                                           << 8U) | 
                                          (vlSelf->__PVT__cache_meta_1_23_tag 
                                           >> 0xfU)));
        __Vtemp91[0x12U] = ((vlSelf->__PVT__cache_meta_1_26_tag 
                             << 0x16U) | (vlSelf->__PVT__cache_meta_1_25_tag 
                                          >> 1U));
        __Vtemp91[0x13U] = ((vlSelf->__PVT__cache_meta_1_27_tag 
                             << 0xdU) | (vlSelf->__PVT__cache_meta_1_26_tag 
                                         >> 0xaU));
        __Vtemp91[0x14U] = ((vlSelf->__PVT__cache_meta_1_29_tag 
                             << 0x1bU) | ((vlSelf->__PVT__cache_meta_1_28_tag 
                                           << 4U) | 
                                          (vlSelf->__PVT__cache_meta_1_27_tag 
                                           >> 0x13U)));
        __Vtemp91[0x15U] = ((vlSelf->__PVT__cache_meta_1_30_tag 
                             << 0x12U) | (vlSelf->__PVT__cache_meta_1_29_tag 
                                          >> 5U));
        __Vtemp91[0x16U] = ((vlSelf->__PVT__cache_meta_1_31_tag 
                             << 9U) | (vlSelf->__PVT__cache_meta_1_30_tag 
                                       >> 0xeU));
        vlSelf->__Vdly__meta_rd_1_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp91[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp91[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_0_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp121[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_0_1_tag)) 
                                   << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_0_0_tag))));
        __Vtemp121[1U] = ((vlSelf->__PVT__cache_meta_0_2_tag 
                           << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_0_1_tag)) 
                                                 << 0x17U) 
                                                | (QData)((IData)(vlSelf->__PVT__cache_meta_0_0_tag))) 
                                               >> 0x20U)));
        __Vtemp121[2U] = ((vlSelf->__PVT__cache_meta_0_4_tag 
                           << 0x1cU) | ((vlSelf->__PVT__cache_meta_0_3_tag 
                                         << 5U) | (vlSelf->__PVT__cache_meta_0_2_tag 
                                                   >> 0x12U)));
        __Vtemp121[3U] = ((vlSelf->__PVT__cache_meta_0_5_tag 
                           << 0x13U) | (vlSelf->__PVT__cache_meta_0_4_tag 
                                        >> 4U));
        __Vtemp121[4U] = ((vlSelf->__PVT__cache_meta_0_6_tag 
                           << 0xaU) | (vlSelf->__PVT__cache_meta_0_5_tag 
                                       >> 0xdU));
        __Vtemp121[5U] = ((vlSelf->__PVT__cache_meta_0_8_tag 
                           << 0x18U) | ((vlSelf->__PVT__cache_meta_0_7_tag 
                                         << 1U) | (vlSelf->__PVT__cache_meta_0_6_tag 
                                                   >> 0x16U)));
        __Vtemp121[6U] = ((vlSelf->__PVT__cache_meta_0_9_tag 
                           << 0xfU) | (vlSelf->__PVT__cache_meta_0_8_tag 
                                       >> 8U));
        __Vtemp121[7U] = ((vlSelf->__PVT__cache_meta_0_11_tag 
                           << 0x1dU) | ((vlSelf->__PVT__cache_meta_0_10_tag 
                                         << 6U) | (vlSelf->__PVT__cache_meta_0_9_tag 
                                                   >> 0x11U)));
        __Vtemp121[8U] = ((vlSelf->__PVT__cache_meta_0_12_tag 
                           << 0x14U) | (vlSelf->__PVT__cache_meta_0_11_tag 
                                        >> 3U));
        __Vtemp121[9U] = ((vlSelf->__PVT__cache_meta_0_13_tag 
                           << 0xbU) | (vlSelf->__PVT__cache_meta_0_12_tag 
                                       >> 0xcU));
        __Vtemp121[0xaU] = ((vlSelf->__PVT__cache_meta_0_15_tag 
                             << 0x19U) | ((vlSelf->__PVT__cache_meta_0_14_tag 
                                           << 2U) | 
                                          (vlSelf->__PVT__cache_meta_0_13_tag 
                                           >> 0x15U)));
        __Vtemp121[0xbU] = ((vlSelf->__PVT__cache_meta_0_16_tag 
                             << 0x10U) | (vlSelf->__PVT__cache_meta_0_15_tag 
                                          >> 7U));
        __Vtemp121[0xcU] = ((vlSelf->__PVT__cache_meta_0_18_tag 
                             << 0x1eU) | ((vlSelf->__PVT__cache_meta_0_17_tag 
                                           << 7U) | 
                                          (vlSelf->__PVT__cache_meta_0_16_tag 
                                           >> 0x10U)));
        __Vtemp121[0xdU] = ((vlSelf->__PVT__cache_meta_0_19_tag 
                             << 0x15U) | (vlSelf->__PVT__cache_meta_0_18_tag 
                                          >> 2U));
        __Vtemp121[0xeU] = ((vlSelf->__PVT__cache_meta_0_20_tag 
                             << 0xcU) | (vlSelf->__PVT__cache_meta_0_19_tag 
                                         >> 0xbU));
        __Vtemp121[0xfU] = ((vlSelf->__PVT__cache_meta_0_22_tag 
                             << 0x1aU) | ((vlSelf->__PVT__cache_meta_0_21_tag 
                                           << 3U) | 
                                          (vlSelf->__PVT__cache_meta_0_20_tag 
                                           >> 0x14U)));
        __Vtemp121[0x10U] = ((vlSelf->__PVT__cache_meta_0_23_tag 
                              << 0x11U) | (vlSelf->__PVT__cache_meta_0_22_tag 
                                           >> 6U));
        __Vtemp121[0x11U] = ((vlSelf->__PVT__cache_meta_0_25_tag 
                              << 0x1fU) | ((vlSelf->__PVT__cache_meta_0_24_tag 
                                            << 8U) 
                                           | (vlSelf->__PVT__cache_meta_0_23_tag 
                                              >> 0xfU)));
        __Vtemp121[0x12U] = ((vlSelf->__PVT__cache_meta_0_26_tag 
                              << 0x16U) | (vlSelf->__PVT__cache_meta_0_25_tag 
                                           >> 1U));
        __Vtemp121[0x13U] = ((vlSelf->__PVT__cache_meta_0_27_tag 
                              << 0xdU) | (vlSelf->__PVT__cache_meta_0_26_tag 
                                          >> 0xaU));
        __Vtemp121[0x14U] = ((vlSelf->__PVT__cache_meta_0_29_tag 
                              << 0x1bU) | ((vlSelf->__PVT__cache_meta_0_28_tag 
                                            << 4U) 
                                           | (vlSelf->__PVT__cache_meta_0_27_tag 
                                              >> 0x13U)));
        __Vtemp121[0x15U] = ((vlSelf->__PVT__cache_meta_0_30_tag 
                              << 0x12U) | (vlSelf->__PVT__cache_meta_0_29_tag 
                                           >> 5U));
        __Vtemp121[0x16U] = ((vlSelf->__PVT__cache_meta_0_31_tag 
                              << 9U) | (vlSelf->__PVT__cache_meta_0_30_tag 
                                        >> 0xeU));
        vlSelf->__Vdly__meta_rd_0_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp121[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp121[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_3_31_valid = 0U;
        vlSelf->__PVT__cache_meta_3_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_527 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_3_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_527) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_527) {
            vlSelf->__PVT__cache_meta_3_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_2_31_valid = 0U;
        vlSelf->__PVT__cache_meta_2_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_399 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_2_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_399) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_399) {
            vlSelf->__PVT__cache_meta_2_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_1_31_valid = 0U;
        vlSelf->__PVT__cache_meta_1_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_271 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_1_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_271) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_271) {
            vlSelf->__PVT__cache_meta_1_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_31_valid = 0U;
        vlSelf->__PVT__cache_meta_0_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_143 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_0_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_143) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_143) {
            vlSelf->__PVT__cache_meta_0_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_30_valid = 0U;
        vlSelf->__PVT__cache_meta_0_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_30_valid = 0U;
        vlSelf->__PVT__cache_meta_1_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_30_valid = 0U;
        vlSelf->__PVT__cache_meta_2_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_30_valid = 0U;
        vlSelf->__PVT__cache_meta_3_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_30_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_522 = (0x1eU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_139 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_267 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_395 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_523 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__Vdly__cache_meta_0_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_139) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_139) {
            vlSelf->__PVT__cache_meta_0_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_267) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_267) {
            vlSelf->__PVT__cache_meta_1_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_395) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_395) {
            vlSelf->__PVT__cache_meta_2_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_523) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_523) {
            vlSelf->__PVT__cache_meta_3_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_29_valid = 0U;
        vlSelf->__PVT__cache_meta_0_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_29_valid = 0U;
        vlSelf->__PVT__cache_meta_1_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_29_valid = 0U;
        vlSelf->__PVT__cache_meta_2_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_29_valid = 0U;
        vlSelf->__PVT__cache_meta_3_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_29_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_518 = (0x1dU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_135 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_263 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_391 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_519 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__Vdly__cache_meta_0_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_135) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_135) {
            vlSelf->__PVT__cache_meta_0_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_263) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_263) {
            vlSelf->__PVT__cache_meta_1_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_391) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_391) {
            vlSelf->__PVT__cache_meta_2_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_519) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_519) {
            vlSelf->__PVT__cache_meta_3_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_28_valid = 0U;
        vlSelf->__PVT__cache_meta_0_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_28_valid = 0U;
        vlSelf->__PVT__cache_meta_1_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_28_valid = 0U;
        vlSelf->__PVT__cache_meta_2_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_28_valid = 0U;
        vlSelf->__PVT__cache_meta_3_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_28_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_514 = (0x1cU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_131 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_259 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_387 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_515 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__Vdly__cache_meta_0_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_131) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_131) {
            vlSelf->__PVT__cache_meta_0_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_259) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_259) {
            vlSelf->__PVT__cache_meta_1_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_387) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_387) {
            vlSelf->__PVT__cache_meta_2_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_515) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_515) {
            vlSelf->__PVT__cache_meta_3_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_27_valid = 0U;
        vlSelf->__PVT__cache_meta_0_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_27_valid = 0U;
        vlSelf->__PVT__cache_meta_1_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_27_valid = 0U;
        vlSelf->__PVT__cache_meta_2_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_27_valid = 0U;
        vlSelf->__PVT__cache_meta_3_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_27_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_510 = (0x1bU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_127 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_255 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_383 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_511 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__Vdly__cache_meta_0_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_127) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_127) {
            vlSelf->__PVT__cache_meta_0_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_255) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_255) {
            vlSelf->__PVT__cache_meta_1_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_383) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_383) {
            vlSelf->__PVT__cache_meta_2_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_511) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_511) {
            vlSelf->__PVT__cache_meta_3_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_26_valid = 0U;
        vlSelf->__PVT__cache_meta_0_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_26_valid = 0U;
        vlSelf->__PVT__cache_meta_1_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_26_valid = 0U;
        vlSelf->__PVT__cache_meta_2_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_26_valid = 0U;
        vlSelf->__PVT__cache_meta_3_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_26_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_506 = (0x1aU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_123 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_251 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_379 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_507 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__Vdly__cache_meta_0_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_123) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_123) {
            vlSelf->__PVT__cache_meta_0_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_251) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_251) {
            vlSelf->__PVT__cache_meta_1_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_379) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_379) {
            vlSelf->__PVT__cache_meta_2_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_507) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_507) {
            vlSelf->__PVT__cache_meta_3_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_25_valid = 0U;
        vlSelf->__PVT__cache_meta_0_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_25_valid = 0U;
        vlSelf->__PVT__cache_meta_1_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_25_valid = 0U;
        vlSelf->__PVT__cache_meta_2_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_25_valid = 0U;
        vlSelf->__PVT__cache_meta_3_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_25_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_502 = (0x19U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_119 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_247 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_375 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_503 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__Vdly__cache_meta_0_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_119) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_119) {
            vlSelf->__PVT__cache_meta_0_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_247) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_247) {
            vlSelf->__PVT__cache_meta_1_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_375) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_375) {
            vlSelf->__PVT__cache_meta_2_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_503) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_503) {
            vlSelf->__PVT__cache_meta_3_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_24_valid = 0U;
        vlSelf->__PVT__cache_meta_0_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_24_valid = 0U;
        vlSelf->__PVT__cache_meta_1_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_24_valid = 0U;
        vlSelf->__PVT__cache_meta_2_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_24_valid = 0U;
        vlSelf->__PVT__cache_meta_3_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_24_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_498 = (0x18U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_115 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_243 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_371 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_499 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__Vdly__cache_meta_0_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_115) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_115) {
            vlSelf->__PVT__cache_meta_0_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_243) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_243) {
            vlSelf->__PVT__cache_meta_1_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_371) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_371) {
            vlSelf->__PVT__cache_meta_2_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_499) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_499) {
            vlSelf->__PVT__cache_meta_3_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_23_valid = 0U;
        vlSelf->__PVT__cache_meta_0_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_23_valid = 0U;
        vlSelf->__PVT__cache_meta_1_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_23_valid = 0U;
        vlSelf->__PVT__cache_meta_2_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_23_valid = 0U;
        vlSelf->__PVT__cache_meta_3_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_23_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_494 = (0x17U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_111 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_239 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_367 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_495 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__Vdly__cache_meta_0_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_111) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_111) {
            vlSelf->__PVT__cache_meta_0_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_239) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_239) {
            vlSelf->__PVT__cache_meta_1_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_367) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_367) {
            vlSelf->__PVT__cache_meta_2_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_495) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_495) {
            vlSelf->__PVT__cache_meta_3_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_22_valid = 0U;
        vlSelf->__PVT__cache_meta_0_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_22_valid = 0U;
        vlSelf->__PVT__cache_meta_1_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_22_valid = 0U;
        vlSelf->__PVT__cache_meta_2_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_22_valid = 0U;
        vlSelf->__PVT__cache_meta_3_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_22_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_490 = (0x16U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_107 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_235 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_363 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_491 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__Vdly__cache_meta_0_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_107) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_107) {
            vlSelf->__PVT__cache_meta_0_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_235) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_235) {
            vlSelf->__PVT__cache_meta_1_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_363) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_363) {
            vlSelf->__PVT__cache_meta_2_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_491) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_491) {
            vlSelf->__PVT__cache_meta_3_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_21_valid = 0U;
        vlSelf->__PVT__cache_meta_0_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_21_valid = 0U;
        vlSelf->__PVT__cache_meta_1_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_21_valid = 0U;
        vlSelf->__PVT__cache_meta_2_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_21_valid = 0U;
        vlSelf->__PVT__cache_meta_3_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_21_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_486 = (0x15U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_103 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_231 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_359 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_487 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__Vdly__cache_meta_0_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_103) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_103) {
            vlSelf->__PVT__cache_meta_0_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_231) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_231) {
            vlSelf->__PVT__cache_meta_1_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_359) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_359) {
            vlSelf->__PVT__cache_meta_2_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_487) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_487) {
            vlSelf->__PVT__cache_meta_3_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_20_valid = 0U;
        vlSelf->__PVT__cache_meta_0_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_20_valid = 0U;
        vlSelf->__PVT__cache_meta_1_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_20_valid = 0U;
        vlSelf->__PVT__cache_meta_2_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_20_valid = 0U;
        vlSelf->__PVT__cache_meta_3_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_20_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_482 = (0x14U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_99 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_227 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_355 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_483 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__Vdly__cache_meta_0_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_99) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_99) {
            vlSelf->__PVT__cache_meta_0_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_227) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_227) {
            vlSelf->__PVT__cache_meta_1_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_355) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_355) {
            vlSelf->__PVT__cache_meta_2_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_483) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_483) {
            vlSelf->__PVT__cache_meta_3_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_19_valid = 0U;
        vlSelf->__PVT__cache_meta_0_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_19_valid = 0U;
        vlSelf->__PVT__cache_meta_1_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_19_valid = 0U;
        vlSelf->__PVT__cache_meta_2_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_19_valid = 0U;
        vlSelf->__PVT__cache_meta_3_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_19_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_478 = (0x13U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_95 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_223 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_351 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_479 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__Vdly__cache_meta_0_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_95) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_95) {
            vlSelf->__PVT__cache_meta_0_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_223) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_223) {
            vlSelf->__PVT__cache_meta_1_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_351) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_351) {
            vlSelf->__PVT__cache_meta_2_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_479) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_479) {
            vlSelf->__PVT__cache_meta_3_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_18_valid = 0U;
        vlSelf->__PVT__cache_meta_0_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_18_valid = 0U;
        vlSelf->__PVT__cache_meta_1_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_18_valid = 0U;
        vlSelf->__PVT__cache_meta_2_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_18_valid = 0U;
        vlSelf->__PVT__cache_meta_3_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_18_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_474 = (0x12U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_91 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_219 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_347 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_475 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__Vdly__cache_meta_0_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_91) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_91) {
            vlSelf->__PVT__cache_meta_0_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_219) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_219) {
            vlSelf->__PVT__cache_meta_1_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_347) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_347) {
            vlSelf->__PVT__cache_meta_2_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_475) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_475) {
            vlSelf->__PVT__cache_meta_3_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_17_valid = 0U;
        vlSelf->__PVT__cache_meta_0_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_17_valid = 0U;
        vlSelf->__PVT__cache_meta_1_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_17_valid = 0U;
        vlSelf->__PVT__cache_meta_2_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_17_valid = 0U;
        vlSelf->__PVT__cache_meta_3_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_17_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_470 = (0x11U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_87 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_215 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_343 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_471 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__Vdly__cache_meta_0_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_87) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_87) {
            vlSelf->__PVT__cache_meta_0_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_215) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_215) {
            vlSelf->__PVT__cache_meta_1_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_343) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_343) {
            vlSelf->__PVT__cache_meta_2_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_471) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_471) {
            vlSelf->__PVT__cache_meta_3_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_16_valid = 0U;
        vlSelf->__PVT__cache_meta_0_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_16_valid = 0U;
        vlSelf->__PVT__cache_meta_1_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_16_valid = 0U;
        vlSelf->__PVT__cache_meta_2_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_16_valid = 0U;
        vlSelf->__PVT__cache_meta_3_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_16_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_466 = (0x10U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_83 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_211 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_339 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_467 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__Vdly__cache_meta_0_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_83) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_83) {
            vlSelf->__PVT__cache_meta_0_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_211) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_211) {
            vlSelf->__PVT__cache_meta_1_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_339) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_339) {
            vlSelf->__PVT__cache_meta_2_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_467) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_467) {
            vlSelf->__PVT__cache_meta_3_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_15_valid = 0U;
        vlSelf->__PVT__cache_meta_0_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_15_valid = 0U;
        vlSelf->__PVT__cache_meta_1_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_15_valid = 0U;
        vlSelf->__PVT__cache_meta_2_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_15_valid = 0U;
        vlSelf->__PVT__cache_meta_3_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_15_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_462 = (0xfU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_79 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_207 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_335 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_463 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__Vdly__cache_meta_0_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_79) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_79) {
            vlSelf->__PVT__cache_meta_0_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_207) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_207) {
            vlSelf->__PVT__cache_meta_1_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_335) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_335) {
            vlSelf->__PVT__cache_meta_2_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_463) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_463) {
            vlSelf->__PVT__cache_meta_3_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_14_valid = 0U;
        vlSelf->__PVT__cache_meta_0_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_14_valid = 0U;
        vlSelf->__PVT__cache_meta_1_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_14_valid = 0U;
        vlSelf->__PVT__cache_meta_2_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_14_valid = 0U;
        vlSelf->__PVT__cache_meta_3_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_14_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_458 = (0xeU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_75 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_203 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_331 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_459 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__Vdly__cache_meta_0_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_75) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_75) {
            vlSelf->__PVT__cache_meta_0_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_203) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_203) {
            vlSelf->__PVT__cache_meta_1_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_331) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_331) {
            vlSelf->__PVT__cache_meta_2_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_459) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_459) {
            vlSelf->__PVT__cache_meta_3_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_13_valid = 0U;
        vlSelf->__PVT__cache_meta_0_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_13_valid = 0U;
        vlSelf->__PVT__cache_meta_1_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_13_valid = 0U;
        vlSelf->__PVT__cache_meta_2_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_13_valid = 0U;
        vlSelf->__PVT__cache_meta_3_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_13_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_454 = (0xdU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_71 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_199 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_327 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_455 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__Vdly__cache_meta_0_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_71) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_71) {
            vlSelf->__PVT__cache_meta_0_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_199) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_199) {
            vlSelf->__PVT__cache_meta_1_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_327) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_327) {
            vlSelf->__PVT__cache_meta_2_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_455) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_455) {
            vlSelf->__PVT__cache_meta_3_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_12_valid = 0U;
        vlSelf->__PVT__cache_meta_0_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_12_valid = 0U;
        vlSelf->__PVT__cache_meta_1_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_12_valid = 0U;
        vlSelf->__PVT__cache_meta_2_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_12_valid = 0U;
        vlSelf->__PVT__cache_meta_3_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_12_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_450 = (0xcU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_67 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_195 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_323 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_451 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__Vdly__cache_meta_0_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_67) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_67) {
            vlSelf->__PVT__cache_meta_0_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_195) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_195) {
            vlSelf->__PVT__cache_meta_1_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_323) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_323) {
            vlSelf->__PVT__cache_meta_2_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_451) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_451) {
            vlSelf->__PVT__cache_meta_3_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_11_valid = 0U;
        vlSelf->__PVT__cache_meta_0_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_11_valid = 0U;
        vlSelf->__PVT__cache_meta_1_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_11_valid = 0U;
        vlSelf->__PVT__cache_meta_2_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_11_valid = 0U;
        vlSelf->__PVT__cache_meta_3_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_11_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_446 = (0xbU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_63 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_191 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_319 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_447 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__Vdly__cache_meta_0_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_63) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_63) {
            vlSelf->__PVT__cache_meta_0_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_191) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_191) {
            vlSelf->__PVT__cache_meta_1_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_319) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_319) {
            vlSelf->__PVT__cache_meta_2_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_447) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_447) {
            vlSelf->__PVT__cache_meta_3_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_10_valid = 0U;
        vlSelf->__PVT__cache_meta_0_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_10_valid = 0U;
        vlSelf->__PVT__cache_meta_1_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_10_valid = 0U;
        vlSelf->__PVT__cache_meta_2_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_10_valid = 0U;
        vlSelf->__PVT__cache_meta_3_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_10_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_442 = (0xaU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_59 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_187 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_315 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_443 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__Vdly__cache_meta_0_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_59) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_59) {
            vlSelf->__PVT__cache_meta_0_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_187) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_187) {
            vlSelf->__PVT__cache_meta_1_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_315) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_315) {
            vlSelf->__PVT__cache_meta_2_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_443) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_443) {
            vlSelf->__PVT__cache_meta_3_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_9_valid = 0U;
        vlSelf->__PVT__cache_meta_0_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_9_valid = 0U;
        vlSelf->__PVT__cache_meta_1_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_9_valid = 0U;
        vlSelf->__PVT__cache_meta_2_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_9_valid = 0U;
        vlSelf->__PVT__cache_meta_3_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_9_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_438 = (9U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_55 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_183 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_311 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_439 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__Vdly__cache_meta_0_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_55) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_55) {
            vlSelf->__PVT__cache_meta_0_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_183) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_183) {
            vlSelf->__PVT__cache_meta_1_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_311) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_311) {
            vlSelf->__PVT__cache_meta_2_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_439) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_439) {
            vlSelf->__PVT__cache_meta_3_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_8_valid = 0U;
        vlSelf->__PVT__cache_meta_0_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_8_valid = 0U;
        vlSelf->__PVT__cache_meta_1_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_8_valid = 0U;
        vlSelf->__PVT__cache_meta_2_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_8_valid = 0U;
        vlSelf->__PVT__cache_meta_3_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_8_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_434 = (8U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_51 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_179 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_307 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_435 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__Vdly__cache_meta_0_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_51) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_51) {
            vlSelf->__PVT__cache_meta_0_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_179) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_179) {
            vlSelf->__PVT__cache_meta_1_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_307) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_307) {
            vlSelf->__PVT__cache_meta_2_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_435) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_435) {
            vlSelf->__PVT__cache_meta_3_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_7_valid = 0U;
        vlSelf->__PVT__cache_meta_0_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_7_valid = 0U;
        vlSelf->__PVT__cache_meta_1_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_7_valid = 0U;
        vlSelf->__PVT__cache_meta_2_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_7_valid = 0U;
        vlSelf->__PVT__cache_meta_3_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_7_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_430 = (7U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_47 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_175 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_303 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_431 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__Vdly__cache_meta_0_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_47) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_47) {
            vlSelf->__PVT__cache_meta_0_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_175) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_175) {
            vlSelf->__PVT__cache_meta_1_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_303) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_303) {
            vlSelf->__PVT__cache_meta_2_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_431) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_431) {
            vlSelf->__PVT__cache_meta_3_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_6_valid = 0U;
        vlSelf->__PVT__cache_meta_0_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_6_valid = 0U;
        vlSelf->__PVT__cache_meta_1_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_6_valid = 0U;
        vlSelf->__PVT__cache_meta_2_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_6_valid = 0U;
        vlSelf->__PVT__cache_meta_3_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_6_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_426 = (6U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_43 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_171 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_299 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_427 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__Vdly__cache_meta_0_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_43) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_43) {
            vlSelf->__PVT__cache_meta_0_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_171) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_171) {
            vlSelf->__PVT__cache_meta_1_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_299) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_299) {
            vlSelf->__PVT__cache_meta_2_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_427) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_427) {
            vlSelf->__PVT__cache_meta_3_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_5_valid = 0U;
        vlSelf->__PVT__cache_meta_0_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_5_valid = 0U;
        vlSelf->__PVT__cache_meta_1_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_5_valid = 0U;
        vlSelf->__PVT__cache_meta_2_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_5_valid = 0U;
        vlSelf->__PVT__cache_meta_3_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_5_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_422 = (5U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_39 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_167 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_295 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_423 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__Vdly__cache_meta_0_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_39) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_39) {
            vlSelf->__PVT__cache_meta_0_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_167) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_167) {
            vlSelf->__PVT__cache_meta_1_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_295) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_295) {
            vlSelf->__PVT__cache_meta_2_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_423) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_423) {
            vlSelf->__PVT__cache_meta_3_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_4_valid = 0U;
        vlSelf->__PVT__cache_meta_0_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_4_valid = 0U;
        vlSelf->__PVT__cache_meta_1_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_4_valid = 0U;
        vlSelf->__PVT__cache_meta_2_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_4_valid = 0U;
        vlSelf->__PVT__cache_meta_3_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_4_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_418 = (4U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_35 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_163 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_291 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_419 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__Vdly__cache_meta_0_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_35) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_35) {
            vlSelf->__PVT__cache_meta_0_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_163) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_163) {
            vlSelf->__PVT__cache_meta_1_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_291) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_291) {
            vlSelf->__PVT__cache_meta_2_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_419) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_419) {
            vlSelf->__PVT__cache_meta_3_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_3_valid = 0U;
        vlSelf->__PVT__cache_meta_0_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_3_valid = 0U;
        vlSelf->__PVT__cache_meta_1_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_3_valid = 0U;
        vlSelf->__PVT__cache_meta_2_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_3_valid = 0U;
        vlSelf->__PVT__cache_meta_3_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_3_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_414 = (3U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_31 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_159 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_287 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_415 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__Vdly__cache_meta_0_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_31) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_31) {
            vlSelf->__PVT__cache_meta_0_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_159) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_159) {
            vlSelf->__PVT__cache_meta_1_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_287) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_287) {
            vlSelf->__PVT__cache_meta_2_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_415) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_415) {
            vlSelf->__PVT__cache_meta_3_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_2_valid = 0U;
        vlSelf->__PVT__cache_meta_0_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_2_valid = 0U;
        vlSelf->__PVT__cache_meta_1_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_2_valid = 0U;
        vlSelf->__PVT__cache_meta_2_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_2_valid = 0U;
        vlSelf->__PVT__cache_meta_3_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_2_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_410 = (2U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_27 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_155 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_283 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_411 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__Vdly__cache_meta_0_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_27) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_27) {
            vlSelf->__PVT__cache_meta_0_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_155) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_155) {
            vlSelf->__PVT__cache_meta_1_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_283) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_283) {
            vlSelf->__PVT__cache_meta_2_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_411) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_411) {
            vlSelf->__PVT__cache_meta_3_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_1_valid = 0U;
        vlSelf->__PVT__cache_meta_0_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_1_valid = 0U;
        vlSelf->__PVT__cache_meta_1_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_1_valid = 0U;
        vlSelf->__PVT__cache_meta_2_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_1_valid = 0U;
        vlSelf->__PVT__cache_meta_3_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_1_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_406 = (1U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_23 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_151 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_279 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_407 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__Vdly__cache_meta_0_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_23) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_23) {
            vlSelf->__PVT__cache_meta_0_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_151) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_151) {
            vlSelf->__PVT__cache_meta_1_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_279) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_279) {
            vlSelf->__PVT__cache_meta_2_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_407) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_407) {
            vlSelf->__PVT__cache_meta_3_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_0_valid = 0U;
        vlSelf->__PVT__cache_meta_0_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_0_valid = 0U;
        vlSelf->__PVT__cache_meta_1_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_0_valid = 0U;
        vlSelf->__PVT__cache_meta_2_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_0_valid = 0U;
        vlSelf->__PVT__cache_meta_3_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_0_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_402 = (0U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_19 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_147 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_275 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_403 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__Vdly__cache_meta_0_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_19) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_19) {
            vlSelf->__PVT__cache_meta_0_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_147) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_147) {
            vlSelf->__PVT__cache_meta_1_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_275) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_275) {
            vlSelf->__PVT__cache_meta_2_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_403) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_403) {
            vlSelf->__PVT__cache_meta_3_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__6(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__6\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__stage3__DOT__buf_wr = 0U;
        vlSelf->__PVT__stage3__DOT__buf_wdata = 0ULL;
        vlSelf->__PVT__stage3__DOT__buf_wstrb = 0U;
        vlSelf->__Vdly__stage3__DOT__buf_mthrough = 0U;
        vlSelf->__PVT__stage3__DOT__buf_tag = 0U;
        vlSelf->__PVT__stage3__DOT__buf_index = 0U;
        vlSelf->__Vdly__stage3__DOT__buf_offset = 0U;
        vlSelf->__PVT__stage3__DOT__buf_hit = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_way = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_valid = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_dirty = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_tag = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 = 0ULL;
        vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 = 0ULL;
        vlSelf->__Vdly__stage3__DOT__state = 1U;
        vlSelf->__Vdly__stage3__DOT__cnt = 0U;
    } else {
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14 
            = ((((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                 | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)) 
               & (IData)(vlSelf->__PVT__stage3__DOT___io_mem_out_req_valid_T_5));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1) 
               & (IData)(vlSelf->__PVT__stage2__DOT__s2_valid));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come 
            = (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                >> 3U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23 
            = ((4U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                ? ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                    ? 8U : 4U) : 0U);
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25 
            = ((0x10U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                ? ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                    ? 1U : 0x10U) : 0U);
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN 
            = (7U & ((((2U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                        ? ((IData)(vlSelf->__PVT__stage3__DOT__burst_last)
                            ? 4U : 2U) : 0U) | (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25)));
        if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__Vdly__stage3__DOT__buf_wr = vlSelf->__PVT__stage2__DOT__buf_wr;
            vlSelf->__PVT__stage3__DOT__buf_wdata = vlSelf->__PVT__stage2__DOT__buf_wdata;
            vlSelf->__PVT__stage3__DOT__buf_wstrb = vlSelf->__PVT__stage2__DOT__buf_wstrb;
            vlSelf->__Vdly__stage3__DOT__buf_mthrough 
                = vlSelf->__PVT__stage2__DOT__buf_mthrough;
            vlSelf->__PVT__stage3__DOT__buf_tag = vlSelf->__PVT__stage2__DOT__buf_tag;
            vlSelf->__PVT__stage3__DOT__buf_index = vlSelf->__PVT__stage2__DOT__buf_index;
            vlSelf->__Vdly__stage3__DOT__buf_offset 
                = vlSelf->__PVT__stage2__DOT__buf_offset;
            vlSelf->__PVT__stage3__DOT__buf_hit = (0U 
                                                   != (IData)(vlSelf->__PVT__stage2__DOT__hit_array));
            vlSelf->__PVT__stage3__DOT__buf_target_way 
                = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                                          >> 2U)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H)))));
            vlSelf->__PVT__stage3__DOT__buf_target_line_valid 
                = (((((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->__PVT__meta_rd_0_valid)) 
                     | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->__PVT__meta_rd_1_valid))) 
                    | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->__PVT__meta_rd_2_valid))) 
                   | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->__PVT__meta_rd_3_valid)));
            vlSelf->__PVT__stage3__DOT__buf_target_line_dirty 
                = (((((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->__PVT__meta_rd_0_dirty)) 
                     | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->__PVT__meta_rd_1_dirty))) 
                    | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->__PVT__meta_rd_2_dirty))) 
                   | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->__PVT__meta_rd_3_dirty)));
            vlSelf->__PVT__stage3__DOT__buf_target_line_tag 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? vlSelf->__PVT__meta_rd_0_tag
                       : 0U) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                 ? vlSelf->__PVT__meta_rd_1_tag
                                 : 0U)) | ((4U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                            ? vlSelf->__PVT__meta_rd_2_tag
                                            : 0U)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? vlSelf->__PVT__meta_rd_3_tag
                       : 0U));
        }
        if (((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come) 
             & (~ (IData)(vlSelf->__PVT__stage3__DOT__cnt)))) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                = ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata);
        } else if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam->__PVT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam->__PVT__rdata[0U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[0U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[0U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[0U])))
                       : 0ULL));
        }
        if (((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come) 
             & (IData)(vlSelf->__PVT__stage3__DOT__cnt))) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                = ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata);
        } else if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam->__PVT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam->__PVT__rdata[2U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[2U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[2U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[2U])))
                       : 0ULL));
        }
        vlSelf->__Vdly__stage3__DOT__state = ((((1U 
                                                 & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__stage3__DOT__hit)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__stage3__DOT__buf_wr)
                                                   ? 0x20U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__stage3__DOT__buf_mthrough)
                                                    ? 0x10U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__stage3__DOT__wb_en)
                                                     ? 2U
                                                     : 8U))
                                                   : 1U))
                                                 : 0U) 
                                               | ((8U 
                                                   & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__stage3__DOT__burst_last)
                                                    ? 0x20U
                                                    : 8U)
                                                   : 0U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                                                    | ((6U 
                                                        & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN) 
                                                             | (IData)(vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6)))))));
        vlSelf->__Vdly__stage3__DOT__cnt = (1U & ((~ 
                                                   ((IData)(vlSelf->__PVT__stage3__DOT__wb_en) 
                                                    & (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                                        | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                                       | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)))) 
                                                  & ((((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                       >> 2U) 
                                                      & (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                                          | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                                         | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__stage3__DOT__buf_offset) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                                                       ? 
                                                      ((~ (IData)(vlSelf->__PVT__stage3__DOT__cnt)) 
                                                       & ((IData)(vlSelf->__PVT__stage3__DOT__cnt) 
                                                          - (IData)(1U)))
                                                       : (IData)(vlSelf->__PVT__stage3__DOT__cnt)))));
    }
    vlSelf->__PVT__meta_rd_0_dirty = vlSelf->__Vdly__meta_rd_0_dirty;
    vlSelf->__PVT__meta_rd_1_dirty = vlSelf->__Vdly__meta_rd_1_dirty;
    vlSelf->__PVT__meta_rd_2_dirty = vlSelf->__Vdly__meta_rd_2_dirty;
    vlSelf->__PVT__meta_rd_3_dirty = vlSelf->__Vdly__meta_rd_3_dirty;
    vlSelf->__PVT__stage3__DOT__cnt = vlSelf->__Vdly__stage3__DOT__cnt;
    vlSelf->__PVT__meta_rd_0_tag = vlSelf->__Vdly__meta_rd_0_tag;
    vlSelf->__PVT__meta_rd_1_tag = vlSelf->__Vdly__meta_rd_1_tag;
    vlSelf->__PVT__meta_rd_2_tag = vlSelf->__Vdly__meta_rd_2_tag;
    vlSelf->__PVT__meta_rd_3_tag = vlSelf->__Vdly__meta_rd_3_tag;
    vlSelf->__PVT__stage3__DOT__buf_offset = vlSelf->__Vdly__stage3__DOT__buf_offset;
    vlSelf->__PVT__stage3__DOT__buf_mthrough = vlSelf->__Vdly__stage3__DOT__buf_mthrough;
    vlSelf->__PVT__stage3__DOT__buf_wr = vlSelf->__Vdly__stage3__DOT__buf_wr;
    vlSelf->__PVT__stage3__DOT__state = vlSelf->__Vdly__stage3__DOT__state;
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
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wr = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_wr = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wdata = 0ULL;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_wdata = 0ULL;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wstrb = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_wstrb = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__s2_valid = 0U;
    } else if (vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) {
        vlSelf->__PVT__stage2__DOT__s2_valid = vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_mthrough = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_mthrough = (IData)(
                                                           (0x80000000ULL 
                                                            != 
                                                            (0xe0000000ULL 
                                                             & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_index = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_index = (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                            >> 4U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_offset = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_offset = (0xfU 
                                                  & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_tag = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->__PVT__stage2__DOT__buf_tag = (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                          >> 9U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_0_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_0_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_0_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_0_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_0_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_0_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_0_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_0_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_0_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_0_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_0_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_0_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_0_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_1_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_1_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_1_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_1_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_1_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_1_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_1_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_1_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_1_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_1_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_1_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_1_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_1_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_2_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_2_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_2_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_2_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_2_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_2_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_2_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_2_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_2_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_2_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_2_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_2_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_2_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_3_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_3_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_3_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_3_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_3_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_3_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_3_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_3_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_3_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_3_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_3_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_3_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_3_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                            >> 4U)))));
    }
    vlSelf->__PVT__stage3__DOT__refill_hit = ((IData)(vlSelf->__PVT__stage3__DOT__cnt) 
                                              == (1U 
                                                  & ((IData)(vlSelf->__PVT__stage3__DOT__buf_offset) 
                                                     >> 3U)));
    vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6 = 
        (1U & ((IData)(vlSelf->__PVT__stage3__DOT__state) 
               >> 5U));
    vlSelf->__PVT__stage3__DOT__hit = ((IData)(vlSelf->__PVT__stage3__DOT__buf_hit) 
                                       & (IData)(vlSelf->__PVT__stage3__DOT__state));
    vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2 
        = (vlSelf->__PVT__stage3__DOT__buf_wdata & vlSelf->__PVT__stage3__DOT__cpu_word_mask);
    vlSelf->__PVT__cache_meta_0_31_valid = vlSelf->__Vdly__cache_meta_0_31_valid;
    vlSelf->__PVT__cache_meta_0_30_valid = vlSelf->__Vdly__cache_meta_0_30_valid;
    vlSelf->__PVT__cache_meta_0_29_valid = vlSelf->__Vdly__cache_meta_0_29_valid;
    vlSelf->__PVT__cache_meta_0_28_valid = vlSelf->__Vdly__cache_meta_0_28_valid;
    vlSelf->__PVT__cache_meta_0_27_valid = vlSelf->__Vdly__cache_meta_0_27_valid;
    vlSelf->__PVT__cache_meta_0_26_valid = vlSelf->__Vdly__cache_meta_0_26_valid;
    vlSelf->__PVT__cache_meta_0_25_valid = vlSelf->__Vdly__cache_meta_0_25_valid;
    vlSelf->__PVT__cache_meta_0_24_valid = vlSelf->__Vdly__cache_meta_0_24_valid;
    vlSelf->__PVT__cache_meta_0_23_valid = vlSelf->__Vdly__cache_meta_0_23_valid;
    vlSelf->__PVT__cache_meta_0_22_valid = vlSelf->__Vdly__cache_meta_0_22_valid;
    vlSelf->__PVT__cache_meta_0_21_valid = vlSelf->__Vdly__cache_meta_0_21_valid;
    vlSelf->__PVT__cache_meta_0_20_valid = vlSelf->__Vdly__cache_meta_0_20_valid;
    vlSelf->__PVT__cache_meta_0_19_valid = vlSelf->__Vdly__cache_meta_0_19_valid;
    vlSelf->__PVT__cache_meta_0_18_valid = vlSelf->__Vdly__cache_meta_0_18_valid;
    vlSelf->__PVT__cache_meta_0_17_valid = vlSelf->__Vdly__cache_meta_0_17_valid;
    vlSelf->__PVT__cache_meta_0_16_valid = vlSelf->__Vdly__cache_meta_0_16_valid;
    vlSelf->__PVT__cache_meta_0_15_valid = vlSelf->__Vdly__cache_meta_0_15_valid;
    vlSelf->__PVT__cache_meta_0_14_valid = vlSelf->__Vdly__cache_meta_0_14_valid;
    vlSelf->__PVT__cache_meta_0_13_valid = vlSelf->__Vdly__cache_meta_0_13_valid;
    vlSelf->__PVT__cache_meta_0_12_valid = vlSelf->__Vdly__cache_meta_0_12_valid;
    vlSelf->__PVT__cache_meta_0_11_valid = vlSelf->__Vdly__cache_meta_0_11_valid;
    vlSelf->__PVT__cache_meta_0_10_valid = vlSelf->__Vdly__cache_meta_0_10_valid;
    vlSelf->__PVT__cache_meta_0_9_valid = vlSelf->__Vdly__cache_meta_0_9_valid;
    vlSelf->__PVT__cache_meta_0_8_valid = vlSelf->__Vdly__cache_meta_0_8_valid;
    vlSelf->__PVT__cache_meta_0_7_valid = vlSelf->__Vdly__cache_meta_0_7_valid;
    vlSelf->__PVT__cache_meta_0_6_valid = vlSelf->__Vdly__cache_meta_0_6_valid;
    vlSelf->__PVT__cache_meta_0_5_valid = vlSelf->__Vdly__cache_meta_0_5_valid;
    vlSelf->__PVT__cache_meta_0_4_valid = vlSelf->__Vdly__cache_meta_0_4_valid;
    vlSelf->__PVT__cache_meta_0_3_valid = vlSelf->__Vdly__cache_meta_0_3_valid;
    vlSelf->__PVT__cache_meta_0_2_valid = vlSelf->__Vdly__cache_meta_0_2_valid;
    vlSelf->__PVT__cache_meta_0_1_valid = vlSelf->__Vdly__cache_meta_0_1_valid;
    vlSelf->__PVT__cache_meta_0_0_valid = vlSelf->__Vdly__cache_meta_0_0_valid;
    vlSelf->__PVT__cache_meta_1_31_valid = vlSelf->__Vdly__cache_meta_1_31_valid;
    vlSelf->__PVT__cache_meta_1_30_valid = vlSelf->__Vdly__cache_meta_1_30_valid;
    vlSelf->__PVT__cache_meta_1_29_valid = vlSelf->__Vdly__cache_meta_1_29_valid;
    vlSelf->__PVT__cache_meta_1_28_valid = vlSelf->__Vdly__cache_meta_1_28_valid;
    vlSelf->__PVT__cache_meta_1_27_valid = vlSelf->__Vdly__cache_meta_1_27_valid;
    vlSelf->__PVT__cache_meta_1_26_valid = vlSelf->__Vdly__cache_meta_1_26_valid;
    vlSelf->__PVT__cache_meta_1_25_valid = vlSelf->__Vdly__cache_meta_1_25_valid;
    vlSelf->__PVT__cache_meta_1_24_valid = vlSelf->__Vdly__cache_meta_1_24_valid;
    vlSelf->__PVT__cache_meta_1_23_valid = vlSelf->__Vdly__cache_meta_1_23_valid;
    vlSelf->__PVT__cache_meta_1_22_valid = vlSelf->__Vdly__cache_meta_1_22_valid;
    vlSelf->__PVT__cache_meta_1_21_valid = vlSelf->__Vdly__cache_meta_1_21_valid;
    vlSelf->__PVT__cache_meta_1_20_valid = vlSelf->__Vdly__cache_meta_1_20_valid;
    vlSelf->__PVT__cache_meta_1_19_valid = vlSelf->__Vdly__cache_meta_1_19_valid;
    vlSelf->__PVT__cache_meta_1_18_valid = vlSelf->__Vdly__cache_meta_1_18_valid;
    vlSelf->__PVT__cache_meta_1_17_valid = vlSelf->__Vdly__cache_meta_1_17_valid;
    vlSelf->__PVT__cache_meta_1_16_valid = vlSelf->__Vdly__cache_meta_1_16_valid;
    vlSelf->__PVT__cache_meta_1_15_valid = vlSelf->__Vdly__cache_meta_1_15_valid;
    vlSelf->__PVT__cache_meta_1_14_valid = vlSelf->__Vdly__cache_meta_1_14_valid;
    vlSelf->__PVT__cache_meta_1_13_valid = vlSelf->__Vdly__cache_meta_1_13_valid;
    vlSelf->__PVT__cache_meta_1_12_valid = vlSelf->__Vdly__cache_meta_1_12_valid;
    vlSelf->__PVT__cache_meta_1_11_valid = vlSelf->__Vdly__cache_meta_1_11_valid;
    vlSelf->__PVT__cache_meta_1_10_valid = vlSelf->__Vdly__cache_meta_1_10_valid;
    vlSelf->__PVT__cache_meta_1_9_valid = vlSelf->__Vdly__cache_meta_1_9_valid;
    vlSelf->__PVT__cache_meta_1_8_valid = vlSelf->__Vdly__cache_meta_1_8_valid;
    vlSelf->__PVT__cache_meta_1_7_valid = vlSelf->__Vdly__cache_meta_1_7_valid;
    vlSelf->__PVT__cache_meta_1_6_valid = vlSelf->__Vdly__cache_meta_1_6_valid;
    vlSelf->__PVT__cache_meta_1_5_valid = vlSelf->__Vdly__cache_meta_1_5_valid;
    vlSelf->__PVT__cache_meta_1_4_valid = vlSelf->__Vdly__cache_meta_1_4_valid;
    vlSelf->__PVT__cache_meta_1_3_valid = vlSelf->__Vdly__cache_meta_1_3_valid;
    vlSelf->__PVT__cache_meta_1_2_valid = vlSelf->__Vdly__cache_meta_1_2_valid;
    vlSelf->__PVT__cache_meta_1_1_valid = vlSelf->__Vdly__cache_meta_1_1_valid;
    vlSelf->__PVT__cache_meta_1_0_valid = vlSelf->__Vdly__cache_meta_1_0_valid;
    vlSelf->__PVT__cache_meta_2_31_valid = vlSelf->__Vdly__cache_meta_2_31_valid;
    vlSelf->__PVT__cache_meta_2_30_valid = vlSelf->__Vdly__cache_meta_2_30_valid;
    vlSelf->__PVT__cache_meta_2_29_valid = vlSelf->__Vdly__cache_meta_2_29_valid;
    vlSelf->__PVT__cache_meta_2_28_valid = vlSelf->__Vdly__cache_meta_2_28_valid;
    vlSelf->__PVT__cache_meta_2_27_valid = vlSelf->__Vdly__cache_meta_2_27_valid;
    vlSelf->__PVT__cache_meta_2_26_valid = vlSelf->__Vdly__cache_meta_2_26_valid;
    vlSelf->__PVT__cache_meta_2_25_valid = vlSelf->__Vdly__cache_meta_2_25_valid;
    vlSelf->__PVT__cache_meta_2_24_valid = vlSelf->__Vdly__cache_meta_2_24_valid;
    vlSelf->__PVT__cache_meta_2_23_valid = vlSelf->__Vdly__cache_meta_2_23_valid;
    vlSelf->__PVT__cache_meta_2_22_valid = vlSelf->__Vdly__cache_meta_2_22_valid;
    vlSelf->__PVT__cache_meta_2_21_valid = vlSelf->__Vdly__cache_meta_2_21_valid;
    vlSelf->__PVT__cache_meta_2_20_valid = vlSelf->__Vdly__cache_meta_2_20_valid;
    vlSelf->__PVT__cache_meta_2_19_valid = vlSelf->__Vdly__cache_meta_2_19_valid;
    vlSelf->__PVT__cache_meta_2_18_valid = vlSelf->__Vdly__cache_meta_2_18_valid;
    vlSelf->__PVT__cache_meta_2_17_valid = vlSelf->__Vdly__cache_meta_2_17_valid;
    vlSelf->__PVT__cache_meta_2_16_valid = vlSelf->__Vdly__cache_meta_2_16_valid;
    vlSelf->__PVT__cache_meta_2_15_valid = vlSelf->__Vdly__cache_meta_2_15_valid;
    vlSelf->__PVT__cache_meta_2_14_valid = vlSelf->__Vdly__cache_meta_2_14_valid;
    vlSelf->__PVT__cache_meta_2_13_valid = vlSelf->__Vdly__cache_meta_2_13_valid;
    vlSelf->__PVT__cache_meta_2_12_valid = vlSelf->__Vdly__cache_meta_2_12_valid;
    vlSelf->__PVT__cache_meta_2_11_valid = vlSelf->__Vdly__cache_meta_2_11_valid;
    vlSelf->__PVT__cache_meta_2_10_valid = vlSelf->__Vdly__cache_meta_2_10_valid;
    vlSelf->__PVT__cache_meta_2_9_valid = vlSelf->__Vdly__cache_meta_2_9_valid;
    vlSelf->__PVT__cache_meta_2_8_valid = vlSelf->__Vdly__cache_meta_2_8_valid;
    vlSelf->__PVT__cache_meta_2_7_valid = vlSelf->__Vdly__cache_meta_2_7_valid;
    vlSelf->__PVT__cache_meta_2_6_valid = vlSelf->__Vdly__cache_meta_2_6_valid;
    vlSelf->__PVT__cache_meta_2_5_valid = vlSelf->__Vdly__cache_meta_2_5_valid;
    vlSelf->__PVT__cache_meta_2_4_valid = vlSelf->__Vdly__cache_meta_2_4_valid;
    vlSelf->__PVT__cache_meta_2_3_valid = vlSelf->__Vdly__cache_meta_2_3_valid;
    vlSelf->__PVT__cache_meta_2_2_valid = vlSelf->__Vdly__cache_meta_2_2_valid;
    vlSelf->__PVT__cache_meta_2_1_valid = vlSelf->__Vdly__cache_meta_2_1_valid;
    vlSelf->__PVT__cache_meta_2_0_valid = vlSelf->__Vdly__cache_meta_2_0_valid;
    vlSelf->__PVT__cache_meta_3_31_valid = vlSelf->__Vdly__cache_meta_3_31_valid;
    vlSelf->__PVT__cache_meta_3_30_valid = vlSelf->__Vdly__cache_meta_3_30_valid;
    vlSelf->__PVT__cache_meta_3_29_valid = vlSelf->__Vdly__cache_meta_3_29_valid;
    vlSelf->__PVT__cache_meta_3_28_valid = vlSelf->__Vdly__cache_meta_3_28_valid;
    vlSelf->__PVT__cache_meta_3_27_valid = vlSelf->__Vdly__cache_meta_3_27_valid;
    vlSelf->__PVT__cache_meta_3_26_valid = vlSelf->__Vdly__cache_meta_3_26_valid;
    vlSelf->__PVT__cache_meta_3_25_valid = vlSelf->__Vdly__cache_meta_3_25_valid;
    vlSelf->__PVT__cache_meta_3_24_valid = vlSelf->__Vdly__cache_meta_3_24_valid;
    vlSelf->__PVT__cache_meta_3_23_valid = vlSelf->__Vdly__cache_meta_3_23_valid;
    vlSelf->__PVT__cache_meta_3_22_valid = vlSelf->__Vdly__cache_meta_3_22_valid;
    vlSelf->__PVT__cache_meta_3_21_valid = vlSelf->__Vdly__cache_meta_3_21_valid;
    vlSelf->__PVT__cache_meta_3_20_valid = vlSelf->__Vdly__cache_meta_3_20_valid;
    vlSelf->__PVT__cache_meta_3_19_valid = vlSelf->__Vdly__cache_meta_3_19_valid;
    vlSelf->__PVT__cache_meta_3_18_valid = vlSelf->__Vdly__cache_meta_3_18_valid;
    vlSelf->__PVT__cache_meta_3_17_valid = vlSelf->__Vdly__cache_meta_3_17_valid;
    vlSelf->__PVT__cache_meta_3_16_valid = vlSelf->__Vdly__cache_meta_3_16_valid;
    vlSelf->__PVT__cache_meta_3_15_valid = vlSelf->__Vdly__cache_meta_3_15_valid;
    vlSelf->__PVT__cache_meta_3_14_valid = vlSelf->__Vdly__cache_meta_3_14_valid;
    vlSelf->__PVT__cache_meta_3_13_valid = vlSelf->__Vdly__cache_meta_3_13_valid;
    vlSelf->__PVT__cache_meta_3_12_valid = vlSelf->__Vdly__cache_meta_3_12_valid;
    vlSelf->__PVT__cache_meta_3_11_valid = vlSelf->__Vdly__cache_meta_3_11_valid;
    vlSelf->__PVT__cache_meta_3_10_valid = vlSelf->__Vdly__cache_meta_3_10_valid;
    vlSelf->__PVT__cache_meta_3_9_valid = vlSelf->__Vdly__cache_meta_3_9_valid;
    vlSelf->__PVT__cache_meta_3_8_valid = vlSelf->__Vdly__cache_meta_3_8_valid;
    vlSelf->__PVT__cache_meta_3_7_valid = vlSelf->__Vdly__cache_meta_3_7_valid;
    vlSelf->__PVT__cache_meta_3_6_valid = vlSelf->__Vdly__cache_meta_3_6_valid;
    vlSelf->__PVT__cache_meta_3_5_valid = vlSelf->__Vdly__cache_meta_3_5_valid;
    vlSelf->__PVT__cache_meta_3_4_valid = vlSelf->__Vdly__cache_meta_3_4_valid;
    vlSelf->__PVT__cache_meta_3_3_valid = vlSelf->__Vdly__cache_meta_3_3_valid;
    vlSelf->__PVT__cache_meta_3_2_valid = vlSelf->__Vdly__cache_meta_3_2_valid;
    vlSelf->__PVT__cache_meta_3_1_valid = vlSelf->__Vdly__cache_meta_3_1_valid;
    vlSelf->__PVT__cache_meta_3_0_valid = vlSelf->__Vdly__cache_meta_3_0_valid;
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
    vlSelf->__PVT__stage2__DOT__target_way1H = ((0U 
                                                 != (IData)(vlSelf->__PVT__stage2__DOT__hit_array))
                                                 ? (IData)(vlSelf->__PVT__stage2__DOT__hit_array)
                                                 : (IData)(vlSelf->__PVT__stage2__DOT__replace1H));
}

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__7(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__7\n"); );
    // Body
    vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3 
        = ((vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata 
            & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
           | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2);
    vlSelf->__PVT__stage3__DOT__burst_last = ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3) 
                                              & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T)));
    vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->__PVT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                 | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                    >> 5U)));
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
    vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->__PVT__stage2__DOT__s2_valid)) 
                 | (IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1)));
    vlSelf->__Vcellinp__CacheDataRam__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_1__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (1U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_2__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (2U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_3__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__PVT__data_addr = (0x1fU & ((IData)(vlSelf->__PVT___stage3_io_wt_en)
                                          ? (IData)(vlSelf->__PVT__stage3__DOT__buf_index)
                                          : (IData)(
                                                    (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                     >> 4U))));
    vlSelf->__PVT__stage1__DOT___io_cpu_ready_T = ((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                                                   & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
    vlSelf->__PVT___T_12 = ((IData)(vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) 
                            | (IData)(vlSelf->__PVT___stage3_io_wt_en));
}

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__2(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__2\n"); );
    // Variables
    VlWide<23>/*735:0*/ __Vtemp152;
    VlWide<23>/*735:0*/ __Vtemp182;
    VlWide<23>/*735:0*/ __Vtemp212;
    VlWide<23>/*735:0*/ __Vtemp242;
    // Body
    vlSelf->__Vdly__stage3__DOT__buf_mthrough = vlSelf->__PVT__stage3__DOT__buf_mthrough;
    vlSelf->__Vdly__stage3__DOT__buf_wr = vlSelf->__PVT__stage3__DOT__buf_wr;
    vlSelf->__Vdly__stage3__DOT__cnt = vlSelf->__PVT__stage3__DOT__cnt;
    vlSelf->__Vdly__stage3__DOT__buf_offset = vlSelf->__PVT__stage3__DOT__buf_offset;
    vlSelf->__Vdly__stage3__DOT__state = vlSelf->__PVT__stage3__DOT__state;
    vlSelf->__Vdly__cache_meta_2_31_valid = vlSelf->__PVT__cache_meta_2_31_valid;
    vlSelf->__Vdly__cache_meta_0_31_valid = vlSelf->__PVT__cache_meta_0_31_valid;
    vlSelf->__Vdly__cache_meta_3_31_valid = vlSelf->__PVT__cache_meta_3_31_valid;
    vlSelf->__Vdly__cache_meta_1_31_valid = vlSelf->__PVT__cache_meta_1_31_valid;
    vlSelf->__Vdly__cache_meta_3_30_valid = vlSelf->__PVT__cache_meta_3_30_valid;
    vlSelf->__Vdly__cache_meta_2_30_valid = vlSelf->__PVT__cache_meta_2_30_valid;
    vlSelf->__Vdly__cache_meta_1_30_valid = vlSelf->__PVT__cache_meta_1_30_valid;
    vlSelf->__Vdly__cache_meta_0_30_valid = vlSelf->__PVT__cache_meta_0_30_valid;
    vlSelf->__Vdly__cache_meta_3_29_valid = vlSelf->__PVT__cache_meta_3_29_valid;
    vlSelf->__Vdly__cache_meta_2_29_valid = vlSelf->__PVT__cache_meta_2_29_valid;
    vlSelf->__Vdly__cache_meta_1_29_valid = vlSelf->__PVT__cache_meta_1_29_valid;
    vlSelf->__Vdly__cache_meta_0_29_valid = vlSelf->__PVT__cache_meta_0_29_valid;
    vlSelf->__Vdly__cache_meta_3_28_valid = vlSelf->__PVT__cache_meta_3_28_valid;
    vlSelf->__Vdly__cache_meta_2_28_valid = vlSelf->__PVT__cache_meta_2_28_valid;
    vlSelf->__Vdly__cache_meta_1_28_valid = vlSelf->__PVT__cache_meta_1_28_valid;
    vlSelf->__Vdly__cache_meta_0_28_valid = vlSelf->__PVT__cache_meta_0_28_valid;
    vlSelf->__Vdly__cache_meta_3_11_valid = vlSelf->__PVT__cache_meta_3_11_valid;
    vlSelf->__Vdly__cache_meta_2_11_valid = vlSelf->__PVT__cache_meta_2_11_valid;
    vlSelf->__Vdly__cache_meta_1_11_valid = vlSelf->__PVT__cache_meta_1_11_valid;
    vlSelf->__Vdly__cache_meta_0_11_valid = vlSelf->__PVT__cache_meta_0_11_valid;
    vlSelf->__Vdly__cache_meta_3_10_valid = vlSelf->__PVT__cache_meta_3_10_valid;
    vlSelf->__Vdly__cache_meta_2_10_valid = vlSelf->__PVT__cache_meta_2_10_valid;
    vlSelf->__Vdly__cache_meta_1_10_valid = vlSelf->__PVT__cache_meta_1_10_valid;
    vlSelf->__Vdly__cache_meta_0_10_valid = vlSelf->__PVT__cache_meta_0_10_valid;
    vlSelf->__Vdly__cache_meta_3_9_valid = vlSelf->__PVT__cache_meta_3_9_valid;
    vlSelf->__Vdly__cache_meta_2_9_valid = vlSelf->__PVT__cache_meta_2_9_valid;
    vlSelf->__Vdly__cache_meta_1_9_valid = vlSelf->__PVT__cache_meta_1_9_valid;
    vlSelf->__Vdly__cache_meta_0_9_valid = vlSelf->__PVT__cache_meta_0_9_valid;
    vlSelf->__Vdly__cache_meta_3_8_valid = vlSelf->__PVT__cache_meta_3_8_valid;
    vlSelf->__Vdly__cache_meta_2_8_valid = vlSelf->__PVT__cache_meta_2_8_valid;
    vlSelf->__Vdly__cache_meta_1_8_valid = vlSelf->__PVT__cache_meta_1_8_valid;
    vlSelf->__Vdly__cache_meta_0_8_valid = vlSelf->__PVT__cache_meta_0_8_valid;
    vlSelf->__Vdly__cache_meta_3_6_valid = vlSelf->__PVT__cache_meta_3_6_valid;
    vlSelf->__Vdly__cache_meta_2_6_valid = vlSelf->__PVT__cache_meta_2_6_valid;
    vlSelf->__Vdly__cache_meta_1_6_valid = vlSelf->__PVT__cache_meta_1_6_valid;
    vlSelf->__Vdly__cache_meta_0_6_valid = vlSelf->__PVT__cache_meta_0_6_valid;
    vlSelf->__Vdly__cache_meta_3_5_valid = vlSelf->__PVT__cache_meta_3_5_valid;
    vlSelf->__Vdly__cache_meta_2_5_valid = vlSelf->__PVT__cache_meta_2_5_valid;
    vlSelf->__Vdly__cache_meta_1_5_valid = vlSelf->__PVT__cache_meta_1_5_valid;
    vlSelf->__Vdly__cache_meta_0_5_valid = vlSelf->__PVT__cache_meta_0_5_valid;
    vlSelf->__Vdly__cache_meta_3_4_valid = vlSelf->__PVT__cache_meta_3_4_valid;
    vlSelf->__Vdly__cache_meta_2_4_valid = vlSelf->__PVT__cache_meta_2_4_valid;
    vlSelf->__Vdly__cache_meta_1_4_valid = vlSelf->__PVT__cache_meta_1_4_valid;
    vlSelf->__Vdly__cache_meta_0_4_valid = vlSelf->__PVT__cache_meta_0_4_valid;
    vlSelf->__Vdly__cache_meta_3_3_valid = vlSelf->__PVT__cache_meta_3_3_valid;
    vlSelf->__Vdly__cache_meta_2_3_valid = vlSelf->__PVT__cache_meta_2_3_valid;
    vlSelf->__Vdly__cache_meta_1_3_valid = vlSelf->__PVT__cache_meta_1_3_valid;
    vlSelf->__Vdly__cache_meta_0_3_valid = vlSelf->__PVT__cache_meta_0_3_valid;
    vlSelf->__Vdly__cache_meta_3_2_valid = vlSelf->__PVT__cache_meta_3_2_valid;
    vlSelf->__Vdly__cache_meta_2_2_valid = vlSelf->__PVT__cache_meta_2_2_valid;
    vlSelf->__Vdly__cache_meta_1_2_valid = vlSelf->__PVT__cache_meta_1_2_valid;
    vlSelf->__Vdly__cache_meta_0_2_valid = vlSelf->__PVT__cache_meta_0_2_valid;
    vlSelf->__Vdly__cache_meta_3_1_valid = vlSelf->__PVT__cache_meta_3_1_valid;
    vlSelf->__Vdly__cache_meta_2_1_valid = vlSelf->__PVT__cache_meta_2_1_valid;
    vlSelf->__Vdly__cache_meta_1_1_valid = vlSelf->__PVT__cache_meta_1_1_valid;
    vlSelf->__Vdly__cache_meta_0_1_valid = vlSelf->__PVT__cache_meta_0_1_valid;
    vlSelf->__Vdly__cache_meta_3_0_valid = vlSelf->__PVT__cache_meta_3_0_valid;
    vlSelf->__Vdly__cache_meta_2_0_valid = vlSelf->__PVT__cache_meta_2_0_valid;
    vlSelf->__Vdly__cache_meta_1_0_valid = vlSelf->__PVT__cache_meta_1_0_valid;
    vlSelf->__Vdly__cache_meta_0_0_valid = vlSelf->__PVT__cache_meta_0_0_valid;
    vlSelf->__Vdly__cache_meta_3_7_valid = vlSelf->__PVT__cache_meta_3_7_valid;
    vlSelf->__Vdly__cache_meta_2_7_valid = vlSelf->__PVT__cache_meta_2_7_valid;
    vlSelf->__Vdly__cache_meta_1_7_valid = vlSelf->__PVT__cache_meta_1_7_valid;
    vlSelf->__Vdly__cache_meta_0_7_valid = vlSelf->__PVT__cache_meta_0_7_valid;
    vlSelf->__Vdly__cache_meta_3_12_valid = vlSelf->__PVT__cache_meta_3_12_valid;
    vlSelf->__Vdly__cache_meta_2_12_valid = vlSelf->__PVT__cache_meta_2_12_valid;
    vlSelf->__Vdly__cache_meta_1_12_valid = vlSelf->__PVT__cache_meta_1_12_valid;
    vlSelf->__Vdly__cache_meta_0_12_valid = vlSelf->__PVT__cache_meta_0_12_valid;
    vlSelf->__Vdly__cache_meta_3_13_valid = vlSelf->__PVT__cache_meta_3_13_valid;
    vlSelf->__Vdly__cache_meta_2_13_valid = vlSelf->__PVT__cache_meta_2_13_valid;
    vlSelf->__Vdly__cache_meta_1_13_valid = vlSelf->__PVT__cache_meta_1_13_valid;
    vlSelf->__Vdly__cache_meta_0_13_valid = vlSelf->__PVT__cache_meta_0_13_valid;
    vlSelf->__Vdly__cache_meta_3_14_valid = vlSelf->__PVT__cache_meta_3_14_valid;
    vlSelf->__Vdly__cache_meta_2_14_valid = vlSelf->__PVT__cache_meta_2_14_valid;
    vlSelf->__Vdly__cache_meta_1_14_valid = vlSelf->__PVT__cache_meta_1_14_valid;
    vlSelf->__Vdly__cache_meta_0_14_valid = vlSelf->__PVT__cache_meta_0_14_valid;
    vlSelf->__Vdly__cache_meta_3_15_valid = vlSelf->__PVT__cache_meta_3_15_valid;
    vlSelf->__Vdly__cache_meta_2_15_valid = vlSelf->__PVT__cache_meta_2_15_valid;
    vlSelf->__Vdly__cache_meta_1_15_valid = vlSelf->__PVT__cache_meta_1_15_valid;
    vlSelf->__Vdly__cache_meta_0_15_valid = vlSelf->__PVT__cache_meta_0_15_valid;
    vlSelf->__Vdly__cache_meta_3_16_valid = vlSelf->__PVT__cache_meta_3_16_valid;
    vlSelf->__Vdly__cache_meta_2_16_valid = vlSelf->__PVT__cache_meta_2_16_valid;
    vlSelf->__Vdly__cache_meta_1_16_valid = vlSelf->__PVT__cache_meta_1_16_valid;
    vlSelf->__Vdly__cache_meta_0_16_valid = vlSelf->__PVT__cache_meta_0_16_valid;
    vlSelf->__Vdly__cache_meta_3_17_valid = vlSelf->__PVT__cache_meta_3_17_valid;
    vlSelf->__Vdly__cache_meta_2_17_valid = vlSelf->__PVT__cache_meta_2_17_valid;
    vlSelf->__Vdly__cache_meta_1_17_valid = vlSelf->__PVT__cache_meta_1_17_valid;
    vlSelf->__Vdly__cache_meta_0_17_valid = vlSelf->__PVT__cache_meta_0_17_valid;
    vlSelf->__Vdly__cache_meta_3_18_valid = vlSelf->__PVT__cache_meta_3_18_valid;
    vlSelf->__Vdly__cache_meta_2_18_valid = vlSelf->__PVT__cache_meta_2_18_valid;
    vlSelf->__Vdly__cache_meta_1_18_valid = vlSelf->__PVT__cache_meta_1_18_valid;
    vlSelf->__Vdly__cache_meta_0_18_valid = vlSelf->__PVT__cache_meta_0_18_valid;
    vlSelf->__Vdly__cache_meta_3_19_valid = vlSelf->__PVT__cache_meta_3_19_valid;
    vlSelf->__Vdly__cache_meta_2_19_valid = vlSelf->__PVT__cache_meta_2_19_valid;
    vlSelf->__Vdly__cache_meta_1_19_valid = vlSelf->__PVT__cache_meta_1_19_valid;
    vlSelf->__Vdly__cache_meta_0_19_valid = vlSelf->__PVT__cache_meta_0_19_valid;
    vlSelf->__Vdly__cache_meta_3_20_valid = vlSelf->__PVT__cache_meta_3_20_valid;
    vlSelf->__Vdly__cache_meta_2_20_valid = vlSelf->__PVT__cache_meta_2_20_valid;
    vlSelf->__Vdly__cache_meta_1_20_valid = vlSelf->__PVT__cache_meta_1_20_valid;
    vlSelf->__Vdly__cache_meta_0_20_valid = vlSelf->__PVT__cache_meta_0_20_valid;
    vlSelf->__Vdly__cache_meta_3_21_valid = vlSelf->__PVT__cache_meta_3_21_valid;
    vlSelf->__Vdly__cache_meta_2_21_valid = vlSelf->__PVT__cache_meta_2_21_valid;
    vlSelf->__Vdly__cache_meta_1_21_valid = vlSelf->__PVT__cache_meta_1_21_valid;
    vlSelf->__Vdly__cache_meta_0_21_valid = vlSelf->__PVT__cache_meta_0_21_valid;
    vlSelf->__Vdly__cache_meta_3_22_valid = vlSelf->__PVT__cache_meta_3_22_valid;
    vlSelf->__Vdly__cache_meta_2_22_valid = vlSelf->__PVT__cache_meta_2_22_valid;
    vlSelf->__Vdly__cache_meta_1_22_valid = vlSelf->__PVT__cache_meta_1_22_valid;
    vlSelf->__Vdly__cache_meta_0_22_valid = vlSelf->__PVT__cache_meta_0_22_valid;
    vlSelf->__Vdly__cache_meta_3_23_valid = vlSelf->__PVT__cache_meta_3_23_valid;
    vlSelf->__Vdly__cache_meta_2_23_valid = vlSelf->__PVT__cache_meta_2_23_valid;
    vlSelf->__Vdly__cache_meta_1_23_valid = vlSelf->__PVT__cache_meta_1_23_valid;
    vlSelf->__Vdly__cache_meta_0_23_valid = vlSelf->__PVT__cache_meta_0_23_valid;
    vlSelf->__Vdly__cache_meta_3_24_valid = vlSelf->__PVT__cache_meta_3_24_valid;
    vlSelf->__Vdly__cache_meta_2_24_valid = vlSelf->__PVT__cache_meta_2_24_valid;
    vlSelf->__Vdly__cache_meta_1_24_valid = vlSelf->__PVT__cache_meta_1_24_valid;
    vlSelf->__Vdly__cache_meta_0_24_valid = vlSelf->__PVT__cache_meta_0_24_valid;
    vlSelf->__Vdly__cache_meta_3_25_valid = vlSelf->__PVT__cache_meta_3_25_valid;
    vlSelf->__Vdly__cache_meta_2_25_valid = vlSelf->__PVT__cache_meta_2_25_valid;
    vlSelf->__Vdly__cache_meta_1_25_valid = vlSelf->__PVT__cache_meta_1_25_valid;
    vlSelf->__Vdly__cache_meta_0_25_valid = vlSelf->__PVT__cache_meta_0_25_valid;
    vlSelf->__Vdly__cache_meta_3_26_valid = vlSelf->__PVT__cache_meta_3_26_valid;
    vlSelf->__Vdly__cache_meta_2_26_valid = vlSelf->__PVT__cache_meta_2_26_valid;
    vlSelf->__Vdly__cache_meta_1_26_valid = vlSelf->__PVT__cache_meta_1_26_valid;
    vlSelf->__Vdly__cache_meta_0_26_valid = vlSelf->__PVT__cache_meta_0_26_valid;
    vlSelf->__Vdly__cache_meta_3_27_valid = vlSelf->__PVT__cache_meta_3_27_valid;
    vlSelf->__Vdly__cache_meta_2_27_valid = vlSelf->__PVT__cache_meta_2_27_valid;
    vlSelf->__Vdly__cache_meta_1_27_valid = vlSelf->__PVT__cache_meta_1_27_valid;
    vlSelf->__Vdly__cache_meta_0_27_valid = vlSelf->__PVT__cache_meta_0_27_valid;
    vlSelf->__Vdly__meta_rd_3_dirty = vlSelf->__PVT__meta_rd_3_dirty;
    vlSelf->__Vdly__meta_rd_2_dirty = vlSelf->__PVT__meta_rd_2_dirty;
    vlSelf->__Vdly__meta_rd_1_dirty = vlSelf->__PVT__meta_rd_1_dirty;
    vlSelf->__Vdly__meta_rd_0_dirty = vlSelf->__PVT__meta_rd_0_dirty;
    vlSelf->__Vdly__meta_rd_3_tag = vlSelf->__PVT__meta_rd_3_tag;
    vlSelf->__Vdly__meta_rd_2_tag = vlSelf->__PVT__meta_rd_2_tag;
    vlSelf->__Vdly__meta_rd_1_tag = vlSelf->__PVT__meta_rd_1_tag;
    vlSelf->__Vdly__meta_rd_0_tag = vlSelf->__PVT__meta_rd_0_tag;
    vlSelf->__PVT__stage2__DOT__replace1H = ((IData)(vlSymsp->TOP.reset)
                                              ? 1U : 
                                             ((0xeU 
                                               & ((IData)(vlSelf->__PVT__stage2__DOT__replace1H) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__stage2__DOT__replace1H) 
                                                    >> 3U))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->__PVT__stage3__DOT__s3_valid = vlSelf->__PVT__stage2__DOT__s2_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_3_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_3_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_3_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_3_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_3_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_3_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_3_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_3_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_3_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_3_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_3_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_3_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_3_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_2_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_2_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_2_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_2_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_2_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_2_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_2_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_2_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_2_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_2_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_2_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_2_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_2_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_1_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_1_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_1_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_1_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_1_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_1_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_1_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_1_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_1_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_1_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_1_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_1_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_1_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_0_dirty = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__Vdly__meta_rd_0_dirty = (1U & ((((IData)(vlSelf->__PVT__cache_meta_0_31_dirty) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__cache_meta_0_30_dirty) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__cache_meta_0_29_dirty) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->__PVT__cache_meta_0_28_dirty) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->__PVT__cache_meta_0_27_dirty) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->__PVT__cache_meta_0_26_dirty) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->__PVT__cache_meta_0_25_dirty) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->__PVT__cache_meta_0_24_dirty) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->__PVT__cache_meta_0_23_dirty) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->__PVT__cache_meta_0_22_dirty) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->__PVT__cache_meta_0_21_dirty) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_20_dirty) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_19_dirty) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_18_dirty) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_17_dirty) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_16_dirty) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_15_dirty) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_14_dirty) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_13_dirty) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_12_dirty) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_11_dirty) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_10_dirty) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_9_dirty) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_8_dirty) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_7_dirty) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_6_dirty) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_5_dirty) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_4_dirty) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_3_dirty) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_2_dirty) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_1_dirty) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_dirty)))))))))))))))))))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_3_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp152[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_3_1_tag)) 
                                   << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_3_0_tag))));
        __Vtemp152[1U] = ((vlSelf->__PVT__cache_meta_3_2_tag 
                           << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_3_1_tag)) 
                                                 << 0x17U) 
                                                | (QData)((IData)(vlSelf->__PVT__cache_meta_3_0_tag))) 
                                               >> 0x20U)));
        __Vtemp152[2U] = ((vlSelf->__PVT__cache_meta_3_4_tag 
                           << 0x1cU) | ((vlSelf->__PVT__cache_meta_3_3_tag 
                                         << 5U) | (vlSelf->__PVT__cache_meta_3_2_tag 
                                                   >> 0x12U)));
        __Vtemp152[3U] = ((vlSelf->__PVT__cache_meta_3_5_tag 
                           << 0x13U) | (vlSelf->__PVT__cache_meta_3_4_tag 
                                        >> 4U));
        __Vtemp152[4U] = ((vlSelf->__PVT__cache_meta_3_6_tag 
                           << 0xaU) | (vlSelf->__PVT__cache_meta_3_5_tag 
                                       >> 0xdU));
        __Vtemp152[5U] = ((vlSelf->__PVT__cache_meta_3_8_tag 
                           << 0x18U) | ((vlSelf->__PVT__cache_meta_3_7_tag 
                                         << 1U) | (vlSelf->__PVT__cache_meta_3_6_tag 
                                                   >> 0x16U)));
        __Vtemp152[6U] = ((vlSelf->__PVT__cache_meta_3_9_tag 
                           << 0xfU) | (vlSelf->__PVT__cache_meta_3_8_tag 
                                       >> 8U));
        __Vtemp152[7U] = ((vlSelf->__PVT__cache_meta_3_11_tag 
                           << 0x1dU) | ((vlSelf->__PVT__cache_meta_3_10_tag 
                                         << 6U) | (vlSelf->__PVT__cache_meta_3_9_tag 
                                                   >> 0x11U)));
        __Vtemp152[8U] = ((vlSelf->__PVT__cache_meta_3_12_tag 
                           << 0x14U) | (vlSelf->__PVT__cache_meta_3_11_tag 
                                        >> 3U));
        __Vtemp152[9U] = ((vlSelf->__PVT__cache_meta_3_13_tag 
                           << 0xbU) | (vlSelf->__PVT__cache_meta_3_12_tag 
                                       >> 0xcU));
        __Vtemp152[0xaU] = ((vlSelf->__PVT__cache_meta_3_15_tag 
                             << 0x19U) | ((vlSelf->__PVT__cache_meta_3_14_tag 
                                           << 2U) | 
                                          (vlSelf->__PVT__cache_meta_3_13_tag 
                                           >> 0x15U)));
        __Vtemp152[0xbU] = ((vlSelf->__PVT__cache_meta_3_16_tag 
                             << 0x10U) | (vlSelf->__PVT__cache_meta_3_15_tag 
                                          >> 7U));
        __Vtemp152[0xcU] = ((vlSelf->__PVT__cache_meta_3_18_tag 
                             << 0x1eU) | ((vlSelf->__PVT__cache_meta_3_17_tag 
                                           << 7U) | 
                                          (vlSelf->__PVT__cache_meta_3_16_tag 
                                           >> 0x10U)));
        __Vtemp152[0xdU] = ((vlSelf->__PVT__cache_meta_3_19_tag 
                             << 0x15U) | (vlSelf->__PVT__cache_meta_3_18_tag 
                                          >> 2U));
        __Vtemp152[0xeU] = ((vlSelf->__PVT__cache_meta_3_20_tag 
                             << 0xcU) | (vlSelf->__PVT__cache_meta_3_19_tag 
                                         >> 0xbU));
        __Vtemp152[0xfU] = ((vlSelf->__PVT__cache_meta_3_22_tag 
                             << 0x1aU) | ((vlSelf->__PVT__cache_meta_3_21_tag 
                                           << 3U) | 
                                          (vlSelf->__PVT__cache_meta_3_20_tag 
                                           >> 0x14U)));
        __Vtemp152[0x10U] = ((vlSelf->__PVT__cache_meta_3_23_tag 
                              << 0x11U) | (vlSelf->__PVT__cache_meta_3_22_tag 
                                           >> 6U));
        __Vtemp152[0x11U] = ((vlSelf->__PVT__cache_meta_3_25_tag 
                              << 0x1fU) | ((vlSelf->__PVT__cache_meta_3_24_tag 
                                            << 8U) 
                                           | (vlSelf->__PVT__cache_meta_3_23_tag 
                                              >> 0xfU)));
        __Vtemp152[0x12U] = ((vlSelf->__PVT__cache_meta_3_26_tag 
                              << 0x16U) | (vlSelf->__PVT__cache_meta_3_25_tag 
                                           >> 1U));
        __Vtemp152[0x13U] = ((vlSelf->__PVT__cache_meta_3_27_tag 
                              << 0xdU) | (vlSelf->__PVT__cache_meta_3_26_tag 
                                          >> 0xaU));
        __Vtemp152[0x14U] = ((vlSelf->__PVT__cache_meta_3_29_tag 
                              << 0x1bU) | ((vlSelf->__PVT__cache_meta_3_28_tag 
                                            << 4U) 
                                           | (vlSelf->__PVT__cache_meta_3_27_tag 
                                              >> 0x13U)));
        __Vtemp152[0x15U] = ((vlSelf->__PVT__cache_meta_3_30_tag 
                              << 0x12U) | (vlSelf->__PVT__cache_meta_3_29_tag 
                                           >> 5U));
        __Vtemp152[0x16U] = ((vlSelf->__PVT__cache_meta_3_31_tag 
                              << 9U) | (vlSelf->__PVT__cache_meta_3_30_tag 
                                        >> 0xeU));
        vlSelf->__Vdly__meta_rd_3_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp152[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp152[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_2_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp182[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_2_1_tag)) 
                                   << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_2_0_tag))));
        __Vtemp182[1U] = ((vlSelf->__PVT__cache_meta_2_2_tag 
                           << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_2_1_tag)) 
                                                 << 0x17U) 
                                                | (QData)((IData)(vlSelf->__PVT__cache_meta_2_0_tag))) 
                                               >> 0x20U)));
        __Vtemp182[2U] = ((vlSelf->__PVT__cache_meta_2_4_tag 
                           << 0x1cU) | ((vlSelf->__PVT__cache_meta_2_3_tag 
                                         << 5U) | (vlSelf->__PVT__cache_meta_2_2_tag 
                                                   >> 0x12U)));
        __Vtemp182[3U] = ((vlSelf->__PVT__cache_meta_2_5_tag 
                           << 0x13U) | (vlSelf->__PVT__cache_meta_2_4_tag 
                                        >> 4U));
        __Vtemp182[4U] = ((vlSelf->__PVT__cache_meta_2_6_tag 
                           << 0xaU) | (vlSelf->__PVT__cache_meta_2_5_tag 
                                       >> 0xdU));
        __Vtemp182[5U] = ((vlSelf->__PVT__cache_meta_2_8_tag 
                           << 0x18U) | ((vlSelf->__PVT__cache_meta_2_7_tag 
                                         << 1U) | (vlSelf->__PVT__cache_meta_2_6_tag 
                                                   >> 0x16U)));
        __Vtemp182[6U] = ((vlSelf->__PVT__cache_meta_2_9_tag 
                           << 0xfU) | (vlSelf->__PVT__cache_meta_2_8_tag 
                                       >> 8U));
        __Vtemp182[7U] = ((vlSelf->__PVT__cache_meta_2_11_tag 
                           << 0x1dU) | ((vlSelf->__PVT__cache_meta_2_10_tag 
                                         << 6U) | (vlSelf->__PVT__cache_meta_2_9_tag 
                                                   >> 0x11U)));
        __Vtemp182[8U] = ((vlSelf->__PVT__cache_meta_2_12_tag 
                           << 0x14U) | (vlSelf->__PVT__cache_meta_2_11_tag 
                                        >> 3U));
        __Vtemp182[9U] = ((vlSelf->__PVT__cache_meta_2_13_tag 
                           << 0xbU) | (vlSelf->__PVT__cache_meta_2_12_tag 
                                       >> 0xcU));
        __Vtemp182[0xaU] = ((vlSelf->__PVT__cache_meta_2_15_tag 
                             << 0x19U) | ((vlSelf->__PVT__cache_meta_2_14_tag 
                                           << 2U) | 
                                          (vlSelf->__PVT__cache_meta_2_13_tag 
                                           >> 0x15U)));
        __Vtemp182[0xbU] = ((vlSelf->__PVT__cache_meta_2_16_tag 
                             << 0x10U) | (vlSelf->__PVT__cache_meta_2_15_tag 
                                          >> 7U));
        __Vtemp182[0xcU] = ((vlSelf->__PVT__cache_meta_2_18_tag 
                             << 0x1eU) | ((vlSelf->__PVT__cache_meta_2_17_tag 
                                           << 7U) | 
                                          (vlSelf->__PVT__cache_meta_2_16_tag 
                                           >> 0x10U)));
        __Vtemp182[0xdU] = ((vlSelf->__PVT__cache_meta_2_19_tag 
                             << 0x15U) | (vlSelf->__PVT__cache_meta_2_18_tag 
                                          >> 2U));
        __Vtemp182[0xeU] = ((vlSelf->__PVT__cache_meta_2_20_tag 
                             << 0xcU) | (vlSelf->__PVT__cache_meta_2_19_tag 
                                         >> 0xbU));
        __Vtemp182[0xfU] = ((vlSelf->__PVT__cache_meta_2_22_tag 
                             << 0x1aU) | ((vlSelf->__PVT__cache_meta_2_21_tag 
                                           << 3U) | 
                                          (vlSelf->__PVT__cache_meta_2_20_tag 
                                           >> 0x14U)));
        __Vtemp182[0x10U] = ((vlSelf->__PVT__cache_meta_2_23_tag 
                              << 0x11U) | (vlSelf->__PVT__cache_meta_2_22_tag 
                                           >> 6U));
        __Vtemp182[0x11U] = ((vlSelf->__PVT__cache_meta_2_25_tag 
                              << 0x1fU) | ((vlSelf->__PVT__cache_meta_2_24_tag 
                                            << 8U) 
                                           | (vlSelf->__PVT__cache_meta_2_23_tag 
                                              >> 0xfU)));
        __Vtemp182[0x12U] = ((vlSelf->__PVT__cache_meta_2_26_tag 
                              << 0x16U) | (vlSelf->__PVT__cache_meta_2_25_tag 
                                           >> 1U));
        __Vtemp182[0x13U] = ((vlSelf->__PVT__cache_meta_2_27_tag 
                              << 0xdU) | (vlSelf->__PVT__cache_meta_2_26_tag 
                                          >> 0xaU));
        __Vtemp182[0x14U] = ((vlSelf->__PVT__cache_meta_2_29_tag 
                              << 0x1bU) | ((vlSelf->__PVT__cache_meta_2_28_tag 
                                            << 4U) 
                                           | (vlSelf->__PVT__cache_meta_2_27_tag 
                                              >> 0x13U)));
        __Vtemp182[0x15U] = ((vlSelf->__PVT__cache_meta_2_30_tag 
                              << 0x12U) | (vlSelf->__PVT__cache_meta_2_29_tag 
                                           >> 5U));
        __Vtemp182[0x16U] = ((vlSelf->__PVT__cache_meta_2_31_tag 
                              << 9U) | (vlSelf->__PVT__cache_meta_2_30_tag 
                                        >> 0xeU));
        vlSelf->__Vdly__meta_rd_2_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp182[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp182[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_1_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp212[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_1_1_tag)) 
                                   << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_1_0_tag))));
        __Vtemp212[1U] = ((vlSelf->__PVT__cache_meta_1_2_tag 
                           << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_1_1_tag)) 
                                                 << 0x17U) 
                                                | (QData)((IData)(vlSelf->__PVT__cache_meta_1_0_tag))) 
                                               >> 0x20U)));
        __Vtemp212[2U] = ((vlSelf->__PVT__cache_meta_1_4_tag 
                           << 0x1cU) | ((vlSelf->__PVT__cache_meta_1_3_tag 
                                         << 5U) | (vlSelf->__PVT__cache_meta_1_2_tag 
                                                   >> 0x12U)));
        __Vtemp212[3U] = ((vlSelf->__PVT__cache_meta_1_5_tag 
                           << 0x13U) | (vlSelf->__PVT__cache_meta_1_4_tag 
                                        >> 4U));
        __Vtemp212[4U] = ((vlSelf->__PVT__cache_meta_1_6_tag 
                           << 0xaU) | (vlSelf->__PVT__cache_meta_1_5_tag 
                                       >> 0xdU));
        __Vtemp212[5U] = ((vlSelf->__PVT__cache_meta_1_8_tag 
                           << 0x18U) | ((vlSelf->__PVT__cache_meta_1_7_tag 
                                         << 1U) | (vlSelf->__PVT__cache_meta_1_6_tag 
                                                   >> 0x16U)));
        __Vtemp212[6U] = ((vlSelf->__PVT__cache_meta_1_9_tag 
                           << 0xfU) | (vlSelf->__PVT__cache_meta_1_8_tag 
                                       >> 8U));
        __Vtemp212[7U] = ((vlSelf->__PVT__cache_meta_1_11_tag 
                           << 0x1dU) | ((vlSelf->__PVT__cache_meta_1_10_tag 
                                         << 6U) | (vlSelf->__PVT__cache_meta_1_9_tag 
                                                   >> 0x11U)));
        __Vtemp212[8U] = ((vlSelf->__PVT__cache_meta_1_12_tag 
                           << 0x14U) | (vlSelf->__PVT__cache_meta_1_11_tag 
                                        >> 3U));
        __Vtemp212[9U] = ((vlSelf->__PVT__cache_meta_1_13_tag 
                           << 0xbU) | (vlSelf->__PVT__cache_meta_1_12_tag 
                                       >> 0xcU));
        __Vtemp212[0xaU] = ((vlSelf->__PVT__cache_meta_1_15_tag 
                             << 0x19U) | ((vlSelf->__PVT__cache_meta_1_14_tag 
                                           << 2U) | 
                                          (vlSelf->__PVT__cache_meta_1_13_tag 
                                           >> 0x15U)));
        __Vtemp212[0xbU] = ((vlSelf->__PVT__cache_meta_1_16_tag 
                             << 0x10U) | (vlSelf->__PVT__cache_meta_1_15_tag 
                                          >> 7U));
        __Vtemp212[0xcU] = ((vlSelf->__PVT__cache_meta_1_18_tag 
                             << 0x1eU) | ((vlSelf->__PVT__cache_meta_1_17_tag 
                                           << 7U) | 
                                          (vlSelf->__PVT__cache_meta_1_16_tag 
                                           >> 0x10U)));
        __Vtemp212[0xdU] = ((vlSelf->__PVT__cache_meta_1_19_tag 
                             << 0x15U) | (vlSelf->__PVT__cache_meta_1_18_tag 
                                          >> 2U));
        __Vtemp212[0xeU] = ((vlSelf->__PVT__cache_meta_1_20_tag 
                             << 0xcU) | (vlSelf->__PVT__cache_meta_1_19_tag 
                                         >> 0xbU));
        __Vtemp212[0xfU] = ((vlSelf->__PVT__cache_meta_1_22_tag 
                             << 0x1aU) | ((vlSelf->__PVT__cache_meta_1_21_tag 
                                           << 3U) | 
                                          (vlSelf->__PVT__cache_meta_1_20_tag 
                                           >> 0x14U)));
        __Vtemp212[0x10U] = ((vlSelf->__PVT__cache_meta_1_23_tag 
                              << 0x11U) | (vlSelf->__PVT__cache_meta_1_22_tag 
                                           >> 6U));
        __Vtemp212[0x11U] = ((vlSelf->__PVT__cache_meta_1_25_tag 
                              << 0x1fU) | ((vlSelf->__PVT__cache_meta_1_24_tag 
                                            << 8U) 
                                           | (vlSelf->__PVT__cache_meta_1_23_tag 
                                              >> 0xfU)));
        __Vtemp212[0x12U] = ((vlSelf->__PVT__cache_meta_1_26_tag 
                              << 0x16U) | (vlSelf->__PVT__cache_meta_1_25_tag 
                                           >> 1U));
        __Vtemp212[0x13U] = ((vlSelf->__PVT__cache_meta_1_27_tag 
                              << 0xdU) | (vlSelf->__PVT__cache_meta_1_26_tag 
                                          >> 0xaU));
        __Vtemp212[0x14U] = ((vlSelf->__PVT__cache_meta_1_29_tag 
                              << 0x1bU) | ((vlSelf->__PVT__cache_meta_1_28_tag 
                                            << 4U) 
                                           | (vlSelf->__PVT__cache_meta_1_27_tag 
                                              >> 0x13U)));
        __Vtemp212[0x15U] = ((vlSelf->__PVT__cache_meta_1_30_tag 
                              << 0x12U) | (vlSelf->__PVT__cache_meta_1_29_tag 
                                           >> 5U));
        __Vtemp212[0x16U] = ((vlSelf->__PVT__cache_meta_1_31_tag 
                              << 9U) | (vlSelf->__PVT__cache_meta_1_30_tag 
                                        >> 0xeU));
        vlSelf->__Vdly__meta_rd_1_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp212[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp212[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__meta_rd_0_tag = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        __Vtemp242[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cache_meta_0_1_tag)) 
                                   << 0x17U) | (QData)((IData)(vlSelf->__PVT__cache_meta_0_0_tag))));
        __Vtemp242[1U] = ((vlSelf->__PVT__cache_meta_0_2_tag 
                           << 0xeU) | (IData)(((((QData)((IData)(vlSelf->__PVT__cache_meta_0_1_tag)) 
                                                 << 0x17U) 
                                                | (QData)((IData)(vlSelf->__PVT__cache_meta_0_0_tag))) 
                                               >> 0x20U)));
        __Vtemp242[2U] = ((vlSelf->__PVT__cache_meta_0_4_tag 
                           << 0x1cU) | ((vlSelf->__PVT__cache_meta_0_3_tag 
                                         << 5U) | (vlSelf->__PVT__cache_meta_0_2_tag 
                                                   >> 0x12U)));
        __Vtemp242[3U] = ((vlSelf->__PVT__cache_meta_0_5_tag 
                           << 0x13U) | (vlSelf->__PVT__cache_meta_0_4_tag 
                                        >> 4U));
        __Vtemp242[4U] = ((vlSelf->__PVT__cache_meta_0_6_tag 
                           << 0xaU) | (vlSelf->__PVT__cache_meta_0_5_tag 
                                       >> 0xdU));
        __Vtemp242[5U] = ((vlSelf->__PVT__cache_meta_0_8_tag 
                           << 0x18U) | ((vlSelf->__PVT__cache_meta_0_7_tag 
                                         << 1U) | (vlSelf->__PVT__cache_meta_0_6_tag 
                                                   >> 0x16U)));
        __Vtemp242[6U] = ((vlSelf->__PVT__cache_meta_0_9_tag 
                           << 0xfU) | (vlSelf->__PVT__cache_meta_0_8_tag 
                                       >> 8U));
        __Vtemp242[7U] = ((vlSelf->__PVT__cache_meta_0_11_tag 
                           << 0x1dU) | ((vlSelf->__PVT__cache_meta_0_10_tag 
                                         << 6U) | (vlSelf->__PVT__cache_meta_0_9_tag 
                                                   >> 0x11U)));
        __Vtemp242[8U] = ((vlSelf->__PVT__cache_meta_0_12_tag 
                           << 0x14U) | (vlSelf->__PVT__cache_meta_0_11_tag 
                                        >> 3U));
        __Vtemp242[9U] = ((vlSelf->__PVT__cache_meta_0_13_tag 
                           << 0xbU) | (vlSelf->__PVT__cache_meta_0_12_tag 
                                       >> 0xcU));
        __Vtemp242[0xaU] = ((vlSelf->__PVT__cache_meta_0_15_tag 
                             << 0x19U) | ((vlSelf->__PVT__cache_meta_0_14_tag 
                                           << 2U) | 
                                          (vlSelf->__PVT__cache_meta_0_13_tag 
                                           >> 0x15U)));
        __Vtemp242[0xbU] = ((vlSelf->__PVT__cache_meta_0_16_tag 
                             << 0x10U) | (vlSelf->__PVT__cache_meta_0_15_tag 
                                          >> 7U));
        __Vtemp242[0xcU] = ((vlSelf->__PVT__cache_meta_0_18_tag 
                             << 0x1eU) | ((vlSelf->__PVT__cache_meta_0_17_tag 
                                           << 7U) | 
                                          (vlSelf->__PVT__cache_meta_0_16_tag 
                                           >> 0x10U)));
        __Vtemp242[0xdU] = ((vlSelf->__PVT__cache_meta_0_19_tag 
                             << 0x15U) | (vlSelf->__PVT__cache_meta_0_18_tag 
                                          >> 2U));
        __Vtemp242[0xeU] = ((vlSelf->__PVT__cache_meta_0_20_tag 
                             << 0xcU) | (vlSelf->__PVT__cache_meta_0_19_tag 
                                         >> 0xbU));
        __Vtemp242[0xfU] = ((vlSelf->__PVT__cache_meta_0_22_tag 
                             << 0x1aU) | ((vlSelf->__PVT__cache_meta_0_21_tag 
                                           << 3U) | 
                                          (vlSelf->__PVT__cache_meta_0_20_tag 
                                           >> 0x14U)));
        __Vtemp242[0x10U] = ((vlSelf->__PVT__cache_meta_0_23_tag 
                              << 0x11U) | (vlSelf->__PVT__cache_meta_0_22_tag 
                                           >> 6U));
        __Vtemp242[0x11U] = ((vlSelf->__PVT__cache_meta_0_25_tag 
                              << 0x1fU) | ((vlSelf->__PVT__cache_meta_0_24_tag 
                                            << 8U) 
                                           | (vlSelf->__PVT__cache_meta_0_23_tag 
                                              >> 0xfU)));
        __Vtemp242[0x12U] = ((vlSelf->__PVT__cache_meta_0_26_tag 
                              << 0x16U) | (vlSelf->__PVT__cache_meta_0_25_tag 
                                           >> 1U));
        __Vtemp242[0x13U] = ((vlSelf->__PVT__cache_meta_0_27_tag 
                              << 0xdU) | (vlSelf->__PVT__cache_meta_0_26_tag 
                                          >> 0xaU));
        __Vtemp242[0x14U] = ((vlSelf->__PVT__cache_meta_0_29_tag 
                              << 0x1bU) | ((vlSelf->__PVT__cache_meta_0_28_tag 
                                            << 4U) 
                                           | (vlSelf->__PVT__cache_meta_0_27_tag 
                                              >> 0x13U)));
        __Vtemp242[0x15U] = ((vlSelf->__PVT__cache_meta_0_30_tag 
                              << 0x12U) | (vlSelf->__PVT__cache_meta_0_29_tag 
                                           >> 5U));
        __Vtemp242[0x16U] = ((vlSelf->__PVT__cache_meta_0_31_tag 
                              << 9U) | (vlSelf->__PVT__cache_meta_0_30_tag 
                                        >> 0xeU));
        vlSelf->__Vdly__meta_rd_0_tag = ((0x2dfU >= 
                                          (0x3ffU & 
                                           ((IData)(0x17U) 
                                            * (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 4U))))))
                                          ? (0x7fffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                  >> 4U))))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp242[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U)))))))) 
                                                | (__Vtemp242[
                                                   (0x1fU 
                                                    & (((IData)(0x17U) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                    >> 4U)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                                   >> 4U))))))))
                                          : 0U);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_3_31_valid = 0U;
        vlSelf->__PVT__cache_meta_3_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_527 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_3_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_527) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_527) {
            vlSelf->__PVT__cache_meta_3_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_2_31_valid = 0U;
        vlSelf->__PVT__cache_meta_2_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_399 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_2_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_399) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_399) {
            vlSelf->__PVT__cache_meta_2_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_1_31_valid = 0U;
        vlSelf->__PVT__cache_meta_1_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_271 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_1_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_271) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_271) {
            vlSelf->__PVT__cache_meta_1_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_31_valid = 0U;
        vlSelf->__PVT__cache_meta_0_31_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_31_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_143 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_index)));
        vlSelf->__Vdly__cache_meta_0_31_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_143) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_31_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_143) {
            vlSelf->__PVT__cache_meta_0_31_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_31_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_30_valid = 0U;
        vlSelf->__PVT__cache_meta_0_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_30_valid = 0U;
        vlSelf->__PVT__cache_meta_1_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_30_valid = 0U;
        vlSelf->__PVT__cache_meta_2_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_30_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_30_valid = 0U;
        vlSelf->__PVT__cache_meta_3_30_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_30_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_522 = (0x1eU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_139 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_267 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_395 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__PVT__unnamedblk1__DOT___T_523 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_522));
        vlSelf->__Vdly__cache_meta_0_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_139) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_139) {
            vlSelf->__PVT__cache_meta_0_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_267) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_267) {
            vlSelf->__PVT__cache_meta_1_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_395) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_395) {
            vlSelf->__PVT__cache_meta_2_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_30_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_523) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_30_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_523) {
            vlSelf->__PVT__cache_meta_3_30_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_30_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_29_valid = 0U;
        vlSelf->__PVT__cache_meta_0_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_29_valid = 0U;
        vlSelf->__PVT__cache_meta_1_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_29_valid = 0U;
        vlSelf->__PVT__cache_meta_2_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_29_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_29_valid = 0U;
        vlSelf->__PVT__cache_meta_3_29_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_29_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_518 = (0x1dU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_135 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_263 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_391 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__PVT__unnamedblk1__DOT___T_519 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_518));
        vlSelf->__Vdly__cache_meta_0_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_135) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_135) {
            vlSelf->__PVT__cache_meta_0_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_263) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_263) {
            vlSelf->__PVT__cache_meta_1_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_391) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_391) {
            vlSelf->__PVT__cache_meta_2_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_29_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_519) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_29_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_519) {
            vlSelf->__PVT__cache_meta_3_29_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_29_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_28_valid = 0U;
        vlSelf->__PVT__cache_meta_0_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_28_valid = 0U;
        vlSelf->__PVT__cache_meta_1_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_28_valid = 0U;
        vlSelf->__PVT__cache_meta_2_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_28_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_28_valid = 0U;
        vlSelf->__PVT__cache_meta_3_28_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_28_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_514 = (0x1cU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_131 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_259 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_387 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__PVT__unnamedblk1__DOT___T_515 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_514));
        vlSelf->__Vdly__cache_meta_0_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_131) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_131) {
            vlSelf->__PVT__cache_meta_0_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_259) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_259) {
            vlSelf->__PVT__cache_meta_1_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_387) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_387) {
            vlSelf->__PVT__cache_meta_2_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_28_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_515) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_28_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_515) {
            vlSelf->__PVT__cache_meta_3_28_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_28_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_27_valid = 0U;
        vlSelf->__PVT__cache_meta_0_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_27_valid = 0U;
        vlSelf->__PVT__cache_meta_1_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_27_valid = 0U;
        vlSelf->__PVT__cache_meta_2_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_27_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_27_valid = 0U;
        vlSelf->__PVT__cache_meta_3_27_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_27_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_510 = (0x1bU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_127 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_255 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_383 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__PVT__unnamedblk1__DOT___T_511 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_510));
        vlSelf->__Vdly__cache_meta_0_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_127) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_127) {
            vlSelf->__PVT__cache_meta_0_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_255) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_255) {
            vlSelf->__PVT__cache_meta_1_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_383) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_383) {
            vlSelf->__PVT__cache_meta_2_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_27_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_511) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_27_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_511) {
            vlSelf->__PVT__cache_meta_3_27_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_27_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_26_valid = 0U;
        vlSelf->__PVT__cache_meta_0_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_26_valid = 0U;
        vlSelf->__PVT__cache_meta_1_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_26_valid = 0U;
        vlSelf->__PVT__cache_meta_2_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_26_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_26_valid = 0U;
        vlSelf->__PVT__cache_meta_3_26_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_26_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_506 = (0x1aU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_123 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_251 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_379 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__PVT__unnamedblk1__DOT___T_507 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_506));
        vlSelf->__Vdly__cache_meta_0_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_123) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_123) {
            vlSelf->__PVT__cache_meta_0_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_251) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_251) {
            vlSelf->__PVT__cache_meta_1_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_379) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_379) {
            vlSelf->__PVT__cache_meta_2_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_26_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_507) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_26_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_507) {
            vlSelf->__PVT__cache_meta_3_26_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_26_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_25_valid = 0U;
        vlSelf->__PVT__cache_meta_0_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_25_valid = 0U;
        vlSelf->__PVT__cache_meta_1_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_25_valid = 0U;
        vlSelf->__PVT__cache_meta_2_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_25_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_25_valid = 0U;
        vlSelf->__PVT__cache_meta_3_25_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_25_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_502 = (0x19U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_119 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_247 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_375 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__PVT__unnamedblk1__DOT___T_503 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_502));
        vlSelf->__Vdly__cache_meta_0_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_119) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_119) {
            vlSelf->__PVT__cache_meta_0_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_247) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_247) {
            vlSelf->__PVT__cache_meta_1_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_375) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_375) {
            vlSelf->__PVT__cache_meta_2_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_25_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_503) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_25_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_503) {
            vlSelf->__PVT__cache_meta_3_25_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_25_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_24_valid = 0U;
        vlSelf->__PVT__cache_meta_0_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_24_valid = 0U;
        vlSelf->__PVT__cache_meta_1_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_24_valid = 0U;
        vlSelf->__PVT__cache_meta_2_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_24_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_24_valid = 0U;
        vlSelf->__PVT__cache_meta_3_24_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_24_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_498 = (0x18U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_115 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_243 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_371 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__PVT__unnamedblk1__DOT___T_499 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_498));
        vlSelf->__Vdly__cache_meta_0_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_115) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_115) {
            vlSelf->__PVT__cache_meta_0_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_243) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_243) {
            vlSelf->__PVT__cache_meta_1_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_371) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_371) {
            vlSelf->__PVT__cache_meta_2_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_24_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_499) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_24_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_499) {
            vlSelf->__PVT__cache_meta_3_24_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_24_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_23_valid = 0U;
        vlSelf->__PVT__cache_meta_0_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_23_valid = 0U;
        vlSelf->__PVT__cache_meta_1_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_23_valid = 0U;
        vlSelf->__PVT__cache_meta_2_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_23_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_23_valid = 0U;
        vlSelf->__PVT__cache_meta_3_23_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_23_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_494 = (0x17U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_111 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_239 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_367 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__PVT__unnamedblk1__DOT___T_495 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_494));
        vlSelf->__Vdly__cache_meta_0_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_111) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_111) {
            vlSelf->__PVT__cache_meta_0_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_239) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_239) {
            vlSelf->__PVT__cache_meta_1_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_367) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_367) {
            vlSelf->__PVT__cache_meta_2_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_23_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_495) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_23_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_495) {
            vlSelf->__PVT__cache_meta_3_23_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_23_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_22_valid = 0U;
        vlSelf->__PVT__cache_meta_0_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_22_valid = 0U;
        vlSelf->__PVT__cache_meta_1_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_22_valid = 0U;
        vlSelf->__PVT__cache_meta_2_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_22_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_22_valid = 0U;
        vlSelf->__PVT__cache_meta_3_22_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_22_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_490 = (0x16U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_107 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_235 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_363 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__PVT__unnamedblk1__DOT___T_491 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_490));
        vlSelf->__Vdly__cache_meta_0_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_107) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_107) {
            vlSelf->__PVT__cache_meta_0_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_235) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_235) {
            vlSelf->__PVT__cache_meta_1_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_363) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_363) {
            vlSelf->__PVT__cache_meta_2_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_22_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_491) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_22_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_491) {
            vlSelf->__PVT__cache_meta_3_22_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_22_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_21_valid = 0U;
        vlSelf->__PVT__cache_meta_0_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_21_valid = 0U;
        vlSelf->__PVT__cache_meta_1_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_21_valid = 0U;
        vlSelf->__PVT__cache_meta_2_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_21_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_21_valid = 0U;
        vlSelf->__PVT__cache_meta_3_21_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_21_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_486 = (0x15U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_103 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_231 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_359 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__PVT__unnamedblk1__DOT___T_487 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_486));
        vlSelf->__Vdly__cache_meta_0_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_103) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_103) {
            vlSelf->__PVT__cache_meta_0_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_231) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_231) {
            vlSelf->__PVT__cache_meta_1_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_359) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_359) {
            vlSelf->__PVT__cache_meta_2_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_21_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_487) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_21_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_487) {
            vlSelf->__PVT__cache_meta_3_21_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_21_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_20_valid = 0U;
        vlSelf->__PVT__cache_meta_0_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_20_valid = 0U;
        vlSelf->__PVT__cache_meta_1_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_20_valid = 0U;
        vlSelf->__PVT__cache_meta_2_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_20_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_20_valid = 0U;
        vlSelf->__PVT__cache_meta_3_20_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_20_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_482 = (0x14U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_99 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_227 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_355 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__PVT__unnamedblk1__DOT___T_483 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_482));
        vlSelf->__Vdly__cache_meta_0_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_99) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_99) {
            vlSelf->__PVT__cache_meta_0_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_227) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_227) {
            vlSelf->__PVT__cache_meta_1_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_355) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_355) {
            vlSelf->__PVT__cache_meta_2_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_20_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_483) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_20_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_483) {
            vlSelf->__PVT__cache_meta_3_20_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_20_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_19_valid = 0U;
        vlSelf->__PVT__cache_meta_0_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_19_valid = 0U;
        vlSelf->__PVT__cache_meta_1_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_19_valid = 0U;
        vlSelf->__PVT__cache_meta_2_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_19_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_19_valid = 0U;
        vlSelf->__PVT__cache_meta_3_19_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_19_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_478 = (0x13U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_95 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_223 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_351 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__PVT__unnamedblk1__DOT___T_479 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_478));
        vlSelf->__Vdly__cache_meta_0_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_95) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_95) {
            vlSelf->__PVT__cache_meta_0_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_223) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_223) {
            vlSelf->__PVT__cache_meta_1_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_351) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_351) {
            vlSelf->__PVT__cache_meta_2_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_19_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_479) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_19_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_479) {
            vlSelf->__PVT__cache_meta_3_19_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_19_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_18_valid = 0U;
        vlSelf->__PVT__cache_meta_0_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_18_valid = 0U;
        vlSelf->__PVT__cache_meta_1_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_18_valid = 0U;
        vlSelf->__PVT__cache_meta_2_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_18_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_18_valid = 0U;
        vlSelf->__PVT__cache_meta_3_18_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_18_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_474 = (0x12U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_91 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_219 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_347 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__PVT__unnamedblk1__DOT___T_475 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_474));
        vlSelf->__Vdly__cache_meta_0_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_91) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_91) {
            vlSelf->__PVT__cache_meta_0_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_219) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_219) {
            vlSelf->__PVT__cache_meta_1_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_347) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_347) {
            vlSelf->__PVT__cache_meta_2_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_18_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_475) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_18_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_475) {
            vlSelf->__PVT__cache_meta_3_18_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_18_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_17_valid = 0U;
        vlSelf->__PVT__cache_meta_0_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_17_valid = 0U;
        vlSelf->__PVT__cache_meta_1_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_17_valid = 0U;
        vlSelf->__PVT__cache_meta_2_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_17_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_17_valid = 0U;
        vlSelf->__PVT__cache_meta_3_17_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_17_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_470 = (0x11U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_87 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_215 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_343 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__PVT__unnamedblk1__DOT___T_471 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_470));
        vlSelf->__Vdly__cache_meta_0_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_87) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_87) {
            vlSelf->__PVT__cache_meta_0_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_215) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_215) {
            vlSelf->__PVT__cache_meta_1_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_343) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_343) {
            vlSelf->__PVT__cache_meta_2_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_17_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_471) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_17_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_471) {
            vlSelf->__PVT__cache_meta_3_17_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_17_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_16_valid = 0U;
        vlSelf->__PVT__cache_meta_0_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_16_valid = 0U;
        vlSelf->__PVT__cache_meta_1_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_16_valid = 0U;
        vlSelf->__PVT__cache_meta_2_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_16_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_16_valid = 0U;
        vlSelf->__PVT__cache_meta_3_16_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_16_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_466 = (0x10U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_83 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_211 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_339 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__PVT__unnamedblk1__DOT___T_467 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_466));
        vlSelf->__Vdly__cache_meta_0_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_83) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_83) {
            vlSelf->__PVT__cache_meta_0_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_211) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_211) {
            vlSelf->__PVT__cache_meta_1_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_339) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_339) {
            vlSelf->__PVT__cache_meta_2_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_16_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_467) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_16_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_467) {
            vlSelf->__PVT__cache_meta_3_16_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_16_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_15_valid = 0U;
        vlSelf->__PVT__cache_meta_0_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_15_valid = 0U;
        vlSelf->__PVT__cache_meta_1_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_15_valid = 0U;
        vlSelf->__PVT__cache_meta_2_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_15_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_15_valid = 0U;
        vlSelf->__PVT__cache_meta_3_15_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_15_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_462 = (0xfU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_79 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_207 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_335 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__PVT__unnamedblk1__DOT___T_463 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_462));
        vlSelf->__Vdly__cache_meta_0_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_79) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_79) {
            vlSelf->__PVT__cache_meta_0_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_207) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_207) {
            vlSelf->__PVT__cache_meta_1_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_335) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_335) {
            vlSelf->__PVT__cache_meta_2_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_15_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_463) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_15_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_463) {
            vlSelf->__PVT__cache_meta_3_15_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_15_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_14_valid = 0U;
        vlSelf->__PVT__cache_meta_0_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_14_valid = 0U;
        vlSelf->__PVT__cache_meta_1_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_14_valid = 0U;
        vlSelf->__PVT__cache_meta_2_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_14_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_14_valid = 0U;
        vlSelf->__PVT__cache_meta_3_14_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_14_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_458 = (0xeU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_75 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_203 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_331 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__PVT__unnamedblk1__DOT___T_459 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_458));
        vlSelf->__Vdly__cache_meta_0_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_75) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_75) {
            vlSelf->__PVT__cache_meta_0_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_203) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_203) {
            vlSelf->__PVT__cache_meta_1_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_331) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_331) {
            vlSelf->__PVT__cache_meta_2_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_14_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_459) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_14_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_459) {
            vlSelf->__PVT__cache_meta_3_14_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_14_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_13_valid = 0U;
        vlSelf->__PVT__cache_meta_0_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_13_valid = 0U;
        vlSelf->__PVT__cache_meta_1_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_13_valid = 0U;
        vlSelf->__PVT__cache_meta_2_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_13_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_13_valid = 0U;
        vlSelf->__PVT__cache_meta_3_13_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_13_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_454 = (0xdU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_71 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_199 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_327 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__PVT__unnamedblk1__DOT___T_455 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_454));
        vlSelf->__Vdly__cache_meta_0_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_71) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_71) {
            vlSelf->__PVT__cache_meta_0_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_199) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_199) {
            vlSelf->__PVT__cache_meta_1_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_327) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_327) {
            vlSelf->__PVT__cache_meta_2_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_13_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_455) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_13_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_455) {
            vlSelf->__PVT__cache_meta_3_13_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_13_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_12_valid = 0U;
        vlSelf->__PVT__cache_meta_0_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_12_valid = 0U;
        vlSelf->__PVT__cache_meta_1_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_12_valid = 0U;
        vlSelf->__PVT__cache_meta_2_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_12_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_12_valid = 0U;
        vlSelf->__PVT__cache_meta_3_12_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_12_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_450 = (0xcU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_67 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_195 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_323 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__PVT__unnamedblk1__DOT___T_451 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_450));
        vlSelf->__Vdly__cache_meta_0_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_67) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_67) {
            vlSelf->__PVT__cache_meta_0_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_195) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_195) {
            vlSelf->__PVT__cache_meta_1_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_323) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_323) {
            vlSelf->__PVT__cache_meta_2_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_12_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_451) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_12_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_451) {
            vlSelf->__PVT__cache_meta_3_12_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_12_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_11_valid = 0U;
        vlSelf->__PVT__cache_meta_0_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_11_valid = 0U;
        vlSelf->__PVT__cache_meta_1_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_11_valid = 0U;
        vlSelf->__PVT__cache_meta_2_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_11_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_11_valid = 0U;
        vlSelf->__PVT__cache_meta_3_11_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_11_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_446 = (0xbU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_63 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_191 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_319 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__PVT__unnamedblk1__DOT___T_447 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_446));
        vlSelf->__Vdly__cache_meta_0_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_63) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_63) {
            vlSelf->__PVT__cache_meta_0_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_191) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_191) {
            vlSelf->__PVT__cache_meta_1_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_319) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_319) {
            vlSelf->__PVT__cache_meta_2_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_11_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_447) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_11_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_447) {
            vlSelf->__PVT__cache_meta_3_11_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_11_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_10_valid = 0U;
        vlSelf->__PVT__cache_meta_0_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_10_valid = 0U;
        vlSelf->__PVT__cache_meta_1_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_10_valid = 0U;
        vlSelf->__PVT__cache_meta_2_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_10_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_10_valid = 0U;
        vlSelf->__PVT__cache_meta_3_10_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_10_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_442 = (0xaU 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_59 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_187 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_315 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__PVT__unnamedblk1__DOT___T_443 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_442));
        vlSelf->__Vdly__cache_meta_0_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_59) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_0_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_59) {
            vlSelf->__PVT__cache_meta_0_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_187) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_1_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_187) {
            vlSelf->__PVT__cache_meta_1_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_315) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_2_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_315) {
            vlSelf->__PVT__cache_meta_2_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_10_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_443) 
                                                 | (IData)(vlSelf->__PVT__cache_meta_3_10_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_443) {
            vlSelf->__PVT__cache_meta_3_10_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_10_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_9_valid = 0U;
        vlSelf->__PVT__cache_meta_0_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_9_valid = 0U;
        vlSelf->__PVT__cache_meta_1_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_9_valid = 0U;
        vlSelf->__PVT__cache_meta_2_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_9_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_9_valid = 0U;
        vlSelf->__PVT__cache_meta_3_9_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_9_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_438 = (9U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_55 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_183 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_311 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__PVT__unnamedblk1__DOT___T_439 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_438));
        vlSelf->__Vdly__cache_meta_0_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_55) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_55) {
            vlSelf->__PVT__cache_meta_0_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_183) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_183) {
            vlSelf->__PVT__cache_meta_1_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_311) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_311) {
            vlSelf->__PVT__cache_meta_2_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_9_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_439) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_9_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_439) {
            vlSelf->__PVT__cache_meta_3_9_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_9_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_8_valid = 0U;
        vlSelf->__PVT__cache_meta_0_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_8_valid = 0U;
        vlSelf->__PVT__cache_meta_1_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_8_valid = 0U;
        vlSelf->__PVT__cache_meta_2_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_8_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_8_valid = 0U;
        vlSelf->__PVT__cache_meta_3_8_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_8_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_434 = (8U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_51 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_179 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_307 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__PVT__unnamedblk1__DOT___T_435 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_434));
        vlSelf->__Vdly__cache_meta_0_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_51) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_51) {
            vlSelf->__PVT__cache_meta_0_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_179) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_179) {
            vlSelf->__PVT__cache_meta_1_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_307) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_307) {
            vlSelf->__PVT__cache_meta_2_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_8_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_435) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_8_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_435) {
            vlSelf->__PVT__cache_meta_3_8_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_8_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_7_valid = 0U;
        vlSelf->__PVT__cache_meta_0_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_7_valid = 0U;
        vlSelf->__PVT__cache_meta_1_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_7_valid = 0U;
        vlSelf->__PVT__cache_meta_2_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_7_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_7_valid = 0U;
        vlSelf->__PVT__cache_meta_3_7_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_7_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_430 = (7U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_47 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_175 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_303 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__PVT__unnamedblk1__DOT___T_431 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_430));
        vlSelf->__Vdly__cache_meta_0_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_47) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_47) {
            vlSelf->__PVT__cache_meta_0_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_175) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_175) {
            vlSelf->__PVT__cache_meta_1_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_303) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_303) {
            vlSelf->__PVT__cache_meta_2_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_7_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_431) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_7_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_431) {
            vlSelf->__PVT__cache_meta_3_7_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_7_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_6_valid = 0U;
        vlSelf->__PVT__cache_meta_0_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_6_valid = 0U;
        vlSelf->__PVT__cache_meta_1_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_6_valid = 0U;
        vlSelf->__PVT__cache_meta_2_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_6_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_6_valid = 0U;
        vlSelf->__PVT__cache_meta_3_6_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_6_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_426 = (6U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_43 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_171 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_299 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__PVT__unnamedblk1__DOT___T_427 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_426));
        vlSelf->__Vdly__cache_meta_0_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_43) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_43) {
            vlSelf->__PVT__cache_meta_0_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_171) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_171) {
            vlSelf->__PVT__cache_meta_1_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_299) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_299) {
            vlSelf->__PVT__cache_meta_2_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_6_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_427) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_6_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_427) {
            vlSelf->__PVT__cache_meta_3_6_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_6_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_5_valid = 0U;
        vlSelf->__PVT__cache_meta_0_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_5_valid = 0U;
        vlSelf->__PVT__cache_meta_1_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_5_valid = 0U;
        vlSelf->__PVT__cache_meta_2_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_5_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_5_valid = 0U;
        vlSelf->__PVT__cache_meta_3_5_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_5_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_422 = (5U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_39 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_167 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_295 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__PVT__unnamedblk1__DOT___T_423 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_422));
        vlSelf->__Vdly__cache_meta_0_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_39) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_39) {
            vlSelf->__PVT__cache_meta_0_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_167) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_167) {
            vlSelf->__PVT__cache_meta_1_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_295) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_295) {
            vlSelf->__PVT__cache_meta_2_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_5_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_423) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_5_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_423) {
            vlSelf->__PVT__cache_meta_3_5_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_5_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_4_valid = 0U;
        vlSelf->__PVT__cache_meta_0_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_4_valid = 0U;
        vlSelf->__PVT__cache_meta_1_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_4_valid = 0U;
        vlSelf->__PVT__cache_meta_2_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_4_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_4_valid = 0U;
        vlSelf->__PVT__cache_meta_3_4_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_4_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_418 = (4U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_35 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_163 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_291 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__PVT__unnamedblk1__DOT___T_419 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_418));
        vlSelf->__Vdly__cache_meta_0_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_35) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_35) {
            vlSelf->__PVT__cache_meta_0_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_163) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_163) {
            vlSelf->__PVT__cache_meta_1_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_291) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_291) {
            vlSelf->__PVT__cache_meta_2_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_4_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_419) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_4_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_419) {
            vlSelf->__PVT__cache_meta_3_4_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_4_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_3_valid = 0U;
        vlSelf->__PVT__cache_meta_0_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_3_valid = 0U;
        vlSelf->__PVT__cache_meta_1_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_3_valid = 0U;
        vlSelf->__PVT__cache_meta_2_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_3_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_3_valid = 0U;
        vlSelf->__PVT__cache_meta_3_3_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_3_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_414 = (3U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_31 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_159 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_287 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__PVT__unnamedblk1__DOT___T_415 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_414));
        vlSelf->__Vdly__cache_meta_0_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_31) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_31) {
            vlSelf->__PVT__cache_meta_0_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_159) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_159) {
            vlSelf->__PVT__cache_meta_1_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_287) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_287) {
            vlSelf->__PVT__cache_meta_2_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_3_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_415) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_3_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_415) {
            vlSelf->__PVT__cache_meta_3_3_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_3_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_2_valid = 0U;
        vlSelf->__PVT__cache_meta_0_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_2_valid = 0U;
        vlSelf->__PVT__cache_meta_1_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_2_valid = 0U;
        vlSelf->__PVT__cache_meta_2_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_2_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_2_valid = 0U;
        vlSelf->__PVT__cache_meta_3_2_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_2_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_410 = (2U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_27 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_155 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_283 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__PVT__unnamedblk1__DOT___T_411 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_410));
        vlSelf->__Vdly__cache_meta_0_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_27) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_27) {
            vlSelf->__PVT__cache_meta_0_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_155) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_155) {
            vlSelf->__PVT__cache_meta_1_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_283) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_283) {
            vlSelf->__PVT__cache_meta_2_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_2_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_411) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_2_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_411) {
            vlSelf->__PVT__cache_meta_3_2_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_2_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_1_valid = 0U;
        vlSelf->__PVT__cache_meta_0_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_1_valid = 0U;
        vlSelf->__PVT__cache_meta_1_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_1_valid = 0U;
        vlSelf->__PVT__cache_meta_2_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_1_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_1_valid = 0U;
        vlSelf->__PVT__cache_meta_3_1_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_1_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_406 = (1U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_23 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_151 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_279 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__PVT__unnamedblk1__DOT___T_407 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_406));
        vlSelf->__Vdly__cache_meta_0_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_23) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_23) {
            vlSelf->__PVT__cache_meta_0_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_151) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_151) {
            vlSelf->__PVT__cache_meta_1_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_279) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_279) {
            vlSelf->__PVT__cache_meta_2_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_1_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_407) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_1_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_407) {
            vlSelf->__PVT__cache_meta_3_1_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_1_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__cache_meta_0_0_valid = 0U;
        vlSelf->__PVT__cache_meta_0_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_0_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_1_0_valid = 0U;
        vlSelf->__PVT__cache_meta_1_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_1_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_2_0_valid = 0U;
        vlSelf->__PVT__cache_meta_2_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_2_0_tag = 0U;
        vlSelf->__Vdly__cache_meta_3_0_valid = 0U;
        vlSelf->__PVT__cache_meta_3_0_dirty = 0U;
        vlSelf->__PVT__cache_meta_3_0_tag = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T_402 = (0U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_index));
        vlSelf->__PVT__unnamedblk1__DOT___T_19 = (((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                  & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_147 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_275 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__PVT__unnamedblk1__DOT___T_403 = (
                                                   ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way))) 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT___T_402));
        vlSelf->__Vdly__cache_meta_0_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_19) 
                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_19) {
            vlSelf->__PVT__cache_meta_0_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_0_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_1_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_147) 
                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_147) {
            vlSelf->__PVT__cache_meta_1_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_1_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_2_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_275) 
                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_275) {
            vlSelf->__PVT__cache_meta_2_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_2_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
        vlSelf->__Vdly__cache_meta_3_0_valid = ((IData)(vlSelf->__PVT__unnamedblk1__DOT___T_403) 
                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_valid));
        if (vlSelf->__PVT__unnamedblk1__DOT___T_403) {
            vlSelf->__PVT__cache_meta_3_0_dirty = vlSelf->__PVT__stage3__DOT__buf_wr;
            vlSelf->__PVT__cache_meta_3_0_tag = vlSelf->__PVT__stage3__DOT__buf_tag;
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__4(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__4\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__stage3__DOT__buf_wr = 0U;
        vlSelf->__PVT__stage3__DOT__buf_wdata = 0ULL;
        vlSelf->__PVT__stage3__DOT__buf_wstrb = 0U;
        vlSelf->__Vdly__stage3__DOT__buf_mthrough = 0U;
        vlSelf->__PVT__stage3__DOT__buf_tag = 0U;
        vlSelf->__PVT__stage3__DOT__buf_index = 0U;
        vlSelf->__Vdly__stage3__DOT__buf_offset = 0U;
        vlSelf->__PVT__stage3__DOT__buf_hit = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_way = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_valid = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_dirty = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_tag = 0U;
        vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 = 0ULL;
        vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 = 0ULL;
        vlSelf->__Vdly__stage3__DOT__state = 1U;
        vlSelf->__Vdly__stage3__DOT__cnt = 0U;
    } else {
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14 
            = (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                | (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                    | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                   | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))) 
               & (IData)(vlSelf->__PVT__stage3__DOT___io_mem_out_req_valid_T_5));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1) 
               & (IData)(vlSelf->__PVT__stage2__DOT__s2_valid));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come 
            = (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                >> 3U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23 
            = ((4U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                ? ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                    ? 8U : 4U) : 0U);
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25 
            = ((0x10U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                ? ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                    ? 1U : 0x10U) : 0U);
        vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN 
            = (7U & ((((2U & (IData)(vlSelf->__PVT__stage3__DOT__state))
                        ? ((IData)(vlSelf->__PVT__stage3__DOT__burst_last)
                            ? 4U : 2U) : 0U) | (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25)));
        if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__Vdly__stage3__DOT__buf_wr = vlSelf->__PVT__stage2__DOT__buf_wr;
            vlSelf->__PVT__stage3__DOT__buf_wdata = vlSelf->__PVT__stage2__DOT__buf_wdata;
            vlSelf->__PVT__stage3__DOT__buf_wstrb = vlSelf->__PVT__stage2__DOT__buf_wstrb;
            vlSelf->__Vdly__stage3__DOT__buf_mthrough 
                = vlSelf->__PVT__stage2__DOT__buf_mthrough;
            vlSelf->__PVT__stage3__DOT__buf_tag = vlSelf->__PVT__stage2__DOT__buf_tag;
            vlSelf->__PVT__stage3__DOT__buf_index = vlSelf->__PVT__stage2__DOT__buf_index;
            vlSelf->__Vdly__stage3__DOT__buf_offset 
                = vlSelf->__PVT__stage2__DOT__buf_offset;
            vlSelf->__PVT__stage3__DOT__buf_hit = (0U 
                                                   != (IData)(vlSelf->__PVT__stage2__DOT__hit_array));
            vlSelf->__PVT__stage3__DOT__buf_target_way 
                = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                                          >> 2U)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H)))));
            vlSelf->__PVT__stage3__DOT__buf_target_line_valid 
                = (((((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->__PVT__meta_rd_0_valid)) 
                     | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->__PVT__meta_rd_1_valid))) 
                    | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->__PVT__meta_rd_2_valid))) 
                   | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->__PVT__meta_rd_3_valid)));
            vlSelf->__PVT__stage3__DOT__buf_target_line_dirty 
                = (((((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->__PVT__meta_rd_0_dirty)) 
                     | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->__PVT__meta_rd_1_dirty))) 
                    | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->__PVT__meta_rd_2_dirty))) 
                   | (((IData)(vlSelf->__PVT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->__PVT__meta_rd_3_dirty)));
            vlSelf->__PVT__stage3__DOT__buf_target_line_tag 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? vlSelf->__PVT__meta_rd_0_tag
                       : 0U) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                 ? vlSelf->__PVT__meta_rd_1_tag
                                 : 0U)) | ((4U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                            ? vlSelf->__PVT__meta_rd_2_tag
                                            : 0U)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? vlSelf->__PVT__meta_rd_3_tag
                       : 0U));
        }
        if (((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come) 
             & (~ (IData)(vlSelf->__PVT__stage3__DOT__cnt)))) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                = ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata);
        } else if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_0 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam->__PVT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam->__PVT__rdata[0U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[0U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[0U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[0U])))
                       : 0ULL));
        }
        if (((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT__refill_come) 
             & (IData)(vlSelf->__PVT__stage3__DOT__cnt))) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                = ((IData)(vlSelf->__PVT__stage3__DOT__refill_hit)
                    ? vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3
                    : vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata);
        } else if (vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->__PVT__stage3__DOT__buf_target_line_data_1 
                = (((((1U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam->__PVT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam->__PVT__rdata[2U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__CacheDataRam_1->__PVT__rdata[2U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__CacheDataRam_2->__PVT__rdata[2U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->__PVT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->__PVT__CacheDataRam_3->__PVT__rdata[2U])))
                       : 0ULL));
        }
        vlSelf->__Vdly__stage3__DOT__state = ((((1U 
                                                 & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__stage3__DOT__hit)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__stage3__DOT__buf_wr)
                                                   ? 0x20U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__stage3__DOT__buf_mthrough)
                                                    ? 0x10U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__stage3__DOT__wb_en)
                                                     ? 2U
                                                     : 8U))
                                                   : 1U))
                                                 : 0U) 
                                               | ((8U 
                                                   & (IData)(vlSelf->__PVT__stage3__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__stage3__DOT__burst_last)
                                                    ? 0x20U
                                                    : 8U)
                                                   : 0U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                                                    | ((6U 
                                                        & (IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->__PVT__stage3__DOT__unnamedblk1__DOT___GEN) 
                                                             | (IData)(vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6)))))));
        vlSelf->__Vdly__stage3__DOT__cnt = (1U & ((~ 
                                                   ((IData)(vlSelf->__PVT__stage3__DOT__wb_en) 
                                                    & ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                                       | (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                                           | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                                          | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))))) 
                                                  & ((((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                       >> 2U) 
                                                      & ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                                         | (((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                                             | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                                            | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__stage3__DOT__buf_offset) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                                                       ? 
                                                      ((~ (IData)(vlSelf->__PVT__stage3__DOT__cnt)) 
                                                       & ((IData)(vlSelf->__PVT__stage3__DOT__cnt) 
                                                          - (IData)(1U)))
                                                       : (IData)(vlSelf->__PVT__stage3__DOT__cnt)))));
    }
    vlSelf->__PVT__meta_rd_0_dirty = vlSelf->__Vdly__meta_rd_0_dirty;
    vlSelf->__PVT__meta_rd_1_dirty = vlSelf->__Vdly__meta_rd_1_dirty;
    vlSelf->__PVT__meta_rd_2_dirty = vlSelf->__Vdly__meta_rd_2_dirty;
    vlSelf->__PVT__meta_rd_3_dirty = vlSelf->__Vdly__meta_rd_3_dirty;
    vlSelf->__PVT__meta_rd_0_tag = vlSelf->__Vdly__meta_rd_0_tag;
    vlSelf->__PVT__meta_rd_1_tag = vlSelf->__Vdly__meta_rd_1_tag;
    vlSelf->__PVT__meta_rd_2_tag = vlSelf->__Vdly__meta_rd_2_tag;
    vlSelf->__PVT__meta_rd_3_tag = vlSelf->__Vdly__meta_rd_3_tag;
    vlSelf->__PVT__stage3__DOT__buf_mthrough = vlSelf->__Vdly__stage3__DOT__buf_mthrough;
    vlSelf->__PVT__stage3__DOT__buf_wr = vlSelf->__Vdly__stage3__DOT__buf_wr;
    vlSelf->__PVT__stage3__DOT__cnt = vlSelf->__Vdly__stage3__DOT__cnt;
    vlSelf->__PVT__stage3__DOT__buf_offset = vlSelf->__Vdly__stage3__DOT__buf_offset;
    vlSelf->__PVT__stage3__DOT__state = vlSelf->__Vdly__stage3__DOT__state;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_mthrough = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_mthrough = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wstrb = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_wstrb = vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__s2_valid = 0U;
    } else if (vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) {
        vlSelf->__PVT__stage2__DOT__s2_valid = vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_index = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_index = (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 4U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_offset = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_offset = (8U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                              >> 3U)) 
                                                     << 3U));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_tag = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_tag = (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                          >> 9U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_0_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_0_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_0_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_0_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_0_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_0_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_0_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_0_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_0_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_0_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_0_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_0_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_0_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_0_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_0_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_1_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_1_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_1_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_1_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_1_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_1_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_1_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_1_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_1_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_1_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_1_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_1_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_1_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_1_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_1_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_2_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_2_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_2_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_2_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_2_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_2_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_2_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_2_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_2_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_2_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_2_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_2_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_2_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_2_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_2_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 4U)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__meta_rd_3_valid = 0U;
    } else if (vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) {
        vlSelf->__PVT__meta_rd_3_valid = (1U & ((((IData)(vlSelf->__PVT__cache_meta_3_31_valid) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->__PVT__cache_meta_3_30_valid) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->__PVT__cache_meta_3_29_valid) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->__PVT__cache_meta_3_28_valid) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->__PVT__cache_meta_3_27_valid) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->__PVT__cache_meta_3_26_valid) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_25_valid) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->__PVT__cache_meta_3_24_valid) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__PVT__cache_meta_3_23_valid) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->__PVT__cache_meta_3_22_valid) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->__PVT__cache_meta_3_21_valid) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->__PVT__cache_meta_3_20_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_19_valid) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_18_valid) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_17_valid) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_16_valid) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_15_valid) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_14_valid) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_13_valid) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_12_valid) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_11_valid) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_10_valid) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_9_valid) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_8_valid) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_7_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_6_valid) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_5_valid) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_4_valid) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_3_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_2_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__cache_meta_3_1_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__cache_meta_3_0_valid)))))))))))))))))))))))))))))))) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 4U)))));
    }
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
    vlSelf->__PVT__stage3__DOT___s3_ready_go_T_6 = 
        (1U & ((IData)(vlSelf->__PVT__stage3__DOT__state) 
               >> 5U));
    vlSelf->__PVT__stage3__DOT__hit = ((IData)(vlSelf->__PVT__stage3__DOT__buf_hit) 
                                       & (IData)(vlSelf->__PVT__stage3__DOT__state));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wdata = 0ULL;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_wdata = vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__stage2__DOT__buf_wr = 0U;
    } else if (((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->__PVT__stage2__DOT__buf_wr = ((((((
                                                   ((((((((((((0x37U 
                                                               != 
                                                               (0x7fU 
                                                                & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                              & (0x17U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                             & (0x6fU 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                            & (0x67U 
                                                               != 
                                                               (0x7fU 
                                                                & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                           & (0x63U 
                                                              != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                          & (0xe3U 
                                                             != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                         & (0x263U 
                                                            != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                        & (0x2e3U 
                                                           != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                       & (0x363U 
                                                          != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                      & (0x3e3U 
                                                         != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     & (3U 
                                                        != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                    & (0x83U 
                                                       != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                   & (0x103U 
                                                      != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  & (0x203U 
                                                     != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 & (0x283U 
                                                    != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                & (0x303U 
                                                   != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0x183U 
                                                  != (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              & ((((0x23U 
                                                    == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                   | (0xa3U 
                                                      == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x123U 
                                                     == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x1a3U 
                                                    == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))));
    }
    vlSelf->__PVT__cache_meta_0_31_valid = vlSelf->__Vdly__cache_meta_0_31_valid;
    vlSelf->__PVT__cache_meta_0_30_valid = vlSelf->__Vdly__cache_meta_0_30_valid;
    vlSelf->__PVT__cache_meta_0_29_valid = vlSelf->__Vdly__cache_meta_0_29_valid;
    vlSelf->__PVT__cache_meta_0_28_valid = vlSelf->__Vdly__cache_meta_0_28_valid;
    vlSelf->__PVT__cache_meta_0_27_valid = vlSelf->__Vdly__cache_meta_0_27_valid;
    vlSelf->__PVT__cache_meta_0_26_valid = vlSelf->__Vdly__cache_meta_0_26_valid;
    vlSelf->__PVT__cache_meta_0_25_valid = vlSelf->__Vdly__cache_meta_0_25_valid;
    vlSelf->__PVT__cache_meta_0_24_valid = vlSelf->__Vdly__cache_meta_0_24_valid;
    vlSelf->__PVT__cache_meta_0_23_valid = vlSelf->__Vdly__cache_meta_0_23_valid;
    vlSelf->__PVT__cache_meta_0_22_valid = vlSelf->__Vdly__cache_meta_0_22_valid;
    vlSelf->__PVT__cache_meta_0_21_valid = vlSelf->__Vdly__cache_meta_0_21_valid;
    vlSelf->__PVT__cache_meta_0_20_valid = vlSelf->__Vdly__cache_meta_0_20_valid;
    vlSelf->__PVT__cache_meta_0_19_valid = vlSelf->__Vdly__cache_meta_0_19_valid;
    vlSelf->__PVT__cache_meta_0_18_valid = vlSelf->__Vdly__cache_meta_0_18_valid;
    vlSelf->__PVT__cache_meta_0_17_valid = vlSelf->__Vdly__cache_meta_0_17_valid;
    vlSelf->__PVT__cache_meta_0_16_valid = vlSelf->__Vdly__cache_meta_0_16_valid;
    vlSelf->__PVT__cache_meta_0_15_valid = vlSelf->__Vdly__cache_meta_0_15_valid;
    vlSelf->__PVT__cache_meta_0_14_valid = vlSelf->__Vdly__cache_meta_0_14_valid;
    vlSelf->__PVT__cache_meta_0_13_valid = vlSelf->__Vdly__cache_meta_0_13_valid;
    vlSelf->__PVT__cache_meta_0_12_valid = vlSelf->__Vdly__cache_meta_0_12_valid;
    vlSelf->__PVT__cache_meta_0_11_valid = vlSelf->__Vdly__cache_meta_0_11_valid;
    vlSelf->__PVT__cache_meta_0_10_valid = vlSelf->__Vdly__cache_meta_0_10_valid;
    vlSelf->__PVT__cache_meta_0_9_valid = vlSelf->__Vdly__cache_meta_0_9_valid;
    vlSelf->__PVT__cache_meta_0_8_valid = vlSelf->__Vdly__cache_meta_0_8_valid;
    vlSelf->__PVT__cache_meta_0_7_valid = vlSelf->__Vdly__cache_meta_0_7_valid;
    vlSelf->__PVT__cache_meta_0_6_valid = vlSelf->__Vdly__cache_meta_0_6_valid;
    vlSelf->__PVT__cache_meta_0_5_valid = vlSelf->__Vdly__cache_meta_0_5_valid;
    vlSelf->__PVT__cache_meta_0_4_valid = vlSelf->__Vdly__cache_meta_0_4_valid;
    vlSelf->__PVT__cache_meta_0_3_valid = vlSelf->__Vdly__cache_meta_0_3_valid;
    vlSelf->__PVT__cache_meta_0_2_valid = vlSelf->__Vdly__cache_meta_0_2_valid;
    vlSelf->__PVT__cache_meta_0_1_valid = vlSelf->__Vdly__cache_meta_0_1_valid;
    vlSelf->__PVT__cache_meta_0_0_valid = vlSelf->__Vdly__cache_meta_0_0_valid;
    vlSelf->__PVT__cache_meta_1_31_valid = vlSelf->__Vdly__cache_meta_1_31_valid;
    vlSelf->__PVT__cache_meta_1_30_valid = vlSelf->__Vdly__cache_meta_1_30_valid;
    vlSelf->__PVT__cache_meta_1_29_valid = vlSelf->__Vdly__cache_meta_1_29_valid;
    vlSelf->__PVT__cache_meta_1_28_valid = vlSelf->__Vdly__cache_meta_1_28_valid;
    vlSelf->__PVT__cache_meta_1_27_valid = vlSelf->__Vdly__cache_meta_1_27_valid;
    vlSelf->__PVT__cache_meta_1_26_valid = vlSelf->__Vdly__cache_meta_1_26_valid;
    vlSelf->__PVT__cache_meta_1_25_valid = vlSelf->__Vdly__cache_meta_1_25_valid;
    vlSelf->__PVT__cache_meta_1_24_valid = vlSelf->__Vdly__cache_meta_1_24_valid;
    vlSelf->__PVT__cache_meta_1_23_valid = vlSelf->__Vdly__cache_meta_1_23_valid;
    vlSelf->__PVT__cache_meta_1_22_valid = vlSelf->__Vdly__cache_meta_1_22_valid;
    vlSelf->__PVT__cache_meta_1_21_valid = vlSelf->__Vdly__cache_meta_1_21_valid;
    vlSelf->__PVT__cache_meta_1_20_valid = vlSelf->__Vdly__cache_meta_1_20_valid;
    vlSelf->__PVT__cache_meta_1_19_valid = vlSelf->__Vdly__cache_meta_1_19_valid;
    vlSelf->__PVT__cache_meta_1_18_valid = vlSelf->__Vdly__cache_meta_1_18_valid;
    vlSelf->__PVT__cache_meta_1_17_valid = vlSelf->__Vdly__cache_meta_1_17_valid;
    vlSelf->__PVT__cache_meta_1_16_valid = vlSelf->__Vdly__cache_meta_1_16_valid;
    vlSelf->__PVT__cache_meta_1_15_valid = vlSelf->__Vdly__cache_meta_1_15_valid;
    vlSelf->__PVT__cache_meta_1_14_valid = vlSelf->__Vdly__cache_meta_1_14_valid;
    vlSelf->__PVT__cache_meta_1_13_valid = vlSelf->__Vdly__cache_meta_1_13_valid;
    vlSelf->__PVT__cache_meta_1_12_valid = vlSelf->__Vdly__cache_meta_1_12_valid;
    vlSelf->__PVT__cache_meta_1_11_valid = vlSelf->__Vdly__cache_meta_1_11_valid;
    vlSelf->__PVT__cache_meta_1_10_valid = vlSelf->__Vdly__cache_meta_1_10_valid;
    vlSelf->__PVT__cache_meta_1_9_valid = vlSelf->__Vdly__cache_meta_1_9_valid;
    vlSelf->__PVT__cache_meta_1_8_valid = vlSelf->__Vdly__cache_meta_1_8_valid;
    vlSelf->__PVT__cache_meta_1_7_valid = vlSelf->__Vdly__cache_meta_1_7_valid;
    vlSelf->__PVT__cache_meta_1_6_valid = vlSelf->__Vdly__cache_meta_1_6_valid;
    vlSelf->__PVT__cache_meta_1_5_valid = vlSelf->__Vdly__cache_meta_1_5_valid;
    vlSelf->__PVT__cache_meta_1_4_valid = vlSelf->__Vdly__cache_meta_1_4_valid;
    vlSelf->__PVT__cache_meta_1_3_valid = vlSelf->__Vdly__cache_meta_1_3_valid;
    vlSelf->__PVT__cache_meta_1_2_valid = vlSelf->__Vdly__cache_meta_1_2_valid;
    vlSelf->__PVT__cache_meta_1_1_valid = vlSelf->__Vdly__cache_meta_1_1_valid;
    vlSelf->__PVT__cache_meta_1_0_valid = vlSelf->__Vdly__cache_meta_1_0_valid;
    vlSelf->__PVT__cache_meta_2_31_valid = vlSelf->__Vdly__cache_meta_2_31_valid;
    vlSelf->__PVT__cache_meta_2_30_valid = vlSelf->__Vdly__cache_meta_2_30_valid;
    vlSelf->__PVT__cache_meta_2_29_valid = vlSelf->__Vdly__cache_meta_2_29_valid;
    vlSelf->__PVT__cache_meta_2_28_valid = vlSelf->__Vdly__cache_meta_2_28_valid;
    vlSelf->__PVT__cache_meta_2_27_valid = vlSelf->__Vdly__cache_meta_2_27_valid;
    vlSelf->__PVT__cache_meta_2_26_valid = vlSelf->__Vdly__cache_meta_2_26_valid;
    vlSelf->__PVT__cache_meta_2_25_valid = vlSelf->__Vdly__cache_meta_2_25_valid;
    vlSelf->__PVT__cache_meta_2_24_valid = vlSelf->__Vdly__cache_meta_2_24_valid;
    vlSelf->__PVT__cache_meta_2_23_valid = vlSelf->__Vdly__cache_meta_2_23_valid;
    vlSelf->__PVT__cache_meta_2_22_valid = vlSelf->__Vdly__cache_meta_2_22_valid;
    vlSelf->__PVT__cache_meta_2_21_valid = vlSelf->__Vdly__cache_meta_2_21_valid;
    vlSelf->__PVT__cache_meta_2_20_valid = vlSelf->__Vdly__cache_meta_2_20_valid;
    vlSelf->__PVT__cache_meta_2_19_valid = vlSelf->__Vdly__cache_meta_2_19_valid;
    vlSelf->__PVT__cache_meta_2_18_valid = vlSelf->__Vdly__cache_meta_2_18_valid;
    vlSelf->__PVT__cache_meta_2_17_valid = vlSelf->__Vdly__cache_meta_2_17_valid;
    vlSelf->__PVT__cache_meta_2_16_valid = vlSelf->__Vdly__cache_meta_2_16_valid;
    vlSelf->__PVT__cache_meta_2_15_valid = vlSelf->__Vdly__cache_meta_2_15_valid;
    vlSelf->__PVT__cache_meta_2_14_valid = vlSelf->__Vdly__cache_meta_2_14_valid;
    vlSelf->__PVT__cache_meta_2_13_valid = vlSelf->__Vdly__cache_meta_2_13_valid;
    vlSelf->__PVT__cache_meta_2_12_valid = vlSelf->__Vdly__cache_meta_2_12_valid;
    vlSelf->__PVT__cache_meta_2_11_valid = vlSelf->__Vdly__cache_meta_2_11_valid;
    vlSelf->__PVT__cache_meta_2_10_valid = vlSelf->__Vdly__cache_meta_2_10_valid;
    vlSelf->__PVT__cache_meta_2_9_valid = vlSelf->__Vdly__cache_meta_2_9_valid;
    vlSelf->__PVT__cache_meta_2_8_valid = vlSelf->__Vdly__cache_meta_2_8_valid;
    vlSelf->__PVT__cache_meta_2_7_valid = vlSelf->__Vdly__cache_meta_2_7_valid;
    vlSelf->__PVT__cache_meta_2_6_valid = vlSelf->__Vdly__cache_meta_2_6_valid;
    vlSelf->__PVT__cache_meta_2_5_valid = vlSelf->__Vdly__cache_meta_2_5_valid;
    vlSelf->__PVT__cache_meta_2_4_valid = vlSelf->__Vdly__cache_meta_2_4_valid;
    vlSelf->__PVT__cache_meta_2_3_valid = vlSelf->__Vdly__cache_meta_2_3_valid;
    vlSelf->__PVT__cache_meta_2_2_valid = vlSelf->__Vdly__cache_meta_2_2_valid;
    vlSelf->__PVT__cache_meta_2_1_valid = vlSelf->__Vdly__cache_meta_2_1_valid;
    vlSelf->__PVT__cache_meta_2_0_valid = vlSelf->__Vdly__cache_meta_2_0_valid;
    vlSelf->__PVT__cache_meta_3_31_valid = vlSelf->__Vdly__cache_meta_3_31_valid;
    vlSelf->__PVT__cache_meta_3_30_valid = vlSelf->__Vdly__cache_meta_3_30_valid;
    vlSelf->__PVT__cache_meta_3_29_valid = vlSelf->__Vdly__cache_meta_3_29_valid;
    vlSelf->__PVT__cache_meta_3_28_valid = vlSelf->__Vdly__cache_meta_3_28_valid;
    vlSelf->__PVT__cache_meta_3_27_valid = vlSelf->__Vdly__cache_meta_3_27_valid;
    vlSelf->__PVT__cache_meta_3_26_valid = vlSelf->__Vdly__cache_meta_3_26_valid;
    vlSelf->__PVT__cache_meta_3_25_valid = vlSelf->__Vdly__cache_meta_3_25_valid;
    vlSelf->__PVT__cache_meta_3_24_valid = vlSelf->__Vdly__cache_meta_3_24_valid;
    vlSelf->__PVT__cache_meta_3_23_valid = vlSelf->__Vdly__cache_meta_3_23_valid;
    vlSelf->__PVT__cache_meta_3_22_valid = vlSelf->__Vdly__cache_meta_3_22_valid;
    vlSelf->__PVT__cache_meta_3_21_valid = vlSelf->__Vdly__cache_meta_3_21_valid;
    vlSelf->__PVT__cache_meta_3_20_valid = vlSelf->__Vdly__cache_meta_3_20_valid;
    vlSelf->__PVT__cache_meta_3_19_valid = vlSelf->__Vdly__cache_meta_3_19_valid;
    vlSelf->__PVT__cache_meta_3_18_valid = vlSelf->__Vdly__cache_meta_3_18_valid;
    vlSelf->__PVT__cache_meta_3_17_valid = vlSelf->__Vdly__cache_meta_3_17_valid;
    vlSelf->__PVT__cache_meta_3_16_valid = vlSelf->__Vdly__cache_meta_3_16_valid;
    vlSelf->__PVT__cache_meta_3_15_valid = vlSelf->__Vdly__cache_meta_3_15_valid;
    vlSelf->__PVT__cache_meta_3_14_valid = vlSelf->__Vdly__cache_meta_3_14_valid;
    vlSelf->__PVT__cache_meta_3_13_valid = vlSelf->__Vdly__cache_meta_3_13_valid;
    vlSelf->__PVT__cache_meta_3_12_valid = vlSelf->__Vdly__cache_meta_3_12_valid;
    vlSelf->__PVT__cache_meta_3_11_valid = vlSelf->__Vdly__cache_meta_3_11_valid;
    vlSelf->__PVT__cache_meta_3_10_valid = vlSelf->__Vdly__cache_meta_3_10_valid;
    vlSelf->__PVT__cache_meta_3_9_valid = vlSelf->__Vdly__cache_meta_3_9_valid;
    vlSelf->__PVT__cache_meta_3_8_valid = vlSelf->__Vdly__cache_meta_3_8_valid;
    vlSelf->__PVT__cache_meta_3_7_valid = vlSelf->__Vdly__cache_meta_3_7_valid;
    vlSelf->__PVT__cache_meta_3_6_valid = vlSelf->__Vdly__cache_meta_3_6_valid;
    vlSelf->__PVT__cache_meta_3_5_valid = vlSelf->__Vdly__cache_meta_3_5_valid;
    vlSelf->__PVT__cache_meta_3_4_valid = vlSelf->__Vdly__cache_meta_3_4_valid;
    vlSelf->__PVT__cache_meta_3_3_valid = vlSelf->__Vdly__cache_meta_3_3_valid;
    vlSelf->__PVT__cache_meta_3_2_valid = vlSelf->__Vdly__cache_meta_3_2_valid;
    vlSelf->__PVT__cache_meta_3_1_valid = vlSelf->__Vdly__cache_meta_3_1_valid;
    vlSelf->__PVT__cache_meta_3_0_valid = vlSelf->__Vdly__cache_meta_3_0_valid;
    vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2 
        = (vlSelf->__PVT__stage3__DOT__buf_wdata & vlSelf->__PVT__stage3__DOT__cpu_word_mask);
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
    vlSelf->__PVT__stage2__DOT__target_way1H = ((0U 
                                                 != (IData)(vlSelf->__PVT__stage2__DOT__hit_array))
                                                 ? (IData)(vlSelf->__PVT__stage2__DOT__hit_array)
                                                 : (IData)(vlSelf->__PVT__stage2__DOT__replace1H));
}

VL_INLINE_OPT void VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__5(VSimTop_CacheTop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSimTop_CacheTop___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__5\n"); );
    // Body
    vlSelf->__PVT__stage3__DOT___masked_refill_data_0_T_3 
        = ((vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata 
            & (~ vlSelf->__PVT__stage3__DOT__cpu_word_mask)) 
           | vlSelf->__PVT__stage3__DOT___masked_refill_data_1_T_2);
    vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->__PVT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->__PVT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->__PVT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid))) 
                 | ((IData)(vlSelf->__PVT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->__PVT__stage3__DOT__burst_last = ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid) 
                                              & (((IData)(vlSelf->__PVT__stage3__DOT__state) 
                                                  >> 1U) 
                                                 | ((IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                                    | (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
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
    vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->__PVT__stage2__DOT__s2_valid)) 
                 | (IData)(vlSelf->__PVT__stage3__DOT___io_s2_to_s3_ready_T_1)));
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
    vlSelf->__PVT__stage1__DOT___io_cpu_ready_T = ((IData)(vlSelf->__PVT__stage2__DOT___io_s1_to_s2_ready_T_2) 
                                                   & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
    vlSelf->__Vcellinp__CacheDataRam__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_1__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (1U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_2__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (2U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__Vcellinp__CacheDataRam_3__io_WEN = ((IData)(vlSelf->__PVT___stage3_io_wt_en) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__stage3__DOT__buf_target_way)));
    vlSelf->__PVT__data_addr = (0x1fU & ((IData)(vlSelf->__PVT___stage3_io_wt_en)
                                          ? (IData)(vlSelf->__PVT__stage3__DOT__buf_index)
                                          : (IData)(
                                                    (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                     >> 4U))));
    vlSelf->__PVT___T_12 = ((IData)(vlSelf->__PVT__stage1__DOT___io_cpu_ready_T) 
                            | (IData)(vlSelf->__PVT___stage3_io_wt_en));
}

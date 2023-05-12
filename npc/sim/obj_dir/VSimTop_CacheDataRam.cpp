// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop_CacheDataRam.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__1(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__ram_0[0U] = 0U;
        vlSelf->__PVT__ram_0[1U] = 0U;
        vlSelf->__PVT__ram_0[2U] = 0U;
        vlSelf->__PVT__ram_0[3U] = 0U;
        vlSelf->__PVT__ram_1[0U] = 0U;
        vlSelf->__PVT__ram_1[1U] = 0U;
        vlSelf->__PVT__ram_1[2U] = 0U;
        vlSelf->__PVT__ram_1[3U] = 0U;
        vlSelf->__PVT__ram_2[0U] = 0U;
        vlSelf->__PVT__ram_2[1U] = 0U;
        vlSelf->__PVT__ram_2[2U] = 0U;
        vlSelf->__PVT__ram_2[3U] = 0U;
        vlSelf->__PVT__ram_3[0U] = 0U;
        vlSelf->__PVT__ram_3[1U] = 0U;
        vlSelf->__PVT__ram_3[2U] = 0U;
        vlSelf->__PVT__ram_3[3U] = 0U;
        vlSelf->__PVT__ram_4[0U] = 0U;
        vlSelf->__PVT__ram_4[1U] = 0U;
        vlSelf->__PVT__ram_4[2U] = 0U;
        vlSelf->__PVT__ram_4[3U] = 0U;
        vlSelf->__PVT__ram_5[0U] = 0U;
        vlSelf->__PVT__ram_5[1U] = 0U;
        vlSelf->__PVT__ram_5[2U] = 0U;
        vlSelf->__PVT__ram_5[3U] = 0U;
        vlSelf->__PVT__ram_6[0U] = 0U;
        vlSelf->__PVT__ram_6[1U] = 0U;
        vlSelf->__PVT__ram_6[2U] = 0U;
        vlSelf->__PVT__ram_6[3U] = 0U;
        vlSelf->__PVT__ram_7[0U] = 0U;
        vlSelf->__PVT__ram_7[1U] = 0U;
        vlSelf->__PVT__ram_7[2U] = 0U;
        vlSelf->__PVT__ram_7[3U] = 0U;
        vlSelf->__PVT__ram_8[0U] = 0U;
        vlSelf->__PVT__ram_8[1U] = 0U;
        vlSelf->__PVT__ram_8[2U] = 0U;
        vlSelf->__PVT__ram_8[3U] = 0U;
        vlSelf->__PVT__ram_9[0U] = 0U;
        vlSelf->__PVT__ram_9[1U] = 0U;
        vlSelf->__PVT__ram_9[2U] = 0U;
        vlSelf->__PVT__ram_9[3U] = 0U;
        vlSelf->__PVT__ram_10[0U] = 0U;
        vlSelf->__PVT__ram_10[1U] = 0U;
        vlSelf->__PVT__ram_10[2U] = 0U;
        vlSelf->__PVT__ram_10[3U] = 0U;
        vlSelf->__PVT__ram_11[0U] = 0U;
        vlSelf->__PVT__ram_11[1U] = 0U;
        vlSelf->__PVT__ram_11[2U] = 0U;
        vlSelf->__PVT__ram_11[3U] = 0U;
        vlSelf->__PVT__ram_12[0U] = 0U;
        vlSelf->__PVT__ram_12[1U] = 0U;
        vlSelf->__PVT__ram_12[2U] = 0U;
        vlSelf->__PVT__ram_12[3U] = 0U;
        vlSelf->__PVT__ram_13[0U] = 0U;
        vlSelf->__PVT__ram_13[1U] = 0U;
        vlSelf->__PVT__ram_13[2U] = 0U;
        vlSelf->__PVT__ram_13[3U] = 0U;
        vlSelf->__PVT__ram_14[0U] = 0U;
        vlSelf->__PVT__ram_14[1U] = 0U;
        vlSelf->__PVT__ram_14[2U] = 0U;
        vlSelf->__PVT__ram_14[3U] = 0U;
        vlSelf->__PVT__ram_15[0U] = 0U;
        vlSelf->__PVT__ram_15[1U] = 0U;
        vlSelf->__PVT__ram_15[2U] = 0U;
        vlSelf->__PVT__ram_15[3U] = 0U;
        vlSelf->__PVT__ram_16[0U] = 0U;
        vlSelf->__PVT__ram_16[1U] = 0U;
        vlSelf->__PVT__ram_16[2U] = 0U;
        vlSelf->__PVT__ram_16[3U] = 0U;
        vlSelf->__PVT__ram_17[0U] = 0U;
        vlSelf->__PVT__ram_17[1U] = 0U;
        vlSelf->__PVT__ram_17[2U] = 0U;
        vlSelf->__PVT__ram_17[3U] = 0U;
        vlSelf->__PVT__ram_18[0U] = 0U;
        vlSelf->__PVT__ram_18[1U] = 0U;
        vlSelf->__PVT__ram_18[2U] = 0U;
        vlSelf->__PVT__ram_18[3U] = 0U;
        vlSelf->__PVT__ram_19[0U] = 0U;
        vlSelf->__PVT__ram_19[1U] = 0U;
        vlSelf->__PVT__ram_19[2U] = 0U;
        vlSelf->__PVT__ram_19[3U] = 0U;
        vlSelf->__PVT__ram_20[0U] = 0U;
        vlSelf->__PVT__ram_20[1U] = 0U;
        vlSelf->__PVT__ram_20[2U] = 0U;
        vlSelf->__PVT__ram_20[3U] = 0U;
        vlSelf->__PVT__ram_21[0U] = 0U;
        vlSelf->__PVT__ram_21[1U] = 0U;
        vlSelf->__PVT__ram_21[2U] = 0U;
        vlSelf->__PVT__ram_21[3U] = 0U;
        vlSelf->__PVT__ram_22[0U] = 0U;
        vlSelf->__PVT__ram_22[1U] = 0U;
        vlSelf->__PVT__ram_22[2U] = 0U;
        vlSelf->__PVT__ram_22[3U] = 0U;
        vlSelf->__PVT__ram_23[0U] = 0U;
        vlSelf->__PVT__ram_23[1U] = 0U;
        vlSelf->__PVT__ram_23[2U] = 0U;
        vlSelf->__PVT__ram_23[3U] = 0U;
        vlSelf->__PVT__ram_24[0U] = 0U;
        vlSelf->__PVT__ram_24[1U] = 0U;
        vlSelf->__PVT__ram_24[2U] = 0U;
        vlSelf->__PVT__ram_24[3U] = 0U;
        vlSelf->__PVT__ram_25[0U] = 0U;
        vlSelf->__PVT__ram_25[1U] = 0U;
        vlSelf->__PVT__ram_25[2U] = 0U;
        vlSelf->__PVT__ram_25[3U] = 0U;
        vlSelf->__PVT__ram_26[0U] = 0U;
        vlSelf->__PVT__ram_26[1U] = 0U;
        vlSelf->__PVT__ram_26[2U] = 0U;
        vlSelf->__PVT__ram_26[3U] = 0U;
        vlSelf->__PVT__ram_27[0U] = 0U;
        vlSelf->__PVT__ram_27[1U] = 0U;
        vlSelf->__PVT__ram_27[2U] = 0U;
        vlSelf->__PVT__ram_27[3U] = 0U;
        vlSelf->__PVT__ram_28[0U] = 0U;
        vlSelf->__PVT__ram_28[1U] = 0U;
        vlSelf->__PVT__ram_28[2U] = 0U;
        vlSelf->__PVT__ram_28[3U] = 0U;
        vlSelf->__PVT__ram_29[0U] = 0U;
        vlSelf->__PVT__ram_29[1U] = 0U;
        vlSelf->__PVT__ram_29[2U] = 0U;
        vlSelf->__PVT__ram_29[3U] = 0U;
        vlSelf->__PVT__ram_30[0U] = 0U;
        vlSelf->__PVT__ram_30[1U] = 0U;
        vlSelf->__PVT__ram_30[2U] = 0U;
        vlSelf->__PVT__ram_30[3U] = 0U;
        vlSelf->__PVT__ram_31[0U] = 0U;
        vlSelf->__PVT__ram_31[1U] = 0U;
        vlSelf->__PVT__ram_31[2U] = 0U;
        vlSelf->__PVT__ram_31[3U] = 0U;
        vlSelf->__PVT__ram_32[0U] = 0U;
        vlSelf->__PVT__ram_32[1U] = 0U;
        vlSelf->__PVT__ram_32[2U] = 0U;
        vlSelf->__PVT__ram_32[3U] = 0U;
        vlSelf->__PVT__ram_33[0U] = 0U;
        vlSelf->__PVT__ram_33[1U] = 0U;
        vlSelf->__PVT__ram_33[2U] = 0U;
        vlSelf->__PVT__ram_33[3U] = 0U;
        vlSelf->__PVT__ram_34[0U] = 0U;
        vlSelf->__PVT__ram_34[1U] = 0U;
        vlSelf->__PVT__ram_34[2U] = 0U;
        vlSelf->__PVT__ram_34[3U] = 0U;
        vlSelf->__PVT__ram_35[0U] = 0U;
        vlSelf->__PVT__ram_35[1U] = 0U;
        vlSelf->__PVT__ram_35[2U] = 0U;
        vlSelf->__PVT__ram_35[3U] = 0U;
        vlSelf->__PVT__ram_36[0U] = 0U;
        vlSelf->__PVT__ram_36[1U] = 0U;
        vlSelf->__PVT__ram_36[2U] = 0U;
        vlSelf->__PVT__ram_36[3U] = 0U;
        vlSelf->__PVT__ram_37[0U] = 0U;
        vlSelf->__PVT__ram_37[1U] = 0U;
        vlSelf->__PVT__ram_37[2U] = 0U;
        vlSelf->__PVT__ram_37[3U] = 0U;
        vlSelf->__PVT__ram_38[0U] = 0U;
        vlSelf->__PVT__ram_38[1U] = 0U;
        vlSelf->__PVT__ram_38[2U] = 0U;
        vlSelf->__PVT__ram_38[3U] = 0U;
        vlSelf->__PVT__ram_39[0U] = 0U;
        vlSelf->__PVT__ram_39[1U] = 0U;
        vlSelf->__PVT__ram_39[2U] = 0U;
        vlSelf->__PVT__ram_39[3U] = 0U;
        vlSelf->__PVT__ram_40[0U] = 0U;
        vlSelf->__PVT__ram_40[1U] = 0U;
        vlSelf->__PVT__ram_40[2U] = 0U;
        vlSelf->__PVT__ram_40[3U] = 0U;
        vlSelf->__PVT__ram_41[0U] = 0U;
        vlSelf->__PVT__ram_41[1U] = 0U;
        vlSelf->__PVT__ram_41[2U] = 0U;
        vlSelf->__PVT__ram_41[3U] = 0U;
        vlSelf->__PVT__ram_42[0U] = 0U;
        vlSelf->__PVT__ram_42[1U] = 0U;
        vlSelf->__PVT__ram_42[2U] = 0U;
        vlSelf->__PVT__ram_42[3U] = 0U;
        vlSelf->__PVT__ram_43[0U] = 0U;
        vlSelf->__PVT__ram_43[1U] = 0U;
        vlSelf->__PVT__ram_43[2U] = 0U;
        vlSelf->__PVT__ram_43[3U] = 0U;
        vlSelf->__PVT__ram_44[0U] = 0U;
        vlSelf->__PVT__ram_44[1U] = 0U;
        vlSelf->__PVT__ram_44[2U] = 0U;
        vlSelf->__PVT__ram_44[3U] = 0U;
        vlSelf->__PVT__ram_45[0U] = 0U;
        vlSelf->__PVT__ram_45[1U] = 0U;
        vlSelf->__PVT__ram_45[2U] = 0U;
        vlSelf->__PVT__ram_45[3U] = 0U;
        vlSelf->__PVT__ram_46[0U] = 0U;
        vlSelf->__PVT__ram_46[1U] = 0U;
        vlSelf->__PVT__ram_46[2U] = 0U;
        vlSelf->__PVT__ram_46[3U] = 0U;
        vlSelf->__PVT__ram_47[0U] = 0U;
        vlSelf->__PVT__ram_47[1U] = 0U;
        vlSelf->__PVT__ram_47[2U] = 0U;
        vlSelf->__PVT__ram_47[3U] = 0U;
        vlSelf->__PVT__ram_48[0U] = 0U;
        vlSelf->__PVT__ram_48[1U] = 0U;
        vlSelf->__PVT__ram_48[2U] = 0U;
        vlSelf->__PVT__ram_48[3U] = 0U;
        vlSelf->__PVT__ram_49[0U] = 0U;
        vlSelf->__PVT__ram_49[1U] = 0U;
        vlSelf->__PVT__ram_49[2U] = 0U;
        vlSelf->__PVT__ram_49[3U] = 0U;
        vlSelf->__PVT__ram_50[0U] = 0U;
        vlSelf->__PVT__ram_50[1U] = 0U;
        vlSelf->__PVT__ram_50[2U] = 0U;
        vlSelf->__PVT__ram_50[3U] = 0U;
        vlSelf->__PVT__ram_51[0U] = 0U;
        vlSelf->__PVT__ram_51[1U] = 0U;
        vlSelf->__PVT__ram_51[2U] = 0U;
        vlSelf->__PVT__ram_51[3U] = 0U;
        vlSelf->__PVT__ram_52[0U] = 0U;
        vlSelf->__PVT__ram_52[1U] = 0U;
        vlSelf->__PVT__ram_52[2U] = 0U;
        vlSelf->__PVT__ram_52[3U] = 0U;
        vlSelf->__PVT__ram_53[0U] = 0U;
        vlSelf->__PVT__ram_53[1U] = 0U;
        vlSelf->__PVT__ram_53[2U] = 0U;
        vlSelf->__PVT__ram_53[3U] = 0U;
        vlSelf->__PVT__ram_54[0U] = 0U;
        vlSelf->__PVT__ram_54[1U] = 0U;
        vlSelf->__PVT__ram_54[2U] = 0U;
        vlSelf->__PVT__ram_54[3U] = 0U;
        vlSelf->__PVT__ram_55[0U] = 0U;
        vlSelf->__PVT__ram_55[1U] = 0U;
        vlSelf->__PVT__ram_55[2U] = 0U;
        vlSelf->__PVT__ram_55[3U] = 0U;
        vlSelf->__PVT__ram_56[0U] = 0U;
        vlSelf->__PVT__ram_56[1U] = 0U;
        vlSelf->__PVT__ram_56[2U] = 0U;
        vlSelf->__PVT__ram_56[3U] = 0U;
        vlSelf->__PVT__ram_57[0U] = 0U;
        vlSelf->__PVT__ram_57[1U] = 0U;
        vlSelf->__PVT__ram_57[2U] = 0U;
        vlSelf->__PVT__ram_57[3U] = 0U;
        vlSelf->__PVT__ram_58[0U] = 0U;
        vlSelf->__PVT__ram_58[1U] = 0U;
        vlSelf->__PVT__ram_58[2U] = 0U;
        vlSelf->__PVT__ram_58[3U] = 0U;
        vlSelf->__PVT__ram_59[0U] = 0U;
        vlSelf->__PVT__ram_59[1U] = 0U;
        vlSelf->__PVT__ram_59[2U] = 0U;
        vlSelf->__PVT__ram_59[3U] = 0U;
        vlSelf->__PVT__ram_60[0U] = 0U;
        vlSelf->__PVT__ram_60[1U] = 0U;
        vlSelf->__PVT__ram_60[2U] = 0U;
        vlSelf->__PVT__ram_60[3U] = 0U;
        vlSelf->__PVT__ram_61[0U] = 0U;
        vlSelf->__PVT__ram_61[1U] = 0U;
        vlSelf->__PVT__ram_61[2U] = 0U;
        vlSelf->__PVT__ram_61[3U] = 0U;
        vlSelf->__PVT__ram_62[0U] = 0U;
        vlSelf->__PVT__ram_62[1U] = 0U;
        vlSelf->__PVT__ram_62[2U] = 0U;
        vlSelf->__PVT__ram_62[3U] = 0U;
        vlSelf->__PVT__ram_63[0U] = 0U;
        vlSelf->__PVT__ram_63[1U] = 0U;
        vlSelf->__PVT__ram_63[2U] = 0U;
        vlSelf->__PVT__ram_63[3U] = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T = (1U & 
                                               ((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__17(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__17\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
         & (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__21(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam__21\n"); );
    // Variables
    VlWide<64>/*2047:0*/ __Vtemp15;
    VlWide<68>/*2175:0*/ __Vtemp16;
    VlWide<72>/*2303:0*/ __Vtemp17;
    VlWide<76>/*2431:0*/ __Vtemp18;
    VlWide<80>/*2559:0*/ __Vtemp19;
    VlWide<84>/*2687:0*/ __Vtemp20;
    VlWide<88>/*2815:0*/ __Vtemp21;
    VlWide<92>/*2943:0*/ __Vtemp22;
    VlWide<96>/*3071:0*/ __Vtemp23;
    VlWide<100>/*3199:0*/ __Vtemp24;
    VlWide<104>/*3327:0*/ __Vtemp25;
    VlWide<108>/*3455:0*/ __Vtemp26;
    VlWide<112>/*3583:0*/ __Vtemp27;
    VlWide<116>/*3711:0*/ __Vtemp28;
    VlWide<120>/*3839:0*/ __Vtemp29;
    VlWide<124>/*3967:0*/ __Vtemp30;
    VlWide<128>/*4095:0*/ __Vtemp31;
    VlWide<132>/*4223:0*/ __Vtemp32;
    VlWide<136>/*4351:0*/ __Vtemp33;
    VlWide<140>/*4479:0*/ __Vtemp34;
    VlWide<144>/*4607:0*/ __Vtemp35;
    VlWide<148>/*4735:0*/ __Vtemp36;
    VlWide<152>/*4863:0*/ __Vtemp37;
    VlWide<156>/*4991:0*/ __Vtemp38;
    VlWide<160>/*5119:0*/ __Vtemp39;
    VlWide<164>/*5247:0*/ __Vtemp40;
    VlWide<168>/*5375:0*/ __Vtemp41;
    VlWide<172>/*5503:0*/ __Vtemp42;
    VlWide<176>/*5631:0*/ __Vtemp43;
    VlWide<180>/*5759:0*/ __Vtemp44;
    VlWide<184>/*5887:0*/ __Vtemp45;
    VlWide<188>/*6015:0*/ __Vtemp46;
    VlWide<192>/*6143:0*/ __Vtemp47;
    VlWide<196>/*6271:0*/ __Vtemp48;
    VlWide<200>/*6399:0*/ __Vtemp49;
    VlWide<204>/*6527:0*/ __Vtemp50;
    VlWide<208>/*6655:0*/ __Vtemp51;
    VlWide<212>/*6783:0*/ __Vtemp52;
    VlWide<216>/*6911:0*/ __Vtemp53;
    VlWide<220>/*7039:0*/ __Vtemp54;
    VlWide<224>/*7167:0*/ __Vtemp55;
    VlWide<228>/*7295:0*/ __Vtemp56;
    VlWide<232>/*7423:0*/ __Vtemp57;
    VlWide<236>/*7551:0*/ __Vtemp58;
    VlWide<240>/*7679:0*/ __Vtemp59;
    VlWide<244>/*7807:0*/ __Vtemp60;
    VlWide<248>/*7935:0*/ __Vtemp61;
    VlWide<252>/*8063:0*/ __Vtemp62;
    VlWide<256>/*8191:0*/ __Vtemp63;
    // Body
    __Vtemp15[0U] = vlSelf->__PVT__ram_48[0U];
    __Vtemp15[1U] = vlSelf->__PVT__ram_48[1U];
    __Vtemp15[2U] = vlSelf->__PVT__ram_48[2U];
    __Vtemp15[3U] = vlSelf->__PVT__ram_48[3U];
    __Vtemp15[4U] = vlSelf->__PVT__ram_49[0U];
    __Vtemp15[5U] = vlSelf->__PVT__ram_49[1U];
    __Vtemp15[6U] = vlSelf->__PVT__ram_49[2U];
    __Vtemp15[7U] = vlSelf->__PVT__ram_49[3U];
    __Vtemp15[8U] = vlSelf->__PVT__ram_50[0U];
    __Vtemp15[9U] = vlSelf->__PVT__ram_50[1U];
    __Vtemp15[0xaU] = vlSelf->__PVT__ram_50[2U];
    __Vtemp15[0xbU] = vlSelf->__PVT__ram_50[3U];
    __Vtemp15[0xcU] = vlSelf->__PVT__ram_51[0U];
    __Vtemp15[0xdU] = vlSelf->__PVT__ram_51[1U];
    __Vtemp15[0xeU] = vlSelf->__PVT__ram_51[2U];
    __Vtemp15[0xfU] = vlSelf->__PVT__ram_51[3U];
    __Vtemp15[0x10U] = vlSelf->__PVT__ram_52[0U];
    __Vtemp15[0x11U] = vlSelf->__PVT__ram_52[1U];
    __Vtemp15[0x12U] = vlSelf->__PVT__ram_52[2U];
    __Vtemp15[0x13U] = vlSelf->__PVT__ram_52[3U];
    __Vtemp15[0x14U] = vlSelf->__PVT__ram_53[0U];
    __Vtemp15[0x15U] = vlSelf->__PVT__ram_53[1U];
    __Vtemp15[0x16U] = vlSelf->__PVT__ram_53[2U];
    __Vtemp15[0x17U] = vlSelf->__PVT__ram_53[3U];
    __Vtemp15[0x18U] = vlSelf->__PVT__ram_54[0U];
    __Vtemp15[0x19U] = vlSelf->__PVT__ram_54[1U];
    __Vtemp15[0x1aU] = vlSelf->__PVT__ram_54[2U];
    __Vtemp15[0x1bU] = vlSelf->__PVT__ram_54[3U];
    __Vtemp15[0x1cU] = vlSelf->__PVT__ram_55[0U];
    __Vtemp15[0x1dU] = vlSelf->__PVT__ram_55[1U];
    __Vtemp15[0x1eU] = vlSelf->__PVT__ram_55[2U];
    __Vtemp15[0x1fU] = vlSelf->__PVT__ram_55[3U];
    __Vtemp15[0x20U] = vlSelf->__PVT__ram_56[0U];
    __Vtemp15[0x21U] = vlSelf->__PVT__ram_56[1U];
    __Vtemp15[0x22U] = vlSelf->__PVT__ram_56[2U];
    __Vtemp15[0x23U] = vlSelf->__PVT__ram_56[3U];
    __Vtemp15[0x24U] = vlSelf->__PVT__ram_57[0U];
    __Vtemp15[0x25U] = vlSelf->__PVT__ram_57[1U];
    __Vtemp15[0x26U] = vlSelf->__PVT__ram_57[2U];
    __Vtemp15[0x27U] = vlSelf->__PVT__ram_57[3U];
    __Vtemp15[0x28U] = vlSelf->__PVT__ram_58[0U];
    __Vtemp15[0x29U] = vlSelf->__PVT__ram_58[1U];
    __Vtemp15[0x2aU] = vlSelf->__PVT__ram_58[2U];
    __Vtemp15[0x2bU] = vlSelf->__PVT__ram_58[3U];
    __Vtemp15[0x2cU] = vlSelf->__PVT__ram_59[0U];
    __Vtemp15[0x2dU] = vlSelf->__PVT__ram_59[1U];
    __Vtemp15[0x2eU] = vlSelf->__PVT__ram_59[2U];
    __Vtemp15[0x2fU] = vlSelf->__PVT__ram_59[3U];
    __Vtemp15[0x30U] = vlSelf->__PVT__ram_60[0U];
    __Vtemp15[0x31U] = vlSelf->__PVT__ram_60[1U];
    __Vtemp15[0x32U] = vlSelf->__PVT__ram_60[2U];
    __Vtemp15[0x33U] = vlSelf->__PVT__ram_60[3U];
    __Vtemp15[0x34U] = vlSelf->__PVT__ram_61[0U];
    __Vtemp15[0x35U] = vlSelf->__PVT__ram_61[1U];
    __Vtemp15[0x36U] = vlSelf->__PVT__ram_61[2U];
    __Vtemp15[0x37U] = vlSelf->__PVT__ram_61[3U];
    __Vtemp15[0x38U] = vlSelf->__PVT__ram_62[0U];
    __Vtemp15[0x39U] = vlSelf->__PVT__ram_62[1U];
    __Vtemp15[0x3aU] = vlSelf->__PVT__ram_62[2U];
    __Vtemp15[0x3bU] = vlSelf->__PVT__ram_62[3U];
    __Vtemp15[0x3cU] = vlSelf->__PVT__ram_63[0U];
    __Vtemp15[0x3dU] = vlSelf->__PVT__ram_63[1U];
    __Vtemp15[0x3eU] = vlSelf->__PVT__ram_63[2U];
    __Vtemp15[0x3fU] = vlSelf->__PVT__ram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp16, __Vtemp15, vlSelf->__PVT__ram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp17, __Vtemp16, vlSelf->__PVT__ram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp18, __Vtemp17, vlSelf->__PVT__ram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp19, __Vtemp18, vlSelf->__PVT__ram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp20, __Vtemp19, vlSelf->__PVT__ram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp21, __Vtemp20, vlSelf->__PVT__ram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp22, __Vtemp21, vlSelf->__PVT__ram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp23, __Vtemp22, vlSelf->__PVT__ram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp24, __Vtemp23, vlSelf->__PVT__ram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp25, __Vtemp24, vlSelf->__PVT__ram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp26, __Vtemp25, vlSelf->__PVT__ram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp27, __Vtemp26, vlSelf->__PVT__ram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp28, __Vtemp27, vlSelf->__PVT__ram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp29, __Vtemp28, vlSelf->__PVT__ram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp30, __Vtemp29, vlSelf->__PVT__ram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp31, __Vtemp30, vlSelf->__PVT__ram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp32, __Vtemp31, vlSelf->__PVT__ram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp33, __Vtemp32, vlSelf->__PVT__ram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp34, __Vtemp33, vlSelf->__PVT__ram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp35, __Vtemp34, vlSelf->__PVT__ram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp36, __Vtemp35, vlSelf->__PVT__ram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp37, __Vtemp36, vlSelf->__PVT__ram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp38, __Vtemp37, vlSelf->__PVT__ram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp39, __Vtemp38, vlSelf->__PVT__ram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp40, __Vtemp39, vlSelf->__PVT__ram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp41, __Vtemp40, vlSelf->__PVT__ram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp42, __Vtemp41, vlSelf->__PVT__ram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp43, __Vtemp42, vlSelf->__PVT__ram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp44, __Vtemp43, vlSelf->__PVT__ram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp45, __Vtemp44, vlSelf->__PVT__ram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp46, __Vtemp45, vlSelf->__PVT__ram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp47, __Vtemp46, vlSelf->__PVT__ram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp48, __Vtemp47, vlSelf->__PVT__ram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp49, __Vtemp48, vlSelf->__PVT__ram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp50, __Vtemp49, vlSelf->__PVT__ram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp51, __Vtemp50, vlSelf->__PVT__ram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp52, __Vtemp51, vlSelf->__PVT__ram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp53, __Vtemp52, vlSelf->__PVT__ram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp54, __Vtemp53, vlSelf->__PVT__ram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp55, __Vtemp54, vlSelf->__PVT__ram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp56, __Vtemp55, vlSelf->__PVT__ram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp57, __Vtemp56, vlSelf->__PVT__ram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp58, __Vtemp57, vlSelf->__PVT__ram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp59, __Vtemp58, vlSelf->__PVT__ram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp60, __Vtemp59, vlSelf->__PVT__ram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp61, __Vtemp60, vlSelf->__PVT__ram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp62, __Vtemp61, vlSelf->__PVT__ram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp63, __Vtemp62, vlSelf->__PVT__ram_0);
    vlSelf->__PVT___GEN_1[0U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp63[
                                           ((IData)(1U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp63[(0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                  << 2U))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[1U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp63[
                                           ((IData)(2U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp63[((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[2U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp63[
                                           ((IData)(3U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp63[((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[3U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp63[
                                           ((IData)(4U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp63[((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                     << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr) 
                                                 << 7U))));
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1__2(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1__2\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__ram_0[0U] = 0U;
        vlSelf->__PVT__ram_0[1U] = 0U;
        vlSelf->__PVT__ram_0[2U] = 0U;
        vlSelf->__PVT__ram_0[3U] = 0U;
        vlSelf->__PVT__ram_1[0U] = 0U;
        vlSelf->__PVT__ram_1[1U] = 0U;
        vlSelf->__PVT__ram_1[2U] = 0U;
        vlSelf->__PVT__ram_1[3U] = 0U;
        vlSelf->__PVT__ram_2[0U] = 0U;
        vlSelf->__PVT__ram_2[1U] = 0U;
        vlSelf->__PVT__ram_2[2U] = 0U;
        vlSelf->__PVT__ram_2[3U] = 0U;
        vlSelf->__PVT__ram_3[0U] = 0U;
        vlSelf->__PVT__ram_3[1U] = 0U;
        vlSelf->__PVT__ram_3[2U] = 0U;
        vlSelf->__PVT__ram_3[3U] = 0U;
        vlSelf->__PVT__ram_4[0U] = 0U;
        vlSelf->__PVT__ram_4[1U] = 0U;
        vlSelf->__PVT__ram_4[2U] = 0U;
        vlSelf->__PVT__ram_4[3U] = 0U;
        vlSelf->__PVT__ram_5[0U] = 0U;
        vlSelf->__PVT__ram_5[1U] = 0U;
        vlSelf->__PVT__ram_5[2U] = 0U;
        vlSelf->__PVT__ram_5[3U] = 0U;
        vlSelf->__PVT__ram_6[0U] = 0U;
        vlSelf->__PVT__ram_6[1U] = 0U;
        vlSelf->__PVT__ram_6[2U] = 0U;
        vlSelf->__PVT__ram_6[3U] = 0U;
        vlSelf->__PVT__ram_7[0U] = 0U;
        vlSelf->__PVT__ram_7[1U] = 0U;
        vlSelf->__PVT__ram_7[2U] = 0U;
        vlSelf->__PVT__ram_7[3U] = 0U;
        vlSelf->__PVT__ram_8[0U] = 0U;
        vlSelf->__PVT__ram_8[1U] = 0U;
        vlSelf->__PVT__ram_8[2U] = 0U;
        vlSelf->__PVT__ram_8[3U] = 0U;
        vlSelf->__PVT__ram_9[0U] = 0U;
        vlSelf->__PVT__ram_9[1U] = 0U;
        vlSelf->__PVT__ram_9[2U] = 0U;
        vlSelf->__PVT__ram_9[3U] = 0U;
        vlSelf->__PVT__ram_10[0U] = 0U;
        vlSelf->__PVT__ram_10[1U] = 0U;
        vlSelf->__PVT__ram_10[2U] = 0U;
        vlSelf->__PVT__ram_10[3U] = 0U;
        vlSelf->__PVT__ram_11[0U] = 0U;
        vlSelf->__PVT__ram_11[1U] = 0U;
        vlSelf->__PVT__ram_11[2U] = 0U;
        vlSelf->__PVT__ram_11[3U] = 0U;
        vlSelf->__PVT__ram_12[0U] = 0U;
        vlSelf->__PVT__ram_12[1U] = 0U;
        vlSelf->__PVT__ram_12[2U] = 0U;
        vlSelf->__PVT__ram_12[3U] = 0U;
        vlSelf->__PVT__ram_13[0U] = 0U;
        vlSelf->__PVT__ram_13[1U] = 0U;
        vlSelf->__PVT__ram_13[2U] = 0U;
        vlSelf->__PVT__ram_13[3U] = 0U;
        vlSelf->__PVT__ram_14[0U] = 0U;
        vlSelf->__PVT__ram_14[1U] = 0U;
        vlSelf->__PVT__ram_14[2U] = 0U;
        vlSelf->__PVT__ram_14[3U] = 0U;
        vlSelf->__PVT__ram_15[0U] = 0U;
        vlSelf->__PVT__ram_15[1U] = 0U;
        vlSelf->__PVT__ram_15[2U] = 0U;
        vlSelf->__PVT__ram_15[3U] = 0U;
        vlSelf->__PVT__ram_16[0U] = 0U;
        vlSelf->__PVT__ram_16[1U] = 0U;
        vlSelf->__PVT__ram_16[2U] = 0U;
        vlSelf->__PVT__ram_16[3U] = 0U;
        vlSelf->__PVT__ram_17[0U] = 0U;
        vlSelf->__PVT__ram_17[1U] = 0U;
        vlSelf->__PVT__ram_17[2U] = 0U;
        vlSelf->__PVT__ram_17[3U] = 0U;
        vlSelf->__PVT__ram_18[0U] = 0U;
        vlSelf->__PVT__ram_18[1U] = 0U;
        vlSelf->__PVT__ram_18[2U] = 0U;
        vlSelf->__PVT__ram_18[3U] = 0U;
        vlSelf->__PVT__ram_19[0U] = 0U;
        vlSelf->__PVT__ram_19[1U] = 0U;
        vlSelf->__PVT__ram_19[2U] = 0U;
        vlSelf->__PVT__ram_19[3U] = 0U;
        vlSelf->__PVT__ram_20[0U] = 0U;
        vlSelf->__PVT__ram_20[1U] = 0U;
        vlSelf->__PVT__ram_20[2U] = 0U;
        vlSelf->__PVT__ram_20[3U] = 0U;
        vlSelf->__PVT__ram_21[0U] = 0U;
        vlSelf->__PVT__ram_21[1U] = 0U;
        vlSelf->__PVT__ram_21[2U] = 0U;
        vlSelf->__PVT__ram_21[3U] = 0U;
        vlSelf->__PVT__ram_22[0U] = 0U;
        vlSelf->__PVT__ram_22[1U] = 0U;
        vlSelf->__PVT__ram_22[2U] = 0U;
        vlSelf->__PVT__ram_22[3U] = 0U;
        vlSelf->__PVT__ram_23[0U] = 0U;
        vlSelf->__PVT__ram_23[1U] = 0U;
        vlSelf->__PVT__ram_23[2U] = 0U;
        vlSelf->__PVT__ram_23[3U] = 0U;
        vlSelf->__PVT__ram_24[0U] = 0U;
        vlSelf->__PVT__ram_24[1U] = 0U;
        vlSelf->__PVT__ram_24[2U] = 0U;
        vlSelf->__PVT__ram_24[3U] = 0U;
        vlSelf->__PVT__ram_25[0U] = 0U;
        vlSelf->__PVT__ram_25[1U] = 0U;
        vlSelf->__PVT__ram_25[2U] = 0U;
        vlSelf->__PVT__ram_25[3U] = 0U;
        vlSelf->__PVT__ram_26[0U] = 0U;
        vlSelf->__PVT__ram_26[1U] = 0U;
        vlSelf->__PVT__ram_26[2U] = 0U;
        vlSelf->__PVT__ram_26[3U] = 0U;
        vlSelf->__PVT__ram_27[0U] = 0U;
        vlSelf->__PVT__ram_27[1U] = 0U;
        vlSelf->__PVT__ram_27[2U] = 0U;
        vlSelf->__PVT__ram_27[3U] = 0U;
        vlSelf->__PVT__ram_28[0U] = 0U;
        vlSelf->__PVT__ram_28[1U] = 0U;
        vlSelf->__PVT__ram_28[2U] = 0U;
        vlSelf->__PVT__ram_28[3U] = 0U;
        vlSelf->__PVT__ram_29[0U] = 0U;
        vlSelf->__PVT__ram_29[1U] = 0U;
        vlSelf->__PVT__ram_29[2U] = 0U;
        vlSelf->__PVT__ram_29[3U] = 0U;
        vlSelf->__PVT__ram_30[0U] = 0U;
        vlSelf->__PVT__ram_30[1U] = 0U;
        vlSelf->__PVT__ram_30[2U] = 0U;
        vlSelf->__PVT__ram_30[3U] = 0U;
        vlSelf->__PVT__ram_31[0U] = 0U;
        vlSelf->__PVT__ram_31[1U] = 0U;
        vlSelf->__PVT__ram_31[2U] = 0U;
        vlSelf->__PVT__ram_31[3U] = 0U;
        vlSelf->__PVT__ram_32[0U] = 0U;
        vlSelf->__PVT__ram_32[1U] = 0U;
        vlSelf->__PVT__ram_32[2U] = 0U;
        vlSelf->__PVT__ram_32[3U] = 0U;
        vlSelf->__PVT__ram_33[0U] = 0U;
        vlSelf->__PVT__ram_33[1U] = 0U;
        vlSelf->__PVT__ram_33[2U] = 0U;
        vlSelf->__PVT__ram_33[3U] = 0U;
        vlSelf->__PVT__ram_34[0U] = 0U;
        vlSelf->__PVT__ram_34[1U] = 0U;
        vlSelf->__PVT__ram_34[2U] = 0U;
        vlSelf->__PVT__ram_34[3U] = 0U;
        vlSelf->__PVT__ram_35[0U] = 0U;
        vlSelf->__PVT__ram_35[1U] = 0U;
        vlSelf->__PVT__ram_35[2U] = 0U;
        vlSelf->__PVT__ram_35[3U] = 0U;
        vlSelf->__PVT__ram_36[0U] = 0U;
        vlSelf->__PVT__ram_36[1U] = 0U;
        vlSelf->__PVT__ram_36[2U] = 0U;
        vlSelf->__PVT__ram_36[3U] = 0U;
        vlSelf->__PVT__ram_37[0U] = 0U;
        vlSelf->__PVT__ram_37[1U] = 0U;
        vlSelf->__PVT__ram_37[2U] = 0U;
        vlSelf->__PVT__ram_37[3U] = 0U;
        vlSelf->__PVT__ram_38[0U] = 0U;
        vlSelf->__PVT__ram_38[1U] = 0U;
        vlSelf->__PVT__ram_38[2U] = 0U;
        vlSelf->__PVT__ram_38[3U] = 0U;
        vlSelf->__PVT__ram_39[0U] = 0U;
        vlSelf->__PVT__ram_39[1U] = 0U;
        vlSelf->__PVT__ram_39[2U] = 0U;
        vlSelf->__PVT__ram_39[3U] = 0U;
        vlSelf->__PVT__ram_40[0U] = 0U;
        vlSelf->__PVT__ram_40[1U] = 0U;
        vlSelf->__PVT__ram_40[2U] = 0U;
        vlSelf->__PVT__ram_40[3U] = 0U;
        vlSelf->__PVT__ram_41[0U] = 0U;
        vlSelf->__PVT__ram_41[1U] = 0U;
        vlSelf->__PVT__ram_41[2U] = 0U;
        vlSelf->__PVT__ram_41[3U] = 0U;
        vlSelf->__PVT__ram_42[0U] = 0U;
        vlSelf->__PVT__ram_42[1U] = 0U;
        vlSelf->__PVT__ram_42[2U] = 0U;
        vlSelf->__PVT__ram_42[3U] = 0U;
        vlSelf->__PVT__ram_43[0U] = 0U;
        vlSelf->__PVT__ram_43[1U] = 0U;
        vlSelf->__PVT__ram_43[2U] = 0U;
        vlSelf->__PVT__ram_43[3U] = 0U;
        vlSelf->__PVT__ram_44[0U] = 0U;
        vlSelf->__PVT__ram_44[1U] = 0U;
        vlSelf->__PVT__ram_44[2U] = 0U;
        vlSelf->__PVT__ram_44[3U] = 0U;
        vlSelf->__PVT__ram_45[0U] = 0U;
        vlSelf->__PVT__ram_45[1U] = 0U;
        vlSelf->__PVT__ram_45[2U] = 0U;
        vlSelf->__PVT__ram_45[3U] = 0U;
        vlSelf->__PVT__ram_46[0U] = 0U;
        vlSelf->__PVT__ram_46[1U] = 0U;
        vlSelf->__PVT__ram_46[2U] = 0U;
        vlSelf->__PVT__ram_46[3U] = 0U;
        vlSelf->__PVT__ram_47[0U] = 0U;
        vlSelf->__PVT__ram_47[1U] = 0U;
        vlSelf->__PVT__ram_47[2U] = 0U;
        vlSelf->__PVT__ram_47[3U] = 0U;
        vlSelf->__PVT__ram_48[0U] = 0U;
        vlSelf->__PVT__ram_48[1U] = 0U;
        vlSelf->__PVT__ram_48[2U] = 0U;
        vlSelf->__PVT__ram_48[3U] = 0U;
        vlSelf->__PVT__ram_49[0U] = 0U;
        vlSelf->__PVT__ram_49[1U] = 0U;
        vlSelf->__PVT__ram_49[2U] = 0U;
        vlSelf->__PVT__ram_49[3U] = 0U;
        vlSelf->__PVT__ram_50[0U] = 0U;
        vlSelf->__PVT__ram_50[1U] = 0U;
        vlSelf->__PVT__ram_50[2U] = 0U;
        vlSelf->__PVT__ram_50[3U] = 0U;
        vlSelf->__PVT__ram_51[0U] = 0U;
        vlSelf->__PVT__ram_51[1U] = 0U;
        vlSelf->__PVT__ram_51[2U] = 0U;
        vlSelf->__PVT__ram_51[3U] = 0U;
        vlSelf->__PVT__ram_52[0U] = 0U;
        vlSelf->__PVT__ram_52[1U] = 0U;
        vlSelf->__PVT__ram_52[2U] = 0U;
        vlSelf->__PVT__ram_52[3U] = 0U;
        vlSelf->__PVT__ram_53[0U] = 0U;
        vlSelf->__PVT__ram_53[1U] = 0U;
        vlSelf->__PVT__ram_53[2U] = 0U;
        vlSelf->__PVT__ram_53[3U] = 0U;
        vlSelf->__PVT__ram_54[0U] = 0U;
        vlSelf->__PVT__ram_54[1U] = 0U;
        vlSelf->__PVT__ram_54[2U] = 0U;
        vlSelf->__PVT__ram_54[3U] = 0U;
        vlSelf->__PVT__ram_55[0U] = 0U;
        vlSelf->__PVT__ram_55[1U] = 0U;
        vlSelf->__PVT__ram_55[2U] = 0U;
        vlSelf->__PVT__ram_55[3U] = 0U;
        vlSelf->__PVT__ram_56[0U] = 0U;
        vlSelf->__PVT__ram_56[1U] = 0U;
        vlSelf->__PVT__ram_56[2U] = 0U;
        vlSelf->__PVT__ram_56[3U] = 0U;
        vlSelf->__PVT__ram_57[0U] = 0U;
        vlSelf->__PVT__ram_57[1U] = 0U;
        vlSelf->__PVT__ram_57[2U] = 0U;
        vlSelf->__PVT__ram_57[3U] = 0U;
        vlSelf->__PVT__ram_58[0U] = 0U;
        vlSelf->__PVT__ram_58[1U] = 0U;
        vlSelf->__PVT__ram_58[2U] = 0U;
        vlSelf->__PVT__ram_58[3U] = 0U;
        vlSelf->__PVT__ram_59[0U] = 0U;
        vlSelf->__PVT__ram_59[1U] = 0U;
        vlSelf->__PVT__ram_59[2U] = 0U;
        vlSelf->__PVT__ram_59[3U] = 0U;
        vlSelf->__PVT__ram_60[0U] = 0U;
        vlSelf->__PVT__ram_60[1U] = 0U;
        vlSelf->__PVT__ram_60[2U] = 0U;
        vlSelf->__PVT__ram_60[3U] = 0U;
        vlSelf->__PVT__ram_61[0U] = 0U;
        vlSelf->__PVT__ram_61[1U] = 0U;
        vlSelf->__PVT__ram_61[2U] = 0U;
        vlSelf->__PVT__ram_61[3U] = 0U;
        vlSelf->__PVT__ram_62[0U] = 0U;
        vlSelf->__PVT__ram_62[1U] = 0U;
        vlSelf->__PVT__ram_62[2U] = 0U;
        vlSelf->__PVT__ram_62[3U] = 0U;
        vlSelf->__PVT__ram_63[0U] = 0U;
        vlSelf->__PVT__ram_63[1U] = 0U;
        vlSelf->__PVT__ram_63[2U] = 0U;
        vlSelf->__PVT__ram_63[3U] = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T = (1U & 
                                               ((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_1__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1__18(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1__18\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
         & (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_1__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2__3(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__ram_0[0U] = 0U;
        vlSelf->__PVT__ram_0[1U] = 0U;
        vlSelf->__PVT__ram_0[2U] = 0U;
        vlSelf->__PVT__ram_0[3U] = 0U;
        vlSelf->__PVT__ram_1[0U] = 0U;
        vlSelf->__PVT__ram_1[1U] = 0U;
        vlSelf->__PVT__ram_1[2U] = 0U;
        vlSelf->__PVT__ram_1[3U] = 0U;
        vlSelf->__PVT__ram_2[0U] = 0U;
        vlSelf->__PVT__ram_2[1U] = 0U;
        vlSelf->__PVT__ram_2[2U] = 0U;
        vlSelf->__PVT__ram_2[3U] = 0U;
        vlSelf->__PVT__ram_3[0U] = 0U;
        vlSelf->__PVT__ram_3[1U] = 0U;
        vlSelf->__PVT__ram_3[2U] = 0U;
        vlSelf->__PVT__ram_3[3U] = 0U;
        vlSelf->__PVT__ram_4[0U] = 0U;
        vlSelf->__PVT__ram_4[1U] = 0U;
        vlSelf->__PVT__ram_4[2U] = 0U;
        vlSelf->__PVT__ram_4[3U] = 0U;
        vlSelf->__PVT__ram_5[0U] = 0U;
        vlSelf->__PVT__ram_5[1U] = 0U;
        vlSelf->__PVT__ram_5[2U] = 0U;
        vlSelf->__PVT__ram_5[3U] = 0U;
        vlSelf->__PVT__ram_6[0U] = 0U;
        vlSelf->__PVT__ram_6[1U] = 0U;
        vlSelf->__PVT__ram_6[2U] = 0U;
        vlSelf->__PVT__ram_6[3U] = 0U;
        vlSelf->__PVT__ram_7[0U] = 0U;
        vlSelf->__PVT__ram_7[1U] = 0U;
        vlSelf->__PVT__ram_7[2U] = 0U;
        vlSelf->__PVT__ram_7[3U] = 0U;
        vlSelf->__PVT__ram_8[0U] = 0U;
        vlSelf->__PVT__ram_8[1U] = 0U;
        vlSelf->__PVT__ram_8[2U] = 0U;
        vlSelf->__PVT__ram_8[3U] = 0U;
        vlSelf->__PVT__ram_9[0U] = 0U;
        vlSelf->__PVT__ram_9[1U] = 0U;
        vlSelf->__PVT__ram_9[2U] = 0U;
        vlSelf->__PVT__ram_9[3U] = 0U;
        vlSelf->__PVT__ram_10[0U] = 0U;
        vlSelf->__PVT__ram_10[1U] = 0U;
        vlSelf->__PVT__ram_10[2U] = 0U;
        vlSelf->__PVT__ram_10[3U] = 0U;
        vlSelf->__PVT__ram_11[0U] = 0U;
        vlSelf->__PVT__ram_11[1U] = 0U;
        vlSelf->__PVT__ram_11[2U] = 0U;
        vlSelf->__PVT__ram_11[3U] = 0U;
        vlSelf->__PVT__ram_12[0U] = 0U;
        vlSelf->__PVT__ram_12[1U] = 0U;
        vlSelf->__PVT__ram_12[2U] = 0U;
        vlSelf->__PVT__ram_12[3U] = 0U;
        vlSelf->__PVT__ram_13[0U] = 0U;
        vlSelf->__PVT__ram_13[1U] = 0U;
        vlSelf->__PVT__ram_13[2U] = 0U;
        vlSelf->__PVT__ram_13[3U] = 0U;
        vlSelf->__PVT__ram_14[0U] = 0U;
        vlSelf->__PVT__ram_14[1U] = 0U;
        vlSelf->__PVT__ram_14[2U] = 0U;
        vlSelf->__PVT__ram_14[3U] = 0U;
        vlSelf->__PVT__ram_15[0U] = 0U;
        vlSelf->__PVT__ram_15[1U] = 0U;
        vlSelf->__PVT__ram_15[2U] = 0U;
        vlSelf->__PVT__ram_15[3U] = 0U;
        vlSelf->__PVT__ram_16[0U] = 0U;
        vlSelf->__PVT__ram_16[1U] = 0U;
        vlSelf->__PVT__ram_16[2U] = 0U;
        vlSelf->__PVT__ram_16[3U] = 0U;
        vlSelf->__PVT__ram_17[0U] = 0U;
        vlSelf->__PVT__ram_17[1U] = 0U;
        vlSelf->__PVT__ram_17[2U] = 0U;
        vlSelf->__PVT__ram_17[3U] = 0U;
        vlSelf->__PVT__ram_18[0U] = 0U;
        vlSelf->__PVT__ram_18[1U] = 0U;
        vlSelf->__PVT__ram_18[2U] = 0U;
        vlSelf->__PVT__ram_18[3U] = 0U;
        vlSelf->__PVT__ram_19[0U] = 0U;
        vlSelf->__PVT__ram_19[1U] = 0U;
        vlSelf->__PVT__ram_19[2U] = 0U;
        vlSelf->__PVT__ram_19[3U] = 0U;
        vlSelf->__PVT__ram_20[0U] = 0U;
        vlSelf->__PVT__ram_20[1U] = 0U;
        vlSelf->__PVT__ram_20[2U] = 0U;
        vlSelf->__PVT__ram_20[3U] = 0U;
        vlSelf->__PVT__ram_21[0U] = 0U;
        vlSelf->__PVT__ram_21[1U] = 0U;
        vlSelf->__PVT__ram_21[2U] = 0U;
        vlSelf->__PVT__ram_21[3U] = 0U;
        vlSelf->__PVT__ram_22[0U] = 0U;
        vlSelf->__PVT__ram_22[1U] = 0U;
        vlSelf->__PVT__ram_22[2U] = 0U;
        vlSelf->__PVT__ram_22[3U] = 0U;
        vlSelf->__PVT__ram_23[0U] = 0U;
        vlSelf->__PVT__ram_23[1U] = 0U;
        vlSelf->__PVT__ram_23[2U] = 0U;
        vlSelf->__PVT__ram_23[3U] = 0U;
        vlSelf->__PVT__ram_24[0U] = 0U;
        vlSelf->__PVT__ram_24[1U] = 0U;
        vlSelf->__PVT__ram_24[2U] = 0U;
        vlSelf->__PVT__ram_24[3U] = 0U;
        vlSelf->__PVT__ram_25[0U] = 0U;
        vlSelf->__PVT__ram_25[1U] = 0U;
        vlSelf->__PVT__ram_25[2U] = 0U;
        vlSelf->__PVT__ram_25[3U] = 0U;
        vlSelf->__PVT__ram_26[0U] = 0U;
        vlSelf->__PVT__ram_26[1U] = 0U;
        vlSelf->__PVT__ram_26[2U] = 0U;
        vlSelf->__PVT__ram_26[3U] = 0U;
        vlSelf->__PVT__ram_27[0U] = 0U;
        vlSelf->__PVT__ram_27[1U] = 0U;
        vlSelf->__PVT__ram_27[2U] = 0U;
        vlSelf->__PVT__ram_27[3U] = 0U;
        vlSelf->__PVT__ram_28[0U] = 0U;
        vlSelf->__PVT__ram_28[1U] = 0U;
        vlSelf->__PVT__ram_28[2U] = 0U;
        vlSelf->__PVT__ram_28[3U] = 0U;
        vlSelf->__PVT__ram_29[0U] = 0U;
        vlSelf->__PVT__ram_29[1U] = 0U;
        vlSelf->__PVT__ram_29[2U] = 0U;
        vlSelf->__PVT__ram_29[3U] = 0U;
        vlSelf->__PVT__ram_30[0U] = 0U;
        vlSelf->__PVT__ram_30[1U] = 0U;
        vlSelf->__PVT__ram_30[2U] = 0U;
        vlSelf->__PVT__ram_30[3U] = 0U;
        vlSelf->__PVT__ram_31[0U] = 0U;
        vlSelf->__PVT__ram_31[1U] = 0U;
        vlSelf->__PVT__ram_31[2U] = 0U;
        vlSelf->__PVT__ram_31[3U] = 0U;
        vlSelf->__PVT__ram_32[0U] = 0U;
        vlSelf->__PVT__ram_32[1U] = 0U;
        vlSelf->__PVT__ram_32[2U] = 0U;
        vlSelf->__PVT__ram_32[3U] = 0U;
        vlSelf->__PVT__ram_33[0U] = 0U;
        vlSelf->__PVT__ram_33[1U] = 0U;
        vlSelf->__PVT__ram_33[2U] = 0U;
        vlSelf->__PVT__ram_33[3U] = 0U;
        vlSelf->__PVT__ram_34[0U] = 0U;
        vlSelf->__PVT__ram_34[1U] = 0U;
        vlSelf->__PVT__ram_34[2U] = 0U;
        vlSelf->__PVT__ram_34[3U] = 0U;
        vlSelf->__PVT__ram_35[0U] = 0U;
        vlSelf->__PVT__ram_35[1U] = 0U;
        vlSelf->__PVT__ram_35[2U] = 0U;
        vlSelf->__PVT__ram_35[3U] = 0U;
        vlSelf->__PVT__ram_36[0U] = 0U;
        vlSelf->__PVT__ram_36[1U] = 0U;
        vlSelf->__PVT__ram_36[2U] = 0U;
        vlSelf->__PVT__ram_36[3U] = 0U;
        vlSelf->__PVT__ram_37[0U] = 0U;
        vlSelf->__PVT__ram_37[1U] = 0U;
        vlSelf->__PVT__ram_37[2U] = 0U;
        vlSelf->__PVT__ram_37[3U] = 0U;
        vlSelf->__PVT__ram_38[0U] = 0U;
        vlSelf->__PVT__ram_38[1U] = 0U;
        vlSelf->__PVT__ram_38[2U] = 0U;
        vlSelf->__PVT__ram_38[3U] = 0U;
        vlSelf->__PVT__ram_39[0U] = 0U;
        vlSelf->__PVT__ram_39[1U] = 0U;
        vlSelf->__PVT__ram_39[2U] = 0U;
        vlSelf->__PVT__ram_39[3U] = 0U;
        vlSelf->__PVT__ram_40[0U] = 0U;
        vlSelf->__PVT__ram_40[1U] = 0U;
        vlSelf->__PVT__ram_40[2U] = 0U;
        vlSelf->__PVT__ram_40[3U] = 0U;
        vlSelf->__PVT__ram_41[0U] = 0U;
        vlSelf->__PVT__ram_41[1U] = 0U;
        vlSelf->__PVT__ram_41[2U] = 0U;
        vlSelf->__PVT__ram_41[3U] = 0U;
        vlSelf->__PVT__ram_42[0U] = 0U;
        vlSelf->__PVT__ram_42[1U] = 0U;
        vlSelf->__PVT__ram_42[2U] = 0U;
        vlSelf->__PVT__ram_42[3U] = 0U;
        vlSelf->__PVT__ram_43[0U] = 0U;
        vlSelf->__PVT__ram_43[1U] = 0U;
        vlSelf->__PVT__ram_43[2U] = 0U;
        vlSelf->__PVT__ram_43[3U] = 0U;
        vlSelf->__PVT__ram_44[0U] = 0U;
        vlSelf->__PVT__ram_44[1U] = 0U;
        vlSelf->__PVT__ram_44[2U] = 0U;
        vlSelf->__PVT__ram_44[3U] = 0U;
        vlSelf->__PVT__ram_45[0U] = 0U;
        vlSelf->__PVT__ram_45[1U] = 0U;
        vlSelf->__PVT__ram_45[2U] = 0U;
        vlSelf->__PVT__ram_45[3U] = 0U;
        vlSelf->__PVT__ram_46[0U] = 0U;
        vlSelf->__PVT__ram_46[1U] = 0U;
        vlSelf->__PVT__ram_46[2U] = 0U;
        vlSelf->__PVT__ram_46[3U] = 0U;
        vlSelf->__PVT__ram_47[0U] = 0U;
        vlSelf->__PVT__ram_47[1U] = 0U;
        vlSelf->__PVT__ram_47[2U] = 0U;
        vlSelf->__PVT__ram_47[3U] = 0U;
        vlSelf->__PVT__ram_48[0U] = 0U;
        vlSelf->__PVT__ram_48[1U] = 0U;
        vlSelf->__PVT__ram_48[2U] = 0U;
        vlSelf->__PVT__ram_48[3U] = 0U;
        vlSelf->__PVT__ram_49[0U] = 0U;
        vlSelf->__PVT__ram_49[1U] = 0U;
        vlSelf->__PVT__ram_49[2U] = 0U;
        vlSelf->__PVT__ram_49[3U] = 0U;
        vlSelf->__PVT__ram_50[0U] = 0U;
        vlSelf->__PVT__ram_50[1U] = 0U;
        vlSelf->__PVT__ram_50[2U] = 0U;
        vlSelf->__PVT__ram_50[3U] = 0U;
        vlSelf->__PVT__ram_51[0U] = 0U;
        vlSelf->__PVT__ram_51[1U] = 0U;
        vlSelf->__PVT__ram_51[2U] = 0U;
        vlSelf->__PVT__ram_51[3U] = 0U;
        vlSelf->__PVT__ram_52[0U] = 0U;
        vlSelf->__PVT__ram_52[1U] = 0U;
        vlSelf->__PVT__ram_52[2U] = 0U;
        vlSelf->__PVT__ram_52[3U] = 0U;
        vlSelf->__PVT__ram_53[0U] = 0U;
        vlSelf->__PVT__ram_53[1U] = 0U;
        vlSelf->__PVT__ram_53[2U] = 0U;
        vlSelf->__PVT__ram_53[3U] = 0U;
        vlSelf->__PVT__ram_54[0U] = 0U;
        vlSelf->__PVT__ram_54[1U] = 0U;
        vlSelf->__PVT__ram_54[2U] = 0U;
        vlSelf->__PVT__ram_54[3U] = 0U;
        vlSelf->__PVT__ram_55[0U] = 0U;
        vlSelf->__PVT__ram_55[1U] = 0U;
        vlSelf->__PVT__ram_55[2U] = 0U;
        vlSelf->__PVT__ram_55[3U] = 0U;
        vlSelf->__PVT__ram_56[0U] = 0U;
        vlSelf->__PVT__ram_56[1U] = 0U;
        vlSelf->__PVT__ram_56[2U] = 0U;
        vlSelf->__PVT__ram_56[3U] = 0U;
        vlSelf->__PVT__ram_57[0U] = 0U;
        vlSelf->__PVT__ram_57[1U] = 0U;
        vlSelf->__PVT__ram_57[2U] = 0U;
        vlSelf->__PVT__ram_57[3U] = 0U;
        vlSelf->__PVT__ram_58[0U] = 0U;
        vlSelf->__PVT__ram_58[1U] = 0U;
        vlSelf->__PVT__ram_58[2U] = 0U;
        vlSelf->__PVT__ram_58[3U] = 0U;
        vlSelf->__PVT__ram_59[0U] = 0U;
        vlSelf->__PVT__ram_59[1U] = 0U;
        vlSelf->__PVT__ram_59[2U] = 0U;
        vlSelf->__PVT__ram_59[3U] = 0U;
        vlSelf->__PVT__ram_60[0U] = 0U;
        vlSelf->__PVT__ram_60[1U] = 0U;
        vlSelf->__PVT__ram_60[2U] = 0U;
        vlSelf->__PVT__ram_60[3U] = 0U;
        vlSelf->__PVT__ram_61[0U] = 0U;
        vlSelf->__PVT__ram_61[1U] = 0U;
        vlSelf->__PVT__ram_61[2U] = 0U;
        vlSelf->__PVT__ram_61[3U] = 0U;
        vlSelf->__PVT__ram_62[0U] = 0U;
        vlSelf->__PVT__ram_62[1U] = 0U;
        vlSelf->__PVT__ram_62[2U] = 0U;
        vlSelf->__PVT__ram_62[3U] = 0U;
        vlSelf->__PVT__ram_63[0U] = 0U;
        vlSelf->__PVT__ram_63[1U] = 0U;
        vlSelf->__PVT__ram_63[2U] = 0U;
        vlSelf->__PVT__ram_63[3U] = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T = (1U & 
                                               ((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_2__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2__19(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2__19\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
         & (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_2__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3__4(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3__4\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__ram_0[0U] = 0U;
        vlSelf->__PVT__ram_0[1U] = 0U;
        vlSelf->__PVT__ram_0[2U] = 0U;
        vlSelf->__PVT__ram_0[3U] = 0U;
        vlSelf->__PVT__ram_1[0U] = 0U;
        vlSelf->__PVT__ram_1[1U] = 0U;
        vlSelf->__PVT__ram_1[2U] = 0U;
        vlSelf->__PVT__ram_1[3U] = 0U;
        vlSelf->__PVT__ram_2[0U] = 0U;
        vlSelf->__PVT__ram_2[1U] = 0U;
        vlSelf->__PVT__ram_2[2U] = 0U;
        vlSelf->__PVT__ram_2[3U] = 0U;
        vlSelf->__PVT__ram_3[0U] = 0U;
        vlSelf->__PVT__ram_3[1U] = 0U;
        vlSelf->__PVT__ram_3[2U] = 0U;
        vlSelf->__PVT__ram_3[3U] = 0U;
        vlSelf->__PVT__ram_4[0U] = 0U;
        vlSelf->__PVT__ram_4[1U] = 0U;
        vlSelf->__PVT__ram_4[2U] = 0U;
        vlSelf->__PVT__ram_4[3U] = 0U;
        vlSelf->__PVT__ram_5[0U] = 0U;
        vlSelf->__PVT__ram_5[1U] = 0U;
        vlSelf->__PVT__ram_5[2U] = 0U;
        vlSelf->__PVT__ram_5[3U] = 0U;
        vlSelf->__PVT__ram_6[0U] = 0U;
        vlSelf->__PVT__ram_6[1U] = 0U;
        vlSelf->__PVT__ram_6[2U] = 0U;
        vlSelf->__PVT__ram_6[3U] = 0U;
        vlSelf->__PVT__ram_7[0U] = 0U;
        vlSelf->__PVT__ram_7[1U] = 0U;
        vlSelf->__PVT__ram_7[2U] = 0U;
        vlSelf->__PVT__ram_7[3U] = 0U;
        vlSelf->__PVT__ram_8[0U] = 0U;
        vlSelf->__PVT__ram_8[1U] = 0U;
        vlSelf->__PVT__ram_8[2U] = 0U;
        vlSelf->__PVT__ram_8[3U] = 0U;
        vlSelf->__PVT__ram_9[0U] = 0U;
        vlSelf->__PVT__ram_9[1U] = 0U;
        vlSelf->__PVT__ram_9[2U] = 0U;
        vlSelf->__PVT__ram_9[3U] = 0U;
        vlSelf->__PVT__ram_10[0U] = 0U;
        vlSelf->__PVT__ram_10[1U] = 0U;
        vlSelf->__PVT__ram_10[2U] = 0U;
        vlSelf->__PVT__ram_10[3U] = 0U;
        vlSelf->__PVT__ram_11[0U] = 0U;
        vlSelf->__PVT__ram_11[1U] = 0U;
        vlSelf->__PVT__ram_11[2U] = 0U;
        vlSelf->__PVT__ram_11[3U] = 0U;
        vlSelf->__PVT__ram_12[0U] = 0U;
        vlSelf->__PVT__ram_12[1U] = 0U;
        vlSelf->__PVT__ram_12[2U] = 0U;
        vlSelf->__PVT__ram_12[3U] = 0U;
        vlSelf->__PVT__ram_13[0U] = 0U;
        vlSelf->__PVT__ram_13[1U] = 0U;
        vlSelf->__PVT__ram_13[2U] = 0U;
        vlSelf->__PVT__ram_13[3U] = 0U;
        vlSelf->__PVT__ram_14[0U] = 0U;
        vlSelf->__PVT__ram_14[1U] = 0U;
        vlSelf->__PVT__ram_14[2U] = 0U;
        vlSelf->__PVT__ram_14[3U] = 0U;
        vlSelf->__PVT__ram_15[0U] = 0U;
        vlSelf->__PVT__ram_15[1U] = 0U;
        vlSelf->__PVT__ram_15[2U] = 0U;
        vlSelf->__PVT__ram_15[3U] = 0U;
        vlSelf->__PVT__ram_16[0U] = 0U;
        vlSelf->__PVT__ram_16[1U] = 0U;
        vlSelf->__PVT__ram_16[2U] = 0U;
        vlSelf->__PVT__ram_16[3U] = 0U;
        vlSelf->__PVT__ram_17[0U] = 0U;
        vlSelf->__PVT__ram_17[1U] = 0U;
        vlSelf->__PVT__ram_17[2U] = 0U;
        vlSelf->__PVT__ram_17[3U] = 0U;
        vlSelf->__PVT__ram_18[0U] = 0U;
        vlSelf->__PVT__ram_18[1U] = 0U;
        vlSelf->__PVT__ram_18[2U] = 0U;
        vlSelf->__PVT__ram_18[3U] = 0U;
        vlSelf->__PVT__ram_19[0U] = 0U;
        vlSelf->__PVT__ram_19[1U] = 0U;
        vlSelf->__PVT__ram_19[2U] = 0U;
        vlSelf->__PVT__ram_19[3U] = 0U;
        vlSelf->__PVT__ram_20[0U] = 0U;
        vlSelf->__PVT__ram_20[1U] = 0U;
        vlSelf->__PVT__ram_20[2U] = 0U;
        vlSelf->__PVT__ram_20[3U] = 0U;
        vlSelf->__PVT__ram_21[0U] = 0U;
        vlSelf->__PVT__ram_21[1U] = 0U;
        vlSelf->__PVT__ram_21[2U] = 0U;
        vlSelf->__PVT__ram_21[3U] = 0U;
        vlSelf->__PVT__ram_22[0U] = 0U;
        vlSelf->__PVT__ram_22[1U] = 0U;
        vlSelf->__PVT__ram_22[2U] = 0U;
        vlSelf->__PVT__ram_22[3U] = 0U;
        vlSelf->__PVT__ram_23[0U] = 0U;
        vlSelf->__PVT__ram_23[1U] = 0U;
        vlSelf->__PVT__ram_23[2U] = 0U;
        vlSelf->__PVT__ram_23[3U] = 0U;
        vlSelf->__PVT__ram_24[0U] = 0U;
        vlSelf->__PVT__ram_24[1U] = 0U;
        vlSelf->__PVT__ram_24[2U] = 0U;
        vlSelf->__PVT__ram_24[3U] = 0U;
        vlSelf->__PVT__ram_25[0U] = 0U;
        vlSelf->__PVT__ram_25[1U] = 0U;
        vlSelf->__PVT__ram_25[2U] = 0U;
        vlSelf->__PVT__ram_25[3U] = 0U;
        vlSelf->__PVT__ram_26[0U] = 0U;
        vlSelf->__PVT__ram_26[1U] = 0U;
        vlSelf->__PVT__ram_26[2U] = 0U;
        vlSelf->__PVT__ram_26[3U] = 0U;
        vlSelf->__PVT__ram_27[0U] = 0U;
        vlSelf->__PVT__ram_27[1U] = 0U;
        vlSelf->__PVT__ram_27[2U] = 0U;
        vlSelf->__PVT__ram_27[3U] = 0U;
        vlSelf->__PVT__ram_28[0U] = 0U;
        vlSelf->__PVT__ram_28[1U] = 0U;
        vlSelf->__PVT__ram_28[2U] = 0U;
        vlSelf->__PVT__ram_28[3U] = 0U;
        vlSelf->__PVT__ram_29[0U] = 0U;
        vlSelf->__PVT__ram_29[1U] = 0U;
        vlSelf->__PVT__ram_29[2U] = 0U;
        vlSelf->__PVT__ram_29[3U] = 0U;
        vlSelf->__PVT__ram_30[0U] = 0U;
        vlSelf->__PVT__ram_30[1U] = 0U;
        vlSelf->__PVT__ram_30[2U] = 0U;
        vlSelf->__PVT__ram_30[3U] = 0U;
        vlSelf->__PVT__ram_31[0U] = 0U;
        vlSelf->__PVT__ram_31[1U] = 0U;
        vlSelf->__PVT__ram_31[2U] = 0U;
        vlSelf->__PVT__ram_31[3U] = 0U;
        vlSelf->__PVT__ram_32[0U] = 0U;
        vlSelf->__PVT__ram_32[1U] = 0U;
        vlSelf->__PVT__ram_32[2U] = 0U;
        vlSelf->__PVT__ram_32[3U] = 0U;
        vlSelf->__PVT__ram_33[0U] = 0U;
        vlSelf->__PVT__ram_33[1U] = 0U;
        vlSelf->__PVT__ram_33[2U] = 0U;
        vlSelf->__PVT__ram_33[3U] = 0U;
        vlSelf->__PVT__ram_34[0U] = 0U;
        vlSelf->__PVT__ram_34[1U] = 0U;
        vlSelf->__PVT__ram_34[2U] = 0U;
        vlSelf->__PVT__ram_34[3U] = 0U;
        vlSelf->__PVT__ram_35[0U] = 0U;
        vlSelf->__PVT__ram_35[1U] = 0U;
        vlSelf->__PVT__ram_35[2U] = 0U;
        vlSelf->__PVT__ram_35[3U] = 0U;
        vlSelf->__PVT__ram_36[0U] = 0U;
        vlSelf->__PVT__ram_36[1U] = 0U;
        vlSelf->__PVT__ram_36[2U] = 0U;
        vlSelf->__PVT__ram_36[3U] = 0U;
        vlSelf->__PVT__ram_37[0U] = 0U;
        vlSelf->__PVT__ram_37[1U] = 0U;
        vlSelf->__PVT__ram_37[2U] = 0U;
        vlSelf->__PVT__ram_37[3U] = 0U;
        vlSelf->__PVT__ram_38[0U] = 0U;
        vlSelf->__PVT__ram_38[1U] = 0U;
        vlSelf->__PVT__ram_38[2U] = 0U;
        vlSelf->__PVT__ram_38[3U] = 0U;
        vlSelf->__PVT__ram_39[0U] = 0U;
        vlSelf->__PVT__ram_39[1U] = 0U;
        vlSelf->__PVT__ram_39[2U] = 0U;
        vlSelf->__PVT__ram_39[3U] = 0U;
        vlSelf->__PVT__ram_40[0U] = 0U;
        vlSelf->__PVT__ram_40[1U] = 0U;
        vlSelf->__PVT__ram_40[2U] = 0U;
        vlSelf->__PVT__ram_40[3U] = 0U;
        vlSelf->__PVT__ram_41[0U] = 0U;
        vlSelf->__PVT__ram_41[1U] = 0U;
        vlSelf->__PVT__ram_41[2U] = 0U;
        vlSelf->__PVT__ram_41[3U] = 0U;
        vlSelf->__PVT__ram_42[0U] = 0U;
        vlSelf->__PVT__ram_42[1U] = 0U;
        vlSelf->__PVT__ram_42[2U] = 0U;
        vlSelf->__PVT__ram_42[3U] = 0U;
        vlSelf->__PVT__ram_43[0U] = 0U;
        vlSelf->__PVT__ram_43[1U] = 0U;
        vlSelf->__PVT__ram_43[2U] = 0U;
        vlSelf->__PVT__ram_43[3U] = 0U;
        vlSelf->__PVT__ram_44[0U] = 0U;
        vlSelf->__PVT__ram_44[1U] = 0U;
        vlSelf->__PVT__ram_44[2U] = 0U;
        vlSelf->__PVT__ram_44[3U] = 0U;
        vlSelf->__PVT__ram_45[0U] = 0U;
        vlSelf->__PVT__ram_45[1U] = 0U;
        vlSelf->__PVT__ram_45[2U] = 0U;
        vlSelf->__PVT__ram_45[3U] = 0U;
        vlSelf->__PVT__ram_46[0U] = 0U;
        vlSelf->__PVT__ram_46[1U] = 0U;
        vlSelf->__PVT__ram_46[2U] = 0U;
        vlSelf->__PVT__ram_46[3U] = 0U;
        vlSelf->__PVT__ram_47[0U] = 0U;
        vlSelf->__PVT__ram_47[1U] = 0U;
        vlSelf->__PVT__ram_47[2U] = 0U;
        vlSelf->__PVT__ram_47[3U] = 0U;
        vlSelf->__PVT__ram_48[0U] = 0U;
        vlSelf->__PVT__ram_48[1U] = 0U;
        vlSelf->__PVT__ram_48[2U] = 0U;
        vlSelf->__PVT__ram_48[3U] = 0U;
        vlSelf->__PVT__ram_49[0U] = 0U;
        vlSelf->__PVT__ram_49[1U] = 0U;
        vlSelf->__PVT__ram_49[2U] = 0U;
        vlSelf->__PVT__ram_49[3U] = 0U;
        vlSelf->__PVT__ram_50[0U] = 0U;
        vlSelf->__PVT__ram_50[1U] = 0U;
        vlSelf->__PVT__ram_50[2U] = 0U;
        vlSelf->__PVT__ram_50[3U] = 0U;
        vlSelf->__PVT__ram_51[0U] = 0U;
        vlSelf->__PVT__ram_51[1U] = 0U;
        vlSelf->__PVT__ram_51[2U] = 0U;
        vlSelf->__PVT__ram_51[3U] = 0U;
        vlSelf->__PVT__ram_52[0U] = 0U;
        vlSelf->__PVT__ram_52[1U] = 0U;
        vlSelf->__PVT__ram_52[2U] = 0U;
        vlSelf->__PVT__ram_52[3U] = 0U;
        vlSelf->__PVT__ram_53[0U] = 0U;
        vlSelf->__PVT__ram_53[1U] = 0U;
        vlSelf->__PVT__ram_53[2U] = 0U;
        vlSelf->__PVT__ram_53[3U] = 0U;
        vlSelf->__PVT__ram_54[0U] = 0U;
        vlSelf->__PVT__ram_54[1U] = 0U;
        vlSelf->__PVT__ram_54[2U] = 0U;
        vlSelf->__PVT__ram_54[3U] = 0U;
        vlSelf->__PVT__ram_55[0U] = 0U;
        vlSelf->__PVT__ram_55[1U] = 0U;
        vlSelf->__PVT__ram_55[2U] = 0U;
        vlSelf->__PVT__ram_55[3U] = 0U;
        vlSelf->__PVT__ram_56[0U] = 0U;
        vlSelf->__PVT__ram_56[1U] = 0U;
        vlSelf->__PVT__ram_56[2U] = 0U;
        vlSelf->__PVT__ram_56[3U] = 0U;
        vlSelf->__PVT__ram_57[0U] = 0U;
        vlSelf->__PVT__ram_57[1U] = 0U;
        vlSelf->__PVT__ram_57[2U] = 0U;
        vlSelf->__PVT__ram_57[3U] = 0U;
        vlSelf->__PVT__ram_58[0U] = 0U;
        vlSelf->__PVT__ram_58[1U] = 0U;
        vlSelf->__PVT__ram_58[2U] = 0U;
        vlSelf->__PVT__ram_58[3U] = 0U;
        vlSelf->__PVT__ram_59[0U] = 0U;
        vlSelf->__PVT__ram_59[1U] = 0U;
        vlSelf->__PVT__ram_59[2U] = 0U;
        vlSelf->__PVT__ram_59[3U] = 0U;
        vlSelf->__PVT__ram_60[0U] = 0U;
        vlSelf->__PVT__ram_60[1U] = 0U;
        vlSelf->__PVT__ram_60[2U] = 0U;
        vlSelf->__PVT__ram_60[3U] = 0U;
        vlSelf->__PVT__ram_61[0U] = 0U;
        vlSelf->__PVT__ram_61[1U] = 0U;
        vlSelf->__PVT__ram_61[2U] = 0U;
        vlSelf->__PVT__ram_61[3U] = 0U;
        vlSelf->__PVT__ram_62[0U] = 0U;
        vlSelf->__PVT__ram_62[1U] = 0U;
        vlSelf->__PVT__ram_62[2U] = 0U;
        vlSelf->__PVT__ram_62[3U] = 0U;
        vlSelf->__PVT__ram_63[0U] = 0U;
        vlSelf->__PVT__ram_63[1U] = 0U;
        vlSelf->__PVT__ram_63[2U] = 0U;
        vlSelf->__PVT__ram_63[3U] = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T = (1U & 
                                               ((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_3__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3__20(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3__20\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT___T_12)) 
         & (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vcellinp__CacheDataRam_3__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__5(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__5\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__ram_0[0U] = 0U;
        vlSelf->__PVT__ram_0[1U] = 0U;
        vlSelf->__PVT__ram_0[2U] = 0U;
        vlSelf->__PVT__ram_0[3U] = 0U;
        vlSelf->__PVT__ram_1[0U] = 0U;
        vlSelf->__PVT__ram_1[1U] = 0U;
        vlSelf->__PVT__ram_1[2U] = 0U;
        vlSelf->__PVT__ram_1[3U] = 0U;
        vlSelf->__PVT__ram_2[0U] = 0U;
        vlSelf->__PVT__ram_2[1U] = 0U;
        vlSelf->__PVT__ram_2[2U] = 0U;
        vlSelf->__PVT__ram_2[3U] = 0U;
        vlSelf->__PVT__ram_3[0U] = 0U;
        vlSelf->__PVT__ram_3[1U] = 0U;
        vlSelf->__PVT__ram_3[2U] = 0U;
        vlSelf->__PVT__ram_3[3U] = 0U;
        vlSelf->__PVT__ram_4[0U] = 0U;
        vlSelf->__PVT__ram_4[1U] = 0U;
        vlSelf->__PVT__ram_4[2U] = 0U;
        vlSelf->__PVT__ram_4[3U] = 0U;
        vlSelf->__PVT__ram_5[0U] = 0U;
        vlSelf->__PVT__ram_5[1U] = 0U;
        vlSelf->__PVT__ram_5[2U] = 0U;
        vlSelf->__PVT__ram_5[3U] = 0U;
        vlSelf->__PVT__ram_6[0U] = 0U;
        vlSelf->__PVT__ram_6[1U] = 0U;
        vlSelf->__PVT__ram_6[2U] = 0U;
        vlSelf->__PVT__ram_6[3U] = 0U;
        vlSelf->__PVT__ram_7[0U] = 0U;
        vlSelf->__PVT__ram_7[1U] = 0U;
        vlSelf->__PVT__ram_7[2U] = 0U;
        vlSelf->__PVT__ram_7[3U] = 0U;
        vlSelf->__PVT__ram_8[0U] = 0U;
        vlSelf->__PVT__ram_8[1U] = 0U;
        vlSelf->__PVT__ram_8[2U] = 0U;
        vlSelf->__PVT__ram_8[3U] = 0U;
        vlSelf->__PVT__ram_9[0U] = 0U;
        vlSelf->__PVT__ram_9[1U] = 0U;
        vlSelf->__PVT__ram_9[2U] = 0U;
        vlSelf->__PVT__ram_9[3U] = 0U;
        vlSelf->__PVT__ram_10[0U] = 0U;
        vlSelf->__PVT__ram_10[1U] = 0U;
        vlSelf->__PVT__ram_10[2U] = 0U;
        vlSelf->__PVT__ram_10[3U] = 0U;
        vlSelf->__PVT__ram_11[0U] = 0U;
        vlSelf->__PVT__ram_11[1U] = 0U;
        vlSelf->__PVT__ram_11[2U] = 0U;
        vlSelf->__PVT__ram_11[3U] = 0U;
        vlSelf->__PVT__ram_12[0U] = 0U;
        vlSelf->__PVT__ram_12[1U] = 0U;
        vlSelf->__PVT__ram_12[2U] = 0U;
        vlSelf->__PVT__ram_12[3U] = 0U;
        vlSelf->__PVT__ram_13[0U] = 0U;
        vlSelf->__PVT__ram_13[1U] = 0U;
        vlSelf->__PVT__ram_13[2U] = 0U;
        vlSelf->__PVT__ram_13[3U] = 0U;
        vlSelf->__PVT__ram_14[0U] = 0U;
        vlSelf->__PVT__ram_14[1U] = 0U;
        vlSelf->__PVT__ram_14[2U] = 0U;
        vlSelf->__PVT__ram_14[3U] = 0U;
        vlSelf->__PVT__ram_15[0U] = 0U;
        vlSelf->__PVT__ram_15[1U] = 0U;
        vlSelf->__PVT__ram_15[2U] = 0U;
        vlSelf->__PVT__ram_15[3U] = 0U;
        vlSelf->__PVT__ram_16[0U] = 0U;
        vlSelf->__PVT__ram_16[1U] = 0U;
        vlSelf->__PVT__ram_16[2U] = 0U;
        vlSelf->__PVT__ram_16[3U] = 0U;
        vlSelf->__PVT__ram_17[0U] = 0U;
        vlSelf->__PVT__ram_17[1U] = 0U;
        vlSelf->__PVT__ram_17[2U] = 0U;
        vlSelf->__PVT__ram_17[3U] = 0U;
        vlSelf->__PVT__ram_18[0U] = 0U;
        vlSelf->__PVT__ram_18[1U] = 0U;
        vlSelf->__PVT__ram_18[2U] = 0U;
        vlSelf->__PVT__ram_18[3U] = 0U;
        vlSelf->__PVT__ram_19[0U] = 0U;
        vlSelf->__PVT__ram_19[1U] = 0U;
        vlSelf->__PVT__ram_19[2U] = 0U;
        vlSelf->__PVT__ram_19[3U] = 0U;
        vlSelf->__PVT__ram_20[0U] = 0U;
        vlSelf->__PVT__ram_20[1U] = 0U;
        vlSelf->__PVT__ram_20[2U] = 0U;
        vlSelf->__PVT__ram_20[3U] = 0U;
        vlSelf->__PVT__ram_21[0U] = 0U;
        vlSelf->__PVT__ram_21[1U] = 0U;
        vlSelf->__PVT__ram_21[2U] = 0U;
        vlSelf->__PVT__ram_21[3U] = 0U;
        vlSelf->__PVT__ram_22[0U] = 0U;
        vlSelf->__PVT__ram_22[1U] = 0U;
        vlSelf->__PVT__ram_22[2U] = 0U;
        vlSelf->__PVT__ram_22[3U] = 0U;
        vlSelf->__PVT__ram_23[0U] = 0U;
        vlSelf->__PVT__ram_23[1U] = 0U;
        vlSelf->__PVT__ram_23[2U] = 0U;
        vlSelf->__PVT__ram_23[3U] = 0U;
        vlSelf->__PVT__ram_24[0U] = 0U;
        vlSelf->__PVT__ram_24[1U] = 0U;
        vlSelf->__PVT__ram_24[2U] = 0U;
        vlSelf->__PVT__ram_24[3U] = 0U;
        vlSelf->__PVT__ram_25[0U] = 0U;
        vlSelf->__PVT__ram_25[1U] = 0U;
        vlSelf->__PVT__ram_25[2U] = 0U;
        vlSelf->__PVT__ram_25[3U] = 0U;
        vlSelf->__PVT__ram_26[0U] = 0U;
        vlSelf->__PVT__ram_26[1U] = 0U;
        vlSelf->__PVT__ram_26[2U] = 0U;
        vlSelf->__PVT__ram_26[3U] = 0U;
        vlSelf->__PVT__ram_27[0U] = 0U;
        vlSelf->__PVT__ram_27[1U] = 0U;
        vlSelf->__PVT__ram_27[2U] = 0U;
        vlSelf->__PVT__ram_27[3U] = 0U;
        vlSelf->__PVT__ram_28[0U] = 0U;
        vlSelf->__PVT__ram_28[1U] = 0U;
        vlSelf->__PVT__ram_28[2U] = 0U;
        vlSelf->__PVT__ram_28[3U] = 0U;
        vlSelf->__PVT__ram_29[0U] = 0U;
        vlSelf->__PVT__ram_29[1U] = 0U;
        vlSelf->__PVT__ram_29[2U] = 0U;
        vlSelf->__PVT__ram_29[3U] = 0U;
        vlSelf->__PVT__ram_30[0U] = 0U;
        vlSelf->__PVT__ram_30[1U] = 0U;
        vlSelf->__PVT__ram_30[2U] = 0U;
        vlSelf->__PVT__ram_30[3U] = 0U;
        vlSelf->__PVT__ram_31[0U] = 0U;
        vlSelf->__PVT__ram_31[1U] = 0U;
        vlSelf->__PVT__ram_31[2U] = 0U;
        vlSelf->__PVT__ram_31[3U] = 0U;
        vlSelf->__PVT__ram_32[0U] = 0U;
        vlSelf->__PVT__ram_32[1U] = 0U;
        vlSelf->__PVT__ram_32[2U] = 0U;
        vlSelf->__PVT__ram_32[3U] = 0U;
        vlSelf->__PVT__ram_33[0U] = 0U;
        vlSelf->__PVT__ram_33[1U] = 0U;
        vlSelf->__PVT__ram_33[2U] = 0U;
        vlSelf->__PVT__ram_33[3U] = 0U;
        vlSelf->__PVT__ram_34[0U] = 0U;
        vlSelf->__PVT__ram_34[1U] = 0U;
        vlSelf->__PVT__ram_34[2U] = 0U;
        vlSelf->__PVT__ram_34[3U] = 0U;
        vlSelf->__PVT__ram_35[0U] = 0U;
        vlSelf->__PVT__ram_35[1U] = 0U;
        vlSelf->__PVT__ram_35[2U] = 0U;
        vlSelf->__PVT__ram_35[3U] = 0U;
        vlSelf->__PVT__ram_36[0U] = 0U;
        vlSelf->__PVT__ram_36[1U] = 0U;
        vlSelf->__PVT__ram_36[2U] = 0U;
        vlSelf->__PVT__ram_36[3U] = 0U;
        vlSelf->__PVT__ram_37[0U] = 0U;
        vlSelf->__PVT__ram_37[1U] = 0U;
        vlSelf->__PVT__ram_37[2U] = 0U;
        vlSelf->__PVT__ram_37[3U] = 0U;
        vlSelf->__PVT__ram_38[0U] = 0U;
        vlSelf->__PVT__ram_38[1U] = 0U;
        vlSelf->__PVT__ram_38[2U] = 0U;
        vlSelf->__PVT__ram_38[3U] = 0U;
        vlSelf->__PVT__ram_39[0U] = 0U;
        vlSelf->__PVT__ram_39[1U] = 0U;
        vlSelf->__PVT__ram_39[2U] = 0U;
        vlSelf->__PVT__ram_39[3U] = 0U;
        vlSelf->__PVT__ram_40[0U] = 0U;
        vlSelf->__PVT__ram_40[1U] = 0U;
        vlSelf->__PVT__ram_40[2U] = 0U;
        vlSelf->__PVT__ram_40[3U] = 0U;
        vlSelf->__PVT__ram_41[0U] = 0U;
        vlSelf->__PVT__ram_41[1U] = 0U;
        vlSelf->__PVT__ram_41[2U] = 0U;
        vlSelf->__PVT__ram_41[3U] = 0U;
        vlSelf->__PVT__ram_42[0U] = 0U;
        vlSelf->__PVT__ram_42[1U] = 0U;
        vlSelf->__PVT__ram_42[2U] = 0U;
        vlSelf->__PVT__ram_42[3U] = 0U;
        vlSelf->__PVT__ram_43[0U] = 0U;
        vlSelf->__PVT__ram_43[1U] = 0U;
        vlSelf->__PVT__ram_43[2U] = 0U;
        vlSelf->__PVT__ram_43[3U] = 0U;
        vlSelf->__PVT__ram_44[0U] = 0U;
        vlSelf->__PVT__ram_44[1U] = 0U;
        vlSelf->__PVT__ram_44[2U] = 0U;
        vlSelf->__PVT__ram_44[3U] = 0U;
        vlSelf->__PVT__ram_45[0U] = 0U;
        vlSelf->__PVT__ram_45[1U] = 0U;
        vlSelf->__PVT__ram_45[2U] = 0U;
        vlSelf->__PVT__ram_45[3U] = 0U;
        vlSelf->__PVT__ram_46[0U] = 0U;
        vlSelf->__PVT__ram_46[1U] = 0U;
        vlSelf->__PVT__ram_46[2U] = 0U;
        vlSelf->__PVT__ram_46[3U] = 0U;
        vlSelf->__PVT__ram_47[0U] = 0U;
        vlSelf->__PVT__ram_47[1U] = 0U;
        vlSelf->__PVT__ram_47[2U] = 0U;
        vlSelf->__PVT__ram_47[3U] = 0U;
        vlSelf->__PVT__ram_48[0U] = 0U;
        vlSelf->__PVT__ram_48[1U] = 0U;
        vlSelf->__PVT__ram_48[2U] = 0U;
        vlSelf->__PVT__ram_48[3U] = 0U;
        vlSelf->__PVT__ram_49[0U] = 0U;
        vlSelf->__PVT__ram_49[1U] = 0U;
        vlSelf->__PVT__ram_49[2U] = 0U;
        vlSelf->__PVT__ram_49[3U] = 0U;
        vlSelf->__PVT__ram_50[0U] = 0U;
        vlSelf->__PVT__ram_50[1U] = 0U;
        vlSelf->__PVT__ram_50[2U] = 0U;
        vlSelf->__PVT__ram_50[3U] = 0U;
        vlSelf->__PVT__ram_51[0U] = 0U;
        vlSelf->__PVT__ram_51[1U] = 0U;
        vlSelf->__PVT__ram_51[2U] = 0U;
        vlSelf->__PVT__ram_51[3U] = 0U;
        vlSelf->__PVT__ram_52[0U] = 0U;
        vlSelf->__PVT__ram_52[1U] = 0U;
        vlSelf->__PVT__ram_52[2U] = 0U;
        vlSelf->__PVT__ram_52[3U] = 0U;
        vlSelf->__PVT__ram_53[0U] = 0U;
        vlSelf->__PVT__ram_53[1U] = 0U;
        vlSelf->__PVT__ram_53[2U] = 0U;
        vlSelf->__PVT__ram_53[3U] = 0U;
        vlSelf->__PVT__ram_54[0U] = 0U;
        vlSelf->__PVT__ram_54[1U] = 0U;
        vlSelf->__PVT__ram_54[2U] = 0U;
        vlSelf->__PVT__ram_54[3U] = 0U;
        vlSelf->__PVT__ram_55[0U] = 0U;
        vlSelf->__PVT__ram_55[1U] = 0U;
        vlSelf->__PVT__ram_55[2U] = 0U;
        vlSelf->__PVT__ram_55[3U] = 0U;
        vlSelf->__PVT__ram_56[0U] = 0U;
        vlSelf->__PVT__ram_56[1U] = 0U;
        vlSelf->__PVT__ram_56[2U] = 0U;
        vlSelf->__PVT__ram_56[3U] = 0U;
        vlSelf->__PVT__ram_57[0U] = 0U;
        vlSelf->__PVT__ram_57[1U] = 0U;
        vlSelf->__PVT__ram_57[2U] = 0U;
        vlSelf->__PVT__ram_57[3U] = 0U;
        vlSelf->__PVT__ram_58[0U] = 0U;
        vlSelf->__PVT__ram_58[1U] = 0U;
        vlSelf->__PVT__ram_58[2U] = 0U;
        vlSelf->__PVT__ram_58[3U] = 0U;
        vlSelf->__PVT__ram_59[0U] = 0U;
        vlSelf->__PVT__ram_59[1U] = 0U;
        vlSelf->__PVT__ram_59[2U] = 0U;
        vlSelf->__PVT__ram_59[3U] = 0U;
        vlSelf->__PVT__ram_60[0U] = 0U;
        vlSelf->__PVT__ram_60[1U] = 0U;
        vlSelf->__PVT__ram_60[2U] = 0U;
        vlSelf->__PVT__ram_60[3U] = 0U;
        vlSelf->__PVT__ram_61[0U] = 0U;
        vlSelf->__PVT__ram_61[1U] = 0U;
        vlSelf->__PVT__ram_61[2U] = 0U;
        vlSelf->__PVT__ram_61[3U] = 0U;
        vlSelf->__PVT__ram_62[0U] = 0U;
        vlSelf->__PVT__ram_62[1U] = 0U;
        vlSelf->__PVT__ram_62[2U] = 0U;
        vlSelf->__PVT__ram_62[3U] = 0U;
        vlSelf->__PVT__ram_63[0U] = 0U;
        vlSelf->__PVT__ram_63[1U] = 0U;
        vlSelf->__PVT__ram_63[2U] = 0U;
        vlSelf->__PVT__ram_63[3U] = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___T = (1U & 
                                               ((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__Vcellinp__CacheDataRam__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__9(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__9\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT___T_12)) 
         & (IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__Vcellinp__CacheDataRam__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__13(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam__13\n"); );
    // Variables
    VlWide<64>/*2047:0*/ __Vtemp79;
    VlWide<68>/*2175:0*/ __Vtemp80;
    VlWide<72>/*2303:0*/ __Vtemp81;
    VlWide<76>/*2431:0*/ __Vtemp82;
    VlWide<80>/*2559:0*/ __Vtemp83;
    VlWide<84>/*2687:0*/ __Vtemp84;
    VlWide<88>/*2815:0*/ __Vtemp85;
    VlWide<92>/*2943:0*/ __Vtemp86;
    VlWide<96>/*3071:0*/ __Vtemp87;
    VlWide<100>/*3199:0*/ __Vtemp88;
    VlWide<104>/*3327:0*/ __Vtemp89;
    VlWide<108>/*3455:0*/ __Vtemp90;
    VlWide<112>/*3583:0*/ __Vtemp91;
    VlWide<116>/*3711:0*/ __Vtemp92;
    VlWide<120>/*3839:0*/ __Vtemp93;
    VlWide<124>/*3967:0*/ __Vtemp94;
    VlWide<128>/*4095:0*/ __Vtemp95;
    VlWide<132>/*4223:0*/ __Vtemp96;
    VlWide<136>/*4351:0*/ __Vtemp97;
    VlWide<140>/*4479:0*/ __Vtemp98;
    VlWide<144>/*4607:0*/ __Vtemp99;
    VlWide<148>/*4735:0*/ __Vtemp100;
    VlWide<152>/*4863:0*/ __Vtemp101;
    VlWide<156>/*4991:0*/ __Vtemp102;
    VlWide<160>/*5119:0*/ __Vtemp103;
    VlWide<164>/*5247:0*/ __Vtemp104;
    VlWide<168>/*5375:0*/ __Vtemp105;
    VlWide<172>/*5503:0*/ __Vtemp106;
    VlWide<176>/*5631:0*/ __Vtemp107;
    VlWide<180>/*5759:0*/ __Vtemp108;
    VlWide<184>/*5887:0*/ __Vtemp109;
    VlWide<188>/*6015:0*/ __Vtemp110;
    VlWide<192>/*6143:0*/ __Vtemp111;
    VlWide<196>/*6271:0*/ __Vtemp112;
    VlWide<200>/*6399:0*/ __Vtemp113;
    VlWide<204>/*6527:0*/ __Vtemp114;
    VlWide<208>/*6655:0*/ __Vtemp115;
    VlWide<212>/*6783:0*/ __Vtemp116;
    VlWide<216>/*6911:0*/ __Vtemp117;
    VlWide<220>/*7039:0*/ __Vtemp118;
    VlWide<224>/*7167:0*/ __Vtemp119;
    VlWide<228>/*7295:0*/ __Vtemp120;
    VlWide<232>/*7423:0*/ __Vtemp121;
    VlWide<236>/*7551:0*/ __Vtemp122;
    VlWide<240>/*7679:0*/ __Vtemp123;
    VlWide<244>/*7807:0*/ __Vtemp124;
    VlWide<248>/*7935:0*/ __Vtemp125;
    VlWide<252>/*8063:0*/ __Vtemp126;
    VlWide<256>/*8191:0*/ __Vtemp127;
    // Body
    __Vtemp79[0U] = vlSelf->__PVT__ram_48[0U];
    __Vtemp79[1U] = vlSelf->__PVT__ram_48[1U];
    __Vtemp79[2U] = vlSelf->__PVT__ram_48[2U];
    __Vtemp79[3U] = vlSelf->__PVT__ram_48[3U];
    __Vtemp79[4U] = vlSelf->__PVT__ram_49[0U];
    __Vtemp79[5U] = vlSelf->__PVT__ram_49[1U];
    __Vtemp79[6U] = vlSelf->__PVT__ram_49[2U];
    __Vtemp79[7U] = vlSelf->__PVT__ram_49[3U];
    __Vtemp79[8U] = vlSelf->__PVT__ram_50[0U];
    __Vtemp79[9U] = vlSelf->__PVT__ram_50[1U];
    __Vtemp79[0xaU] = vlSelf->__PVT__ram_50[2U];
    __Vtemp79[0xbU] = vlSelf->__PVT__ram_50[3U];
    __Vtemp79[0xcU] = vlSelf->__PVT__ram_51[0U];
    __Vtemp79[0xdU] = vlSelf->__PVT__ram_51[1U];
    __Vtemp79[0xeU] = vlSelf->__PVT__ram_51[2U];
    __Vtemp79[0xfU] = vlSelf->__PVT__ram_51[3U];
    __Vtemp79[0x10U] = vlSelf->__PVT__ram_52[0U];
    __Vtemp79[0x11U] = vlSelf->__PVT__ram_52[1U];
    __Vtemp79[0x12U] = vlSelf->__PVT__ram_52[2U];
    __Vtemp79[0x13U] = vlSelf->__PVT__ram_52[3U];
    __Vtemp79[0x14U] = vlSelf->__PVT__ram_53[0U];
    __Vtemp79[0x15U] = vlSelf->__PVT__ram_53[1U];
    __Vtemp79[0x16U] = vlSelf->__PVT__ram_53[2U];
    __Vtemp79[0x17U] = vlSelf->__PVT__ram_53[3U];
    __Vtemp79[0x18U] = vlSelf->__PVT__ram_54[0U];
    __Vtemp79[0x19U] = vlSelf->__PVT__ram_54[1U];
    __Vtemp79[0x1aU] = vlSelf->__PVT__ram_54[2U];
    __Vtemp79[0x1bU] = vlSelf->__PVT__ram_54[3U];
    __Vtemp79[0x1cU] = vlSelf->__PVT__ram_55[0U];
    __Vtemp79[0x1dU] = vlSelf->__PVT__ram_55[1U];
    __Vtemp79[0x1eU] = vlSelf->__PVT__ram_55[2U];
    __Vtemp79[0x1fU] = vlSelf->__PVT__ram_55[3U];
    __Vtemp79[0x20U] = vlSelf->__PVT__ram_56[0U];
    __Vtemp79[0x21U] = vlSelf->__PVT__ram_56[1U];
    __Vtemp79[0x22U] = vlSelf->__PVT__ram_56[2U];
    __Vtemp79[0x23U] = vlSelf->__PVT__ram_56[3U];
    __Vtemp79[0x24U] = vlSelf->__PVT__ram_57[0U];
    __Vtemp79[0x25U] = vlSelf->__PVT__ram_57[1U];
    __Vtemp79[0x26U] = vlSelf->__PVT__ram_57[2U];
    __Vtemp79[0x27U] = vlSelf->__PVT__ram_57[3U];
    __Vtemp79[0x28U] = vlSelf->__PVT__ram_58[0U];
    __Vtemp79[0x29U] = vlSelf->__PVT__ram_58[1U];
    __Vtemp79[0x2aU] = vlSelf->__PVT__ram_58[2U];
    __Vtemp79[0x2bU] = vlSelf->__PVT__ram_58[3U];
    __Vtemp79[0x2cU] = vlSelf->__PVT__ram_59[0U];
    __Vtemp79[0x2dU] = vlSelf->__PVT__ram_59[1U];
    __Vtemp79[0x2eU] = vlSelf->__PVT__ram_59[2U];
    __Vtemp79[0x2fU] = vlSelf->__PVT__ram_59[3U];
    __Vtemp79[0x30U] = vlSelf->__PVT__ram_60[0U];
    __Vtemp79[0x31U] = vlSelf->__PVT__ram_60[1U];
    __Vtemp79[0x32U] = vlSelf->__PVT__ram_60[2U];
    __Vtemp79[0x33U] = vlSelf->__PVT__ram_60[3U];
    __Vtemp79[0x34U] = vlSelf->__PVT__ram_61[0U];
    __Vtemp79[0x35U] = vlSelf->__PVT__ram_61[1U];
    __Vtemp79[0x36U] = vlSelf->__PVT__ram_61[2U];
    __Vtemp79[0x37U] = vlSelf->__PVT__ram_61[3U];
    __Vtemp79[0x38U] = vlSelf->__PVT__ram_62[0U];
    __Vtemp79[0x39U] = vlSelf->__PVT__ram_62[1U];
    __Vtemp79[0x3aU] = vlSelf->__PVT__ram_62[2U];
    __Vtemp79[0x3bU] = vlSelf->__PVT__ram_62[3U];
    __Vtemp79[0x3cU] = vlSelf->__PVT__ram_63[0U];
    __Vtemp79[0x3dU] = vlSelf->__PVT__ram_63[1U];
    __Vtemp79[0x3eU] = vlSelf->__PVT__ram_63[2U];
    __Vtemp79[0x3fU] = vlSelf->__PVT__ram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp80, __Vtemp79, vlSelf->__PVT__ram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp81, __Vtemp80, vlSelf->__PVT__ram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp82, __Vtemp81, vlSelf->__PVT__ram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp83, __Vtemp82, vlSelf->__PVT__ram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp84, __Vtemp83, vlSelf->__PVT__ram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp85, __Vtemp84, vlSelf->__PVT__ram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp86, __Vtemp85, vlSelf->__PVT__ram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp87, __Vtemp86, vlSelf->__PVT__ram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp88, __Vtemp87, vlSelf->__PVT__ram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp89, __Vtemp88, vlSelf->__PVT__ram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp90, __Vtemp89, vlSelf->__PVT__ram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp91, __Vtemp90, vlSelf->__PVT__ram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp92, __Vtemp91, vlSelf->__PVT__ram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp93, __Vtemp92, vlSelf->__PVT__ram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp94, __Vtemp93, vlSelf->__PVT__ram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp95, __Vtemp94, vlSelf->__PVT__ram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp96, __Vtemp95, vlSelf->__PVT__ram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp97, __Vtemp96, vlSelf->__PVT__ram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp98, __Vtemp97, vlSelf->__PVT__ram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp99, __Vtemp98, vlSelf->__PVT__ram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp100, __Vtemp99, vlSelf->__PVT__ram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp101, __Vtemp100, vlSelf->__PVT__ram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp102, __Vtemp101, vlSelf->__PVT__ram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp103, __Vtemp102, vlSelf->__PVT__ram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp104, __Vtemp103, vlSelf->__PVT__ram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp105, __Vtemp104, vlSelf->__PVT__ram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp106, __Vtemp105, vlSelf->__PVT__ram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp107, __Vtemp106, vlSelf->__PVT__ram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp108, __Vtemp107, vlSelf->__PVT__ram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp109, __Vtemp108, vlSelf->__PVT__ram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp110, __Vtemp109, vlSelf->__PVT__ram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp111, __Vtemp110, vlSelf->__PVT__ram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp112, __Vtemp111, vlSelf->__PVT__ram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp113, __Vtemp112, vlSelf->__PVT__ram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp114, __Vtemp113, vlSelf->__PVT__ram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp115, __Vtemp114, vlSelf->__PVT__ram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp116, __Vtemp115, vlSelf->__PVT__ram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp117, __Vtemp116, vlSelf->__PVT__ram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp118, __Vtemp117, vlSelf->__PVT__ram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp119, __Vtemp118, vlSelf->__PVT__ram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp120, __Vtemp119, vlSelf->__PVT__ram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp121, __Vtemp120, vlSelf->__PVT__ram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp122, __Vtemp121, vlSelf->__PVT__ram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp123, __Vtemp122, vlSelf->__PVT__ram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp124, __Vtemp123, vlSelf->__PVT__ram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp125, __Vtemp124, vlSelf->__PVT__ram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp126, __Vtemp125, vlSelf->__PVT__ram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp127, __Vtemp126, vlSelf->__PVT__ram_0);
    vlSelf->__PVT___GEN_1[0U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp127[
                                           ((IData)(1U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp127[(0xfcU 
                                                & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                   << 2U))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[1U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp127[
                                           ((IData)(2U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp127[((IData)(1U) 
                                                + (0xfcU 
                                                   & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                      << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[2U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp127[
                                           ((IData)(3U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp127[((IData)(2U) 
                                                + (0xfcU 
                                                   & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                      << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                 << 7U))));
    vlSelf->__PVT___GEN_1[3U] = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                   << 7U)))
                                   ? 0U : (__Vtemp127[
                                           ((IData)(4U) 
                                            + (0xfcU 
                                               & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                  << 2U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                     << 7U))))) 
                                 | (__Vtemp127[((IData)(3U) 
                                                + (0xfcU 
                                                   & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                      << 2U)))] 
                                    >> (0x1fU & ((IData)(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__data_addr) 
                                                 << 7U))));
}

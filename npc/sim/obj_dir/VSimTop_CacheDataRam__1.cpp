// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop_CacheDataRam.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1__6(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1__6\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
         & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
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
                                               ((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2__7(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2__7\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
         & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
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
                                               ((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

VL_INLINE_OPT void VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3__8(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___sequent__TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3__8\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
         & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN))) {
        vlSelf->__PVT__rdata[0U] = vlSelf->__PVT___GEN_1[0U];
        vlSelf->__PVT__rdata[1U] = vlSelf->__PVT___GEN_1[1U];
        vlSelf->__PVT__rdata[2U] = vlSelf->__PVT___GEN_1[2U];
        vlSelf->__PVT__rdata[3U] = vlSelf->__PVT___GEN_1[3U];
    }
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
                                               ((~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12)) 
                                                & (~ (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_0[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_0[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_0[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_0[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (1U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_1[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_1[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_1[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_1[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (2U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_2[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_2[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_2[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_2[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (3U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_3[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_3[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_3[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_3[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (4U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_4[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_4[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_4[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_4[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (5U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_5[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_5[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_5[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_5[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (6U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_6[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_6[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_6[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_6[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (7U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_7[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_7[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_7[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_7[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (8U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_8[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_8[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_8[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_8[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (9U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_9[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_9[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_9[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_9[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xaU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_10[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_10[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_10[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_10[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xbU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_11[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_11[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_11[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_11[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xcU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_12[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_12[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_12[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_12[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xdU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_13[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_13[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_13[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_13[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xeU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_14[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_14[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_14[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_14[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0xfU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_15[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_15[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_15[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_15[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x10U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_16[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_16[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_16[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_16[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x11U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_17[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_17[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_17[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_17[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x12U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_18[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_18[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_18[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_18[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x13U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_19[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_19[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_19[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_19[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x14U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_20[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_20[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_20[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_20[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x15U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_21[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_21[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_21[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_21[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x16U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_22[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_22[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_22[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_22[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x17U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_23[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_23[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_23[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_23[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x18U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_24[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_24[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_24[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_24[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x19U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_25[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_25[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_25[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_25[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_26[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_26[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_26[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_26[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_27[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_27[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_27[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_27[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_28[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_28[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_28[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_28[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_29[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_29[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_29[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_29[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_30[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_30[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_30[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_30[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x1fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_31[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_31[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_31[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_31[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x20U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_32[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_32[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_32[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_32[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x21U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_33[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_33[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_33[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_33[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x22U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_34[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_34[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_34[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_34[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x23U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_35[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_35[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_35[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_35[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x24U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_36[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_36[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_36[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_36[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x25U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_37[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_37[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_37[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_37[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x26U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_38[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_38[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_38[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_38[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x27U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_39[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_39[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_39[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_39[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x28U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_40[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_40[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_40[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_40[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x29U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_41[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_41[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_41[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_41[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_42[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_42[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_42[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_42[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_43[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_43[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_43[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_43[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_44[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_44[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_44[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_44[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_45[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_45[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_45[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_45[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_46[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_46[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_46[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_46[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x2fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_47[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_47[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_47[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_47[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x30U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_48[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_48[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_48[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_48[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x31U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_49[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_49[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_49[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_49[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x32U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_50[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_50[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_50[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_50[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x33U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_51[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_51[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_51[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_51[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x34U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_52[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_52[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_52[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_52[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x35U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_53[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_53[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_53[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_53[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x36U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_54[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_54[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_54[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_54[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x37U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_55[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_55[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_55[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_55[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x38U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_56[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_56[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_56[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_56[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x39U == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_57[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_57[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_57[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_57[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3aU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_58[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_58[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_58[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_58[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3bU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_59[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_59[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_59[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_59[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3cU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_60[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_60[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_60[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_60[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3dU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_61[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_61[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_61[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_61[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3eU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_62[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_62[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_62[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_62[3U] = vlSelf->__PVT___GEN_1[3U];
        }
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT___T) 
             & (0x3fU == (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr)))) {
            vlSelf->__PVT__ram_63[0U] = vlSelf->__PVT___GEN_1[0U];
            vlSelf->__PVT__ram_63[1U] = vlSelf->__PVT___GEN_1[1U];
            vlSelf->__PVT__ram_63[2U] = vlSelf->__PVT___GEN_1[2U];
            vlSelf->__PVT__ram_63[3U] = vlSelf->__PVT___GEN_1[3U];
        }
    }
}

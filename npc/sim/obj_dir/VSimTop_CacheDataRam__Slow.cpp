// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop_CacheDataRam.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop_CacheDataRam___ctor_var_reset(VSimTop_CacheDataRam* vlSelf);

VSimTop_CacheDataRam::VSimTop_CacheDataRam(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop_CacheDataRam___ctor_var_reset(this);
}

void VSimTop_CacheDataRam::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop_CacheDataRam::~VSimTop_CacheDataRam() {
}

void VSimTop_CacheDataRam___ctor_var_reset(VSimTop_CacheDataRam* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_CacheDataRam___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_CEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_WEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_A = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->__PVT__io_Q);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_0);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_3);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_4);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_5);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_6);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_7);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_8);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_9);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_10);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_11);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_12);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_13);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_14);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_15);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_16);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_17);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_18);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_19);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_20);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_21);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_22);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_23);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_24);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_25);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_26);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_27);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_28);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_29);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_30);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_31);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_32);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_33);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_34);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_35);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_36);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_37);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_38);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_39);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_40);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_41);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_42);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_43);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_44);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_45);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_46);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_47);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_48);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_49);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_50);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_51);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_52);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_53);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_54);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_55);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_56);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_57);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_58);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_59);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_60);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_61);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_62);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_63);
    VL_RAND_RESET_W(128, vlSelf->__PVT__rdata);
    VL_RAND_RESET_W(128, vlSelf->__PVT___GEN_1);
    vlSelf->__PVT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
}

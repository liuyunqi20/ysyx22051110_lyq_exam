// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP_CACHEDATARAM_H_
#define VERILATED_VSIMTOP_CACHEDATARAM_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedVcd;


//----------

VL_MODULE(VSimTop_CacheDataRam) {
  public:

    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_CEN,0,0);
    VL_IN8(__PVT__io_WEN,0,0);
    VL_IN8(__PVT__io_A,5,0);
    VL_OUTW(__PVT__io_Q,127,0,4);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__unnamedblk1__DOT___T;
        VlWide<4>/*127:0*/ __PVT__ram_0;
        VlWide<4>/*127:0*/ __PVT__ram_1;
        VlWide<4>/*127:0*/ __PVT__ram_2;
        VlWide<4>/*127:0*/ __PVT__ram_3;
        VlWide<4>/*127:0*/ __PVT__ram_4;
        VlWide<4>/*127:0*/ __PVT__ram_5;
        VlWide<4>/*127:0*/ __PVT__ram_6;
        VlWide<4>/*127:0*/ __PVT__ram_7;
        VlWide<4>/*127:0*/ __PVT__ram_8;
        VlWide<4>/*127:0*/ __PVT__ram_9;
        VlWide<4>/*127:0*/ __PVT__ram_10;
        VlWide<4>/*127:0*/ __PVT__ram_11;
        VlWide<4>/*127:0*/ __PVT__ram_12;
        VlWide<4>/*127:0*/ __PVT__ram_13;
        VlWide<4>/*127:0*/ __PVT__ram_14;
        VlWide<4>/*127:0*/ __PVT__ram_15;
        VlWide<4>/*127:0*/ __PVT__ram_16;
        VlWide<4>/*127:0*/ __PVT__ram_17;
        VlWide<4>/*127:0*/ __PVT__ram_18;
        VlWide<4>/*127:0*/ __PVT__ram_19;
        VlWide<4>/*127:0*/ __PVT__ram_20;
        VlWide<4>/*127:0*/ __PVT__ram_21;
        VlWide<4>/*127:0*/ __PVT__ram_22;
        VlWide<4>/*127:0*/ __PVT__ram_23;
        VlWide<4>/*127:0*/ __PVT__ram_24;
        VlWide<4>/*127:0*/ __PVT__ram_25;
        VlWide<4>/*127:0*/ __PVT__ram_26;
        VlWide<4>/*127:0*/ __PVT__ram_27;
        VlWide<4>/*127:0*/ __PVT__ram_28;
        VlWide<4>/*127:0*/ __PVT__ram_29;
        VlWide<4>/*127:0*/ __PVT__ram_30;
        VlWide<4>/*127:0*/ __PVT__ram_31;
        VlWide<4>/*127:0*/ __PVT__ram_32;
        VlWide<4>/*127:0*/ __PVT__ram_33;
        VlWide<4>/*127:0*/ __PVT__ram_34;
        VlWide<4>/*127:0*/ __PVT__ram_35;
        VlWide<4>/*127:0*/ __PVT__ram_36;
        VlWide<4>/*127:0*/ __PVT__ram_37;
        VlWide<4>/*127:0*/ __PVT__ram_38;
        VlWide<4>/*127:0*/ __PVT__ram_39;
        VlWide<4>/*127:0*/ __PVT__ram_40;
        VlWide<4>/*127:0*/ __PVT__ram_41;
        VlWide<4>/*127:0*/ __PVT__ram_42;
        VlWide<4>/*127:0*/ __PVT__ram_43;
        VlWide<4>/*127:0*/ __PVT__ram_44;
        VlWide<4>/*127:0*/ __PVT__ram_45;
        VlWide<4>/*127:0*/ __PVT__ram_46;
        VlWide<4>/*127:0*/ __PVT__ram_47;
        VlWide<4>/*127:0*/ __PVT__ram_48;
        VlWide<4>/*127:0*/ __PVT__ram_49;
        VlWide<4>/*127:0*/ __PVT__ram_50;
        VlWide<4>/*127:0*/ __PVT__ram_51;
        VlWide<4>/*127:0*/ __PVT__ram_52;
        VlWide<4>/*127:0*/ __PVT__ram_53;
        VlWide<4>/*127:0*/ __PVT__ram_54;
        VlWide<4>/*127:0*/ __PVT__ram_55;
        VlWide<4>/*127:0*/ __PVT__ram_56;
        VlWide<4>/*127:0*/ __PVT__ram_57;
        VlWide<4>/*127:0*/ __PVT__ram_58;
        VlWide<4>/*127:0*/ __PVT__ram_59;
        VlWide<4>/*127:0*/ __PVT__ram_60;
        VlWide<4>/*127:0*/ __PVT__ram_61;
        VlWide<4>/*127:0*/ __PVT__ram_62;
    };
    struct {
        VlWide<4>/*127:0*/ __PVT__ram_63;
        VlWide<4>/*127:0*/ __PVT__rdata;
        VlWide<4>/*127:0*/ __PVT___GEN_1;
    };

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop_CacheDataRam);  ///< Copying not allowed
  public:
    VSimTop_CacheDataRam(const char* name);
    ~VSimTop_CacheDataRam();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

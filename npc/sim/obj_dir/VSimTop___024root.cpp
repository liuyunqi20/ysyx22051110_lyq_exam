// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_inst_ptr(&a__Vopenarray);
}

void VSimTop___024root____Vdpiexp_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__catch_ebreak_TOP(VSimTop__Syms* __restrict vlSymsp, IData/*31:0*/ &i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiexp_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__catch_ebreak_TOP\n"); );
    // Variables
    // Body
    i = (((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(
                                                     (0x73U 
                                                      == 
                                                      (0xfffffU 
                                                       & vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                             & (1U 
                                                == 
                                                (vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                 >> 0x14U))))
          ? 1U : 0U);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void cpu_dmem_read(svBit en, svBit wr, long long raddr, long long* rdata);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP\n"); );
    // Body
    svBit en__Vcvt;
    for (size_t en__Vidx = 0; en__Vidx < 1; ++en__Vidx) en__Vcvt = en;
    svBit wr__Vcvt;
    for (size_t wr__Vidx = 0; wr__Vidx < 1; ++wr__Vidx) wr__Vcvt = wr;
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    cpu_dmem_read(en__Vcvt, wr__Vcvt, raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void cpu_dmem_write(svBit en, svBit wr, long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP\n"); );
    // Body
    svBit en__Vcvt;
    for (size_t en__Vidx = 0; en__Vidx < 1; ++en__Vidx) en__Vcvt = en;
    svBit wr__Vcvt;
    for (size_t wr__Vidx = 0; wr__Vidx < 1; ++wr__Vidx) wr__Vcvt = wr;
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    cpu_dmem_write(en__Vcvt, wr__Vcvt, waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175;
    CData/*5:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
    CData/*5:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
    CData/*5:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    CData/*2:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
    CData/*2:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
    CData/*7:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    SData/*9:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN;
    SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0;
    IData/*16:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    IData/*22:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    // Body
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H = 1U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H = 1U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H 
            = ((0xeU & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                        << 1U)) | (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                                         >> 3U)));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H 
            = ((0xeU & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H) 
                        << 1U)) | (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H) 
                                         >> 3U)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr = 0ULL;
    } else if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
            = vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid)))) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid;
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din) 
                                         | ((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r)) 
                                            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying))));
    __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din;
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U];
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U];
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf = 0ULL;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2)));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_4 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
            = ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_4)) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)));
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_4) 
                      | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7)))))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
            = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                              >> 2U))) ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                  >> 0x20U))
                : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
                             >> 3U)));
    }
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate 
        = ((IData)(vlSelf->reset) ? 1U : (((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                            ? ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T)
                                                ? 2U
                                                : 1U)
                                            : 0U) | 
                                          ((2U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                            ? (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3) 
                                                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3))
                                                ? 1U
                                                : 2U)
                                            : 0U)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                             >> 3U)));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din 
        = ((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
             >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din) 
                                         | ((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r)) 
                                            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying))));
    __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt) 
                                         | ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T) 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3))) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                          & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt) 
                                         | ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T) 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid))) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate = 1U;
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr = 0ULL;
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx = 0U;
    } else {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9 
            = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
               & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10 
            = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
               & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate 
            = ((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))
                  ? ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9)
                      ? 2U : 1U) : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))
                                           ? (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10) 
                                               & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                                   ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                                   : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3)))
                                               ? 4U
                                               : 2U)
                                           : 0U)) | 
               ((4U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))
                 ? ((1U & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                >> 3U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                          >> 3U)) & 
                           ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                            >> 2U))) ? 1U : 4U) : 0U));
        if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9) {
            vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr 
                = vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr;
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
                = (1U & (IData)((vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr 
                                 >> 3U)));
        } else if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10) {
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
                = (1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r = 0ULL;
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt = 0U;
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx = 0U;
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok = 0U;
    } else {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive 
            = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8) 
               & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
        if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T) {
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt 
                = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive;
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx 
                = (1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive)
                          ? ((IData)((vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                      >> 3U)) - (IData)(1U))
                          : (IData)((vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                     >> 3U))));
        } else if (((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T)) 
                    & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive))) {
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt)));
            __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx 
                = (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx) 
                    != (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen)) 
                   & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx) 
                      - (IData)(1U)));
        }
        if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive) {
            vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r 
                = vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata;
        }
        __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok 
            = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive) 
               | ((~ ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3) 
                      & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive)))) 
                  & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state = 1U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_3 
            = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_4 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_3));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state 
            = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T)
                       ? 2U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_3)
                                ? 4U : 1U)) : 0U) | 
                 ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state))
                   ? (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T) 
                       & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3))
                       ? 1U : 2U) : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state))
                                             ? (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1) 
                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))
                                                 ? 8U
                                                 : 4U)
                                             : 0U)) 
               | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)
                       ? 1U : 8U) : 0U));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_4) {
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U] = 0U;
            } else {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U] 
                    = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U] 
                    = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                               >> 0x20U));
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U] 
                    = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U] 
                    = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                               >> 0x20U));
            }
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r 
                = (vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
                   >> 4U);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                    ? 0U : 0xffU);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx 
                = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
                                 >> 3U)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)));
        } else {
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1) {
                __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx 
                    = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx) 
                             - (IData)(1U)));
            }
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1) 
                          | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)))))) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r = 0ULL;
            }
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt 
            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_4)) 
                     & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)
                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt) 
                            - (IData)(1U)) : ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)) 
                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt)))));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state = 1U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U] = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_3 
            = (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)) 
                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_4 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_3));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state 
            = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T)
                       ? 2U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_3)
                                ? 4U : 1U)) : 0U) | 
                 ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state))
                   ? (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T) 
                       & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3))
                       ? 1U : 2U) : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state))
                                             ? (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1) 
                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3))
                                                 ? 8U
                                                 : 4U)
                                             : 0U)) 
               | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1)
                       ? 1U : 8U) : 0U));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_4) {
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U] = 0U;
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U] = 0U;
            } else {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U] 
                    = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0);
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U] 
                    = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                               >> 0x20U));
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U] 
                    = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1);
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U] 
                    = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                               >> 0x20U));
            }
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r 
                = (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                   >> 4U);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                    ? 0U : 0xffU);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx 
                = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                                 >> 3U)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)));
        } else {
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1) {
                __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx 
                    = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx) 
                             - (IData)(1U)));
            }
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1) 
                          | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1)))))) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r = 0ULL;
            }
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt 
            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_4)) 
                     & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)
                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt) 
                            - (IData)(1U)) : ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1)) 
                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt)))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T;
    }
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN 
        = ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                      >> 5U)) | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0 
        = ((0xfc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                       >> 0x10U)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1 
        = ((0x1fc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                        >> 0xfU)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc = 0x7ffffffcULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state = 1U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN 
            = ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid)
                    ? 1U : 2U) : 0U);
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                    ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1);
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
            = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T)
                       ? 4U : 2U) : 0U) | ((0x1cU & 
                                            ((0xfffffffcU 
                                              & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN) 
                                                 << 1U)) 
                                             | (((8U 
                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                                                  ? 
                                                 ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid)
                                                   ? 4U
                                                   : 2U)
                                                  : 0U) 
                                                << 2U))) 
                                           | (2U & 
                                              (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN)) 
                                               << 1U)))) 
                | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                    ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T)
                        ? 0x20U : 0x10U) : 0U)) | (
                                                   (0x20U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                                                    ? 
                                                   ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid)
                                                     ? 2U
                                                     : 0x20U)
                                                    : 0U));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid))) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen = 0U;
    } else if (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r)
            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx)
                ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U]))))
            : vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt) 
            == (1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len))) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
              >> 2U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
            >> 1U) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                      & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen))));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 = 0ULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state = 1U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14 
            = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                 | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23 
            = ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                    ? 8U : 4U) : 0U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25 
            = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                    ? 1U : 0x10U) : 0U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN 
            = (7U & ((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                        ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last)
                            ? 4U : 2U) : 0U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit 
                = (0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way 
                = (((IData)((0U != (3U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                          >> 2U)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid 
                = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty 
                = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                       : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                 : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                            : 0U)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                       : 0U));
        }
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3;
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                       : 0ULL));
        }
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3;
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                       : 0ULL));
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state 
            = ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                  ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit)
                      ? 1U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                               ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                   ? 0x10U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)
                                               ? 2U
                                               : 8U))
                               : 1U)) : 0U) | ((8U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                                                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last)
                                                    ? 0x20U
                                                    : 8U)
                                                : 0U)) 
               | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                  | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | ((6U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                        | (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN) 
                                 | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6)))))));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt 
            = (1U & ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en) 
                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14))) 
                     & (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                           >> 2U) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                     & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)))) 
                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14))
                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                            >> 3U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                                       ? ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)) 
                                          & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt) 
                                             - (IData)(1U)))
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r)
            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx)
                ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))
            : vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt) 
            == (1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len))) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
              >> 2U));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                >> 1U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                          >> 1U)) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
            >> 1U) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                      & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 = 0ULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state = 1U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                    | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23 
            = ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                    ? 8U : 4U) : 0U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25 
            = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                    ? 1U : 0x10U) : 0U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN 
            = (7U & ((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                        ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last)
                            ? 4U : 2U) : 0U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit 
                = (0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way 
                = (((IData)((0U != (3U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                          >> 2U)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid 
                = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty 
                = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                         >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                        >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                       >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                       : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                 : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                            : 0U)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                       : 0U));
        }
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3;
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                       : 0ULL));
        }
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3;
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))
                       : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                   : 0ULL)) | ((4U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                                : 0ULL)) 
                   | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                       ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                       : 0ULL));
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state 
            = ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                  ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit)
                      ? 1U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                               ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                   ? 0x10U : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)
                                               ? 2U
                                               : 8U))
                               : 1U)) : 0U) | ((8U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last)
                                                    ? 0x20U
                                                    : 8U)
                                                : 0U)) 
               | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                  | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                     | ((6U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                        | (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN) 
                                 | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6)))))));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt 
            = (1U & ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en) 
                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14))) 
                     & (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                           >> 2U) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                     & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)))) 
                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14))
                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                            >> 3U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                                       ? ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)) 
                                          & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt) 
                                             - (IData)(1U)))
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)))));
    }
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175 
        = ((((((((((((((((((((((((((((0x33U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                     | (0x8033U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0xb3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x133U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0x1b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x233U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x2b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x82b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x333U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x3b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x3bU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x803bU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0xbbU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x2bbU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0x82bbU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x433U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x4b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x5b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x533U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   | (0x43bU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0x633U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0x6b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                | (0x63bU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
               | (0x6bbU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              | (0x733U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
             | (0x7b3U == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
            | (0x73bU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
           | (0x7bbU == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid)) 
                 | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type 
        = (((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
            | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))
            ? 0x10U : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                        ? 0x20U : ((0x67U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                    ? 2U : (((((((0x63U 
                                                  == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                 | (0xe3U 
                                                    == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x263U 
                                                   == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x2e3U 
                                                  == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (0x363U 
                                                 == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             | (0x3e3U 
                                                == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                             ? 8U : 
                                            ((((((((3U 
                                                    == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                   | (0x83U 
                                                      == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x103U 
                                                     == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x203U 
                                                    == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x283U 
                                                   == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x303U 
                                                  == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (0x183U 
                                                 == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                              ? 2U : 
                                             (((((0x23U 
                                                  == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                 | (0xa3U 
                                                    == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x123U 
                                                   == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x1a3U 
                                                  == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                               ? 4U
                                               : ((
                                                   ((((((((((((0x13U 
                                                               == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                              | (0x113U 
                                                                 == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                             | (0x193U 
                                                                == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                            | (0x213U 
                                                               == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                           | (0x313U 
                                                              == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                          | (0x393U 
                                                             == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                         | (0x93U 
                                                            == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                        | (0x293U 
                                                           == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                       | (0x4293U 
                                                          == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                      | (0x1bU 
                                                         == (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     | (0x9bU 
                                                        == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x29bU 
                                                       == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x829bU 
                                                      == SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))
                                                   ? 2U
                                                   : (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1 
        = (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2;
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                  ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                     >> 2U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                               >> 2U)));
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r, 1U, 
                                                                                ((0xfffffffffffffff0ULL 
                                                                                & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                                                                | (QData)((IData)(
                                                                                ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                                                << 3U)))), 
                                                                                ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                                                                 ? 
                                                                                ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U]))))), 
                                                                                ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                                                                 ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                                                                 : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
            >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
            >> 3U) & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                       >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                  >> 3U) & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                             >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
           & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt) 
              == (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen)))));
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN][3U];
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN];
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough 
            = (IData)((0x80000000ULL != (0xe0000000ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index 
            = (0x1fU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                >> 4U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset 
            = (0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
            = (0x7fffffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                    >> 9U)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
              >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))
             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0
             : 0ULL) | ((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))))
                         ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                         : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3 
        = (((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                    >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))))
             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1
             : 0ULL) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))
                         ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                         : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][3U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram
                [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN][3U];
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag
            [vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN];
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
                             >> (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
              >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))
             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0
             : 0ULL) | ((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))))
                         ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                         : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3 
        = (((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                    >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))))
             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
             : 0ULL) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))
                         ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                         : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1 
        = ((IData)((0U != (0x30U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))))
            ? 0U : (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                             >> 0xfU)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
              >> 2U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
              >> 2U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r) 
           | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r) 
           | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
            ? 0ULL : (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6 
        = (1U & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                   >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                    >> 4U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit)
            ? ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1
                : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0)
            : ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                : ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3
                    : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit))) 
              | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                 >> 2U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en 
        = ((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty)) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state)) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)));
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit))) 
              | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                 >> 2U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en 
        = ((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty)) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state)) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1;
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid)) 
                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit)) 
                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               >> 1U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T)));
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array 
        = ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
              == vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)) 
            << 3U) | ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag) 
                        & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid)) 
                       << 2U) | ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid)) 
                                  << 1U) | ((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)))));
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index) 
                                       << 4U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset)))));
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
            = ((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
               & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty);
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array 
        = ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag 
              == vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)) 
            << 3U) | ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag 
                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag) 
                        & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid)) 
                       << 2U) | ((((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag 
                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag) 
                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid)) 
                                  << 1U) | ((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)))));
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index) 
                                       << 4U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid)) 
                   | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit)) 
                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               >> 1U) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                         | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit) 
              | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                  ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                  : ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                       >> 3U) ^ (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))) 
                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid) 
            & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               >> 3U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state)) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough))) 
           & (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r 
              == (vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
                  >> 4U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H));
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T 
        = ((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr) 
           | (0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
            & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               >> 3U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid) 
           & (IData)((0U != (0x24U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state)))));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en) 
                    & (0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en) 
                    & (1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en) 
                    & (2U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en) 
                    & (3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN 
        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)
                     ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index)
                     : (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                >> 4U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5 
        = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en))) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index)
            : 0U);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                    & (0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                    & (1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                    & (2U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN 
        = (1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en) 
                    & (3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en 
        = (((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en 
        = (((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en 
        = (((2U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en 
        = (((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en 
        = (((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en 
        = (((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en 
        = (((2U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en 
        = (((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5));
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state)) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))) 
           & (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r 
              == (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                  >> 4U)));
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r, 0U, 
                                                                                (((1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                                                                 ? 
                                                                                (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((0x1ffffffffffffffeULL 
                                                                                & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                                                >> 3U)) 
                                                                                | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                                                                << 3U), vlSelf->__Vtask_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata);
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata 
        = vlSelf->__Vtask_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5 
        = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en))) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T 
        = (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)) 
            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
           & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T) 
                 | ((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
                      >> 1U) & ((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok)) 
                                | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3))) 
                    & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3)))));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

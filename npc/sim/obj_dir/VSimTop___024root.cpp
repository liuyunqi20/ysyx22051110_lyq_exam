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
    i = (((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_is_ebreak))
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

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_929;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    CData/*5:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done;
    CData/*2:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
    CData/*3:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr;
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
    CData/*0:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr;
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
    VlWide<5>/*131:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r;
    VlWide<3>/*66:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r;
    VlWide<5>/*131:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r;
    VlWide<4>/*127:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r;
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
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp34;
    VlWide<5>/*159:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp98;
    VlWide<3>/*95:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_3;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___masked_wtline_data_1_T_2;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___masked_wtline_data_1_T_2;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0;
    QData/*32:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime;
    // Body
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U] 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U];
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag__v0 = 0U;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx;
    __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state 
        = vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
    __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din) 
                                         | ((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r)) 
                                            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying))));
    __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel 
            = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_ex_sel;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_op_muldiv = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_op_muldiv 
            = (0U != (0x1fffU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT__alu_op 
                                 >> 0xaU)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result = 0ULL;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T;
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_wait 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush) 
                                             | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_valid))) 
                                         & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___io_in_ready_T_1) 
                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3)) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_valid))) 
                                            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_wait))));
    __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush)) 
                                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2)
                                             ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid)
                                             : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid))));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf = 0ULL;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_8 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_valid) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2)));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_6 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush) 
               | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en) 
                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2)));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en 
            = ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_6)) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_8) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en)));
        if ((1U & (~ (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_6) 
                       | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__unnamedblk1__DOT___T_8))) 
                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en))))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_6;
        }
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap) 
                                             | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1))) 
                                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2)
                                             ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4)
                                             : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt) 
                                         | ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T) 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx 
            = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                             >> 3U)));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state = 1U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_3 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_11 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid)
                ? 1U : 4U);
        __Vdly__SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state 
            = ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state))
                  ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
                      ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_3)
                          ? 4U : 1U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_3)
                                         ? 2U : 1U))
                  : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state))
                            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
                                ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_11)
                                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid)
                                    ? 1U : 2U)) : 0U)) 
               | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state))
                   ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__unnamedblk1__DOT___ms_state_T_11)
                   : 0U));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap) 
                                             | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1))) 
                                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2)
                                             ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid)
                                             : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2 = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_rdata2;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T)));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r = 0ULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__reminder_r = 0ULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_q_sign = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_r_sign = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt = 0ULL;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__last_step 
            = (1U & (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
                               >> 0x3fU)) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r))) 
                     | ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
                                 >> 0x1fU)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r))));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__dividend_msb 
            = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_divw)
                      ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                 >> 0x1fU)) : (IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                                       >> 0x3fU))));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___T_2 
            = ((~ (IData)((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt))) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_valid));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___sel_r_sign_T 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_div_signed) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__dividend_msb));
        if ((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt)) {
            __Vtemp9[0U] = 1U;
            __Vtemp9[1U] = 0U;
            __Vtemp9[2U] = 0U;
            VL_EXTEND_WQ(65,33, __Vtemp10, (0x1ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                                << 1U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])) 
                                                  >> 0x1fU))));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r) {
                __Vtemp12[0U] = __Vtemp10[0U];
                __Vtemp12[1U] = __Vtemp10[1U];
                __Vtemp12[2U] = __Vtemp10[2U];
            } else {
                __Vtemp12[0U] = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
                                  << 1U) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] 
                                            >> 0x1fU));
                __Vtemp12[1U] = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
                                  << 1U) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
                                            >> 0x1fU));
                __Vtemp12[2U] = (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
                                 >> 0x1fU);
            }
            VL_EXTEND_WI(65,32, __Vtemp13, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r));
            VL_EXTEND_WQ(65,64, __Vtemp14, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r);
            __Vtemp16[0U] = (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                                 ? __Vtemp13[0U] : 
                                __Vtemp14[0U]));
            __Vtemp16[1U] = (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                                 ? __Vtemp13[1U] : 
                                __Vtemp14[1U]));
            __Vtemp16[2U] = (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                                 ? __Vtemp13[2U] : 
                                __Vtemp14[2U]));
            VL_ADD_W(3, __Vtemp17, __Vtemp12, __Vtemp16);
            VL_ADD_W(3, __Vtemp18, __Vtemp9, __Vtemp17);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U] 
                = __Vtemp18[0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U] 
                = __Vtemp18[1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U] 
                = (1U & __Vtemp18[2U]);
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r) {
                __Vtemp26[1U] = (((IData)((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U])))) 
                                  << 0x1fU) | (IData)(
                                                      ((0x7fffffffffffffffULL 
                                                        & ((1U 
                                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])) 
                                                             << 0x1fU) 
                                                            | (QData)((IData)(
                                                                              (0x7fffffffU 
                                                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))))) 
                                                       >> 0x20U)));
                __Vtemp26[2U] = (((IData)((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U])))) 
                                  >> 1U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U]))) 
                                                     >> 0x20U)) 
                                            << 0x1fU));
            } else {
                __Vtemp26[1U] = ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                  ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U]
                                  : (((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])))) 
                                      << 0x1fU) | (IData)(
                                                          ((0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))) 
                                                           >> 0x20U))));
                __Vtemp26[2U] = ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                  ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U]
                                  : (((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])))) 
                                      >> 1U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U]))) 
                                                         >> 0x20U)) 
                                                << 0x1fU)));
            }
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U] 
                = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                     ? (IData)((0x7fffffffffffffffULL 
                                & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])) 
                                        << 0x1fU) | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))))))
                     : ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U]
                         : (IData)((0x7fffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U]))))))) 
                   << 1U);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] 
                = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                      ? (IData)((0x7fffffffffffffffULL 
                                 & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U])))))))
                      : ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U]
                          : (IData)((0x7fffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U]))))))) 
                    >> 0x1fU) | (__Vtemp26[1U] << 1U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
                = ((__Vtemp26[1U] >> 0x1fU) | (__Vtemp26[2U] 
                                               << 1U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
                = ((__Vtemp26[2U] >> 0x1fU) | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r)
                                                 ? 
                                                ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U]))) 
                                                          >> 0x20U)) 
                                                 >> 1U)
                                                 : 
                                                ((1U 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])
                                                  ? 
                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U]
                                                  : 
                                                 ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U]))) 
                                                           >> 0x20U)) 
                                                  >> 1U))) 
                                               << 1U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r 
                    << 1U) | (QData)((IData)((1U & 
                                              (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[2U])))));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__reminder_r 
                = (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN[0U])));
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___T_2) {
            VL_EXTEND_WQ(128,64, __Vtemp29, ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___sel_r_sign_T)
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1))
                                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U] 
                = __Vtemp29[0U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] 
                = __Vtemp29[1U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
                = __Vtemp29[2U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
                = __Vtemp29[3U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r = 0ULL;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__reminder_r = 0ULL;
        }
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk3__DOT__divisor_msb 
                = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_divw)
                          ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                     >> 0x1fU)) : (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                                           >> 0x3fU))));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r 
                = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_div_signed) 
                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk3__DOT__divisor_msb))
                    ? (1ULL + (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2))
                    : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_divw;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_r_sign 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT___sel_r_sign_T;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_q_sign 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_div_signed) 
                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__dividend_msb) 
                      ^ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__unnamedblk3__DOT__divisor_msb)));
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done 
            = ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done)) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__last_step) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done)));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush) 
                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__unnamedblk1__DOT__last_step))
                ? 0ULL : (((~ (IData)((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt))) 
                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_valid))
                           ? 1ULL : (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
                                     << 1U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_is_ebreak = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_is_ebreak 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_is_ebreak;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we) 
         & (0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest)))) {
        __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2;
        __Vdlyvset__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en 
            = (((((((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                        >> 1U) & (0ULL == vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res)) 
                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                          >> 2U) & (0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res))) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                         >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                        >> 4U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                       >> 5U) & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))) 
                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                      >> 6U) & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                    >> 7U)) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                               >> 8U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w 
            = ((((((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                             & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                            & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                           & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                          & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   & (0x83U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & (0x103U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 & (0x203U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               & ((((((((((((((((0x303U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                & (0x183U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               & (0x23U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              & (0xa3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             & (0x123U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            & (0x1a3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           & (0x13U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          & (0x113U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         & (0x193U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        & (0x213U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       & (0x313U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      & (0x393U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     & (0x93U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                    & (0x293U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                   & (0x4293U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                  & (((((0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                        | (0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | ((((((0x33U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                            & (0x8033U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           & (0xb3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          & (0x133U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         & (0x1b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11)))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__pc = 0x7ffffffcULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state = 1U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf = 0ULL;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_2 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap) 
               | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid)
                ? 8U : 4U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2)));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN_0 
            = ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_2)
                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN)
                    : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid)
                        ? 1U : 2U)) : 0U);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_5 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_2) 
               | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r) 
                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2)) 
                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4)));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r
                    : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
                        ? vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target
                        : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1)
                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target
                            : vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1)));
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
            = ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_5)) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
            = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                   ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_2)
                       ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T)
                           ? 0x20U : 0x10U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T)
                                                ? 4U
                                                : 2U))
                   : 0U) | ((0x1cU & ((0xfffffffcU 
                                       & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN_0) 
                                          << 1U)) | 
                                      (((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
                                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN) 
                                            >> 1U) : 0U) 
                                       << 2U))) | (2U 
                                                   & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN_0)) 
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
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_2) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
                    ? vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target
                    : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1)
                        ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target
                        : vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1));
        }
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_5) 
                      | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7)))))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel 
            = ((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
               & ((0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                  | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel 
            = (((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
               | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5));
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
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_2 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen) 
               & (0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen) 
                & (0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr))
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata
                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_2)
                    ? 0ULL : (1ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime)));
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata;
        }
        vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
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
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U] = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt = 0ULL;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done = 0U;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__last_step 
            = (1U & (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt 
                               >> 0x20U)) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r))) 
                     | ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt 
                                 >> 0x10U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r))));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT___T_2 
            = ((~ (IData)((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt))) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_valid));
        if ((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt)) {
            __Vtemp32[0U] = 1U;
            __Vtemp32[1U] = 0U;
            __Vtemp32[2U] = 0U;
            __Vtemp32[3U] = 0U;
            __Vtemp32[4U] = 0U;
            __Vtemp33[0U] = (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U]);
            __Vtemp33[1U] = (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U]);
            __Vtemp33[2U] = (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U]);
            __Vtemp33[3U] = (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U]);
            __Vtemp33[4U] = (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U]);
            VL_ADD_W(5, __Vtemp34, __Vtemp32, __Vtemp33);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[0U] 
                = __Vtemp34[0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[1U] 
                = __Vtemp34[1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[2U] 
                = __Vtemp34[2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[3U] 
                = __Vtemp34[3U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[4U] 
                = (0xfU & __Vtemp34[4U]);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                = ((7U == (7U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U]))
                    ? 0U : (((6U == (7U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U])) 
                             | (5U == (7U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U])))
                             ? 8U : ((4U == (7U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U]))
                                      ? 4U : ((3U == 
                                               (7U 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U]))
                                               ? 2U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U])) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U])))))));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                = (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                   << 2U);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                                 << 2U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                                 << 2U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                                 << 2U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                    >> 0x1eU) | (0xcU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
                                         << 2U)));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
                    << 0x1eU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] 
                                 >> 2U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
                = ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
                    << 0x1eU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
                                 >> 2U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
                = ((6U & ((- (IData)((1U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
                                            >> 2U)))) 
                          << 1U)) | (1U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
                                           >> 2U)));
            __Vtemp67[0U] = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                                    << 1U) : 0U) | 
                               ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[0U] 
                                    << 1U) : 0U)) | 
                              ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U]
                                : 0U)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[0U]
                                           : 0U));
            __Vtemp67[1U] = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                                     >> 0x1fU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                                                  << 1U))
                                 : 0U) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[1U] 
                                                 << 1U))
                                           : 0U)) | 
                              ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U]
                                : 0U)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[1U]
                                           : 0U));
            __Vtemp67[2U] = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                                     >> 0x1fU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                                                  << 1U))
                                 : 0U) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[2U] 
                                                 << 1U))
                                           : 0U)) | 
                              ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U]
                                : 0U)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[2U]
                                           : 0U));
            __Vtemp67[3U] = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                                     >> 0x1fU) | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                                                  << 1U))
                                 : 0U) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[3U] 
                                                 << 1U))
                                           : 0U)) | 
                              ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U]
                                : 0U)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[3U]
                                           : 0U));
            __Vtemp67[4U] = (((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                 ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                                     >> 0x1fU) | (0xeU 
                                                  & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
                                                     << 1U)))
                                 : 0U) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? ((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[3U] 
                                               >> 0x1fU) 
                                              | (0xeU 
                                                 & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[4U] 
                                                    << 1U)))
                                           : 0U)) | 
                              ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U]
                                : 0U)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__unnamedblk2__DOT__src1_neg[4U]
                                           : 0U));
            VL_ADD_W(5, __Vtemp68, __Vtemp67, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] 
                = __Vtemp68[0U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U] 
                = __Vtemp68[1U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U] 
                = __Vtemp68[2U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U] 
                = __Vtemp68[3U];
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U] 
                = (0xfU & __Vtemp68[4U]);
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT___T_2) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
                = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
                = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                           >> 0x20U));
            if ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_bits_mul_signed))) {
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
                    = (- (IData)((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                                >> 0x3fU)))));
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
                    = (- (IData)((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                                >> 0x3fU)))));
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
                    = (0xfU & (- (IData)((1U & (IData)(
                                                       (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                                        >> 0x3fU))))));
            } else {
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] = 0U;
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] = 0U;
                __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] = 0U;
            }
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2) 
                   << 1U);
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
                = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2) 
                    >> 0x1fU) | ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
                = ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_bits_mul_signed))
                      ? (3U & (- (IData)((1U & (IData)(
                                                       (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                                        >> 0x3fU))))))
                      : 0U) << 1U) | ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                               >> 0x20U)) 
                                      >> 0x1fU));
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] = 0U;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U] = 0U;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U] = 0U;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U] = 0U;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U] = 0U;
        }
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT___T_2) {
            __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r 
                = (1U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                         >> 0xeU));
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush) 
                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__last_step))
                ? 0ULL : (((~ (IData)((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt))) 
                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_valid))
                           ? 1ULL : ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt)) 
                                     << 1U)));
        __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done 
            = ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done)) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__unnamedblk1__DOT__last_step) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt) 
                                         | ((~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T) 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3))) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl = 2U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl = 2U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp = 3U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie = 0U;
        __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie = 0ULL;
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5 
            = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t)));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
            = ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op))
                  ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1
                  : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op))
                              ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16 
                                 | vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1)
                              : 0ULL)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op))
                                           ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16 
                                              & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1))
                                           : 0ULL));
        vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2 
            = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN));
        if ((1U & (~ (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5) 
                       | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                          >> 1U)) | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2)))))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl 
                = (3U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
                                 >> 0x22U)));
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl 
                = (3U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
                                 >> 0x20U)));
        }
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp = 3U;
            __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc;
        } else {
            if ((1U & (~ (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                           >> 1U) | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2)))))) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp 
                    = (3U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
                                     >> 0xbU)));
            }
            __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie 
                = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                          >> 1U) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2)
                                     ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
                                                >> 7U))
                                     : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie))));
            if (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
                 & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN) 
                    >> 2U))) {
                vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc 
                    = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
            }
        }
        __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie 
            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5)) 
                     & ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie)
                         : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2)
                             ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 
                                        >> 3U)) : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie)))));
        if ((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                = (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type)) 
                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                    ? 0xbULL : 0ULL);
        } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause = 0x8000000000000007ULL;
        } else if (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
                    & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN) 
                       >> 3U))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        }
        if (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
             & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN) 
                >> 1U))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        }
        if (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip = 0x80ULL;
        } else if (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
                    & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN) 
                       >> 5U))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        }
        if (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op)) 
             & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN) 
                >> 4U))) {
            vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid))) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)));
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
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr)) 
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
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U] 
                    = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata));
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U] 
                    = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                 ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata) 
                               >> 0x20U));
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U] 
                    = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                : 0ULL));
                vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U] 
                    = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                 : 0ULL) >> 0x20U));
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
                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                    : 0xffU);
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
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr)) 
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
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[0U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[1U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[2U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U] 
                = vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[3U];
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r 
                = (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                   >> 4U);
            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r 
                = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                    ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                    : 0xffU);
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[2U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__dividend_r[3U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divisor_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__divw_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[2U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[3U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src1_r[4U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__src2_r[2U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U] 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[4U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate;
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
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_q_sign)
            ? (1ULL + (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r))
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__quotient_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__sel_r_sign)
            ? (1ULL + (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__reminder_r))
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__reminder_r);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_is_ebreak = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_is_ebreak 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_is_ebreak;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN 
        = ((0x344U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num))
            ? 0x20U : ((0x304U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num))
                        ? 0x10U : ((0x342U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num))
                                    ? 8U : ((0x341U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num))
                                             ? 4U : 
                                            ((0x305U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num))
                                              ? 2U : 
                                             (0x300U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num)))))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel 
            = (((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                        & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                       & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                      & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                     & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               & (((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                       | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_wait))) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
                ? 1U : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                         ? 0x80U : ((0x67U == (0x7fU 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                     ? 0x100U : ((0x63U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0xe3U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                   ? 4U
                                                   : 
                                                  ((0x263U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 8U
                                                    : 
                                                   ((0x2e3U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 0x10U
                                                     : 
                                                    ((0x363U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                      ? 0x20U
                                                      : 
                                                     ((0x3e3U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                       ? 0x40U
                                                       : 
                                                      ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8) 
                                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9)))))))))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_ws_forward_bits_en 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en 
            = (((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                        & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                       & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                      & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                     & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               & (((((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                           | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                : (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc 
                   + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_hi 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r)
            ? (- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] 
                                  >> 0x1fU)))) : (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[2U]))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_lo 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__mulw_r)
                              ? (- (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U] 
                                            >> 0x1fU)))
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[1U]))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__res_r[0U])));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT__alu_op;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t 
        = (((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie)) 
           & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie 
                      >> 7U)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc = 0ULL;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1 = 0ULL;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type;
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
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb = 0U;
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
            __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb;
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
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4;
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
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4;
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
                      ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)
                          ? 0x20U : 1U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                                            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                                ? 0x10U
                                                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)
                                                    ? 2U
                                                    : 8U))
                                            : 1U)) : 0U) 
                | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                    ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last)
                        ? 0x20U : 8U) : 0U)) | ((0x10U 
                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                                                | ((8U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                                                   | ((6U 
                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN) 
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
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid))) {
        vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)));
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
        __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr = 0U;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata = 0ULL;
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb = 0U;
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
            __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata;
            vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb 
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb;
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
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4;
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
                = vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4;
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
                      ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)
                          ? 0x20U : 1U) : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14)
                                            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                                ? 0x10U
                                                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)
                                                    ? 2U
                                                    : 8U))
                                            : 1U)) : 0U) 
                | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                    ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last)
                        ? 0x20U : 8U) : 0U)) | ((0x10U 
                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25)) 
                                                | ((8U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23)) 
                                                   | ((6U 
                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16 
        = (((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                 ? (((QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl) 
                                       << 2U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie) 
                                                      << 7U) 
                                                     | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie) 
                                                        << 3U))))))
                 : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                             ? (0xfffffffffffffffcULL 
                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)
                             : 0ULL)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                                          ? (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                          : 0ULL)) 
             | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause
                 : 0ULL)) | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie
                              : 0ULL)) | ((0x20U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip
                                           : 0ULL));
    vlSelf->io_core_debug_raise_intr = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state;
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_is_ebreak = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_is_ebreak 
            = ((IData)((0x73U == (0xfffffU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
               & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                         >> 0x14U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
               >> 0x14U);
    }
    vlSelf->io_core_debug_debug_rf_wnum = vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal 
        = (IData)((0U != (0x180U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_bits_en 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we 
            = (((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                  | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                 | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
               | (((((((0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                       & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & ((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                           | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (((((0x23U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                           & (0xa3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          & (0x123U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         & (0x1a3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        & (((((((((((((((((((((((((0x13U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                  | (0x113U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x193U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x213U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x313U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (0x393U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             | (0x93U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                            | (0x293U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                           | (0x4293U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                          | (0x1bU 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                        | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                      | (0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                     | (0x8033U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x133U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0x1b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (((((((((((((((((((((((((0x803bU 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                     | (0xbbU 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x2bbU 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x82bbU 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                  | (0x433U 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                 | (0x4b3U 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                | (0x5b3U 
                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                               | (0x533U 
                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                              | (0x43bU 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                             | (0x633U 
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                            | (0x6b3U 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                           | (0x63bU 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                          | (0x6bbU 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                         | (0x733U 
                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                        | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                      | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                     | (0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x2f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x373U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                              | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm 
            = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_imm;
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_bits_mul_signed 
        = ((0x2000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
            ? 2U : ((0x1000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                     ? 0U : 3U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_div_signed 
        = (IData)((0U != (0x2a8000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_bits_divw 
        = (IData)((0U != (0x660000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_mul__io_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3) 
           & (0U != (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                              >> 0xaU))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT____Vcellinp__my_div__io_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3) 
           & (0U != (0xffU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                              >> 0xfU))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___io_in_ready_T_1 
        = (1U & ((0U != (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                                  >> 0xaU))) ? (~ (IData)(
                                                          (0U 
                                                           != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__cnt)))
                  : ((0U != (0xffU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                                      >> 0xfU))) ? 
                     (~ (IData)((0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__cnt)))
                      : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3))));
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_3 
        = ((((((((((((0x1000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_hi
                      : 0ULL) | ((0x2000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                  ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_lo
                                  : 0ULL)) | ((0x4000U 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                               ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_lo
                                               : 0ULL)) 
                  | ((0x8000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                      ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient
                      : 0ULL)) | ((0x10000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient
                                   : 0ULL)) | ((0x20000U 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient)))
                                                : 0ULL)) 
               | ((0x40000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                   ? (((QData)((IData)((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient 
                                                              >> 0x1fU))))))) 
                       << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_quotient)))
                   : 0ULL)) | ((0x80000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder
                                : 0ULL)) | ((0x100000U 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder
                                             : 0ULL)) 
            | ((0x200000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder)))
                : 0ULL)) | ((0x400000U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                             ? (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_div_io_out_bits_reminder)))
                             : 0ULL));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1 = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target 
        = ((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t)))
            ? (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)
            : ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                ? ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                  >> 0x3fU))) ? (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                    : (4ULL + (0xfffffffffffffffcULL 
                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))
                : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap 
        = (((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type)) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type;
    }
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
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb = 0U;
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag 
            = (0x7fffffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                    >> 9U)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)))))))))));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                  >> 3U) & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                             >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
            >> 3U) & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                       >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)));
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))))) {
        if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21) 
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid = 0U;
    } else if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb 
            = vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb;
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata 
            = (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                   ? (((QData)((IData)((0xffU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                       << 0x38U) | (((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                     << 0x30U) | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))))))))))
                   : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                               ? (((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))))))
                               : 0ULL)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                            ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))
                                            : 0ULL)) 
               | ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata
                   : 0ULL));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough 
            = (IData)((0x80000000ULL != (0xe0000000ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index 
            = (0x1fU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                >> 4U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset 
            = (8U & ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                              >> 3U)) << 3U));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag 
            = (0x7fffffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                    >> 9U)));
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
    if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough) {
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[0U] 
            = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                        ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata));
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[1U] 
            = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                         ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[2U] 
            = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                        ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata
                        : 0ULL));
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[3U] 
            = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata
                         : 0ULL) >> 0x20U));
    } else {
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[0U] 
            = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0);
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[1U] 
            = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                       >> 0x20U));
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[2U] 
            = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1);
        vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[3U] 
            = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)))))))))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_valid 
        = ((0U != (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                            >> 0xaU))) ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_mul__DOT__mult_core__DOT__done)
            : ((0U != (0xffU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                                >> 0xfU))) ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__my_div__DOT__div_core__DOT__done)
                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___io_in_ready_T_1) 
                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_in_valid_T_3))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r) 
           | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6 
        = (1U & (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                    >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r))) 
                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                    >> 4U)));
    SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___masked_wtline_data_1_T_2 
        = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata 
           & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask);
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
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
    SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___masked_wtline_data_1_T_2 
        = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata 
           & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask);
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest 
            = (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                        >> 7U));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_es_forward_bits_en 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op 
            = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14) 
                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15))
                ? 0U : ((0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                         ? 1U : ((0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                  ? 2U : ((0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                           ? 4U : (
                                                   (0x2f3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x373U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x3f3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                     << 2U)))))));
    }
    vlSelf->io_core_debug_debug_pc = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1 = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1 
            = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_es)
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T
                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ms)
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T
                    : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ws)
                        ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2
                        : ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1))
                            ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                           [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1]))));
    }
    vlSelf->io_core_debug_debug_rf_we = vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type 
            = (((((((((((((((((((((0x37U == (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                 | (0x6fU == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                               | (0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (((((((((((((((((0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                    | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0x213U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             | (0x313U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0x393U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x93U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                          | (0x293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                         | (0x4293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                        | (0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                 | (((((((((((((((((0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                   | (0x8033U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x133U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x1b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x433U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x4b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                | (((((((((((((((((0x5b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                  | (0x533U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x633U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x6b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x733U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x2f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0x373U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))
                ? 0U : ((0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)
                         ? 1U : ((0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst) 
                                 << 1U)));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1;
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN)));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en)
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index) 
                                       << 4U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               >> 1U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
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
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
            = (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid 
               | ((QData)((IData)(1U)) << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type;
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T;
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en) 
         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty 
            = (((~ (1ULL << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN))) 
                & vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty) 
               | ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                  << (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index) 
                                       << 4U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset)))));
    if (__Vdlyvset__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[__Vdlyvdim0__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0] 
            = __Vdlyvval__SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file__v0;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op))
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr;
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit) 
              | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                  ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3)
                  : ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                       >> 3U) ^ (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))) 
                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               >> 1U) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                         | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr;
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata 
        = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                          >> 3U))) ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[2U])))
            : (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata[0U]))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T 
        = ((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr) 
           | (0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    }
    vlSelf->io_core_debug_debug_rf_wdata = vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1 
        = vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en) 
           | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) 
              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit) 
              | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                  ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                  : ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                       >> 3U) ^ (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) 
                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come)))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata = 0ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata 
            = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_rdata2;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type 
            = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_mem_type;
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb 
        = (0xffU & (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                        ? ((7U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                            ? 0x80U : ((6U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                        ? 0x40U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                     ? 0x10U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                       ? 4U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                        ? 2U
                                                        : 1U)))))))
                        : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                  ? ((3U == (3U & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                           >> 1U))))
                                      ? 0xc0U : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                              >> 1U))))
                                                  ? 0x30U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 3U)))
                                  : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                            >> 2U)))
                                                 ? 0xf0U
                                                 : 0xfU)
                                             : 0U)) 
                    | (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type) 
                                        >> 6U))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid)) 
                   | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit) 
                      & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)))) 
                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                      >> 4U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                    >> 5U)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en) 
           | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough) 
              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr 
            = ((((((((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                               & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                              & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                             & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                            & (0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     & (0x83U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    & (0x103U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   & (0x203U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 & (0x303U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                & (0x183U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               & ((((0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                    | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))));
    }
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r;
    VL_EXTEND_WQ(65,64, __Vtemp95, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1);
    VL_EXTEND_WQ(65,64, __Vtemp96, ((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                                                           >> 1U))))) 
                                    ^ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2));
    VL_ADD_W(3, __Vtemp97, __Vtemp95, __Vtemp96);
    VL_EXTEND_WI(65,1, __Vtemp98, (1U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op 
                                         >> 1U)));
    VL_ADD_W(3, __Vtemp99, __Vtemp97, __Vtemp98);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U] 
        = __Vtemp99[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
        = __Vtemp99[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U] 
        = (1U & __Vtemp99[2U]);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r 
        = __Vdly__SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4 
        = ((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                  >> 3U)) | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                              >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)))
              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0
              : 0ULL) | ((1U & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                  >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))) 
                                & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                                   | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr) 
                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                         >> 3U)))))
                          ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                          : 0ULL)) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit) 
                                        & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                              >> 3U))) 
                                       | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt))) 
                                           & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                                 >> 3U))) 
                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)))
                                       ? ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0
                                             : vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata) 
                                           & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask)) 
                                          | SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___masked_wtline_data_1_T_2)
                                       : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4 
        = ((((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                           >> 3U))) | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                        >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)))))
              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1
              : 0ULL) | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)) 
                          & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)) 
                             | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr) 
                                & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                      >> 3U))))) ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                          : 0ULL)) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit) 
                                        & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                           >> 3U)) 
                                       | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                                             >> 3U) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt)) 
                                           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset) 
                                              >> 3U)) 
                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr)))
                                       ? ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1
                                             : vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata) 
                                           & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask)) 
                                          | SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___masked_wtline_data_1_T_2)
                                       : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit)) 
              | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                  >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state)) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough))) 
           & (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r 
              == (vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr 
                  >> 4U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en)) 
                 | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid) 
                     & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                        >> 1U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit)) 
              | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                  >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4 
        = ((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit) 
               & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                  >> 3U)) | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                              >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)))
              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0
              : 0ULL) | ((1U & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                  >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) 
                                & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                                   | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr) 
                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                         >> 3U)))))
                          ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                          : 0ULL)) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit) 
                                        & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                              >> 3U))) 
                                       | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) 
                                           & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                                 >> 3U))) 
                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)))
                                       ? ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0
                                             : vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata) 
                                           & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask)) 
                                          | SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___masked_wtline_data_1_T_2)
                                       : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4 
        = ((((1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                           >> 3U))) | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                        >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)))))
              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
              : 0ULL) | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                            >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)) 
                          & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)) 
                             | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr) 
                                & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                      >> 3U))))) ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                          : 0ULL)) | ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit) 
                                        & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                           >> 3U)) 
                                       | (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                                             >> 3U) 
                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt)) 
                                           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                              >> 3U)) 
                                          & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr)))
                                       ? ((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
                                             : vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata) 
                                           & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask)) 
                                          | SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___masked_wtline_data_1_T_2)
                                       : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state)) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))) 
           & (vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r 
              == (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
                  >> 4U)));
    VL_EXTEND_WQ(127,64, __Vtemp102, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp103, __Vtemp102, 
                  (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)));
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2 
        = ((((((((((((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                      ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U])))
                      : 0ULL) | ((2U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                  ? (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U])))
                                  : 0ULL)) | ((4U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                               ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)
                                               : 0ULL)) 
                  | ((8U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                      ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                         | vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)
                      : 0ULL)) | ((0x10U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                   ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                      ^ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)
                                   : 0ULL)) | ((0x20U 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                                ? (
                                                   ((QData)((IData)(
                                                                    __Vtemp103[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp103[0U])))
                                                : 0ULL)) 
               | ((0x40U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                   ? VL_SHIFTR_QQQ(64,64,64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))))
                   : 0ULL)) | ((0x80U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))))
                                : 0ULL)) | (QData)((IData)(
                                                           (((0x100U 
                                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                                              ? 
                                                             ((0x1fU 
                                                               >= 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))
                                                               ? 
                                                              ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1) 
                                                               >> 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))
                                                               : 0U)
                                                              : 0U) 
                                                            | ((0x200U 
                                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                                                ? 
                                                               ((0x1fU 
                                                                 >= 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))
                                                                 ? 
                                                                VL_SHIFTRS_III(32,32,32, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1), 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2)))
                                                                 : 
                                                                (- 
                                                                 ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1) 
                                                                  >> 0x1fU)))
                                                                : 0U))))) 
            | ((0x400U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_lo
                : 0ULL)) | ((0x800U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___my_mul_io_out_bits_result_hi
                             : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[0U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[1U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[2U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27[3U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit)
            ? ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1
                : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0)
            : ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state))
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata
                : ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4
                    : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5 
        = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr))) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid)) 
                 | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN 
        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)
                     ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index)
                     : (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                >> 4U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[0U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[1U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[2U] 
        = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27[3U] 
        = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4 
                   >> 0x20U));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit)
            ? ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
                : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0)
            : ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                : ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4
                    : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2) 
                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4))) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
            = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                              >> 2U))) ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                  >> 0x20U))
                : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data));
    }
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5 
        = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid) 
             & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr))) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state)) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_bits_res 
        = (SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2 
           | SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_3);
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T) 
           & (0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_valid_T));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en 
        = (((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en 
        = (((1U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en 
        = (((2U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en 
        = (((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way)) 
            | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b 
        = (0xffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
                            >> (0x38U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result) 
                                         << 3U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h 
        = (0xffffU & ((6U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                       ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
                                  >> 0x30U)) : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                 ? (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
                                                            >> 0x20U))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
                                                             >> 0x10U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))
                                                   ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata)
                                                   : 0U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w 
        = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                          >> 2U))) ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata 
                                              >> 0x20U))
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
        = __Vdly__SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T 
        = (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)) 
            & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_6 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w)
                              ? (- (IData)((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_bits_res 
                                                          >> 0x1fU)))))
                              : (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_bits_res 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_bits_res)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
               >> 5U) | (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)) 
                          & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1))) 
                         & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                            >> 2U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel)
            ? ((((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                      ? (((- (QData)((IData)((1U & 
                                              ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b) 
                                               >> 7U))))) 
                          << 8U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b)))
                      : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                  ? (((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h) 
                                                             >> 0xfU))))) 
                                      << 0x10U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h)))
                                  : 0ULL)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w)))
                                               : 0ULL)) 
                  | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                      ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b))
                      : 0ULL)) | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                   ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h))
                                   : 0ULL)) | ((0x20U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                                ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata))
                                                : 0ULL)) 
               | ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                   ? vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata
                   : 0ULL)) : vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1 
        = (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r
            : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target
                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1)
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target
                    : (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_es 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_es_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest) 
              == (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                           >> 0x14U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ms 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest) 
              == (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                           >> 0x14U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ws 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_ws_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest) 
              == (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                           >> 0x14U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3 
        = ((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
           | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0 
        = ((0xfc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                       >> 0x10U)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1 
        = ((0x1fc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                        >> 0xfU)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN 
        = ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                      >> 5U)) | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
           & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf_en)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_buf
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_6);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4 
        = ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok) 
             | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap))) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_ready_go 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_op_muldiv)) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ex_flush)) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_op_muldiv) 
                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_out_valid))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN 
        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en)
                     ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index)
                     : (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                >> 4U))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15 
        = (((((((((((((((((((((((((((((((0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                        | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                      | (0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                     | (0x8033U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x133U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0x1b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x433U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x4b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x5b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x533U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   | (0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0x633U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0x6b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                | (0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
               | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              | (0x733U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
             | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
            | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
           | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175 
        = ((((((((((((((((((((((((((((0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                     | (0x8033U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x133U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0x1b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x433U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x4b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x5b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x533U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   | (0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0x633U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0x6b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                | (0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
               | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              | (0x733U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
             | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
            | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
           | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_mem_type 
        = (((((((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                    | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                   | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                  | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                 | (0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
            ? 0U : ((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                     ? 1U : ((0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                              ? 2U : ((0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                       ? 4U : ((0x203U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                ? 8U
                                                : (
                                                   (0x283U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 0x10U
                                                    : 
                                                   ((0x303U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 0x20U
                                                     : 
                                                    ((0x183U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                      ? 0x40U
                                                      : 
                                                     ((0x23U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                       ? 1U
                                                       : 
                                                      ((0xa3U 
                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                        ? 2U
                                                        : 
                                                       ((0x123U 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                         ? 4U
                                                         : 
                                                        ((0x1a3U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                         << 6U))))))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8 
        = ((((((((((((((((((((((((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                       | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x213U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x313U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x393U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x93U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                      | (0x293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                     | (0x4293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                    | (0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                | (0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
               | (0x8033U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
             | (0x133U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
            | (0x1b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
           | (0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9 
        = ((((((((((((((((((((((((((((((0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                       | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                      | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                     | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x433U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x4b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x5b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x533U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0x633U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x6b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x733U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 | (0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                | (0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               | (0x2f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x373U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
           | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11 
        = ((((((0x233U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
               & (0x2b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              & (0x82b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
             & (0x333U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
            & (0x3b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
           & ((((((0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                  | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
               | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
              | (((((0x433U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                    & (0x4b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   & (0x5b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  & (0x533U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 & ((0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                    | (((0x633U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                        & (0x6b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       & (((0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                           | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (((0x733U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                              & (0x7b3U != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             & ((((((((((0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                        | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0x2f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x373U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14 
        = (((((((((((((((((((((((((((((((0x37U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                     | (0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 | (0x213U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                | (0x313U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               | (0x393U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x93U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
             | (0x293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
            | (0x4293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
           | (0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5 
        = (((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
           | (((((((0x63U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                   & (0xe3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  & (0x263U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              & ((((((((((((((((((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                       | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                             | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x213U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x313U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x393U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (0x93U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                      | (0x293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                     | (0x4293U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                    | (0x1bU == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x9bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0x29bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                 | (0x829bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_929 
        = (((((((((((((((((((((((((((((((0x233U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                        | (0x2b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0x82b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                      | (0x333U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                     | (0x3b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                    | (0x3bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                   | (0x803bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                  | (0xbbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                 | (0x2bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                | (0x82bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                               | (0x433U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                              | (0x4b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                             | (0x5b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                            | (0x533U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                           | (0x43bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                          | (0x633U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                         | (0x6b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                        | (0x63bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                       | (0x6bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                      | (0x733U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                     | (0x7b3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                    | (0x73bU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                   | (0x7bbU == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                  | (0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 | (0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                | (0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               | (0x2f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x373U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x3f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
           | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2 
        = ((((((0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
               | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
           | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)));
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T) 
                 | ((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate) 
                      >> 1U) & ((~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok)) 
                                | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3))) 
                    & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2 
        = (1U & (((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                   ? (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                >> 0x3fU)) ^ (~ (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                                         >> 0x3fU)))) 
                      & ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                  >> 0x3fU)) ^ (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                >> 0x1fU)))
                   : (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                >> 0x3fU)) ^ (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src2 
                                                      >> 0x3fU))) 
                      & ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_in_bits_src1 
                                  >> 0x3fU)) ^ (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                >> 0x1fU)))) 
                 ^ (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res 
                            >> 0x3fU))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_ready_go));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_ex_sel 
        = (((((((((((((((((((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                               | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                              | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                             | (0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                            | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                           | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                          | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                         | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                        | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                       | (3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                      | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                     | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                    | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                   | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                  | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                 | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
               | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
            ? 1U : ((0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                     ? 2U : ((0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                              ? 4U : ((((((((((((((0x213U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                  | (0x313U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x393U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x93U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                               | (0x293U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                              | (0x4293U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                             | (0x1bU 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            | (0x9bU 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                           | (0x29bU 
                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                          | (0x829bU 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                         | (0x33U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                        | (0x8033U 
                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                       | (0xb3U == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))
                                       ? 1U : ((0x133U 
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                ? 2U
                                                : (
                                                   (0x1b3U 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                    ? 4U
                                                    : (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_929)))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT__alu_op 
        = (((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
              | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
             | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))
            ? 1U : ((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2)
                     ? 2U : (((((((((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                        | (0x83U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       | (0x103U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      | (0x203U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     | (0x283U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                    | (0x303U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                   | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                  | (0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                 | (0xa3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                | (0x123U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                               | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                              | (0x13U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                              ? 1U : (((0x113U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                       | (0x193U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                       ? 2U : ((0x213U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                ? 0x10U
                                                : (
                                                   (0x313U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 8U
                                                    : 
                                                   ((0x393U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 4U
                                                     : 
                                                    ((0x93U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))
                                                      ? 0x20U
                                                      : 
                                                     ((0x293U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))
                                                       ? 0x40U
                                                       : 
                                                      ((0x4293U 
                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))
                                                        ? 0x80U
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                         ? 1U
                                                         : 
                                                        ((0x9bU 
                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                          ? 0x20U
                                                          : 
                                                         ((0x29bU 
                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                           ? 0x100U
                                                           : 
                                                          ((0x829bU 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                            ? 0x200U
                                                            : 
                                                           ((0x33U 
                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                             ? 1U
                                                             : 
                                                            ((0x8033U 
                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                              ? 2U
                                                              : 
                                                             ((0xb3U 
                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                               ? 0x20U
                                                               : 
                                                              (((0x133U 
                                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                                | (0x1b3U 
                                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))
                                                                ? 2U
                                                                : 
                                                               ((0x233U 
                                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x2b3U 
                                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                  ? 0x40U
                                                                  : 
                                                                 ((0x82b3U 
                                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                   ? 0x80U
                                                                   : 
                                                                  ((0x333U 
                                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                    ? 8U
                                                                    : 
                                                                   ((0x3b3U 
                                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                     ? 4U
                                                                     : 
                                                                    ((0x3bU 
                                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                      ? 1U
                                                                      : 
                                                                     ((0x803bU 
                                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                       ? 2U
                                                                       : 
                                                                      ((0xbbU 
                                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                        ? 0x20U
                                                                        : 
                                                                       ((0x2bbU 
                                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                         ? 0x100U
                                                                         : 
                                                                        ((0x82bbU 
                                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                          ? 0x200U
                                                                          : 
                                                                         ((0x433U 
                                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                           ? 0x400U
                                                                           : 
                                                                          ((0x4b3U 
                                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                            ? 0x800U
                                                                            : 
                                                                           ((0x5b3U 
                                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                             ? 0x1000U
                                                                             : 
                                                                            ((0x533U 
                                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                              ? 0x2000U
                                                                              : 
                                                                             ((0x43bU 
                                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                               ? 0x4000U
                                                                               : 
                                                                              ((0x633U 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                ? 0x8000U
                                                                                : 
                                                                               ((0x6b3U 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x10000U
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x20000U
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x40000U
                                                                                 : 
                                                                                ((0x733U 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x80000U
                                                                                 : 
                                                                                ((0x7b3U 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x100000U
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)
                                                                                 ? 0x200000U
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                                                << 0x16U)))))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
            ? 0x10U : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                        ? 0x20U : ((0x67U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                    ? 2U : ((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2)
                                             ? 8U : 
                                            ((((((((3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                   | (0x83U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x103U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (0x203U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x283U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x303U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (0x183U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                              ? 2U : 
                                             (((((0x23U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                 | (0xa3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                | (0x123U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x1a3U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))
                                               ? 4U
                                               : ((
                                                   ((((((((((((0x13U 
                                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                              | (0x113U 
                                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                             | (0x193U 
                                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                            | (0x213U 
                                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                           | (0x313U 
                                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                          | (0x393U 
                                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                         | (0x93U 
                                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                        | (0x293U 
                                                           == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                       | (0x4293U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                                      | (0x1bU 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     | (0x9bU 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x29bU 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x829bU 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))
                                                   ? 2U
                                                   : (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
            ? (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc)
            : (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel))
                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                 : 0ULL) | (QData)((IData)((1U & ((
                                                   ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)) 
                                                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                      >> 2U) 
                                                     & (~ 
                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_imm 
        = ((((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)((0x7ffU 
                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                   >> 0x14U)))))
                : 0ULL) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                            ? (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                    >> 0x1fU)))) 
                                << 0xbU) | (QData)((IData)(
                                                           ((0x7e0U 
                                                             & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                  >> 7U))))))
                            : 0ULL)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                                         ? (((- (QData)((IData)(
                                                                (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                        >> 7U)))))))
                                         : 0ULL)) | 
            ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
              ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                      >> 0x1fU)))) 
                  << 0x1fU) | (QData)((IData)((0x7ffff000U 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))))
              : 0ULL)) | ((0x20U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                           ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                   >> 0x1fU)))) 
                               << 0x14U) | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                                     >> 0x14U)))))))
                           : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1 
        = ((IData)((0U != (0x30U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))))
            ? 0U : (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                             >> 0xfU)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_rdata2 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_es)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_ex2mem_bits_result_T
            : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ms)
                ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T
                : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ws)
                    ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2
                    : ((0U == (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                        >> 0x14U)))
                        ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                       [(0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                  >> 0x14U))]))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_es 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_es_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest) 
              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ms 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest) 
              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ws 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_ws_forward_bits_en) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest) 
              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_ready_go 
        = (1U & ((~ ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_es) 
                       & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid))) 
                      | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ms) 
                         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_valid)))) 
                     | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs1_depend_ws) 
                        & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid))))) 
                 & (~ ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_es) 
                         & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid))) 
                        | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ms) 
                           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_forward_valid)))) 
                       | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rs2_depend_ws) 
                          & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid)))))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_valid 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_ready_go));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2))));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__1(vlSelf);
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

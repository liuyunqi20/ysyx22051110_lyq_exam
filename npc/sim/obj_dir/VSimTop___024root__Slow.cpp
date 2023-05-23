// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);

void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__1\n"); );
    // Body
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file);
    vlSelf->io_core_debug_debug_pc = 0ULL;
    vlSelf->io_core_debug_debug_rf_we = 0U;
    vlSelf->io_core_debug_debug_rf_wnum = 0U;
    vlSelf->io_core_debug_debug_rf_wdata = 0ULL;
    vlSelf->io_core_debug_raise_intr = 0U;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
}

void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void VSimTop___024root___settle__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175;
    SData/*9:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN;
    SData/*15:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0;
    IData/*16:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1;
    // Body
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt) 
            == (1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len))) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
              >> 2U));
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
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN 
        = ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                      >> 5U)) | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0 
        = ((0xfc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                       >> 0x10U)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r)
            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx)
                ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))
            : vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r);
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1 
        = ((0x1fc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                        >> 0xfU)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r)
            ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx)
                ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U]))))
            : vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
            >> 1U) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                      & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
            >> 1U) & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                      & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1 
        = (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
                 >> 5U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid)) 
                 | (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid))));
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
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3 
        = ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
           & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt) 
              == (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                  >> 3U) & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                             >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state))
            ? 0ULL : (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6 
        = (1U & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                   >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r))) 
                 | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                    >> 4U)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r) 
           | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r) 
           | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))
            ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array)
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3) 
           & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state) 
               >> 1U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr 
        = (((QData)((IData)(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en)
                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag
                              : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index) 
                                       << 4U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1 
        = ((IData)((0U != (0x30U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))))
            ? 0U : (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                             >> 0xfU)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata);
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
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T 
        = ((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr) 
           | (0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
            & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state) 
               >> 3U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid) 
           & (IData)((0U != (0x24U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state)))));
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

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_core_debug_debug_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_debug_rf_we = VL_RAND_RESET_I(1);
    vlSelf->io_core_debug_debug_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->io_core_debug_debug_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_raise_intr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___nextpc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type = VL_RAND_RESET_I(7);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r = VL_RAND_RESET_Q(60);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r = VL_RAND_RESET_Q(60);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___s3_ready_go_T_6 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23 = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25 = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___s3_ready_go_T_6 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_14 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_23 = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___state_T_25 = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__tmprdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_SimTop__DOT__my_axi_sram__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

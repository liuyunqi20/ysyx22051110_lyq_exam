// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp99;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))));
            tracep->chgBit(oldp+1,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                                    & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)))));
            tracep->chgQData(oldp+2,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_r),64);
            tracep->chgBit(oldp+4,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3));
            tracep->chgBit(oldp+5,((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate))));
            tracep->chgBit(oldp+6,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                    & (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)))));
            tracep->chgBit(oldp+7,((1U & (((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                           >> 2U) & 
                                          (~ (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))))));
            tracep->chgBit(oldp+8,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)) 
                                          & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate)))));
            tracep->chgBit(oldp+9,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok) 
                                    & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen))));
            tracep->chgBit(oldp+10,((1U & ((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)) 
                                           & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate)))));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                     & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
            tracep->chgBit(oldp+12,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                      >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
            tracep->chgBit(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5));
            tracep->chgQData(oldp+14,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_addr),64);
            tracep->chgCData(oldp+16,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))),8);
            tracep->chgBit(oldp+17,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 1U))));
            tracep->chgBit(oldp+18,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 2U))));
            tracep->chgQData(oldp+20,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U]))))),64);
            tracep->chgCData(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r),8);
            tracep->chgBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3));
            tracep->chgBit(oldp+24,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 3U))));
            tracep->chgBit(oldp+25,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
            tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr),64);
            tracep->chgCData(oldp+28,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)))),8);
            tracep->chgBit(oldp+29,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 1U))));
            tracep->chgBit(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 2U))));
            tracep->chgQData(oldp+32,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))),64);
            tracep->chgCData(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r),8);
            tracep->chgBit(oldp+35,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3));
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 3U))));
            tracep->chgQData(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_target),64);
            tracep->chgBit(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_branch_br_en_T_1));
            tracep->chgBit(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid));
            tracep->chgBit(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2));
            tracep->chgBit(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
            tracep->chgQData(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
            tracep->chgBit(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
            tracep->chgQData(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2),64);
            tracep->chgBit(oldp+51,((IData)((0x80000000ULL 
                                             != (0xe0000000ULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)))));
            tracep->chgBit(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T_4));
            tracep->chgIData(oldp+53,(((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data))),32);
            tracep->chgIData(oldp+54,((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),32);
            tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
            tracep->chgBit(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
            tracep->chgCData(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
            tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc_r),64);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
            tracep->chgBit(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
            tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data),64);
            tracep->chgBit(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___io_id2ex_ready_T_2));
            tracep->chgBit(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
            tracep->chgCData(oldp+68,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_dest),5);
            tracep->chgQData(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT___io_wb2rf_wdata_T_2),64);
            tracep->chgBit(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid));
            tracep->chgIData(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_alu_op),23);
            tracep->chgBit(oldp+73,(((0x37U != (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                     & ((0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))))));
            tracep->chgBit(oldp+74,((((0x37U == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
            tracep->chgSData(oldp+75,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
                                        ? 1U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                                 ? 0x80U
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))
                                                  ? 0x100U
                                                  : 
                                                 ((0x63U 
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
                                                        | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9)))))))))))),9);
            tracep->chgBit(oldp+76,((((((0x37U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                     | (((((((0x63U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                             & (0xe3U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0x263U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x2e3U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0x363U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x3e3U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & ((((((((3U 
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
                                           | (((((0x23U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                 & (0xa3U 
                                                    != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                & (0x123U 
                                                   != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0x1a3U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
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
                                                               | (0x9bU 
                                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                              | (0x29bU 
                                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                             | (0x829bU 
                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                            | (0x33U 
                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                           | (0x8033U 
                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                          | (0xb3U 
                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                         | (0x133U 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                        | (0x1b3U 
                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                       | (0x233U 
                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                      | (0x2b3U 
                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                     | (0x82b3U 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x333U 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x3b3U 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                  | (0x3bU 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
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
                                                              | (0x7b3U 
                                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                             | (0x73bU 
                                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                            | (0x7bbU 
                                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                           | (0xf3U 
                                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                          | (0x173U 
                                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                         | (0x1f3U 
                                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                        | (0x2f3U 
                                                           == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                       | (0x373U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                      | (0x3f3U 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     | (0x73U 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                    | (0x30200073U 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)))))))));
            tracep->chgBit(oldp+77,((((((((((((0x37U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                              & (0x17U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                             & (0x6fU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                            & (0x67U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                           & (0x63U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0xe3U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x263U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (((((((3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
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
                                        | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
            tracep->chgBit(oldp+78,((((((((((((0x37U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                              & (0x17U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                             & (0x6fU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                            & (0x67U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                           & (0x63U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0xe3U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x263U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x2e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x363U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x3e3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & (((((((((((3U 
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
                                           | (0x23U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          | (0xa3U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x123U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
            tracep->chgBit(oldp+79,((((((((((((((((
                                                   (((0x37U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                     & (0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                    & (0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                   & (0x67U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                  & (0x63U 
                                                     != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 & (0xe3U 
                                                    != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                & (0x263U 
                                                   != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0x2e3U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              & (0x363U 
                                                 != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             & (0x3e3U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x83U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (0x103U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x203U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x303U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x183U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & ((((0x23U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                          | (0xa3U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         | (0x123U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))));
            tracep->chgCData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_mem_type),7);
            tracep->chgBit(oldp+81,((((((((((((((((
                                                   (0x37U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                   & (0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                  & (0x6fU 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                 & (0x67U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                & (0x63U 
                                                   != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0xe3U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              & (0x263U 
                                                 != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             & (0x2e3U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0x363U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x3e3U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                          & (3U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                         & (0x83U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                        & (0x103U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                       & (0x203U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                      & (0x283U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                     & ((((((((((((((((0x303U 
                                                       != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                      & (0x183U 
                                                         != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     & (0x23U 
                                                        != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                    & (0xa3U 
                                                       != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                   & (0x123U 
                                                      != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  & (0x1a3U 
                                                     != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 & (0x13U 
                                                    != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                & (0x113U 
                                                   != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               & (0x193U 
                                                  != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              & (0x213U 
                                                 != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             & (0x313U 
                                                != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            & (0x393U 
                                               != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           & (0x93U 
                                              != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                          & (0x293U 
                                             != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                         & (0x4293U 
                                            != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                        & (((((0x1bU 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                              | (0x9bU 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                             | (0x29bU 
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                            | (0x829bU 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                           | ((((((0x33U 
                                                   != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                  & (0x8033U 
                                                     != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                 & (0xb3U 
                                                    != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                & (0x133U 
                                                   != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                               & (0x1b3U 
                                                  != vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11)))))));
            tracep->chgCData(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_ex_sel),3);
            tracep->chgCData(oldp+83,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14) 
                                        | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15))
                                        ? 0U : ((0xf3U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                 ? 1U
                                                 : 
                                                ((0x173U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x1f3U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                   ? 4U
                                                   : 
                                                  ((0x2f3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x373U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x3f3U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                     << 2U)))))))),3);
            tracep->chgCData(oldp+84,((((((((((((((
                                                   ((((((((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)) 
                                                          | (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                        | (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                                       | (0x63U 
                                                          == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                      | (0xe3U 
                                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                     | (0x263U 
                                                        == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                    | (0x2e3U 
                                                       == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                   | (0x363U 
                                                      == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                  | (0x3e3U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                 | (3U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
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
                                          | (((((((((((((((((0x23U 
                                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                            | (0xa3U 
                                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                           | (0x123U 
                                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                          | (0x1a3U 
                                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                                         | (0x13U 
                                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
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
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                                         | (((((((((((((((((0x33U 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
                                                           | (0x8033U 
                                                              == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                          | (0xb3U 
                                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                         | (0x133U 
                                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                        | (0x1b3U 
                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                       | (0x233U 
                                                          == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                      | (0x2b3U 
                                                         == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                     | (0x82b3U 
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                    | (0x333U 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                   | (0x3b3U 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                  | (0x3bU 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                 | (0x803bU 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                | (0xbbU 
                                                   == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                               | (0x2bbU 
                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                              | (0x82bbU 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                             | (0x433U 
                                                == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                            | (0x4b3U 
                                               == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1))) 
                                        | (((((((((((((((((0x5b3U 
                                                           == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1) 
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
                                                   | (0x7b3U 
                                                      == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                  | (0x73bU 
                                                     == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                 | (0x7bbU 
                                                    == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                                | (0xf3U 
                                                   == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                               | (0x173U 
                                                  == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                              | (0x1f3U 
                                                 == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                             | (0x2f3U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                            | (0x373U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
                                           | (0x3f3U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))
                                        ? 0U : ((0x73U 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst)
                                                 ? 1U
                                                 : 
                                                ((0x30200073U 
                                                  == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst) 
                                                 << 1U)))),2);
            tracep->chgCData(oldp+85,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+86,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc))),64);
            tracep->chgCData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1),5);
            tracep->chgCData(oldp+89,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+90,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1))
                                        ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                       [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__rf_raddr1])),64);
            tracep->chgQData(oldp+92,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
            tracep->chgQData(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_bits_imm),64);
            tracep->chgSData(oldp+96,((vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst),32);
            tracep->chgIData(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_pc),32);
            tracep->chgBit(oldp+99,(((IData)((0x73U 
                                              == (0xfffffU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                     & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                               >> 0x14U)))));
            tracep->chgQData(oldp+100,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))),64);
            tracep->chgCData(oldp+102,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
            tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
            tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
            tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
            tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
            tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
            tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
            tracep->chgQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
            tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
            tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
            tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
            tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
            tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
            tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
            tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
            tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
            tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
            tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
            tracep->chgQData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
            tracep->chgQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
            tracep->chgQData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
            tracep->chgQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
            tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
            tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
            tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
            tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
            tracep->chgQData(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
            tracep->chgQData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
            tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
            tracep->chgQData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
            tracep->chgBit(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ex2mem_ready_T_2));
            tracep->chgBit(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_ms_forward_valid_T));
            tracep->chgBit(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_valid));
            tracep->chgCData(oldp+170,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_dest),5);
            tracep->chgQData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_mem2wb_bits_result_T),64);
            tracep->chgBit(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ws_valid));
            tracep->chgBit(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_valid));
            tracep->chgIData(oldp+175,((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc)),32);
            tracep->chgBit(oldp+176,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_gr_we));
            tracep->chgCData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_dest),5);
            tracep->chgBit(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_wb_sel));
            tracep->chgBit(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_en));
            tracep->chgBit(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wr));
            tracep->chgCData(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_type),7);
            tracep->chgCData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_op),3);
            tracep->chgCData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_exc_type),2);
            tracep->chgQData(oldp+184,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                                         ? (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc)
                                         : (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel))
                                              ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                                              : 0ULL) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                                    >> 1U) 
                                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)) 
                                                                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel) 
                                                                      >> 2U) 
                                                                     & (~ 
                                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))))))))),64);
            tracep->chgQData(oldp+186,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_mem_wdata),64);
            tracep->chgSData(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_csr_num),12);
            tracep->chgQData(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1),64);
            tracep->chgQData(oldp+191,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
                                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                                         : (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc 
                                            + vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm))),64);
            tracep->chgBit(oldp+193,((((((((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                               >> 1U) 
                                              & (0ULL 
                                                 == vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res)) 
                                             | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                                 >> 2U) 
                                                & (0U 
                                                   != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res))) 
                                            | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                                >> 3U) 
                                               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2))) 
                                           | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                               >> 4U) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)))) 
                                          | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                              >> 5U) 
                                             & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))) 
                                         | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                             >> 6U) 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])) 
                                        | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                           >> 7U)) 
                                       | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type) 
                                          >> 8U)) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid))));
            tracep->chgBit(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
            tracep->chgIData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op),23);
            tracep->chgBit(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src1_sel));
            tracep->chgBit(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_src2_sel));
            tracep->chgSData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_br_type),9);
            tracep->chgBit(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rv64w));
            tracep->chgCData(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_ex_sel),3);
            tracep->chgQData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_pc),64);
            tracep->chgCData(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs1_addr),5);
            tracep->chgCData(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2_addr),5);
            tracep->chgQData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_rs2),64);
            tracep->chgQData(oldp+207,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_imm),64);
            tracep->chgBit(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs1_depend_ms));
            tracep->chgBit(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs1_depend_ws));
            tracep->chgBit(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs2_depend_ms));
            tracep->chgBit(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__rs2_depend_ws));
            tracep->chgQData(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
            tracep->chgBit(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
            tracep->chgBit(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
            tracep->chgBit(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_ready_go));
            tracep->chgQData(oldp+218,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
            tracep->chgQData(oldp+220,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
            tracep->chgQData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
            tracep->chgBit(oldp+224,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
            tracep->chgBit(oldp+225,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__ds_es_r_alu_op)
                                             ? (((IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (~ (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                             >> 0x3fU)))) 
                                                & ((IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                            >> 0x3fU)) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                    >> 0x1fU)))
                                             : (((IData)(
                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                          >> 0x3fU)) 
                                                 ^ (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                            >> 0x3fU))) 
                                                & ((IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                            >> 0x3fU)) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                    >> 0x1fU)))))));
            VL_EXTEND_WQ(127,64, __Vtemp89, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp90, __Vtemp89, 
                          (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
            __Vtemp91[0U] = __Vtemp90[0U];
            __Vtemp91[1U] = __Vtemp90[1U];
            __Vtemp91[2U] = __Vtemp90[2U];
            __Vtemp91[3U] = (0x7fffffffU & __Vtemp90[3U]);
            tracep->chgWData(oldp+226,(__Vtemp91),127);
            __Vtemp93[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            __Vtemp93[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                     >> 0x20U));
            __Vtemp93[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                           >> 0x3fU)));
            __Vtemp94[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
            __Vtemp94[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                     >> 0x20U));
            __Vtemp94[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                           >> 0x3fU)));
            VL_DIVS_WWW(65, __Vtemp95, __Vtemp93, __Vtemp94);
            __Vtemp96[0U] = __Vtemp95[0U];
            __Vtemp96[1U] = __Vtemp95[1U];
            __Vtemp96[2U] = (1U & __Vtemp95[2U]);
            tracep->chgWData(oldp+230,(__Vtemp96),65);
            tracep->chgQData(oldp+233,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
            tracep->chgIData(oldp+235,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
            tracep->chgIData(oldp+236,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
            tracep->chgIData(oldp+237,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
            tracep->chgBit(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+241,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
            tracep->chgIData(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_pc),32);
            tracep->chgBit(oldp+243,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_gr_we));
            tracep->chgCData(oldp+244,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_op),3);
            tracep->chgCData(oldp+245,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_exc_type),2);
            tracep->chgSData(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_csr_num),12);
            tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_rs1),64);
            tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
            tracep->chgBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wr));
            tracep->chgQData(oldp+251,((0xfffffffffffffff8ULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)),64);
            tracep->chgQData(oldp+253,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                            ? (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
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
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                              ? (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
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
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                             ? (((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata)))
                                             : 0ULL)) 
                                        | ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata
                                            : 0ULL))),64);
            tracep->chgCData(oldp+255,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
            tracep->chgBit(oldp+256,((IData)((0x80000000ULL 
                                              != (0xe0000000ULL 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result)))));
            tracep->chgBit(oldp+257,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_wb_sel));
            tracep->chgBit(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_en));
            tracep->chgCData(oldp+259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_type),7);
            tracep->chgQData(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result),64);
            tracep->chgQData(oldp+262,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_mem_wdata),64);
            tracep->chgBit(oldp+264,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_br_br_en));
            tracep->chgCData(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),3);
            tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
            tracep->chgBit(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_ready_go));
            tracep->chgCData(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
            tracep->chgSData(oldp+269,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
            tracep->chgIData(oldp+270,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
            tracep->chgQData(oldp+271,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
            tracep->chgBit(oldp+273,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
            tracep->chgQData(oldp+274,(((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                       >> 0x3fU)))
                                         ? (0xfffffffffffffffcULL 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                         : (4ULL + 
                                            (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
            tracep->chgQData(oldp+276,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
            tracep->chgCData(oldp+278,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_op),3);
            tracep->chgSData(oldp+279,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_csr_num),12);
            tracep->chgQData(oldp+280,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_rs1),64);
            tracep->chgBit(oldp+282,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))));
            tracep->chgBit(oldp+283,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+284,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc))),64);
            tracep->chgQData(oldp+286,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type)) 
                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgIData(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_pc),32);
            tracep->chgBit(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_gr_we));
            tracep->chgCData(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_exc_type),2);
            tracep->chgQData(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__ms_ws_r_result),64);
            tracep->chgBit(oldp+293,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
            tracep->chgCData(oldp+294,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
            tracep->chgCData(oldp+295,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
            tracep->chgCData(oldp+296,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+297,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
            tracep->chgQData(oldp+299,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
            tracep->chgQData(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
            tracep->chgQData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
            tracep->chgQData(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
            tracep->chgQData(oldp+307,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
            tracep->chgQData(oldp+309,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
            tracep->chgBit(oldp+311,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
                __Vtemp99[0U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata));
                __Vtemp99[1U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata) 
                                         >> 0x20U));
                __Vtemp99[2U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                          : 0ULL));
                __Vtemp99[3U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                           : 0ULL) 
                                         >> 0x20U));
            } else {
                __Vtemp99[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
                __Vtemp99[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                         >> 0x20U));
                __Vtemp99[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
                __Vtemp99[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                         >> 0x20U));
            }
            tracep->chgWData(oldp+313,(__Vtemp99),128);
            tracep->chgCData(oldp+317,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+318,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+319,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt))));
            tracep->chgQData(oldp+320,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
            tracep->chgBit(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
            tracep->chgBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
            tracep->chgQData(oldp+331,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
            tracep->chgBit(oldp+333,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
            tracep->chgBit(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
            tracep->chgCData(oldp+335,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
            tracep->chgBit(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
            tracep->chgBit(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
            tracep->chgBit(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
            tracep->chgWData(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
            tracep->chgCData(oldp+343,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+344,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+345,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
            tracep->chgQData(oldp+346,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+350,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
            tracep->chgBit(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
            tracep->chgBit(oldp+352,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+353,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
            tracep->chgQData(oldp+357,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
            tracep->chgCData(oldp+361,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
            tracep->chgBit(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
            tracep->chgBit(oldp+366,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                          | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                         | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)))));
            tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
            tracep->chgBit(oldp+368,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
            tracep->chgBit(oldp+369,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
            tracep->chgQData(oldp+370,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
            tracep->chgCData(oldp+372,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),6);
            tracep->chgBit(oldp+373,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgCData(oldp+374,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+375,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+376,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2))),4);
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
            tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
            tracep->chgIData(oldp+379,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
            tracep->chgQData(oldp+380,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
            tracep->chgIData(oldp+386,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+391,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
            tracep->chgBit(oldp+392,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
            tracep->chgIData(oldp+393,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
            tracep->chgQData(oldp+394,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+396,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+398,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
            tracep->chgBit(oldp+399,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
            tracep->chgIData(oldp+400,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
            tracep->chgQData(oldp+401,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+405,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+406,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+407,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+409,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+410,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+411,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+412,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+413,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgBit(oldp+414,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))));
            tracep->chgCData(oldp+415,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))))),2);
            tracep->chgBit(oldp+416,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
            tracep->chgBit(oldp+417,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
            tracep->chgIData(oldp+418,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                                            : 0U) | 
                                          ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                            : 0U)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                             : 0U)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                                            : 0U))),23);
            tracep->chgQData(oldp+419,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                                            : 0ULL))),64);
            tracep->chgQData(oldp+421,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                                            : 0ULL))),64);
            tracep->chgCData(oldp+423,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array),4);
            tracep->chgCData(oldp+424,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
            tracep->chgCData(oldp+425,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H),4);
            tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+427,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+428,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+429,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
            tracep->chgIData(oldp+430,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgQData(oldp+431,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_4),64);
            tracep->chgQData(oldp+433,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_4),64);
            tracep->chgBit(oldp+435,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
            tracep->chgQData(oldp+436,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+438,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgCData(oldp+439,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+440,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+441,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+442,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+443,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+444,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+446,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+448,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+449,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+450,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+452,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+453,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__write_hit));
            tracep->chgBit(oldp+454,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+455,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+456,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come));
            tracep->chgBit(oldp+457,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN));
            tracep->chgBit(oldp+458,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21)))));
            tracep->chgWData(oldp+459,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27),128);
            tracep->chgWData(oldp+463,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata),128);
            tracep->chgBit(oldp+467,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
            tracep->chgBit(oldp+468,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))));
            tracep->chgBit(oldp+469,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN));
            tracep->chgWData(oldp+470,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata),128);
            tracep->chgBit(oldp+474,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
            tracep->chgBit(oldp+475,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN));
            tracep->chgWData(oldp+476,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata),128);
            tracep->chgBit(oldp+480,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
            tracep->chgBit(oldp+481,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN));
            tracep->chgWData(oldp+482,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata),128);
            tracep->chgBit(oldp+486,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
            tracep->chgCData(oldp+487,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),5);
            tracep->chgBit(oldp+488,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
            tracep->chgQData(oldp+489,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
            tracep->chgQData(oldp+491,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
            tracep->chgBit(oldp+493,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
            tracep->chgQData(oldp+494,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
            tracep->chgQData(oldp+496,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
            tracep->chgBit(oldp+498,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
            tracep->chgQData(oldp+499,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
            tracep->chgQData(oldp+501,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
            tracep->chgBit(oldp+503,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
            tracep->chgQData(oldp+504,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
            tracep->chgQData(oldp+506,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
            tracep->chgCData(oldp+508,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),6);
            tracep->chgBit(oldp+509,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgCData(oldp+510,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+511,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+512,((8U & ((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__es_ms_r_result 
                                                       >> 3U)) 
                                              << 3U))),4);
            tracep->chgBit(oldp+513,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
            tracep->chgBit(oldp+514,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
            tracep->chgIData(oldp+515,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
            tracep->chgQData(oldp+516,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+518,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+520,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
            tracep->chgBit(oldp+521,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
            tracep->chgIData(oldp+522,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
            tracep->chgQData(oldp+523,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+527,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
            tracep->chgBit(oldp+528,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
            tracep->chgIData(oldp+529,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
            tracep->chgQData(oldp+530,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+532,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+534,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
            tracep->chgBit(oldp+535,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
            tracep->chgIData(oldp+536,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
            tracep->chgQData(oldp+537,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+539,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+541,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+542,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+543,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+545,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+546,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+547,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+548,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+549,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgBit(oldp+550,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))));
            tracep->chgCData(oldp+551,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))))),2);
            tracep->chgBit(oldp+552,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
            tracep->chgBit(oldp+553,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
            tracep->chgIData(oldp+554,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag
                                            : 0U) | 
                                          ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag
                                            : 0U)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag
                                             : 0U)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag
                                            : 0U))),23);
            tracep->chgQData(oldp+555,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))
                                            : 0ULL))),64);
            tracep->chgQData(oldp+557,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))
                                            : 0ULL))),64);
            tracep->chgCData(oldp+559,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array),4);
            tracep->chgCData(oldp+560,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
            tracep->chgCData(oldp+561,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H),4);
            tracep->chgBit(oldp+562,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+563,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+564,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+565,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
            tracep->chgIData(oldp+566,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgQData(oldp+567,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_4),64);
            tracep->chgQData(oldp+569,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_4),64);
            tracep->chgBit(oldp+571,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
            tracep->chgQData(oldp+572,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+574,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgCData(oldp+575,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+576,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+577,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+578,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+579,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+580,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+582,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+584,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+585,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+586,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+588,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+589,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__write_hit));
            tracep->chgBit(oldp+590,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+591,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+592,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come));
            tracep->chgBit(oldp+593,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN));
            tracep->chgBit(oldp+594,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21)))));
            tracep->chgWData(oldp+595,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27),128);
            tracep->chgWData(oldp+599,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata),128);
            tracep->chgBit(oldp+603,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_21));
            tracep->chgBit(oldp+604,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))));
            tracep->chgBit(oldp+605,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN));
            tracep->chgWData(oldp+606,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata),128);
            tracep->chgBit(oldp+610,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
            tracep->chgBit(oldp+611,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN));
            tracep->chgWData(oldp+612,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata),128);
            tracep->chgBit(oldp+616,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
            tracep->chgBit(oldp+617,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN));
            tracep->chgWData(oldp+618,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata),128);
            tracep->chgBit(oldp+622,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
            tracep->chgCData(oldp+623,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),5);
            tracep->chgBit(oldp+624,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
            tracep->chgQData(oldp+625,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
            tracep->chgQData(oldp+627,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
            tracep->chgBit(oldp+629,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
            tracep->chgQData(oldp+630,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
            tracep->chgQData(oldp+632,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
            tracep->chgBit(oldp+634,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
            tracep->chgQData(oldp+635,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
            tracep->chgQData(oldp+637,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
            tracep->chgBit(oldp+639,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
            tracep->chgQData(oldp+640,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
            tracep->chgQData(oldp+642,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
            tracep->chgQData(oldp+644,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
            tracep->chgQData(oldp+646,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+648,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+649,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+650,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
            tracep->chgBit(oldp+651,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
            tracep->chgBit(oldp+652,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
            tracep->chgBit(oldp+653,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                            >> 2U))));
            tracep->chgBit(oldp+654,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
            tracep->chgQData(oldp+655,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
            tracep->chgCData(oldp+657,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                         ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                         : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
            tracep->chgBit(oldp+658,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 1U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 1U)))));
            tracep->chgBit(oldp+659,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
            tracep->chgQData(oldp+660,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
            tracep->chgBit(oldp+662,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
            tracep->chgQData(oldp+663,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[2U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r[0U]))))
                                         : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[2U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r[0U])))))),64);
            tracep->chgCData(oldp+665,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                         : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
            tracep->chgBit(oldp+666,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                       ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
            tracep->chgBit(oldp+667,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 3U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 3U)))));
            tracep->chgBit(oldp+668,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
            tracep->chgBit(oldp+669,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
            tracep->chgBit(oldp+670,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
            tracep->chgBit(oldp+671,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
            tracep->chgQData(oldp+672,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+674,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
            tracep->chgBit(oldp+675,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
            tracep->chgBit(oldp+676,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
            tracep->chgQData(oldp+677,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                          ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                             >> 3U)
                                          : ((0x1ffffffffffffffeULL 
                                              & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                 >> 3U)) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                        << 3U)),64);
            tracep->chgBit(oldp+679,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                       >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
            tracep->chgQData(oldp+680,(((0xfffffffffffffff0ULL 
                                         & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                           << 3U))))),64);
            tracep->chgCData(oldp+682,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
            tracep->chgCData(oldp+683,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
            tracep->chgQData(oldp+684,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
            tracep->chgCData(oldp+686,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
            tracep->chgCData(oldp+687,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
            tracep->chgBit(oldp+688,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
            tracep->chgQData(oldp+689,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
            tracep->chgBit(oldp+691,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
            tracep->chgBit(oldp+692,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
            tracep->chgBit(oldp+693,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
            tracep->chgBit(oldp+694,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
            tracep->chgBit(oldp+695,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
            tracep->chgBit(oldp+696,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
            tracep->chgBit(oldp+697,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
            tracep->chgBit(oldp+698,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
            tracep->chgBit(oldp+699,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
            tracep->chgBit(oldp+700,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
            tracep->chgBit(oldp+701,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
            tracep->chgBit(oldp+702,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
            tracep->chgBit(oldp+703,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
            tracep->chgBit(oldp+704,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        }
        tracep->chgBit(oldp+705,(vlSelf->clock));
        tracep->chgBit(oldp+706,(vlSelf->reset));
        tracep->chgQData(oldp+707,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgBit(oldp+709,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+710,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+711,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+713,(vlSelf->io_core_debug_raise_intr));
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

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
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
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
            tracep->chgBit(oldp+10,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1) 
                                     & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
            tracep->chgBit(oldp+11,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                      >> 2U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen))));
            tracep->chgBit(oldp+12,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5));
            tracep->chgQData(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
            tracep->chgBit(oldp+15,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 1U))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 2U))));
            tracep->chgQData(oldp+17,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx)
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
            tracep->chgCData(oldp+19,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r),8);
            tracep->chgBit(oldp+20,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3));
            tracep->chgBit(oldp+21,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                           >> 3U))));
            tracep->chgBit(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_ar_valid_T_5));
            tracep->chgQData(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr),64);
            tracep->chgCData(oldp+25,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)))),8);
            tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 1U))));
            tracep->chgBit(oldp+27,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_aw_valid_T_3));
            tracep->chgBit(oldp+28,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 2U))));
            tracep->chgQData(oldp+29,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx)
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
            tracep->chgCData(oldp+31,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r),8);
            tracep->chgBit(oldp+32,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                           >> 3U))));
            tracep->chgQData(oldp+34,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
            tracep->chgQData(oldp+36,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
            tracep->chgBit(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
            tracep->chgBit(oldp+39,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1))));
            tracep->chgQData(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
            tracep->chgBit(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
            tracep->chgQData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
            tracep->chgBit(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok));
            tracep->chgBit(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
            tracep->chgQData(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
            tracep->chgBit(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_2));
            tracep->chgIData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
            tracep->chgBit(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
            tracep->chgBit(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
            tracep->chgCData(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
            tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
            tracep->chgQData(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__fs_inst_data),64);
            tracep->chgBit(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
            tracep->chgCData(oldp+60,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
            tracep->chgIData(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
            tracep->chgBit(oldp+64,(((0x37U != (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     & ((0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
            tracep->chgBit(oldp+65,((((0x37U == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
            tracep->chgSData(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
            tracep->chgBit(oldp+67,((((((0x37U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
                                                        == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                    | (0x30200073U 
                                                       == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)))))))));
            tracep->chgBit(oldp+68,((((((((((((0x37U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                              & (0x17U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                             & (0x6fU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                            & (0x67U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            tracep->chgBit(oldp+69,((((((((((((0x37U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                              & (0x17U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                             & (0x6fU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                            & (0x67U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            tracep->chgBit(oldp+70,((((((((((((((((
                                                   (((0x37U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                     & (0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                    & (0x6fU 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                   & (0x67U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            tracep->chgCData(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
            tracep->chgBit(oldp+72,((((((((((((((((
                                                   (0x37U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                                   & (0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                  & (0x6fU 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                                 & (0x67U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            tracep->chgCData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
            tracep->chgCData(oldp+74,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
            tracep->chgCData(oldp+75,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
            tracep->chgQData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
            tracep->chgQData(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
            tracep->chgQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
            tracep->chgSData(oldp+82,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+83,(((IData)((0x73U 
                                              == (0xfffffU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                               >> 0x14U)))));
            tracep->chgQData(oldp+84,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
            tracep->chgCData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
            tracep->chgCData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
            tracep->chgCData(oldp+88,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+89,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
            tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
            tracep->chgQData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
            tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
            tracep->chgQData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
            tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
            tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
            tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
            tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
            tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
            tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
            tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
            tracep->chgQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
            tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
            tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
            tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
            tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
            tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
            tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
            tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
            tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
            tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
            tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
            tracep->chgQData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
            tracep->chgQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
            tracep->chgQData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
            tracep->chgQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
            tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
            tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
            tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
            tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
            tracep->chgBit(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
            tracep->chgBit(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
            tracep->chgQData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
            tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
            tracep->chgBit(oldp+165,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
            tracep->chgBit(oldp+166,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
            VL_EXTEND_WQ(127,64, __Vtemp67, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp68, __Vtemp67, 
                          (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
            __Vtemp69[0U] = __Vtemp68[0U];
            __Vtemp69[1U] = __Vtemp68[1U];
            __Vtemp69[2U] = __Vtemp68[2U];
            __Vtemp69[3U] = (0x7fffffffU & __Vtemp68[3U]);
            tracep->chgWData(oldp+167,(__Vtemp69),127);
            __Vtemp71[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            __Vtemp71[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                     >> 0x20U));
            __Vtemp71[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                           >> 0x3fU)));
            __Vtemp72[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
            __Vtemp72[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                     >> 0x20U));
            __Vtemp72[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                           >> 0x3fU)));
            VL_DIVS_WWW(65, __Vtemp73, __Vtemp71, __Vtemp72);
            __Vtemp74[0U] = __Vtemp73[0U];
            __Vtemp74[1U] = __Vtemp73[1U];
            __Vtemp74[2U] = (1U & __Vtemp73[2U]);
            tracep->chgWData(oldp+171,(__Vtemp74),65);
            tracep->chgQData(oldp+174,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
            tracep->chgIData(oldp+176,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
            tracep->chgIData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
            tracep->chgIData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
            tracep->chgBit(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
            tracep->chgBit(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
            tracep->chgQData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
            tracep->chgBit(oldp+186,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_3));
            tracep->chgQData(oldp+187,((0xfffffffffffffff8ULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
            tracep->chgCData(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
            tracep->chgBit(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
            tracep->chgCData(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),2);
            tracep->chgQData(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
            tracep->chgQData(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
            tracep->chgCData(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
            tracep->chgSData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
            tracep->chgIData(oldp+198,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
            tracep->chgQData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
            tracep->chgQData(oldp+201,(((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                       >> 0x3fU)))
                                         ? (0xfffffffffffffffcULL 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                         : (4ULL + 
                                            (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
            tracep->chgQData(oldp+203,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
            tracep->chgBit(oldp+205,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
            tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+207,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgBit(oldp+209,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
            tracep->chgCData(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
            tracep->chgCData(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
            tracep->chgCData(oldp+212,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+214,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
            tracep->chgQData(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
            tracep->chgQData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
            tracep->chgQData(oldp+219,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
            tracep->chgQData(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
            tracep->chgQData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
            tracep->chgQData(oldp+225,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
            tracep->chgBit(oldp+227,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r) 
                                      | (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_rd_bits_rlast_T_3))));
            tracep->chgCData(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
            tracep->chgBit(oldp+229,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
            tracep->chgBit(oldp+230,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+231,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
            tracep->chgQData(oldp+235,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
            tracep->chgBit(oldp+237,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
            tracep->chgBit(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
            tracep->chgCData(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
            tracep->chgBit(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
            tracep->chgBit(oldp+241,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
            tracep->chgWData(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
            tracep->chgCData(oldp+246,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+248,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
            tracep->chgQData(oldp+249,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
            tracep->chgBit(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
            tracep->chgBit(oldp+254,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
            tracep->chgBit(oldp+255,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+256,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
            tracep->chgQData(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
            tracep->chgBit(oldp+262,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
            tracep->chgBit(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
            tracep->chgCData(oldp+264,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
            tracep->chgBit(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
            tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
            tracep->chgBit(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
            tracep->chgBit(oldp+269,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_req_ready));
            tracep->chgBit(oldp+270,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
            tracep->chgBit(oldp+271,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
            tracep->chgBit(oldp+272,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
            tracep->chgQData(oldp+273,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
            tracep->chgCData(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr),6);
            tracep->chgBit(oldp+276,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
            tracep->chgCData(oldp+277,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+278,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+279,((8U & ((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                       >> 3U)) 
                                              << 3U))),4);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+286,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+290,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
            tracep->chgBit(oldp+296,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+297,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+299,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+302,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgCData(oldp+306,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H)))))),2);
            tracep->chgQData(oldp+307,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                              ? (((QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                             ? (((QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))
                                            : 0ULL))),64);
            tracep->chgQData(oldp+309,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                              ? (((QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                             ? (((QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))
                                            : 0ULL))),64);
            tracep->chgCData(oldp+311,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
            tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+313,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+314,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+315,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
            tracep->chgBit(oldp+316,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
            tracep->chgQData(oldp+317,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgIData(oldp+320,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgCData(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+330,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+331,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+332,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+334,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+335,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_hit));
            tracep->chgBit(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
            tracep->chgQData(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
            tracep->chgQData(oldp+341,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+343,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+344,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
            tracep->chgBit(oldp+346,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
            tracep->chgBit(oldp+348,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                            >> 2U))));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
            tracep->chgQData(oldp+350,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
            tracep->chgCData(oldp+352,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                         ? 0U : (1U 
                                                 & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
            tracep->chgBit(oldp+353,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 1U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 1U)))));
            tracep->chgBit(oldp+354,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
            tracep->chgQData(oldp+355,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
            tracep->chgCData(oldp+357,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                         : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
            tracep->chgBit(oldp+358,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                       ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 3U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 3U)))));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
            tracep->chgBit(oldp+362,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
            tracep->chgQData(oldp+363,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
            tracep->chgBit(oldp+366,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                       >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
            tracep->chgQData(oldp+367,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                          ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                             >> 3U)
                                          : ((0x1ffffffffffffffeULL 
                                              & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                 >> 3U)) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                        << 3U)),64);
            tracep->chgQData(oldp+369,(((0xfffffffffffffff0ULL 
                                         & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                           << 3U))))),64);
            tracep->chgCData(oldp+371,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
            tracep->chgCData(oldp+372,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
            tracep->chgQData(oldp+373,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
            tracep->chgCData(oldp+375,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
            tracep->chgCData(oldp+376,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
            tracep->chgQData(oldp+378,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
            tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
            tracep->chgBit(oldp+382,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12));
            tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam__io_WEN));
            tracep->chgWData(oldp+384,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata),128);
            tracep->chgWData(oldp+388,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_0),128);
            tracep->chgWData(oldp+392,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_1),128);
            tracep->chgWData(oldp+396,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_2),128);
            tracep->chgWData(oldp+400,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_3),128);
            tracep->chgWData(oldp+404,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_4),128);
            tracep->chgWData(oldp+408,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_5),128);
            tracep->chgWData(oldp+412,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_6),128);
            tracep->chgWData(oldp+416,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_7),128);
            tracep->chgWData(oldp+420,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_8),128);
            tracep->chgWData(oldp+424,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_9),128);
            tracep->chgWData(oldp+428,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_10),128);
            tracep->chgWData(oldp+432,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_11),128);
            tracep->chgWData(oldp+436,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_12),128);
            tracep->chgWData(oldp+440,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_13),128);
            tracep->chgWData(oldp+444,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_14),128);
            tracep->chgWData(oldp+448,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_15),128);
            tracep->chgWData(oldp+452,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_16),128);
            tracep->chgWData(oldp+456,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_17),128);
            tracep->chgWData(oldp+460,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_18),128);
            tracep->chgWData(oldp+464,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_19),128);
            tracep->chgWData(oldp+468,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_20),128);
            tracep->chgWData(oldp+472,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_21),128);
            tracep->chgWData(oldp+476,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_22),128);
            tracep->chgWData(oldp+480,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_23),128);
            tracep->chgWData(oldp+484,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_24),128);
            tracep->chgWData(oldp+488,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_25),128);
            tracep->chgWData(oldp+492,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_26),128);
            tracep->chgWData(oldp+496,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_27),128);
            tracep->chgWData(oldp+500,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_28),128);
            tracep->chgWData(oldp+504,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_29),128);
            tracep->chgWData(oldp+508,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_30),128);
            tracep->chgWData(oldp+512,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_31),128);
            tracep->chgWData(oldp+516,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_32),128);
            tracep->chgWData(oldp+520,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_33),128);
            tracep->chgWData(oldp+524,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_34),128);
            tracep->chgWData(oldp+528,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_35),128);
            tracep->chgWData(oldp+532,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_36),128);
            tracep->chgWData(oldp+536,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_37),128);
            tracep->chgWData(oldp+540,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_38),128);
            tracep->chgWData(oldp+544,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_39),128);
            tracep->chgWData(oldp+548,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_40),128);
            tracep->chgWData(oldp+552,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_41),128);
            tracep->chgWData(oldp+556,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_42),128);
            tracep->chgWData(oldp+560,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_43),128);
            tracep->chgWData(oldp+564,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_44),128);
            tracep->chgWData(oldp+568,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_45),128);
            tracep->chgWData(oldp+572,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_46),128);
            tracep->chgWData(oldp+576,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_47),128);
            tracep->chgWData(oldp+580,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_48),128);
            tracep->chgWData(oldp+584,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_49),128);
            tracep->chgWData(oldp+588,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_50),128);
            tracep->chgWData(oldp+592,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_51),128);
            tracep->chgWData(oldp+596,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_52),128);
            tracep->chgWData(oldp+600,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_53),128);
            tracep->chgWData(oldp+604,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_54),128);
            tracep->chgWData(oldp+608,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_55),128);
            tracep->chgWData(oldp+612,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_56),128);
            tracep->chgWData(oldp+616,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_57),128);
            tracep->chgWData(oldp+620,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_58),128);
            tracep->chgWData(oldp+624,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_59),128);
            tracep->chgWData(oldp+628,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_60),128);
            tracep->chgWData(oldp+632,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_61),128);
            tracep->chgWData(oldp+636,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_62),128);
            tracep->chgWData(oldp+640,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_63),128);
            tracep->chgBit(oldp+644,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
            tracep->chgWData(oldp+645,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata),128);
            tracep->chgWData(oldp+649,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_0),128);
            tracep->chgWData(oldp+653,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_1),128);
            tracep->chgWData(oldp+657,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_2),128);
            tracep->chgWData(oldp+661,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_3),128);
            tracep->chgWData(oldp+665,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_4),128);
            tracep->chgWData(oldp+669,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_5),128);
            tracep->chgWData(oldp+673,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_6),128);
            tracep->chgWData(oldp+677,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_7),128);
            tracep->chgWData(oldp+681,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_8),128);
            tracep->chgWData(oldp+685,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_9),128);
            tracep->chgWData(oldp+689,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_10),128);
            tracep->chgWData(oldp+693,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_11),128);
            tracep->chgWData(oldp+697,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_12),128);
            tracep->chgWData(oldp+701,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_13),128);
            tracep->chgWData(oldp+705,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_14),128);
            tracep->chgWData(oldp+709,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_15),128);
            tracep->chgWData(oldp+713,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_16),128);
            tracep->chgWData(oldp+717,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_17),128);
            tracep->chgWData(oldp+721,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_18),128);
            tracep->chgWData(oldp+725,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_19),128);
            tracep->chgWData(oldp+729,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_20),128);
            tracep->chgWData(oldp+733,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_21),128);
            tracep->chgWData(oldp+737,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_22),128);
            tracep->chgWData(oldp+741,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_23),128);
            tracep->chgWData(oldp+745,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_24),128);
            tracep->chgWData(oldp+749,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_25),128);
            tracep->chgWData(oldp+753,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_26),128);
            tracep->chgWData(oldp+757,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_27),128);
            tracep->chgWData(oldp+761,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_28),128);
            tracep->chgWData(oldp+765,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_29),128);
            tracep->chgWData(oldp+769,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_30),128);
            tracep->chgWData(oldp+773,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_31),128);
            tracep->chgWData(oldp+777,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_32),128);
            tracep->chgWData(oldp+781,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_33),128);
            tracep->chgWData(oldp+785,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_34),128);
            tracep->chgWData(oldp+789,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_35),128);
            tracep->chgWData(oldp+793,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_36),128);
            tracep->chgWData(oldp+797,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_37),128);
            tracep->chgWData(oldp+801,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_38),128);
            tracep->chgWData(oldp+805,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_39),128);
            tracep->chgWData(oldp+809,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_40),128);
            tracep->chgWData(oldp+813,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_41),128);
            tracep->chgWData(oldp+817,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_42),128);
            tracep->chgWData(oldp+821,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_43),128);
            tracep->chgWData(oldp+825,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_44),128);
            tracep->chgWData(oldp+829,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_45),128);
            tracep->chgWData(oldp+833,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_46),128);
            tracep->chgWData(oldp+837,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_47),128);
            tracep->chgWData(oldp+841,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_48),128);
            tracep->chgWData(oldp+845,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_49),128);
            tracep->chgWData(oldp+849,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_50),128);
            tracep->chgWData(oldp+853,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_51),128);
            tracep->chgWData(oldp+857,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_52),128);
            tracep->chgWData(oldp+861,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_53),128);
            tracep->chgWData(oldp+865,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_54),128);
            tracep->chgWData(oldp+869,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_55),128);
            tracep->chgWData(oldp+873,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_56),128);
            tracep->chgWData(oldp+877,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_57),128);
            tracep->chgWData(oldp+881,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_58),128);
            tracep->chgWData(oldp+885,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_59),128);
            tracep->chgWData(oldp+889,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_60),128);
            tracep->chgWData(oldp+893,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_61),128);
            tracep->chgWData(oldp+897,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_62),128);
            tracep->chgWData(oldp+901,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_63),128);
            tracep->chgBit(oldp+905,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
            tracep->chgWData(oldp+906,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata),128);
            tracep->chgWData(oldp+910,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_0),128);
            tracep->chgWData(oldp+914,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_1),128);
            tracep->chgWData(oldp+918,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_2),128);
            tracep->chgWData(oldp+922,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_3),128);
            tracep->chgWData(oldp+926,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_4),128);
            tracep->chgWData(oldp+930,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_5),128);
            tracep->chgWData(oldp+934,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_6),128);
            tracep->chgWData(oldp+938,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_7),128);
            tracep->chgWData(oldp+942,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_8),128);
            tracep->chgWData(oldp+946,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_9),128);
            tracep->chgWData(oldp+950,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_10),128);
            tracep->chgWData(oldp+954,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_11),128);
            tracep->chgWData(oldp+958,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_12),128);
            tracep->chgWData(oldp+962,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_13),128);
            tracep->chgWData(oldp+966,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_14),128);
            tracep->chgWData(oldp+970,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_15),128);
            tracep->chgWData(oldp+974,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_16),128);
            tracep->chgWData(oldp+978,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_17),128);
            tracep->chgWData(oldp+982,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_18),128);
            tracep->chgWData(oldp+986,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_19),128);
            tracep->chgWData(oldp+990,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_20),128);
            tracep->chgWData(oldp+994,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_21),128);
            tracep->chgWData(oldp+998,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_22),128);
            tracep->chgWData(oldp+1002,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_23),128);
            tracep->chgWData(oldp+1006,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_24),128);
            tracep->chgWData(oldp+1010,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_25),128);
            tracep->chgWData(oldp+1014,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_26),128);
            tracep->chgWData(oldp+1018,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_27),128);
            tracep->chgWData(oldp+1022,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_28),128);
            tracep->chgWData(oldp+1026,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_29),128);
            tracep->chgWData(oldp+1030,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_30),128);
            tracep->chgWData(oldp+1034,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_31),128);
            tracep->chgWData(oldp+1038,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_32),128);
            tracep->chgWData(oldp+1042,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_33),128);
            tracep->chgWData(oldp+1046,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_34),128);
            tracep->chgWData(oldp+1050,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_35),128);
            tracep->chgWData(oldp+1054,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_36),128);
            tracep->chgWData(oldp+1058,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_37),128);
            tracep->chgWData(oldp+1062,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_38),128);
            tracep->chgWData(oldp+1066,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_39),128);
            tracep->chgWData(oldp+1070,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_40),128);
            tracep->chgWData(oldp+1074,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_41),128);
            tracep->chgWData(oldp+1078,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_42),128);
            tracep->chgWData(oldp+1082,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_43),128);
            tracep->chgWData(oldp+1086,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_44),128);
            tracep->chgWData(oldp+1090,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_45),128);
            tracep->chgWData(oldp+1094,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_46),128);
            tracep->chgWData(oldp+1098,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_47),128);
            tracep->chgWData(oldp+1102,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_48),128);
            tracep->chgWData(oldp+1106,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_49),128);
            tracep->chgWData(oldp+1110,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_50),128);
            tracep->chgWData(oldp+1114,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_51),128);
            tracep->chgWData(oldp+1118,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_52),128);
            tracep->chgWData(oldp+1122,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_53),128);
            tracep->chgWData(oldp+1126,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_54),128);
            tracep->chgWData(oldp+1130,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_55),128);
            tracep->chgWData(oldp+1134,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_56),128);
            tracep->chgWData(oldp+1138,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_57),128);
            tracep->chgWData(oldp+1142,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_58),128);
            tracep->chgWData(oldp+1146,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_59),128);
            tracep->chgWData(oldp+1150,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_60),128);
            tracep->chgWData(oldp+1154,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_61),128);
            tracep->chgWData(oldp+1158,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_62),128);
            tracep->chgWData(oldp+1162,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_63),128);
            tracep->chgBit(oldp+1166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
            tracep->chgWData(oldp+1167,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata),128);
            tracep->chgWData(oldp+1171,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_0),128);
            tracep->chgWData(oldp+1175,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_1),128);
            tracep->chgWData(oldp+1179,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_2),128);
            tracep->chgWData(oldp+1183,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_3),128);
            tracep->chgWData(oldp+1187,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_4),128);
            tracep->chgWData(oldp+1191,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_5),128);
            tracep->chgWData(oldp+1195,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_6),128);
            tracep->chgWData(oldp+1199,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_7),128);
            tracep->chgWData(oldp+1203,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_8),128);
            tracep->chgWData(oldp+1207,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_9),128);
            tracep->chgWData(oldp+1211,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_10),128);
            tracep->chgWData(oldp+1215,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_11),128);
            tracep->chgWData(oldp+1219,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_12),128);
            tracep->chgWData(oldp+1223,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_13),128);
            tracep->chgWData(oldp+1227,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_14),128);
            tracep->chgWData(oldp+1231,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_15),128);
            tracep->chgWData(oldp+1235,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_16),128);
            tracep->chgWData(oldp+1239,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_17),128);
            tracep->chgWData(oldp+1243,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_18),128);
            tracep->chgWData(oldp+1247,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_19),128);
            tracep->chgWData(oldp+1251,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_20),128);
            tracep->chgWData(oldp+1255,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_21),128);
            tracep->chgWData(oldp+1259,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_22),128);
            tracep->chgWData(oldp+1263,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_23),128);
            tracep->chgWData(oldp+1267,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_24),128);
            tracep->chgWData(oldp+1271,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_25),128);
            tracep->chgWData(oldp+1275,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_26),128);
            tracep->chgWData(oldp+1279,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_27),128);
            tracep->chgWData(oldp+1283,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_28),128);
            tracep->chgWData(oldp+1287,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_29),128);
            tracep->chgWData(oldp+1291,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_30),128);
            tracep->chgWData(oldp+1295,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_31),128);
            tracep->chgWData(oldp+1299,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_32),128);
            tracep->chgWData(oldp+1303,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_33),128);
            tracep->chgWData(oldp+1307,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_34),128);
            tracep->chgWData(oldp+1311,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_35),128);
            tracep->chgWData(oldp+1315,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_36),128);
            tracep->chgWData(oldp+1319,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_37),128);
            tracep->chgWData(oldp+1323,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_38),128);
            tracep->chgWData(oldp+1327,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_39),128);
            tracep->chgWData(oldp+1331,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_40),128);
            tracep->chgWData(oldp+1335,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_41),128);
            tracep->chgWData(oldp+1339,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_42),128);
            tracep->chgWData(oldp+1343,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_43),128);
            tracep->chgWData(oldp+1347,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_44),128);
            tracep->chgWData(oldp+1351,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_45),128);
            tracep->chgWData(oldp+1355,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_46),128);
            tracep->chgWData(oldp+1359,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_47),128);
            tracep->chgWData(oldp+1363,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_48),128);
            tracep->chgWData(oldp+1367,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_49),128);
            tracep->chgWData(oldp+1371,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_50),128);
            tracep->chgWData(oldp+1375,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_51),128);
            tracep->chgWData(oldp+1379,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_52),128);
            tracep->chgWData(oldp+1383,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_53),128);
            tracep->chgWData(oldp+1387,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_54),128);
            tracep->chgWData(oldp+1391,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_55),128);
            tracep->chgWData(oldp+1395,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_56),128);
            tracep->chgWData(oldp+1399,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_57),128);
            tracep->chgWData(oldp+1403,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_58),128);
            tracep->chgWData(oldp+1407,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_59),128);
            tracep->chgWData(oldp+1411,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_60),128);
            tracep->chgWData(oldp+1415,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_61),128);
            tracep->chgWData(oldp+1419,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_62),128);
            tracep->chgWData(oldp+1423,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_63),128);
        }
        tracep->chgBit(oldp+1427,(vlSelf->clock));
        tracep->chgBit(oldp+1428,(vlSelf->reset));
        tracep->chgQData(oldp+1429,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgQData(oldp+1431,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->chgBit(oldp+1433,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+1434,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+1435,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+1437,(vlSelf->io_core_debug_raise_intr));
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

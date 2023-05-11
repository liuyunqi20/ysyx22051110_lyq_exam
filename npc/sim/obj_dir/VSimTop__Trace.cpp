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
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp79;
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
            tracep->chgQData(oldp+37,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
            tracep->chgQData(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
            tracep->chgBit(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
            tracep->chgBit(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+45,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid));
            tracep->chgBit(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
            tracep->chgQData(oldp+47,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
            tracep->chgBit(oldp+49,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if_mem_ms_mem_ok));
            tracep->chgBit(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
            tracep->chgQData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
            tracep->chgBit(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
            tracep->chgQData(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr),64);
            tracep->chgIData(oldp+56,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
            tracep->chgBit(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
            tracep->chgBit(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
            tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
            tracep->chgCData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
            tracep->chgQData(oldp+62,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__exc_target_r),64);
            tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
            tracep->chgBit(oldp+66,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__unnamedblk1__DOT__unnamedblk2__DOT__fs_inst_data),64);
            tracep->chgBit(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
            tracep->chgCData(oldp+70,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
            tracep->chgIData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
            tracep->chgBit(oldp+74,(((0x37U != (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     & ((0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
            tracep->chgBit(oldp+75,((((0x37U == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
            tracep->chgSData(oldp+76,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
            tracep->chgBit(oldp+77,((((((0x37U == (0x7fU 
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
            tracep->chgBit(oldp+78,((((((((((((0x37U 
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
            tracep->chgBit(oldp+79,((((((((((((0x37U 
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
            tracep->chgBit(oldp+80,((((((((((((((((
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
            tracep->chgCData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
            tracep->chgBit(oldp+82,((((((((((((((((
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
            tracep->chgCData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
            tracep->chgCData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
            tracep->chgCData(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
            tracep->chgQData(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
            tracep->chgQData(oldp+88,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
            tracep->chgQData(oldp+90,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
            tracep->chgSData(oldp+92,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+93,(((IData)((0x73U 
                                              == (0xfffffU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                               >> 0x14U)))));
            tracep->chgQData(oldp+94,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
            tracep->chgCData(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
            tracep->chgCData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
            tracep->chgCData(oldp+98,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
            tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
            tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
            tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
            tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
            tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
            tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
            tracep->chgQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
            tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
            tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
            tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
            tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
            tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
            tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
            tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
            tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
            tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
            tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
            tracep->chgQData(oldp+139,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
            tracep->chgQData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
            tracep->chgQData(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
            tracep->chgQData(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
            tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
            tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
            tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
            tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
            tracep->chgQData(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
            tracep->chgQData(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
            tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
            tracep->chgQData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
            tracep->chgBit(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
            tracep->chgBit(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
            tracep->chgQData(oldp+169,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
            tracep->chgQData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
            tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
            tracep->chgBit(oldp+175,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
            tracep->chgBit(oldp+176,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
            VL_EXTEND_WQ(127,64, __Vtemp69, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp70, __Vtemp69, 
                          (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
            __Vtemp71[0U] = __Vtemp70[0U];
            __Vtemp71[1U] = __Vtemp70[1U];
            __Vtemp71[2U] = __Vtemp70[2U];
            __Vtemp71[3U] = (0x7fffffffU & __Vtemp70[3U]);
            tracep->chgWData(oldp+177,(__Vtemp71),127);
            __Vtemp73[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            __Vtemp73[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                     >> 0x20U));
            __Vtemp73[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                           >> 0x3fU)));
            __Vtemp74[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
            __Vtemp74[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                     >> 0x20U));
            __Vtemp74[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                           >> 0x3fU)));
            VL_DIVS_WWW(65, __Vtemp75, __Vtemp73, __Vtemp74);
            __Vtemp76[0U] = __Vtemp75[0U];
            __Vtemp76[1U] = __Vtemp75[1U];
            __Vtemp76[2U] = (1U & __Vtemp75[2U]);
            tracep->chgWData(oldp+181,(__Vtemp76),65);
            tracep->chgQData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
            tracep->chgIData(oldp+186,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
            tracep->chgIData(oldp+187,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
            tracep->chgIData(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
            tracep->chgBit(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
            tracep->chgBit(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_in_ret_valid));
            tracep->chgQData(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
            tracep->chgBit(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_req_valid_T_1));
            tracep->chgQData(oldp+197,((0xfffffffffffffff8ULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
            tracep->chgCData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_req_bits_wstrb),8);
            tracep->chgBit(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__has_trap));
            tracep->chgCData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),3);
            tracep->chgQData(oldp+202,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
            tracep->chgBit(oldp+204,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
            tracep->chgQData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
            tracep->chgCData(oldp+207,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
            tracep->chgSData(oldp+208,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
            tracep->chgIData(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
            tracep->chgQData(oldp+210,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
            tracep->chgQData(oldp+212,(((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                       >> 0x3fU)))
                                         ? (0xfffffffffffffffcULL 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                         : (4ULL + 
                                            (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
            tracep->chgQData(oldp+214,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
            tracep->chgBit(oldp+216,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
            tracep->chgBit(oldp+217,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+218,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgBit(oldp+220,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
            tracep->chgCData(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
            tracep->chgCData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
            tracep->chgCData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+224,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+225,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
            tracep->chgQData(oldp+226,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
            tracep->chgQData(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
            tracep->chgQData(oldp+230,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
            tracep->chgQData(oldp+232,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
            tracep->chgQData(oldp+234,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
            tracep->chgQData(oldp+236,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
            tracep->chgBit(oldp+238,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
                __Vtemp79[0U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata));
                __Vtemp79[1U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata) 
                                         >> 0x20U));
                __Vtemp79[2U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                          : 0ULL));
                __Vtemp79[3U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                           : 0ULL) 
                                         >> 0x20U));
            } else {
                __Vtemp79[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
                __Vtemp79[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                         >> 0x20U));
                __Vtemp79[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
                __Vtemp79[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                         >> 0x20U));
            }
            tracep->chgWData(oldp+240,(__Vtemp79),128);
            tracep->chgCData(oldp+244,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+245,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_req_ready));
            tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
            tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
            tracep->chgBit(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
            tracep->chgBit(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+254,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
            tracep->chgQData(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
            tracep->chgBit(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
            tracep->chgBit(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
            tracep->chgCData(oldp+262,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
            tracep->chgBit(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
            tracep->chgBit(oldp+264,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
            tracep->chgBit(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
            tracep->chgWData(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
            tracep->chgCData(oldp+270,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+271,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+272,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
            tracep->chgQData(oldp+273,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
            tracep->chgBit(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+276,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+277,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
            tracep->chgBit(oldp+278,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
            tracep->chgBit(oldp+279,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+280,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
            tracep->chgQData(oldp+284,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
            tracep->chgBit(oldp+286,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
            tracep->chgBit(oldp+287,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
            tracep->chgCData(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
            tracep->chgBit(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
            tracep->chgBit(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
            tracep->chgBit(oldp+292,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
            tracep->chgBit(oldp+293,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_req_ready));
            tracep->chgBit(oldp+294,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
            tracep->chgBit(oldp+295,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
            tracep->chgBit(oldp+296,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
            tracep->chgQData(oldp+297,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
            tracep->chgCData(oldp+299,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__data_addr),6);
            tracep->chgBit(oldp+300,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
            tracep->chgCData(oldp+301,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+302,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+303,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr))),4);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+306,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
            tracep->chgBit(oldp+320,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+329,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgCData(oldp+330,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H)))))),2);
            tracep->chgQData(oldp+331,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[0U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                              ? (((QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[0U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                             ? (((QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[0U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[0U])))
                                            : 0ULL))),64);
            tracep->chgQData(oldp+333,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[2U])))
                                            : 0ULL) 
                                          | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                              ? (((QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[2U])))
                                              : 0ULL)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                             ? (((QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[2U])))
                                             : 0ULL)) 
                                        | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
                                            ? (((QData)((IData)(
                                                                vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[2U])))
                                            : 0ULL))),64);
            tracep->chgCData(oldp+335,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
            tracep->chgBit(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
            tracep->chgBit(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
            tracep->chgQData(oldp+341,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+343,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgIData(oldp+344,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgCData(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+346,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+349,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+350,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+352,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+354,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+355,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+356,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+358,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_hit));
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
            tracep->chgCData(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr),6);
            tracep->chgBit(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
            tracep->chgCData(oldp+365,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+366,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+367,((8U & ((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                       >> 3U)) 
                                              << 3U))),4);
            tracep->chgQData(oldp+368,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+370,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+372,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+374,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+376,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+378,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+380,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+387,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+389,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+390,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+391,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+392,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+393,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgCData(oldp+394,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H)))))),2);
            tracep->chgQData(oldp+395,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
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
            tracep->chgQData(oldp+397,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
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
            tracep->chgCData(oldp+399,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
            tracep->chgBit(oldp+400,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+401,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+402,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+403,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
            tracep->chgBit(oldp+404,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
            tracep->chgQData(oldp+405,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+407,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgIData(oldp+408,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgCData(oldp+409,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+410,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+411,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+412,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+413,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+414,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+416,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+418,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+419,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+420,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+422,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+423,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_hit));
            tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
            tracep->chgQData(oldp+427,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
            tracep->chgQData(oldp+429,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+431,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+432,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+433,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
            tracep->chgBit(oldp+434,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
            tracep->chgBit(oldp+435,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
            tracep->chgBit(oldp+436,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                            >> 2U))));
            tracep->chgBit(oldp+437,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
            tracep->chgQData(oldp+438,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
            tracep->chgCData(oldp+440,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                         ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                         : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 1U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 1U)))));
            tracep->chgBit(oldp+442,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
            tracep->chgQData(oldp+443,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
            tracep->chgBit(oldp+445,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
            tracep->chgQData(oldp+446,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
            tracep->chgCData(oldp+448,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                         : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
            tracep->chgBit(oldp+449,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                       ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
            tracep->chgBit(oldp+450,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 3U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 3U)))));
            tracep->chgBit(oldp+451,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
            tracep->chgBit(oldp+452,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
            tracep->chgBit(oldp+453,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
            tracep->chgBit(oldp+454,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
            tracep->chgQData(oldp+455,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+457,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
            tracep->chgBit(oldp+458,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                       >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
            tracep->chgQData(oldp+459,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                          ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                             >> 3U)
                                          : ((0x1ffffffffffffffeULL 
                                              & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                 >> 3U)) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                        << 3U)),64);
            tracep->chgQData(oldp+461,(((0xfffffffffffffff0ULL 
                                         & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                           << 3U))))),64);
            tracep->chgCData(oldp+463,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
            tracep->chgCData(oldp+464,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
            tracep->chgQData(oldp+465,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
            tracep->chgCData(oldp+467,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
            tracep->chgCData(oldp+468,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
            tracep->chgBit(oldp+469,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
            tracep->chgQData(oldp+470,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
            tracep->chgBit(oldp+472,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
            tracep->chgBit(oldp+473,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
            tracep->chgBit(oldp+474,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_12));
            tracep->chgBit(oldp+475,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam__io_WEN));
            tracep->chgWData(oldp+476,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata),128);
            tracep->chgWData(oldp+480,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_0),128);
            tracep->chgWData(oldp+484,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_1),128);
            tracep->chgWData(oldp+488,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_2),128);
            tracep->chgWData(oldp+492,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_3),128);
            tracep->chgWData(oldp+496,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_4),128);
            tracep->chgWData(oldp+500,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_5),128);
            tracep->chgWData(oldp+504,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_6),128);
            tracep->chgWData(oldp+508,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_7),128);
            tracep->chgWData(oldp+512,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_8),128);
            tracep->chgWData(oldp+516,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_9),128);
            tracep->chgWData(oldp+520,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_10),128);
            tracep->chgWData(oldp+524,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_11),128);
            tracep->chgWData(oldp+528,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_12),128);
            tracep->chgWData(oldp+532,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_13),128);
            tracep->chgWData(oldp+536,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_14),128);
            tracep->chgWData(oldp+540,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_15),128);
            tracep->chgWData(oldp+544,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_16),128);
            tracep->chgWData(oldp+548,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_17),128);
            tracep->chgWData(oldp+552,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_18),128);
            tracep->chgWData(oldp+556,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_19),128);
            tracep->chgWData(oldp+560,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_20),128);
            tracep->chgWData(oldp+564,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_21),128);
            tracep->chgWData(oldp+568,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_22),128);
            tracep->chgWData(oldp+572,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_23),128);
            tracep->chgWData(oldp+576,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_24),128);
            tracep->chgWData(oldp+580,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_25),128);
            tracep->chgWData(oldp+584,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_26),128);
            tracep->chgWData(oldp+588,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_27),128);
            tracep->chgWData(oldp+592,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_28),128);
            tracep->chgWData(oldp+596,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_29),128);
            tracep->chgWData(oldp+600,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_30),128);
            tracep->chgWData(oldp+604,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_31),128);
            tracep->chgWData(oldp+608,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_32),128);
            tracep->chgWData(oldp+612,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_33),128);
            tracep->chgWData(oldp+616,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_34),128);
            tracep->chgWData(oldp+620,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_35),128);
            tracep->chgWData(oldp+624,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_36),128);
            tracep->chgWData(oldp+628,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_37),128);
            tracep->chgWData(oldp+632,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_38),128);
            tracep->chgWData(oldp+636,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_39),128);
            tracep->chgWData(oldp+640,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_40),128);
            tracep->chgWData(oldp+644,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_41),128);
            tracep->chgWData(oldp+648,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_42),128);
            tracep->chgWData(oldp+652,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_43),128);
            tracep->chgWData(oldp+656,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_44),128);
            tracep->chgWData(oldp+660,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_45),128);
            tracep->chgWData(oldp+664,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_46),128);
            tracep->chgWData(oldp+668,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_47),128);
            tracep->chgWData(oldp+672,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_48),128);
            tracep->chgWData(oldp+676,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_49),128);
            tracep->chgWData(oldp+680,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_50),128);
            tracep->chgWData(oldp+684,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_51),128);
            tracep->chgWData(oldp+688,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_52),128);
            tracep->chgWData(oldp+692,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_53),128);
            tracep->chgWData(oldp+696,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_54),128);
            tracep->chgWData(oldp+700,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_55),128);
            tracep->chgWData(oldp+704,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_56),128);
            tracep->chgWData(oldp+708,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_57),128);
            tracep->chgWData(oldp+712,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_58),128);
            tracep->chgWData(oldp+716,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_59),128);
            tracep->chgWData(oldp+720,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_60),128);
            tracep->chgWData(oldp+724,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_61),128);
            tracep->chgWData(oldp+728,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_62),128);
            tracep->chgWData(oldp+732,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_63),128);
            tracep->chgBit(oldp+736,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
            tracep->chgWData(oldp+737,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata),128);
            tracep->chgWData(oldp+741,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_0),128);
            tracep->chgWData(oldp+745,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_1),128);
            tracep->chgWData(oldp+749,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_2),128);
            tracep->chgWData(oldp+753,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_3),128);
            tracep->chgWData(oldp+757,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_4),128);
            tracep->chgWData(oldp+761,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_5),128);
            tracep->chgWData(oldp+765,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_6),128);
            tracep->chgWData(oldp+769,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_7),128);
            tracep->chgWData(oldp+773,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_8),128);
            tracep->chgWData(oldp+777,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_9),128);
            tracep->chgWData(oldp+781,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_10),128);
            tracep->chgWData(oldp+785,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_11),128);
            tracep->chgWData(oldp+789,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_12),128);
            tracep->chgWData(oldp+793,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_13),128);
            tracep->chgWData(oldp+797,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_14),128);
            tracep->chgWData(oldp+801,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_15),128);
            tracep->chgWData(oldp+805,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_16),128);
            tracep->chgWData(oldp+809,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_17),128);
            tracep->chgWData(oldp+813,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_18),128);
            tracep->chgWData(oldp+817,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_19),128);
            tracep->chgWData(oldp+821,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_20),128);
            tracep->chgWData(oldp+825,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_21),128);
            tracep->chgWData(oldp+829,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_22),128);
            tracep->chgWData(oldp+833,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_23),128);
            tracep->chgWData(oldp+837,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_24),128);
            tracep->chgWData(oldp+841,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_25),128);
            tracep->chgWData(oldp+845,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_26),128);
            tracep->chgWData(oldp+849,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_27),128);
            tracep->chgWData(oldp+853,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_28),128);
            tracep->chgWData(oldp+857,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_29),128);
            tracep->chgWData(oldp+861,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_30),128);
            tracep->chgWData(oldp+865,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_31),128);
            tracep->chgWData(oldp+869,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_32),128);
            tracep->chgWData(oldp+873,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_33),128);
            tracep->chgWData(oldp+877,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_34),128);
            tracep->chgWData(oldp+881,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_35),128);
            tracep->chgWData(oldp+885,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_36),128);
            tracep->chgWData(oldp+889,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_37),128);
            tracep->chgWData(oldp+893,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_38),128);
            tracep->chgWData(oldp+897,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_39),128);
            tracep->chgWData(oldp+901,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_40),128);
            tracep->chgWData(oldp+905,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_41),128);
            tracep->chgWData(oldp+909,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_42),128);
            tracep->chgWData(oldp+913,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_43),128);
            tracep->chgWData(oldp+917,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_44),128);
            tracep->chgWData(oldp+921,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_45),128);
            tracep->chgWData(oldp+925,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_46),128);
            tracep->chgWData(oldp+929,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_47),128);
            tracep->chgWData(oldp+933,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_48),128);
            tracep->chgWData(oldp+937,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_49),128);
            tracep->chgWData(oldp+941,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_50),128);
            tracep->chgWData(oldp+945,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_51),128);
            tracep->chgWData(oldp+949,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_52),128);
            tracep->chgWData(oldp+953,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_53),128);
            tracep->chgWData(oldp+957,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_54),128);
            tracep->chgWData(oldp+961,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_55),128);
            tracep->chgWData(oldp+965,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_56),128);
            tracep->chgWData(oldp+969,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_57),128);
            tracep->chgWData(oldp+973,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_58),128);
            tracep->chgWData(oldp+977,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_59),128);
            tracep->chgWData(oldp+981,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_60),128);
            tracep->chgWData(oldp+985,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_61),128);
            tracep->chgWData(oldp+989,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_62),128);
            tracep->chgWData(oldp+993,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_63),128);
            tracep->chgBit(oldp+997,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
            tracep->chgWData(oldp+998,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata),128);
            tracep->chgWData(oldp+1002,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_0),128);
            tracep->chgWData(oldp+1006,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_1),128);
            tracep->chgWData(oldp+1010,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_2),128);
            tracep->chgWData(oldp+1014,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_3),128);
            tracep->chgWData(oldp+1018,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_4),128);
            tracep->chgWData(oldp+1022,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_5),128);
            tracep->chgWData(oldp+1026,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_6),128);
            tracep->chgWData(oldp+1030,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_7),128);
            tracep->chgWData(oldp+1034,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_8),128);
            tracep->chgWData(oldp+1038,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_9),128);
            tracep->chgWData(oldp+1042,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_10),128);
            tracep->chgWData(oldp+1046,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_11),128);
            tracep->chgWData(oldp+1050,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_12),128);
            tracep->chgWData(oldp+1054,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_13),128);
            tracep->chgWData(oldp+1058,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_14),128);
            tracep->chgWData(oldp+1062,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_15),128);
            tracep->chgWData(oldp+1066,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_16),128);
            tracep->chgWData(oldp+1070,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_17),128);
            tracep->chgWData(oldp+1074,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_18),128);
            tracep->chgWData(oldp+1078,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_19),128);
            tracep->chgWData(oldp+1082,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_20),128);
            tracep->chgWData(oldp+1086,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_21),128);
            tracep->chgWData(oldp+1090,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_22),128);
            tracep->chgWData(oldp+1094,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_23),128);
            tracep->chgWData(oldp+1098,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_24),128);
            tracep->chgWData(oldp+1102,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_25),128);
            tracep->chgWData(oldp+1106,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_26),128);
            tracep->chgWData(oldp+1110,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_27),128);
            tracep->chgWData(oldp+1114,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_28),128);
            tracep->chgWData(oldp+1118,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_29),128);
            tracep->chgWData(oldp+1122,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_30),128);
            tracep->chgWData(oldp+1126,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_31),128);
            tracep->chgWData(oldp+1130,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_32),128);
            tracep->chgWData(oldp+1134,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_33),128);
            tracep->chgWData(oldp+1138,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_34),128);
            tracep->chgWData(oldp+1142,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_35),128);
            tracep->chgWData(oldp+1146,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_36),128);
            tracep->chgWData(oldp+1150,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_37),128);
            tracep->chgWData(oldp+1154,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_38),128);
            tracep->chgWData(oldp+1158,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_39),128);
            tracep->chgWData(oldp+1162,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_40),128);
            tracep->chgWData(oldp+1166,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_41),128);
            tracep->chgWData(oldp+1170,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_42),128);
            tracep->chgWData(oldp+1174,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_43),128);
            tracep->chgWData(oldp+1178,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_44),128);
            tracep->chgWData(oldp+1182,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_45),128);
            tracep->chgWData(oldp+1186,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_46),128);
            tracep->chgWData(oldp+1190,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_47),128);
            tracep->chgWData(oldp+1194,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_48),128);
            tracep->chgWData(oldp+1198,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_49),128);
            tracep->chgWData(oldp+1202,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_50),128);
            tracep->chgWData(oldp+1206,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_51),128);
            tracep->chgWData(oldp+1210,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_52),128);
            tracep->chgWData(oldp+1214,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_53),128);
            tracep->chgWData(oldp+1218,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_54),128);
            tracep->chgWData(oldp+1222,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_55),128);
            tracep->chgWData(oldp+1226,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_56),128);
            tracep->chgWData(oldp+1230,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_57),128);
            tracep->chgWData(oldp+1234,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_58),128);
            tracep->chgWData(oldp+1238,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_59),128);
            tracep->chgWData(oldp+1242,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_60),128);
            tracep->chgWData(oldp+1246,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_61),128);
            tracep->chgWData(oldp+1250,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_62),128);
            tracep->chgWData(oldp+1254,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_63),128);
            tracep->chgBit(oldp+1258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
            tracep->chgWData(oldp+1259,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata),128);
            tracep->chgWData(oldp+1263,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_0),128);
            tracep->chgWData(oldp+1267,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_1),128);
            tracep->chgWData(oldp+1271,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_2),128);
            tracep->chgWData(oldp+1275,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_3),128);
            tracep->chgWData(oldp+1279,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_4),128);
            tracep->chgWData(oldp+1283,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_5),128);
            tracep->chgWData(oldp+1287,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_6),128);
            tracep->chgWData(oldp+1291,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_7),128);
            tracep->chgWData(oldp+1295,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_8),128);
            tracep->chgWData(oldp+1299,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_9),128);
            tracep->chgWData(oldp+1303,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_10),128);
            tracep->chgWData(oldp+1307,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_11),128);
            tracep->chgWData(oldp+1311,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_12),128);
            tracep->chgWData(oldp+1315,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_13),128);
            tracep->chgWData(oldp+1319,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_14),128);
            tracep->chgWData(oldp+1323,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_15),128);
            tracep->chgWData(oldp+1327,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_16),128);
            tracep->chgWData(oldp+1331,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_17),128);
            tracep->chgWData(oldp+1335,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_18),128);
            tracep->chgWData(oldp+1339,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_19),128);
            tracep->chgWData(oldp+1343,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_20),128);
            tracep->chgWData(oldp+1347,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_21),128);
            tracep->chgWData(oldp+1351,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_22),128);
            tracep->chgWData(oldp+1355,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_23),128);
            tracep->chgWData(oldp+1359,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_24),128);
            tracep->chgWData(oldp+1363,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_25),128);
            tracep->chgWData(oldp+1367,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_26),128);
            tracep->chgWData(oldp+1371,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_27),128);
            tracep->chgWData(oldp+1375,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_28),128);
            tracep->chgWData(oldp+1379,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_29),128);
            tracep->chgWData(oldp+1383,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_30),128);
            tracep->chgWData(oldp+1387,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_31),128);
            tracep->chgWData(oldp+1391,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_32),128);
            tracep->chgWData(oldp+1395,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_33),128);
            tracep->chgWData(oldp+1399,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_34),128);
            tracep->chgWData(oldp+1403,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_35),128);
            tracep->chgWData(oldp+1407,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_36),128);
            tracep->chgWData(oldp+1411,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_37),128);
            tracep->chgWData(oldp+1415,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_38),128);
            tracep->chgWData(oldp+1419,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_39),128);
            tracep->chgWData(oldp+1423,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_40),128);
            tracep->chgWData(oldp+1427,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_41),128);
            tracep->chgWData(oldp+1431,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_42),128);
            tracep->chgWData(oldp+1435,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_43),128);
            tracep->chgWData(oldp+1439,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_44),128);
            tracep->chgWData(oldp+1443,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_45),128);
            tracep->chgWData(oldp+1447,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_46),128);
            tracep->chgWData(oldp+1451,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_47),128);
            tracep->chgWData(oldp+1455,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_48),128);
            tracep->chgWData(oldp+1459,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_49),128);
            tracep->chgWData(oldp+1463,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_50),128);
            tracep->chgWData(oldp+1467,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_51),128);
            tracep->chgWData(oldp+1471,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_52),128);
            tracep->chgWData(oldp+1475,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_53),128);
            tracep->chgWData(oldp+1479,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_54),128);
            tracep->chgWData(oldp+1483,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_55),128);
            tracep->chgWData(oldp+1487,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_56),128);
            tracep->chgWData(oldp+1491,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_57),128);
            tracep->chgWData(oldp+1495,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_58),128);
            tracep->chgWData(oldp+1499,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_59),128);
            tracep->chgWData(oldp+1503,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_60),128);
            tracep->chgWData(oldp+1507,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_61),128);
            tracep->chgWData(oldp+1511,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_62),128);
            tracep->chgWData(oldp+1515,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_63),128);
            tracep->chgBit(oldp+1519,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12));
            tracep->chgBit(oldp+1520,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam__io_WEN));
            tracep->chgWData(oldp+1521,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata),128);
            tracep->chgWData(oldp+1525,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_0),128);
            tracep->chgWData(oldp+1529,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_1),128);
            tracep->chgWData(oldp+1533,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_2),128);
            tracep->chgWData(oldp+1537,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_3),128);
            tracep->chgWData(oldp+1541,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_4),128);
            tracep->chgWData(oldp+1545,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_5),128);
            tracep->chgWData(oldp+1549,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_6),128);
            tracep->chgWData(oldp+1553,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_7),128);
            tracep->chgWData(oldp+1557,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_8),128);
            tracep->chgWData(oldp+1561,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_9),128);
            tracep->chgWData(oldp+1565,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_10),128);
            tracep->chgWData(oldp+1569,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_11),128);
            tracep->chgWData(oldp+1573,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_12),128);
            tracep->chgWData(oldp+1577,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_13),128);
            tracep->chgWData(oldp+1581,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_14),128);
            tracep->chgWData(oldp+1585,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_15),128);
            tracep->chgWData(oldp+1589,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_16),128);
            tracep->chgWData(oldp+1593,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_17),128);
            tracep->chgWData(oldp+1597,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_18),128);
            tracep->chgWData(oldp+1601,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_19),128);
            tracep->chgWData(oldp+1605,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_20),128);
            tracep->chgWData(oldp+1609,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_21),128);
            tracep->chgWData(oldp+1613,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_22),128);
            tracep->chgWData(oldp+1617,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_23),128);
            tracep->chgWData(oldp+1621,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_24),128);
            tracep->chgWData(oldp+1625,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_25),128);
            tracep->chgWData(oldp+1629,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_26),128);
            tracep->chgWData(oldp+1633,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_27),128);
            tracep->chgWData(oldp+1637,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_28),128);
            tracep->chgWData(oldp+1641,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_29),128);
            tracep->chgWData(oldp+1645,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_30),128);
            tracep->chgWData(oldp+1649,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_31),128);
            tracep->chgWData(oldp+1653,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_32),128);
            tracep->chgWData(oldp+1657,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_33),128);
            tracep->chgWData(oldp+1661,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_34),128);
            tracep->chgWData(oldp+1665,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_35),128);
            tracep->chgWData(oldp+1669,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_36),128);
            tracep->chgWData(oldp+1673,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_37),128);
            tracep->chgWData(oldp+1677,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_38),128);
            tracep->chgWData(oldp+1681,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_39),128);
            tracep->chgWData(oldp+1685,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_40),128);
            tracep->chgWData(oldp+1689,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_41),128);
            tracep->chgWData(oldp+1693,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_42),128);
            tracep->chgWData(oldp+1697,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_43),128);
            tracep->chgWData(oldp+1701,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_44),128);
            tracep->chgWData(oldp+1705,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_45),128);
            tracep->chgWData(oldp+1709,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_46),128);
            tracep->chgWData(oldp+1713,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_47),128);
            tracep->chgWData(oldp+1717,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_48),128);
            tracep->chgWData(oldp+1721,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_49),128);
            tracep->chgWData(oldp+1725,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_50),128);
            tracep->chgWData(oldp+1729,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_51),128);
            tracep->chgWData(oldp+1733,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_52),128);
            tracep->chgWData(oldp+1737,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_53),128);
            tracep->chgWData(oldp+1741,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_54),128);
            tracep->chgWData(oldp+1745,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_55),128);
            tracep->chgWData(oldp+1749,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_56),128);
            tracep->chgWData(oldp+1753,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_57),128);
            tracep->chgWData(oldp+1757,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_58),128);
            tracep->chgWData(oldp+1761,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_59),128);
            tracep->chgWData(oldp+1765,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_60),128);
            tracep->chgWData(oldp+1769,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_61),128);
            tracep->chgWData(oldp+1773,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_62),128);
            tracep->chgWData(oldp+1777,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_63),128);
            tracep->chgBit(oldp+1781,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
            tracep->chgWData(oldp+1782,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata),128);
            tracep->chgWData(oldp+1786,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_0),128);
            tracep->chgWData(oldp+1790,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_1),128);
            tracep->chgWData(oldp+1794,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_2),128);
            tracep->chgWData(oldp+1798,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_3),128);
            tracep->chgWData(oldp+1802,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_4),128);
            tracep->chgWData(oldp+1806,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_5),128);
            tracep->chgWData(oldp+1810,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_6),128);
            tracep->chgWData(oldp+1814,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_7),128);
            tracep->chgWData(oldp+1818,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_8),128);
            tracep->chgWData(oldp+1822,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_9),128);
            tracep->chgWData(oldp+1826,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_10),128);
            tracep->chgWData(oldp+1830,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_11),128);
            tracep->chgWData(oldp+1834,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_12),128);
            tracep->chgWData(oldp+1838,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_13),128);
            tracep->chgWData(oldp+1842,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_14),128);
            tracep->chgWData(oldp+1846,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_15),128);
            tracep->chgWData(oldp+1850,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_16),128);
            tracep->chgWData(oldp+1854,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_17),128);
            tracep->chgWData(oldp+1858,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_18),128);
            tracep->chgWData(oldp+1862,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_19),128);
            tracep->chgWData(oldp+1866,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_20),128);
            tracep->chgWData(oldp+1870,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_21),128);
            tracep->chgWData(oldp+1874,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_22),128);
            tracep->chgWData(oldp+1878,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_23),128);
            tracep->chgWData(oldp+1882,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_24),128);
            tracep->chgWData(oldp+1886,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_25),128);
            tracep->chgWData(oldp+1890,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_26),128);
            tracep->chgWData(oldp+1894,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_27),128);
            tracep->chgWData(oldp+1898,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_28),128);
            tracep->chgWData(oldp+1902,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_29),128);
            tracep->chgWData(oldp+1906,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_30),128);
            tracep->chgWData(oldp+1910,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_31),128);
            tracep->chgWData(oldp+1914,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_32),128);
            tracep->chgWData(oldp+1918,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_33),128);
            tracep->chgWData(oldp+1922,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_34),128);
            tracep->chgWData(oldp+1926,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_35),128);
            tracep->chgWData(oldp+1930,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_36),128);
            tracep->chgWData(oldp+1934,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_37),128);
            tracep->chgWData(oldp+1938,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_38),128);
            tracep->chgWData(oldp+1942,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_39),128);
            tracep->chgWData(oldp+1946,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_40),128);
            tracep->chgWData(oldp+1950,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_41),128);
            tracep->chgWData(oldp+1954,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_42),128);
            tracep->chgWData(oldp+1958,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_43),128);
            tracep->chgWData(oldp+1962,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_44),128);
            tracep->chgWData(oldp+1966,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_45),128);
            tracep->chgWData(oldp+1970,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_46),128);
            tracep->chgWData(oldp+1974,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_47),128);
            tracep->chgWData(oldp+1978,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_48),128);
            tracep->chgWData(oldp+1982,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_49),128);
            tracep->chgWData(oldp+1986,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_50),128);
            tracep->chgWData(oldp+1990,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_51),128);
            tracep->chgWData(oldp+1994,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_52),128);
            tracep->chgWData(oldp+1998,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_53),128);
            tracep->chgWData(oldp+2002,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_54),128);
            tracep->chgWData(oldp+2006,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_55),128);
            tracep->chgWData(oldp+2010,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_56),128);
            tracep->chgWData(oldp+2014,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_57),128);
            tracep->chgWData(oldp+2018,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_58),128);
            tracep->chgWData(oldp+2022,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_59),128);
            tracep->chgWData(oldp+2026,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_60),128);
            tracep->chgWData(oldp+2030,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_61),128);
            tracep->chgWData(oldp+2034,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_62),128);
            tracep->chgWData(oldp+2038,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_63),128);
            tracep->chgBit(oldp+2042,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
            tracep->chgWData(oldp+2043,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata),128);
            tracep->chgWData(oldp+2047,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_0),128);
            tracep->chgWData(oldp+2051,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_1),128);
            tracep->chgWData(oldp+2055,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_2),128);
            tracep->chgWData(oldp+2059,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_3),128);
            tracep->chgWData(oldp+2063,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_4),128);
            tracep->chgWData(oldp+2067,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_5),128);
            tracep->chgWData(oldp+2071,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_6),128);
            tracep->chgWData(oldp+2075,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_7),128);
            tracep->chgWData(oldp+2079,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_8),128);
            tracep->chgWData(oldp+2083,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_9),128);
            tracep->chgWData(oldp+2087,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_10),128);
            tracep->chgWData(oldp+2091,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_11),128);
            tracep->chgWData(oldp+2095,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_12),128);
            tracep->chgWData(oldp+2099,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_13),128);
            tracep->chgWData(oldp+2103,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_14),128);
            tracep->chgWData(oldp+2107,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_15),128);
            tracep->chgWData(oldp+2111,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_16),128);
            tracep->chgWData(oldp+2115,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_17),128);
            tracep->chgWData(oldp+2119,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_18),128);
            tracep->chgWData(oldp+2123,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_19),128);
            tracep->chgWData(oldp+2127,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_20),128);
            tracep->chgWData(oldp+2131,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_21),128);
            tracep->chgWData(oldp+2135,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_22),128);
            tracep->chgWData(oldp+2139,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_23),128);
            tracep->chgWData(oldp+2143,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_24),128);
            tracep->chgWData(oldp+2147,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_25),128);
            tracep->chgWData(oldp+2151,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_26),128);
            tracep->chgWData(oldp+2155,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_27),128);
            tracep->chgWData(oldp+2159,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_28),128);
            tracep->chgWData(oldp+2163,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_29),128);
            tracep->chgWData(oldp+2167,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_30),128);
            tracep->chgWData(oldp+2171,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_31),128);
            tracep->chgWData(oldp+2175,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_32),128);
            tracep->chgWData(oldp+2179,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_33),128);
            tracep->chgWData(oldp+2183,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_34),128);
            tracep->chgWData(oldp+2187,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_35),128);
            tracep->chgWData(oldp+2191,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_36),128);
            tracep->chgWData(oldp+2195,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_37),128);
            tracep->chgWData(oldp+2199,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_38),128);
            tracep->chgWData(oldp+2203,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_39),128);
            tracep->chgWData(oldp+2207,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_40),128);
            tracep->chgWData(oldp+2211,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_41),128);
            tracep->chgWData(oldp+2215,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_42),128);
            tracep->chgWData(oldp+2219,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_43),128);
            tracep->chgWData(oldp+2223,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_44),128);
            tracep->chgWData(oldp+2227,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_45),128);
            tracep->chgWData(oldp+2231,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_46),128);
            tracep->chgWData(oldp+2235,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_47),128);
            tracep->chgWData(oldp+2239,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_48),128);
            tracep->chgWData(oldp+2243,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_49),128);
            tracep->chgWData(oldp+2247,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_50),128);
            tracep->chgWData(oldp+2251,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_51),128);
            tracep->chgWData(oldp+2255,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_52),128);
            tracep->chgWData(oldp+2259,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_53),128);
            tracep->chgWData(oldp+2263,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_54),128);
            tracep->chgWData(oldp+2267,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_55),128);
            tracep->chgWData(oldp+2271,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_56),128);
            tracep->chgWData(oldp+2275,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_57),128);
            tracep->chgWData(oldp+2279,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_58),128);
            tracep->chgWData(oldp+2283,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_59),128);
            tracep->chgWData(oldp+2287,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_60),128);
            tracep->chgWData(oldp+2291,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_61),128);
            tracep->chgWData(oldp+2295,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_62),128);
            tracep->chgWData(oldp+2299,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_63),128);
            tracep->chgBit(oldp+2303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
            tracep->chgWData(oldp+2304,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata),128);
            tracep->chgWData(oldp+2308,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_0),128);
            tracep->chgWData(oldp+2312,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_1),128);
            tracep->chgWData(oldp+2316,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_2),128);
            tracep->chgWData(oldp+2320,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_3),128);
            tracep->chgWData(oldp+2324,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_4),128);
            tracep->chgWData(oldp+2328,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_5),128);
            tracep->chgWData(oldp+2332,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_6),128);
            tracep->chgWData(oldp+2336,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_7),128);
            tracep->chgWData(oldp+2340,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_8),128);
            tracep->chgWData(oldp+2344,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_9),128);
            tracep->chgWData(oldp+2348,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_10),128);
            tracep->chgWData(oldp+2352,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_11),128);
            tracep->chgWData(oldp+2356,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_12),128);
            tracep->chgWData(oldp+2360,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_13),128);
            tracep->chgWData(oldp+2364,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_14),128);
            tracep->chgWData(oldp+2368,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_15),128);
            tracep->chgWData(oldp+2372,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_16),128);
            tracep->chgWData(oldp+2376,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_17),128);
            tracep->chgWData(oldp+2380,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_18),128);
            tracep->chgWData(oldp+2384,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_19),128);
            tracep->chgWData(oldp+2388,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_20),128);
            tracep->chgWData(oldp+2392,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_21),128);
            tracep->chgWData(oldp+2396,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_22),128);
            tracep->chgWData(oldp+2400,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_23),128);
            tracep->chgWData(oldp+2404,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_24),128);
            tracep->chgWData(oldp+2408,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_25),128);
            tracep->chgWData(oldp+2412,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_26),128);
            tracep->chgWData(oldp+2416,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_27),128);
            tracep->chgWData(oldp+2420,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_28),128);
            tracep->chgWData(oldp+2424,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_29),128);
            tracep->chgWData(oldp+2428,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_30),128);
            tracep->chgWData(oldp+2432,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_31),128);
            tracep->chgWData(oldp+2436,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_32),128);
            tracep->chgWData(oldp+2440,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_33),128);
            tracep->chgWData(oldp+2444,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_34),128);
            tracep->chgWData(oldp+2448,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_35),128);
            tracep->chgWData(oldp+2452,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_36),128);
            tracep->chgWData(oldp+2456,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_37),128);
            tracep->chgWData(oldp+2460,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_38),128);
            tracep->chgWData(oldp+2464,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_39),128);
            tracep->chgWData(oldp+2468,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_40),128);
            tracep->chgWData(oldp+2472,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_41),128);
            tracep->chgWData(oldp+2476,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_42),128);
            tracep->chgWData(oldp+2480,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_43),128);
            tracep->chgWData(oldp+2484,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_44),128);
            tracep->chgWData(oldp+2488,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_45),128);
            tracep->chgWData(oldp+2492,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_46),128);
            tracep->chgWData(oldp+2496,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_47),128);
            tracep->chgWData(oldp+2500,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_48),128);
            tracep->chgWData(oldp+2504,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_49),128);
            tracep->chgWData(oldp+2508,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_50),128);
            tracep->chgWData(oldp+2512,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_51),128);
            tracep->chgWData(oldp+2516,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_52),128);
            tracep->chgWData(oldp+2520,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_53),128);
            tracep->chgWData(oldp+2524,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_54),128);
            tracep->chgWData(oldp+2528,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_55),128);
            tracep->chgWData(oldp+2532,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_56),128);
            tracep->chgWData(oldp+2536,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_57),128);
            tracep->chgWData(oldp+2540,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_58),128);
            tracep->chgWData(oldp+2544,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_59),128);
            tracep->chgWData(oldp+2548,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_60),128);
            tracep->chgWData(oldp+2552,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_61),128);
            tracep->chgWData(oldp+2556,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_62),128);
            tracep->chgWData(oldp+2560,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_63),128);
        }
        tracep->chgBit(oldp+2564,(vlSelf->clock));
        tracep->chgBit(oldp+2565,(vlSelf->reset));
        tracep->chgQData(oldp+2566,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgQData(oldp+2568,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->chgBit(oldp+2570,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+2571,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+2572,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+2574,(vlSelf->io_core_debug_raise_intr));
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

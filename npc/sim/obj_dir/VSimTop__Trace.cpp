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
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp80;
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
            VL_EXTEND_WQ(127,64, __Vtemp70, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp71, __Vtemp70, 
                          (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
            __Vtemp72[0U] = __Vtemp71[0U];
            __Vtemp72[1U] = __Vtemp71[1U];
            __Vtemp72[2U] = __Vtemp71[2U];
            __Vtemp72[3U] = (0x7fffffffU & __Vtemp71[3U]);
            tracep->chgWData(oldp+177,(__Vtemp72),127);
            __Vtemp74[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            __Vtemp74[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                     >> 0x20U));
            __Vtemp74[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                           >> 0x3fU)));
            __Vtemp75[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
            __Vtemp75[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                     >> 0x20U));
            __Vtemp75[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                           >> 0x3fU)));
            VL_DIVS_WWW(65, __Vtemp76, __Vtemp74, __Vtemp75);
            __Vtemp77[0U] = __Vtemp76[0U];
            __Vtemp77[1U] = __Vtemp76[1U];
            __Vtemp77[2U] = (1U & __Vtemp76[2U]);
            tracep->chgWData(oldp+181,(__Vtemp77),65);
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
            tracep->chgBit(oldp+220,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__exc_buf));
            tracep->chgBit(oldp+221,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
            tracep->chgCData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
            tracep->chgCData(oldp+223,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
            tracep->chgCData(oldp+224,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+225,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+226,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
            tracep->chgQData(oldp+227,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
            tracep->chgQData(oldp+229,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
            tracep->chgQData(oldp+231,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
            tracep->chgQData(oldp+233,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
            tracep->chgQData(oldp+235,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
            tracep->chgQData(oldp+237,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
            tracep->chgBit(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_out_req_bits_wr));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
                __Vtemp80[0U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata));
                __Vtemp80[1U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata) 
                                         >> 0x20U));
                __Vtemp80[2U] = (IData)(((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                          ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                          : 0ULL));
                __Vtemp80[3U] = (IData)((((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset))
                                           ? vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata
                                           : 0ULL) 
                                         >> 0x20U));
            } else {
                __Vtemp80[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
                __Vtemp80[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                         >> 0x20U));
                __Vtemp80[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
                __Vtemp80[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                         >> 0x20U));
            }
            tracep->chgWData(oldp+241,(__Vtemp80),128);
            tracep->chgCData(oldp+245,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+246,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_req_ready));
            tracep->chgQData(oldp+248,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
            tracep->chgBit(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+251,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
            tracep->chgBit(oldp+253,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
            tracep->chgBit(oldp+254,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+255,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
            tracep->chgQData(oldp+259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
            tracep->chgBit(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
            tracep->chgBit(oldp+262,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
            tracep->chgCData(oldp+263,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
            tracep->chgBit(oldp+264,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
            tracep->chgBit(oldp+265,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
            tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wr));
            tracep->chgWData(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_wdata),128);
            tracep->chgCData(oldp+271,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb)
                                         : 0xffU)),8);
            tracep->chgBit(oldp+272,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+273,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
            tracep->chgQData(oldp+274,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
            tracep->chgBit(oldp+276,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+277,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+278,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
            tracep->chgBit(oldp+279,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
            tracep->chgBit(oldp+280,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+281,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
            tracep->chgQData(oldp+285,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
            tracep->chgBit(oldp+287,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
            tracep->chgBit(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
            tracep->chgCData(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
            tracep->chgBit(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
            tracep->chgBit(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+292,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
            tracep->chgBit(oldp+293,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
            tracep->chgBit(oldp+294,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_req_ready));
            tracep->chgBit(oldp+295,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
            tracep->chgBit(oldp+296,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
            tracep->chgBit(oldp+297,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
            tracep->chgQData(oldp+298,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_clint_out_wdata),64);
            tracep->chgCData(oldp+300,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__data_addr),6);
            tracep->chgBit(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
            tracep->chgCData(oldp+302,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+303,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+304,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_if_io_inst_mem_req_bits_addr))),4);
            tracep->chgQData(oldp+305,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+309,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+311,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+315,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+317,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+319,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
            tracep->chgBit(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+328,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+329,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+330,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgCData(oldp+331,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H)))))),2);
            tracep->chgQData(oldp+332,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
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
            tracep->chgQData(oldp+334,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H))
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
            tracep->chgCData(oldp+336,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
            tracep->chgBit(oldp+337,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+340,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
            tracep->chgBit(oldp+341,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wr));
            tracep->chgQData(oldp+342,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+344,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgIData(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgCData(oldp+346,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+350,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+353,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+355,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+357,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_hit));
            tracep->chgBit(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
            tracep->chgCData(oldp+364,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__data_addr),6);
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT___io_s1_to_s2_ready_T_2));
            tracep->chgCData(oldp+366,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+367,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+368,((8U & ((IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                       >> 3U)) 
                                              << 3U))),4);
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+371,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+379,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata[2U])))),64);
            tracep->chgQData(oldp+381,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[0U])))),64);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata[2U])))),64);
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wr));
            tracep->chgQData(oldp+388,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wdata),64);
            tracep->chgCData(oldp+390,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_wstrb),8);
            tracep->chgBit(oldp+391,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+392,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+393,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+394,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgCData(oldp+395,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H)))))),2);
            tracep->chgQData(oldp+396,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
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
            tracep->chgQData(oldp+398,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H))
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
            tracep->chgCData(oldp+400,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
            tracep->chgBit(oldp+401,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+402,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+403,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
            tracep->chgBit(oldp+404,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
            tracep->chgBit(oldp+405,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wr));
            tracep->chgQData(oldp+406,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wdata),64);
            tracep->chgCData(oldp+408,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_wstrb),8);
            tracep->chgIData(oldp+409,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgCData(oldp+410,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+411,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+412,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+413,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+414,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+415,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+417,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+419,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+420,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
            tracep->chgQData(oldp+421,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cpu_word_mask),64);
            tracep->chgBit(oldp+423,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
            tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_hit));
            tracep->chgBit(oldp+427,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__unnamedblk1__DOT__refill_come));
            tracep->chgQData(oldp+428,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
            tracep->chgQData(oldp+430,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+432,((0xbff8ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+433,((0x4000ULL == vlSelf->SimTop__DOT__my_core_top__DOT___my_dcache_io_out_req_bits_addr)));
            tracep->chgBit(oldp+434,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT__wen));
            tracep->chgBit(oldp+435,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
            tracep->chgBit(oldp+436,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                            >> 2U))));
            tracep->chgBit(oldp+438,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
            tracep->chgQData(oldp+439,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
            tracep->chgCData(oldp+441,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                         ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                         : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
            tracep->chgBit(oldp+442,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 1U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 1U)))));
            tracep->chgBit(oldp+443,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
            tracep->chgQData(oldp+444,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
            tracep->chgBit(oldp+446,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
            tracep->chgQData(oldp+447,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
            tracep->chgCData(oldp+449,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                         : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
            tracep->chgBit(oldp+450,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                       ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
            tracep->chgBit(oldp+451,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 3U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 3U)))));
            tracep->chgBit(oldp+452,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
            tracep->chgBit(oldp+453,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
            tracep->chgBit(oldp+454,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
            tracep->chgBit(oldp+455,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
            tracep->chgQData(oldp+456,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+458,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
            tracep->chgBit(oldp+459,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                       >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
            tracep->chgQData(oldp+460,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                          ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                             >> 3U)
                                          : ((0x1ffffffffffffffeULL 
                                              & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                 >> 3U)) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                        << 3U)),64);
            tracep->chgQData(oldp+462,(((0xfffffffffffffff0ULL 
                                         & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                           << 3U))))),64);
            tracep->chgCData(oldp+464,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
            tracep->chgCData(oldp+465,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
            tracep->chgQData(oldp+466,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
            tracep->chgCData(oldp+468,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
            tracep->chgCData(oldp+469,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
            tracep->chgBit(oldp+470,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
            tracep->chgQData(oldp+471,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
            tracep->chgBit(oldp+473,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
            tracep->chgBit(oldp+474,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
            tracep->chgBit(oldp+475,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_12));
            tracep->chgBit(oldp+476,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam__io_WEN));
            tracep->chgWData(oldp+477,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__rdata),128);
            tracep->chgWData(oldp+481,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_0),128);
            tracep->chgWData(oldp+485,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_1),128);
            tracep->chgWData(oldp+489,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_2),128);
            tracep->chgWData(oldp+493,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_3),128);
            tracep->chgWData(oldp+497,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_4),128);
            tracep->chgWData(oldp+501,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_5),128);
            tracep->chgWData(oldp+505,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_6),128);
            tracep->chgWData(oldp+509,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_7),128);
            tracep->chgWData(oldp+513,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_8),128);
            tracep->chgWData(oldp+517,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_9),128);
            tracep->chgWData(oldp+521,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_10),128);
            tracep->chgWData(oldp+525,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_11),128);
            tracep->chgWData(oldp+529,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_12),128);
            tracep->chgWData(oldp+533,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_13),128);
            tracep->chgWData(oldp+537,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_14),128);
            tracep->chgWData(oldp+541,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_15),128);
            tracep->chgWData(oldp+545,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_16),128);
            tracep->chgWData(oldp+549,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_17),128);
            tracep->chgWData(oldp+553,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_18),128);
            tracep->chgWData(oldp+557,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_19),128);
            tracep->chgWData(oldp+561,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_20),128);
            tracep->chgWData(oldp+565,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_21),128);
            tracep->chgWData(oldp+569,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_22),128);
            tracep->chgWData(oldp+573,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_23),128);
            tracep->chgWData(oldp+577,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_24),128);
            tracep->chgWData(oldp+581,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_25),128);
            tracep->chgWData(oldp+585,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_26),128);
            tracep->chgWData(oldp+589,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_27),128);
            tracep->chgWData(oldp+593,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_28),128);
            tracep->chgWData(oldp+597,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_29),128);
            tracep->chgWData(oldp+601,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_30),128);
            tracep->chgWData(oldp+605,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_31),128);
            tracep->chgWData(oldp+609,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_32),128);
            tracep->chgWData(oldp+613,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_33),128);
            tracep->chgWData(oldp+617,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_34),128);
            tracep->chgWData(oldp+621,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_35),128);
            tracep->chgWData(oldp+625,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_36),128);
            tracep->chgWData(oldp+629,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_37),128);
            tracep->chgWData(oldp+633,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_38),128);
            tracep->chgWData(oldp+637,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_39),128);
            tracep->chgWData(oldp+641,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_40),128);
            tracep->chgWData(oldp+645,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_41),128);
            tracep->chgWData(oldp+649,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_42),128);
            tracep->chgWData(oldp+653,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_43),128);
            tracep->chgWData(oldp+657,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_44),128);
            tracep->chgWData(oldp+661,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_45),128);
            tracep->chgWData(oldp+665,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_46),128);
            tracep->chgWData(oldp+669,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_47),128);
            tracep->chgWData(oldp+673,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_48),128);
            tracep->chgWData(oldp+677,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_49),128);
            tracep->chgWData(oldp+681,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_50),128);
            tracep->chgWData(oldp+685,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_51),128);
            tracep->chgWData(oldp+689,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_52),128);
            tracep->chgWData(oldp+693,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_53),128);
            tracep->chgWData(oldp+697,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_54),128);
            tracep->chgWData(oldp+701,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_55),128);
            tracep->chgWData(oldp+705,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_56),128);
            tracep->chgWData(oldp+709,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_57),128);
            tracep->chgWData(oldp+713,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_58),128);
            tracep->chgWData(oldp+717,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_59),128);
            tracep->chgWData(oldp+721,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_60),128);
            tracep->chgWData(oldp+725,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_61),128);
            tracep->chgWData(oldp+729,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_62),128);
            tracep->chgWData(oldp+733,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam.__PVT__ram_63),128);
            tracep->chgBit(oldp+737,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
            tracep->chgWData(oldp+738,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__rdata),128);
            tracep->chgWData(oldp+742,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_0),128);
            tracep->chgWData(oldp+746,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_1),128);
            tracep->chgWData(oldp+750,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_2),128);
            tracep->chgWData(oldp+754,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_3),128);
            tracep->chgWData(oldp+758,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_4),128);
            tracep->chgWData(oldp+762,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_5),128);
            tracep->chgWData(oldp+766,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_6),128);
            tracep->chgWData(oldp+770,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_7),128);
            tracep->chgWData(oldp+774,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_8),128);
            tracep->chgWData(oldp+778,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_9),128);
            tracep->chgWData(oldp+782,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_10),128);
            tracep->chgWData(oldp+786,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_11),128);
            tracep->chgWData(oldp+790,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_12),128);
            tracep->chgWData(oldp+794,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_13),128);
            tracep->chgWData(oldp+798,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_14),128);
            tracep->chgWData(oldp+802,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_15),128);
            tracep->chgWData(oldp+806,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_16),128);
            tracep->chgWData(oldp+810,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_17),128);
            tracep->chgWData(oldp+814,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_18),128);
            tracep->chgWData(oldp+818,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_19),128);
            tracep->chgWData(oldp+822,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_20),128);
            tracep->chgWData(oldp+826,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_21),128);
            tracep->chgWData(oldp+830,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_22),128);
            tracep->chgWData(oldp+834,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_23),128);
            tracep->chgWData(oldp+838,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_24),128);
            tracep->chgWData(oldp+842,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_25),128);
            tracep->chgWData(oldp+846,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_26),128);
            tracep->chgWData(oldp+850,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_27),128);
            tracep->chgWData(oldp+854,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_28),128);
            tracep->chgWData(oldp+858,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_29),128);
            tracep->chgWData(oldp+862,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_30),128);
            tracep->chgWData(oldp+866,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_31),128);
            tracep->chgWData(oldp+870,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_32),128);
            tracep->chgWData(oldp+874,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_33),128);
            tracep->chgWData(oldp+878,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_34),128);
            tracep->chgWData(oldp+882,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_35),128);
            tracep->chgWData(oldp+886,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_36),128);
            tracep->chgWData(oldp+890,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_37),128);
            tracep->chgWData(oldp+894,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_38),128);
            tracep->chgWData(oldp+898,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_39),128);
            tracep->chgWData(oldp+902,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_40),128);
            tracep->chgWData(oldp+906,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_41),128);
            tracep->chgWData(oldp+910,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_42),128);
            tracep->chgWData(oldp+914,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_43),128);
            tracep->chgWData(oldp+918,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_44),128);
            tracep->chgWData(oldp+922,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_45),128);
            tracep->chgWData(oldp+926,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_46),128);
            tracep->chgWData(oldp+930,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_47),128);
            tracep->chgWData(oldp+934,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_48),128);
            tracep->chgWData(oldp+938,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_49),128);
            tracep->chgWData(oldp+942,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_50),128);
            tracep->chgWData(oldp+946,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_51),128);
            tracep->chgWData(oldp+950,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_52),128);
            tracep->chgWData(oldp+954,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_53),128);
            tracep->chgWData(oldp+958,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_54),128);
            tracep->chgWData(oldp+962,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_55),128);
            tracep->chgWData(oldp+966,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_56),128);
            tracep->chgWData(oldp+970,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_57),128);
            tracep->chgWData(oldp+974,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_58),128);
            tracep->chgWData(oldp+978,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_59),128);
            tracep->chgWData(oldp+982,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_60),128);
            tracep->chgWData(oldp+986,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_61),128);
            tracep->chgWData(oldp+990,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_62),128);
            tracep->chgWData(oldp+994,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1.__PVT__ram_63),128);
            tracep->chgBit(oldp+998,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
            tracep->chgWData(oldp+999,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__rdata),128);
            tracep->chgWData(oldp+1003,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_0),128);
            tracep->chgWData(oldp+1007,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_1),128);
            tracep->chgWData(oldp+1011,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_2),128);
            tracep->chgWData(oldp+1015,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_3),128);
            tracep->chgWData(oldp+1019,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_4),128);
            tracep->chgWData(oldp+1023,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_5),128);
            tracep->chgWData(oldp+1027,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_6),128);
            tracep->chgWData(oldp+1031,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_7),128);
            tracep->chgWData(oldp+1035,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_8),128);
            tracep->chgWData(oldp+1039,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_9),128);
            tracep->chgWData(oldp+1043,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_10),128);
            tracep->chgWData(oldp+1047,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_11),128);
            tracep->chgWData(oldp+1051,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_12),128);
            tracep->chgWData(oldp+1055,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_13),128);
            tracep->chgWData(oldp+1059,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_14),128);
            tracep->chgWData(oldp+1063,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_15),128);
            tracep->chgWData(oldp+1067,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_16),128);
            tracep->chgWData(oldp+1071,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_17),128);
            tracep->chgWData(oldp+1075,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_18),128);
            tracep->chgWData(oldp+1079,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_19),128);
            tracep->chgWData(oldp+1083,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_20),128);
            tracep->chgWData(oldp+1087,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_21),128);
            tracep->chgWData(oldp+1091,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_22),128);
            tracep->chgWData(oldp+1095,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_23),128);
            tracep->chgWData(oldp+1099,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_24),128);
            tracep->chgWData(oldp+1103,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_25),128);
            tracep->chgWData(oldp+1107,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_26),128);
            tracep->chgWData(oldp+1111,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_27),128);
            tracep->chgWData(oldp+1115,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_28),128);
            tracep->chgWData(oldp+1119,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_29),128);
            tracep->chgWData(oldp+1123,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_30),128);
            tracep->chgWData(oldp+1127,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_31),128);
            tracep->chgWData(oldp+1131,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_32),128);
            tracep->chgWData(oldp+1135,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_33),128);
            tracep->chgWData(oldp+1139,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_34),128);
            tracep->chgWData(oldp+1143,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_35),128);
            tracep->chgWData(oldp+1147,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_36),128);
            tracep->chgWData(oldp+1151,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_37),128);
            tracep->chgWData(oldp+1155,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_38),128);
            tracep->chgWData(oldp+1159,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_39),128);
            tracep->chgWData(oldp+1163,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_40),128);
            tracep->chgWData(oldp+1167,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_41),128);
            tracep->chgWData(oldp+1171,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_42),128);
            tracep->chgWData(oldp+1175,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_43),128);
            tracep->chgWData(oldp+1179,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_44),128);
            tracep->chgWData(oldp+1183,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_45),128);
            tracep->chgWData(oldp+1187,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_46),128);
            tracep->chgWData(oldp+1191,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_47),128);
            tracep->chgWData(oldp+1195,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_48),128);
            tracep->chgWData(oldp+1199,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_49),128);
            tracep->chgWData(oldp+1203,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_50),128);
            tracep->chgWData(oldp+1207,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_51),128);
            tracep->chgWData(oldp+1211,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_52),128);
            tracep->chgWData(oldp+1215,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_53),128);
            tracep->chgWData(oldp+1219,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_54),128);
            tracep->chgWData(oldp+1223,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_55),128);
            tracep->chgWData(oldp+1227,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_56),128);
            tracep->chgWData(oldp+1231,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_57),128);
            tracep->chgWData(oldp+1235,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_58),128);
            tracep->chgWData(oldp+1239,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_59),128);
            tracep->chgWData(oldp+1243,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_60),128);
            tracep->chgWData(oldp+1247,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_61),128);
            tracep->chgWData(oldp+1251,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_62),128);
            tracep->chgWData(oldp+1255,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2.__PVT__ram_63),128);
            tracep->chgBit(oldp+1259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
            tracep->chgWData(oldp+1260,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__rdata),128);
            tracep->chgWData(oldp+1264,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_0),128);
            tracep->chgWData(oldp+1268,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_1),128);
            tracep->chgWData(oldp+1272,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_2),128);
            tracep->chgWData(oldp+1276,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_3),128);
            tracep->chgWData(oldp+1280,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_4),128);
            tracep->chgWData(oldp+1284,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_5),128);
            tracep->chgWData(oldp+1288,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_6),128);
            tracep->chgWData(oldp+1292,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_7),128);
            tracep->chgWData(oldp+1296,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_8),128);
            tracep->chgWData(oldp+1300,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_9),128);
            tracep->chgWData(oldp+1304,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_10),128);
            tracep->chgWData(oldp+1308,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_11),128);
            tracep->chgWData(oldp+1312,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_12),128);
            tracep->chgWData(oldp+1316,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_13),128);
            tracep->chgWData(oldp+1320,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_14),128);
            tracep->chgWData(oldp+1324,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_15),128);
            tracep->chgWData(oldp+1328,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_16),128);
            tracep->chgWData(oldp+1332,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_17),128);
            tracep->chgWData(oldp+1336,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_18),128);
            tracep->chgWData(oldp+1340,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_19),128);
            tracep->chgWData(oldp+1344,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_20),128);
            tracep->chgWData(oldp+1348,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_21),128);
            tracep->chgWData(oldp+1352,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_22),128);
            tracep->chgWData(oldp+1356,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_23),128);
            tracep->chgWData(oldp+1360,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_24),128);
            tracep->chgWData(oldp+1364,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_25),128);
            tracep->chgWData(oldp+1368,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_26),128);
            tracep->chgWData(oldp+1372,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_27),128);
            tracep->chgWData(oldp+1376,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_28),128);
            tracep->chgWData(oldp+1380,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_29),128);
            tracep->chgWData(oldp+1384,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_30),128);
            tracep->chgWData(oldp+1388,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_31),128);
            tracep->chgWData(oldp+1392,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_32),128);
            tracep->chgWData(oldp+1396,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_33),128);
            tracep->chgWData(oldp+1400,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_34),128);
            tracep->chgWData(oldp+1404,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_35),128);
            tracep->chgWData(oldp+1408,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_36),128);
            tracep->chgWData(oldp+1412,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_37),128);
            tracep->chgWData(oldp+1416,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_38),128);
            tracep->chgWData(oldp+1420,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_39),128);
            tracep->chgWData(oldp+1424,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_40),128);
            tracep->chgWData(oldp+1428,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_41),128);
            tracep->chgWData(oldp+1432,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_42),128);
            tracep->chgWData(oldp+1436,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_43),128);
            tracep->chgWData(oldp+1440,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_44),128);
            tracep->chgWData(oldp+1444,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_45),128);
            tracep->chgWData(oldp+1448,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_46),128);
            tracep->chgWData(oldp+1452,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_47),128);
            tracep->chgWData(oldp+1456,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_48),128);
            tracep->chgWData(oldp+1460,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_49),128);
            tracep->chgWData(oldp+1464,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_50),128);
            tracep->chgWData(oldp+1468,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_51),128);
            tracep->chgWData(oldp+1472,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_52),128);
            tracep->chgWData(oldp+1476,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_53),128);
            tracep->chgWData(oldp+1480,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_54),128);
            tracep->chgWData(oldp+1484,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_55),128);
            tracep->chgWData(oldp+1488,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_56),128);
            tracep->chgWData(oldp+1492,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_57),128);
            tracep->chgWData(oldp+1496,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_58),128);
            tracep->chgWData(oldp+1500,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_59),128);
            tracep->chgWData(oldp+1504,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_60),128);
            tracep->chgWData(oldp+1508,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_61),128);
            tracep->chgWData(oldp+1512,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_62),128);
            tracep->chgWData(oldp+1516,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3.__PVT__ram_63),128);
            tracep->chgBit(oldp+1520,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_12));
            tracep->chgBit(oldp+1521,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam__io_WEN));
            tracep->chgWData(oldp+1522,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__rdata),128);
            tracep->chgWData(oldp+1526,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_0),128);
            tracep->chgWData(oldp+1530,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_1),128);
            tracep->chgWData(oldp+1534,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_2),128);
            tracep->chgWData(oldp+1538,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_3),128);
            tracep->chgWData(oldp+1542,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_4),128);
            tracep->chgWData(oldp+1546,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_5),128);
            tracep->chgWData(oldp+1550,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_6),128);
            tracep->chgWData(oldp+1554,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_7),128);
            tracep->chgWData(oldp+1558,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_8),128);
            tracep->chgWData(oldp+1562,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_9),128);
            tracep->chgWData(oldp+1566,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_10),128);
            tracep->chgWData(oldp+1570,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_11),128);
            tracep->chgWData(oldp+1574,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_12),128);
            tracep->chgWData(oldp+1578,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_13),128);
            tracep->chgWData(oldp+1582,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_14),128);
            tracep->chgWData(oldp+1586,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_15),128);
            tracep->chgWData(oldp+1590,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_16),128);
            tracep->chgWData(oldp+1594,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_17),128);
            tracep->chgWData(oldp+1598,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_18),128);
            tracep->chgWData(oldp+1602,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_19),128);
            tracep->chgWData(oldp+1606,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_20),128);
            tracep->chgWData(oldp+1610,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_21),128);
            tracep->chgWData(oldp+1614,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_22),128);
            tracep->chgWData(oldp+1618,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_23),128);
            tracep->chgWData(oldp+1622,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_24),128);
            tracep->chgWData(oldp+1626,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_25),128);
            tracep->chgWData(oldp+1630,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_26),128);
            tracep->chgWData(oldp+1634,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_27),128);
            tracep->chgWData(oldp+1638,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_28),128);
            tracep->chgWData(oldp+1642,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_29),128);
            tracep->chgWData(oldp+1646,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_30),128);
            tracep->chgWData(oldp+1650,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_31),128);
            tracep->chgWData(oldp+1654,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_32),128);
            tracep->chgWData(oldp+1658,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_33),128);
            tracep->chgWData(oldp+1662,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_34),128);
            tracep->chgWData(oldp+1666,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_35),128);
            tracep->chgWData(oldp+1670,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_36),128);
            tracep->chgWData(oldp+1674,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_37),128);
            tracep->chgWData(oldp+1678,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_38),128);
            tracep->chgWData(oldp+1682,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_39),128);
            tracep->chgWData(oldp+1686,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_40),128);
            tracep->chgWData(oldp+1690,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_41),128);
            tracep->chgWData(oldp+1694,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_42),128);
            tracep->chgWData(oldp+1698,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_43),128);
            tracep->chgWData(oldp+1702,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_44),128);
            tracep->chgWData(oldp+1706,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_45),128);
            tracep->chgWData(oldp+1710,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_46),128);
            tracep->chgWData(oldp+1714,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_47),128);
            tracep->chgWData(oldp+1718,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_48),128);
            tracep->chgWData(oldp+1722,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_49),128);
            tracep->chgWData(oldp+1726,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_50),128);
            tracep->chgWData(oldp+1730,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_51),128);
            tracep->chgWData(oldp+1734,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_52),128);
            tracep->chgWData(oldp+1738,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_53),128);
            tracep->chgWData(oldp+1742,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_54),128);
            tracep->chgWData(oldp+1746,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_55),128);
            tracep->chgWData(oldp+1750,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_56),128);
            tracep->chgWData(oldp+1754,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_57),128);
            tracep->chgWData(oldp+1758,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_58),128);
            tracep->chgWData(oldp+1762,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_59),128);
            tracep->chgWData(oldp+1766,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_60),128);
            tracep->chgWData(oldp+1770,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_61),128);
            tracep->chgWData(oldp+1774,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_62),128);
            tracep->chgWData(oldp+1778,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam.__PVT__ram_63),128);
            tracep->chgBit(oldp+1782,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_1__io_WEN));
            tracep->chgWData(oldp+1783,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__rdata),128);
            tracep->chgWData(oldp+1787,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_0),128);
            tracep->chgWData(oldp+1791,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_1),128);
            tracep->chgWData(oldp+1795,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_2),128);
            tracep->chgWData(oldp+1799,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_3),128);
            tracep->chgWData(oldp+1803,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_4),128);
            tracep->chgWData(oldp+1807,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_5),128);
            tracep->chgWData(oldp+1811,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_6),128);
            tracep->chgWData(oldp+1815,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_7),128);
            tracep->chgWData(oldp+1819,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_8),128);
            tracep->chgWData(oldp+1823,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_9),128);
            tracep->chgWData(oldp+1827,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_10),128);
            tracep->chgWData(oldp+1831,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_11),128);
            tracep->chgWData(oldp+1835,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_12),128);
            tracep->chgWData(oldp+1839,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_13),128);
            tracep->chgWData(oldp+1843,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_14),128);
            tracep->chgWData(oldp+1847,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_15),128);
            tracep->chgWData(oldp+1851,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_16),128);
            tracep->chgWData(oldp+1855,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_17),128);
            tracep->chgWData(oldp+1859,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_18),128);
            tracep->chgWData(oldp+1863,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_19),128);
            tracep->chgWData(oldp+1867,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_20),128);
            tracep->chgWData(oldp+1871,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_21),128);
            tracep->chgWData(oldp+1875,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_22),128);
            tracep->chgWData(oldp+1879,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_23),128);
            tracep->chgWData(oldp+1883,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_24),128);
            tracep->chgWData(oldp+1887,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_25),128);
            tracep->chgWData(oldp+1891,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_26),128);
            tracep->chgWData(oldp+1895,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_27),128);
            tracep->chgWData(oldp+1899,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_28),128);
            tracep->chgWData(oldp+1903,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_29),128);
            tracep->chgWData(oldp+1907,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_30),128);
            tracep->chgWData(oldp+1911,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_31),128);
            tracep->chgWData(oldp+1915,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_32),128);
            tracep->chgWData(oldp+1919,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_33),128);
            tracep->chgWData(oldp+1923,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_34),128);
            tracep->chgWData(oldp+1927,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_35),128);
            tracep->chgWData(oldp+1931,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_36),128);
            tracep->chgWData(oldp+1935,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_37),128);
            tracep->chgWData(oldp+1939,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_38),128);
            tracep->chgWData(oldp+1943,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_39),128);
            tracep->chgWData(oldp+1947,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_40),128);
            tracep->chgWData(oldp+1951,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_41),128);
            tracep->chgWData(oldp+1955,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_42),128);
            tracep->chgWData(oldp+1959,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_43),128);
            tracep->chgWData(oldp+1963,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_44),128);
            tracep->chgWData(oldp+1967,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_45),128);
            tracep->chgWData(oldp+1971,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_46),128);
            tracep->chgWData(oldp+1975,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_47),128);
            tracep->chgWData(oldp+1979,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_48),128);
            tracep->chgWData(oldp+1983,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_49),128);
            tracep->chgWData(oldp+1987,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_50),128);
            tracep->chgWData(oldp+1991,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_51),128);
            tracep->chgWData(oldp+1995,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_52),128);
            tracep->chgWData(oldp+1999,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_53),128);
            tracep->chgWData(oldp+2003,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_54),128);
            tracep->chgWData(oldp+2007,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_55),128);
            tracep->chgWData(oldp+2011,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_56),128);
            tracep->chgWData(oldp+2015,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_57),128);
            tracep->chgWData(oldp+2019,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_58),128);
            tracep->chgWData(oldp+2023,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_59),128);
            tracep->chgWData(oldp+2027,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_60),128);
            tracep->chgWData(oldp+2031,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_61),128);
            tracep->chgWData(oldp+2035,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_62),128);
            tracep->chgWData(oldp+2039,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1.__PVT__ram_63),128);
            tracep->chgBit(oldp+2043,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_2__io_WEN));
            tracep->chgWData(oldp+2044,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__rdata),128);
            tracep->chgWData(oldp+2048,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_0),128);
            tracep->chgWData(oldp+2052,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_1),128);
            tracep->chgWData(oldp+2056,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_2),128);
            tracep->chgWData(oldp+2060,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_3),128);
            tracep->chgWData(oldp+2064,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_4),128);
            tracep->chgWData(oldp+2068,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_5),128);
            tracep->chgWData(oldp+2072,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_6),128);
            tracep->chgWData(oldp+2076,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_7),128);
            tracep->chgWData(oldp+2080,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_8),128);
            tracep->chgWData(oldp+2084,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_9),128);
            tracep->chgWData(oldp+2088,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_10),128);
            tracep->chgWData(oldp+2092,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_11),128);
            tracep->chgWData(oldp+2096,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_12),128);
            tracep->chgWData(oldp+2100,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_13),128);
            tracep->chgWData(oldp+2104,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_14),128);
            tracep->chgWData(oldp+2108,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_15),128);
            tracep->chgWData(oldp+2112,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_16),128);
            tracep->chgWData(oldp+2116,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_17),128);
            tracep->chgWData(oldp+2120,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_18),128);
            tracep->chgWData(oldp+2124,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_19),128);
            tracep->chgWData(oldp+2128,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_20),128);
            tracep->chgWData(oldp+2132,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_21),128);
            tracep->chgWData(oldp+2136,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_22),128);
            tracep->chgWData(oldp+2140,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_23),128);
            tracep->chgWData(oldp+2144,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_24),128);
            tracep->chgWData(oldp+2148,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_25),128);
            tracep->chgWData(oldp+2152,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_26),128);
            tracep->chgWData(oldp+2156,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_27),128);
            tracep->chgWData(oldp+2160,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_28),128);
            tracep->chgWData(oldp+2164,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_29),128);
            tracep->chgWData(oldp+2168,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_30),128);
            tracep->chgWData(oldp+2172,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_31),128);
            tracep->chgWData(oldp+2176,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_32),128);
            tracep->chgWData(oldp+2180,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_33),128);
            tracep->chgWData(oldp+2184,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_34),128);
            tracep->chgWData(oldp+2188,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_35),128);
            tracep->chgWData(oldp+2192,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_36),128);
            tracep->chgWData(oldp+2196,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_37),128);
            tracep->chgWData(oldp+2200,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_38),128);
            tracep->chgWData(oldp+2204,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_39),128);
            tracep->chgWData(oldp+2208,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_40),128);
            tracep->chgWData(oldp+2212,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_41),128);
            tracep->chgWData(oldp+2216,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_42),128);
            tracep->chgWData(oldp+2220,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_43),128);
            tracep->chgWData(oldp+2224,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_44),128);
            tracep->chgWData(oldp+2228,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_45),128);
            tracep->chgWData(oldp+2232,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_46),128);
            tracep->chgWData(oldp+2236,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_47),128);
            tracep->chgWData(oldp+2240,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_48),128);
            tracep->chgWData(oldp+2244,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_49),128);
            tracep->chgWData(oldp+2248,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_50),128);
            tracep->chgWData(oldp+2252,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_51),128);
            tracep->chgWData(oldp+2256,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_52),128);
            tracep->chgWData(oldp+2260,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_53),128);
            tracep->chgWData(oldp+2264,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_54),128);
            tracep->chgWData(oldp+2268,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_55),128);
            tracep->chgWData(oldp+2272,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_56),128);
            tracep->chgWData(oldp+2276,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_57),128);
            tracep->chgWData(oldp+2280,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_58),128);
            tracep->chgWData(oldp+2284,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_59),128);
            tracep->chgWData(oldp+2288,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_60),128);
            tracep->chgWData(oldp+2292,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_61),128);
            tracep->chgWData(oldp+2296,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_62),128);
            tracep->chgWData(oldp+2300,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2.__PVT__ram_63),128);
            tracep->chgBit(oldp+2304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRam_3__io_WEN));
            tracep->chgWData(oldp+2305,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__rdata),128);
            tracep->chgWData(oldp+2309,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_0),128);
            tracep->chgWData(oldp+2313,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_1),128);
            tracep->chgWData(oldp+2317,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_2),128);
            tracep->chgWData(oldp+2321,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_3),128);
            tracep->chgWData(oldp+2325,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_4),128);
            tracep->chgWData(oldp+2329,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_5),128);
            tracep->chgWData(oldp+2333,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_6),128);
            tracep->chgWData(oldp+2337,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_7),128);
            tracep->chgWData(oldp+2341,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_8),128);
            tracep->chgWData(oldp+2345,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_9),128);
            tracep->chgWData(oldp+2349,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_10),128);
            tracep->chgWData(oldp+2353,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_11),128);
            tracep->chgWData(oldp+2357,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_12),128);
            tracep->chgWData(oldp+2361,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_13),128);
            tracep->chgWData(oldp+2365,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_14),128);
            tracep->chgWData(oldp+2369,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_15),128);
            tracep->chgWData(oldp+2373,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_16),128);
            tracep->chgWData(oldp+2377,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_17),128);
            tracep->chgWData(oldp+2381,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_18),128);
            tracep->chgWData(oldp+2385,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_19),128);
            tracep->chgWData(oldp+2389,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_20),128);
            tracep->chgWData(oldp+2393,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_21),128);
            tracep->chgWData(oldp+2397,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_22),128);
            tracep->chgWData(oldp+2401,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_23),128);
            tracep->chgWData(oldp+2405,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_24),128);
            tracep->chgWData(oldp+2409,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_25),128);
            tracep->chgWData(oldp+2413,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_26),128);
            tracep->chgWData(oldp+2417,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_27),128);
            tracep->chgWData(oldp+2421,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_28),128);
            tracep->chgWData(oldp+2425,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_29),128);
            tracep->chgWData(oldp+2429,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_30),128);
            tracep->chgWData(oldp+2433,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_31),128);
            tracep->chgWData(oldp+2437,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_32),128);
            tracep->chgWData(oldp+2441,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_33),128);
            tracep->chgWData(oldp+2445,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_34),128);
            tracep->chgWData(oldp+2449,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_35),128);
            tracep->chgWData(oldp+2453,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_36),128);
            tracep->chgWData(oldp+2457,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_37),128);
            tracep->chgWData(oldp+2461,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_38),128);
            tracep->chgWData(oldp+2465,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_39),128);
            tracep->chgWData(oldp+2469,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_40),128);
            tracep->chgWData(oldp+2473,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_41),128);
            tracep->chgWData(oldp+2477,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_42),128);
            tracep->chgWData(oldp+2481,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_43),128);
            tracep->chgWData(oldp+2485,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_44),128);
            tracep->chgWData(oldp+2489,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_45),128);
            tracep->chgWData(oldp+2493,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_46),128);
            tracep->chgWData(oldp+2497,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_47),128);
            tracep->chgWData(oldp+2501,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_48),128);
            tracep->chgWData(oldp+2505,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_49),128);
            tracep->chgWData(oldp+2509,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_50),128);
            tracep->chgWData(oldp+2513,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_51),128);
            tracep->chgWData(oldp+2517,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_52),128);
            tracep->chgWData(oldp+2521,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_53),128);
            tracep->chgWData(oldp+2525,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_54),128);
            tracep->chgWData(oldp+2529,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_55),128);
            tracep->chgWData(oldp+2533,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_56),128);
            tracep->chgWData(oldp+2537,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_57),128);
            tracep->chgWData(oldp+2541,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_58),128);
            tracep->chgWData(oldp+2545,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_59),128);
            tracep->chgWData(oldp+2549,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_60),128);
            tracep->chgWData(oldp+2553,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_61),128);
            tracep->chgWData(oldp+2557,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_62),128);
            tracep->chgWData(oldp+2561,(vlSymsp->TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3.__PVT__ram_63),128);
        }
        tracep->chgBit(oldp+2565,(vlSelf->clock));
        tracep->chgBit(oldp+2566,(vlSelf->reset));
        tracep->chgQData(oldp+2567,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgQData(oldp+2569,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->chgBit(oldp+2571,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+2572,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+2573,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+2575,(vlSelf->io_core_debug_raise_intr));
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

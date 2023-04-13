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
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,((4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)),64);
            tracep->chgQData(oldp+2,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target),64);
            tracep->chgBit(oldp+4,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en));
            tracep->chgBit(oldp+5,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate))));
            tracep->chgBit(oldp+6,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_rd_valid_T_1));
            tracep->chgQData(oldp+7,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rdata_r),64);
            tracep->chgBit(oldp+9,(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap));
            tracep->chgQData(oldp+10,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target),64);
            tracep->chgBit(oldp+12,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_ms_mem_ok));
            tracep->chgQData(oldp+13,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2));
            tracep->chgQData(oldp+16,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc),64);
            tracep->chgBit(oldp+18,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                                           >> 2U))));
            tracep->chgIData(oldp+19,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst),32);
            tracep->chgBit(oldp+20,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_fs_mem_ok_T_1));
            tracep->chgBit(oldp+21,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
            tracep->chgCData(oldp+22,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),3);
            tracep->chgBit(oldp+23,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we));
            tracep->chgCData(oldp+24,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 7U))),5);
            tracep->chgQData(oldp+25,(vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata),64);
            tracep->chgIData(oldp+27,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op),23);
            tracep->chgBit(oldp+28,(((0x37U != (0x7fU 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                     & ((0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))));
            tracep->chgBit(oldp+29,((((0x37U == (0x7fU 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))));
            tracep->chgSData(oldp+30,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type),9);
            tracep->chgBit(oldp+31,((((((0x37U == (0x7fU 
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
            tracep->chgBit(oldp+32,((((((((((((0x37U 
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
            tracep->chgBit(oldp+33,((((((((((((0x37U 
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
            tracep->chgBit(oldp+34,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
            tracep->chgCData(oldp+35,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type),7);
            tracep->chgBit(oldp+36,((((((((((((((((
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
            tracep->chgCData(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel),3);
            tracep->chgCData(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op),3);
            tracep->chgCData(oldp+39,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type),2);
            tracep->chgQData(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1),64);
            tracep->chgQData(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2),64);
            tracep->chgQData(oldp+44,(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm),64);
            tracep->chgSData(oldp+46,((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+47,(((IData)((0x73U 
                                              == (0xfffffU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                     & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                               >> 0x14U)))));
            tracep->chgQData(oldp+48,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))),64);
            tracep->chgCData(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
            tracep->chgCData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
            tracep->chgCData(oldp+52,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+53,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[0]),64);
            tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[1]),64);
            tracep->chgQData(oldp+57,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[2]),64);
            tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[3]),64);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[4]),64);
            tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[5]),64);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[6]),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[7]),64);
            tracep->chgQData(oldp+69,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[8]),64);
            tracep->chgQData(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[9]),64);
            tracep->chgQData(oldp+73,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[10]),64);
            tracep->chgQData(oldp+75,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[11]),64);
            tracep->chgQData(oldp+77,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[12]),64);
            tracep->chgQData(oldp+79,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[13]),64);
            tracep->chgQData(oldp+81,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[14]),64);
            tracep->chgQData(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[15]),64);
            tracep->chgQData(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[16]),64);
            tracep->chgQData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[17]),64);
            tracep->chgQData(oldp+89,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[18]),64);
            tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[19]),64);
            tracep->chgQData(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[20]),64);
            tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[21]),64);
            tracep->chgQData(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[22]),64);
            tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[23]),64);
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[24]),64);
            tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[25]),64);
            tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[26]),64);
            tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[27]),64);
            tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[28]),64);
            tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[29]),64);
            tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[30]),64);
            tracep->chgQData(oldp+115,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[31]),64);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result),64);
            tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res),64);
            tracep->chgBit(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2));
            tracep->chgBit(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal));
            tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1),64);
            tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2),64);
            tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res),64);
            tracep->chgBit(oldp+129,((1U & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])));
            tracep->chgBit(oldp+130,((1U & ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
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
            VL_EXTEND_WQ(127,64, __Vtemp58, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp59, __Vtemp58, 
                          (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
            __Vtemp60[0U] = __Vtemp59[0U];
            __Vtemp60[1U] = __Vtemp59[1U];
            __Vtemp60[2U] = __Vtemp59[2U];
            __Vtemp60[3U] = (0x7fffffffU & __Vtemp59[3U]);
            tracep->chgWData(oldp+131,(__Vtemp60),127);
            __Vtemp62[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
            __Vtemp62[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                     >> 0x20U));
            __Vtemp62[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                           >> 0x3fU)));
            __Vtemp63[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
            __Vtemp63[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                     >> 0x20U));
            __Vtemp63[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                           >> 0x3fU)));
            VL_DIVS_WWW(65, __Vtemp64, __Vtemp62, __Vtemp63);
            __Vtemp65[0U] = __Vtemp64[0U];
            __Vtemp65[1U] = __Vtemp64[1U];
            __Vtemp65[2U] = (1U & __Vtemp64[2U]);
            tracep->chgWData(oldp+135,(__Vtemp65),65);
            tracep->chgQData(oldp+138,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res),33);
            tracep->chgIData(oldp+140,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res),32);
            tracep->chgIData(oldp+141,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res),32);
            tracep->chgIData(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res),32);
            tracep->chgBit(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
            tracep->chgBit(oldp+144,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate))));
            tracep->chgBit(oldp+145,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_rd_valid_T_1));
            tracep->chgQData(oldp+146,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rdata_r),64);
            tracep->chgBit(oldp+148,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate))));
            tracep->chgBit(oldp+149,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                                            >> 1U))));
            tracep->chgBit(oldp+150,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                                            >> 2U))));
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result),64);
            tracep->chgBit(oldp+153,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1));
            tracep->chgQData(oldp+154,((0xfffffffffffffff8ULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)),64);
            tracep->chgBit(oldp+156,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                            >> 1U))));
            tracep->chgBit(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_aw_valid_T_1));
            tracep->chgBit(oldp+158,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                            >> 2U))));
            tracep->chgCData(oldp+159,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wt_bits_wstrb),8);
            tracep->chgBit(oldp+160,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                                            >> 3U))));
            tracep->chgBit(oldp+161,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs));
            tracep->chgBit(oldp+162,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en));
            tracep->chgCData(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state),4);
            tracep->chgBit(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rd_req));
            tracep->chgBit(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__wt_req));
            tracep->chgQData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r),64);
            tracep->chgQData(oldp+168,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata),64);
            tracep->chgCData(oldp+170,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b),8);
            tracep->chgSData(oldp+171,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h),16);
            tracep->chgIData(oldp+172,(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w),32);
            tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16),64);
            tracep->chgQData(oldp+175,(((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                                       >> 0x3fU)))
                                         ? (0xfffffffffffffffcULL 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                                         : (4ULL + 
                                            (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))),64);
            tracep->chgQData(oldp+177,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)),64);
            tracep->chgBit(oldp+179,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))));
            tracep->chgBit(oldp+180,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+181,((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
                                         == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__waddr_r),64);
            tracep->chgQData(oldp+185,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wdata_r),64);
            tracep->chgBit(oldp+187,((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp)));
            tracep->chgQData(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime),64);
            tracep->chgQData(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp),64);
            tracep->chgCData(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl),2);
            tracep->chgCData(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl),2);
            tracep->chgCData(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+196,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie));
            tracep->chgQData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause),64);
            tracep->chgQData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc),64);
            tracep->chgQData(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec),64);
            tracep->chgQData(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip),64);
            tracep->chgQData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie),64);
            tracep->chgQData(oldp+207,((0xfffffffffffffffcULL 
                                        & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)),64);
            tracep->chgQData(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+211,(vlSelf->SimTop__DOT__my_core_top__DOT___my_isram_io_sram_rd_en));
            tracep->chgBit(oldp+212,((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate))));
            tracep->chgBit(oldp+213,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate) 
                                            >> 1U))));
            tracep->chgBit(oldp+214,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate) 
                                            >> 2U))));
            tracep->chgQData(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__waddr_r),64);
            tracep->chgQData(oldp+217,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wdata_r),64);
            tracep->chgCData(oldp+219,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wmask_r),8);
            tracep->chgCData(oldp+220,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate),3);
            tracep->chgCData(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate),3);
            tracep->chgBit(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rd_done_r));
            tracep->chgBit(oldp+223,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_isram_io_sram_rd_en)))));
            tracep->chgBit(oldp+224,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1) 
                                            | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
                                                >> 1U) 
                                               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rd_done_r)))))));
            tracep->chgCData(oldp+225,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wmask_r),8);
            tracep->chgCData(oldp+226,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate),3);
            tracep->chgCData(oldp+227,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate),3);
            tracep->chgBit(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rd_done_r));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_isram_io_sram_rd_en) 
                                            | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1) 
                                               | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
                                                   >> 1U) 
                                                  & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rd_done_r))))))));
            tracep->chgQData(oldp+230,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_isram_io_sram_rd_en)
                                         ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc
                                         : (0xfffffffffffffff8ULL 
                                            & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result))),64);
        }
        tracep->chgBit(oldp+232,(vlSelf->clock));
        tracep->chgBit(oldp+233,(vlSelf->reset));
        tracep->chgQData(oldp+234,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgQData(oldp+236,(vlSelf->io_core_debug_debug_nextpc),64);
        tracep->chgBit(oldp+238,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+239,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+240,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+242,(vlSelf->io_core_debug_raise_intr));
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

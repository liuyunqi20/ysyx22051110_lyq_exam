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
    vlSelf->io_core_inst_mem_out_en = 1U;
    vlSelf->io_core_inst_mem_out_wr = 0U;
    vlSelf->io_core_inst_mem_out_rready = 0U;
    vlSelf->io_core_inst_mem_out_wready = 0U;
    vlSelf->io_core_inst_mem_out_wdata = 0x40ULL;
    vlSelf->io_core_inst_mem_out_wmask = 0U;
    vlSelf->io_core_data_mem_out_rready = 1U;
    vlSelf->io_core_data_mem_out_wready = 1U;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file);
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)));
}

void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_write_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void VSimTop___024root___settle__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_175;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___csignals_T_929;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14;
    CData/*0:0*/ SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15;
    IData/*31:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_4;
    VlWide<4>/*127:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_4;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_5;
    // Body
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec_rval 
        = (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc_rval 
        = (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_rval 
        = (((QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_sxl) 
                              << 2U) | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_uxl)))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mpp) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mie) 
                                               << 3U))))));
    vlSelf->io_core_debug_debug_pc = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    vlSelf->io_core_debug_debug_rf_wnum = (0x1fU & 
                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 7U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__pc_seq 
        = (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                            >> 0x14U))) ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
           [(0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                      >> 0x14U))]);
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3 
        = ((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
           | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0 
        = ((0xfc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                       >> 0x10U)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1 
        = ((0x1fc00U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                        >> 0xfU)) | ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN 
        = ((0x380U & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                      >> 5U)) | (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst));
    vlSelf->io_core_data_mem_out_wdata = vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2;
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15 
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we 
        = (((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
              | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
             | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
                           | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                          | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)))))));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14 
        = (((((((((((((((((((((((((((((((0x37U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type 
        = (((((((((((((((((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                              | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                             | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            ? 0U : ((0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)
                     ? 1U : ((0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst) 
                             << 1U)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en 
        = (((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                    & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                   & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                  & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr 
        = ((((((((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                           & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                          & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                         & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type 
        = (((((((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                    | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                   | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                  | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
            | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
           | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst));
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8 
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
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9 
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
            | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
           | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst));
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
                                 | (0x73U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5 
        = (((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
    SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_2 
        = ((((((0x63U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
               | (0xe3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
              | (0x263U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
             | (0x2e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
            | (0x363U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))) 
           | (0x3e3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)));
    vlSelf->io_core_debug_debug_rf_we = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we;
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op 
        = (((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_14) 
            | (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_15))
            ? 0U : ((0xf3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                     ? 1U : ((0x173U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                              ? 2U : ((0x1f3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                       ? 4U : ((0x2f3U 
                                                == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                ? 1U
                                                : (
                                                   (0x373U 
                                                    == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                                    ? 2U
                                                    : 
                                                   ((0x3f3U 
                                                     == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)) 
                                                    << 2U)))))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target 
        = (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
             ? (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec)
             : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                         ? (4ULL + (0xfffffffffffffffcULL 
                                    & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc))
                         : 0ULL));
    vlSelf->io_core_data_mem_out_en = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en;
    vlSelf->io_core_data_mem_out_wr = vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr;
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel 
        = (((((((((((((((((((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                               | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                              | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type 
        = ((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
            ? 1U : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))
                     ? 0x80U : ((0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))
                                 ? 0x100U : ((0x63U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                              ? 2U : 
                                             ((0xe3U 
                                               == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))
                                               ? 4U
                                               : ((0x263U 
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
                                                     ((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_8) 
                                                      | (IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_9)))))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
        = (((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
              | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
             | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)))
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
        = ((IData)(SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_3)
            ? 0x10U : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))
                        ? 0x20U : ((0x67U == (0x7fU 
                                              & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal 
        = (IData)((0U != (0x180U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type))));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm 
        = ((((((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)((0x7ffU 
                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                   >> 0x14U)))))
                : 0ULL) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                            ? (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                    >> 0x1fU)))) 
                                << 0xbU) | (QData)((IData)(
                                                           ((0x7e0U 
                                                             & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                  >> 7U))))))
                            : 0ULL)) | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                                         ? (((- (QData)((IData)(
                                                                (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                        >> 7U)))))))
                                         : 0ULL)) | 
            ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
              ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                      >> 0x1fU)))) 
                  << 0x1fU) | (QData)((IData)((0x7ffff000U 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))
              : 0ULL)) | ((0x20U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))
                           ? (((- (QData)((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                   >> 0x1fU)))) 
                               << 0x14U) | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                                     >> 0x14U)))))))
                           : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1 
        = ((IData)((0U != (0x30U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type))))
            ? 0U : (0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                             >> 0xfU)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
        = ((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
             | (0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
            | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5))
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1 
        = ((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1))
            ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
           [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1]);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
        = (((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
            & ((0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
               | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1))), 
                                        (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res 
        = VL_DIV_III(32, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1), (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res 
        = VL_MODDIVS_III(32, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1), (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res 
        = VL_MODDIV_III(32, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1), (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2));
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_EXTEND_WQ(65,64, __Vtemp3, ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                          >> 1U))))) 
                                   ^ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2));
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    VL_EXTEND_WI(65,1, __Vtemp5, (1U & (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                        >> 1U)));
    VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U] 
        = __Vtemp6[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
        = __Vtemp6[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U] 
        = (1U & __Vtemp6[2U]);
    __Vtemp8[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    __Vtemp8[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                            >> 0x20U));
    __Vtemp8[2U] = (IData)((- (QData)((IData)((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                             >> 0x3fU)))))));
    __Vtemp8[3U] = (IData)(((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                           >> 0x3fU)))))) 
                            >> 0x20U));
    __Vtemp9[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    __Vtemp9[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                            >> 0x20U));
    __Vtemp9[2U] = (IData)((- (QData)((IData)((1U & 
                                               ((~ 
                                                 (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                  >> 0xdU)) 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                           >> 0x3fU))))))));
    __Vtemp9[3U] = (IData)(((- (QData)((IData)((1U 
                                                & ((~ 
                                                    (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                     >> 0xdU)) 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                              >> 0x3fU))))))) 
                            >> 0x20U));
    VL_MUL_W(4, __Vtemp10, __Vtemp8, __Vtemp9);
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[0U] 
        = __Vtemp10[0U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[1U] 
        = __Vtemp10[1U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[2U] 
        = __Vtemp10[2U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[3U] 
        = __Vtemp10[3U];
    __Vtemp12[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    __Vtemp12[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                             >> 0x20U));
    __Vtemp12[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                   >> 0x3fU)));
    __Vtemp13[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    __Vtemp13[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                             >> 0x20U));
    __Vtemp13[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                   >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp14, __Vtemp12, __Vtemp13);
    VL_EXTEND_WQ(127,64, __Vtemp17, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp18, __Vtemp17, 
                  (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_4 
        = ((((((((((((0x8000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? (((QData)((IData)(__Vtemp14[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp14[0U])))
                      : 0ULL) | ((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                  ? (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U])))
                                  : 0ULL)) | ((2U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                               ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U])))
                                               : 0ULL)) 
                  | ((4U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                         & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                      : 0ULL)) | ((8U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                   ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                      | vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                                   : 0ULL)) | ((0x10U 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                                ? (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                   ^ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                                                : 0ULL)) 
               | ((0x20U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                   ? (((QData)((IData)(__Vtemp18[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp18[0U])))
                   : 0ULL)) | ((0x40U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                ? VL_SHIFTR_QQQ(64,64,64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))))
                                : 0ULL)) | ((0x80U 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                             ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))))
                                             : 0ULL)) 
            | (QData)((IData)((((0x100U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                 ? ((0x1fU >= (0x1fU 
                                               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))
                                     ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1) 
                                        >> (0x1fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))
                                     : 0U) : 0U) | 
                               ((0x200U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                 ? ((0x1fU >= (0x1fU 
                                               & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))
                                     ? VL_SHIFTRS_III(32,32,32, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))
                                     : (- ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1) 
                                           >> 0x1fU)))
                                 : 0U))))) | ((0x400U 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                               ? (((QData)((IData)(
                                                                   SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[0U])))
                                               : 0ULL));
    VL_EXTEND_WQ(128,64, __Vtemp20, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_EXTEND_WQ(128,64, __Vtemp21, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    VL_MUL_W(4, __Vtemp22, __Vtemp20, __Vtemp21);
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_5 
        = ((((((((((((0x800U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? (((QData)((IData)(SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[2U])))
                      : 0ULL) | ((0x1000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                  ? (((QData)((IData)(
                                                      __Vtemp22[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp22[2U])))
                                  : 0ULL)) | ((0x2000U 
                                               & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                               ? (((QData)((IData)(
                                                                   SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[0U])))
                                               : 0ULL)) 
                  | ((0x4000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? ((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1)) 
                         * (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)))
                      : 0ULL)) | ((0x10000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                   ? VL_DIV_QQQ(64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                                   : 0ULL)) | ((0x20000U 
                                                & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res)))
                                                : 0ULL)) 
               | ((0x40000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                   ? (((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res 
                                                   >> 0x1fU))))) 
                       << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res)))
                   : 0ULL)) | ((0x80000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                ? VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                                : 0ULL)) | ((0x100000U 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                             ? VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)
                                             : 0ULL)) 
            | ((0x200000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                ? (((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res)))
                : 0ULL)) | ((0x400000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                             ? (((QData)((IData)((- (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res)))
                             : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res 
        = (SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_4 
           | SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_5);
    SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_4 
        = (((((((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                          & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                         & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                        & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11)))))
            ? (- (IData)((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res 
                                        >> 0x1fU)))))
            : (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res 
                       >> 0x20U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2 
        = (1U & (((1U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                   ? (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                >> 0x3fU)) ^ (~ (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                         >> 0x3fU)))) 
                      & ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                  >> 0x3fU)) ^ (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                >> 0x1fU)))
                   : (((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                >> 0x3fU)) ^ (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                      >> 0x3fU))) 
                      & ((IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                  >> 0x3fU)) ^ (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
                                                >> 0x1fU)))) 
                 ^ (SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_4 
                    >> 0x1fU)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res 
        = (((QData)((IData)(SimTop__DOT__my_core_top__DOT__my_ex__DOT___alu_res_T_4)) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
            : (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
               + vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en 
        = (1U & ((((((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                         >> 1U) & (0ULL == vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res)) 
                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                           >> 2U) & (0U != vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res))) 
                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2))) 
                     | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                         >> 4U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)))) 
                    | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                        >> 5U) & (~ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))) 
                   | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                       >> 6U) & vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U])) 
                  | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                     >> 7U)) | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type) 
                                >> 8U)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal)
            ? (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)
            : (((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel))
                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res
                 : 0ULL) | (QData)((IData)((1U & ((
                                                   ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2)) 
                                                  | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel) 
                                                      >> 2U) 
                                                     & (~ 
                                                        vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U]))))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target
            : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en)
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target
                : (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)));
    vlSelf->io_core_data_mem_out_addr = (0xfffffffffffffff8ULL 
                                         & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10 
        = (0xffU & (((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                        ? ((7U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                            ? 0x80U : ((6U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                        ? 0x40U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                     ? 0x10U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                       ? 4U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                        ? 2U
                                                        : 1U)))))))
                        : 0U) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                  ? ((3U == (3U & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                           >> 1U))))
                                      ? 0xc0U : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                              >> 1U))))
                                                  ? 0x30U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 3U)))
                                  : 0U)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                                                            >> 2U)))
                                                 ? 0xf0U
                                                 : 0xfU)
                                             : 0U)) 
                    | (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type) 
                                        >> 6U))))));
    vlSelf->io_core_debug_debug_nextpc = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc;
    vlSelf->io_core_inst_mem_out_addr = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata = 1ULL;
    } else {
        VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read_TOP(1U, 0U, vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc, vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read__0__rdata);
        vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata 
            = vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read__0__rdata;
    }
    vlSelf->io_core_data_mem_out_wmask = vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read_TOP(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr), 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result), vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_read__3__rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
        = vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_read__3__rdata;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_write_TOP(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr), 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result), vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b 
        = (0xffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
                            >> (0x38U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result) 
                                         << 3U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h 
        = (0xffffU & ((6U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                       ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
                                  >> 0x30U)) : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                 ? (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
                                                            >> 0x20U))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
                                                             >> 0x10U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                   ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata)
                                                   : 0U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w 
        = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                          >> 2U))) ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata 
                                              >> 0x20U))
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result 
        = ((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
                     & (0x17U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                    & (0x6fU != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
                   & (0x67U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))) 
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
               | (0x183U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN))))
            ? ((((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                      ? (((- (QData)((IData)((1U & 
                                              ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b) 
                                               >> 7U))))) 
                          << 8U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b)))
                      : 0ULL) | ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                  ? (((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h) 
                                                             >> 0xfU))))) 
                                      << 0x10U) | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h)))
                                  : 0ULL)) | ((4U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w)))
                                               : 0ULL)) 
                  | ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                      ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b))
                      : 0ULL)) | ((0x10U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                   ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h))
                                   : 0ULL)) | ((0x20U 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                                                ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata))
                                                : 0ULL)) 
               | ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata
                   : 0ULL)) : vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op))
            ? ((0x342U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                           >> 0x14U)) ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mcause
                : ((0x341U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                               >> 0x14U)) ? (0xfffffffffffffffcULL 
                                             & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc)
                    : ((0x305U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                   >> 0x14U)) ? (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec)
                        : ((0x300U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                       >> 0x14U)) ? vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_rval
                            : 0ULL)))) : vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result);
    vlSelf->io_core_debug_debug_rf_wdata = vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata;
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
    VSimTop___024root___settle__TOP__2(vlSelf);
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
    vlSelf->io_core_inst_mem_in_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_inst_mem_in_rvalid = VL_RAND_RESET_Q(64);
    vlSelf->io_core_inst_mem_in_wvalid = VL_RAND_RESET_Q(64);
    vlSelf->io_core_data_mem_in_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_data_mem_in_rvalid = VL_RAND_RESET_Q(64);
    vlSelf->io_core_data_mem_in_wvalid = VL_RAND_RESET_Q(64);
    vlSelf->io_core_inst_mem_out_en = VL_RAND_RESET_I(1);
    vlSelf->io_core_inst_mem_out_wr = VL_RAND_RESET_I(1);
    vlSelf->io_core_inst_mem_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_core_inst_mem_out_rready = VL_RAND_RESET_I(1);
    vlSelf->io_core_inst_mem_out_wready = VL_RAND_RESET_I(1);
    vlSelf->io_core_inst_mem_out_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_inst_mem_out_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_core_data_mem_out_en = VL_RAND_RESET_I(1);
    vlSelf->io_core_data_mem_out_wr = VL_RAND_RESET_I(1);
    vlSelf->io_core_data_mem_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_core_data_mem_out_rready = VL_RAND_RESET_I(1);
    vlSelf->io_core_data_mem_out_wready = VL_RAND_RESET_I(1);
    vlSelf->io_core_data_mem_out_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_data_mem_out_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_core_debug_debug_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_debug_nextpc = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_debug_rf_we = VL_RAND_RESET_I(1);
    vlSelf->io_core_debug_debug_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->io_core_debug_debug_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type = VL_RAND_RESET_I(9);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_gr_we = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type = VL_RAND_RESET_I(7);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___my_imem_port_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_rf_io_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type = VL_RAND_RESET_I(7);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1 = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1 = VL_RAND_RESET_I(17);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_11 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT___my_alu_io_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__s1_lt_s2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__pc_seq = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divw_res = VL_RAND_RESET_Q(33);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__divuw_res = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remw_res = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT__remuw_res = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___my_dmem_port_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h = VL_RAND_RESET_I(16);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___wmask_T_10 = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__tmprdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_sxl = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_uxl = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mstatus_rval = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mtvec_rval = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__mepc_rval = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__unnamedblk1__DOT___csr_src_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__my_csr__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_if__DOT__my_imem_port__DOT__cpu_dmem_read__0__rdata = 0;
    vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_mem__DOT__my_dmem_port__DOT__cpu_dmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

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

void VSimTop___024root___initial__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__2\n"); );
    // Body
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file);
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__set_inst_ptr__Vdpioc2_TOP((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)));
}

void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP(CData/*0:0*/ en, CData/*0:0*/ wr, QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void VSimTop___024root___settle__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__3\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_4;
    QData/*63:0*/ SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_5;
    // Body
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t 
        = (((vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp) 
            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie)) 
           & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie 
                      >> 7U)));
    vlSelf->io_core_debug_debug_pc = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc;
    vlSelf->io_core_debug_debug_rf_wnum = (0x1fU & 
                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                            >> 7U));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__pc_seq 
        = (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_b_valid_T_1 
        = (1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                 >> 2U));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dsram_io_sram_wt_en 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                  >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__b_wait_ready))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN 
        = ((0x344U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                       >> 0x14U)) ? 0x20U : ((0x304U 
                                              == (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                  >> 0x14U))
                                              ? 0x10U
                                              : ((0x342U 
                                                  == 
                                                  (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                   >> 0x14U))
                                                  ? 8U
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                    >> 0x14U))
                                                   ? 4U
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                     >> 0x14U))
                                                    ? 2U
                                                    : 
                                                   (0x300U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst 
                                                     >> 0x14U)))))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_3 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
                  >> 3U) & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate) 
                            >> 2U)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs)
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r
            : vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rdata_r);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_rd_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__resp_data_ok) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
              >> 1U));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2 
        = (1U & (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
                  >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_rd_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__resp_data_ok) 
           & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate) 
              >> 1U));
    vlSelf->io_core_debug_raise_intr = vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_wmem_port__DOT__cpu_dmem_write_TOP(vlSelf->SimTop__DOT__my_core_top__DOT___my_dsram_io_sram_wt_en, 1U, vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__waddr_r, vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wdata_r, (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wmask_r));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_1 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
            >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_rd_valid_T_1));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2mem_fs_mem_ok_T 
        = (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state) 
            >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_rd_valid_T_1));
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
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target 
        = ((1U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t)))
            ? (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec)
            : ((2U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))
                ? ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause 
                                  >> 0x3fU))) ? (0xfffffffffffffffcULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)
                    : (4ULL + (0xfffffffffffffffcULL 
                               & vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc)))
                : 0ULL));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type)) 
           | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en 
        = (((((((((((((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
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
                | (0x1a3U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN)))) 
            & (~ ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t) 
                  | (0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type))))) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_sram_rd_en_T_3 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___T) 
           | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate) 
               >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rd_wait_sel)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__wt_req 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en)) 
                  | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_1)) 
                 | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_3)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rd_req 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en) 
           & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr)));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_aw_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__wt_req));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___T_3 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rd_req));
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok 
        = (((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2mem_fs_mem_ok_T) 
              & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms))) 
             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs)) 
            | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___T_3) 
               & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs)))) 
           | ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2mem_fs_mem_ok_T) 
              & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok)));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___T 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
        = (((0x37U != (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
            & ((0x17U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
               | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we 
        = (((((((0x37U == (0x7fU & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst)) 
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
                                           | (0x93U 
                                              == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                          | (0x293U 
                                             == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
                                         | (0x4293U 
                                            == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_0))) 
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
                                          | (0x6b3U 
                                             == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
                                         | (0x63bU 
                                            == vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_decoder__DOT___GEN_1)) 
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
                            | (0x30200073U == vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst))))))) 
            & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap))) 
           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_sram_rd_en_T_3 
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___T) 
           | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate) 
               >> 1U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rd_wait_sel)));
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
    VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_EXTEND_WQ(65,64, __Vtemp28, ((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                           >> 1U))))) 
                                    ^ vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2));
    VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
    VL_EXTEND_WI(65,1, __Vtemp30, (1U & (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                         >> 1U)));
    VL_ADD_W(3, __Vtemp31, __Vtemp29, __Vtemp30);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[0U] 
        = __Vtemp31[0U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[1U] 
        = __Vtemp31[1U];
    vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN[2U] 
        = (1U & __Vtemp31[2U]);
    __Vtemp33[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    __Vtemp33[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                             >> 0x20U));
    __Vtemp33[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                           >> 0x3fU)))))));
    __Vtemp33[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    __Vtemp34[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    __Vtemp34[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                             >> 0x20U));
    __Vtemp34[2U] = (IData)((- (QData)((IData)((1U 
                                                & ((~ 
                                                    (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                     >> 0xdU)) 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                              >> 0x3fU))))))));
    __Vtemp34[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op 
                                                      >> 0xdU)) 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                                               >> 0x3fU))))))) 
                             >> 0x20U));
    VL_MUL_W(4, __Vtemp35, __Vtemp33, __Vtemp34);
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[0U] 
        = __Vtemp35[0U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[1U] 
        = __Vtemp35[1U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[2U] 
        = __Vtemp35[2U];
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[3U] 
        = __Vtemp35[3U];
    vlSelf->io_core_debug_debug_rf_we = vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we;
    __Vtemp37[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    __Vtemp37[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                             >> 0x20U));
    __Vtemp37[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1 
                                   >> 0x3fU)));
    __Vtemp38[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    __Vtemp38[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                             >> 0x20U));
    __Vtemp38[2U] = (1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2 
                                   >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp39, __Vtemp37, __Vtemp38);
    VL_EXTEND_WQ(127,64, __Vtemp42, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp43, __Vtemp42, 
                  (0x3fU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2)));
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_4 
        = ((((((((((((0x8000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? (((QData)((IData)(__Vtemp39[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp39[0U])))
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
                   ? (((QData)((IData)(__Vtemp43[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp43[0U])))
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
    VL_EXTEND_WQ(128,64, __Vtemp45, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src1);
    VL_EXTEND_WQ(128,64, __Vtemp46, vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT____Vcellinp__my_alu__io_src2);
    VL_MUL_W(4, __Vtemp47, __Vtemp45, __Vtemp46);
    SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_5 
        = ((((((((((((0x800U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                      ? (((QData)((IData)(SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      SimTop__DOT__my_core_top__DOT__my_ex__DOT__my_alu__DOT___GEN_2[2U])))
                      : 0ULL) | ((0x1000U & vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op)
                                  ? (((QData)((IData)(
                                                      __Vtemp47[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp47[2U])))
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
        = ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap)
            ? vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target
            : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en)
                ? vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target
                : (4ULL + vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc)));
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wt_bits_wstrb 
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b 
        = (0xffU & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
                            >> (0x38U & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result) 
                                         << 3U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h 
        = (0xffffU & ((6U == (7U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                       ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
                                  >> 0x30U)) : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                 ? (IData)(
                                                           (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
                                                            >> 0x20U))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
                                                             >> 0x10U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)))
                                                   ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata)
                                                   : 0U)))));
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w 
        = ((1U & (IData)((vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result 
                          >> 2U))) ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata 
                                              >> 0x20U))
            : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata));
    vlSelf->io_core_debug_debug_nextpc = vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc;
    VSimTop___024root____Vdpiimwrap_SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__cpu_dmem_read_TOP(
                                                                                ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_sram_rd_en_T_3) 
                                                                                | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_sram_rd_en_T_3)), 0U, 
                                                                                ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_sram_rd_en_T_3)
                                                                                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc
                                                                                 : 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result)), vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_rmem_port_rdata 
        = vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata;
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
                                                ? (QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata))
                                                : 0ULL)) 
               | ((0x40U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type))
                   ? vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata
                   : 0ULL)) : vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata 
        = ((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op))
            ? vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16
            : vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result);
    vlSelf->io_core_debug_debug_rf_wdata = vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata;
}

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VSimTop___024root___initial__TOP__2(vlSelf);
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
    vlSelf->io_core_debug_debug_nextpc = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_debug_rf_we = VL_RAND_RESET_I(1);
    vlSelf->io_core_debug_debug_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->io_core_debug_debug_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_core_debug_raise_intr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_rmem_port_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_dsram_io_sram_wt_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_rf_we = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_wb2rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_wb_io_exc_br_exc_target = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_mem2wb_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_data_mem_wt_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_mem_io_if2mem_ms_mem_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_ex2mem_result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_target = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_ex_io_branch_br_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_alu_op = VL_RAND_RESET_I(23);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_br_type = VL_RAND_RESET_I(9);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_mem_type = VL_RAND_RESET_I(7);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_ex_sel = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_csr_op = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_exc_type = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT___my_id_io_id2ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_ms = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2mem_fs_mem_ok_T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_ar_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_next_ok = VL_RAND_RESET_I(1);
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
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_wait_fs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_mem_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_state = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rd_req = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__wt_req = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_if2mem_ms_mem_ok_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_ar_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__ms_rdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT___io_data_mem_aw_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__mrdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_b = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_h = VL_RAND_RESET_I(16);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_mem__DOT__rdata_w = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_wb__DOT__has_trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_sxl = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_uxl = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__has_intr_t = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___GEN = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT___csr_src_T_16 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___csr_res_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_csr__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rd_wait_sel = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__rdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_sram_rd_en_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__resp_data_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT___io_rd_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__wmask_r = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__b_wait_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_isram__DOT__unnamedblk1__DOT__rdata_arrive = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wstate = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rd_wait_sel = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__rdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_sram_rd_en_T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__resp_data_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_rd_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__wmask_r = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__b_wait_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT___io_b_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_dsram__DOT__unnamedblk1__DOT__rdata_arrive = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__tmprdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_SimTop__DOT__my_core_top__DOT__my_rmem_port__DOT__cpu_dmem_read__2__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

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
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp38;
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
            tracep->chgBit(oldp+37,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage1__DOT___io_cpu_ready_T));
            tracep->chgQData(oldp+38,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_rdata),64);
            tracep->chgBit(oldp+40,(vlSelf->SimTop__DOT__my_core_top__DOT___my_icache_io_in_ret_valid));
            tracep->chgBit(oldp+41,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___io_if2id_ready_T_2));
            tracep->chgBit(oldp+42,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_valid_T_6));
            tracep->chgQData(oldp+43,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2),64);
            tracep->chgBit(oldp+45,((IData)((0x80000000ULL 
                                             != (0xe0000000ULL 
                                                 & vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2)))));
            tracep->chgBit(oldp+46,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_if2id_valid_T));
            tracep->chgIData(oldp+47,(((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data))),32);
            tracep->chgQData(oldp+48,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__pc),64);
            tracep->chgBit(oldp+50,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_wait_r));
            tracep->chgCData(oldp+51,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_state),6);
            tracep->chgQData(oldp+52,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__rdata_buf),64);
            tracep->chgBit(oldp+54,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_mem_ok));
            tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT__fs_inst_data),64);
            tracep->chgBit(oldp+57,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid)))));
            tracep->chgBit(oldp+58,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__ds_valid));
            tracep->chgIData(oldp+59,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst),32);
            tracep->chgBit(oldp+60,(((IData)((0x73U 
                                              == (0xfffffU 
                                                  & vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))) 
                                     & (1U == (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                               >> 0x14U)))));
            tracep->chgQData(oldp+61,((QData)((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst))),64);
            tracep->chgCData(oldp+63,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT___my_decoder_io_inst_type),7);
            tracep->chgCData(oldp+64,(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1),5);
            tracep->chgCData(oldp+65,((0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+66,(((0U == (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1))
                                        ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                       [vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT____Vcellinp__my_rf__io_raddr1])),64);
            tracep->chgQData(oldp+68,(((0U == (0x1fU 
                                               & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__my_rf__DOT__my_gpr__DOT__reg_file
                                       [(0x1fU & (vlSelf->SimTop__DOT__my_core_top__DOT__my_id__DOT__fs_ds_r_inst 
                                                  >> 0x14U))])),64);
            tracep->chgBit(oldp+70,(vlSelf->SimTop__DOT__my_core_top__DOT__my_ex__DOT__es_valid));
            tracep->chgBit(oldp+71,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+72,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__wb_en));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough) {
                __Vtemp35[0U] = 0U;
                __Vtemp35[1U] = 0U;
                __Vtemp35[2U] = 0U;
                __Vtemp35[3U] = 0U;
            } else {
                __Vtemp35[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0);
                __Vtemp35[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0 
                                         >> 0x20U));
                __Vtemp35[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1);
                __Vtemp35[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1 
                                         >> 0x20U));
            }
            tracep->chgWData(oldp+73,(__Vtemp35),128);
            tracep->chgCData(oldp+77,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)
                                        ? 0U : 0xffU)),8);
            tracep->chgBit(oldp+78,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+79,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_req_ready_T_1)) 
                                     | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt))));
            tracep->chgQData(oldp+80,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge0_io_in_ret_rdata),64);
            tracep->chgBit(oldp+82,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+83,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+84,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state),4);
            tracep->chgBit(oldp+85,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_widx));
            tracep->chgBit(oldp+86,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+87,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wdata_r),128);
            tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wtag_r),60);
            tracep->chgBit(oldp+93,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wt_widx));
            tracep->chgBit(oldp+94,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_cnt));
            tracep->chgCData(oldp+95,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__burst_len),8);
            tracep->chgBit(oldp+96,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__rd_after_wt));
            tracep->chgBit(oldp+97,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_axi_out_req_valid));
            tracep->chgBit(oldp+98,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__wb_en));
            if (vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough) {
                __Vtemp38[0U] = 0U;
                __Vtemp38[1U] = 0U;
                __Vtemp38[2U] = 0U;
                __Vtemp38[3U] = 0U;
            } else {
                __Vtemp38[0U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0);
                __Vtemp38[1U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0 
                                         >> 0x20U));
                __Vtemp38[2U] = (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1);
                __Vtemp38[3U] = (IData)((vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1 
                                         >> 0x20U));
            }
            tracep->chgWData(oldp+99,(__Vtemp38),128);
            tracep->chgCData(oldp+103,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough)
                                         ? 0U : 0xffU)),8);
            tracep->chgBit(oldp+104,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough));
            tracep->chgBit(oldp+105,((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                       | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt))));
            tracep->chgQData(oldp+106,(vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata),64);
            tracep->chgBit(oldp+108,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_ret_valid_T_3));
            tracep->chgBit(oldp+109,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T));
            tracep->chgCData(oldp+110,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state),4);
            tracep->chgBit(oldp+111,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_widx));
            tracep->chgBit(oldp+112,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt_r));
            tracep->chgWData(oldp+113,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wdata_r),128);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wtag_r),60);
            tracep->chgBit(oldp+119,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wt_widx));
            tracep->chgBit(oldp+120,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_cnt));
            tracep->chgCData(oldp+121,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__burst_len),8);
            tracep->chgBit(oldp+122,(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt));
            tracep->chgBit(oldp+123,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5));
            tracep->chgBit(oldp+124,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T));
            tracep->chgBit(oldp+125,(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid));
            tracep->chgBit(oldp+126,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T) 
                                          | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_req_ready_T_1)) 
                                         | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__rd_after_wt)))));
            tracep->chgBit(oldp+127,(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid));
            tracep->chgBit(oldp+128,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT__ret_valid) 
                                      | (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_in_rlast_T))));
            tracep->chgBit(oldp+129,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_mem_out_req_valid_T_5) 
                                      & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_clint__DOT___io_in_clint_hit_T))));
            tracep->chgCData(oldp+130,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),6);
            tracep->chgBit(oldp+131,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgCData(oldp+132,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                         >> 4U)))),5);
            tracep->chgIData(oldp+133,((0x7fffffU & (IData)(
                                                            (vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+134,((0xfU & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_if__DOT___io_inst_mem_req_bits_addr_T_2))),4);
            tracep->chgBit(oldp+135,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
            tracep->chgBit(oldp+136,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
            tracep->chgIData(oldp+137,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+142,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
            tracep->chgBit(oldp+143,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
            tracep->chgIData(oldp+144,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+147,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+149,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
            tracep->chgBit(oldp+150,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
            tracep->chgIData(oldp+151,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
            tracep->chgQData(oldp+152,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+154,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+156,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
            tracep->chgBit(oldp+157,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
            tracep->chgIData(oldp+158,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
            tracep->chgQData(oldp+159,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+163,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+164,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+165,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+166,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+167,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgBit(oldp+168,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array))));
            tracep->chgCData(oldp+169,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H)))))),2);
            tracep->chgBit(oldp+170,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
            tracep->chgBit(oldp+171,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
            tracep->chgIData(oldp+172,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgQData(oldp+173,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgQData(oldp+175,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgCData(oldp+177,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__hit_array),4);
            tracep->chgCData(oldp+178,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__replace1H),4);
            tracep->chgCData(oldp+179,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage2__DOT__target_way1H),4);
            tracep->chgBit(oldp+180,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+181,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+182,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_index),5);
            tracep->chgIData(oldp+183,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgQData(oldp+184,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_0_T_3),64);
            tracep->chgQData(oldp+186,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT___write_line_data_1_T_3),64);
            tracep->chgBit(oldp+188,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+189,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__s3_valid));
            tracep->chgCData(oldp+190,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+191,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+192,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+193,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+194,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+195,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+197,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+199,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+200,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__cnt));
            tracep->chgBit(oldp+201,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+202,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__refill_come));
            tracep->chgBit(oldp+203,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN));
            tracep->chgBit(oldp+204,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21)))));
            tracep->chgWData(oldp+205,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_27),128);
            tracep->chgWData(oldp+209,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV__DOT__rdata),128);
            tracep->chgBit(oldp+213,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___T_21));
            tracep->chgBit(oldp+214,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV__WEN)))));
            tracep->chgBit(oldp+215,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN));
            tracep->chgWData(oldp+216,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_1__DOT__rdata),128);
            tracep->chgBit(oldp+220,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
            tracep->chgBit(oldp+221,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN));
            tracep->chgWData(oldp+222,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_2__DOT__rdata),128);
            tracep->chgBit(oldp+226,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
            tracep->chgBit(oldp+227,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN));
            tracep->chgWData(oldp+228,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRamV_3__DOT__rdata),128);
            tracep->chgBit(oldp+232,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
            tracep->chgCData(oldp+233,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT___GEN),5);
            tracep->chgBit(oldp+234,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
            tracep->chgQData(oldp+235,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
            tracep->chgQData(oldp+237,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
            tracep->chgBit(oldp+239,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
            tracep->chgQData(oldp+240,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
            tracep->chgQData(oldp+242,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
            tracep->chgBit(oldp+244,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
            tracep->chgQData(oldp+245,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
            tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
            tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
            tracep->chgQData(oldp+250,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
            tracep->chgQData(oldp+252,(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
            tracep->chgQData(oldp+254,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit)
                                         ? ((8U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1
                                             : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0)
                                         : ((0x10U 
                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                             ? vlSelf->SimTop__DOT__my_core_top__DOT___my_axi_bridge1_io_in_ret_rdata
                                             : ((8U 
                                                 & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset))
                                                 ? vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3
                                                 : vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3)))),64);
            tracep->chgBit(oldp+256,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid) 
                                      & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state))
                                             ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT___my_mmc_io_in_ret_valid)
                                             : ((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset) 
                                                  >> 3U) 
                                                 ^ 
                                                 (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt))) 
                                                & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come)))))));
            tracep->chgCData(oldp+257,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),6);
            tracep->chgBit(oldp+258,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___io_s2_to_s3_ready_T_1));
            tracep->chgBit(oldp+259,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid));
            tracep->chgBit(oldp+260,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty));
            tracep->chgIData(oldp+261,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rtag),23);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+264,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid));
            tracep->chgBit(oldp+267,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty));
            tracep->chgIData(oldp+268,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rtag),23);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+271,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+273,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid));
            tracep->chgBit(oldp+274,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty));
            tracep->chgIData(oldp+275,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rtag),23);
            tracep->chgQData(oldp+276,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+278,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+280,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid));
            tracep->chgBit(oldp+281,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty));
            tracep->chgIData(oldp+282,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rtag),23);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[0U])))),64);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata[2U])))),64);
            tracep->chgBit(oldp+287,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__s2_valid));
            tracep->chgBit(oldp+288,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_mthrough));
            tracep->chgIData(oldp+289,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_tag),23);
            tracep->chgCData(oldp+290,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_index),5);
            tracep->chgCData(oldp+291,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__buf_offset),4);
            tracep->chgBit(oldp+292,((0U != (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array))));
            tracep->chgCData(oldp+293,((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                                      >> 2U)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0xaU 
                                                            & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H)))))),2);
            tracep->chgBit(oldp+294,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rvalid)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rvalid))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rvalid))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rvalid)))));
            tracep->chgBit(oldp+295,((((((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                         & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__rdirty)) 
                                        | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                            >> 1U) 
                                           & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__rdirty))) 
                                       | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                           >> 2U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__rdirty))) 
                                      | (((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H) 
                                          >> 3U) & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__rdirty)))));
            tracep->chgIData(oldp+296,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgQData(oldp+297,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgQData(oldp+299,((((((1U & (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H))
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
            tracep->chgCData(oldp+301,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__hit_array),4);
            tracep->chgCData(oldp+302,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__replace1H),4);
            tracep->chgCData(oldp+303,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage2__DOT__target_way1H),4);
            tracep->chgBit(oldp+304,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en));
            tracep->chgCData(oldp+305,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_way),2);
            tracep->chgCData(oldp+306,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_index),5);
            tracep->chgIData(oldp+307,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_tag),23);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_0_T_3),64);
            tracep->chgQData(oldp+310,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT___write_line_data_1_T_3),64);
            tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__hit));
            tracep->chgBit(oldp+313,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__s3_valid));
            tracep->chgCData(oldp+314,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_offset),4);
            tracep->chgBit(oldp+315,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_hit));
            tracep->chgBit(oldp+316,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_valid));
            tracep->chgBit(oldp+317,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_dirty));
            tracep->chgIData(oldp+318,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_tag),23);
            tracep->chgQData(oldp+319,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_0),64);
            tracep->chgQData(oldp+321,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_target_line_data_1),64);
            tracep->chgCData(oldp+323,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__state),6);
            tracep->chgBit(oldp+324,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__cnt));
            tracep->chgBit(oldp+325,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__burst_last));
            tracep->chgBit(oldp+326,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__refill_come));
            tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN));
            tracep->chgBit(oldp+328,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___stage3_io_wt_en)))));
            tracep->chgWData(oldp+329,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___T_27),128);
            tracep->chgWData(oldp+333,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV__DOT__rdata),128);
            tracep->chgBit(oldp+337,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV__WEN)))));
            tracep->chgBit(oldp+338,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN));
            tracep->chgWData(oldp+339,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_1__DOT__rdata),128);
            tracep->chgBit(oldp+343,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_1__WEN)))));
            tracep->chgBit(oldp+344,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN));
            tracep->chgWData(oldp+345,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_2__DOT__rdata),128);
            tracep->chgBit(oldp+349,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_2__WEN)))));
            tracep->chgBit(oldp+350,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN));
            tracep->chgWData(oldp+351,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRamV_3__DOT__rdata),128);
            tracep->chgBit(oldp+355,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT____Vcellinp__CacheDataRamV_3__WEN)))));
            tracep->chgCData(oldp+356,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT___GEN),5);
            tracep->chgBit(oldp+357,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV__en));
            tracep->chgQData(oldp+358,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_valid),64);
            tracep->chgQData(oldp+360,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV__DOT__ram_dirty),64);
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_1__en));
            tracep->chgQData(oldp+363,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_valid),64);
            tracep->chgQData(oldp+365,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_1__DOT__ram_dirty),64);
            tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_2__en));
            tracep->chgQData(oldp+368,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_valid),64);
            tracep->chgQData(oldp+370,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_2__DOT__ram_dirty),64);
            tracep->chgBit(oldp+372,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT____Vcellinp__CacheMetaRamV_3__en));
            tracep->chgQData(oldp+373,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_valid),64);
            tracep->chgQData(oldp+375,(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__cache_meta__DOT__CacheMetaRamV_3__DOT__ram_dirty),64);
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rdata_ok));
            tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_wt_ready_T_1));
            tracep->chgBit(oldp+379,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                            >> 2U))));
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_rd_io_out_valid));
            tracep->chgQData(oldp+381,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr),64);
            tracep->chgCData(oldp+383,(((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)
                                         ? (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_icache__DOT__stage3__DOT__buf_mthrough)))
                                         : (1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_dcache__DOT__stage3__DOT__buf_mthrough))))),8);
            tracep->chgBit(oldp+384,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 1U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 1U)))));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT___arbiter_wt_io_out_valid));
            tracep->chgQData(oldp+386,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_aw_bits_awaddr),64);
            tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid));
            tracep->chgQData(oldp+389,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
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
            tracep->chgCData(oldp+391,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                         ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__wstrb_r)
                                         : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__wstrb_r))),8);
            tracep->chgBit(oldp+392,(((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                       ? (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT___io_out_wt_bits_wlast_T_3)
                                       : (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_wt_bits_wlast_T_3))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen)
                                             ? ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge1__DOT__state) 
                                                >> 3U)
                                             : ((IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT__state) 
                                                >> 3U)))));
            tracep->chgBit(oldp+394,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__rd_chosen));
            tracep->chgBit(oldp+395,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_arbiter__DOT__wt_chosen));
            tracep->chgBit(oldp+396,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_ar_valid_T_5)))));
            tracep->chgBit(oldp+397,((1U & (~ (IData)(vlSelf->SimTop__DOT__my_core_top__DOT__my_axi_bridge0__DOT___io_out_aw_valid_T_3)))));
            tracep->chgQData(oldp+398,(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_rmem_port_rdata),64);
            tracep->chgBit(oldp+400,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r));
            tracep->chgBit(oldp+401,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r));
            tracep->chgBit(oldp+402,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT___io_sram_rd_en_T_8));
            tracep->chgQData(oldp+403,((((1U & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate))
                                          ? (vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_ar_bits_araddr 
                                             >> 3U)
                                          : ((0x1ffffffffffffffeULL 
                                              & (vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr 
                                                 >> 3U)) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx)))) 
                                        << 3U)),64);
            tracep->chgBit(oldp+405,((((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate) 
                                       >> 1U) & (IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT___my_arbiter_io_out_wt_valid))));
            tracep->chgQData(oldp+406,(((0xfffffffffffffff0ULL 
                                         & vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx) 
                                                           << 3U))))),64);
            tracep->chgCData(oldp+408,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rstate),3);
            tracep->chgCData(oldp+409,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wstate),3);
            tracep->chgQData(oldp+410,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_araddr),64);
            tracep->chgCData(oldp+412,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__ar_buf_arlen),8);
            tracep->chgCData(oldp+413,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_cnt),8);
            tracep->chgBit(oldp+414,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__rd_idx));
            tracep->chgQData(oldp+415,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__aw_buf_awaddr),64);
            tracep->chgBit(oldp+417,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__wt_widx));
            tracep->chgBit(oldp+418,(vlSelf->SimTop__DOT__my_axi_sram__DOT__my_axi_sram_driver__DOT__unnamedblk1__DOT__rdata_arrive));
            tracep->chgBit(oldp+419,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__delaying));
            tracep->chgBit(oldp+420,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r));
            tracep->chgBit(oldp+421,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_1));
            tracep->chgBit(oldp+422,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_2));
            tracep->chgBit(oldp+423,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__r_r_3));
            tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__my_axi_sram__DOT__rd_resp_en_rdelayer__DOT__unnamedblk1__DOT__din));
            tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__delaying));
            tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r));
            tracep->chgBit(oldp+427,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_1));
            tracep->chgBit(oldp+428,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_2));
            tracep->chgBit(oldp+429,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__r_r_3));
            tracep->chgBit(oldp+430,(vlSelf->SimTop__DOT__my_axi_sram__DOT__wt_resp_en_wdelayer__DOT__unnamedblk1__DOT__din));
        }
        tracep->chgBit(oldp+431,(vlSelf->clock));
        tracep->chgBit(oldp+432,(vlSelf->reset));
        tracep->chgQData(oldp+433,(vlSelf->io_core_debug_debug_pc),64);
        tracep->chgBit(oldp+435,(vlSelf->io_core_debug_debug_rf_we));
        tracep->chgCData(oldp+436,(vlSelf->io_core_debug_debug_rf_wnum),5);
        tracep->chgQData(oldp+437,(vlSelf->io_core_debug_debug_rf_wdata),64);
        tracep->chgBit(oldp+439,(vlSelf->io_core_debug_raise_intr));
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

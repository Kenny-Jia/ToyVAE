// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myproject_HH_
#define _myproject_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0.h"
#include "relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s.h"
#include "relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s.h"

namespace ap_rtl {

struct myproject : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > inputs_V_ap_vld;
    sc_in< sc_lv<1824> > inputs_V;
    sc_out< sc_lv<32> > layer8_out_0_V;
    sc_out< sc_logic > layer8_out_0_V_ap_vld;
    sc_out< sc_lv<32> > layer8_out_1_V;
    sc_out< sc_logic > layer8_out_1_V_ap_vld;
    sc_out< sc_lv<32> > layer8_out_2_V;
    sc_out< sc_logic > layer8_out_2_V_ap_vld;


    // Module declarations
    myproject(sc_module_name name);
    SC_HAS_PROCESS(myproject);

    ~myproject();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0* call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69;
    dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0* call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75;
    dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0* call_ret4_dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0_fu_111;
    relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s* call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131;
    relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s* call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > inputs_V_ap_vld_in_sig;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1824> > inputs_V_preg;
    sc_signal< sc_lv<1824> > inputs_V_in_sig;
    sc_signal< sc_logic > inputs_V_ap_vld_preg;
    sc_signal< sc_logic > inputs_V_blk_n;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > layer5_out_0_V_reg_666;
    sc_signal< sc_lv<32> > layer5_out_1_V_reg_671;
    sc_signal< sc_lv<32> > layer5_out_2_V_reg_676;
    sc_signal< sc_lv<32> > layer5_out_3_V_reg_681;
    sc_signal< sc_lv<32> > layer5_out_4_V_reg_686;
    sc_signal< sc_lv<32> > layer5_out_5_V_reg_691;
    sc_signal< sc_lv<32> > layer5_out_6_V_reg_696;
    sc_signal< sc_lv<32> > layer5_out_7_V_reg_701;
    sc_signal< sc_lv<32> > layer5_out_8_V_reg_706;
    sc_signal< sc_lv<32> > layer5_out_9_V_reg_711;
    sc_signal< sc_lv<32> > layer5_out_10_V_reg_716;
    sc_signal< sc_lv<32> > layer5_out_11_V_reg_721;
    sc_signal< sc_lv<32> > layer5_out_12_V_reg_726;
    sc_signal< sc_lv<32> > layer5_out_13_V_reg_731;
    sc_signal< sc_lv<32> > layer5_out_14_V_reg_736;
    sc_signal< sc_lv<32> > layer5_out_15_V_reg_741;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_ready;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_0;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_1;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_2;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_3;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_4;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_5;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_6;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_7;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_8;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_9;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_10;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_11;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_12;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_13;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_14;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_15;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_16;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_17;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_18;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_19;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_20;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_21;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_22;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_23;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_24;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_25;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_26;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_27;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_28;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_29;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_30;
    sc_signal< sc_lv<32> > call_ret_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_69_ap_return_31;
    sc_signal< sc_logic > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_ready;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_0;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_1;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_2;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_3;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_4;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_5;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_6;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_7;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_8;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_9;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_10;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_11;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_12;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_13;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_14;
    sc_signal< sc_lv<32> > call_ret2_dense_latency_ap_fixed_ap_fixed_config5_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_75_ap_return_15;
    sc_signal< sc_logic > call_ret4_dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0_fu_111_ap_ready;
    sc_signal< sc_lv<32> > call_ret4_dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0_fu_111_ap_return_0;
    sc_signal< sc_lv<32> > call_ret4_dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0_fu_111_ap_return_1;
    sc_signal< sc_lv<32> > call_ret4_dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0_fu_111_ap_return_2;
    sc_signal< sc_logic > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_ready;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_0;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_1;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_2;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_3;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_4;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_5;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_6;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_7;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_8;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_9;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_10;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_11;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_12;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_13;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_14;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_15;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_16;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_17;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_18;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_19;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_20;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_21;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_22;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_23;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_24;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_25;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_26;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_27;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_28;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_29;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_30;
    sc_signal< sc_lv<32> > call_ret1_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config4_s_fu_131_ap_return_31;
    sc_signal< sc_logic > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_ready;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_0;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_1;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_2;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_3;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_4;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_5;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_6;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_7;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_8;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_9;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_10;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_11;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_12;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_13;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_14;
    sc_signal< sc_lv<32> > call_ret3_relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_ReLU_config7_s_fu_167_ap_return_15;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1824> ap_const_lv1824_lc_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_inputs_V_ap_vld_in_sig();
    void thread_inputs_V_blk_n();
    void thread_inputs_V_in_sig();
    void thread_layer8_out_0_V();
    void thread_layer8_out_0_V_ap_vld();
    void thread_layer8_out_1_V();
    void thread_layer8_out_1_V_ap_vld();
    void thread_layer8_out_2_V();
    void thread_layer8_out_2_V_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
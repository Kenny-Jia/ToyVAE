// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s_HH_
#define _relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s : public sc_module {
    // Port declarations 39
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > data_0_V_read;
    sc_in< sc_lv<32> > data_1_V_read;
    sc_in< sc_lv<32> > data_2_V_read;
    sc_in< sc_lv<32> > data_3_V_read;
    sc_in< sc_lv<32> > data_4_V_read;
    sc_in< sc_lv<32> > data_5_V_read;
    sc_in< sc_lv<32> > data_6_V_read;
    sc_in< sc_lv<32> > data_7_V_read;
    sc_in< sc_lv<32> > data_8_V_read;
    sc_in< sc_lv<32> > data_9_V_read;
    sc_in< sc_lv<32> > data_10_V_read;
    sc_in< sc_lv<32> > data_11_V_read;
    sc_in< sc_lv<32> > data_12_V_read;
    sc_in< sc_lv<32> > data_13_V_read;
    sc_in< sc_lv<32> > data_14_V_read;
    sc_in< sc_lv<32> > data_15_V_read;
    sc_out< sc_lv<31> > ap_return_0;
    sc_out< sc_lv<31> > ap_return_1;
    sc_out< sc_lv<31> > ap_return_2;
    sc_out< sc_lv<31> > ap_return_3;
    sc_out< sc_lv<31> > ap_return_4;
    sc_out< sc_lv<31> > ap_return_5;
    sc_out< sc_lv<31> > ap_return_6;
    sc_out< sc_lv<31> > ap_return_7;
    sc_out< sc_lv<31> > ap_return_8;
    sc_out< sc_lv<31> > ap_return_9;
    sc_out< sc_lv<31> > ap_return_10;
    sc_out< sc_lv<31> > ap_return_11;
    sc_out< sc_lv<31> > ap_return_12;
    sc_out< sc_lv<31> > ap_return_13;
    sc_out< sc_lv<31> > ap_return_14;
    sc_out< sc_lv<31> > ap_return_15;


    // Module declarations
    relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s(sc_module_name name);
    SC_HAS_PROCESS(relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s);

    ~relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_148_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_fu_144_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_166_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_1_fu_162_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_184_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_2_fu_180_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_202_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_3_fu_198_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_220_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_4_fu_216_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_238_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_5_fu_234_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_256_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_6_fu_252_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_274_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_7_fu_270_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_292_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_8_fu_288_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_310_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_9_fu_306_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_10_fu_328_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_10_fu_324_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_346_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_11_fu_342_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_364_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_12_fu_360_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_382_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_13_fu_378_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_400_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_14_fu_396_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_418_p2;
    sc_signal< sc_lv<31> > trunc_ln1494_15_fu_414_p1;
    sc_signal< sc_lv<31> > select_ln45_fu_154_p3;
    sc_signal< sc_lv<31> > select_ln45_1_fu_172_p3;
    sc_signal< sc_lv<31> > select_ln45_2_fu_190_p3;
    sc_signal< sc_lv<31> > select_ln45_3_fu_208_p3;
    sc_signal< sc_lv<31> > select_ln45_4_fu_226_p3;
    sc_signal< sc_lv<31> > select_ln45_5_fu_244_p3;
    sc_signal< sc_lv<31> > select_ln45_6_fu_262_p3;
    sc_signal< sc_lv<31> > select_ln45_7_fu_280_p3;
    sc_signal< sc_lv<31> > select_ln45_8_fu_298_p3;
    sc_signal< sc_lv<31> > select_ln45_9_fu_316_p3;
    sc_signal< sc_lv<31> > select_ln45_10_fu_334_p3;
    sc_signal< sc_lv<31> > select_ln45_11_fu_352_p3;
    sc_signal< sc_lv<31> > select_ln45_12_fu_370_p3;
    sc_signal< sc_lv<31> > select_ln45_13_fu_388_p3;
    sc_signal< sc_lv<31> > select_ln45_14_fu_406_p3;
    sc_signal< sc_lv<31> > select_ln45_15_fu_424_p3;
    sc_signal< sc_lv<31> > ap_return_0_preg;
    sc_signal< sc_lv<31> > ap_return_1_preg;
    sc_signal< sc_lv<31> > ap_return_2_preg;
    sc_signal< sc_lv<31> > ap_return_3_preg;
    sc_signal< sc_lv<31> > ap_return_4_preg;
    sc_signal< sc_lv<31> > ap_return_5_preg;
    sc_signal< sc_lv<31> > ap_return_6_preg;
    sc_signal< sc_lv<31> > ap_return_7_preg;
    sc_signal< sc_lv<31> > ap_return_8_preg;
    sc_signal< sc_lv<31> > ap_return_9_preg;
    sc_signal< sc_lv<31> > ap_return_10_preg;
    sc_signal< sc_lv<31> > ap_return_11_preg;
    sc_signal< sc_lv<31> > ap_return_12_preg;
    sc_signal< sc_lv<31> > ap_return_13_preg;
    sc_signal< sc_lv<31> > ap_return_14_preg;
    sc_signal< sc_lv<31> > ap_return_15_preg;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_icmp_ln1494_10_fu_328_p2();
    void thread_icmp_ln1494_11_fu_346_p2();
    void thread_icmp_ln1494_12_fu_364_p2();
    void thread_icmp_ln1494_13_fu_382_p2();
    void thread_icmp_ln1494_14_fu_400_p2();
    void thread_icmp_ln1494_15_fu_418_p2();
    void thread_icmp_ln1494_1_fu_166_p2();
    void thread_icmp_ln1494_2_fu_184_p2();
    void thread_icmp_ln1494_3_fu_202_p2();
    void thread_icmp_ln1494_4_fu_220_p2();
    void thread_icmp_ln1494_5_fu_238_p2();
    void thread_icmp_ln1494_6_fu_256_p2();
    void thread_icmp_ln1494_7_fu_274_p2();
    void thread_icmp_ln1494_8_fu_292_p2();
    void thread_icmp_ln1494_9_fu_310_p2();
    void thread_icmp_ln1494_fu_148_p2();
    void thread_select_ln45_10_fu_334_p3();
    void thread_select_ln45_11_fu_352_p3();
    void thread_select_ln45_12_fu_370_p3();
    void thread_select_ln45_13_fu_388_p3();
    void thread_select_ln45_14_fu_406_p3();
    void thread_select_ln45_15_fu_424_p3();
    void thread_select_ln45_1_fu_172_p3();
    void thread_select_ln45_2_fu_190_p3();
    void thread_select_ln45_3_fu_208_p3();
    void thread_select_ln45_4_fu_226_p3();
    void thread_select_ln45_5_fu_244_p3();
    void thread_select_ln45_6_fu_262_p3();
    void thread_select_ln45_7_fu_280_p3();
    void thread_select_ln45_8_fu_298_p3();
    void thread_select_ln45_9_fu_316_p3();
    void thread_select_ln45_fu_154_p3();
    void thread_trunc_ln1494_10_fu_324_p1();
    void thread_trunc_ln1494_11_fu_342_p1();
    void thread_trunc_ln1494_12_fu_360_p1();
    void thread_trunc_ln1494_13_fu_378_p1();
    void thread_trunc_ln1494_14_fu_396_p1();
    void thread_trunc_ln1494_15_fu_414_p1();
    void thread_trunc_ln1494_1_fu_162_p1();
    void thread_trunc_ln1494_2_fu_180_p1();
    void thread_trunc_ln1494_3_fu_198_p1();
    void thread_trunc_ln1494_4_fu_216_p1();
    void thread_trunc_ln1494_5_fu_234_p1();
    void thread_trunc_ln1494_6_fu_252_p1();
    void thread_trunc_ln1494_7_fu_270_p1();
    void thread_trunc_ln1494_8_fu_288_p1();
    void thread_trunc_ln1494_9_fu_306_p1();
    void thread_trunc_ln1494_fu_144_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
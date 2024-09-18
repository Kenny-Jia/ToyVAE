#include "dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_0_preg = acc_0_V_fu_7558_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_10_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_10_preg = acc_10_V_fu_23152_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_11_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_11_preg = acc_11_V_fu_24704_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_12_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_12_preg = acc_12_V_fu_26274_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_13_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_13_preg = acc_13_V_fu_27848_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_14_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_14_preg = acc_14_V_fu_29386_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_15_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_15_preg = acc_15_V_fu_30920_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_16_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_16_preg = acc_16_V_fu_32418_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_17_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_17_preg = acc_17_V_fu_33984_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_18_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_18_preg = acc_18_V_fu_35586_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_19_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_19_preg = acc_19_V_fu_37104_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_1_preg = acc_1_V_fu_9104_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_20_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_20_preg = acc_20_V_fu_38630_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_21_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_21_preg = acc_21_V_fu_40208_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_22_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_22_preg = acc_22_V_fu_41742_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_23_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_23_preg = acc_23_V_fu_43316_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_24_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_24_preg = acc_24_V_fu_44910_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_25_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_25_preg = acc_25_V_fu_46512_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_26_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_26_preg = acc_26_V_fu_48134_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_27_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_27_preg = acc_27_V_fu_49688_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_28_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_28_preg = acc_28_V_fu_51238_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_29_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_29_preg = acc_29_V_fu_52844_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_2_preg = acc_2_V_fu_10690_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_30_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_30_preg = acc_30_V_fu_54386_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_31_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_31_preg = acc_31_V_fu_55986_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_3_preg = acc_3_V_fu_12282_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_4_preg = acc_4_V_fu_13876_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_5_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_5_preg = acc_5_V_fu_15382_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_6_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_6_preg = acc_6_V_fu_16952_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_7_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_7_preg = acc_7_V_fu_18530_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_8_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_8_preg = acc_8_V_fu_20076_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_9_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, data_V_ap_vld.read())))) {
            ap_return_9_preg = acc_9_V_fu_21602_p2.read();
        }
    }
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}


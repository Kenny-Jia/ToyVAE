#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_0_V = ap_sync_channel_write_layer2_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_100_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_100_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_100_V = ap_sync_channel_write_layer2_out_100_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_101_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_101_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_101_V = ap_sync_channel_write_layer2_out_101_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_102_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_102_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_102_V = ap_sync_channel_write_layer2_out_102_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_103_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_103_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_103_V = ap_sync_channel_write_layer2_out_103_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_104_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_104_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_104_V = ap_sync_channel_write_layer2_out_104_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_105_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_105_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_105_V = ap_sync_channel_write_layer2_out_105_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_106_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_106_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_106_V = ap_sync_channel_write_layer2_out_106_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_107_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_107_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_107_V = ap_sync_channel_write_layer2_out_107_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_108_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_108_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_108_V = ap_sync_channel_write_layer2_out_108_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_109_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_109_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_109_V = ap_sync_channel_write_layer2_out_109_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_10_V = ap_sync_channel_write_layer2_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_110_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_110_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_110_V = ap_sync_channel_write_layer2_out_110_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_111_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_111_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_111_V = ap_sync_channel_write_layer2_out_111_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_112_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_112_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_112_V = ap_sync_channel_write_layer2_out_112_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_113_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_113_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_113_V = ap_sync_channel_write_layer2_out_113_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_114_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_114_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_114_V = ap_sync_channel_write_layer2_out_114_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_115_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_115_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_115_V = ap_sync_channel_write_layer2_out_115_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_116_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_116_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_116_V = ap_sync_channel_write_layer2_out_116_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_117_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_117_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_117_V = ap_sync_channel_write_layer2_out_117_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_118_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_118_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_118_V = ap_sync_channel_write_layer2_out_118_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_119_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_119_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_119_V = ap_sync_channel_write_layer2_out_119_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_11_V = ap_sync_channel_write_layer2_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_120_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_120_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_120_V = ap_sync_channel_write_layer2_out_120_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_121_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_121_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_121_V = ap_sync_channel_write_layer2_out_121_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_122_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_122_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_122_V = ap_sync_channel_write_layer2_out_122_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_123_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_123_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_123_V = ap_sync_channel_write_layer2_out_123_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_124_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_124_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_124_V = ap_sync_channel_write_layer2_out_124_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_125_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_125_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_125_V = ap_sync_channel_write_layer2_out_125_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_126_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_126_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_126_V = ap_sync_channel_write_layer2_out_126_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_127_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_127_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_127_V = ap_sync_channel_write_layer2_out_127_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_12_V = ap_sync_channel_write_layer2_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_13_V = ap_sync_channel_write_layer2_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_14_V = ap_sync_channel_write_layer2_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_15_V = ap_sync_channel_write_layer2_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_16_V = ap_sync_channel_write_layer2_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_17_V = ap_sync_channel_write_layer2_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_18_V = ap_sync_channel_write_layer2_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_19_V = ap_sync_channel_write_layer2_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_1_V = ap_sync_channel_write_layer2_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_20_V = ap_sync_channel_write_layer2_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_21_V = ap_sync_channel_write_layer2_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_22_V = ap_sync_channel_write_layer2_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_23_V = ap_sync_channel_write_layer2_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_24_V = ap_sync_channel_write_layer2_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_25_V = ap_sync_channel_write_layer2_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_26_V = ap_sync_channel_write_layer2_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_27_V = ap_sync_channel_write_layer2_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_28_V = ap_sync_channel_write_layer2_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_29_V = ap_sync_channel_write_layer2_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_2_V = ap_sync_channel_write_layer2_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_30_V = ap_sync_channel_write_layer2_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_31_V = ap_sync_channel_write_layer2_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_32_V = ap_sync_channel_write_layer2_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_33_V = ap_sync_channel_write_layer2_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_34_V = ap_sync_channel_write_layer2_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_35_V = ap_sync_channel_write_layer2_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_36_V = ap_sync_channel_write_layer2_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_37_V = ap_sync_channel_write_layer2_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_38_V = ap_sync_channel_write_layer2_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_39_V = ap_sync_channel_write_layer2_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_3_V = ap_sync_channel_write_layer2_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_40_V = ap_sync_channel_write_layer2_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_41_V = ap_sync_channel_write_layer2_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_42_V = ap_sync_channel_write_layer2_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_43_V = ap_sync_channel_write_layer2_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_44_V = ap_sync_channel_write_layer2_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_45_V = ap_sync_channel_write_layer2_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_46_V = ap_sync_channel_write_layer2_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_47_V = ap_sync_channel_write_layer2_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_48_V = ap_sync_channel_write_layer2_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_49_V = ap_sync_channel_write_layer2_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_4_V = ap_sync_channel_write_layer2_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_50_V = ap_sync_channel_write_layer2_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_51_V = ap_sync_channel_write_layer2_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_52_V = ap_sync_channel_write_layer2_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_53_V = ap_sync_channel_write_layer2_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_54_V = ap_sync_channel_write_layer2_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_55_V = ap_sync_channel_write_layer2_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_56_V = ap_sync_channel_write_layer2_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_57_V = ap_sync_channel_write_layer2_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_58_V = ap_sync_channel_write_layer2_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_59_V = ap_sync_channel_write_layer2_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_5_V = ap_sync_channel_write_layer2_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_60_V = ap_sync_channel_write_layer2_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_61_V = ap_sync_channel_write_layer2_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_62_V = ap_sync_channel_write_layer2_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_63_V = ap_sync_channel_write_layer2_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_64_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_64_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_64_V = ap_sync_channel_write_layer2_out_64_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_65_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_65_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_65_V = ap_sync_channel_write_layer2_out_65_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_66_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_66_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_66_V = ap_sync_channel_write_layer2_out_66_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_67_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_67_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_67_V = ap_sync_channel_write_layer2_out_67_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_68_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_68_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_68_V = ap_sync_channel_write_layer2_out_68_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_69_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_69_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_69_V = ap_sync_channel_write_layer2_out_69_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_6_V = ap_sync_channel_write_layer2_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_70_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_70_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_70_V = ap_sync_channel_write_layer2_out_70_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_71_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_71_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_71_V = ap_sync_channel_write_layer2_out_71_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_72_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_72_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_72_V = ap_sync_channel_write_layer2_out_72_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_73_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_73_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_73_V = ap_sync_channel_write_layer2_out_73_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_74_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_74_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_74_V = ap_sync_channel_write_layer2_out_74_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_75_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_75_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_75_V = ap_sync_channel_write_layer2_out_75_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_76_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_76_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_76_V = ap_sync_channel_write_layer2_out_76_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_77_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_77_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_77_V = ap_sync_channel_write_layer2_out_77_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_78_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_78_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_78_V = ap_sync_channel_write_layer2_out_78_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_79_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_79_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_79_V = ap_sync_channel_write_layer2_out_79_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_7_V = ap_sync_channel_write_layer2_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_80_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_80_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_80_V = ap_sync_channel_write_layer2_out_80_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_81_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_81_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_81_V = ap_sync_channel_write_layer2_out_81_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_82_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_82_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_82_V = ap_sync_channel_write_layer2_out_82_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_83_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_83_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_83_V = ap_sync_channel_write_layer2_out_83_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_84_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_84_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_84_V = ap_sync_channel_write_layer2_out_84_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_85_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_85_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_85_V = ap_sync_channel_write_layer2_out_85_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_86_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_86_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_86_V = ap_sync_channel_write_layer2_out_86_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_87_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_87_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_87_V = ap_sync_channel_write_layer2_out_87_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_88_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_88_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_88_V = ap_sync_channel_write_layer2_out_88_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_89_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_89_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_89_V = ap_sync_channel_write_layer2_out_89_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_8_V = ap_sync_channel_write_layer2_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_90_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_90_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_90_V = ap_sync_channel_write_layer2_out_90_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_91_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_91_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_91_V = ap_sync_channel_write_layer2_out_91_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_92_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_92_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_92_V = ap_sync_channel_write_layer2_out_92_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_93_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_93_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_93_V = ap_sync_channel_write_layer2_out_93_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_94_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_94_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_94_V = ap_sync_channel_write_layer2_out_94_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_95_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_95_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_95_V = ap_sync_channel_write_layer2_out_95_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_96_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_96_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_96_V = ap_sync_channel_write_layer2_out_96_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_97_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_97_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_97_V = ap_sync_channel_write_layer2_out_97_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_98_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_98_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_98_V = ap_sync_channel_write_layer2_out_98_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_99_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_99_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_99_V = ap_sync_channel_write_layer2_out_99_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_9_V = ap_sync_channel_write_layer2_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_0_V = ap_sync_channel_write_layer4_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_100_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_100_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_100_V = ap_sync_channel_write_layer4_out_100_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_101_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_101_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_101_V = ap_sync_channel_write_layer4_out_101_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_102_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_102_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_102_V = ap_sync_channel_write_layer4_out_102_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_103_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_103_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_103_V = ap_sync_channel_write_layer4_out_103_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_104_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_104_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_104_V = ap_sync_channel_write_layer4_out_104_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_105_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_105_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_105_V = ap_sync_channel_write_layer4_out_105_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_106_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_106_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_106_V = ap_sync_channel_write_layer4_out_106_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_107_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_107_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_107_V = ap_sync_channel_write_layer4_out_107_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_108_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_108_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_108_V = ap_sync_channel_write_layer4_out_108_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_109_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_109_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_109_V = ap_sync_channel_write_layer4_out_109_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_10_V = ap_sync_channel_write_layer4_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_110_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_110_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_110_V = ap_sync_channel_write_layer4_out_110_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_111_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_111_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_111_V = ap_sync_channel_write_layer4_out_111_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_112_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_112_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_112_V = ap_sync_channel_write_layer4_out_112_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_113_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_113_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_113_V = ap_sync_channel_write_layer4_out_113_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_114_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_114_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_114_V = ap_sync_channel_write_layer4_out_114_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_115_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_115_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_115_V = ap_sync_channel_write_layer4_out_115_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_116_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_116_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_116_V = ap_sync_channel_write_layer4_out_116_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_117_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_117_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_117_V = ap_sync_channel_write_layer4_out_117_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_118_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_118_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_118_V = ap_sync_channel_write_layer4_out_118_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_119_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_119_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_119_V = ap_sync_channel_write_layer4_out_119_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_11_V = ap_sync_channel_write_layer4_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_120_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_120_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_120_V = ap_sync_channel_write_layer4_out_120_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_121_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_121_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_121_V = ap_sync_channel_write_layer4_out_121_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_122_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_122_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_122_V = ap_sync_channel_write_layer4_out_122_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_123_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_123_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_123_V = ap_sync_channel_write_layer4_out_123_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_124_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_124_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_124_V = ap_sync_channel_write_layer4_out_124_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_125_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_125_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_125_V = ap_sync_channel_write_layer4_out_125_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_126_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_126_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_126_V = ap_sync_channel_write_layer4_out_126_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_127_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_127_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_127_V = ap_sync_channel_write_layer4_out_127_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_12_V = ap_sync_channel_write_layer4_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_13_V = ap_sync_channel_write_layer4_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_14_V = ap_sync_channel_write_layer4_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_15_V = ap_sync_channel_write_layer4_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_16_V = ap_sync_channel_write_layer4_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_17_V = ap_sync_channel_write_layer4_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_18_V = ap_sync_channel_write_layer4_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_19_V = ap_sync_channel_write_layer4_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_1_V = ap_sync_channel_write_layer4_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_20_V = ap_sync_channel_write_layer4_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_21_V = ap_sync_channel_write_layer4_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_22_V = ap_sync_channel_write_layer4_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_23_V = ap_sync_channel_write_layer4_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_24_V = ap_sync_channel_write_layer4_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_25_V = ap_sync_channel_write_layer4_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_26_V = ap_sync_channel_write_layer4_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_27_V = ap_sync_channel_write_layer4_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_28_V = ap_sync_channel_write_layer4_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_29_V = ap_sync_channel_write_layer4_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_2_V = ap_sync_channel_write_layer4_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_30_V = ap_sync_channel_write_layer4_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_31_V = ap_sync_channel_write_layer4_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_32_V = ap_sync_channel_write_layer4_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_33_V = ap_sync_channel_write_layer4_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_34_V = ap_sync_channel_write_layer4_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_35_V = ap_sync_channel_write_layer4_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_36_V = ap_sync_channel_write_layer4_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_37_V = ap_sync_channel_write_layer4_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_38_V = ap_sync_channel_write_layer4_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_39_V = ap_sync_channel_write_layer4_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_3_V = ap_sync_channel_write_layer4_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_40_V = ap_sync_channel_write_layer4_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_41_V = ap_sync_channel_write_layer4_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_42_V = ap_sync_channel_write_layer4_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_43_V = ap_sync_channel_write_layer4_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_44_V = ap_sync_channel_write_layer4_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_45_V = ap_sync_channel_write_layer4_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_46_V = ap_sync_channel_write_layer4_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_47_V = ap_sync_channel_write_layer4_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_48_V = ap_sync_channel_write_layer4_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_49_V = ap_sync_channel_write_layer4_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_4_V = ap_sync_channel_write_layer4_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_50_V = ap_sync_channel_write_layer4_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_51_V = ap_sync_channel_write_layer4_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_52_V = ap_sync_channel_write_layer4_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_53_V = ap_sync_channel_write_layer4_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_54_V = ap_sync_channel_write_layer4_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_55_V = ap_sync_channel_write_layer4_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_56_V = ap_sync_channel_write_layer4_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_57_V = ap_sync_channel_write_layer4_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_58_V = ap_sync_channel_write_layer4_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_59_V = ap_sync_channel_write_layer4_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_5_V = ap_sync_channel_write_layer4_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_60_V = ap_sync_channel_write_layer4_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_61_V = ap_sync_channel_write_layer4_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_62_V = ap_sync_channel_write_layer4_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_63_V = ap_sync_channel_write_layer4_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_64_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_64_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_64_V = ap_sync_channel_write_layer4_out_64_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_65_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_65_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_65_V = ap_sync_channel_write_layer4_out_65_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_66_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_66_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_66_V = ap_sync_channel_write_layer4_out_66_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_67_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_67_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_67_V = ap_sync_channel_write_layer4_out_67_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_68_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_68_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_68_V = ap_sync_channel_write_layer4_out_68_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_69_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_69_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_69_V = ap_sync_channel_write_layer4_out_69_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_6_V = ap_sync_channel_write_layer4_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_70_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_70_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_70_V = ap_sync_channel_write_layer4_out_70_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_71_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_71_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_71_V = ap_sync_channel_write_layer4_out_71_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_72_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_72_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_72_V = ap_sync_channel_write_layer4_out_72_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_73_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_73_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_73_V = ap_sync_channel_write_layer4_out_73_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_74_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_74_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_74_V = ap_sync_channel_write_layer4_out_74_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_75_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_75_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_75_V = ap_sync_channel_write_layer4_out_75_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_76_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_76_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_76_V = ap_sync_channel_write_layer4_out_76_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_77_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_77_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_77_V = ap_sync_channel_write_layer4_out_77_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_78_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_78_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_78_V = ap_sync_channel_write_layer4_out_78_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_79_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_79_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_79_V = ap_sync_channel_write_layer4_out_79_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_7_V = ap_sync_channel_write_layer4_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_80_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_80_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_80_V = ap_sync_channel_write_layer4_out_80_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_81_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_81_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_81_V = ap_sync_channel_write_layer4_out_81_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_82_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_82_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_82_V = ap_sync_channel_write_layer4_out_82_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_83_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_83_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_83_V = ap_sync_channel_write_layer4_out_83_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_84_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_84_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_84_V = ap_sync_channel_write_layer4_out_84_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_85_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_85_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_85_V = ap_sync_channel_write_layer4_out_85_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_86_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_86_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_86_V = ap_sync_channel_write_layer4_out_86_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_87_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_87_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_87_V = ap_sync_channel_write_layer4_out_87_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_88_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_88_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_88_V = ap_sync_channel_write_layer4_out_88_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_89_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_89_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_89_V = ap_sync_channel_write_layer4_out_89_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_8_V = ap_sync_channel_write_layer4_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_90_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_90_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_90_V = ap_sync_channel_write_layer4_out_90_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_91_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_91_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_91_V = ap_sync_channel_write_layer4_out_91_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_92_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_92_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_92_V = ap_sync_channel_write_layer4_out_92_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_93_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_93_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_93_V = ap_sync_channel_write_layer4_out_93_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_94_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_94_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_94_V = ap_sync_channel_write_layer4_out_94_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_95_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_95_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_95_V = ap_sync_channel_write_layer4_out_95_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_96_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_96_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_96_V = ap_sync_channel_write_layer4_out_96_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_97_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_97_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_97_V = ap_sync_channel_write_layer4_out_97_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_98_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_98_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_98_V = ap_sync_channel_write_layer4_out_98_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_99_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_99_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_99_V = ap_sync_channel_write_layer4_out_99_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_9_V = ap_sync_channel_write_layer4_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_0_V = ap_sync_channel_write_layer5_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_10_V = ap_sync_channel_write_layer5_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_11_V = ap_sync_channel_write_layer5_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_12_V = ap_sync_channel_write_layer5_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_13_V = ap_sync_channel_write_layer5_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_14_V = ap_sync_channel_write_layer5_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_15_V = ap_sync_channel_write_layer5_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_16_V = ap_sync_channel_write_layer5_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_17_V = ap_sync_channel_write_layer5_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_18_V = ap_sync_channel_write_layer5_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_19_V = ap_sync_channel_write_layer5_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_1_V = ap_sync_channel_write_layer5_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_20_V = ap_sync_channel_write_layer5_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_21_V = ap_sync_channel_write_layer5_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_22_V = ap_sync_channel_write_layer5_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_23_V = ap_sync_channel_write_layer5_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_24_V = ap_sync_channel_write_layer5_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_25_V = ap_sync_channel_write_layer5_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_26_V = ap_sync_channel_write_layer5_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_27_V = ap_sync_channel_write_layer5_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_28_V = ap_sync_channel_write_layer5_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_29_V = ap_sync_channel_write_layer5_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_2_V = ap_sync_channel_write_layer5_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_30_V = ap_sync_channel_write_layer5_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_31_V = ap_sync_channel_write_layer5_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_32_V = ap_sync_channel_write_layer5_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_33_V = ap_sync_channel_write_layer5_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_34_V = ap_sync_channel_write_layer5_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_35_V = ap_sync_channel_write_layer5_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_36_V = ap_sync_channel_write_layer5_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_37_V = ap_sync_channel_write_layer5_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_38_V = ap_sync_channel_write_layer5_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_39_V = ap_sync_channel_write_layer5_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_3_V = ap_sync_channel_write_layer5_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_40_V = ap_sync_channel_write_layer5_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_41_V = ap_sync_channel_write_layer5_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_42_V = ap_sync_channel_write_layer5_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_43_V = ap_sync_channel_write_layer5_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_44_V = ap_sync_channel_write_layer5_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_45_V = ap_sync_channel_write_layer5_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_46_V = ap_sync_channel_write_layer5_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_47_V = ap_sync_channel_write_layer5_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_48_V = ap_sync_channel_write_layer5_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_49_V = ap_sync_channel_write_layer5_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_4_V = ap_sync_channel_write_layer5_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_50_V = ap_sync_channel_write_layer5_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_51_V = ap_sync_channel_write_layer5_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_52_V = ap_sync_channel_write_layer5_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_53_V = ap_sync_channel_write_layer5_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_54_V = ap_sync_channel_write_layer5_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_55_V = ap_sync_channel_write_layer5_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_56_V = ap_sync_channel_write_layer5_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_57_V = ap_sync_channel_write_layer5_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_58_V = ap_sync_channel_write_layer5_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_59_V = ap_sync_channel_write_layer5_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_5_V = ap_sync_channel_write_layer5_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_60_V = ap_sync_channel_write_layer5_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_61_V = ap_sync_channel_write_layer5_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_62_V = ap_sync_channel_write_layer5_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_63_V = ap_sync_channel_write_layer5_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_6_V = ap_sync_channel_write_layer5_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_7_V = ap_sync_channel_write_layer5_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_8_V = ap_sync_channel_write_layer5_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_32_16_4_0_0_ap_fixed_32_16_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_9_V = ap_sync_channel_write_layer5_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_sync_channel_write_layer7_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_sync_channel_write_layer7_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_sync_channel_write_layer7_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_sync_channel_write_layer7_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_sync_channel_write_layer7_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_sync_channel_write_layer7_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_sync_channel_write_layer7_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_sync_channel_write_layer7_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_sync_channel_write_layer7_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_sync_channel_write_layer7_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_sync_channel_write_layer7_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_sync_channel_write_layer7_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_20_V = ap_sync_channel_write_layer7_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_21_V = ap_sync_channel_write_layer7_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_22_V = ap_sync_channel_write_layer7_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_23_V = ap_sync_channel_write_layer7_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_24_V = ap_sync_channel_write_layer7_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_25_V = ap_sync_channel_write_layer7_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_26_V = ap_sync_channel_write_layer7_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_27_V = ap_sync_channel_write_layer7_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_28_V = ap_sync_channel_write_layer7_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_29_V = ap_sync_channel_write_layer7_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_sync_channel_write_layer7_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_30_V = ap_sync_channel_write_layer7_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_31_V = ap_sync_channel_write_layer7_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_32_V = ap_sync_channel_write_layer7_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_33_V = ap_sync_channel_write_layer7_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_34_V = ap_sync_channel_write_layer7_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_35_V = ap_sync_channel_write_layer7_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_36_V = ap_sync_channel_write_layer7_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_37_V = ap_sync_channel_write_layer7_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_38_V = ap_sync_channel_write_layer7_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_39_V = ap_sync_channel_write_layer7_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_sync_channel_write_layer7_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_40_V = ap_sync_channel_write_layer7_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_41_V = ap_sync_channel_write_layer7_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_42_V = ap_sync_channel_write_layer7_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_43_V = ap_sync_channel_write_layer7_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_44_V = ap_sync_channel_write_layer7_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_45_V = ap_sync_channel_write_layer7_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_46_V = ap_sync_channel_write_layer7_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_47_V = ap_sync_channel_write_layer7_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_48_V = ap_sync_channel_write_layer7_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_49_V = ap_sync_channel_write_layer7_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_sync_channel_write_layer7_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_50_V = ap_sync_channel_write_layer7_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_51_V = ap_sync_channel_write_layer7_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_52_V = ap_sync_channel_write_layer7_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_53_V = ap_sync_channel_write_layer7_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_54_V = ap_sync_channel_write_layer7_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_55_V = ap_sync_channel_write_layer7_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_56_V = ap_sync_channel_write_layer7_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_57_V = ap_sync_channel_write_layer7_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_58_V = ap_sync_channel_write_layer7_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_59_V = ap_sync_channel_write_layer7_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_sync_channel_write_layer7_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_60_V = ap_sync_channel_write_layer7_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_61_V = ap_sync_channel_write_layer7_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_62_V = ap_sync_channel_write_layer7_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_63_V = ap_sync_channel_write_layer7_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_sync_channel_write_layer7_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_sync_channel_write_layer7_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_sync_channel_write_layer7_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_32_16_5_3_0_ap_fixed_32_16_4_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_sync_channel_write_layer7_out_9_V.read();
        }
    }
}

}


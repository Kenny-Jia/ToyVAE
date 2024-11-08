// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0 (
        ap_ready,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        data_8_V_read,
        data_9_V_read,
        data_10_V_read,
        data_11_V_read,
        data_12_V_read,
        data_13_V_read,
        data_14_V_read,
        data_15_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2
);


output   ap_ready;
input  [31:0] data_0_V_read;
input  [31:0] data_1_V_read;
input  [31:0] data_2_V_read;
input  [31:0] data_3_V_read;
input  [31:0] data_4_V_read;
input  [31:0] data_5_V_read;
input  [31:0] data_6_V_read;
input  [31:0] data_7_V_read;
input  [31:0] data_8_V_read;
input  [31:0] data_9_V_read;
input  [31:0] data_10_V_read;
input  [31:0] data_11_V_read;
input  [31:0] data_12_V_read;
input  [31:0] data_13_V_read;
input  [31:0] data_14_V_read;
input  [31:0] data_15_V_read;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;

wire  signed [31:0] mul_ln1118_34_fu_276_p0;
wire  signed [47:0] sext_ln1118_24_fu_10231_p1;
wire  signed [31:0] mul_ln1118_35_fu_277_p0;
wire  signed [46:0] sext_ln1118_26_fu_10276_p1;
wire  signed [31:0] mul_ln1118_39_fu_278_p0;
wire  signed [31:0] mul_ln1118_22_fu_279_p0;
wire  signed [47:0] sext_ln1118_13_fu_10005_p1;
wire  signed [31:0] mul_ln1118_44_fu_280_p0;
wire  signed [31:0] mul_ln1118_11_fu_281_p0;
wire  signed [47:0] sext_ln1118_7_fu_9829_p1;
wire  signed [31:0] mul_ln1118_42_fu_282_p0;
wire  signed [31:0] mul_ln1118_32_fu_283_p0;
wire  signed [31:0] mul_ln1118_26_fu_284_p0;
wire  signed [46:0] sext_ln1118_15_fu_10050_p1;
wire  signed [31:0] mul_ln1118_2_fu_285_p0;
wire  signed [46:0] sext_ln1118_1_fu_9683_p1;
wire  signed [31:0] mul_ln1118_27_fu_286_p0;
wire  signed [47:0] sext_ln1118_17_fu_10103_p1;
wire  signed [31:0] mul_ln1118_33_fu_287_p0;
wire  signed [31:0] mul_ln1118_9_fu_288_p0;
wire  signed [31:0] mul_ln1118_19_fu_289_p0;
wire  signed [45:0] sext_ln1118_12_fu_9957_p1;
wire  signed [31:0] mul_ln1118_46_fu_290_p0;
wire  signed [31:0] mul_ln1118_15_fu_291_p0;
wire  signed [31:0] mul_ln1118_18_fu_292_p0;
wire  signed [31:0] mul_ln1118_20_fu_293_p0;
wire  signed [31:0] mul_ln1118_38_fu_294_p0;
wire  signed [31:0] mul_ln1118_23_fu_295_p0;
wire  signed [31:0] mul_ln1118_40_fu_296_p0;
wire  signed [31:0] mul_ln1118_29_fu_297_p0;
wire  signed [31:0] mul_ln1118_5_fu_298_p0;
wire  signed [31:0] mul_ln1118_30_fu_299_p0;
wire  signed [31:0] mul_ln1118_6_fu_300_p0;
wire  signed [44:0] sext_ln1118_6_fu_9785_p1;
wire  signed [31:0] mul_ln1118_17_fu_301_p0;
wire  signed [43:0] sext_ln1118_9_fu_9903_p1;
wire  signed [31:0] mul_ln1118_fu_302_p0;
wire  signed [31:0] mul_ln1118_41_fu_303_p0;
wire  signed [31:0] mul_ln1118_8_fu_304_p0;
wire  signed [31:0] mul_ln1118_45_fu_305_p0;
wire  signed [31:0] mul_ln1118_21_fu_306_p0;
wire  signed [31:0] mul_ln1118_7_fu_307_p0;
wire  signed [31:0] mul_ln1118_1_fu_309_p0;
wire  signed [31:0] mul_ln1118_43_fu_310_p0;
wire  signed [31:0] mul_ln1118_14_fu_311_p0;
wire  signed [47:0] sext_ln1118_8_fu_9866_p1;
wire  signed [31:0] mul_ln1118_25_fu_312_p0;
wire  signed [31:0] mul_ln1118_10_fu_313_p0;
wire  signed [31:0] mul_ln1118_13_fu_314_p0;
wire  signed [31:0] mul_ln1118_28_fu_315_p0;
wire  signed [31:0] mul_ln1118_3_fu_316_p0;
wire  signed [31:0] mul_ln1118_36_fu_317_p0;
wire  signed [31:0] mul_ln1118_4_fu_318_p0;
wire  signed [31:0] mul_ln1118_24_fu_319_p0;
wire  signed [31:0] mul_ln1118_16_fu_320_p0;
wire  signed [31:0] mul_ln1118_37_fu_321_p0;
wire  signed [31:0] mul_ln1118_12_fu_322_p0;
wire  signed [31:0] mul_ln1118_31_fu_323_p0;
wire  signed [31:0] sext_ln1118_fu_9678_p0;
wire  signed [31:0] sext_ln1118_1_fu_9683_p0;
wire   [46:0] mul_ln1118_fu_302_p2;
wire   [30:0] trunc_ln_fu_9689_p4;
wire   [47:0] mul_ln1118_1_fu_309_p2;
wire   [46:0] mul_ln1118_2_fu_285_p2;
wire   [30:0] trunc_ln708_s_fu_9713_p4;
wire  signed [31:0] sext_ln1118_2_fu_9727_p0;
wire  signed [31:0] sext_ln1118_3_fu_9732_p0;
wire  signed [31:0] sext_ln1118_4_fu_9737_p0;
wire   [43:0] mul_ln1118_3_fu_316_p2;
wire   [27:0] trunc_ln708_2_fu_9742_p4;
wire   [46:0] mul_ln1118_4_fu_318_p2;
wire   [30:0] trunc_ln708_3_fu_9756_p4;
wire   [47:0] mul_ln1118_5_fu_298_p2;
wire  signed [31:0] sext_ln1118_5_fu_9780_p0;
wire  signed [31:0] sext_ln1118_6_fu_9785_p0;
wire   [44:0] mul_ln1118_6_fu_300_p2;
wire   [28:0] trunc_ln708_4_fu_9791_p4;
wire   [47:0] mul_ln1118_7_fu_307_p2;
wire   [44:0] mul_ln1118_8_fu_304_p2;
wire   [28:0] trunc_ln708_6_fu_9815_p4;
wire   [47:0] mul_ln1118_9_fu_288_p2;
wire   [47:0] mul_ln1118_10_fu_313_p2;
wire   [47:0] mul_ln1118_11_fu_281_p2;
wire   [47:0] mul_ln1118_12_fu_322_p2;
wire   [47:0] mul_ln1118_13_fu_314_p2;
wire   [47:0] mul_ln1118_14_fu_311_p2;
wire  signed [31:0] sext_ln1118_9_fu_9903_p0;
wire  signed [31:0] sext_ln1118_10_fu_9909_p0;
wire   [47:0] mul_ln1118_15_fu_291_p2;
wire   [43:0] mul_ln1118_16_fu_320_p2;
wire   [27:0] trunc_ln708_15_fu_9924_p4;
wire   [43:0] mul_ln1118_17_fu_301_p2;
wire   [27:0] trunc_ln708_16_fu_9938_p4;
wire  signed [31:0] sext_ln1118_11_fu_9952_p0;
wire  signed [31:0] sext_ln1118_12_fu_9957_p0;
wire   [45:0] mul_ln1118_18_fu_292_p2;
wire   [29:0] tmp_fu_9963_p4;
wire   [45:0] mul_ln1118_19_fu_289_p2;
wire   [29:0] trunc_ln708_17_fu_9977_p4;
wire   [46:0] mul_ln1118_20_fu_293_p2;
wire   [30:0] trunc_ln708_18_fu_9991_p4;
wire  signed [31:0] sext_ln1118_13_fu_10005_p0;
wire  signed [31:0] sext_ln1118_14_fu_10011_p0;
wire   [43:0] mul_ln1118_21_fu_306_p2;
wire   [27:0] tmp_1_fu_10016_p4;
wire   [47:0] mul_ln1118_22_fu_279_p2;
wire   [47:0] mul_ln1118_23_fu_295_p2;
wire  signed [31:0] sext_ln1118_15_fu_10050_p0;
wire  signed [31:0] sext_ln1118_16_fu_10056_p0;
wire   [45:0] mul_ln1118_24_fu_319_p2;
wire   [29:0] tmp_2_fu_10061_p4;
wire   [46:0] mul_ln1118_25_fu_312_p2;
wire   [30:0] trunc_ln708_21_fu_10075_p4;
wire   [46:0] mul_ln1118_26_fu_284_p2;
wire   [30:0] trunc_ln708_22_fu_10089_p4;
wire  signed [31:0] sext_ln1118_17_fu_10103_p0;
wire  signed [31:0] shl_ln_fu_10109_p1;
wire   [42:0] shl_ln_fu_10109_p3;
wire  signed [31:0] shl_ln1118_s_fu_10121_p1;
wire   [34:0] shl_ln1118_s_fu_10121_p3;
wire  signed [43:0] sext_ln1118_19_fu_10129_p1;
wire  signed [43:0] sext_ln1118_18_fu_10117_p1;
wire   [43:0] sub_ln1118_fu_10133_p2;
wire   [27:0] tmp_3_fu_10139_p4;
wire   [47:0] mul_ln1118_27_fu_286_p2;
wire   [47:0] mul_ln1118_28_fu_315_p2;
wire  signed [31:0] sext_ln1118_20_fu_10173_p0;
wire  signed [31:0] sext_ln1118_21_fu_10178_p0;
wire  signed [31:0] sext_ln1118_22_fu_10183_p0;
wire   [45:0] mul_ln1118_29_fu_297_p2;
wire   [29:0] trunc_ln708_25_fu_10188_p4;
wire   [44:0] mul_ln1118_30_fu_299_p2;
wire   [28:0] tmp_4_fu_10202_p4;
wire   [47:0] mul_ln1118_31_fu_323_p2;
wire  signed [31:0] sext_ln1118_23_fu_10226_p0;
wire  signed [31:0] sext_ln1118_24_fu_10231_p0;
wire   [47:0] mul_ln1118_32_fu_283_p2;
wire   [45:0] mul_ln1118_33_fu_287_p2;
wire   [29:0] tmp_5_fu_10247_p4;
wire   [47:0] mul_ln1118_34_fu_276_p2;
wire  signed [31:0] sext_ln1118_25_fu_10271_p0;
wire  signed [31:0] sext_ln1118_26_fu_10276_p0;
wire   [46:0] mul_ln1118_35_fu_277_p2;
wire   [30:0] trunc_ln708_29_fu_10282_p4;
wire   [46:0] mul_ln1118_36_fu_317_p2;
wire   [30:0] trunc_ln708_30_fu_10296_p4;
wire   [43:0] mul_ln1118_37_fu_321_p2;
wire   [27:0] trunc_ln708_31_fu_10310_p4;
wire  signed [31:0] sext_ln1118_27_fu_10324_p0;
wire  signed [31:0] sext_ln1118_28_fu_10329_p0;
wire  signed [31:0] sext_ln1118_29_fu_10334_p0;
wire   [45:0] mul_ln1118_38_fu_294_p2;
wire   [29:0] trunc_ln708_32_fu_10339_p4;
wire   [47:0] mul_ln1118_39_fu_278_p2;
wire   [46:0] mul_ln1118_40_fu_296_p2;
wire   [30:0] trunc_ln708_34_fu_10363_p4;
wire  signed [31:0] sext_ln1118_30_fu_10377_p0;
wire  signed [31:0] sext_ln1118_31_fu_10382_p0;
wire  signed [31:0] sext_ln1118_32_fu_10387_p0;
wire   [43:0] mul_ln1118_41_fu_303_p2;
wire   [27:0] trunc_ln708_35_fu_10392_p4;
wire   [47:0] mul_ln1118_42_fu_282_p2;
wire   [46:0] mul_ln1118_43_fu_310_p2;
wire   [30:0] trunc_ln708_37_fu_10416_p4;
wire  signed [31:0] sext_ln1118_33_fu_10430_p0;
wire  signed [31:0] sext_ln1118_34_fu_10435_p0;
wire  signed [31:0] sext_ln1118_35_fu_10440_p0;
wire   [46:0] mul_ln1118_44_fu_280_p2;
wire   [30:0] trunc_ln708_38_fu_10445_p4;
wire   [45:0] mul_ln1118_45_fu_305_p2;
wire   [29:0] tmp_6_fu_10459_p4;
wire   [44:0] mul_ln1118_46_fu_290_p2;
wire   [28:0] tmp_7_fu_10473_p4;
wire  signed [31:0] sext_ln708_fu_9699_p1;
wire  signed [31:0] sext_ln708_2_fu_9752_p1;
wire  signed [31:0] sext_ln708_4_fu_9801_p1;
wire   [31:0] trunc_ln708_9_fu_9836_p4;
wire   [31:0] add_ln703_1_fu_10493_p2;
wire   [31:0] add_ln703_fu_10487_p2;
wire   [31:0] trunc_ln708_11_fu_9873_p4;
wire   [31:0] trunc_ln708_14_fu_9914_p4;
wire  signed [30:0] sext_ln1118_36_fu_9973_p1;
wire  signed [30:0] sext_ln1118_37_fu_10026_p1;
wire   [30:0] add_ln703_4_fu_10511_p2;
wire  signed [31:0] sext_ln703_1_fu_10517_p1;
wire   [31:0] add_ln703_3_fu_10505_p2;
wire   [31:0] add_ln703_5_fu_10521_p2;
wire   [31:0] add_ln703_2_fu_10499_p2;
wire  signed [30:0] sext_ln1118_38_fu_10071_p1;
wire  signed [30:0] sext_ln1118_39_fu_10149_p1;
wire   [30:0] add_ln703_7_fu_10533_p2;
wire  signed [31:0] sext_ln708_12_fu_10198_p1;
wire   [31:0] trunc_ln708_27_fu_10237_p4;
wire   [31:0] add_ln703_8_fu_10543_p2;
wire  signed [31:0] sext_ln703_2_fu_10539_p1;
wire  signed [31:0] sext_ln708_13_fu_10292_p1;
wire  signed [31:0] sext_ln708_16_fu_10349_p1;
wire  signed [31:0] sext_ln708_20_fu_10455_p1;
wire   [31:0] add_ln703_11_fu_10561_p2;
wire  signed [31:0] sext_ln708_18_fu_10402_p1;
wire   [31:0] add_ln703_12_fu_10567_p2;
wire   [31:0] add_ln703_10_fu_10555_p2;
wire   [31:0] add_ln703_13_fu_10573_p2;
wire   [31:0] add_ln703_9_fu_10549_p2;
wire   [31:0] add_ln703_14_fu_10579_p2;
wire   [31:0] add_ln703_6_fu_10527_p2;
wire   [31:0] trunc_ln708_1_fu_9703_p4;
wire  signed [31:0] sext_ln708_3_fu_9766_p1;
wire   [31:0] trunc_ln708_7_fu_9805_p4;
wire   [31:0] trunc_ln708_8_fu_9846_p4;
wire   [31:0] add_ln703_17_fu_10597_p2;
wire   [31:0] add_ln703_16_fu_10591_p2;
wire   [31:0] trunc_ln708_12_fu_9883_p4;
wire  signed [31:0] sext_ln708_6_fu_9934_p1;
wire  signed [31:0] sext_ln708_8_fu_9987_p1;
wire   [31:0] trunc_ln708_19_fu_10030_p4;
wire   [31:0] add_ln703_20_fu_10615_p2;
wire   [31:0] add_ln703_19_fu_10609_p2;
wire   [31:0] add_ln703_21_fu_10621_p2;
wire   [31:0] add_ln703_18_fu_10603_p2;
wire  signed [31:0] sext_ln708_10_fu_10085_p1;
wire   [31:0] trunc_ln708_23_fu_10153_p4;
wire  signed [30:0] sext_ln1118_40_fu_10212_p1;
wire  signed [30:0] sext_ln1118_41_fu_10257_p1;
wire   [30:0] add_ln703_24_fu_10639_p2;
wire  signed [31:0] sext_ln703_3_fu_10645_p1;
wire   [31:0] add_ln703_23_fu_10633_p2;
wire  signed [31:0] sext_ln708_14_fu_10306_p1;
wire   [31:0] trunc_ln708_33_fu_10353_p4;
wire  signed [30:0] sext_ln1118_42_fu_10469_p1;
wire   [30:0] add_ln703_27_fu_10661_p2;
wire  signed [31:0] sext_ln703_4_fu_10667_p1;
wire   [31:0] trunc_ln708_36_fu_10406_p4;
wire   [31:0] add_ln703_28_fu_10671_p2;
wire   [31:0] add_ln703_26_fu_10655_p2;
wire   [31:0] add_ln703_29_fu_10677_p2;
wire   [31:0] add_ln703_25_fu_10649_p2;
wire   [31:0] add_ln703_30_fu_10683_p2;
wire   [31:0] add_ln703_22_fu_10627_p2;
wire  signed [31:0] sext_ln708_1_fu_9723_p1;
wire   [31:0] trunc_ln708_5_fu_9770_p4;
wire  signed [31:0] sext_ln708_5_fu_9825_p1;
wire   [31:0] trunc_ln708_10_fu_9856_p4;
wire   [31:0] add_ln703_33_fu_10701_p2;
wire   [31:0] add_ln703_32_fu_10695_p2;
wire   [31:0] trunc_ln708_13_fu_9893_p4;
wire  signed [31:0] sext_ln708_7_fu_9948_p1;
wire  signed [31:0] sext_ln708_9_fu_10001_p1;
wire   [31:0] trunc_ln708_20_fu_10040_p4;
wire   [31:0] add_ln703_36_fu_10719_p2;
wire   [31:0] add_ln703_35_fu_10713_p2;
wire   [31:0] add_ln703_37_fu_10725_p2;
wire   [31:0] add_ln703_34_fu_10707_p2;
wire  signed [31:0] sext_ln708_11_fu_10099_p1;
wire   [31:0] trunc_ln708_24_fu_10163_p4;
wire   [31:0] trunc_ln708_26_fu_10216_p4;
wire   [31:0] trunc_ln708_28_fu_10261_p4;
wire   [31:0] add_ln703_40_fu_10743_p2;
wire   [31:0] add_ln703_39_fu_10737_p2;
wire  signed [31:0] sext_ln708_15_fu_10320_p1;
wire  signed [31:0] sext_ln708_17_fu_10373_p1;
wire  signed [29:0] sext_ln703_fu_10483_p1;
wire   [29:0] add_ln703_43_fu_10761_p2;
wire  signed [31:0] sext_ln703_5_fu_10767_p1;
wire  signed [31:0] sext_ln708_19_fu_10426_p1;
wire   [31:0] add_ln703_44_fu_10771_p2;
wire   [31:0] add_ln703_42_fu_10755_p2;
wire   [31:0] add_ln703_45_fu_10777_p2;
wire   [31:0] add_ln703_41_fu_10749_p2;
wire   [31:0] add_ln703_46_fu_10783_p2;
wire   [31:0] add_ln703_38_fu_10731_p2;
wire   [31:0] add_ln703_15_fu_10585_p2;
wire   [31:0] acc_1_V_fu_10689_p2;
wire   [31:0] acc_2_V_fu_10789_p2;

assign acc_1_V_fu_10689_p2 = (add_ln703_30_fu_10683_p2 + add_ln703_22_fu_10627_p2);

assign acc_2_V_fu_10789_p2 = (add_ln703_46_fu_10783_p2 + add_ln703_38_fu_10731_p2);

assign add_ln703_10_fu_10555_p2 = ($signed(sext_ln708_13_fu_10292_p1) + $signed(sext_ln708_16_fu_10349_p1));

assign add_ln703_11_fu_10561_p2 = ($signed(sext_ln708_20_fu_10455_p1) + $signed(32'd27418));

assign add_ln703_12_fu_10567_p2 = ($signed(add_ln703_11_fu_10561_p2) + $signed(sext_ln708_18_fu_10402_p1));

assign add_ln703_13_fu_10573_p2 = (add_ln703_12_fu_10567_p2 + add_ln703_10_fu_10555_p2);

assign add_ln703_14_fu_10579_p2 = (add_ln703_13_fu_10573_p2 + add_ln703_9_fu_10549_p2);

assign add_ln703_15_fu_10585_p2 = (add_ln703_14_fu_10579_p2 + add_ln703_6_fu_10527_p2);

assign add_ln703_16_fu_10591_p2 = ($signed(trunc_ln708_1_fu_9703_p4) + $signed(sext_ln708_3_fu_9766_p1));

assign add_ln703_17_fu_10597_p2 = (trunc_ln708_7_fu_9805_p4 + trunc_ln708_8_fu_9846_p4);

assign add_ln703_18_fu_10603_p2 = (add_ln703_17_fu_10597_p2 + add_ln703_16_fu_10591_p2);

assign add_ln703_19_fu_10609_p2 = ($signed(trunc_ln708_12_fu_9883_p4) + $signed(sext_ln708_6_fu_9934_p1));

assign add_ln703_1_fu_10493_p2 = ($signed(sext_ln708_4_fu_9801_p1) + $signed(trunc_ln708_9_fu_9836_p4));

assign add_ln703_20_fu_10615_p2 = ($signed(sext_ln708_8_fu_9987_p1) + $signed(trunc_ln708_19_fu_10030_p4));

assign add_ln703_21_fu_10621_p2 = (add_ln703_20_fu_10615_p2 + add_ln703_19_fu_10609_p2);

assign add_ln703_22_fu_10627_p2 = (add_ln703_21_fu_10621_p2 + add_ln703_18_fu_10603_p2);

assign add_ln703_23_fu_10633_p2 = ($signed(sext_ln708_10_fu_10085_p1) + $signed(trunc_ln708_23_fu_10153_p4));

assign add_ln703_24_fu_10639_p2 = ($signed(sext_ln1118_40_fu_10212_p1) + $signed(sext_ln1118_41_fu_10257_p1));

assign add_ln703_25_fu_10649_p2 = ($signed(sext_ln703_3_fu_10645_p1) + $signed(add_ln703_23_fu_10633_p2));

assign add_ln703_26_fu_10655_p2 = ($signed(sext_ln708_14_fu_10306_p1) + $signed(trunc_ln708_33_fu_10353_p4));

assign add_ln703_27_fu_10661_p2 = ($signed(sext_ln1118_42_fu_10469_p1) + $signed(31'd19845));

assign add_ln703_28_fu_10671_p2 = ($signed(sext_ln703_4_fu_10667_p1) + $signed(trunc_ln708_36_fu_10406_p4));

assign add_ln703_29_fu_10677_p2 = (add_ln703_28_fu_10671_p2 + add_ln703_26_fu_10655_p2);

assign add_ln703_2_fu_10499_p2 = (add_ln703_1_fu_10493_p2 + add_ln703_fu_10487_p2);

assign add_ln703_30_fu_10683_p2 = (add_ln703_29_fu_10677_p2 + add_ln703_25_fu_10649_p2);

assign add_ln703_32_fu_10695_p2 = ($signed(sext_ln708_1_fu_9723_p1) + $signed(trunc_ln708_5_fu_9770_p4));

assign add_ln703_33_fu_10701_p2 = ($signed(sext_ln708_5_fu_9825_p1) + $signed(trunc_ln708_10_fu_9856_p4));

assign add_ln703_34_fu_10707_p2 = (add_ln703_33_fu_10701_p2 + add_ln703_32_fu_10695_p2);

assign add_ln703_35_fu_10713_p2 = ($signed(trunc_ln708_13_fu_9893_p4) + $signed(sext_ln708_7_fu_9948_p1));

assign add_ln703_36_fu_10719_p2 = ($signed(sext_ln708_9_fu_10001_p1) + $signed(trunc_ln708_20_fu_10040_p4));

assign add_ln703_37_fu_10725_p2 = (add_ln703_36_fu_10719_p2 + add_ln703_35_fu_10713_p2);

assign add_ln703_38_fu_10731_p2 = (add_ln703_37_fu_10725_p2 + add_ln703_34_fu_10707_p2);

assign add_ln703_39_fu_10737_p2 = ($signed(sext_ln708_11_fu_10099_p1) + $signed(trunc_ln708_24_fu_10163_p4));

assign add_ln703_3_fu_10505_p2 = (trunc_ln708_11_fu_9873_p4 + trunc_ln708_14_fu_9914_p4);

assign add_ln703_40_fu_10743_p2 = (trunc_ln708_26_fu_10216_p4 + trunc_ln708_28_fu_10261_p4);

assign add_ln703_41_fu_10749_p2 = (add_ln703_40_fu_10743_p2 + add_ln703_39_fu_10737_p2);

assign add_ln703_42_fu_10755_p2 = ($signed(sext_ln708_15_fu_10320_p1) + $signed(sext_ln708_17_fu_10373_p1));

assign add_ln703_43_fu_10761_p2 = ($signed(sext_ln703_fu_10483_p1) + $signed(30'd1073727563));

assign add_ln703_44_fu_10771_p2 = ($signed(sext_ln703_5_fu_10767_p1) + $signed(sext_ln708_19_fu_10426_p1));

assign add_ln703_45_fu_10777_p2 = (add_ln703_44_fu_10771_p2 + add_ln703_42_fu_10755_p2);

assign add_ln703_46_fu_10783_p2 = (add_ln703_45_fu_10777_p2 + add_ln703_41_fu_10749_p2);

assign add_ln703_4_fu_10511_p2 = ($signed(sext_ln1118_36_fu_9973_p1) + $signed(sext_ln1118_37_fu_10026_p1));

assign add_ln703_5_fu_10521_p2 = ($signed(sext_ln703_1_fu_10517_p1) + $signed(add_ln703_3_fu_10505_p2));

assign add_ln703_6_fu_10527_p2 = (add_ln703_5_fu_10521_p2 + add_ln703_2_fu_10499_p2);

assign add_ln703_7_fu_10533_p2 = ($signed(sext_ln1118_38_fu_10071_p1) + $signed(sext_ln1118_39_fu_10149_p1));

assign add_ln703_8_fu_10543_p2 = ($signed(sext_ln708_12_fu_10198_p1) + $signed(trunc_ln708_27_fu_10237_p4));

assign add_ln703_9_fu_10549_p2 = ($signed(add_ln703_8_fu_10543_p2) + $signed(sext_ln703_2_fu_10539_p1));

assign add_ln703_fu_10487_p2 = ($signed(sext_ln708_fu_9699_p1) + $signed(sext_ln708_2_fu_9752_p1));

assign ap_ready = 1'b1;

assign ap_return_0 = add_ln703_15_fu_10585_p2;

assign ap_return_1 = acc_1_V_fu_10689_p2;

assign ap_return_2 = acc_2_V_fu_10789_p2;

assign mul_ln1118_10_fu_313_p0 = sext_ln1118_7_fu_9829_p1;

assign mul_ln1118_10_fu_313_p2 = ($signed(mul_ln1118_10_fu_313_p0) * $signed('h6C2D));

assign mul_ln1118_11_fu_281_p0 = sext_ln1118_7_fu_9829_p1;

assign mul_ln1118_11_fu_281_p2 = ($signed(mul_ln1118_11_fu_281_p0) * $signed('h5A95));

assign mul_ln1118_12_fu_322_p0 = sext_ln1118_8_fu_9866_p1;

assign mul_ln1118_12_fu_322_p2 = ($signed(mul_ln1118_12_fu_322_p0) * $signed('h44DA));

assign mul_ln1118_13_fu_314_p0 = sext_ln1118_8_fu_9866_p1;

assign mul_ln1118_13_fu_314_p2 = ($signed(mul_ln1118_13_fu_314_p0) * $signed(-48'h927A));

assign mul_ln1118_14_fu_311_p0 = sext_ln1118_8_fu_9866_p1;

assign mul_ln1118_14_fu_311_p2 = ($signed(mul_ln1118_14_fu_311_p0) * $signed(-48'h7DB9));

assign mul_ln1118_15_fu_291_p0 = sext_ln1118_10_fu_9909_p0;

assign mul_ln1118_15_fu_291_p2 = ($signed(mul_ln1118_15_fu_291_p0) * $signed(-48'h49EF));

assign mul_ln1118_16_fu_320_p0 = sext_ln1118_9_fu_9903_p1;

assign mul_ln1118_16_fu_320_p2 = ($signed(mul_ln1118_16_fu_320_p0) * $signed(-44'h6FE));

assign mul_ln1118_17_fu_301_p0 = sext_ln1118_9_fu_9903_p1;

assign mul_ln1118_17_fu_301_p2 = ($signed(mul_ln1118_17_fu_301_p0) * $signed(-44'h716));

assign mul_ln1118_18_fu_292_p0 = sext_ln1118_12_fu_9957_p1;

assign mul_ln1118_18_fu_292_p2 = ($signed(mul_ln1118_18_fu_292_p0) * $signed('h132A));

assign mul_ln1118_19_fu_289_p0 = sext_ln1118_12_fu_9957_p1;

assign mul_ln1118_19_fu_289_p2 = ($signed(mul_ln1118_19_fu_289_p0) * $signed(-46'h121A));

assign mul_ln1118_1_fu_309_p0 = sext_ln1118_fu_9678_p0;

assign mul_ln1118_1_fu_309_p2 = ($signed(mul_ln1118_1_fu_309_p0) * $signed(-48'h4B71));

assign mul_ln1118_20_fu_293_p0 = sext_ln1118_11_fu_9952_p0;

assign mul_ln1118_20_fu_293_p2 = ($signed(mul_ln1118_20_fu_293_p0) * $signed(-47'h3FE7));

assign mul_ln1118_21_fu_306_p0 = sext_ln1118_14_fu_10011_p0;

assign mul_ln1118_21_fu_306_p2 = ($signed(mul_ln1118_21_fu_306_p0) * $signed('h791));

assign mul_ln1118_22_fu_279_p0 = sext_ln1118_13_fu_10005_p1;

assign mul_ln1118_22_fu_279_p2 = ($signed(mul_ln1118_22_fu_279_p0) * $signed(-48'h5B8A));

assign mul_ln1118_23_fu_295_p0 = sext_ln1118_13_fu_10005_p1;

assign mul_ln1118_23_fu_295_p2 = ($signed(mul_ln1118_23_fu_295_p0) * $signed('h5EAD));

assign mul_ln1118_24_fu_319_p0 = sext_ln1118_16_fu_10056_p0;

assign mul_ln1118_24_fu_319_p2 = ($signed(mul_ln1118_24_fu_319_p0) * $signed('h1ED6));

assign mul_ln1118_25_fu_312_p0 = sext_ln1118_15_fu_10050_p1;

assign mul_ln1118_25_fu_312_p2 = ($signed(mul_ln1118_25_fu_312_p0) * $signed(-47'h2A4E));

assign mul_ln1118_26_fu_284_p0 = sext_ln1118_15_fu_10050_p1;

assign mul_ln1118_26_fu_284_p2 = ($signed(mul_ln1118_26_fu_284_p0) * $signed(-47'h2577));

assign mul_ln1118_27_fu_286_p0 = sext_ln1118_17_fu_10103_p1;

assign mul_ln1118_27_fu_286_p2 = ($signed(mul_ln1118_27_fu_286_p0) * $signed('h6840));

assign mul_ln1118_28_fu_315_p0 = sext_ln1118_17_fu_10103_p1;

assign mul_ln1118_28_fu_315_p2 = ($signed(mul_ln1118_28_fu_315_p0) * $signed(-48'h4B97));

assign mul_ln1118_29_fu_297_p0 = sext_ln1118_22_fu_10183_p0;

assign mul_ln1118_29_fu_297_p2 = ($signed(mul_ln1118_29_fu_297_p0) * $signed('h110B));

assign mul_ln1118_2_fu_285_p0 = sext_ln1118_1_fu_9683_p1;

assign mul_ln1118_2_fu_285_p2 = ($signed(mul_ln1118_2_fu_285_p0) * $signed(-47'h252C));

assign mul_ln1118_30_fu_299_p0 = sext_ln1118_21_fu_10178_p0;

assign mul_ln1118_30_fu_299_p2 = ($signed(mul_ln1118_30_fu_299_p0) * $signed(-45'hB5B));

assign mul_ln1118_31_fu_323_p0 = sext_ln1118_20_fu_10173_p0;

assign mul_ln1118_31_fu_323_p2 = ($signed(mul_ln1118_31_fu_323_p0) * $signed('h5BD6));

assign mul_ln1118_32_fu_283_p0 = sext_ln1118_24_fu_10231_p1;

assign mul_ln1118_32_fu_283_p2 = ($signed(mul_ln1118_32_fu_283_p0) * $signed('h42C6));

assign mul_ln1118_33_fu_287_p0 = sext_ln1118_23_fu_10226_p0;

assign mul_ln1118_33_fu_287_p2 = ($signed(mul_ln1118_33_fu_287_p0) * $signed('h1DB6));

assign mul_ln1118_34_fu_276_p0 = sext_ln1118_24_fu_10231_p1;

assign mul_ln1118_34_fu_276_p2 = ($signed(mul_ln1118_34_fu_276_p0) * $signed('h592E));

assign mul_ln1118_35_fu_277_p0 = sext_ln1118_26_fu_10276_p1;

assign mul_ln1118_35_fu_277_p2 = ($signed(mul_ln1118_35_fu_277_p0) * $signed(-47'h2DDA));

assign mul_ln1118_36_fu_317_p0 = sext_ln1118_26_fu_10276_p1;

assign mul_ln1118_36_fu_317_p2 = ($signed(mul_ln1118_36_fu_317_p0) * $signed(-47'h224D));

assign mul_ln1118_37_fu_321_p0 = sext_ln1118_25_fu_10271_p0;

assign mul_ln1118_37_fu_321_p2 = ($signed(mul_ln1118_37_fu_321_p0) * $signed(-44'h43D));

assign mul_ln1118_38_fu_294_p0 = sext_ln1118_29_fu_10334_p0;

assign mul_ln1118_38_fu_294_p2 = ($signed(mul_ln1118_38_fu_294_p0) * $signed('h11AE));

assign mul_ln1118_39_fu_278_p0 = sext_ln1118_28_fu_10329_p0;

assign mul_ln1118_39_fu_278_p2 = ($signed(mul_ln1118_39_fu_278_p0) * $signed('h76CF));

assign mul_ln1118_3_fu_316_p0 = sext_ln1118_4_fu_9737_p0;

assign mul_ln1118_3_fu_316_p2 = ($signed(mul_ln1118_3_fu_316_p0) * $signed(-44'h582));

assign mul_ln1118_40_fu_296_p0 = sext_ln1118_27_fu_10324_p0;

assign mul_ln1118_40_fu_296_p2 = ($signed(mul_ln1118_40_fu_296_p0) * $signed('h275A));

assign mul_ln1118_41_fu_303_p0 = sext_ln1118_32_fu_10387_p0;

assign mul_ln1118_41_fu_303_p2 = ($signed(mul_ln1118_41_fu_303_p0) * $signed('h5C6));

assign mul_ln1118_42_fu_282_p0 = sext_ln1118_31_fu_10382_p0;

assign mul_ln1118_42_fu_282_p2 = ($signed(mul_ln1118_42_fu_282_p0) * $signed(-48'h5730));

assign mul_ln1118_43_fu_310_p0 = sext_ln1118_30_fu_10377_p0;

assign mul_ln1118_43_fu_310_p2 = ($signed(mul_ln1118_43_fu_310_p0) * $signed('h262C));

assign mul_ln1118_44_fu_280_p0 = sext_ln1118_35_fu_10440_p0;

assign mul_ln1118_44_fu_280_p2 = ($signed(mul_ln1118_44_fu_280_p0) * $signed('h20CA));

assign mul_ln1118_45_fu_305_p0 = sext_ln1118_34_fu_10435_p0;

assign mul_ln1118_45_fu_305_p2 = ($signed(mul_ln1118_45_fu_305_p0) * $signed('h1700));

assign mul_ln1118_46_fu_290_p0 = sext_ln1118_33_fu_10430_p0;

assign mul_ln1118_46_fu_290_p2 = ($signed(mul_ln1118_46_fu_290_p0) * $signed('hF8D));

assign mul_ln1118_4_fu_318_p0 = sext_ln1118_3_fu_9732_p0;

assign mul_ln1118_4_fu_318_p2 = ($signed(mul_ln1118_4_fu_318_p0) * $signed('h23E9));

assign mul_ln1118_5_fu_298_p0 = sext_ln1118_2_fu_9727_p0;

assign mul_ln1118_5_fu_298_p2 = ($signed(mul_ln1118_5_fu_298_p0) * $signed(-48'h68D7));

assign mul_ln1118_6_fu_300_p0 = sext_ln1118_6_fu_9785_p1;

assign mul_ln1118_6_fu_300_p2 = ($signed(mul_ln1118_6_fu_300_p0) * $signed('h9D2));

assign mul_ln1118_7_fu_307_p0 = sext_ln1118_5_fu_9780_p0;

assign mul_ln1118_7_fu_307_p2 = ($signed(mul_ln1118_7_fu_307_p0) * $signed('h538A));

assign mul_ln1118_8_fu_304_p0 = sext_ln1118_6_fu_9785_p1;

assign mul_ln1118_8_fu_304_p2 = ($signed(mul_ln1118_8_fu_304_p0) * $signed(-45'hA91));

assign mul_ln1118_9_fu_288_p0 = sext_ln1118_7_fu_9829_p1;

assign mul_ln1118_9_fu_288_p2 = ($signed(mul_ln1118_9_fu_288_p0) * $signed(-48'h52A8));

assign mul_ln1118_fu_302_p0 = sext_ln1118_1_fu_9683_p1;

assign mul_ln1118_fu_302_p2 = ($signed(mul_ln1118_fu_302_p0) * $signed(-47'h28DA));

assign sext_ln1118_10_fu_9909_p0 = data_5_V_read;

assign sext_ln1118_11_fu_9952_p0 = data_6_V_read;

assign sext_ln1118_12_fu_9957_p0 = data_6_V_read;

assign sext_ln1118_12_fu_9957_p1 = sext_ln1118_12_fu_9957_p0;

assign sext_ln1118_13_fu_10005_p0 = data_7_V_read;

assign sext_ln1118_13_fu_10005_p1 = sext_ln1118_13_fu_10005_p0;

assign sext_ln1118_14_fu_10011_p0 = data_7_V_read;

assign sext_ln1118_15_fu_10050_p0 = data_8_V_read;

assign sext_ln1118_15_fu_10050_p1 = sext_ln1118_15_fu_10050_p0;

assign sext_ln1118_16_fu_10056_p0 = data_8_V_read;

assign sext_ln1118_17_fu_10103_p0 = data_9_V_read;

assign sext_ln1118_17_fu_10103_p1 = sext_ln1118_17_fu_10103_p0;

assign sext_ln1118_18_fu_10117_p1 = $signed(shl_ln_fu_10109_p3);

assign sext_ln1118_19_fu_10129_p1 = $signed(shl_ln1118_s_fu_10121_p3);

assign sext_ln1118_1_fu_9683_p0 = data_0_V_read;

assign sext_ln1118_1_fu_9683_p1 = sext_ln1118_1_fu_9683_p0;

assign sext_ln1118_20_fu_10173_p0 = data_10_V_read;

assign sext_ln1118_21_fu_10178_p0 = data_10_V_read;

assign sext_ln1118_22_fu_10183_p0 = data_10_V_read;

assign sext_ln1118_23_fu_10226_p0 = data_11_V_read;

assign sext_ln1118_24_fu_10231_p0 = data_11_V_read;

assign sext_ln1118_24_fu_10231_p1 = sext_ln1118_24_fu_10231_p0;

assign sext_ln1118_25_fu_10271_p0 = data_12_V_read;

assign sext_ln1118_26_fu_10276_p0 = data_12_V_read;

assign sext_ln1118_26_fu_10276_p1 = sext_ln1118_26_fu_10276_p0;

assign sext_ln1118_27_fu_10324_p0 = data_13_V_read;

assign sext_ln1118_28_fu_10329_p0 = data_13_V_read;

assign sext_ln1118_29_fu_10334_p0 = data_13_V_read;

assign sext_ln1118_2_fu_9727_p0 = data_1_V_read;

assign sext_ln1118_30_fu_10377_p0 = data_14_V_read;

assign sext_ln1118_31_fu_10382_p0 = data_14_V_read;

assign sext_ln1118_32_fu_10387_p0 = data_14_V_read;

assign sext_ln1118_33_fu_10430_p0 = data_15_V_read;

assign sext_ln1118_34_fu_10435_p0 = data_15_V_read;

assign sext_ln1118_35_fu_10440_p0 = data_15_V_read;

assign sext_ln1118_36_fu_9973_p1 = $signed(tmp_fu_9963_p4);

assign sext_ln1118_37_fu_10026_p1 = $signed(tmp_1_fu_10016_p4);

assign sext_ln1118_38_fu_10071_p1 = $signed(tmp_2_fu_10061_p4);

assign sext_ln1118_39_fu_10149_p1 = $signed(tmp_3_fu_10139_p4);

assign sext_ln1118_3_fu_9732_p0 = data_1_V_read;

assign sext_ln1118_40_fu_10212_p1 = $signed(tmp_4_fu_10202_p4);

assign sext_ln1118_41_fu_10257_p1 = $signed(tmp_5_fu_10247_p4);

assign sext_ln1118_42_fu_10469_p1 = $signed(tmp_6_fu_10459_p4);

assign sext_ln1118_4_fu_9737_p0 = data_1_V_read;

assign sext_ln1118_5_fu_9780_p0 = data_2_V_read;

assign sext_ln1118_6_fu_9785_p0 = data_2_V_read;

assign sext_ln1118_6_fu_9785_p1 = sext_ln1118_6_fu_9785_p0;

assign sext_ln1118_7_fu_9829_p1 = $signed(data_3_V_read);

assign sext_ln1118_8_fu_9866_p1 = $signed(data_4_V_read);

assign sext_ln1118_9_fu_9903_p0 = data_5_V_read;

assign sext_ln1118_9_fu_9903_p1 = sext_ln1118_9_fu_9903_p0;

assign sext_ln1118_fu_9678_p0 = data_0_V_read;

assign sext_ln703_1_fu_10517_p1 = $signed(add_ln703_4_fu_10511_p2);

assign sext_ln703_2_fu_10539_p1 = $signed(add_ln703_7_fu_10533_p2);

assign sext_ln703_3_fu_10645_p1 = $signed(add_ln703_24_fu_10639_p2);

assign sext_ln703_4_fu_10667_p1 = $signed(add_ln703_27_fu_10661_p2);

assign sext_ln703_5_fu_10767_p1 = $signed(add_ln703_43_fu_10761_p2);

assign sext_ln703_fu_10483_p1 = $signed(tmp_7_fu_10473_p4);

assign sext_ln708_10_fu_10085_p1 = $signed(trunc_ln708_21_fu_10075_p4);

assign sext_ln708_11_fu_10099_p1 = $signed(trunc_ln708_22_fu_10089_p4);

assign sext_ln708_12_fu_10198_p1 = $signed(trunc_ln708_25_fu_10188_p4);

assign sext_ln708_13_fu_10292_p1 = $signed(trunc_ln708_29_fu_10282_p4);

assign sext_ln708_14_fu_10306_p1 = $signed(trunc_ln708_30_fu_10296_p4);

assign sext_ln708_15_fu_10320_p1 = $signed(trunc_ln708_31_fu_10310_p4);

assign sext_ln708_16_fu_10349_p1 = $signed(trunc_ln708_32_fu_10339_p4);

assign sext_ln708_17_fu_10373_p1 = $signed(trunc_ln708_34_fu_10363_p4);

assign sext_ln708_18_fu_10402_p1 = $signed(trunc_ln708_35_fu_10392_p4);

assign sext_ln708_19_fu_10426_p1 = $signed(trunc_ln708_37_fu_10416_p4);

assign sext_ln708_1_fu_9723_p1 = $signed(trunc_ln708_s_fu_9713_p4);

assign sext_ln708_20_fu_10455_p1 = $signed(trunc_ln708_38_fu_10445_p4);

assign sext_ln708_2_fu_9752_p1 = $signed(trunc_ln708_2_fu_9742_p4);

assign sext_ln708_3_fu_9766_p1 = $signed(trunc_ln708_3_fu_9756_p4);

assign sext_ln708_4_fu_9801_p1 = $signed(trunc_ln708_4_fu_9791_p4);

assign sext_ln708_5_fu_9825_p1 = $signed(trunc_ln708_6_fu_9815_p4);

assign sext_ln708_6_fu_9934_p1 = $signed(trunc_ln708_15_fu_9924_p4);

assign sext_ln708_7_fu_9948_p1 = $signed(trunc_ln708_16_fu_9938_p4);

assign sext_ln708_8_fu_9987_p1 = $signed(trunc_ln708_17_fu_9977_p4);

assign sext_ln708_9_fu_10001_p1 = $signed(trunc_ln708_18_fu_9991_p4);

assign sext_ln708_fu_9699_p1 = $signed(trunc_ln_fu_9689_p4);

assign shl_ln1118_s_fu_10121_p1 = data_9_V_read;

assign shl_ln1118_s_fu_10121_p3 = {{shl_ln1118_s_fu_10121_p1}, {3'd0}};

assign shl_ln_fu_10109_p1 = data_9_V_read;

assign shl_ln_fu_10109_p3 = {{shl_ln_fu_10109_p1}, {11'd0}};

assign sub_ln1118_fu_10133_p2 = ($signed(sext_ln1118_19_fu_10129_p1) - $signed(sext_ln1118_18_fu_10117_p1));

assign tmp_1_fu_10016_p4 = {{mul_ln1118_21_fu_306_p2[43:16]}};

assign tmp_2_fu_10061_p4 = {{mul_ln1118_24_fu_319_p2[45:16]}};

assign tmp_3_fu_10139_p4 = {{sub_ln1118_fu_10133_p2[43:16]}};

assign tmp_4_fu_10202_p4 = {{mul_ln1118_30_fu_299_p2[44:16]}};

assign tmp_5_fu_10247_p4 = {{mul_ln1118_33_fu_287_p2[45:16]}};

assign tmp_6_fu_10459_p4 = {{mul_ln1118_45_fu_305_p2[45:16]}};

assign tmp_7_fu_10473_p4 = {{mul_ln1118_46_fu_290_p2[44:16]}};

assign tmp_fu_9963_p4 = {{mul_ln1118_18_fu_292_p2[45:16]}};

assign trunc_ln708_10_fu_9856_p4 = {{mul_ln1118_11_fu_281_p2[47:16]}};

assign trunc_ln708_11_fu_9873_p4 = {{mul_ln1118_12_fu_322_p2[47:16]}};

assign trunc_ln708_12_fu_9883_p4 = {{mul_ln1118_13_fu_314_p2[47:16]}};

assign trunc_ln708_13_fu_9893_p4 = {{mul_ln1118_14_fu_311_p2[47:16]}};

assign trunc_ln708_14_fu_9914_p4 = {{mul_ln1118_15_fu_291_p2[47:16]}};

assign trunc_ln708_15_fu_9924_p4 = {{mul_ln1118_16_fu_320_p2[43:16]}};

assign trunc_ln708_16_fu_9938_p4 = {{mul_ln1118_17_fu_301_p2[43:16]}};

assign trunc_ln708_17_fu_9977_p4 = {{mul_ln1118_19_fu_289_p2[45:16]}};

assign trunc_ln708_18_fu_9991_p4 = {{mul_ln1118_20_fu_293_p2[46:16]}};

assign trunc_ln708_19_fu_10030_p4 = {{mul_ln1118_22_fu_279_p2[47:16]}};

assign trunc_ln708_1_fu_9703_p4 = {{mul_ln1118_1_fu_309_p2[47:16]}};

assign trunc_ln708_20_fu_10040_p4 = {{mul_ln1118_23_fu_295_p2[47:16]}};

assign trunc_ln708_21_fu_10075_p4 = {{mul_ln1118_25_fu_312_p2[46:16]}};

assign trunc_ln708_22_fu_10089_p4 = {{mul_ln1118_26_fu_284_p2[46:16]}};

assign trunc_ln708_23_fu_10153_p4 = {{mul_ln1118_27_fu_286_p2[47:16]}};

assign trunc_ln708_24_fu_10163_p4 = {{mul_ln1118_28_fu_315_p2[47:16]}};

assign trunc_ln708_25_fu_10188_p4 = {{mul_ln1118_29_fu_297_p2[45:16]}};

assign trunc_ln708_26_fu_10216_p4 = {{mul_ln1118_31_fu_323_p2[47:16]}};

assign trunc_ln708_27_fu_10237_p4 = {{mul_ln1118_32_fu_283_p2[47:16]}};

assign trunc_ln708_28_fu_10261_p4 = {{mul_ln1118_34_fu_276_p2[47:16]}};

assign trunc_ln708_29_fu_10282_p4 = {{mul_ln1118_35_fu_277_p2[46:16]}};

assign trunc_ln708_2_fu_9742_p4 = {{mul_ln1118_3_fu_316_p2[43:16]}};

assign trunc_ln708_30_fu_10296_p4 = {{mul_ln1118_36_fu_317_p2[46:16]}};

assign trunc_ln708_31_fu_10310_p4 = {{mul_ln1118_37_fu_321_p2[43:16]}};

assign trunc_ln708_32_fu_10339_p4 = {{mul_ln1118_38_fu_294_p2[45:16]}};

assign trunc_ln708_33_fu_10353_p4 = {{mul_ln1118_39_fu_278_p2[47:16]}};

assign trunc_ln708_34_fu_10363_p4 = {{mul_ln1118_40_fu_296_p2[46:16]}};

assign trunc_ln708_35_fu_10392_p4 = {{mul_ln1118_41_fu_303_p2[43:16]}};

assign trunc_ln708_36_fu_10406_p4 = {{mul_ln1118_42_fu_282_p2[47:16]}};

assign trunc_ln708_37_fu_10416_p4 = {{mul_ln1118_43_fu_310_p2[46:16]}};

assign trunc_ln708_38_fu_10445_p4 = {{mul_ln1118_44_fu_280_p2[46:16]}};

assign trunc_ln708_3_fu_9756_p4 = {{mul_ln1118_4_fu_318_p2[46:16]}};

assign trunc_ln708_4_fu_9791_p4 = {{mul_ln1118_6_fu_300_p2[44:16]}};

assign trunc_ln708_5_fu_9770_p4 = {{mul_ln1118_5_fu_298_p2[47:16]}};

assign trunc_ln708_6_fu_9815_p4 = {{mul_ln1118_8_fu_304_p2[44:16]}};

assign trunc_ln708_7_fu_9805_p4 = {{mul_ln1118_7_fu_307_p2[47:16]}};

assign trunc_ln708_8_fu_9846_p4 = {{mul_ln1118_10_fu_313_p2[47:16]}};

assign trunc_ln708_9_fu_9836_p4 = {{mul_ln1118_9_fu_288_p2[47:16]}};

assign trunc_ln708_s_fu_9713_p4 = {{mul_ln1118_2_fu_285_p2[46:16]}};

assign trunc_ln_fu_9689_p4 = {{mul_ln1118_fu_302_p2[46:16]}};

endmodule //dense_latency_ap_fixed_ap_fixed_32_16_5_3_0_config8_0_0_0_0

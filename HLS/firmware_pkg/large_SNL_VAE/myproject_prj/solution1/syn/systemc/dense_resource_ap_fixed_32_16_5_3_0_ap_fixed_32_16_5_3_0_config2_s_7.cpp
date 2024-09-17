#include "dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1256_fu_70781_p0() {
    mul_ln1118_1256_fu_70781_p0 = tmp_1350_fu_70767_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1256_fu_70781_p1() {
    mul_ln1118_1256_fu_70781_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1256_fu_70781_p2() {
    mul_ln1118_1256_fu_70781_p2 = (!mul_ln1118_1256_fu_70781_p0.read().is_01() || !mul_ln1118_1256_fu_70781_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1256_fu_70781_p0.read()) * sc_bigint<32>(mul_ln1118_1256_fu_70781_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1257_fu_70811_p0() {
    mul_ln1118_1257_fu_70811_p0 = tmp_1351_fu_70797_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1257_fu_70811_p1() {
    mul_ln1118_1257_fu_70811_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1257_fu_70811_p2() {
    mul_ln1118_1257_fu_70811_p2 = (!mul_ln1118_1257_fu_70811_p0.read().is_01() || !mul_ln1118_1257_fu_70811_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1257_fu_70811_p0.read()) * sc_bigint<32>(mul_ln1118_1257_fu_70811_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1258_fu_70841_p0() {
    mul_ln1118_1258_fu_70841_p0 = tmp_1352_fu_70827_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1258_fu_70841_p1() {
    mul_ln1118_1258_fu_70841_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1258_fu_70841_p2() {
    mul_ln1118_1258_fu_70841_p2 = (!mul_ln1118_1258_fu_70841_p0.read().is_01() || !mul_ln1118_1258_fu_70841_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1258_fu_70841_p0.read()) * sc_bigint<32>(mul_ln1118_1258_fu_70841_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1259_fu_70871_p0() {
    mul_ln1118_1259_fu_70871_p0 = tmp_1353_fu_70857_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1259_fu_70871_p1() {
    mul_ln1118_1259_fu_70871_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1259_fu_70871_p2() {
    mul_ln1118_1259_fu_70871_p2 = (!mul_ln1118_1259_fu_70871_p0.read().is_01() || !mul_ln1118_1259_fu_70871_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1259_fu_70871_p0.read()) * sc_bigint<32>(mul_ln1118_1259_fu_70871_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_125_fu_29840_p0() {
    mul_ln1118_125_fu_29840_p0 = tmp_144_fu_29826_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_125_fu_29840_p1() {
    mul_ln1118_125_fu_29840_p1 =  (sc_lv<32>) (sext_ln1116_11_cast_fu_25708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_125_fu_29840_p2() {
    mul_ln1118_125_fu_29840_p2 = (!mul_ln1118_125_fu_29840_p0.read().is_01() || !mul_ln1118_125_fu_29840_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_125_fu_29840_p0.read()) * sc_bigint<32>(mul_ln1118_125_fu_29840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1260_fu_70901_p0() {
    mul_ln1118_1260_fu_70901_p0 = tmp_1354_fu_70887_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1260_fu_70901_p1() {
    mul_ln1118_1260_fu_70901_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1260_fu_70901_p2() {
    mul_ln1118_1260_fu_70901_p2 = (!mul_ln1118_1260_fu_70901_p0.read().is_01() || !mul_ln1118_1260_fu_70901_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1260_fu_70901_p0.read()) * sc_bigint<32>(mul_ln1118_1260_fu_70901_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1261_fu_70931_p0() {
    mul_ln1118_1261_fu_70931_p0 = tmp_1355_fu_70917_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1261_fu_70931_p1() {
    mul_ln1118_1261_fu_70931_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1261_fu_70931_p2() {
    mul_ln1118_1261_fu_70931_p2 = (!mul_ln1118_1261_fu_70931_p0.read().is_01() || !mul_ln1118_1261_fu_70931_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1261_fu_70931_p0.read()) * sc_bigint<32>(mul_ln1118_1261_fu_70931_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1262_fu_70961_p0() {
    mul_ln1118_1262_fu_70961_p0 = tmp_1356_fu_70947_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1262_fu_70961_p1() {
    mul_ln1118_1262_fu_70961_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1262_fu_70961_p2() {
    mul_ln1118_1262_fu_70961_p2 = (!mul_ln1118_1262_fu_70961_p0.read().is_01() || !mul_ln1118_1262_fu_70961_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1262_fu_70961_p0.read()) * sc_bigint<32>(mul_ln1118_1262_fu_70961_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1263_fu_70991_p0() {
    mul_ln1118_1263_fu_70991_p0 = tmp_1357_fu_70977_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1263_fu_70991_p1() {
    mul_ln1118_1263_fu_70991_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1263_fu_70991_p2() {
    mul_ln1118_1263_fu_70991_p2 = (!mul_ln1118_1263_fu_70991_p0.read().is_01() || !mul_ln1118_1263_fu_70991_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1263_fu_70991_p0.read()) * sc_bigint<32>(mul_ln1118_1263_fu_70991_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1264_fu_71021_p0() {
    mul_ln1118_1264_fu_71021_p0 = tmp_1358_fu_71007_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1264_fu_71021_p1() {
    mul_ln1118_1264_fu_71021_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1264_fu_71021_p2() {
    mul_ln1118_1264_fu_71021_p2 = (!mul_ln1118_1264_fu_71021_p0.read().is_01() || !mul_ln1118_1264_fu_71021_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1264_fu_71021_p0.read()) * sc_bigint<32>(mul_ln1118_1264_fu_71021_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1265_fu_71051_p0() {
    mul_ln1118_1265_fu_71051_p0 = tmp_1359_fu_71037_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1265_fu_71051_p1() {
    mul_ln1118_1265_fu_71051_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1265_fu_71051_p2() {
    mul_ln1118_1265_fu_71051_p2 = (!mul_ln1118_1265_fu_71051_p0.read().is_01() || !mul_ln1118_1265_fu_71051_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1265_fu_71051_p0.read()) * sc_bigint<32>(mul_ln1118_1265_fu_71051_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1266_fu_71081_p0() {
    mul_ln1118_1266_fu_71081_p0 = tmp_1360_fu_71067_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1266_fu_71081_p1() {
    mul_ln1118_1266_fu_71081_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1266_fu_71081_p2() {
    mul_ln1118_1266_fu_71081_p2 = (!mul_ln1118_1266_fu_71081_p0.read().is_01() || !mul_ln1118_1266_fu_71081_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1266_fu_71081_p0.read()) * sc_bigint<32>(mul_ln1118_1266_fu_71081_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1267_fu_71111_p0() {
    mul_ln1118_1267_fu_71111_p0 = tmp_1361_fu_71097_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1267_fu_71111_p1() {
    mul_ln1118_1267_fu_71111_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1267_fu_71111_p2() {
    mul_ln1118_1267_fu_71111_p2 = (!mul_ln1118_1267_fu_71111_p0.read().is_01() || !mul_ln1118_1267_fu_71111_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1267_fu_71111_p0.read()) * sc_bigint<32>(mul_ln1118_1267_fu_71111_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1268_fu_71141_p0() {
    mul_ln1118_1268_fu_71141_p0 = tmp_1362_fu_71127_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1268_fu_71141_p1() {
    mul_ln1118_1268_fu_71141_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1268_fu_71141_p2() {
    mul_ln1118_1268_fu_71141_p2 = (!mul_ln1118_1268_fu_71141_p0.read().is_01() || !mul_ln1118_1268_fu_71141_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1268_fu_71141_p0.read()) * sc_bigint<32>(mul_ln1118_1268_fu_71141_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1269_fu_71171_p0() {
    mul_ln1118_1269_fu_71171_p0 = tmp_1363_fu_71157_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1269_fu_71171_p1() {
    mul_ln1118_1269_fu_71171_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1269_fu_71171_p2() {
    mul_ln1118_1269_fu_71171_p2 = (!mul_ln1118_1269_fu_71171_p0.read().is_01() || !mul_ln1118_1269_fu_71171_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1269_fu_71171_p0.read()) * sc_bigint<32>(mul_ln1118_1269_fu_71171_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_126_fu_29870_p0() {
    mul_ln1118_126_fu_29870_p0 = tmp_145_fu_29856_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_126_fu_29870_p1() {
    mul_ln1118_126_fu_29870_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_126_fu_29870_p2() {
    mul_ln1118_126_fu_29870_p2 = (!mul_ln1118_126_fu_29870_p0.read().is_01() || !mul_ln1118_126_fu_29870_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_126_fu_29870_p0.read()) * sc_bigint<32>(mul_ln1118_126_fu_29870_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1270_fu_71201_p0() {
    mul_ln1118_1270_fu_71201_p0 = tmp_1364_fu_71187_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1270_fu_71201_p1() {
    mul_ln1118_1270_fu_71201_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1270_fu_71201_p2() {
    mul_ln1118_1270_fu_71201_p2 = (!mul_ln1118_1270_fu_71201_p0.read().is_01() || !mul_ln1118_1270_fu_71201_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1270_fu_71201_p0.read()) * sc_bigint<32>(mul_ln1118_1270_fu_71201_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1271_fu_71231_p0() {
    mul_ln1118_1271_fu_71231_p0 = tmp_1365_fu_71217_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1271_fu_71231_p1() {
    mul_ln1118_1271_fu_71231_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1271_fu_71231_p2() {
    mul_ln1118_1271_fu_71231_p2 = (!mul_ln1118_1271_fu_71231_p0.read().is_01() || !mul_ln1118_1271_fu_71231_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1271_fu_71231_p0.read()) * sc_bigint<32>(mul_ln1118_1271_fu_71231_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1272_fu_71261_p0() {
    mul_ln1118_1272_fu_71261_p0 = tmp_1366_fu_71247_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1272_fu_71261_p1() {
    mul_ln1118_1272_fu_71261_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1272_fu_71261_p2() {
    mul_ln1118_1272_fu_71261_p2 = (!mul_ln1118_1272_fu_71261_p0.read().is_01() || !mul_ln1118_1272_fu_71261_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1272_fu_71261_p0.read()) * sc_bigint<32>(mul_ln1118_1272_fu_71261_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1273_fu_71405_p0() {
    mul_ln1118_1273_fu_71405_p0 = tmp_1367_fu_71391_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1273_fu_71405_p1() {
    mul_ln1118_1273_fu_71405_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1273_fu_71405_p2() {
    mul_ln1118_1273_fu_71405_p2 = (!mul_ln1118_1273_fu_71405_p0.read().is_01() || !mul_ln1118_1273_fu_71405_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1273_fu_71405_p0.read()) * sc_bigint<32>(mul_ln1118_1273_fu_71405_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1274_fu_71435_p0() {
    mul_ln1118_1274_fu_71435_p0 = tmp_1368_fu_71421_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1274_fu_71435_p1() {
    mul_ln1118_1274_fu_71435_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1274_fu_71435_p2() {
    mul_ln1118_1274_fu_71435_p2 = (!mul_ln1118_1274_fu_71435_p0.read().is_01() || !mul_ln1118_1274_fu_71435_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1274_fu_71435_p0.read()) * sc_bigint<32>(mul_ln1118_1274_fu_71435_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1275_fu_71465_p0() {
    mul_ln1118_1275_fu_71465_p0 = tmp_1369_fu_71451_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1275_fu_71465_p1() {
    mul_ln1118_1275_fu_71465_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1275_fu_71465_p2() {
    mul_ln1118_1275_fu_71465_p2 = (!mul_ln1118_1275_fu_71465_p0.read().is_01() || !mul_ln1118_1275_fu_71465_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1275_fu_71465_p0.read()) * sc_bigint<32>(mul_ln1118_1275_fu_71465_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1276_fu_71495_p0() {
    mul_ln1118_1276_fu_71495_p0 = tmp_1370_fu_71481_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1276_fu_71495_p1() {
    mul_ln1118_1276_fu_71495_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1276_fu_71495_p2() {
    mul_ln1118_1276_fu_71495_p2 = (!mul_ln1118_1276_fu_71495_p0.read().is_01() || !mul_ln1118_1276_fu_71495_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1276_fu_71495_p0.read()) * sc_bigint<32>(mul_ln1118_1276_fu_71495_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1277_fu_71525_p0() {
    mul_ln1118_1277_fu_71525_p0 = tmp_1371_fu_71511_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1277_fu_71525_p1() {
    mul_ln1118_1277_fu_71525_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1277_fu_71525_p2() {
    mul_ln1118_1277_fu_71525_p2 = (!mul_ln1118_1277_fu_71525_p0.read().is_01() || !mul_ln1118_1277_fu_71525_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1277_fu_71525_p0.read()) * sc_bigint<32>(mul_ln1118_1277_fu_71525_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1278_fu_71555_p0() {
    mul_ln1118_1278_fu_71555_p0 = tmp_1372_fu_71541_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1278_fu_71555_p1() {
    mul_ln1118_1278_fu_71555_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1278_fu_71555_p2() {
    mul_ln1118_1278_fu_71555_p2 = (!mul_ln1118_1278_fu_71555_p0.read().is_01() || !mul_ln1118_1278_fu_71555_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1278_fu_71555_p0.read()) * sc_bigint<32>(mul_ln1118_1278_fu_71555_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1279_fu_71585_p0() {
    mul_ln1118_1279_fu_71585_p0 = tmp_1373_fu_71571_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1279_fu_71585_p1() {
    mul_ln1118_1279_fu_71585_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1279_fu_71585_p2() {
    mul_ln1118_1279_fu_71585_p2 = (!mul_ln1118_1279_fu_71585_p0.read().is_01() || !mul_ln1118_1279_fu_71585_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1279_fu_71585_p0.read()) * sc_bigint<32>(mul_ln1118_1279_fu_71585_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_127_fu_29900_p0() {
    mul_ln1118_127_fu_29900_p0 = tmp_146_fu_29886_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_127_fu_29900_p1() {
    mul_ln1118_127_fu_29900_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_127_fu_29900_p2() {
    mul_ln1118_127_fu_29900_p2 = (!mul_ln1118_127_fu_29900_p0.read().is_01() || !mul_ln1118_127_fu_29900_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_127_fu_29900_p0.read()) * sc_bigint<32>(mul_ln1118_127_fu_29900_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1280_fu_71615_p0() {
    mul_ln1118_1280_fu_71615_p0 = tmp_1374_fu_71601_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1280_fu_71615_p1() {
    mul_ln1118_1280_fu_71615_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1280_fu_71615_p2() {
    mul_ln1118_1280_fu_71615_p2 = (!mul_ln1118_1280_fu_71615_p0.read().is_01() || !mul_ln1118_1280_fu_71615_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1280_fu_71615_p0.read()) * sc_bigint<32>(mul_ln1118_1280_fu_71615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1281_fu_71645_p0() {
    mul_ln1118_1281_fu_71645_p0 = tmp_1375_fu_71631_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1281_fu_71645_p1() {
    mul_ln1118_1281_fu_71645_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1281_fu_71645_p2() {
    mul_ln1118_1281_fu_71645_p2 = (!mul_ln1118_1281_fu_71645_p0.read().is_01() || !mul_ln1118_1281_fu_71645_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1281_fu_71645_p0.read()) * sc_bigint<32>(mul_ln1118_1281_fu_71645_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1282_fu_71675_p0() {
    mul_ln1118_1282_fu_71675_p0 = tmp_1376_fu_71661_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1282_fu_71675_p1() {
    mul_ln1118_1282_fu_71675_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1282_fu_71675_p2() {
    mul_ln1118_1282_fu_71675_p2 = (!mul_ln1118_1282_fu_71675_p0.read().is_01() || !mul_ln1118_1282_fu_71675_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1282_fu_71675_p0.read()) * sc_bigint<32>(mul_ln1118_1282_fu_71675_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1283_fu_71705_p0() {
    mul_ln1118_1283_fu_71705_p0 = tmp_1377_fu_71691_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1283_fu_71705_p1() {
    mul_ln1118_1283_fu_71705_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1283_fu_71705_p2() {
    mul_ln1118_1283_fu_71705_p2 = (!mul_ln1118_1283_fu_71705_p0.read().is_01() || !mul_ln1118_1283_fu_71705_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1283_fu_71705_p0.read()) * sc_bigint<32>(mul_ln1118_1283_fu_71705_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1284_fu_71735_p0() {
    mul_ln1118_1284_fu_71735_p0 = tmp_1378_fu_71721_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1284_fu_71735_p1() {
    mul_ln1118_1284_fu_71735_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1284_fu_71735_p2() {
    mul_ln1118_1284_fu_71735_p2 = (!mul_ln1118_1284_fu_71735_p0.read().is_01() || !mul_ln1118_1284_fu_71735_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1284_fu_71735_p0.read()) * sc_bigint<32>(mul_ln1118_1284_fu_71735_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1285_fu_71765_p0() {
    mul_ln1118_1285_fu_71765_p0 = tmp_1379_fu_71751_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1285_fu_71765_p1() {
    mul_ln1118_1285_fu_71765_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1285_fu_71765_p2() {
    mul_ln1118_1285_fu_71765_p2 = (!mul_ln1118_1285_fu_71765_p0.read().is_01() || !mul_ln1118_1285_fu_71765_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1285_fu_71765_p0.read()) * sc_bigint<32>(mul_ln1118_1285_fu_71765_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1286_fu_71795_p0() {
    mul_ln1118_1286_fu_71795_p0 = tmp_1380_fu_71781_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1286_fu_71795_p1() {
    mul_ln1118_1286_fu_71795_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1286_fu_71795_p2() {
    mul_ln1118_1286_fu_71795_p2 = (!mul_ln1118_1286_fu_71795_p0.read().is_01() || !mul_ln1118_1286_fu_71795_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1286_fu_71795_p0.read()) * sc_bigint<32>(mul_ln1118_1286_fu_71795_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1287_fu_71825_p0() {
    mul_ln1118_1287_fu_71825_p0 = tmp_1381_fu_71811_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1287_fu_71825_p1() {
    mul_ln1118_1287_fu_71825_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1287_fu_71825_p2() {
    mul_ln1118_1287_fu_71825_p2 = (!mul_ln1118_1287_fu_71825_p0.read().is_01() || !mul_ln1118_1287_fu_71825_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1287_fu_71825_p0.read()) * sc_bigint<32>(mul_ln1118_1287_fu_71825_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1288_fu_71855_p0() {
    mul_ln1118_1288_fu_71855_p0 = tmp_1382_fu_71841_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1288_fu_71855_p1() {
    mul_ln1118_1288_fu_71855_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1288_fu_71855_p2() {
    mul_ln1118_1288_fu_71855_p2 = (!mul_ln1118_1288_fu_71855_p0.read().is_01() || !mul_ln1118_1288_fu_71855_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1288_fu_71855_p0.read()) * sc_bigint<32>(mul_ln1118_1288_fu_71855_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1289_fu_71885_p0() {
    mul_ln1118_1289_fu_71885_p0 = tmp_1383_fu_71871_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1289_fu_71885_p1() {
    mul_ln1118_1289_fu_71885_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1289_fu_71885_p2() {
    mul_ln1118_1289_fu_71885_p2 = (!mul_ln1118_1289_fu_71885_p0.read().is_01() || !mul_ln1118_1289_fu_71885_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1289_fu_71885_p0.read()) * sc_bigint<32>(mul_ln1118_1289_fu_71885_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_128_fu_29930_p0() {
    mul_ln1118_128_fu_29930_p0 = tmp_147_fu_29916_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_128_fu_29930_p1() {
    mul_ln1118_128_fu_29930_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_128_fu_29930_p2() {
    mul_ln1118_128_fu_29930_p2 = (!mul_ln1118_128_fu_29930_p0.read().is_01() || !mul_ln1118_128_fu_29930_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_128_fu_29930_p0.read()) * sc_bigint<32>(mul_ln1118_128_fu_29930_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1290_fu_71915_p0() {
    mul_ln1118_1290_fu_71915_p0 = tmp_1384_fu_71901_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1290_fu_71915_p1() {
    mul_ln1118_1290_fu_71915_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1290_fu_71915_p2() {
    mul_ln1118_1290_fu_71915_p2 = (!mul_ln1118_1290_fu_71915_p0.read().is_01() || !mul_ln1118_1290_fu_71915_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1290_fu_71915_p0.read()) * sc_bigint<32>(mul_ln1118_1290_fu_71915_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1291_fu_71945_p0() {
    mul_ln1118_1291_fu_71945_p0 = tmp_1385_fu_71931_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1291_fu_71945_p1() {
    mul_ln1118_1291_fu_71945_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1291_fu_71945_p2() {
    mul_ln1118_1291_fu_71945_p2 = (!mul_ln1118_1291_fu_71945_p0.read().is_01() || !mul_ln1118_1291_fu_71945_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1291_fu_71945_p0.read()) * sc_bigint<32>(mul_ln1118_1291_fu_71945_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1292_fu_72089_p0() {
    mul_ln1118_1292_fu_72089_p0 = tmp_1386_fu_72075_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1292_fu_72089_p1() {
    mul_ln1118_1292_fu_72089_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1292_fu_72089_p2() {
    mul_ln1118_1292_fu_72089_p2 = (!mul_ln1118_1292_fu_72089_p0.read().is_01() || !mul_ln1118_1292_fu_72089_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1292_fu_72089_p0.read()) * sc_bigint<32>(mul_ln1118_1292_fu_72089_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1293_fu_72119_p0() {
    mul_ln1118_1293_fu_72119_p0 = tmp_1387_fu_72105_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1293_fu_72119_p1() {
    mul_ln1118_1293_fu_72119_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1293_fu_72119_p2() {
    mul_ln1118_1293_fu_72119_p2 = (!mul_ln1118_1293_fu_72119_p0.read().is_01() || !mul_ln1118_1293_fu_72119_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1293_fu_72119_p0.read()) * sc_bigint<32>(mul_ln1118_1293_fu_72119_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1294_fu_72149_p0() {
    mul_ln1118_1294_fu_72149_p0 = tmp_1388_fu_72135_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1294_fu_72149_p1() {
    mul_ln1118_1294_fu_72149_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1294_fu_72149_p2() {
    mul_ln1118_1294_fu_72149_p2 = (!mul_ln1118_1294_fu_72149_p0.read().is_01() || !mul_ln1118_1294_fu_72149_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1294_fu_72149_p0.read()) * sc_bigint<32>(mul_ln1118_1294_fu_72149_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1295_fu_72179_p0() {
    mul_ln1118_1295_fu_72179_p0 = tmp_1389_fu_72165_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1295_fu_72179_p1() {
    mul_ln1118_1295_fu_72179_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1295_fu_72179_p2() {
    mul_ln1118_1295_fu_72179_p2 = (!mul_ln1118_1295_fu_72179_p0.read().is_01() || !mul_ln1118_1295_fu_72179_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1295_fu_72179_p0.read()) * sc_bigint<32>(mul_ln1118_1295_fu_72179_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1296_fu_72209_p0() {
    mul_ln1118_1296_fu_72209_p0 = tmp_1390_fu_72195_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1296_fu_72209_p1() {
    mul_ln1118_1296_fu_72209_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1296_fu_72209_p2() {
    mul_ln1118_1296_fu_72209_p2 = (!mul_ln1118_1296_fu_72209_p0.read().is_01() || !mul_ln1118_1296_fu_72209_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1296_fu_72209_p0.read()) * sc_bigint<32>(mul_ln1118_1296_fu_72209_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1297_fu_72239_p0() {
    mul_ln1118_1297_fu_72239_p0 = tmp_1391_fu_72225_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1297_fu_72239_p1() {
    mul_ln1118_1297_fu_72239_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1297_fu_72239_p2() {
    mul_ln1118_1297_fu_72239_p2 = (!mul_ln1118_1297_fu_72239_p0.read().is_01() || !mul_ln1118_1297_fu_72239_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1297_fu_72239_p0.read()) * sc_bigint<32>(mul_ln1118_1297_fu_72239_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1298_fu_72269_p0() {
    mul_ln1118_1298_fu_72269_p0 = tmp_1392_fu_72255_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1298_fu_72269_p1() {
    mul_ln1118_1298_fu_72269_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1298_fu_72269_p2() {
    mul_ln1118_1298_fu_72269_p2 = (!mul_ln1118_1298_fu_72269_p0.read().is_01() || !mul_ln1118_1298_fu_72269_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1298_fu_72269_p0.read()) * sc_bigint<32>(mul_ln1118_1298_fu_72269_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1299_fu_72299_p0() {
    mul_ln1118_1299_fu_72299_p0 = tmp_1393_fu_72285_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1299_fu_72299_p1() {
    mul_ln1118_1299_fu_72299_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1299_fu_72299_p2() {
    mul_ln1118_1299_fu_72299_p2 = (!mul_ln1118_1299_fu_72299_p0.read().is_01() || !mul_ln1118_1299_fu_72299_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1299_fu_72299_p0.read()) * sc_bigint<32>(mul_ln1118_1299_fu_72299_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_129_fu_29960_p0() {
    mul_ln1118_129_fu_29960_p0 = tmp_148_fu_29946_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_129_fu_29960_p1() {
    mul_ln1118_129_fu_29960_p1 =  (sc_lv<32>) (sext_ln1116_15_cast_fu_25840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_129_fu_29960_p2() {
    mul_ln1118_129_fu_29960_p2 = (!mul_ln1118_129_fu_29960_p0.read().is_01() || !mul_ln1118_129_fu_29960_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_129_fu_29960_p0.read()) * sc_bigint<32>(mul_ln1118_129_fu_29960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_12_fu_25748_p0() {
    mul_ln1118_12_fu_25748_p0 = tmp_25_fu_25731_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_12_fu_25748_p1() {
    mul_ln1118_12_fu_25748_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_12_fu_25748_p2() {
    mul_ln1118_12_fu_25748_p2 = (!mul_ln1118_12_fu_25748_p0.read().is_01() || !mul_ln1118_12_fu_25748_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_12_fu_25748_p0.read()) * sc_bigint<32>(mul_ln1118_12_fu_25748_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1300_fu_72329_p0() {
    mul_ln1118_1300_fu_72329_p0 = tmp_1394_fu_72315_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1300_fu_72329_p1() {
    mul_ln1118_1300_fu_72329_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1300_fu_72329_p2() {
    mul_ln1118_1300_fu_72329_p2 = (!mul_ln1118_1300_fu_72329_p0.read().is_01() || !mul_ln1118_1300_fu_72329_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1300_fu_72329_p0.read()) * sc_bigint<32>(mul_ln1118_1300_fu_72329_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1301_fu_72359_p0() {
    mul_ln1118_1301_fu_72359_p0 = tmp_1395_fu_72345_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1301_fu_72359_p1() {
    mul_ln1118_1301_fu_72359_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1301_fu_72359_p2() {
    mul_ln1118_1301_fu_72359_p2 = (!mul_ln1118_1301_fu_72359_p0.read().is_01() || !mul_ln1118_1301_fu_72359_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1301_fu_72359_p0.read()) * sc_bigint<32>(mul_ln1118_1301_fu_72359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1302_fu_72389_p0() {
    mul_ln1118_1302_fu_72389_p0 = tmp_1396_fu_72375_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1302_fu_72389_p1() {
    mul_ln1118_1302_fu_72389_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1302_fu_72389_p2() {
    mul_ln1118_1302_fu_72389_p2 = (!mul_ln1118_1302_fu_72389_p0.read().is_01() || !mul_ln1118_1302_fu_72389_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1302_fu_72389_p0.read()) * sc_bigint<32>(mul_ln1118_1302_fu_72389_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1303_fu_72419_p0() {
    mul_ln1118_1303_fu_72419_p0 = tmp_1397_fu_72405_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1303_fu_72419_p1() {
    mul_ln1118_1303_fu_72419_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1303_fu_72419_p2() {
    mul_ln1118_1303_fu_72419_p2 = (!mul_ln1118_1303_fu_72419_p0.read().is_01() || !mul_ln1118_1303_fu_72419_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1303_fu_72419_p0.read()) * sc_bigint<32>(mul_ln1118_1303_fu_72419_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1304_fu_72449_p0() {
    mul_ln1118_1304_fu_72449_p0 = tmp_1398_fu_72435_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1304_fu_72449_p1() {
    mul_ln1118_1304_fu_72449_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1304_fu_72449_p2() {
    mul_ln1118_1304_fu_72449_p2 = (!mul_ln1118_1304_fu_72449_p0.read().is_01() || !mul_ln1118_1304_fu_72449_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1304_fu_72449_p0.read()) * sc_bigint<32>(mul_ln1118_1304_fu_72449_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1305_fu_72479_p0() {
    mul_ln1118_1305_fu_72479_p0 = tmp_1399_fu_72465_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1305_fu_72479_p1() {
    mul_ln1118_1305_fu_72479_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1305_fu_72479_p2() {
    mul_ln1118_1305_fu_72479_p2 = (!mul_ln1118_1305_fu_72479_p0.read().is_01() || !mul_ln1118_1305_fu_72479_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1305_fu_72479_p0.read()) * sc_bigint<32>(mul_ln1118_1305_fu_72479_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1306_fu_72509_p0() {
    mul_ln1118_1306_fu_72509_p0 = tmp_1400_fu_72495_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1306_fu_72509_p1() {
    mul_ln1118_1306_fu_72509_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1306_fu_72509_p2() {
    mul_ln1118_1306_fu_72509_p2 = (!mul_ln1118_1306_fu_72509_p0.read().is_01() || !mul_ln1118_1306_fu_72509_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1306_fu_72509_p0.read()) * sc_bigint<32>(mul_ln1118_1306_fu_72509_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1307_fu_72539_p0() {
    mul_ln1118_1307_fu_72539_p0 = tmp_1401_fu_72525_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1307_fu_72539_p1() {
    mul_ln1118_1307_fu_72539_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1307_fu_72539_p2() {
    mul_ln1118_1307_fu_72539_p2 = (!mul_ln1118_1307_fu_72539_p0.read().is_01() || !mul_ln1118_1307_fu_72539_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1307_fu_72539_p0.read()) * sc_bigint<32>(mul_ln1118_1307_fu_72539_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1308_fu_72569_p0() {
    mul_ln1118_1308_fu_72569_p0 = tmp_1402_fu_72555_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1308_fu_72569_p1() {
    mul_ln1118_1308_fu_72569_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1308_fu_72569_p2() {
    mul_ln1118_1308_fu_72569_p2 = (!mul_ln1118_1308_fu_72569_p0.read().is_01() || !mul_ln1118_1308_fu_72569_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1308_fu_72569_p0.read()) * sc_bigint<32>(mul_ln1118_1308_fu_72569_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1309_fu_72599_p0() {
    mul_ln1118_1309_fu_72599_p0 = tmp_1403_fu_72585_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1309_fu_72599_p1() {
    mul_ln1118_1309_fu_72599_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1309_fu_72599_p2() {
    mul_ln1118_1309_fu_72599_p2 = (!mul_ln1118_1309_fu_72599_p0.read().is_01() || !mul_ln1118_1309_fu_72599_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1309_fu_72599_p0.read()) * sc_bigint<32>(mul_ln1118_1309_fu_72599_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_130_fu_29990_p0() {
    mul_ln1118_130_fu_29990_p0 = tmp_149_fu_29976_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_130_fu_29990_p1() {
    mul_ln1118_130_fu_29990_p1 =  (sc_lv<32>) (sext_ln1116_16_cast_fu_25873_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_130_fu_29990_p2() {
    mul_ln1118_130_fu_29990_p2 = (!mul_ln1118_130_fu_29990_p0.read().is_01() || !mul_ln1118_130_fu_29990_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_130_fu_29990_p0.read()) * sc_bigint<32>(mul_ln1118_130_fu_29990_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1310_fu_72629_p0() {
    mul_ln1118_1310_fu_72629_p0 = tmp_1404_fu_72615_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1310_fu_72629_p1() {
    mul_ln1118_1310_fu_72629_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1310_fu_72629_p2() {
    mul_ln1118_1310_fu_72629_p2 = (!mul_ln1118_1310_fu_72629_p0.read().is_01() || !mul_ln1118_1310_fu_72629_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1310_fu_72629_p0.read()) * sc_bigint<32>(mul_ln1118_1310_fu_72629_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1311_fu_72773_p0() {
    mul_ln1118_1311_fu_72773_p0 = tmp_1405_fu_72759_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1311_fu_72773_p1() {
    mul_ln1118_1311_fu_72773_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1311_fu_72773_p2() {
    mul_ln1118_1311_fu_72773_p2 = (!mul_ln1118_1311_fu_72773_p0.read().is_01() || !mul_ln1118_1311_fu_72773_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1311_fu_72773_p0.read()) * sc_bigint<32>(mul_ln1118_1311_fu_72773_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1312_fu_72803_p0() {
    mul_ln1118_1312_fu_72803_p0 = tmp_1406_fu_72789_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1312_fu_72803_p1() {
    mul_ln1118_1312_fu_72803_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1312_fu_72803_p2() {
    mul_ln1118_1312_fu_72803_p2 = (!mul_ln1118_1312_fu_72803_p0.read().is_01() || !mul_ln1118_1312_fu_72803_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1312_fu_72803_p0.read()) * sc_bigint<32>(mul_ln1118_1312_fu_72803_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1313_fu_72833_p0() {
    mul_ln1118_1313_fu_72833_p0 = tmp_1407_fu_72819_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1313_fu_72833_p1() {
    mul_ln1118_1313_fu_72833_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1313_fu_72833_p2() {
    mul_ln1118_1313_fu_72833_p2 = (!mul_ln1118_1313_fu_72833_p0.read().is_01() || !mul_ln1118_1313_fu_72833_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1313_fu_72833_p0.read()) * sc_bigint<32>(mul_ln1118_1313_fu_72833_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1314_fu_72863_p0() {
    mul_ln1118_1314_fu_72863_p0 = tmp_1408_fu_72849_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1314_fu_72863_p1() {
    mul_ln1118_1314_fu_72863_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1314_fu_72863_p2() {
    mul_ln1118_1314_fu_72863_p2 = (!mul_ln1118_1314_fu_72863_p0.read().is_01() || !mul_ln1118_1314_fu_72863_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1314_fu_72863_p0.read()) * sc_bigint<32>(mul_ln1118_1314_fu_72863_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1315_fu_72893_p0() {
    mul_ln1118_1315_fu_72893_p0 = tmp_1409_fu_72879_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1315_fu_72893_p1() {
    mul_ln1118_1315_fu_72893_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1315_fu_72893_p2() {
    mul_ln1118_1315_fu_72893_p2 = (!mul_ln1118_1315_fu_72893_p0.read().is_01() || !mul_ln1118_1315_fu_72893_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1315_fu_72893_p0.read()) * sc_bigint<32>(mul_ln1118_1315_fu_72893_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1316_fu_72923_p0() {
    mul_ln1118_1316_fu_72923_p0 = tmp_1410_fu_72909_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1316_fu_72923_p1() {
    mul_ln1118_1316_fu_72923_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1316_fu_72923_p2() {
    mul_ln1118_1316_fu_72923_p2 = (!mul_ln1118_1316_fu_72923_p0.read().is_01() || !mul_ln1118_1316_fu_72923_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1316_fu_72923_p0.read()) * sc_bigint<32>(mul_ln1118_1316_fu_72923_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1317_fu_72953_p0() {
    mul_ln1118_1317_fu_72953_p0 = tmp_1411_fu_72939_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1317_fu_72953_p1() {
    mul_ln1118_1317_fu_72953_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1317_fu_72953_p2() {
    mul_ln1118_1317_fu_72953_p2 = (!mul_ln1118_1317_fu_72953_p0.read().is_01() || !mul_ln1118_1317_fu_72953_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1317_fu_72953_p0.read()) * sc_bigint<32>(mul_ln1118_1317_fu_72953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1318_fu_72983_p0() {
    mul_ln1118_1318_fu_72983_p0 = tmp_1412_fu_72969_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1318_fu_72983_p1() {
    mul_ln1118_1318_fu_72983_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1318_fu_72983_p2() {
    mul_ln1118_1318_fu_72983_p2 = (!mul_ln1118_1318_fu_72983_p0.read().is_01() || !mul_ln1118_1318_fu_72983_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1318_fu_72983_p0.read()) * sc_bigint<32>(mul_ln1118_1318_fu_72983_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1319_fu_73013_p0() {
    mul_ln1118_1319_fu_73013_p0 = tmp_1413_fu_72999_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1319_fu_73013_p1() {
    mul_ln1118_1319_fu_73013_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1319_fu_73013_p2() {
    mul_ln1118_1319_fu_73013_p2 = (!mul_ln1118_1319_fu_73013_p0.read().is_01() || !mul_ln1118_1319_fu_73013_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1319_fu_73013_p0.read()) * sc_bigint<32>(mul_ln1118_1319_fu_73013_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_131_fu_30020_p0() {
    mul_ln1118_131_fu_30020_p0 = tmp_150_fu_30006_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_131_fu_30020_p1() {
    mul_ln1118_131_fu_30020_p1 =  (sc_lv<32>) (sext_ln1116_17_cast_fu_25906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_131_fu_30020_p2() {
    mul_ln1118_131_fu_30020_p2 = (!mul_ln1118_131_fu_30020_p0.read().is_01() || !mul_ln1118_131_fu_30020_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_131_fu_30020_p0.read()) * sc_bigint<32>(mul_ln1118_131_fu_30020_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1320_fu_73043_p0() {
    mul_ln1118_1320_fu_73043_p0 = tmp_1414_fu_73029_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1320_fu_73043_p1() {
    mul_ln1118_1320_fu_73043_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1320_fu_73043_p2() {
    mul_ln1118_1320_fu_73043_p2 = (!mul_ln1118_1320_fu_73043_p0.read().is_01() || !mul_ln1118_1320_fu_73043_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1320_fu_73043_p0.read()) * sc_bigint<32>(mul_ln1118_1320_fu_73043_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1321_fu_73073_p0() {
    mul_ln1118_1321_fu_73073_p0 = tmp_1415_fu_73059_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1321_fu_73073_p1() {
    mul_ln1118_1321_fu_73073_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1321_fu_73073_p2() {
    mul_ln1118_1321_fu_73073_p2 = (!mul_ln1118_1321_fu_73073_p0.read().is_01() || !mul_ln1118_1321_fu_73073_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1321_fu_73073_p0.read()) * sc_bigint<32>(mul_ln1118_1321_fu_73073_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1322_fu_73103_p0() {
    mul_ln1118_1322_fu_73103_p0 = tmp_1416_fu_73089_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1322_fu_73103_p1() {
    mul_ln1118_1322_fu_73103_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1322_fu_73103_p2() {
    mul_ln1118_1322_fu_73103_p2 = (!mul_ln1118_1322_fu_73103_p0.read().is_01() || !mul_ln1118_1322_fu_73103_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1322_fu_73103_p0.read()) * sc_bigint<32>(mul_ln1118_1322_fu_73103_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1323_fu_73133_p0() {
    mul_ln1118_1323_fu_73133_p0 = tmp_1417_fu_73119_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1323_fu_73133_p1() {
    mul_ln1118_1323_fu_73133_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1323_fu_73133_p2() {
    mul_ln1118_1323_fu_73133_p2 = (!mul_ln1118_1323_fu_73133_p0.read().is_01() || !mul_ln1118_1323_fu_73133_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1323_fu_73133_p0.read()) * sc_bigint<32>(mul_ln1118_1323_fu_73133_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1324_fu_73163_p0() {
    mul_ln1118_1324_fu_73163_p0 = tmp_1418_fu_73149_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1324_fu_73163_p1() {
    mul_ln1118_1324_fu_73163_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1324_fu_73163_p2() {
    mul_ln1118_1324_fu_73163_p2 = (!mul_ln1118_1324_fu_73163_p0.read().is_01() || !mul_ln1118_1324_fu_73163_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1324_fu_73163_p0.read()) * sc_bigint<32>(mul_ln1118_1324_fu_73163_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1325_fu_73193_p0() {
    mul_ln1118_1325_fu_73193_p0 = tmp_1419_fu_73179_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1325_fu_73193_p1() {
    mul_ln1118_1325_fu_73193_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1325_fu_73193_p2() {
    mul_ln1118_1325_fu_73193_p2 = (!mul_ln1118_1325_fu_73193_p0.read().is_01() || !mul_ln1118_1325_fu_73193_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1325_fu_73193_p0.read()) * sc_bigint<32>(mul_ln1118_1325_fu_73193_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1326_fu_73223_p0() {
    mul_ln1118_1326_fu_73223_p0 = tmp_1420_fu_73209_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1326_fu_73223_p1() {
    mul_ln1118_1326_fu_73223_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1326_fu_73223_p2() {
    mul_ln1118_1326_fu_73223_p2 = (!mul_ln1118_1326_fu_73223_p0.read().is_01() || !mul_ln1118_1326_fu_73223_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1326_fu_73223_p0.read()) * sc_bigint<32>(mul_ln1118_1326_fu_73223_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1327_fu_73253_p0() {
    mul_ln1118_1327_fu_73253_p0 = tmp_1421_fu_73239_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1327_fu_73253_p1() {
    mul_ln1118_1327_fu_73253_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1327_fu_73253_p2() {
    mul_ln1118_1327_fu_73253_p2 = (!mul_ln1118_1327_fu_73253_p0.read().is_01() || !mul_ln1118_1327_fu_73253_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1327_fu_73253_p0.read()) * sc_bigint<32>(mul_ln1118_1327_fu_73253_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1328_fu_73283_p0() {
    mul_ln1118_1328_fu_73283_p0 = tmp_1422_fu_73269_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1328_fu_73283_p1() {
    mul_ln1118_1328_fu_73283_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1328_fu_73283_p2() {
    mul_ln1118_1328_fu_73283_p2 = (!mul_ln1118_1328_fu_73283_p0.read().is_01() || !mul_ln1118_1328_fu_73283_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1328_fu_73283_p0.read()) * sc_bigint<32>(mul_ln1118_1328_fu_73283_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1329_fu_73313_p0() {
    mul_ln1118_1329_fu_73313_p0 = tmp_1423_fu_73299_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1329_fu_73313_p1() {
    mul_ln1118_1329_fu_73313_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1329_fu_73313_p2() {
    mul_ln1118_1329_fu_73313_p2 = (!mul_ln1118_1329_fu_73313_p0.read().is_01() || !mul_ln1118_1329_fu_73313_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1329_fu_73313_p0.read()) * sc_bigint<32>(mul_ln1118_1329_fu_73313_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_132_fu_30050_p0() {
    mul_ln1118_132_fu_30050_p0 = tmp_151_fu_30036_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_132_fu_30050_p1() {
    mul_ln1118_132_fu_30050_p1 =  (sc_lv<32>) (sext_ln1116_18_cast_fu_25939_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_132_fu_30050_p2() {
    mul_ln1118_132_fu_30050_p2 = (!mul_ln1118_132_fu_30050_p0.read().is_01() || !mul_ln1118_132_fu_30050_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_132_fu_30050_p0.read()) * sc_bigint<32>(mul_ln1118_132_fu_30050_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1330_fu_73457_p0() {
    mul_ln1118_1330_fu_73457_p0 = tmp_1424_fu_73443_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1330_fu_73457_p1() {
    mul_ln1118_1330_fu_73457_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1330_fu_73457_p2() {
    mul_ln1118_1330_fu_73457_p2 = (!mul_ln1118_1330_fu_73457_p0.read().is_01() || !mul_ln1118_1330_fu_73457_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1330_fu_73457_p0.read()) * sc_bigint<32>(mul_ln1118_1330_fu_73457_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1331_fu_73487_p0() {
    mul_ln1118_1331_fu_73487_p0 = tmp_1425_fu_73473_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1331_fu_73487_p1() {
    mul_ln1118_1331_fu_73487_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1331_fu_73487_p2() {
    mul_ln1118_1331_fu_73487_p2 = (!mul_ln1118_1331_fu_73487_p0.read().is_01() || !mul_ln1118_1331_fu_73487_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1331_fu_73487_p0.read()) * sc_bigint<32>(mul_ln1118_1331_fu_73487_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1332_fu_73517_p0() {
    mul_ln1118_1332_fu_73517_p0 = tmp_1426_fu_73503_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1332_fu_73517_p1() {
    mul_ln1118_1332_fu_73517_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1332_fu_73517_p2() {
    mul_ln1118_1332_fu_73517_p2 = (!mul_ln1118_1332_fu_73517_p0.read().is_01() || !mul_ln1118_1332_fu_73517_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1332_fu_73517_p0.read()) * sc_bigint<32>(mul_ln1118_1332_fu_73517_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1333_fu_73547_p0() {
    mul_ln1118_1333_fu_73547_p0 = tmp_1427_fu_73533_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1333_fu_73547_p1() {
    mul_ln1118_1333_fu_73547_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1333_fu_73547_p2() {
    mul_ln1118_1333_fu_73547_p2 = (!mul_ln1118_1333_fu_73547_p0.read().is_01() || !mul_ln1118_1333_fu_73547_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1333_fu_73547_p0.read()) * sc_bigint<32>(mul_ln1118_1333_fu_73547_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1334_fu_73577_p0() {
    mul_ln1118_1334_fu_73577_p0 = tmp_1428_fu_73563_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1334_fu_73577_p1() {
    mul_ln1118_1334_fu_73577_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1334_fu_73577_p2() {
    mul_ln1118_1334_fu_73577_p2 = (!mul_ln1118_1334_fu_73577_p0.read().is_01() || !mul_ln1118_1334_fu_73577_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1334_fu_73577_p0.read()) * sc_bigint<32>(mul_ln1118_1334_fu_73577_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1335_fu_73607_p0() {
    mul_ln1118_1335_fu_73607_p0 = tmp_1429_fu_73593_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1335_fu_73607_p1() {
    mul_ln1118_1335_fu_73607_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1335_fu_73607_p2() {
    mul_ln1118_1335_fu_73607_p2 = (!mul_ln1118_1335_fu_73607_p0.read().is_01() || !mul_ln1118_1335_fu_73607_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1335_fu_73607_p0.read()) * sc_bigint<32>(mul_ln1118_1335_fu_73607_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1336_fu_73637_p0() {
    mul_ln1118_1336_fu_73637_p0 = tmp_1430_fu_73623_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1336_fu_73637_p1() {
    mul_ln1118_1336_fu_73637_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1336_fu_73637_p2() {
    mul_ln1118_1336_fu_73637_p2 = (!mul_ln1118_1336_fu_73637_p0.read().is_01() || !mul_ln1118_1336_fu_73637_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1336_fu_73637_p0.read()) * sc_bigint<32>(mul_ln1118_1336_fu_73637_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1337_fu_73667_p0() {
    mul_ln1118_1337_fu_73667_p0 = tmp_1431_fu_73653_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1337_fu_73667_p1() {
    mul_ln1118_1337_fu_73667_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1337_fu_73667_p2() {
    mul_ln1118_1337_fu_73667_p2 = (!mul_ln1118_1337_fu_73667_p0.read().is_01() || !mul_ln1118_1337_fu_73667_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1337_fu_73667_p0.read()) * sc_bigint<32>(mul_ln1118_1337_fu_73667_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1338_fu_73697_p0() {
    mul_ln1118_1338_fu_73697_p0 = tmp_1432_fu_73683_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1338_fu_73697_p1() {
    mul_ln1118_1338_fu_73697_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1338_fu_73697_p2() {
    mul_ln1118_1338_fu_73697_p2 = (!mul_ln1118_1338_fu_73697_p0.read().is_01() || !mul_ln1118_1338_fu_73697_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1338_fu_73697_p0.read()) * sc_bigint<32>(mul_ln1118_1338_fu_73697_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1339_fu_73727_p0() {
    mul_ln1118_1339_fu_73727_p0 = tmp_1433_fu_73713_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1339_fu_73727_p1() {
    mul_ln1118_1339_fu_73727_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1339_fu_73727_p2() {
    mul_ln1118_1339_fu_73727_p2 = (!mul_ln1118_1339_fu_73727_p0.read().is_01() || !mul_ln1118_1339_fu_73727_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1339_fu_73727_p0.read()) * sc_bigint<32>(mul_ln1118_1339_fu_73727_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_133_fu_30194_p0() {
    mul_ln1118_133_fu_30194_p0 = tmp_152_fu_30180_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_133_fu_30194_p1() {
    mul_ln1118_133_fu_30194_p1 =  (sc_lv<32>) (sext_ln1116_cast_fu_25345_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_133_fu_30194_p2() {
    mul_ln1118_133_fu_30194_p2 = (!mul_ln1118_133_fu_30194_p0.read().is_01() || !mul_ln1118_133_fu_30194_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_133_fu_30194_p0.read()) * sc_bigint<32>(mul_ln1118_133_fu_30194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1340_fu_73757_p0() {
    mul_ln1118_1340_fu_73757_p0 = tmp_1434_fu_73743_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1340_fu_73757_p1() {
    mul_ln1118_1340_fu_73757_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1340_fu_73757_p2() {
    mul_ln1118_1340_fu_73757_p2 = (!mul_ln1118_1340_fu_73757_p0.read().is_01() || !mul_ln1118_1340_fu_73757_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1340_fu_73757_p0.read()) * sc_bigint<32>(mul_ln1118_1340_fu_73757_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1341_fu_73787_p0() {
    mul_ln1118_1341_fu_73787_p0 = tmp_1435_fu_73773_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1341_fu_73787_p1() {
    mul_ln1118_1341_fu_73787_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1341_fu_73787_p2() {
    mul_ln1118_1341_fu_73787_p2 = (!mul_ln1118_1341_fu_73787_p0.read().is_01() || !mul_ln1118_1341_fu_73787_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1341_fu_73787_p0.read()) * sc_bigint<32>(mul_ln1118_1341_fu_73787_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1342_fu_73817_p0() {
    mul_ln1118_1342_fu_73817_p0 = tmp_1436_fu_73803_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1342_fu_73817_p1() {
    mul_ln1118_1342_fu_73817_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1342_fu_73817_p2() {
    mul_ln1118_1342_fu_73817_p2 = (!mul_ln1118_1342_fu_73817_p0.read().is_01() || !mul_ln1118_1342_fu_73817_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1342_fu_73817_p0.read()) * sc_bigint<32>(mul_ln1118_1342_fu_73817_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1343_fu_73847_p0() {
    mul_ln1118_1343_fu_73847_p0 = tmp_1437_fu_73833_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1343_fu_73847_p1() {
    mul_ln1118_1343_fu_73847_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1343_fu_73847_p2() {
    mul_ln1118_1343_fu_73847_p2 = (!mul_ln1118_1343_fu_73847_p0.read().is_01() || !mul_ln1118_1343_fu_73847_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1343_fu_73847_p0.read()) * sc_bigint<32>(mul_ln1118_1343_fu_73847_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1344_fu_73877_p0() {
    mul_ln1118_1344_fu_73877_p0 = tmp_1438_fu_73863_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1344_fu_73877_p1() {
    mul_ln1118_1344_fu_73877_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1344_fu_73877_p2() {
    mul_ln1118_1344_fu_73877_p2 = (!mul_ln1118_1344_fu_73877_p0.read().is_01() || !mul_ln1118_1344_fu_73877_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1344_fu_73877_p0.read()) * sc_bigint<32>(mul_ln1118_1344_fu_73877_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1345_fu_73907_p0() {
    mul_ln1118_1345_fu_73907_p0 = tmp_1439_fu_73893_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1345_fu_73907_p1() {
    mul_ln1118_1345_fu_73907_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1345_fu_73907_p2() {
    mul_ln1118_1345_fu_73907_p2 = (!mul_ln1118_1345_fu_73907_p0.read().is_01() || !mul_ln1118_1345_fu_73907_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1345_fu_73907_p0.read()) * sc_bigint<32>(mul_ln1118_1345_fu_73907_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1346_fu_73937_p0() {
    mul_ln1118_1346_fu_73937_p0 = tmp_1440_fu_73923_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1346_fu_73937_p1() {
    mul_ln1118_1346_fu_73937_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1346_fu_73937_p2() {
    mul_ln1118_1346_fu_73937_p2 = (!mul_ln1118_1346_fu_73937_p0.read().is_01() || !mul_ln1118_1346_fu_73937_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1346_fu_73937_p0.read()) * sc_bigint<32>(mul_ln1118_1346_fu_73937_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1347_fu_73967_p0() {
    mul_ln1118_1347_fu_73967_p0 = tmp_1441_fu_73953_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1347_fu_73967_p1() {
    mul_ln1118_1347_fu_73967_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1347_fu_73967_p2() {
    mul_ln1118_1347_fu_73967_p2 = (!mul_ln1118_1347_fu_73967_p0.read().is_01() || !mul_ln1118_1347_fu_73967_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1347_fu_73967_p0.read()) * sc_bigint<32>(mul_ln1118_1347_fu_73967_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1348_fu_73997_p0() {
    mul_ln1118_1348_fu_73997_p0 = tmp_1442_fu_73983_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1348_fu_73997_p1() {
    mul_ln1118_1348_fu_73997_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1348_fu_73997_p2() {
    mul_ln1118_1348_fu_73997_p2 = (!mul_ln1118_1348_fu_73997_p0.read().is_01() || !mul_ln1118_1348_fu_73997_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1348_fu_73997_p0.read()) * sc_bigint<32>(mul_ln1118_1348_fu_73997_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1349_fu_74141_p0() {
    mul_ln1118_1349_fu_74141_p0 = tmp_1443_fu_74127_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1349_fu_74141_p1() {
    mul_ln1118_1349_fu_74141_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1349_fu_74141_p2() {
    mul_ln1118_1349_fu_74141_p2 = (!mul_ln1118_1349_fu_74141_p0.read().is_01() || !mul_ln1118_1349_fu_74141_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1349_fu_74141_p0.read()) * sc_bigint<32>(mul_ln1118_1349_fu_74141_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_134_fu_30224_p0() {
    mul_ln1118_134_fu_30224_p0 = tmp_153_fu_30210_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_134_fu_30224_p1() {
    mul_ln1118_134_fu_30224_p1 =  (sc_lv<32>) (sext_ln1116_1_cast_fu_25378_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_134_fu_30224_p2() {
    mul_ln1118_134_fu_30224_p2 = (!mul_ln1118_134_fu_30224_p0.read().is_01() || !mul_ln1118_134_fu_30224_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_134_fu_30224_p0.read()) * sc_bigint<32>(mul_ln1118_134_fu_30224_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1350_fu_74171_p0() {
    mul_ln1118_1350_fu_74171_p0 = tmp_1444_fu_74157_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1350_fu_74171_p1() {
    mul_ln1118_1350_fu_74171_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1350_fu_74171_p2() {
    mul_ln1118_1350_fu_74171_p2 = (!mul_ln1118_1350_fu_74171_p0.read().is_01() || !mul_ln1118_1350_fu_74171_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1350_fu_74171_p0.read()) * sc_bigint<32>(mul_ln1118_1350_fu_74171_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1351_fu_74201_p0() {
    mul_ln1118_1351_fu_74201_p0 = tmp_1445_fu_74187_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1351_fu_74201_p1() {
    mul_ln1118_1351_fu_74201_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1351_fu_74201_p2() {
    mul_ln1118_1351_fu_74201_p2 = (!mul_ln1118_1351_fu_74201_p0.read().is_01() || !mul_ln1118_1351_fu_74201_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1351_fu_74201_p0.read()) * sc_bigint<32>(mul_ln1118_1351_fu_74201_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1352_fu_74231_p0() {
    mul_ln1118_1352_fu_74231_p0 = tmp_1446_fu_74217_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1352_fu_74231_p1() {
    mul_ln1118_1352_fu_74231_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1352_fu_74231_p2() {
    mul_ln1118_1352_fu_74231_p2 = (!mul_ln1118_1352_fu_74231_p0.read().is_01() || !mul_ln1118_1352_fu_74231_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1352_fu_74231_p0.read()) * sc_bigint<32>(mul_ln1118_1352_fu_74231_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1353_fu_74261_p0() {
    mul_ln1118_1353_fu_74261_p0 = tmp_1447_fu_74247_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1353_fu_74261_p1() {
    mul_ln1118_1353_fu_74261_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1353_fu_74261_p2() {
    mul_ln1118_1353_fu_74261_p2 = (!mul_ln1118_1353_fu_74261_p0.read().is_01() || !mul_ln1118_1353_fu_74261_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1353_fu_74261_p0.read()) * sc_bigint<32>(mul_ln1118_1353_fu_74261_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1354_fu_74291_p0() {
    mul_ln1118_1354_fu_74291_p0 = tmp_1448_fu_74277_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1354_fu_74291_p1() {
    mul_ln1118_1354_fu_74291_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1354_fu_74291_p2() {
    mul_ln1118_1354_fu_74291_p2 = (!mul_ln1118_1354_fu_74291_p0.read().is_01() || !mul_ln1118_1354_fu_74291_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1354_fu_74291_p0.read()) * sc_bigint<32>(mul_ln1118_1354_fu_74291_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1355_fu_74321_p0() {
    mul_ln1118_1355_fu_74321_p0 = tmp_1449_fu_74307_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1355_fu_74321_p1() {
    mul_ln1118_1355_fu_74321_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1355_fu_74321_p2() {
    mul_ln1118_1355_fu_74321_p2 = (!mul_ln1118_1355_fu_74321_p0.read().is_01() || !mul_ln1118_1355_fu_74321_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1355_fu_74321_p0.read()) * sc_bigint<32>(mul_ln1118_1355_fu_74321_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1356_fu_74351_p0() {
    mul_ln1118_1356_fu_74351_p0 = tmp_1450_fu_74337_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1356_fu_74351_p1() {
    mul_ln1118_1356_fu_74351_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1356_fu_74351_p2() {
    mul_ln1118_1356_fu_74351_p2 = (!mul_ln1118_1356_fu_74351_p0.read().is_01() || !mul_ln1118_1356_fu_74351_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1356_fu_74351_p0.read()) * sc_bigint<32>(mul_ln1118_1356_fu_74351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1357_fu_74381_p0() {
    mul_ln1118_1357_fu_74381_p0 = tmp_1451_fu_74367_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1357_fu_74381_p1() {
    mul_ln1118_1357_fu_74381_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1357_fu_74381_p2() {
    mul_ln1118_1357_fu_74381_p2 = (!mul_ln1118_1357_fu_74381_p0.read().is_01() || !mul_ln1118_1357_fu_74381_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1357_fu_74381_p0.read()) * sc_bigint<32>(mul_ln1118_1357_fu_74381_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1358_fu_74411_p0() {
    mul_ln1118_1358_fu_74411_p0 = tmp_1452_fu_74397_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1358_fu_74411_p1() {
    mul_ln1118_1358_fu_74411_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1358_fu_74411_p2() {
    mul_ln1118_1358_fu_74411_p2 = (!mul_ln1118_1358_fu_74411_p0.read().is_01() || !mul_ln1118_1358_fu_74411_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1358_fu_74411_p0.read()) * sc_bigint<32>(mul_ln1118_1358_fu_74411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1359_fu_74441_p0() {
    mul_ln1118_1359_fu_74441_p0 = tmp_1453_fu_74427_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1359_fu_74441_p1() {
    mul_ln1118_1359_fu_74441_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1359_fu_74441_p2() {
    mul_ln1118_1359_fu_74441_p2 = (!mul_ln1118_1359_fu_74441_p0.read().is_01() || !mul_ln1118_1359_fu_74441_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1359_fu_74441_p0.read()) * sc_bigint<32>(mul_ln1118_1359_fu_74441_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_135_fu_30254_p0() {
    mul_ln1118_135_fu_30254_p0 = tmp_154_fu_30240_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_135_fu_30254_p1() {
    mul_ln1118_135_fu_30254_p1 =  (sc_lv<32>) (sext_ln1116_2_cast_fu_25411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_135_fu_30254_p2() {
    mul_ln1118_135_fu_30254_p2 = (!mul_ln1118_135_fu_30254_p0.read().is_01() || !mul_ln1118_135_fu_30254_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_135_fu_30254_p0.read()) * sc_bigint<32>(mul_ln1118_135_fu_30254_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1360_fu_74471_p0() {
    mul_ln1118_1360_fu_74471_p0 = tmp_1454_fu_74457_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1360_fu_74471_p1() {
    mul_ln1118_1360_fu_74471_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1360_fu_74471_p2() {
    mul_ln1118_1360_fu_74471_p2 = (!mul_ln1118_1360_fu_74471_p0.read().is_01() || !mul_ln1118_1360_fu_74471_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1360_fu_74471_p0.read()) * sc_bigint<32>(mul_ln1118_1360_fu_74471_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1361_fu_74501_p0() {
    mul_ln1118_1361_fu_74501_p0 = tmp_1455_fu_74487_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1361_fu_74501_p1() {
    mul_ln1118_1361_fu_74501_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1361_fu_74501_p2() {
    mul_ln1118_1361_fu_74501_p2 = (!mul_ln1118_1361_fu_74501_p0.read().is_01() || !mul_ln1118_1361_fu_74501_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1361_fu_74501_p0.read()) * sc_bigint<32>(mul_ln1118_1361_fu_74501_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1362_fu_74531_p0() {
    mul_ln1118_1362_fu_74531_p0 = tmp_1456_fu_74517_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1362_fu_74531_p1() {
    mul_ln1118_1362_fu_74531_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1362_fu_74531_p2() {
    mul_ln1118_1362_fu_74531_p2 = (!mul_ln1118_1362_fu_74531_p0.read().is_01() || !mul_ln1118_1362_fu_74531_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1362_fu_74531_p0.read()) * sc_bigint<32>(mul_ln1118_1362_fu_74531_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1363_fu_74561_p0() {
    mul_ln1118_1363_fu_74561_p0 = tmp_1457_fu_74547_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1363_fu_74561_p1() {
    mul_ln1118_1363_fu_74561_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1363_fu_74561_p2() {
    mul_ln1118_1363_fu_74561_p2 = (!mul_ln1118_1363_fu_74561_p0.read().is_01() || !mul_ln1118_1363_fu_74561_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1363_fu_74561_p0.read()) * sc_bigint<32>(mul_ln1118_1363_fu_74561_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1364_fu_74591_p0() {
    mul_ln1118_1364_fu_74591_p0 = tmp_1458_fu_74577_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1364_fu_74591_p1() {
    mul_ln1118_1364_fu_74591_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1364_fu_74591_p2() {
    mul_ln1118_1364_fu_74591_p2 = (!mul_ln1118_1364_fu_74591_p0.read().is_01() || !mul_ln1118_1364_fu_74591_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1364_fu_74591_p0.read()) * sc_bigint<32>(mul_ln1118_1364_fu_74591_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1365_fu_74621_p0() {
    mul_ln1118_1365_fu_74621_p0 = tmp_1459_fu_74607_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1365_fu_74621_p1() {
    mul_ln1118_1365_fu_74621_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1365_fu_74621_p2() {
    mul_ln1118_1365_fu_74621_p2 = (!mul_ln1118_1365_fu_74621_p0.read().is_01() || !mul_ln1118_1365_fu_74621_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1365_fu_74621_p0.read()) * sc_bigint<32>(mul_ln1118_1365_fu_74621_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1366_fu_74651_p0() {
    mul_ln1118_1366_fu_74651_p0 = tmp_1460_fu_74637_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1366_fu_74651_p1() {
    mul_ln1118_1366_fu_74651_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1366_fu_74651_p2() {
    mul_ln1118_1366_fu_74651_p2 = (!mul_ln1118_1366_fu_74651_p0.read().is_01() || !mul_ln1118_1366_fu_74651_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1366_fu_74651_p0.read()) * sc_bigint<32>(mul_ln1118_1366_fu_74651_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1367_fu_74681_p0() {
    mul_ln1118_1367_fu_74681_p0 = tmp_1461_fu_74667_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1367_fu_74681_p1() {
    mul_ln1118_1367_fu_74681_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1367_fu_74681_p2() {
    mul_ln1118_1367_fu_74681_p2 = (!mul_ln1118_1367_fu_74681_p0.read().is_01() || !mul_ln1118_1367_fu_74681_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1367_fu_74681_p0.read()) * sc_bigint<32>(mul_ln1118_1367_fu_74681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1368_fu_74825_p0() {
    mul_ln1118_1368_fu_74825_p0 = tmp_1462_fu_74811_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1368_fu_74825_p1() {
    mul_ln1118_1368_fu_74825_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1368_fu_74825_p2() {
    mul_ln1118_1368_fu_74825_p2 = (!mul_ln1118_1368_fu_74825_p0.read().is_01() || !mul_ln1118_1368_fu_74825_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1368_fu_74825_p0.read()) * sc_bigint<32>(mul_ln1118_1368_fu_74825_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1369_fu_74855_p0() {
    mul_ln1118_1369_fu_74855_p0 = tmp_1463_fu_74841_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1369_fu_74855_p1() {
    mul_ln1118_1369_fu_74855_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1369_fu_74855_p2() {
    mul_ln1118_1369_fu_74855_p2 = (!mul_ln1118_1369_fu_74855_p0.read().is_01() || !mul_ln1118_1369_fu_74855_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1369_fu_74855_p0.read()) * sc_bigint<32>(mul_ln1118_1369_fu_74855_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_136_fu_30284_p0() {
    mul_ln1118_136_fu_30284_p0 = tmp_155_fu_30270_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_136_fu_30284_p1() {
    mul_ln1118_136_fu_30284_p1 =  (sc_lv<32>) (sext_ln1116_3_cast_fu_25444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_136_fu_30284_p2() {
    mul_ln1118_136_fu_30284_p2 = (!mul_ln1118_136_fu_30284_p0.read().is_01() || !mul_ln1118_136_fu_30284_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_136_fu_30284_p0.read()) * sc_bigint<32>(mul_ln1118_136_fu_30284_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1370_fu_74885_p0() {
    mul_ln1118_1370_fu_74885_p0 = tmp_1464_fu_74871_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1370_fu_74885_p1() {
    mul_ln1118_1370_fu_74885_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1370_fu_74885_p2() {
    mul_ln1118_1370_fu_74885_p2 = (!mul_ln1118_1370_fu_74885_p0.read().is_01() || !mul_ln1118_1370_fu_74885_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1370_fu_74885_p0.read()) * sc_bigint<32>(mul_ln1118_1370_fu_74885_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1371_fu_74915_p0() {
    mul_ln1118_1371_fu_74915_p0 = tmp_1465_fu_74901_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1371_fu_74915_p1() {
    mul_ln1118_1371_fu_74915_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1371_fu_74915_p2() {
    mul_ln1118_1371_fu_74915_p2 = (!mul_ln1118_1371_fu_74915_p0.read().is_01() || !mul_ln1118_1371_fu_74915_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1371_fu_74915_p0.read()) * sc_bigint<32>(mul_ln1118_1371_fu_74915_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1372_fu_74945_p0() {
    mul_ln1118_1372_fu_74945_p0 = tmp_1466_fu_74931_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1372_fu_74945_p1() {
    mul_ln1118_1372_fu_74945_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1372_fu_74945_p2() {
    mul_ln1118_1372_fu_74945_p2 = (!mul_ln1118_1372_fu_74945_p0.read().is_01() || !mul_ln1118_1372_fu_74945_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1372_fu_74945_p0.read()) * sc_bigint<32>(mul_ln1118_1372_fu_74945_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1373_fu_74975_p0() {
    mul_ln1118_1373_fu_74975_p0 = tmp_1467_fu_74961_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1373_fu_74975_p1() {
    mul_ln1118_1373_fu_74975_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1373_fu_74975_p2() {
    mul_ln1118_1373_fu_74975_p2 = (!mul_ln1118_1373_fu_74975_p0.read().is_01() || !mul_ln1118_1373_fu_74975_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1373_fu_74975_p0.read()) * sc_bigint<32>(mul_ln1118_1373_fu_74975_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1374_fu_75005_p0() {
    mul_ln1118_1374_fu_75005_p0 = tmp_1468_fu_74991_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1374_fu_75005_p1() {
    mul_ln1118_1374_fu_75005_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1374_fu_75005_p2() {
    mul_ln1118_1374_fu_75005_p2 = (!mul_ln1118_1374_fu_75005_p0.read().is_01() || !mul_ln1118_1374_fu_75005_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1374_fu_75005_p0.read()) * sc_bigint<32>(mul_ln1118_1374_fu_75005_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1375_fu_75035_p0() {
    mul_ln1118_1375_fu_75035_p0 = tmp_1469_fu_75021_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1375_fu_75035_p1() {
    mul_ln1118_1375_fu_75035_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1375_fu_75035_p2() {
    mul_ln1118_1375_fu_75035_p2 = (!mul_ln1118_1375_fu_75035_p0.read().is_01() || !mul_ln1118_1375_fu_75035_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1375_fu_75035_p0.read()) * sc_bigint<32>(mul_ln1118_1375_fu_75035_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1376_fu_75065_p0() {
    mul_ln1118_1376_fu_75065_p0 = tmp_1470_fu_75051_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1376_fu_75065_p1() {
    mul_ln1118_1376_fu_75065_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1376_fu_75065_p2() {
    mul_ln1118_1376_fu_75065_p2 = (!mul_ln1118_1376_fu_75065_p0.read().is_01() || !mul_ln1118_1376_fu_75065_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1376_fu_75065_p0.read()) * sc_bigint<32>(mul_ln1118_1376_fu_75065_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1377_fu_75095_p0() {
    mul_ln1118_1377_fu_75095_p0 = tmp_1471_fu_75081_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1377_fu_75095_p1() {
    mul_ln1118_1377_fu_75095_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1377_fu_75095_p2() {
    mul_ln1118_1377_fu_75095_p2 = (!mul_ln1118_1377_fu_75095_p0.read().is_01() || !mul_ln1118_1377_fu_75095_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1377_fu_75095_p0.read()) * sc_bigint<32>(mul_ln1118_1377_fu_75095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1378_fu_75125_p0() {
    mul_ln1118_1378_fu_75125_p0 = tmp_1472_fu_75111_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1378_fu_75125_p1() {
    mul_ln1118_1378_fu_75125_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1378_fu_75125_p2() {
    mul_ln1118_1378_fu_75125_p2 = (!mul_ln1118_1378_fu_75125_p0.read().is_01() || !mul_ln1118_1378_fu_75125_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1378_fu_75125_p0.read()) * sc_bigint<32>(mul_ln1118_1378_fu_75125_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1379_fu_75155_p0() {
    mul_ln1118_1379_fu_75155_p0 = tmp_1473_fu_75141_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1379_fu_75155_p1() {
    mul_ln1118_1379_fu_75155_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1379_fu_75155_p2() {
    mul_ln1118_1379_fu_75155_p2 = (!mul_ln1118_1379_fu_75155_p0.read().is_01() || !mul_ln1118_1379_fu_75155_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1379_fu_75155_p0.read()) * sc_bigint<32>(mul_ln1118_1379_fu_75155_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_137_fu_30314_p0() {
    mul_ln1118_137_fu_30314_p0 = tmp_156_fu_30300_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_137_fu_30314_p1() {
    mul_ln1118_137_fu_30314_p1 =  (sc_lv<32>) (sext_ln1116_4_cast_fu_25477_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_137_fu_30314_p2() {
    mul_ln1118_137_fu_30314_p2 = (!mul_ln1118_137_fu_30314_p0.read().is_01() || !mul_ln1118_137_fu_30314_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_137_fu_30314_p0.read()) * sc_bigint<32>(mul_ln1118_137_fu_30314_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1380_fu_75185_p0() {
    mul_ln1118_1380_fu_75185_p0 = tmp_1474_fu_75171_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1380_fu_75185_p1() {
    mul_ln1118_1380_fu_75185_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1380_fu_75185_p2() {
    mul_ln1118_1380_fu_75185_p2 = (!mul_ln1118_1380_fu_75185_p0.read().is_01() || !mul_ln1118_1380_fu_75185_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1380_fu_75185_p0.read()) * sc_bigint<32>(mul_ln1118_1380_fu_75185_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1381_fu_75215_p0() {
    mul_ln1118_1381_fu_75215_p0 = tmp_1475_fu_75201_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1381_fu_75215_p1() {
    mul_ln1118_1381_fu_75215_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1381_fu_75215_p2() {
    mul_ln1118_1381_fu_75215_p2 = (!mul_ln1118_1381_fu_75215_p0.read().is_01() || !mul_ln1118_1381_fu_75215_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1381_fu_75215_p0.read()) * sc_bigint<32>(mul_ln1118_1381_fu_75215_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1382_fu_75245_p0() {
    mul_ln1118_1382_fu_75245_p0 = tmp_1476_fu_75231_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1382_fu_75245_p1() {
    mul_ln1118_1382_fu_75245_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1382_fu_75245_p2() {
    mul_ln1118_1382_fu_75245_p2 = (!mul_ln1118_1382_fu_75245_p0.read().is_01() || !mul_ln1118_1382_fu_75245_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1382_fu_75245_p0.read()) * sc_bigint<32>(mul_ln1118_1382_fu_75245_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1383_fu_75275_p0() {
    mul_ln1118_1383_fu_75275_p0 = tmp_1477_fu_75261_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1383_fu_75275_p1() {
    mul_ln1118_1383_fu_75275_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1383_fu_75275_p2() {
    mul_ln1118_1383_fu_75275_p2 = (!mul_ln1118_1383_fu_75275_p0.read().is_01() || !mul_ln1118_1383_fu_75275_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1383_fu_75275_p0.read()) * sc_bigint<32>(mul_ln1118_1383_fu_75275_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1384_fu_75305_p0() {
    mul_ln1118_1384_fu_75305_p0 = tmp_1478_fu_75291_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1384_fu_75305_p1() {
    mul_ln1118_1384_fu_75305_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1384_fu_75305_p2() {
    mul_ln1118_1384_fu_75305_p2 = (!mul_ln1118_1384_fu_75305_p0.read().is_01() || !mul_ln1118_1384_fu_75305_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1384_fu_75305_p0.read()) * sc_bigint<32>(mul_ln1118_1384_fu_75305_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1385_fu_75335_p0() {
    mul_ln1118_1385_fu_75335_p0 = tmp_1479_fu_75321_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1385_fu_75335_p1() {
    mul_ln1118_1385_fu_75335_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1385_fu_75335_p2() {
    mul_ln1118_1385_fu_75335_p2 = (!mul_ln1118_1385_fu_75335_p0.read().is_01() || !mul_ln1118_1385_fu_75335_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1385_fu_75335_p0.read()) * sc_bigint<32>(mul_ln1118_1385_fu_75335_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1386_fu_75365_p0() {
    mul_ln1118_1386_fu_75365_p0 = tmp_1480_fu_75351_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1386_fu_75365_p1() {
    mul_ln1118_1386_fu_75365_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1386_fu_75365_p2() {
    mul_ln1118_1386_fu_75365_p2 = (!mul_ln1118_1386_fu_75365_p0.read().is_01() || !mul_ln1118_1386_fu_75365_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1386_fu_75365_p0.read()) * sc_bigint<32>(mul_ln1118_1386_fu_75365_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1387_fu_75509_p0() {
    mul_ln1118_1387_fu_75509_p0 = tmp_1481_fu_75495_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1387_fu_75509_p1() {
    mul_ln1118_1387_fu_75509_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1387_fu_75509_p2() {
    mul_ln1118_1387_fu_75509_p2 = (!mul_ln1118_1387_fu_75509_p0.read().is_01() || !mul_ln1118_1387_fu_75509_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1387_fu_75509_p0.read()) * sc_bigint<32>(mul_ln1118_1387_fu_75509_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1388_fu_75539_p0() {
    mul_ln1118_1388_fu_75539_p0 = tmp_1482_fu_75525_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1388_fu_75539_p1() {
    mul_ln1118_1388_fu_75539_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1388_fu_75539_p2() {
    mul_ln1118_1388_fu_75539_p2 = (!mul_ln1118_1388_fu_75539_p0.read().is_01() || !mul_ln1118_1388_fu_75539_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1388_fu_75539_p0.read()) * sc_bigint<32>(mul_ln1118_1388_fu_75539_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1389_fu_75569_p0() {
    mul_ln1118_1389_fu_75569_p0 = tmp_1483_fu_75555_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1389_fu_75569_p1() {
    mul_ln1118_1389_fu_75569_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1389_fu_75569_p2() {
    mul_ln1118_1389_fu_75569_p2 = (!mul_ln1118_1389_fu_75569_p0.read().is_01() || !mul_ln1118_1389_fu_75569_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1389_fu_75569_p0.read()) * sc_bigint<32>(mul_ln1118_1389_fu_75569_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_138_fu_30344_p0() {
    mul_ln1118_138_fu_30344_p0 = tmp_157_fu_30330_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_138_fu_30344_p1() {
    mul_ln1118_138_fu_30344_p1 =  (sc_lv<32>) (sext_ln1116_5_cast_fu_25510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_138_fu_30344_p2() {
    mul_ln1118_138_fu_30344_p2 = (!mul_ln1118_138_fu_30344_p0.read().is_01() || !mul_ln1118_138_fu_30344_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_138_fu_30344_p0.read()) * sc_bigint<32>(mul_ln1118_138_fu_30344_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1390_fu_75599_p0() {
    mul_ln1118_1390_fu_75599_p0 = tmp_1484_fu_75585_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1390_fu_75599_p1() {
    mul_ln1118_1390_fu_75599_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1390_fu_75599_p2() {
    mul_ln1118_1390_fu_75599_p2 = (!mul_ln1118_1390_fu_75599_p0.read().is_01() || !mul_ln1118_1390_fu_75599_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1390_fu_75599_p0.read()) * sc_bigint<32>(mul_ln1118_1390_fu_75599_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1391_fu_75629_p0() {
    mul_ln1118_1391_fu_75629_p0 = tmp_1485_fu_75615_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1391_fu_75629_p1() {
    mul_ln1118_1391_fu_75629_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1391_fu_75629_p2() {
    mul_ln1118_1391_fu_75629_p2 = (!mul_ln1118_1391_fu_75629_p0.read().is_01() || !mul_ln1118_1391_fu_75629_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1391_fu_75629_p0.read()) * sc_bigint<32>(mul_ln1118_1391_fu_75629_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1392_fu_75659_p0() {
    mul_ln1118_1392_fu_75659_p0 = tmp_1486_fu_75645_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1392_fu_75659_p1() {
    mul_ln1118_1392_fu_75659_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1392_fu_75659_p2() {
    mul_ln1118_1392_fu_75659_p2 = (!mul_ln1118_1392_fu_75659_p0.read().is_01() || !mul_ln1118_1392_fu_75659_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1392_fu_75659_p0.read()) * sc_bigint<32>(mul_ln1118_1392_fu_75659_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1393_fu_75689_p0() {
    mul_ln1118_1393_fu_75689_p0 = tmp_1487_fu_75675_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1393_fu_75689_p1() {
    mul_ln1118_1393_fu_75689_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1393_fu_75689_p2() {
    mul_ln1118_1393_fu_75689_p2 = (!mul_ln1118_1393_fu_75689_p0.read().is_01() || !mul_ln1118_1393_fu_75689_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1393_fu_75689_p0.read()) * sc_bigint<32>(mul_ln1118_1393_fu_75689_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1394_fu_75719_p0() {
    mul_ln1118_1394_fu_75719_p0 = tmp_1488_fu_75705_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1394_fu_75719_p1() {
    mul_ln1118_1394_fu_75719_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1394_fu_75719_p2() {
    mul_ln1118_1394_fu_75719_p2 = (!mul_ln1118_1394_fu_75719_p0.read().is_01() || !mul_ln1118_1394_fu_75719_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1394_fu_75719_p0.read()) * sc_bigint<32>(mul_ln1118_1394_fu_75719_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1395_fu_75749_p0() {
    mul_ln1118_1395_fu_75749_p0 = tmp_1489_fu_75735_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1395_fu_75749_p1() {
    mul_ln1118_1395_fu_75749_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1395_fu_75749_p2() {
    mul_ln1118_1395_fu_75749_p2 = (!mul_ln1118_1395_fu_75749_p0.read().is_01() || !mul_ln1118_1395_fu_75749_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1395_fu_75749_p0.read()) * sc_bigint<32>(mul_ln1118_1395_fu_75749_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1396_fu_75779_p0() {
    mul_ln1118_1396_fu_75779_p0 = tmp_1490_fu_75765_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1396_fu_75779_p1() {
    mul_ln1118_1396_fu_75779_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1396_fu_75779_p2() {
    mul_ln1118_1396_fu_75779_p2 = (!mul_ln1118_1396_fu_75779_p0.read().is_01() || !mul_ln1118_1396_fu_75779_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1396_fu_75779_p0.read()) * sc_bigint<32>(mul_ln1118_1396_fu_75779_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1397_fu_75809_p0() {
    mul_ln1118_1397_fu_75809_p0 = tmp_1491_fu_75795_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1397_fu_75809_p1() {
    mul_ln1118_1397_fu_75809_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1397_fu_75809_p2() {
    mul_ln1118_1397_fu_75809_p2 = (!mul_ln1118_1397_fu_75809_p0.read().is_01() || !mul_ln1118_1397_fu_75809_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1397_fu_75809_p0.read()) * sc_bigint<32>(mul_ln1118_1397_fu_75809_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1398_fu_75839_p0() {
    mul_ln1118_1398_fu_75839_p0 = tmp_1492_fu_75825_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1398_fu_75839_p1() {
    mul_ln1118_1398_fu_75839_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1398_fu_75839_p2() {
    mul_ln1118_1398_fu_75839_p2 = (!mul_ln1118_1398_fu_75839_p0.read().is_01() || !mul_ln1118_1398_fu_75839_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1398_fu_75839_p0.read()) * sc_bigint<32>(mul_ln1118_1398_fu_75839_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1399_fu_75869_p0() {
    mul_ln1118_1399_fu_75869_p0 = tmp_1493_fu_75855_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1399_fu_75869_p1() {
    mul_ln1118_1399_fu_75869_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1399_fu_75869_p2() {
    mul_ln1118_1399_fu_75869_p2 = (!mul_ln1118_1399_fu_75869_p0.read().is_01() || !mul_ln1118_1399_fu_75869_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1399_fu_75869_p0.read()) * sc_bigint<32>(mul_ln1118_1399_fu_75869_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_139_fu_30374_p0() {
    mul_ln1118_139_fu_30374_p0 = tmp_158_fu_30360_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_139_fu_30374_p1() {
    mul_ln1118_139_fu_30374_p1 =  (sc_lv<32>) (sext_ln1116_6_cast_fu_25543_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_139_fu_30374_p2() {
    mul_ln1118_139_fu_30374_p2 = (!mul_ln1118_139_fu_30374_p0.read().is_01() || !mul_ln1118_139_fu_30374_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_139_fu_30374_p0.read()) * sc_bigint<32>(mul_ln1118_139_fu_30374_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_13_fu_25781_p0() {
    mul_ln1118_13_fu_25781_p0 = tmp_27_fu_25764_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_13_fu_25781_p1() {
    mul_ln1118_13_fu_25781_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_13_fu_25781_p2() {
    mul_ln1118_13_fu_25781_p2 = (!mul_ln1118_13_fu_25781_p0.read().is_01() || !mul_ln1118_13_fu_25781_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_13_fu_25781_p0.read()) * sc_bigint<32>(mul_ln1118_13_fu_25781_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1400_fu_75899_p0() {
    mul_ln1118_1400_fu_75899_p0 = tmp_1494_fu_75885_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1400_fu_75899_p1() {
    mul_ln1118_1400_fu_75899_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1400_fu_75899_p2() {
    mul_ln1118_1400_fu_75899_p2 = (!mul_ln1118_1400_fu_75899_p0.read().is_01() || !mul_ln1118_1400_fu_75899_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1400_fu_75899_p0.read()) * sc_bigint<32>(mul_ln1118_1400_fu_75899_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1401_fu_75929_p0() {
    mul_ln1118_1401_fu_75929_p0 = tmp_1495_fu_75915_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1401_fu_75929_p1() {
    mul_ln1118_1401_fu_75929_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1401_fu_75929_p2() {
    mul_ln1118_1401_fu_75929_p2 = (!mul_ln1118_1401_fu_75929_p0.read().is_01() || !mul_ln1118_1401_fu_75929_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1401_fu_75929_p0.read()) * sc_bigint<32>(mul_ln1118_1401_fu_75929_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1402_fu_75959_p0() {
    mul_ln1118_1402_fu_75959_p0 = tmp_1496_fu_75945_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1402_fu_75959_p1() {
    mul_ln1118_1402_fu_75959_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1402_fu_75959_p2() {
    mul_ln1118_1402_fu_75959_p2 = (!mul_ln1118_1402_fu_75959_p0.read().is_01() || !mul_ln1118_1402_fu_75959_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1402_fu_75959_p0.read()) * sc_bigint<32>(mul_ln1118_1402_fu_75959_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1403_fu_75989_p0() {
    mul_ln1118_1403_fu_75989_p0 = tmp_1497_fu_75975_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1403_fu_75989_p1() {
    mul_ln1118_1403_fu_75989_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1403_fu_75989_p2() {
    mul_ln1118_1403_fu_75989_p2 = (!mul_ln1118_1403_fu_75989_p0.read().is_01() || !mul_ln1118_1403_fu_75989_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1403_fu_75989_p0.read()) * sc_bigint<32>(mul_ln1118_1403_fu_75989_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1404_fu_76019_p0() {
    mul_ln1118_1404_fu_76019_p0 = tmp_1498_fu_76005_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1404_fu_76019_p1() {
    mul_ln1118_1404_fu_76019_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1404_fu_76019_p2() {
    mul_ln1118_1404_fu_76019_p2 = (!mul_ln1118_1404_fu_76019_p0.read().is_01() || !mul_ln1118_1404_fu_76019_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1404_fu_76019_p0.read()) * sc_bigint<32>(mul_ln1118_1404_fu_76019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1405_fu_76049_p0() {
    mul_ln1118_1405_fu_76049_p0 = tmp_1499_fu_76035_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1405_fu_76049_p1() {
    mul_ln1118_1405_fu_76049_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1405_fu_76049_p2() {
    mul_ln1118_1405_fu_76049_p2 = (!mul_ln1118_1405_fu_76049_p0.read().is_01() || !mul_ln1118_1405_fu_76049_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1405_fu_76049_p0.read()) * sc_bigint<32>(mul_ln1118_1405_fu_76049_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1406_fu_76193_p0() {
    mul_ln1118_1406_fu_76193_p0 = tmp_1500_fu_76179_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1406_fu_76193_p1() {
    mul_ln1118_1406_fu_76193_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1406_fu_76193_p2() {
    mul_ln1118_1406_fu_76193_p2 = (!mul_ln1118_1406_fu_76193_p0.read().is_01() || !mul_ln1118_1406_fu_76193_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1406_fu_76193_p0.read()) * sc_bigint<32>(mul_ln1118_1406_fu_76193_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1407_fu_76223_p0() {
    mul_ln1118_1407_fu_76223_p0 = tmp_1501_fu_76209_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1407_fu_76223_p1() {
    mul_ln1118_1407_fu_76223_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1407_fu_76223_p2() {
    mul_ln1118_1407_fu_76223_p2 = (!mul_ln1118_1407_fu_76223_p0.read().is_01() || !mul_ln1118_1407_fu_76223_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1407_fu_76223_p0.read()) * sc_bigint<32>(mul_ln1118_1407_fu_76223_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1408_fu_76253_p0() {
    mul_ln1118_1408_fu_76253_p0 = tmp_1502_fu_76239_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1408_fu_76253_p1() {
    mul_ln1118_1408_fu_76253_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1408_fu_76253_p2() {
    mul_ln1118_1408_fu_76253_p2 = (!mul_ln1118_1408_fu_76253_p0.read().is_01() || !mul_ln1118_1408_fu_76253_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1408_fu_76253_p0.read()) * sc_bigint<32>(mul_ln1118_1408_fu_76253_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1409_fu_76283_p0() {
    mul_ln1118_1409_fu_76283_p0 = tmp_1503_fu_76269_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1409_fu_76283_p1() {
    mul_ln1118_1409_fu_76283_p1 =  (sc_lv<32>) (sext_ln1116_119_cast_fu_59821_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1409_fu_76283_p2() {
    mul_ln1118_1409_fu_76283_p2 = (!mul_ln1118_1409_fu_76283_p0.read().is_01() || !mul_ln1118_1409_fu_76283_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1409_fu_76283_p0.read()) * sc_bigint<32>(mul_ln1118_1409_fu_76283_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_140_fu_30404_p0() {
    mul_ln1118_140_fu_30404_p0 = tmp_159_fu_30390_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_140_fu_30404_p1() {
    mul_ln1118_140_fu_30404_p1 =  (sc_lv<32>) (sext_ln1116_7_cast_fu_25576_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_140_fu_30404_p2() {
    mul_ln1118_140_fu_30404_p2 = (!mul_ln1118_140_fu_30404_p0.read().is_01() || !mul_ln1118_140_fu_30404_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_140_fu_30404_p0.read()) * sc_bigint<32>(mul_ln1118_140_fu_30404_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1410_fu_76313_p0() {
    mul_ln1118_1410_fu_76313_p0 = tmp_1504_fu_76299_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1410_fu_76313_p1() {
    mul_ln1118_1410_fu_76313_p1 =  (sc_lv<32>) (sext_ln1116_120_cast_fu_59854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1410_fu_76313_p2() {
    mul_ln1118_1410_fu_76313_p2 = (!mul_ln1118_1410_fu_76313_p0.read().is_01() || !mul_ln1118_1410_fu_76313_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1410_fu_76313_p0.read()) * sc_bigint<32>(mul_ln1118_1410_fu_76313_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1411_fu_76343_p0() {
    mul_ln1118_1411_fu_76343_p0 = tmp_1505_fu_76329_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1411_fu_76343_p1() {
    mul_ln1118_1411_fu_76343_p1 =  (sc_lv<32>) (sext_ln1116_121_cast_fu_59887_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1411_fu_76343_p2() {
    mul_ln1118_1411_fu_76343_p2 = (!mul_ln1118_1411_fu_76343_p0.read().is_01() || !mul_ln1118_1411_fu_76343_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1411_fu_76343_p0.read()) * sc_bigint<32>(mul_ln1118_1411_fu_76343_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1412_fu_76373_p0() {
    mul_ln1118_1412_fu_76373_p0 = tmp_1506_fu_76359_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1412_fu_76373_p1() {
    mul_ln1118_1412_fu_76373_p1 =  (sc_lv<32>) (sext_ln1116_122_cast_fu_59920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1412_fu_76373_p2() {
    mul_ln1118_1412_fu_76373_p2 = (!mul_ln1118_1412_fu_76373_p0.read().is_01() || !mul_ln1118_1412_fu_76373_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1412_fu_76373_p0.read()) * sc_bigint<32>(mul_ln1118_1412_fu_76373_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1413_fu_76403_p0() {
    mul_ln1118_1413_fu_76403_p0 = tmp_1507_fu_76389_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1413_fu_76403_p1() {
    mul_ln1118_1413_fu_76403_p1 =  (sc_lv<32>) (sext_ln1116_123_cast_fu_59953_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1413_fu_76403_p2() {
    mul_ln1118_1413_fu_76403_p2 = (!mul_ln1118_1413_fu_76403_p0.read().is_01() || !mul_ln1118_1413_fu_76403_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1413_fu_76403_p0.read()) * sc_bigint<32>(mul_ln1118_1413_fu_76403_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1414_fu_76433_p0() {
    mul_ln1118_1414_fu_76433_p0 = tmp_1508_fu_76419_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1414_fu_76433_p1() {
    mul_ln1118_1414_fu_76433_p1 =  (sc_lv<32>) (sext_ln1116_124_cast_fu_59986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1414_fu_76433_p2() {
    mul_ln1118_1414_fu_76433_p2 = (!mul_ln1118_1414_fu_76433_p0.read().is_01() || !mul_ln1118_1414_fu_76433_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1414_fu_76433_p0.read()) * sc_bigint<32>(mul_ln1118_1414_fu_76433_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1415_fu_76463_p0() {
    mul_ln1118_1415_fu_76463_p0 = tmp_1509_fu_76449_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1415_fu_76463_p1() {
    mul_ln1118_1415_fu_76463_p1 =  (sc_lv<32>) (sext_ln1116_125_cast_fu_60019_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1415_fu_76463_p2() {
    mul_ln1118_1415_fu_76463_p2 = (!mul_ln1118_1415_fu_76463_p0.read().is_01() || !mul_ln1118_1415_fu_76463_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1415_fu_76463_p0.read()) * sc_bigint<32>(mul_ln1118_1415_fu_76463_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1416_fu_76493_p0() {
    mul_ln1118_1416_fu_76493_p0 = tmp_1510_fu_76479_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1416_fu_76493_p1() {
    mul_ln1118_1416_fu_76493_p1 =  (sc_lv<32>) (sext_ln1116_126_cast_fu_60052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1416_fu_76493_p2() {
    mul_ln1118_1416_fu_76493_p2 = (!mul_ln1118_1416_fu_76493_p0.read().is_01() || !mul_ln1118_1416_fu_76493_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1416_fu_76493_p0.read()) * sc_bigint<32>(mul_ln1118_1416_fu_76493_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1417_fu_76523_p0() {
    mul_ln1118_1417_fu_76523_p0 = tmp_1511_fu_76509_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1417_fu_76523_p1() {
    mul_ln1118_1417_fu_76523_p1 =  (sc_lv<32>) (sext_ln1116_127_cast_fu_60085_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1417_fu_76523_p2() {
    mul_ln1118_1417_fu_76523_p2 = (!mul_ln1118_1417_fu_76523_p0.read().is_01() || !mul_ln1118_1417_fu_76523_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1417_fu_76523_p0.read()) * sc_bigint<32>(mul_ln1118_1417_fu_76523_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1418_fu_76553_p0() {
    mul_ln1118_1418_fu_76553_p0 = tmp_1512_fu_76539_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1418_fu_76553_p1() {
    mul_ln1118_1418_fu_76553_p1 =  (sc_lv<32>) (sext_ln1116_128_cast_fu_60118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1418_fu_76553_p2() {
    mul_ln1118_1418_fu_76553_p2 = (!mul_ln1118_1418_fu_76553_p0.read().is_01() || !mul_ln1118_1418_fu_76553_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1418_fu_76553_p0.read()) * sc_bigint<32>(mul_ln1118_1418_fu_76553_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1419_fu_76583_p0() {
    mul_ln1118_1419_fu_76583_p0 = tmp_1513_fu_76569_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1419_fu_76583_p1() {
    mul_ln1118_1419_fu_76583_p1 =  (sc_lv<32>) (sext_ln1116_129_cast_fu_60151_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1419_fu_76583_p2() {
    mul_ln1118_1419_fu_76583_p2 = (!mul_ln1118_1419_fu_76583_p0.read().is_01() || !mul_ln1118_1419_fu_76583_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1419_fu_76583_p0.read()) * sc_bigint<32>(mul_ln1118_1419_fu_76583_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_141_fu_30434_p0() {
    mul_ln1118_141_fu_30434_p0 = tmp_160_fu_30420_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_141_fu_30434_p1() {
    mul_ln1118_141_fu_30434_p1 =  (sc_lv<32>) (sext_ln1116_8_cast_fu_25609_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_141_fu_30434_p2() {
    mul_ln1118_141_fu_30434_p2 = (!mul_ln1118_141_fu_30434_p0.read().is_01() || !mul_ln1118_141_fu_30434_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_141_fu_30434_p0.read()) * sc_bigint<32>(mul_ln1118_141_fu_30434_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1420_fu_76613_p0() {
    mul_ln1118_1420_fu_76613_p0 = tmp_1514_fu_76599_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1420_fu_76613_p1() {
    mul_ln1118_1420_fu_76613_p1 =  (sc_lv<32>) (sext_ln1116_130_cast_fu_60184_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1420_fu_76613_p2() {
    mul_ln1118_1420_fu_76613_p2 = (!mul_ln1118_1420_fu_76613_p0.read().is_01() || !mul_ln1118_1420_fu_76613_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1420_fu_76613_p0.read()) * sc_bigint<32>(mul_ln1118_1420_fu_76613_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1421_fu_76643_p0() {
    mul_ln1118_1421_fu_76643_p0 = tmp_1515_fu_76629_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1421_fu_76643_p1() {
    mul_ln1118_1421_fu_76643_p1 =  (sc_lv<32>) (sext_ln1116_131_cast_fu_60217_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1421_fu_76643_p2() {
    mul_ln1118_1421_fu_76643_p2 = (!mul_ln1118_1421_fu_76643_p0.read().is_01() || !mul_ln1118_1421_fu_76643_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1421_fu_76643_p0.read()) * sc_bigint<32>(mul_ln1118_1421_fu_76643_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1422_fu_76673_p0() {
    mul_ln1118_1422_fu_76673_p0 = tmp_1516_fu_76659_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1422_fu_76673_p1() {
    mul_ln1118_1422_fu_76673_p1 =  (sc_lv<32>) (sext_ln1116_132_cast_fu_60250_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1422_fu_76673_p2() {
    mul_ln1118_1422_fu_76673_p2 = (!mul_ln1118_1422_fu_76673_p0.read().is_01() || !mul_ln1118_1422_fu_76673_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1422_fu_76673_p0.read()) * sc_bigint<32>(mul_ln1118_1422_fu_76673_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1423_fu_76703_p0() {
    mul_ln1118_1423_fu_76703_p0 = tmp_1517_fu_76689_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1423_fu_76703_p1() {
    mul_ln1118_1423_fu_76703_p1 =  (sc_lv<32>) (sext_ln1116_114_cast_fu_59542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1423_fu_76703_p2() {
    mul_ln1118_1423_fu_76703_p2 = (!mul_ln1118_1423_fu_76703_p0.read().is_01() || !mul_ln1118_1423_fu_76703_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1423_fu_76703_p0.read()) * sc_bigint<32>(mul_ln1118_1423_fu_76703_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1424_fu_76733_p0() {
    mul_ln1118_1424_fu_76733_p0 = tmp_1518_fu_76719_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1424_fu_76733_p1() {
    mul_ln1118_1424_fu_76733_p1 =  (sc_lv<32>) (sext_ln1116_115_cast_fu_59575_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1424_fu_76733_p2() {
    mul_ln1118_1424_fu_76733_p2 = (!mul_ln1118_1424_fu_76733_p0.read().is_01() || !mul_ln1118_1424_fu_76733_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1424_fu_76733_p0.read()) * sc_bigint<32>(mul_ln1118_1424_fu_76733_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1425_fu_76877_p0() {
    mul_ln1118_1425_fu_76877_p0 = tmp_1519_fu_76863_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1425_fu_76877_p1() {
    mul_ln1118_1425_fu_76877_p1 =  (sc_lv<32>) (sext_ln1116_116_cast_fu_59722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1425_fu_76877_p2() {
    mul_ln1118_1425_fu_76877_p2 = (!mul_ln1118_1425_fu_76877_p0.read().is_01() || !mul_ln1118_1425_fu_76877_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1425_fu_76877_p0.read()) * sc_bigint<32>(mul_ln1118_1425_fu_76877_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1426_fu_76907_p0() {
    mul_ln1118_1426_fu_76907_p0 = tmp_1520_fu_76893_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1426_fu_76907_p1() {
    mul_ln1118_1426_fu_76907_p1 =  (sc_lv<32>) (sext_ln1116_117_cast_fu_59755_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1426_fu_76907_p2() {
    mul_ln1118_1426_fu_76907_p2 = (!mul_ln1118_1426_fu_76907_p0.read().is_01() || !mul_ln1118_1426_fu_76907_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1426_fu_76907_p0.read()) * sc_bigint<32>(mul_ln1118_1426_fu_76907_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1427_fu_76937_p0() {
    mul_ln1118_1427_fu_76937_p0 = tmp_1521_fu_76923_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1427_fu_76937_p1() {
    mul_ln1118_1427_fu_76937_p1 =  (sc_lv<32>) (sext_ln1116_118_cast_fu_59788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1427_fu_76937_p2() {
    mul_ln1118_1427_fu_76937_p2 = (!mul_ln1118_1427_fu_76937_p0.read().is_01() || !mul_ln1118_1427_fu_76937_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1427_fu_76937_p0.read()) * sc_bigint<32>(mul_ln1118_1427_fu_76937_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1428_fu_76970_p0() {
    mul_ln1118_1428_fu_76970_p0 = tmp_1523_fu_76953_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1428_fu_76970_p1() {
    mul_ln1118_1428_fu_76970_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1428_fu_76970_p2() {
    mul_ln1118_1428_fu_76970_p2 = (!mul_ln1118_1428_fu_76970_p0.read().is_01() || !mul_ln1118_1428_fu_76970_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1428_fu_76970_p0.read()) * sc_bigint<32>(mul_ln1118_1428_fu_76970_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1429_fu_77003_p0() {
    mul_ln1118_1429_fu_77003_p0 = tmp_1525_fu_76986_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1429_fu_77003_p1() {
    mul_ln1118_1429_fu_77003_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1429_fu_77003_p2() {
    mul_ln1118_1429_fu_77003_p2 = (!mul_ln1118_1429_fu_77003_p0.read().is_01() || !mul_ln1118_1429_fu_77003_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1429_fu_77003_p0.read()) * sc_bigint<32>(mul_ln1118_1429_fu_77003_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_142_fu_30464_p0() {
    mul_ln1118_142_fu_30464_p0 = tmp_161_fu_30450_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_142_fu_30464_p1() {
    mul_ln1118_142_fu_30464_p1 =  (sc_lv<32>) (sext_ln1116_9_cast_fu_25642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_142_fu_30464_p2() {
    mul_ln1118_142_fu_30464_p2 = (!mul_ln1118_142_fu_30464_p0.read().is_01() || !mul_ln1118_142_fu_30464_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_142_fu_30464_p0.read()) * sc_bigint<32>(mul_ln1118_142_fu_30464_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1430_fu_77036_p0() {
    mul_ln1118_1430_fu_77036_p0 = tmp_1527_fu_77019_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1430_fu_77036_p1() {
    mul_ln1118_1430_fu_77036_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1430_fu_77036_p2() {
    mul_ln1118_1430_fu_77036_p2 = (!mul_ln1118_1430_fu_77036_p0.read().is_01() || !mul_ln1118_1430_fu_77036_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1430_fu_77036_p0.read()) * sc_bigint<32>(mul_ln1118_1430_fu_77036_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1431_fu_77069_p0() {
    mul_ln1118_1431_fu_77069_p0 = tmp_1529_fu_77052_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1431_fu_77069_p1() {
    mul_ln1118_1431_fu_77069_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1431_fu_77069_p2() {
    mul_ln1118_1431_fu_77069_p2 = (!mul_ln1118_1431_fu_77069_p0.read().is_01() || !mul_ln1118_1431_fu_77069_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1431_fu_77069_p0.read()) * sc_bigint<32>(mul_ln1118_1431_fu_77069_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1432_fu_77102_p0() {
    mul_ln1118_1432_fu_77102_p0 = tmp_1531_fu_77085_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1432_fu_77102_p1() {
    mul_ln1118_1432_fu_77102_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1432_fu_77102_p2() {
    mul_ln1118_1432_fu_77102_p2 = (!mul_ln1118_1432_fu_77102_p0.read().is_01() || !mul_ln1118_1432_fu_77102_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1432_fu_77102_p0.read()) * sc_bigint<32>(mul_ln1118_1432_fu_77102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1433_fu_77135_p0() {
    mul_ln1118_1433_fu_77135_p0 = tmp_1533_fu_77118_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1433_fu_77135_p1() {
    mul_ln1118_1433_fu_77135_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1433_fu_77135_p2() {
    mul_ln1118_1433_fu_77135_p2 = (!mul_ln1118_1433_fu_77135_p0.read().is_01() || !mul_ln1118_1433_fu_77135_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1433_fu_77135_p0.read()) * sc_bigint<32>(mul_ln1118_1433_fu_77135_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1434_fu_77168_p0() {
    mul_ln1118_1434_fu_77168_p0 = tmp_1535_fu_77151_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1434_fu_77168_p1() {
    mul_ln1118_1434_fu_77168_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1434_fu_77168_p2() {
    mul_ln1118_1434_fu_77168_p2 = (!mul_ln1118_1434_fu_77168_p0.read().is_01() || !mul_ln1118_1434_fu_77168_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1434_fu_77168_p0.read()) * sc_bigint<32>(mul_ln1118_1434_fu_77168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1435_fu_77201_p0() {
    mul_ln1118_1435_fu_77201_p0 = tmp_1537_fu_77184_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1435_fu_77201_p1() {
    mul_ln1118_1435_fu_77201_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1435_fu_77201_p2() {
    mul_ln1118_1435_fu_77201_p2 = (!mul_ln1118_1435_fu_77201_p0.read().is_01() || !mul_ln1118_1435_fu_77201_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1435_fu_77201_p0.read()) * sc_bigint<32>(mul_ln1118_1435_fu_77201_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1436_fu_77234_p0() {
    mul_ln1118_1436_fu_77234_p0 = tmp_1539_fu_77217_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1436_fu_77234_p1() {
    mul_ln1118_1436_fu_77234_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1436_fu_77234_p2() {
    mul_ln1118_1436_fu_77234_p2 = (!mul_ln1118_1436_fu_77234_p0.read().is_01() || !mul_ln1118_1436_fu_77234_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1436_fu_77234_p0.read()) * sc_bigint<32>(mul_ln1118_1436_fu_77234_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1437_fu_77267_p0() {
    mul_ln1118_1437_fu_77267_p0 = tmp_1541_fu_77250_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1437_fu_77267_p1() {
    mul_ln1118_1437_fu_77267_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1437_fu_77267_p2() {
    mul_ln1118_1437_fu_77267_p2 = (!mul_ln1118_1437_fu_77267_p0.read().is_01() || !mul_ln1118_1437_fu_77267_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1437_fu_77267_p0.read()) * sc_bigint<32>(mul_ln1118_1437_fu_77267_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1438_fu_77300_p0() {
    mul_ln1118_1438_fu_77300_p0 = tmp_1543_fu_77283_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1438_fu_77300_p1() {
    mul_ln1118_1438_fu_77300_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1438_fu_77300_p2() {
    mul_ln1118_1438_fu_77300_p2 = (!mul_ln1118_1438_fu_77300_p0.read().is_01() || !mul_ln1118_1438_fu_77300_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1438_fu_77300_p0.read()) * sc_bigint<32>(mul_ln1118_1438_fu_77300_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1439_fu_77333_p0() {
    mul_ln1118_1439_fu_77333_p0 = tmp_1545_fu_77316_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1439_fu_77333_p1() {
    mul_ln1118_1439_fu_77333_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1439_fu_77333_p2() {
    mul_ln1118_1439_fu_77333_p2 = (!mul_ln1118_1439_fu_77333_p0.read().is_01() || !mul_ln1118_1439_fu_77333_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1439_fu_77333_p0.read()) * sc_bigint<32>(mul_ln1118_1439_fu_77333_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_143_fu_30494_p0() {
    mul_ln1118_143_fu_30494_p0 = tmp_162_fu_30480_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_143_fu_30494_p1() {
    mul_ln1118_143_fu_30494_p1 =  (sc_lv<32>) (sext_ln1116_10_cast_fu_25675_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_143_fu_30494_p2() {
    mul_ln1118_143_fu_30494_p2 = (!mul_ln1118_143_fu_30494_p0.read().is_01() || !mul_ln1118_143_fu_30494_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_143_fu_30494_p0.read()) * sc_bigint<32>(mul_ln1118_143_fu_30494_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1440_fu_77366_p0() {
    mul_ln1118_1440_fu_77366_p0 = tmp_1547_fu_77349_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1440_fu_77366_p1() {
    mul_ln1118_1440_fu_77366_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1440_fu_77366_p2() {
    mul_ln1118_1440_fu_77366_p2 = (!mul_ln1118_1440_fu_77366_p0.read().is_01() || !mul_ln1118_1440_fu_77366_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1440_fu_77366_p0.read()) * sc_bigint<32>(mul_ln1118_1440_fu_77366_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1441_fu_77399_p0() {
    mul_ln1118_1441_fu_77399_p0 = tmp_1549_fu_77382_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1441_fu_77399_p1() {
    mul_ln1118_1441_fu_77399_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1441_fu_77399_p2() {
    mul_ln1118_1441_fu_77399_p2 = (!mul_ln1118_1441_fu_77399_p0.read().is_01() || !mul_ln1118_1441_fu_77399_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1441_fu_77399_p0.read()) * sc_bigint<32>(mul_ln1118_1441_fu_77399_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1442_fu_77432_p0() {
    mul_ln1118_1442_fu_77432_p0 = tmp_1551_fu_77415_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1442_fu_77432_p1() {
    mul_ln1118_1442_fu_77432_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1442_fu_77432_p2() {
    mul_ln1118_1442_fu_77432_p2 = (!mul_ln1118_1442_fu_77432_p0.read().is_01() || !mul_ln1118_1442_fu_77432_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1442_fu_77432_p0.read()) * sc_bigint<32>(mul_ln1118_1442_fu_77432_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1443_fu_77465_p0() {
    mul_ln1118_1443_fu_77465_p0 = tmp_1553_fu_77448_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1443_fu_77465_p1() {
    mul_ln1118_1443_fu_77465_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1443_fu_77465_p2() {
    mul_ln1118_1443_fu_77465_p2 = (!mul_ln1118_1443_fu_77465_p0.read().is_01() || !mul_ln1118_1443_fu_77465_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1443_fu_77465_p0.read()) * sc_bigint<32>(mul_ln1118_1443_fu_77465_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1444_fu_77612_p0() {
    mul_ln1118_1444_fu_77612_p0 = tmp_1555_fu_77595_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1444_fu_77612_p1() {
    mul_ln1118_1444_fu_77612_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1444_fu_77612_p2() {
    mul_ln1118_1444_fu_77612_p2 = (!mul_ln1118_1444_fu_77612_p0.read().is_01() || !mul_ln1118_1444_fu_77612_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1444_fu_77612_p0.read()) * sc_bigint<32>(mul_ln1118_1444_fu_77612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1445_fu_77645_p0() {
    mul_ln1118_1445_fu_77645_p0 = tmp_1557_fu_77628_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1445_fu_77645_p1() {
    mul_ln1118_1445_fu_77645_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1445_fu_77645_p2() {
    mul_ln1118_1445_fu_77645_p2 = (!mul_ln1118_1445_fu_77645_p0.read().is_01() || !mul_ln1118_1445_fu_77645_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1445_fu_77645_p0.read()) * sc_bigint<32>(mul_ln1118_1445_fu_77645_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1446_fu_77678_p0() {
    mul_ln1118_1446_fu_77678_p0 = tmp_1559_fu_77661_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1446_fu_77678_p1() {
    mul_ln1118_1446_fu_77678_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1446_fu_77678_p2() {
    mul_ln1118_1446_fu_77678_p2 = (!mul_ln1118_1446_fu_77678_p0.read().is_01() || !mul_ln1118_1446_fu_77678_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1446_fu_77678_p0.read()) * sc_bigint<32>(mul_ln1118_1446_fu_77678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1447_fu_77708_p0() {
    mul_ln1118_1447_fu_77708_p0 = tmp_1560_fu_77694_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1447_fu_77708_p1() {
    mul_ln1118_1447_fu_77708_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1447_fu_77708_p2() {
    mul_ln1118_1447_fu_77708_p2 = (!mul_ln1118_1447_fu_77708_p0.read().is_01() || !mul_ln1118_1447_fu_77708_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1447_fu_77708_p0.read()) * sc_bigint<32>(mul_ln1118_1447_fu_77708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1448_fu_77738_p0() {
    mul_ln1118_1448_fu_77738_p0 = tmp_1561_fu_77724_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1448_fu_77738_p1() {
    mul_ln1118_1448_fu_77738_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1448_fu_77738_p2() {
    mul_ln1118_1448_fu_77738_p2 = (!mul_ln1118_1448_fu_77738_p0.read().is_01() || !mul_ln1118_1448_fu_77738_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1448_fu_77738_p0.read()) * sc_bigint<32>(mul_ln1118_1448_fu_77738_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1449_fu_77768_p0() {
    mul_ln1118_1449_fu_77768_p0 = tmp_1562_fu_77754_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1449_fu_77768_p1() {
    mul_ln1118_1449_fu_77768_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1449_fu_77768_p2() {
    mul_ln1118_1449_fu_77768_p2 = (!mul_ln1118_1449_fu_77768_p0.read().is_01() || !mul_ln1118_1449_fu_77768_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1449_fu_77768_p0.read()) * sc_bigint<32>(mul_ln1118_1449_fu_77768_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_144_fu_30524_p0() {
    mul_ln1118_144_fu_30524_p0 = tmp_163_fu_30510_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_144_fu_30524_p1() {
    mul_ln1118_144_fu_30524_p1 =  (sc_lv<32>) (sext_ln1116_11_cast_fu_25708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_144_fu_30524_p2() {
    mul_ln1118_144_fu_30524_p2 = (!mul_ln1118_144_fu_30524_p0.read().is_01() || !mul_ln1118_144_fu_30524_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_144_fu_30524_p0.read()) * sc_bigint<32>(mul_ln1118_144_fu_30524_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1450_fu_77798_p0() {
    mul_ln1118_1450_fu_77798_p0 = tmp_1563_fu_77784_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1450_fu_77798_p1() {
    mul_ln1118_1450_fu_77798_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1450_fu_77798_p2() {
    mul_ln1118_1450_fu_77798_p2 = (!mul_ln1118_1450_fu_77798_p0.read().is_01() || !mul_ln1118_1450_fu_77798_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1450_fu_77798_p0.read()) * sc_bigint<32>(mul_ln1118_1450_fu_77798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1451_fu_77828_p0() {
    mul_ln1118_1451_fu_77828_p0 = tmp_1564_fu_77814_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1451_fu_77828_p1() {
    mul_ln1118_1451_fu_77828_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1451_fu_77828_p2() {
    mul_ln1118_1451_fu_77828_p2 = (!mul_ln1118_1451_fu_77828_p0.read().is_01() || !mul_ln1118_1451_fu_77828_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1451_fu_77828_p0.read()) * sc_bigint<32>(mul_ln1118_1451_fu_77828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1452_fu_77858_p0() {
    mul_ln1118_1452_fu_77858_p0 = tmp_1565_fu_77844_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1452_fu_77858_p1() {
    mul_ln1118_1452_fu_77858_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1452_fu_77858_p2() {
    mul_ln1118_1452_fu_77858_p2 = (!mul_ln1118_1452_fu_77858_p0.read().is_01() || !mul_ln1118_1452_fu_77858_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1452_fu_77858_p0.read()) * sc_bigint<32>(mul_ln1118_1452_fu_77858_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1453_fu_77888_p0() {
    mul_ln1118_1453_fu_77888_p0 = tmp_1566_fu_77874_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1453_fu_77888_p1() {
    mul_ln1118_1453_fu_77888_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1453_fu_77888_p2() {
    mul_ln1118_1453_fu_77888_p2 = (!mul_ln1118_1453_fu_77888_p0.read().is_01() || !mul_ln1118_1453_fu_77888_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1453_fu_77888_p0.read()) * sc_bigint<32>(mul_ln1118_1453_fu_77888_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1454_fu_77918_p0() {
    mul_ln1118_1454_fu_77918_p0 = tmp_1567_fu_77904_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1454_fu_77918_p1() {
    mul_ln1118_1454_fu_77918_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1454_fu_77918_p2() {
    mul_ln1118_1454_fu_77918_p2 = (!mul_ln1118_1454_fu_77918_p0.read().is_01() || !mul_ln1118_1454_fu_77918_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1454_fu_77918_p0.read()) * sc_bigint<32>(mul_ln1118_1454_fu_77918_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1455_fu_77948_p0() {
    mul_ln1118_1455_fu_77948_p0 = tmp_1568_fu_77934_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1455_fu_77948_p1() {
    mul_ln1118_1455_fu_77948_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1455_fu_77948_p2() {
    mul_ln1118_1455_fu_77948_p2 = (!mul_ln1118_1455_fu_77948_p0.read().is_01() || !mul_ln1118_1455_fu_77948_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1455_fu_77948_p0.read()) * sc_bigint<32>(mul_ln1118_1455_fu_77948_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1456_fu_77978_p0() {
    mul_ln1118_1456_fu_77978_p0 = tmp_1569_fu_77964_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1456_fu_77978_p1() {
    mul_ln1118_1456_fu_77978_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1456_fu_77978_p2() {
    mul_ln1118_1456_fu_77978_p2 = (!mul_ln1118_1456_fu_77978_p0.read().is_01() || !mul_ln1118_1456_fu_77978_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1456_fu_77978_p0.read()) * sc_bigint<32>(mul_ln1118_1456_fu_77978_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1457_fu_78008_p0() {
    mul_ln1118_1457_fu_78008_p0 = tmp_1570_fu_77994_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1457_fu_78008_p1() {
    mul_ln1118_1457_fu_78008_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1457_fu_78008_p2() {
    mul_ln1118_1457_fu_78008_p2 = (!mul_ln1118_1457_fu_78008_p0.read().is_01() || !mul_ln1118_1457_fu_78008_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1457_fu_78008_p0.read()) * sc_bigint<32>(mul_ln1118_1457_fu_78008_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1458_fu_78038_p0() {
    mul_ln1118_1458_fu_78038_p0 = tmp_1571_fu_78024_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1458_fu_78038_p1() {
    mul_ln1118_1458_fu_78038_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1458_fu_78038_p2() {
    mul_ln1118_1458_fu_78038_p2 = (!mul_ln1118_1458_fu_78038_p0.read().is_01() || !mul_ln1118_1458_fu_78038_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1458_fu_78038_p0.read()) * sc_bigint<32>(mul_ln1118_1458_fu_78038_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1459_fu_78068_p0() {
    mul_ln1118_1459_fu_78068_p0 = tmp_1572_fu_78054_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1459_fu_78068_p1() {
    mul_ln1118_1459_fu_78068_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1459_fu_78068_p2() {
    mul_ln1118_1459_fu_78068_p2 = (!mul_ln1118_1459_fu_78068_p0.read().is_01() || !mul_ln1118_1459_fu_78068_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1459_fu_78068_p0.read()) * sc_bigint<32>(mul_ln1118_1459_fu_78068_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_145_fu_30554_p0() {
    mul_ln1118_145_fu_30554_p0 = tmp_164_fu_30540_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_145_fu_30554_p1() {
    mul_ln1118_145_fu_30554_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_145_fu_30554_p2() {
    mul_ln1118_145_fu_30554_p2 = (!mul_ln1118_145_fu_30554_p0.read().is_01() || !mul_ln1118_145_fu_30554_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_145_fu_30554_p0.read()) * sc_bigint<32>(mul_ln1118_145_fu_30554_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1460_fu_78098_p0() {
    mul_ln1118_1460_fu_78098_p0 = tmp_1573_fu_78084_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1460_fu_78098_p1() {
    mul_ln1118_1460_fu_78098_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1460_fu_78098_p2() {
    mul_ln1118_1460_fu_78098_p2 = (!mul_ln1118_1460_fu_78098_p0.read().is_01() || !mul_ln1118_1460_fu_78098_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1460_fu_78098_p0.read()) * sc_bigint<32>(mul_ln1118_1460_fu_78098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1461_fu_78128_p0() {
    mul_ln1118_1461_fu_78128_p0 = tmp_1574_fu_78114_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1461_fu_78128_p1() {
    mul_ln1118_1461_fu_78128_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1461_fu_78128_p2() {
    mul_ln1118_1461_fu_78128_p2 = (!mul_ln1118_1461_fu_78128_p0.read().is_01() || !mul_ln1118_1461_fu_78128_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1461_fu_78128_p0.read()) * sc_bigint<32>(mul_ln1118_1461_fu_78128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1462_fu_78158_p0() {
    mul_ln1118_1462_fu_78158_p0 = tmp_1575_fu_78144_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1462_fu_78158_p1() {
    mul_ln1118_1462_fu_78158_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1462_fu_78158_p2() {
    mul_ln1118_1462_fu_78158_p2 = (!mul_ln1118_1462_fu_78158_p0.read().is_01() || !mul_ln1118_1462_fu_78158_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1462_fu_78158_p0.read()) * sc_bigint<32>(mul_ln1118_1462_fu_78158_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1463_fu_78302_p0() {
    mul_ln1118_1463_fu_78302_p0 = tmp_1576_fu_78288_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1463_fu_78302_p1() {
    mul_ln1118_1463_fu_78302_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1463_fu_78302_p2() {
    mul_ln1118_1463_fu_78302_p2 = (!mul_ln1118_1463_fu_78302_p0.read().is_01() || !mul_ln1118_1463_fu_78302_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1463_fu_78302_p0.read()) * sc_bigint<32>(mul_ln1118_1463_fu_78302_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1464_fu_78332_p0() {
    mul_ln1118_1464_fu_78332_p0 = tmp_1577_fu_78318_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1464_fu_78332_p1() {
    mul_ln1118_1464_fu_78332_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1464_fu_78332_p2() {
    mul_ln1118_1464_fu_78332_p2 = (!mul_ln1118_1464_fu_78332_p0.read().is_01() || !mul_ln1118_1464_fu_78332_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1464_fu_78332_p0.read()) * sc_bigint<32>(mul_ln1118_1464_fu_78332_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1465_fu_78362_p0() {
    mul_ln1118_1465_fu_78362_p0 = tmp_1578_fu_78348_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1465_fu_78362_p1() {
    mul_ln1118_1465_fu_78362_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1465_fu_78362_p2() {
    mul_ln1118_1465_fu_78362_p2 = (!mul_ln1118_1465_fu_78362_p0.read().is_01() || !mul_ln1118_1465_fu_78362_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1465_fu_78362_p0.read()) * sc_bigint<32>(mul_ln1118_1465_fu_78362_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1466_fu_78392_p0() {
    mul_ln1118_1466_fu_78392_p0 = tmp_1579_fu_78378_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1466_fu_78392_p1() {
    mul_ln1118_1466_fu_78392_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1466_fu_78392_p2() {
    mul_ln1118_1466_fu_78392_p2 = (!mul_ln1118_1466_fu_78392_p0.read().is_01() || !mul_ln1118_1466_fu_78392_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1466_fu_78392_p0.read()) * sc_bigint<32>(mul_ln1118_1466_fu_78392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1467_fu_78422_p0() {
    mul_ln1118_1467_fu_78422_p0 = tmp_1580_fu_78408_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1467_fu_78422_p1() {
    mul_ln1118_1467_fu_78422_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1467_fu_78422_p2() {
    mul_ln1118_1467_fu_78422_p2 = (!mul_ln1118_1467_fu_78422_p0.read().is_01() || !mul_ln1118_1467_fu_78422_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1467_fu_78422_p0.read()) * sc_bigint<32>(mul_ln1118_1467_fu_78422_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1468_fu_78452_p0() {
    mul_ln1118_1468_fu_78452_p0 = tmp_1581_fu_78438_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1468_fu_78452_p1() {
    mul_ln1118_1468_fu_78452_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1468_fu_78452_p2() {
    mul_ln1118_1468_fu_78452_p2 = (!mul_ln1118_1468_fu_78452_p0.read().is_01() || !mul_ln1118_1468_fu_78452_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1468_fu_78452_p0.read()) * sc_bigint<32>(mul_ln1118_1468_fu_78452_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1469_fu_78482_p0() {
    mul_ln1118_1469_fu_78482_p0 = tmp_1582_fu_78468_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1469_fu_78482_p1() {
    mul_ln1118_1469_fu_78482_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1469_fu_78482_p2() {
    mul_ln1118_1469_fu_78482_p2 = (!mul_ln1118_1469_fu_78482_p0.read().is_01() || !mul_ln1118_1469_fu_78482_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1469_fu_78482_p0.read()) * sc_bigint<32>(mul_ln1118_1469_fu_78482_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_146_fu_30584_p0() {
    mul_ln1118_146_fu_30584_p0 = tmp_165_fu_30570_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_146_fu_30584_p1() {
    mul_ln1118_146_fu_30584_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_146_fu_30584_p2() {
    mul_ln1118_146_fu_30584_p2 = (!mul_ln1118_146_fu_30584_p0.read().is_01() || !mul_ln1118_146_fu_30584_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_146_fu_30584_p0.read()) * sc_bigint<32>(mul_ln1118_146_fu_30584_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1470_fu_78512_p0() {
    mul_ln1118_1470_fu_78512_p0 = tmp_1583_fu_78498_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1470_fu_78512_p1() {
    mul_ln1118_1470_fu_78512_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1470_fu_78512_p2() {
    mul_ln1118_1470_fu_78512_p2 = (!mul_ln1118_1470_fu_78512_p0.read().is_01() || !mul_ln1118_1470_fu_78512_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1470_fu_78512_p0.read()) * sc_bigint<32>(mul_ln1118_1470_fu_78512_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1471_fu_78542_p0() {
    mul_ln1118_1471_fu_78542_p0 = tmp_1584_fu_78528_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1471_fu_78542_p1() {
    mul_ln1118_1471_fu_78542_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1471_fu_78542_p2() {
    mul_ln1118_1471_fu_78542_p2 = (!mul_ln1118_1471_fu_78542_p0.read().is_01() || !mul_ln1118_1471_fu_78542_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1471_fu_78542_p0.read()) * sc_bigint<32>(mul_ln1118_1471_fu_78542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1472_fu_78572_p0() {
    mul_ln1118_1472_fu_78572_p0 = tmp_1585_fu_78558_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1472_fu_78572_p1() {
    mul_ln1118_1472_fu_78572_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1472_fu_78572_p2() {
    mul_ln1118_1472_fu_78572_p2 = (!mul_ln1118_1472_fu_78572_p0.read().is_01() || !mul_ln1118_1472_fu_78572_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1472_fu_78572_p0.read()) * sc_bigint<32>(mul_ln1118_1472_fu_78572_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1473_fu_78602_p0() {
    mul_ln1118_1473_fu_78602_p0 = tmp_1586_fu_78588_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1473_fu_78602_p1() {
    mul_ln1118_1473_fu_78602_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1473_fu_78602_p2() {
    mul_ln1118_1473_fu_78602_p2 = (!mul_ln1118_1473_fu_78602_p0.read().is_01() || !mul_ln1118_1473_fu_78602_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1473_fu_78602_p0.read()) * sc_bigint<32>(mul_ln1118_1473_fu_78602_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1474_fu_78632_p0() {
    mul_ln1118_1474_fu_78632_p0 = tmp_1587_fu_78618_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1474_fu_78632_p1() {
    mul_ln1118_1474_fu_78632_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1474_fu_78632_p2() {
    mul_ln1118_1474_fu_78632_p2 = (!mul_ln1118_1474_fu_78632_p0.read().is_01() || !mul_ln1118_1474_fu_78632_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1474_fu_78632_p0.read()) * sc_bigint<32>(mul_ln1118_1474_fu_78632_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1475_fu_78662_p0() {
    mul_ln1118_1475_fu_78662_p0 = tmp_1588_fu_78648_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1475_fu_78662_p1() {
    mul_ln1118_1475_fu_78662_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1475_fu_78662_p2() {
    mul_ln1118_1475_fu_78662_p2 = (!mul_ln1118_1475_fu_78662_p0.read().is_01() || !mul_ln1118_1475_fu_78662_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1475_fu_78662_p0.read()) * sc_bigint<32>(mul_ln1118_1475_fu_78662_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1476_fu_78692_p0() {
    mul_ln1118_1476_fu_78692_p0 = tmp_1589_fu_78678_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1476_fu_78692_p1() {
    mul_ln1118_1476_fu_78692_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1476_fu_78692_p2() {
    mul_ln1118_1476_fu_78692_p2 = (!mul_ln1118_1476_fu_78692_p0.read().is_01() || !mul_ln1118_1476_fu_78692_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1476_fu_78692_p0.read()) * sc_bigint<32>(mul_ln1118_1476_fu_78692_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1477_fu_78722_p0() {
    mul_ln1118_1477_fu_78722_p0 = tmp_1590_fu_78708_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1477_fu_78722_p1() {
    mul_ln1118_1477_fu_78722_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1477_fu_78722_p2() {
    mul_ln1118_1477_fu_78722_p2 = (!mul_ln1118_1477_fu_78722_p0.read().is_01() || !mul_ln1118_1477_fu_78722_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1477_fu_78722_p0.read()) * sc_bigint<32>(mul_ln1118_1477_fu_78722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1478_fu_78752_p0() {
    mul_ln1118_1478_fu_78752_p0 = tmp_1591_fu_78738_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1478_fu_78752_p1() {
    mul_ln1118_1478_fu_78752_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1478_fu_78752_p2() {
    mul_ln1118_1478_fu_78752_p2 = (!mul_ln1118_1478_fu_78752_p0.read().is_01() || !mul_ln1118_1478_fu_78752_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1478_fu_78752_p0.read()) * sc_bigint<32>(mul_ln1118_1478_fu_78752_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1479_fu_78782_p0() {
    mul_ln1118_1479_fu_78782_p0 = tmp_1592_fu_78768_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1479_fu_78782_p1() {
    mul_ln1118_1479_fu_78782_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1479_fu_78782_p2() {
    mul_ln1118_1479_fu_78782_p2 = (!mul_ln1118_1479_fu_78782_p0.read().is_01() || !mul_ln1118_1479_fu_78782_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1479_fu_78782_p0.read()) * sc_bigint<32>(mul_ln1118_1479_fu_78782_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_147_fu_30614_p0() {
    mul_ln1118_147_fu_30614_p0 = tmp_166_fu_30600_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_147_fu_30614_p1() {
    mul_ln1118_147_fu_30614_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_147_fu_30614_p2() {
    mul_ln1118_147_fu_30614_p2 = (!mul_ln1118_147_fu_30614_p0.read().is_01() || !mul_ln1118_147_fu_30614_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_147_fu_30614_p0.read()) * sc_bigint<32>(mul_ln1118_147_fu_30614_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1480_fu_78812_p0() {
    mul_ln1118_1480_fu_78812_p0 = tmp_1593_fu_78798_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1480_fu_78812_p1() {
    mul_ln1118_1480_fu_78812_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1480_fu_78812_p2() {
    mul_ln1118_1480_fu_78812_p2 = (!mul_ln1118_1480_fu_78812_p0.read().is_01() || !mul_ln1118_1480_fu_78812_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1480_fu_78812_p0.read()) * sc_bigint<32>(mul_ln1118_1480_fu_78812_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1481_fu_78842_p0() {
    mul_ln1118_1481_fu_78842_p0 = tmp_1594_fu_78828_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1481_fu_78842_p1() {
    mul_ln1118_1481_fu_78842_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1481_fu_78842_p2() {
    mul_ln1118_1481_fu_78842_p2 = (!mul_ln1118_1481_fu_78842_p0.read().is_01() || !mul_ln1118_1481_fu_78842_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1481_fu_78842_p0.read()) * sc_bigint<32>(mul_ln1118_1481_fu_78842_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1482_fu_78986_p0() {
    mul_ln1118_1482_fu_78986_p0 = tmp_1595_fu_78972_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1482_fu_78986_p1() {
    mul_ln1118_1482_fu_78986_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1482_fu_78986_p2() {
    mul_ln1118_1482_fu_78986_p2 = (!mul_ln1118_1482_fu_78986_p0.read().is_01() || !mul_ln1118_1482_fu_78986_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1482_fu_78986_p0.read()) * sc_bigint<32>(mul_ln1118_1482_fu_78986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1483_fu_79016_p0() {
    mul_ln1118_1483_fu_79016_p0 = tmp_1596_fu_79002_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1483_fu_79016_p1() {
    mul_ln1118_1483_fu_79016_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1483_fu_79016_p2() {
    mul_ln1118_1483_fu_79016_p2 = (!mul_ln1118_1483_fu_79016_p0.read().is_01() || !mul_ln1118_1483_fu_79016_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1483_fu_79016_p0.read()) * sc_bigint<32>(mul_ln1118_1483_fu_79016_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1484_fu_79046_p0() {
    mul_ln1118_1484_fu_79046_p0 = tmp_1597_fu_79032_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1484_fu_79046_p1() {
    mul_ln1118_1484_fu_79046_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1484_fu_79046_p2() {
    mul_ln1118_1484_fu_79046_p2 = (!mul_ln1118_1484_fu_79046_p0.read().is_01() || !mul_ln1118_1484_fu_79046_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1484_fu_79046_p0.read()) * sc_bigint<32>(mul_ln1118_1484_fu_79046_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1485_fu_79076_p0() {
    mul_ln1118_1485_fu_79076_p0 = tmp_1598_fu_79062_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1485_fu_79076_p1() {
    mul_ln1118_1485_fu_79076_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1485_fu_79076_p2() {
    mul_ln1118_1485_fu_79076_p2 = (!mul_ln1118_1485_fu_79076_p0.read().is_01() || !mul_ln1118_1485_fu_79076_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1485_fu_79076_p0.read()) * sc_bigint<32>(mul_ln1118_1485_fu_79076_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1486_fu_79106_p0() {
    mul_ln1118_1486_fu_79106_p0 = tmp_1599_fu_79092_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1486_fu_79106_p1() {
    mul_ln1118_1486_fu_79106_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1486_fu_79106_p2() {
    mul_ln1118_1486_fu_79106_p2 = (!mul_ln1118_1486_fu_79106_p0.read().is_01() || !mul_ln1118_1486_fu_79106_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1486_fu_79106_p0.read()) * sc_bigint<32>(mul_ln1118_1486_fu_79106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1487_fu_79136_p0() {
    mul_ln1118_1487_fu_79136_p0 = tmp_1600_fu_79122_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1487_fu_79136_p1() {
    mul_ln1118_1487_fu_79136_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1487_fu_79136_p2() {
    mul_ln1118_1487_fu_79136_p2 = (!mul_ln1118_1487_fu_79136_p0.read().is_01() || !mul_ln1118_1487_fu_79136_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1487_fu_79136_p0.read()) * sc_bigint<32>(mul_ln1118_1487_fu_79136_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1488_fu_79166_p0() {
    mul_ln1118_1488_fu_79166_p0 = tmp_1601_fu_79152_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1488_fu_79166_p1() {
    mul_ln1118_1488_fu_79166_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1488_fu_79166_p2() {
    mul_ln1118_1488_fu_79166_p2 = (!mul_ln1118_1488_fu_79166_p0.read().is_01() || !mul_ln1118_1488_fu_79166_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1488_fu_79166_p0.read()) * sc_bigint<32>(mul_ln1118_1488_fu_79166_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1489_fu_79196_p0() {
    mul_ln1118_1489_fu_79196_p0 = tmp_1602_fu_79182_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1489_fu_79196_p1() {
    mul_ln1118_1489_fu_79196_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1489_fu_79196_p2() {
    mul_ln1118_1489_fu_79196_p2 = (!mul_ln1118_1489_fu_79196_p0.read().is_01() || !mul_ln1118_1489_fu_79196_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1489_fu_79196_p0.read()) * sc_bigint<32>(mul_ln1118_1489_fu_79196_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_148_fu_30644_p0() {
    mul_ln1118_148_fu_30644_p0 = tmp_168_fu_30630_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_148_fu_30644_p1() {
    mul_ln1118_148_fu_30644_p1 =  (sc_lv<32>) (sext_ln1116_15_cast_fu_25840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_148_fu_30644_p2() {
    mul_ln1118_148_fu_30644_p2 = (!mul_ln1118_148_fu_30644_p0.read().is_01() || !mul_ln1118_148_fu_30644_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_148_fu_30644_p0.read()) * sc_bigint<32>(mul_ln1118_148_fu_30644_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1490_fu_79226_p0() {
    mul_ln1118_1490_fu_79226_p0 = tmp_1603_fu_79212_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1490_fu_79226_p1() {
    mul_ln1118_1490_fu_79226_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1490_fu_79226_p2() {
    mul_ln1118_1490_fu_79226_p2 = (!mul_ln1118_1490_fu_79226_p0.read().is_01() || !mul_ln1118_1490_fu_79226_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1490_fu_79226_p0.read()) * sc_bigint<32>(mul_ln1118_1490_fu_79226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1491_fu_79256_p0() {
    mul_ln1118_1491_fu_79256_p0 = tmp_1604_fu_79242_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1491_fu_79256_p1() {
    mul_ln1118_1491_fu_79256_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1491_fu_79256_p2() {
    mul_ln1118_1491_fu_79256_p2 = (!mul_ln1118_1491_fu_79256_p0.read().is_01() || !mul_ln1118_1491_fu_79256_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1491_fu_79256_p0.read()) * sc_bigint<32>(mul_ln1118_1491_fu_79256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1492_fu_79286_p0() {
    mul_ln1118_1492_fu_79286_p0 = tmp_1605_fu_79272_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1492_fu_79286_p1() {
    mul_ln1118_1492_fu_79286_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1492_fu_79286_p2() {
    mul_ln1118_1492_fu_79286_p2 = (!mul_ln1118_1492_fu_79286_p0.read().is_01() || !mul_ln1118_1492_fu_79286_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1492_fu_79286_p0.read()) * sc_bigint<32>(mul_ln1118_1492_fu_79286_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1493_fu_79316_p0() {
    mul_ln1118_1493_fu_79316_p0 = tmp_1606_fu_79302_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1493_fu_79316_p1() {
    mul_ln1118_1493_fu_79316_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1493_fu_79316_p2() {
    mul_ln1118_1493_fu_79316_p2 = (!mul_ln1118_1493_fu_79316_p0.read().is_01() || !mul_ln1118_1493_fu_79316_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1493_fu_79316_p0.read()) * sc_bigint<32>(mul_ln1118_1493_fu_79316_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1494_fu_79346_p0() {
    mul_ln1118_1494_fu_79346_p0 = tmp_1607_fu_79332_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1494_fu_79346_p1() {
    mul_ln1118_1494_fu_79346_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1494_fu_79346_p2() {
    mul_ln1118_1494_fu_79346_p2 = (!mul_ln1118_1494_fu_79346_p0.read().is_01() || !mul_ln1118_1494_fu_79346_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1494_fu_79346_p0.read()) * sc_bigint<32>(mul_ln1118_1494_fu_79346_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1495_fu_79376_p0() {
    mul_ln1118_1495_fu_79376_p0 = tmp_1608_fu_79362_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1495_fu_79376_p1() {
    mul_ln1118_1495_fu_79376_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1495_fu_79376_p2() {
    mul_ln1118_1495_fu_79376_p2 = (!mul_ln1118_1495_fu_79376_p0.read().is_01() || !mul_ln1118_1495_fu_79376_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1495_fu_79376_p0.read()) * sc_bigint<32>(mul_ln1118_1495_fu_79376_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1496_fu_79406_p0() {
    mul_ln1118_1496_fu_79406_p0 = tmp_1609_fu_79392_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1496_fu_79406_p1() {
    mul_ln1118_1496_fu_79406_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1496_fu_79406_p2() {
    mul_ln1118_1496_fu_79406_p2 = (!mul_ln1118_1496_fu_79406_p0.read().is_01() || !mul_ln1118_1496_fu_79406_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1496_fu_79406_p0.read()) * sc_bigint<32>(mul_ln1118_1496_fu_79406_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1497_fu_79436_p0() {
    mul_ln1118_1497_fu_79436_p0 = tmp_1610_fu_79422_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1497_fu_79436_p1() {
    mul_ln1118_1497_fu_79436_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1497_fu_79436_p2() {
    mul_ln1118_1497_fu_79436_p2 = (!mul_ln1118_1497_fu_79436_p0.read().is_01() || !mul_ln1118_1497_fu_79436_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1497_fu_79436_p0.read()) * sc_bigint<32>(mul_ln1118_1497_fu_79436_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1498_fu_79466_p0() {
    mul_ln1118_1498_fu_79466_p0 = tmp_1611_fu_79452_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1498_fu_79466_p1() {
    mul_ln1118_1498_fu_79466_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1498_fu_79466_p2() {
    mul_ln1118_1498_fu_79466_p2 = (!mul_ln1118_1498_fu_79466_p0.read().is_01() || !mul_ln1118_1498_fu_79466_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1498_fu_79466_p0.read()) * sc_bigint<32>(mul_ln1118_1498_fu_79466_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1499_fu_79496_p0() {
    mul_ln1118_1499_fu_79496_p0 = tmp_1612_fu_79482_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1499_fu_79496_p1() {
    mul_ln1118_1499_fu_79496_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1499_fu_79496_p2() {
    mul_ln1118_1499_fu_79496_p2 = (!mul_ln1118_1499_fu_79496_p0.read().is_01() || !mul_ln1118_1499_fu_79496_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1499_fu_79496_p0.read()) * sc_bigint<32>(mul_ln1118_1499_fu_79496_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_149_fu_30674_p0() {
    mul_ln1118_149_fu_30674_p0 = tmp_170_fu_30660_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_149_fu_30674_p1() {
    mul_ln1118_149_fu_30674_p1 =  (sc_lv<32>) (sext_ln1116_16_cast_fu_25873_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_149_fu_30674_p2() {
    mul_ln1118_149_fu_30674_p2 = (!mul_ln1118_149_fu_30674_p0.read().is_01() || !mul_ln1118_149_fu_30674_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_149_fu_30674_p0.read()) * sc_bigint<32>(mul_ln1118_149_fu_30674_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_14_fu_25814_p0() {
    mul_ln1118_14_fu_25814_p0 = tmp_29_fu_25797_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_14_fu_25814_p1() {
    mul_ln1118_14_fu_25814_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_14_fu_25814_p2() {
    mul_ln1118_14_fu_25814_p2 = (!mul_ln1118_14_fu_25814_p0.read().is_01() || !mul_ln1118_14_fu_25814_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_14_fu_25814_p0.read()) * sc_bigint<32>(mul_ln1118_14_fu_25814_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1500_fu_79526_p0() {
    mul_ln1118_1500_fu_79526_p0 = tmp_1613_fu_79512_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1500_fu_79526_p1() {
    mul_ln1118_1500_fu_79526_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1500_fu_79526_p2() {
    mul_ln1118_1500_fu_79526_p2 = (!mul_ln1118_1500_fu_79526_p0.read().is_01() || !mul_ln1118_1500_fu_79526_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1500_fu_79526_p0.read()) * sc_bigint<32>(mul_ln1118_1500_fu_79526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1501_fu_79670_p0() {
    mul_ln1118_1501_fu_79670_p0 = tmp_1614_fu_79656_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1501_fu_79670_p1() {
    mul_ln1118_1501_fu_79670_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1501_fu_79670_p2() {
    mul_ln1118_1501_fu_79670_p2 = (!mul_ln1118_1501_fu_79670_p0.read().is_01() || !mul_ln1118_1501_fu_79670_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1501_fu_79670_p0.read()) * sc_bigint<32>(mul_ln1118_1501_fu_79670_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1502_fu_79700_p0() {
    mul_ln1118_1502_fu_79700_p0 = tmp_1615_fu_79686_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1502_fu_79700_p1() {
    mul_ln1118_1502_fu_79700_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1502_fu_79700_p2() {
    mul_ln1118_1502_fu_79700_p2 = (!mul_ln1118_1502_fu_79700_p0.read().is_01() || !mul_ln1118_1502_fu_79700_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1502_fu_79700_p0.read()) * sc_bigint<32>(mul_ln1118_1502_fu_79700_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1503_fu_79730_p0() {
    mul_ln1118_1503_fu_79730_p0 = tmp_1616_fu_79716_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1503_fu_79730_p1() {
    mul_ln1118_1503_fu_79730_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1503_fu_79730_p2() {
    mul_ln1118_1503_fu_79730_p2 = (!mul_ln1118_1503_fu_79730_p0.read().is_01() || !mul_ln1118_1503_fu_79730_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1503_fu_79730_p0.read()) * sc_bigint<32>(mul_ln1118_1503_fu_79730_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1504_fu_79760_p0() {
    mul_ln1118_1504_fu_79760_p0 = tmp_1617_fu_79746_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1504_fu_79760_p1() {
    mul_ln1118_1504_fu_79760_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1504_fu_79760_p2() {
    mul_ln1118_1504_fu_79760_p2 = (!mul_ln1118_1504_fu_79760_p0.read().is_01() || !mul_ln1118_1504_fu_79760_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1504_fu_79760_p0.read()) * sc_bigint<32>(mul_ln1118_1504_fu_79760_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1505_fu_79790_p0() {
    mul_ln1118_1505_fu_79790_p0 = tmp_1618_fu_79776_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1505_fu_79790_p1() {
    mul_ln1118_1505_fu_79790_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1505_fu_79790_p2() {
    mul_ln1118_1505_fu_79790_p2 = (!mul_ln1118_1505_fu_79790_p0.read().is_01() || !mul_ln1118_1505_fu_79790_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1505_fu_79790_p0.read()) * sc_bigint<32>(mul_ln1118_1505_fu_79790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1506_fu_79820_p0() {
    mul_ln1118_1506_fu_79820_p0 = tmp_1619_fu_79806_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1506_fu_79820_p1() {
    mul_ln1118_1506_fu_79820_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1506_fu_79820_p2() {
    mul_ln1118_1506_fu_79820_p2 = (!mul_ln1118_1506_fu_79820_p0.read().is_01() || !mul_ln1118_1506_fu_79820_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1506_fu_79820_p0.read()) * sc_bigint<32>(mul_ln1118_1506_fu_79820_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1507_fu_79850_p0() {
    mul_ln1118_1507_fu_79850_p0 = tmp_1620_fu_79836_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1507_fu_79850_p1() {
    mul_ln1118_1507_fu_79850_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1507_fu_79850_p2() {
    mul_ln1118_1507_fu_79850_p2 = (!mul_ln1118_1507_fu_79850_p0.read().is_01() || !mul_ln1118_1507_fu_79850_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1507_fu_79850_p0.read()) * sc_bigint<32>(mul_ln1118_1507_fu_79850_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1508_fu_79880_p0() {
    mul_ln1118_1508_fu_79880_p0 = tmp_1621_fu_79866_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1508_fu_79880_p1() {
    mul_ln1118_1508_fu_79880_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1508_fu_79880_p2() {
    mul_ln1118_1508_fu_79880_p2 = (!mul_ln1118_1508_fu_79880_p0.read().is_01() || !mul_ln1118_1508_fu_79880_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1508_fu_79880_p0.read()) * sc_bigint<32>(mul_ln1118_1508_fu_79880_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1509_fu_79910_p0() {
    mul_ln1118_1509_fu_79910_p0 = tmp_1622_fu_79896_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1509_fu_79910_p1() {
    mul_ln1118_1509_fu_79910_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1509_fu_79910_p2() {
    mul_ln1118_1509_fu_79910_p2 = (!mul_ln1118_1509_fu_79910_p0.read().is_01() || !mul_ln1118_1509_fu_79910_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1509_fu_79910_p0.read()) * sc_bigint<32>(mul_ln1118_1509_fu_79910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_150_fu_30704_p0() {
    mul_ln1118_150_fu_30704_p0 = tmp_172_fu_30690_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_150_fu_30704_p1() {
    mul_ln1118_150_fu_30704_p1 =  (sc_lv<32>) (sext_ln1116_17_cast_fu_25906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_150_fu_30704_p2() {
    mul_ln1118_150_fu_30704_p2 = (!mul_ln1118_150_fu_30704_p0.read().is_01() || !mul_ln1118_150_fu_30704_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_150_fu_30704_p0.read()) * sc_bigint<32>(mul_ln1118_150_fu_30704_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1510_fu_79940_p0() {
    mul_ln1118_1510_fu_79940_p0 = tmp_1623_fu_79926_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1510_fu_79940_p1() {
    mul_ln1118_1510_fu_79940_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1510_fu_79940_p2() {
    mul_ln1118_1510_fu_79940_p2 = (!mul_ln1118_1510_fu_79940_p0.read().is_01() || !mul_ln1118_1510_fu_79940_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1510_fu_79940_p0.read()) * sc_bigint<32>(mul_ln1118_1510_fu_79940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1511_fu_79970_p0() {
    mul_ln1118_1511_fu_79970_p0 = tmp_1624_fu_79956_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1511_fu_79970_p1() {
    mul_ln1118_1511_fu_79970_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1511_fu_79970_p2() {
    mul_ln1118_1511_fu_79970_p2 = (!mul_ln1118_1511_fu_79970_p0.read().is_01() || !mul_ln1118_1511_fu_79970_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1511_fu_79970_p0.read()) * sc_bigint<32>(mul_ln1118_1511_fu_79970_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1512_fu_80000_p0() {
    mul_ln1118_1512_fu_80000_p0 = tmp_1625_fu_79986_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1512_fu_80000_p1() {
    mul_ln1118_1512_fu_80000_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1512_fu_80000_p2() {
    mul_ln1118_1512_fu_80000_p2 = (!mul_ln1118_1512_fu_80000_p0.read().is_01() || !mul_ln1118_1512_fu_80000_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1512_fu_80000_p0.read()) * sc_bigint<32>(mul_ln1118_1512_fu_80000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1513_fu_80030_p0() {
    mul_ln1118_1513_fu_80030_p0 = tmp_1626_fu_80016_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1513_fu_80030_p1() {
    mul_ln1118_1513_fu_80030_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1513_fu_80030_p2() {
    mul_ln1118_1513_fu_80030_p2 = (!mul_ln1118_1513_fu_80030_p0.read().is_01() || !mul_ln1118_1513_fu_80030_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1513_fu_80030_p0.read()) * sc_bigint<32>(mul_ln1118_1513_fu_80030_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1514_fu_80060_p0() {
    mul_ln1118_1514_fu_80060_p0 = tmp_1627_fu_80046_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1514_fu_80060_p1() {
    mul_ln1118_1514_fu_80060_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1514_fu_80060_p2() {
    mul_ln1118_1514_fu_80060_p2 = (!mul_ln1118_1514_fu_80060_p0.read().is_01() || !mul_ln1118_1514_fu_80060_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1514_fu_80060_p0.read()) * sc_bigint<32>(mul_ln1118_1514_fu_80060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1515_fu_80090_p0() {
    mul_ln1118_1515_fu_80090_p0 = tmp_1628_fu_80076_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1515_fu_80090_p1() {
    mul_ln1118_1515_fu_80090_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1515_fu_80090_p2() {
    mul_ln1118_1515_fu_80090_p2 = (!mul_ln1118_1515_fu_80090_p0.read().is_01() || !mul_ln1118_1515_fu_80090_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1515_fu_80090_p0.read()) * sc_bigint<32>(mul_ln1118_1515_fu_80090_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1516_fu_80120_p0() {
    mul_ln1118_1516_fu_80120_p0 = tmp_1629_fu_80106_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1516_fu_80120_p1() {
    mul_ln1118_1516_fu_80120_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1516_fu_80120_p2() {
    mul_ln1118_1516_fu_80120_p2 = (!mul_ln1118_1516_fu_80120_p0.read().is_01() || !mul_ln1118_1516_fu_80120_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1516_fu_80120_p0.read()) * sc_bigint<32>(mul_ln1118_1516_fu_80120_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1517_fu_80150_p0() {
    mul_ln1118_1517_fu_80150_p0 = tmp_1630_fu_80136_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1517_fu_80150_p1() {
    mul_ln1118_1517_fu_80150_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1517_fu_80150_p2() {
    mul_ln1118_1517_fu_80150_p2 = (!mul_ln1118_1517_fu_80150_p0.read().is_01() || !mul_ln1118_1517_fu_80150_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1517_fu_80150_p0.read()) * sc_bigint<32>(mul_ln1118_1517_fu_80150_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1518_fu_80180_p0() {
    mul_ln1118_1518_fu_80180_p0 = tmp_1631_fu_80166_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1518_fu_80180_p1() {
    mul_ln1118_1518_fu_80180_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1518_fu_80180_p2() {
    mul_ln1118_1518_fu_80180_p2 = (!mul_ln1118_1518_fu_80180_p0.read().is_01() || !mul_ln1118_1518_fu_80180_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1518_fu_80180_p0.read()) * sc_bigint<32>(mul_ln1118_1518_fu_80180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1519_fu_80210_p0() {
    mul_ln1118_1519_fu_80210_p0 = tmp_1632_fu_80196_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1519_fu_80210_p1() {
    mul_ln1118_1519_fu_80210_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1519_fu_80210_p2() {
    mul_ln1118_1519_fu_80210_p2 = (!mul_ln1118_1519_fu_80210_p0.read().is_01() || !mul_ln1118_1519_fu_80210_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1519_fu_80210_p0.read()) * sc_bigint<32>(mul_ln1118_1519_fu_80210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_151_fu_30734_p0() {
    mul_ln1118_151_fu_30734_p0 = tmp_174_fu_30720_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_151_fu_30734_p1() {
    mul_ln1118_151_fu_30734_p1 =  (sc_lv<32>) (sext_ln1116_18_cast_fu_25939_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_151_fu_30734_p2() {
    mul_ln1118_151_fu_30734_p2 = (!mul_ln1118_151_fu_30734_p0.read().is_01() || !mul_ln1118_151_fu_30734_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_151_fu_30734_p0.read()) * sc_bigint<32>(mul_ln1118_151_fu_30734_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1520_fu_80354_p0() {
    mul_ln1118_1520_fu_80354_p0 = tmp_1633_fu_80340_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1520_fu_80354_p1() {
    mul_ln1118_1520_fu_80354_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1520_fu_80354_p2() {
    mul_ln1118_1520_fu_80354_p2 = (!mul_ln1118_1520_fu_80354_p0.read().is_01() || !mul_ln1118_1520_fu_80354_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1520_fu_80354_p0.read()) * sc_bigint<32>(mul_ln1118_1520_fu_80354_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1521_fu_80384_p0() {
    mul_ln1118_1521_fu_80384_p0 = tmp_1634_fu_80370_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1521_fu_80384_p1() {
    mul_ln1118_1521_fu_80384_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1521_fu_80384_p2() {
    mul_ln1118_1521_fu_80384_p2 = (!mul_ln1118_1521_fu_80384_p0.read().is_01() || !mul_ln1118_1521_fu_80384_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1521_fu_80384_p0.read()) * sc_bigint<32>(mul_ln1118_1521_fu_80384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1522_fu_80414_p0() {
    mul_ln1118_1522_fu_80414_p0 = tmp_1635_fu_80400_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1522_fu_80414_p1() {
    mul_ln1118_1522_fu_80414_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1522_fu_80414_p2() {
    mul_ln1118_1522_fu_80414_p2 = (!mul_ln1118_1522_fu_80414_p0.read().is_01() || !mul_ln1118_1522_fu_80414_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1522_fu_80414_p0.read()) * sc_bigint<32>(mul_ln1118_1522_fu_80414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1523_fu_80444_p0() {
    mul_ln1118_1523_fu_80444_p0 = tmp_1636_fu_80430_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1523_fu_80444_p1() {
    mul_ln1118_1523_fu_80444_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1523_fu_80444_p2() {
    mul_ln1118_1523_fu_80444_p2 = (!mul_ln1118_1523_fu_80444_p0.read().is_01() || !mul_ln1118_1523_fu_80444_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1523_fu_80444_p0.read()) * sc_bigint<32>(mul_ln1118_1523_fu_80444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1524_fu_80474_p0() {
    mul_ln1118_1524_fu_80474_p0 = tmp_1637_fu_80460_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1524_fu_80474_p1() {
    mul_ln1118_1524_fu_80474_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1524_fu_80474_p2() {
    mul_ln1118_1524_fu_80474_p2 = (!mul_ln1118_1524_fu_80474_p0.read().is_01() || !mul_ln1118_1524_fu_80474_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1524_fu_80474_p0.read()) * sc_bigint<32>(mul_ln1118_1524_fu_80474_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1525_fu_80504_p0() {
    mul_ln1118_1525_fu_80504_p0 = tmp_1638_fu_80490_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1525_fu_80504_p1() {
    mul_ln1118_1525_fu_80504_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1525_fu_80504_p2() {
    mul_ln1118_1525_fu_80504_p2 = (!mul_ln1118_1525_fu_80504_p0.read().is_01() || !mul_ln1118_1525_fu_80504_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1525_fu_80504_p0.read()) * sc_bigint<32>(mul_ln1118_1525_fu_80504_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1526_fu_80534_p0() {
    mul_ln1118_1526_fu_80534_p0 = tmp_1639_fu_80520_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1526_fu_80534_p1() {
    mul_ln1118_1526_fu_80534_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1526_fu_80534_p2() {
    mul_ln1118_1526_fu_80534_p2 = (!mul_ln1118_1526_fu_80534_p0.read().is_01() || !mul_ln1118_1526_fu_80534_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1526_fu_80534_p0.read()) * sc_bigint<32>(mul_ln1118_1526_fu_80534_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1527_fu_80564_p0() {
    mul_ln1118_1527_fu_80564_p0 = tmp_1640_fu_80550_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1527_fu_80564_p1() {
    mul_ln1118_1527_fu_80564_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1527_fu_80564_p2() {
    mul_ln1118_1527_fu_80564_p2 = (!mul_ln1118_1527_fu_80564_p0.read().is_01() || !mul_ln1118_1527_fu_80564_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1527_fu_80564_p0.read()) * sc_bigint<32>(mul_ln1118_1527_fu_80564_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1528_fu_80594_p0() {
    mul_ln1118_1528_fu_80594_p0 = tmp_1641_fu_80580_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1528_fu_80594_p1() {
    mul_ln1118_1528_fu_80594_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1528_fu_80594_p2() {
    mul_ln1118_1528_fu_80594_p2 = (!mul_ln1118_1528_fu_80594_p0.read().is_01() || !mul_ln1118_1528_fu_80594_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1528_fu_80594_p0.read()) * sc_bigint<32>(mul_ln1118_1528_fu_80594_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1529_fu_80624_p0() {
    mul_ln1118_1529_fu_80624_p0 = tmp_1642_fu_80610_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1529_fu_80624_p1() {
    mul_ln1118_1529_fu_80624_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1529_fu_80624_p2() {
    mul_ln1118_1529_fu_80624_p2 = (!mul_ln1118_1529_fu_80624_p0.read().is_01() || !mul_ln1118_1529_fu_80624_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1529_fu_80624_p0.read()) * sc_bigint<32>(mul_ln1118_1529_fu_80624_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_152_fu_30878_p0() {
    mul_ln1118_152_fu_30878_p0 = tmp_176_fu_30864_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_152_fu_30878_p1() {
    mul_ln1118_152_fu_30878_p1 =  (sc_lv<32>) (sext_ln1116_cast_fu_25345_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_152_fu_30878_p2() {
    mul_ln1118_152_fu_30878_p2 = (!mul_ln1118_152_fu_30878_p0.read().is_01() || !mul_ln1118_152_fu_30878_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_152_fu_30878_p0.read()) * sc_bigint<32>(mul_ln1118_152_fu_30878_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1530_fu_80654_p0() {
    mul_ln1118_1530_fu_80654_p0 = tmp_1643_fu_80640_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1530_fu_80654_p1() {
    mul_ln1118_1530_fu_80654_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1530_fu_80654_p2() {
    mul_ln1118_1530_fu_80654_p2 = (!mul_ln1118_1530_fu_80654_p0.read().is_01() || !mul_ln1118_1530_fu_80654_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1530_fu_80654_p0.read()) * sc_bigint<32>(mul_ln1118_1530_fu_80654_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1531_fu_80684_p0() {
    mul_ln1118_1531_fu_80684_p0 = tmp_1644_fu_80670_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1531_fu_80684_p1() {
    mul_ln1118_1531_fu_80684_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1531_fu_80684_p2() {
    mul_ln1118_1531_fu_80684_p2 = (!mul_ln1118_1531_fu_80684_p0.read().is_01() || !mul_ln1118_1531_fu_80684_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1531_fu_80684_p0.read()) * sc_bigint<32>(mul_ln1118_1531_fu_80684_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1532_fu_80714_p0() {
    mul_ln1118_1532_fu_80714_p0 = tmp_1645_fu_80700_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1532_fu_80714_p1() {
    mul_ln1118_1532_fu_80714_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1532_fu_80714_p2() {
    mul_ln1118_1532_fu_80714_p2 = (!mul_ln1118_1532_fu_80714_p0.read().is_01() || !mul_ln1118_1532_fu_80714_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1532_fu_80714_p0.read()) * sc_bigint<32>(mul_ln1118_1532_fu_80714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1533_fu_80744_p0() {
    mul_ln1118_1533_fu_80744_p0 = tmp_1646_fu_80730_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1533_fu_80744_p1() {
    mul_ln1118_1533_fu_80744_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1533_fu_80744_p2() {
    mul_ln1118_1533_fu_80744_p2 = (!mul_ln1118_1533_fu_80744_p0.read().is_01() || !mul_ln1118_1533_fu_80744_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1533_fu_80744_p0.read()) * sc_bigint<32>(mul_ln1118_1533_fu_80744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1534_fu_80774_p0() {
    mul_ln1118_1534_fu_80774_p0 = tmp_1647_fu_80760_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1534_fu_80774_p1() {
    mul_ln1118_1534_fu_80774_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1534_fu_80774_p2() {
    mul_ln1118_1534_fu_80774_p2 = (!mul_ln1118_1534_fu_80774_p0.read().is_01() || !mul_ln1118_1534_fu_80774_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1534_fu_80774_p0.read()) * sc_bigint<32>(mul_ln1118_1534_fu_80774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1535_fu_80804_p0() {
    mul_ln1118_1535_fu_80804_p0 = tmp_1648_fu_80790_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1535_fu_80804_p1() {
    mul_ln1118_1535_fu_80804_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1535_fu_80804_p2() {
    mul_ln1118_1535_fu_80804_p2 = (!mul_ln1118_1535_fu_80804_p0.read().is_01() || !mul_ln1118_1535_fu_80804_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1535_fu_80804_p0.read()) * sc_bigint<32>(mul_ln1118_1535_fu_80804_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1536_fu_80834_p0() {
    mul_ln1118_1536_fu_80834_p0 = tmp_1649_fu_80820_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1536_fu_80834_p1() {
    mul_ln1118_1536_fu_80834_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1536_fu_80834_p2() {
    mul_ln1118_1536_fu_80834_p2 = (!mul_ln1118_1536_fu_80834_p0.read().is_01() || !mul_ln1118_1536_fu_80834_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1536_fu_80834_p0.read()) * sc_bigint<32>(mul_ln1118_1536_fu_80834_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1537_fu_80864_p0() {
    mul_ln1118_1537_fu_80864_p0 = tmp_1650_fu_80850_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1537_fu_80864_p1() {
    mul_ln1118_1537_fu_80864_p1 =  (sc_lv<32>) (sext_ln1116_185_cast_fu_77425_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1537_fu_80864_p2() {
    mul_ln1118_1537_fu_80864_p2 = (!mul_ln1118_1537_fu_80864_p0.read().is_01() || !mul_ln1118_1537_fu_80864_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1537_fu_80864_p0.read()) * sc_bigint<32>(mul_ln1118_1537_fu_80864_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1538_fu_80894_p0() {
    mul_ln1118_1538_fu_80894_p0 = tmp_1651_fu_80880_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1538_fu_80894_p1() {
    mul_ln1118_1538_fu_80894_p1 =  (sc_lv<32>) (sext_ln1116_186_cast_fu_77458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1538_fu_80894_p2() {
    mul_ln1118_1538_fu_80894_p2 = (!mul_ln1118_1538_fu_80894_p0.read().is_01() || !mul_ln1118_1538_fu_80894_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1538_fu_80894_p0.read()) * sc_bigint<32>(mul_ln1118_1538_fu_80894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1539_fu_81038_p0() {
    mul_ln1118_1539_fu_81038_p0 = tmp_1652_fu_81024_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1539_fu_81038_p1() {
    mul_ln1118_1539_fu_81038_p1 =  (sc_lv<32>) (sext_ln1116_187_cast_fu_77605_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1539_fu_81038_p2() {
    mul_ln1118_1539_fu_81038_p2 = (!mul_ln1118_1539_fu_81038_p0.read().is_01() || !mul_ln1118_1539_fu_81038_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1539_fu_81038_p0.read()) * sc_bigint<32>(mul_ln1118_1539_fu_81038_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_153_fu_30908_p0() {
    mul_ln1118_153_fu_30908_p0 = tmp_178_fu_30894_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_153_fu_30908_p1() {
    mul_ln1118_153_fu_30908_p1 =  (sc_lv<32>) (sext_ln1116_1_cast_fu_25378_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_153_fu_30908_p2() {
    mul_ln1118_153_fu_30908_p2 = (!mul_ln1118_153_fu_30908_p0.read().is_01() || !mul_ln1118_153_fu_30908_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_153_fu_30908_p0.read()) * sc_bigint<32>(mul_ln1118_153_fu_30908_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1540_fu_81068_p0() {
    mul_ln1118_1540_fu_81068_p0 = tmp_1653_fu_81054_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1540_fu_81068_p1() {
    mul_ln1118_1540_fu_81068_p1 =  (sc_lv<32>) (sext_ln1116_188_cast_fu_77638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1540_fu_81068_p2() {
    mul_ln1118_1540_fu_81068_p2 = (!mul_ln1118_1540_fu_81068_p0.read().is_01() || !mul_ln1118_1540_fu_81068_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1540_fu_81068_p0.read()) * sc_bigint<32>(mul_ln1118_1540_fu_81068_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1541_fu_81098_p0() {
    mul_ln1118_1541_fu_81098_p0 = tmp_1654_fu_81084_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1541_fu_81098_p1() {
    mul_ln1118_1541_fu_81098_p1 =  (sc_lv<32>) (sext_ln1116_189_cast_fu_77671_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1541_fu_81098_p2() {
    mul_ln1118_1541_fu_81098_p2 = (!mul_ln1118_1541_fu_81098_p0.read().is_01() || !mul_ln1118_1541_fu_81098_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1541_fu_81098_p0.read()) * sc_bigint<32>(mul_ln1118_1541_fu_81098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1542_fu_81128_p0() {
    mul_ln1118_1542_fu_81128_p0 = tmp_1655_fu_81114_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1542_fu_81128_p1() {
    mul_ln1118_1542_fu_81128_p1 =  (sc_lv<32>) (sext_ln1116_171_cast_fu_76963_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1542_fu_81128_p2() {
    mul_ln1118_1542_fu_81128_p2 = (!mul_ln1118_1542_fu_81128_p0.read().is_01() || !mul_ln1118_1542_fu_81128_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1542_fu_81128_p0.read()) * sc_bigint<32>(mul_ln1118_1542_fu_81128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1543_fu_81158_p0() {
    mul_ln1118_1543_fu_81158_p0 = tmp_1656_fu_81144_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1543_fu_81158_p1() {
    mul_ln1118_1543_fu_81158_p1 =  (sc_lv<32>) (sext_ln1116_172_cast_fu_76996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1543_fu_81158_p2() {
    mul_ln1118_1543_fu_81158_p2 = (!mul_ln1118_1543_fu_81158_p0.read().is_01() || !mul_ln1118_1543_fu_81158_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1543_fu_81158_p0.read()) * sc_bigint<32>(mul_ln1118_1543_fu_81158_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1544_fu_81188_p0() {
    mul_ln1118_1544_fu_81188_p0 = tmp_1657_fu_81174_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1544_fu_81188_p1() {
    mul_ln1118_1544_fu_81188_p1 =  (sc_lv<32>) (sext_ln1116_173_cast_fu_77029_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1544_fu_81188_p2() {
    mul_ln1118_1544_fu_81188_p2 = (!mul_ln1118_1544_fu_81188_p0.read().is_01() || !mul_ln1118_1544_fu_81188_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1544_fu_81188_p0.read()) * sc_bigint<32>(mul_ln1118_1544_fu_81188_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1545_fu_81218_p0() {
    mul_ln1118_1545_fu_81218_p0 = tmp_1658_fu_81204_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1545_fu_81218_p1() {
    mul_ln1118_1545_fu_81218_p1 =  (sc_lv<32>) (sext_ln1116_174_cast_fu_77062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1545_fu_81218_p2() {
    mul_ln1118_1545_fu_81218_p2 = (!mul_ln1118_1545_fu_81218_p0.read().is_01() || !mul_ln1118_1545_fu_81218_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1545_fu_81218_p0.read()) * sc_bigint<32>(mul_ln1118_1545_fu_81218_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1546_fu_81248_p0() {
    mul_ln1118_1546_fu_81248_p0 = tmp_1659_fu_81234_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1546_fu_81248_p1() {
    mul_ln1118_1546_fu_81248_p1 =  (sc_lv<32>) (sext_ln1116_175_cast_fu_77095_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1546_fu_81248_p2() {
    mul_ln1118_1546_fu_81248_p2 = (!mul_ln1118_1546_fu_81248_p0.read().is_01() || !mul_ln1118_1546_fu_81248_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1546_fu_81248_p0.read()) * sc_bigint<32>(mul_ln1118_1546_fu_81248_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1547_fu_81278_p0() {
    mul_ln1118_1547_fu_81278_p0 = tmp_1660_fu_81264_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1547_fu_81278_p1() {
    mul_ln1118_1547_fu_81278_p1 =  (sc_lv<32>) (sext_ln1116_176_cast_fu_77128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1547_fu_81278_p2() {
    mul_ln1118_1547_fu_81278_p2 = (!mul_ln1118_1547_fu_81278_p0.read().is_01() || !mul_ln1118_1547_fu_81278_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1547_fu_81278_p0.read()) * sc_bigint<32>(mul_ln1118_1547_fu_81278_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1548_fu_81308_p0() {
    mul_ln1118_1548_fu_81308_p0 = tmp_1661_fu_81294_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1548_fu_81308_p1() {
    mul_ln1118_1548_fu_81308_p1 =  (sc_lv<32>) (sext_ln1116_177_cast_fu_77161_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1548_fu_81308_p2() {
    mul_ln1118_1548_fu_81308_p2 = (!mul_ln1118_1548_fu_81308_p0.read().is_01() || !mul_ln1118_1548_fu_81308_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1548_fu_81308_p0.read()) * sc_bigint<32>(mul_ln1118_1548_fu_81308_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1549_fu_81338_p0() {
    mul_ln1118_1549_fu_81338_p0 = tmp_1662_fu_81324_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1549_fu_81338_p1() {
    mul_ln1118_1549_fu_81338_p1 =  (sc_lv<32>) (sext_ln1116_178_cast_fu_77194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1549_fu_81338_p2() {
    mul_ln1118_1549_fu_81338_p2 = (!mul_ln1118_1549_fu_81338_p0.read().is_01() || !mul_ln1118_1549_fu_81338_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1549_fu_81338_p0.read()) * sc_bigint<32>(mul_ln1118_1549_fu_81338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_154_fu_30938_p0() {
    mul_ln1118_154_fu_30938_p0 = tmp_180_fu_30924_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_154_fu_30938_p1() {
    mul_ln1118_154_fu_30938_p1 =  (sc_lv<32>) (sext_ln1116_2_cast_fu_25411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_154_fu_30938_p2() {
    mul_ln1118_154_fu_30938_p2 = (!mul_ln1118_154_fu_30938_p0.read().is_01() || !mul_ln1118_154_fu_30938_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_154_fu_30938_p0.read()) * sc_bigint<32>(mul_ln1118_154_fu_30938_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1550_fu_81368_p0() {
    mul_ln1118_1550_fu_81368_p0 = tmp_1663_fu_81354_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1550_fu_81368_p1() {
    mul_ln1118_1550_fu_81368_p1 =  (sc_lv<32>) (sext_ln1116_179_cast_fu_77227_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1550_fu_81368_p2() {
    mul_ln1118_1550_fu_81368_p2 = (!mul_ln1118_1550_fu_81368_p0.read().is_01() || !mul_ln1118_1550_fu_81368_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1550_fu_81368_p0.read()) * sc_bigint<32>(mul_ln1118_1550_fu_81368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1551_fu_81398_p0() {
    mul_ln1118_1551_fu_81398_p0 = tmp_1664_fu_81384_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1551_fu_81398_p1() {
    mul_ln1118_1551_fu_81398_p1 =  (sc_lv<32>) (sext_ln1116_180_cast_fu_77260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1551_fu_81398_p2() {
    mul_ln1118_1551_fu_81398_p2 = (!mul_ln1118_1551_fu_81398_p0.read().is_01() || !mul_ln1118_1551_fu_81398_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1551_fu_81398_p0.read()) * sc_bigint<32>(mul_ln1118_1551_fu_81398_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1552_fu_81428_p0() {
    mul_ln1118_1552_fu_81428_p0 = tmp_1665_fu_81414_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1552_fu_81428_p1() {
    mul_ln1118_1552_fu_81428_p1 =  (sc_lv<32>) (sext_ln1116_181_cast_fu_77293_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1552_fu_81428_p2() {
    mul_ln1118_1552_fu_81428_p2 = (!mul_ln1118_1552_fu_81428_p0.read().is_01() || !mul_ln1118_1552_fu_81428_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1552_fu_81428_p0.read()) * sc_bigint<32>(mul_ln1118_1552_fu_81428_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1553_fu_81458_p0() {
    mul_ln1118_1553_fu_81458_p0 = tmp_1666_fu_81444_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1553_fu_81458_p1() {
    mul_ln1118_1553_fu_81458_p1 =  (sc_lv<32>) (sext_ln1116_182_cast_fu_77326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1553_fu_81458_p2() {
    mul_ln1118_1553_fu_81458_p2 = (!mul_ln1118_1553_fu_81458_p0.read().is_01() || !mul_ln1118_1553_fu_81458_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1553_fu_81458_p0.read()) * sc_bigint<32>(mul_ln1118_1553_fu_81458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1554_fu_81488_p0() {
    mul_ln1118_1554_fu_81488_p0 = tmp_1667_fu_81474_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1554_fu_81488_p1() {
    mul_ln1118_1554_fu_81488_p1 =  (sc_lv<32>) (sext_ln1116_183_cast_fu_77359_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1554_fu_81488_p2() {
    mul_ln1118_1554_fu_81488_p2 = (!mul_ln1118_1554_fu_81488_p0.read().is_01() || !mul_ln1118_1554_fu_81488_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1554_fu_81488_p0.read()) * sc_bigint<32>(mul_ln1118_1554_fu_81488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1555_fu_81518_p0() {
    mul_ln1118_1555_fu_81518_p0 = tmp_1668_fu_81504_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1555_fu_81518_p1() {
    mul_ln1118_1555_fu_81518_p1 =  (sc_lv<32>) (sext_ln1116_184_cast_fu_77392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1555_fu_81518_p2() {
    mul_ln1118_1555_fu_81518_p2 = (!mul_ln1118_1555_fu_81518_p0.read().is_01() || !mul_ln1118_1555_fu_81518_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_1555_fu_81518_p0.read()) * sc_bigint<32>(mul_ln1118_1555_fu_81518_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1556_fu_81548_p0() {
    mul_ln1118_1556_fu_81548_p0 = tmp_1669_fu_81534_p4.read();
}

}


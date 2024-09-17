#include "dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2156_fu_103310_p0() {
    mul_ln1118_2156_fu_103310_p0 = tmp_2307_fu_103296_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2156_fu_103310_p1() {
    mul_ln1118_2156_fu_103310_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2156_fu_103310_p2() {
    mul_ln1118_2156_fu_103310_p2 = (!mul_ln1118_2156_fu_103310_p0.read().is_01() || !mul_ln1118_2156_fu_103310_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2156_fu_103310_p0.read()) * sc_bigint<32>(mul_ln1118_2156_fu_103310_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2157_fu_103340_p0() {
    mul_ln1118_2157_fu_103340_p0 = tmp_2308_fu_103326_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2157_fu_103340_p1() {
    mul_ln1118_2157_fu_103340_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2157_fu_103340_p2() {
    mul_ln1118_2157_fu_103340_p2 = (!mul_ln1118_2157_fu_103340_p0.read().is_01() || !mul_ln1118_2157_fu_103340_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2157_fu_103340_p0.read()) * sc_bigint<32>(mul_ln1118_2157_fu_103340_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2158_fu_103370_p0() {
    mul_ln1118_2158_fu_103370_p0 = tmp_2309_fu_103356_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2158_fu_103370_p1() {
    mul_ln1118_2158_fu_103370_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2158_fu_103370_p2() {
    mul_ln1118_2158_fu_103370_p2 = (!mul_ln1118_2158_fu_103370_p0.read().is_01() || !mul_ln1118_2158_fu_103370_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2158_fu_103370_p0.read()) * sc_bigint<32>(mul_ln1118_2158_fu_103370_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2159_fu_103400_p0() {
    mul_ln1118_2159_fu_103400_p0 = tmp_2310_fu_103386_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2159_fu_103400_p1() {
    mul_ln1118_2159_fu_103400_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2159_fu_103400_p2() {
    mul_ln1118_2159_fu_103400_p2 = (!mul_ln1118_2159_fu_103400_p0.read().is_01() || !mul_ln1118_2159_fu_103400_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2159_fu_103400_p0.read()) * sc_bigint<32>(mul_ln1118_2159_fu_103400_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_215_fu_33110_p0() {
    mul_ln1118_215_fu_33110_p0 = tmp_252_fu_33096_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_215_fu_33110_p1() {
    mul_ln1118_215_fu_33110_p1 =  (sc_lv<32>) (sext_ln1116_6_cast_fu_25543_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_215_fu_33110_p2() {
    mul_ln1118_215_fu_33110_p2 = (!mul_ln1118_215_fu_33110_p0.read().is_01() || !mul_ln1118_215_fu_33110_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_215_fu_33110_p0.read()) * sc_bigint<32>(mul_ln1118_215_fu_33110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2160_fu_103430_p0() {
    mul_ln1118_2160_fu_103430_p0 = tmp_2311_fu_103416_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2160_fu_103430_p1() {
    mul_ln1118_2160_fu_103430_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2160_fu_103430_p2() {
    mul_ln1118_2160_fu_103430_p2 = (!mul_ln1118_2160_fu_103430_p0.read().is_01() || !mul_ln1118_2160_fu_103430_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2160_fu_103430_p0.read()) * sc_bigint<32>(mul_ln1118_2160_fu_103430_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2161_fu_103460_p0() {
    mul_ln1118_2161_fu_103460_p0 = tmp_2312_fu_103446_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2161_fu_103460_p1() {
    mul_ln1118_2161_fu_103460_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2161_fu_103460_p2() {
    mul_ln1118_2161_fu_103460_p2 = (!mul_ln1118_2161_fu_103460_p0.read().is_01() || !mul_ln1118_2161_fu_103460_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2161_fu_103460_p0.read()) * sc_bigint<32>(mul_ln1118_2161_fu_103460_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2162_fu_103490_p0() {
    mul_ln1118_2162_fu_103490_p0 = tmp_2313_fu_103476_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2162_fu_103490_p1() {
    mul_ln1118_2162_fu_103490_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2162_fu_103490_p2() {
    mul_ln1118_2162_fu_103490_p2 = (!mul_ln1118_2162_fu_103490_p0.read().is_01() || !mul_ln1118_2162_fu_103490_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2162_fu_103490_p0.read()) * sc_bigint<32>(mul_ln1118_2162_fu_103490_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2163_fu_103520_p0() {
    mul_ln1118_2163_fu_103520_p0 = tmp_2314_fu_103506_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2163_fu_103520_p1() {
    mul_ln1118_2163_fu_103520_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2163_fu_103520_p2() {
    mul_ln1118_2163_fu_103520_p2 = (!mul_ln1118_2163_fu_103520_p0.read().is_01() || !mul_ln1118_2163_fu_103520_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2163_fu_103520_p0.read()) * sc_bigint<32>(mul_ln1118_2163_fu_103520_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2164_fu_103550_p0() {
    mul_ln1118_2164_fu_103550_p0 = tmp_2315_fu_103536_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2164_fu_103550_p1() {
    mul_ln1118_2164_fu_103550_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2164_fu_103550_p2() {
    mul_ln1118_2164_fu_103550_p2 = (!mul_ln1118_2164_fu_103550_p0.read().is_01() || !mul_ln1118_2164_fu_103550_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2164_fu_103550_p0.read()) * sc_bigint<32>(mul_ln1118_2164_fu_103550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2165_fu_103580_p0() {
    mul_ln1118_2165_fu_103580_p0 = tmp_2316_fu_103566_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2165_fu_103580_p1() {
    mul_ln1118_2165_fu_103580_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2165_fu_103580_p2() {
    mul_ln1118_2165_fu_103580_p2 = (!mul_ln1118_2165_fu_103580_p0.read().is_01() || !mul_ln1118_2165_fu_103580_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2165_fu_103580_p0.read()) * sc_bigint<32>(mul_ln1118_2165_fu_103580_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2166_fu_103724_p0() {
    mul_ln1118_2166_fu_103724_p0 = tmp_2317_fu_103710_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2166_fu_103724_p1() {
    mul_ln1118_2166_fu_103724_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2166_fu_103724_p2() {
    mul_ln1118_2166_fu_103724_p2 = (!mul_ln1118_2166_fu_103724_p0.read().is_01() || !mul_ln1118_2166_fu_103724_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2166_fu_103724_p0.read()) * sc_bigint<32>(mul_ln1118_2166_fu_103724_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2167_fu_103754_p0() {
    mul_ln1118_2167_fu_103754_p0 = tmp_2318_fu_103740_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2167_fu_103754_p1() {
    mul_ln1118_2167_fu_103754_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2167_fu_103754_p2() {
    mul_ln1118_2167_fu_103754_p2 = (!mul_ln1118_2167_fu_103754_p0.read().is_01() || !mul_ln1118_2167_fu_103754_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2167_fu_103754_p0.read()) * sc_bigint<32>(mul_ln1118_2167_fu_103754_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2168_fu_103784_p0() {
    mul_ln1118_2168_fu_103784_p0 = tmp_2319_fu_103770_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2168_fu_103784_p1() {
    mul_ln1118_2168_fu_103784_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2168_fu_103784_p2() {
    mul_ln1118_2168_fu_103784_p2 = (!mul_ln1118_2168_fu_103784_p0.read().is_01() || !mul_ln1118_2168_fu_103784_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2168_fu_103784_p0.read()) * sc_bigint<32>(mul_ln1118_2168_fu_103784_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2169_fu_103814_p0() {
    mul_ln1118_2169_fu_103814_p0 = tmp_2320_fu_103800_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2169_fu_103814_p1() {
    mul_ln1118_2169_fu_103814_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2169_fu_103814_p2() {
    mul_ln1118_2169_fu_103814_p2 = (!mul_ln1118_2169_fu_103814_p0.read().is_01() || !mul_ln1118_2169_fu_103814_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2169_fu_103814_p0.read()) * sc_bigint<32>(mul_ln1118_2169_fu_103814_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_216_fu_33140_p0() {
    mul_ln1118_216_fu_33140_p0 = tmp_253_fu_33126_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_216_fu_33140_p1() {
    mul_ln1118_216_fu_33140_p1 =  (sc_lv<32>) (sext_ln1116_7_cast_fu_25576_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_216_fu_33140_p2() {
    mul_ln1118_216_fu_33140_p2 = (!mul_ln1118_216_fu_33140_p0.read().is_01() || !mul_ln1118_216_fu_33140_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_216_fu_33140_p0.read()) * sc_bigint<32>(mul_ln1118_216_fu_33140_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2170_fu_103844_p0() {
    mul_ln1118_2170_fu_103844_p0 = tmp_2321_fu_103830_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2170_fu_103844_p1() {
    mul_ln1118_2170_fu_103844_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2170_fu_103844_p2() {
    mul_ln1118_2170_fu_103844_p2 = (!mul_ln1118_2170_fu_103844_p0.read().is_01() || !mul_ln1118_2170_fu_103844_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2170_fu_103844_p0.read()) * sc_bigint<32>(mul_ln1118_2170_fu_103844_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2171_fu_103874_p0() {
    mul_ln1118_2171_fu_103874_p0 = tmp_2322_fu_103860_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2171_fu_103874_p1() {
    mul_ln1118_2171_fu_103874_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2171_fu_103874_p2() {
    mul_ln1118_2171_fu_103874_p2 = (!mul_ln1118_2171_fu_103874_p0.read().is_01() || !mul_ln1118_2171_fu_103874_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2171_fu_103874_p0.read()) * sc_bigint<32>(mul_ln1118_2171_fu_103874_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2172_fu_103904_p0() {
    mul_ln1118_2172_fu_103904_p0 = tmp_2323_fu_103890_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2172_fu_103904_p1() {
    mul_ln1118_2172_fu_103904_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2172_fu_103904_p2() {
    mul_ln1118_2172_fu_103904_p2 = (!mul_ln1118_2172_fu_103904_p0.read().is_01() || !mul_ln1118_2172_fu_103904_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2172_fu_103904_p0.read()) * sc_bigint<32>(mul_ln1118_2172_fu_103904_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2173_fu_103934_p0() {
    mul_ln1118_2173_fu_103934_p0 = tmp_2324_fu_103920_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2173_fu_103934_p1() {
    mul_ln1118_2173_fu_103934_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2173_fu_103934_p2() {
    mul_ln1118_2173_fu_103934_p2 = (!mul_ln1118_2173_fu_103934_p0.read().is_01() || !mul_ln1118_2173_fu_103934_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2173_fu_103934_p0.read()) * sc_bigint<32>(mul_ln1118_2173_fu_103934_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2174_fu_103964_p0() {
    mul_ln1118_2174_fu_103964_p0 = tmp_2325_fu_103950_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2174_fu_103964_p1() {
    mul_ln1118_2174_fu_103964_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2174_fu_103964_p2() {
    mul_ln1118_2174_fu_103964_p2 = (!mul_ln1118_2174_fu_103964_p0.read().is_01() || !mul_ln1118_2174_fu_103964_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2174_fu_103964_p0.read()) * sc_bigint<32>(mul_ln1118_2174_fu_103964_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2175_fu_103994_p0() {
    mul_ln1118_2175_fu_103994_p0 = tmp_2326_fu_103980_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2175_fu_103994_p1() {
    mul_ln1118_2175_fu_103994_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2175_fu_103994_p2() {
    mul_ln1118_2175_fu_103994_p2 = (!mul_ln1118_2175_fu_103994_p0.read().is_01() || !mul_ln1118_2175_fu_103994_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2175_fu_103994_p0.read()) * sc_bigint<32>(mul_ln1118_2175_fu_103994_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2176_fu_104024_p0() {
    mul_ln1118_2176_fu_104024_p0 = tmp_2327_fu_104010_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2176_fu_104024_p1() {
    mul_ln1118_2176_fu_104024_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2176_fu_104024_p2() {
    mul_ln1118_2176_fu_104024_p2 = (!mul_ln1118_2176_fu_104024_p0.read().is_01() || !mul_ln1118_2176_fu_104024_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2176_fu_104024_p0.read()) * sc_bigint<32>(mul_ln1118_2176_fu_104024_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2177_fu_104054_p0() {
    mul_ln1118_2177_fu_104054_p0 = tmp_2328_fu_104040_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2177_fu_104054_p1() {
    mul_ln1118_2177_fu_104054_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2177_fu_104054_p2() {
    mul_ln1118_2177_fu_104054_p2 = (!mul_ln1118_2177_fu_104054_p0.read().is_01() || !mul_ln1118_2177_fu_104054_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2177_fu_104054_p0.read()) * sc_bigint<32>(mul_ln1118_2177_fu_104054_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2178_fu_104084_p0() {
    mul_ln1118_2178_fu_104084_p0 = tmp_2329_fu_104070_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2178_fu_104084_p1() {
    mul_ln1118_2178_fu_104084_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2178_fu_104084_p2() {
    mul_ln1118_2178_fu_104084_p2 = (!mul_ln1118_2178_fu_104084_p0.read().is_01() || !mul_ln1118_2178_fu_104084_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2178_fu_104084_p0.read()) * sc_bigint<32>(mul_ln1118_2178_fu_104084_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2179_fu_104114_p0() {
    mul_ln1118_2179_fu_104114_p0 = tmp_2330_fu_104100_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2179_fu_104114_p1() {
    mul_ln1118_2179_fu_104114_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2179_fu_104114_p2() {
    mul_ln1118_2179_fu_104114_p2 = (!mul_ln1118_2179_fu_104114_p0.read().is_01() || !mul_ln1118_2179_fu_104114_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2179_fu_104114_p0.read()) * sc_bigint<32>(mul_ln1118_2179_fu_104114_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_217_fu_33170_p0() {
    mul_ln1118_217_fu_33170_p0 = tmp_254_fu_33156_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_217_fu_33170_p1() {
    mul_ln1118_217_fu_33170_p1 =  (sc_lv<32>) (sext_ln1116_8_cast_fu_25609_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_217_fu_33170_p2() {
    mul_ln1118_217_fu_33170_p2 = (!mul_ln1118_217_fu_33170_p0.read().is_01() || !mul_ln1118_217_fu_33170_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_217_fu_33170_p0.read()) * sc_bigint<32>(mul_ln1118_217_fu_33170_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2180_fu_104144_p0() {
    mul_ln1118_2180_fu_104144_p0 = tmp_2331_fu_104130_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2180_fu_104144_p1() {
    mul_ln1118_2180_fu_104144_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2180_fu_104144_p2() {
    mul_ln1118_2180_fu_104144_p2 = (!mul_ln1118_2180_fu_104144_p0.read().is_01() || !mul_ln1118_2180_fu_104144_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2180_fu_104144_p0.read()) * sc_bigint<32>(mul_ln1118_2180_fu_104144_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2181_fu_104174_p0() {
    mul_ln1118_2181_fu_104174_p0 = tmp_2332_fu_104160_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2181_fu_104174_p1() {
    mul_ln1118_2181_fu_104174_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2181_fu_104174_p2() {
    mul_ln1118_2181_fu_104174_p2 = (!mul_ln1118_2181_fu_104174_p0.read().is_01() || !mul_ln1118_2181_fu_104174_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2181_fu_104174_p0.read()) * sc_bigint<32>(mul_ln1118_2181_fu_104174_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2182_fu_104204_p0() {
    mul_ln1118_2182_fu_104204_p0 = tmp_2333_fu_104190_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2182_fu_104204_p1() {
    mul_ln1118_2182_fu_104204_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2182_fu_104204_p2() {
    mul_ln1118_2182_fu_104204_p2 = (!mul_ln1118_2182_fu_104204_p0.read().is_01() || !mul_ln1118_2182_fu_104204_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2182_fu_104204_p0.read()) * sc_bigint<32>(mul_ln1118_2182_fu_104204_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2183_fu_104234_p0() {
    mul_ln1118_2183_fu_104234_p0 = tmp_2334_fu_104220_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2183_fu_104234_p1() {
    mul_ln1118_2183_fu_104234_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2183_fu_104234_p2() {
    mul_ln1118_2183_fu_104234_p2 = (!mul_ln1118_2183_fu_104234_p0.read().is_01() || !mul_ln1118_2183_fu_104234_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2183_fu_104234_p0.read()) * sc_bigint<32>(mul_ln1118_2183_fu_104234_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2184_fu_104264_p0() {
    mul_ln1118_2184_fu_104264_p0 = tmp_2335_fu_104250_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2184_fu_104264_p1() {
    mul_ln1118_2184_fu_104264_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2184_fu_104264_p2() {
    mul_ln1118_2184_fu_104264_p2 = (!mul_ln1118_2184_fu_104264_p0.read().is_01() || !mul_ln1118_2184_fu_104264_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2184_fu_104264_p0.read()) * sc_bigint<32>(mul_ln1118_2184_fu_104264_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2185_fu_104408_p0() {
    mul_ln1118_2185_fu_104408_p0 = tmp_2336_fu_104394_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2185_fu_104408_p1() {
    mul_ln1118_2185_fu_104408_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2185_fu_104408_p2() {
    mul_ln1118_2185_fu_104408_p2 = (!mul_ln1118_2185_fu_104408_p0.read().is_01() || !mul_ln1118_2185_fu_104408_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2185_fu_104408_p0.read()) * sc_bigint<32>(mul_ln1118_2185_fu_104408_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2186_fu_104438_p0() {
    mul_ln1118_2186_fu_104438_p0 = tmp_2337_fu_104424_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2186_fu_104438_p1() {
    mul_ln1118_2186_fu_104438_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2186_fu_104438_p2() {
    mul_ln1118_2186_fu_104438_p2 = (!mul_ln1118_2186_fu_104438_p0.read().is_01() || !mul_ln1118_2186_fu_104438_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2186_fu_104438_p0.read()) * sc_bigint<32>(mul_ln1118_2186_fu_104438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2187_fu_104468_p0() {
    mul_ln1118_2187_fu_104468_p0 = tmp_2338_fu_104454_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2187_fu_104468_p1() {
    mul_ln1118_2187_fu_104468_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2187_fu_104468_p2() {
    mul_ln1118_2187_fu_104468_p2 = (!mul_ln1118_2187_fu_104468_p0.read().is_01() || !mul_ln1118_2187_fu_104468_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2187_fu_104468_p0.read()) * sc_bigint<32>(mul_ln1118_2187_fu_104468_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2188_fu_104498_p0() {
    mul_ln1118_2188_fu_104498_p0 = tmp_2339_fu_104484_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2188_fu_104498_p1() {
    mul_ln1118_2188_fu_104498_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2188_fu_104498_p2() {
    mul_ln1118_2188_fu_104498_p2 = (!mul_ln1118_2188_fu_104498_p0.read().is_01() || !mul_ln1118_2188_fu_104498_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2188_fu_104498_p0.read()) * sc_bigint<32>(mul_ln1118_2188_fu_104498_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2189_fu_104528_p0() {
    mul_ln1118_2189_fu_104528_p0 = tmp_2340_fu_104514_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2189_fu_104528_p1() {
    mul_ln1118_2189_fu_104528_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2189_fu_104528_p2() {
    mul_ln1118_2189_fu_104528_p2 = (!mul_ln1118_2189_fu_104528_p0.read().is_01() || !mul_ln1118_2189_fu_104528_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2189_fu_104528_p0.read()) * sc_bigint<32>(mul_ln1118_2189_fu_104528_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_218_fu_33200_p0() {
    mul_ln1118_218_fu_33200_p0 = tmp_255_fu_33186_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_218_fu_33200_p1() {
    mul_ln1118_218_fu_33200_p1 =  (sc_lv<32>) (sext_ln1116_9_cast_fu_25642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_218_fu_33200_p2() {
    mul_ln1118_218_fu_33200_p2 = (!mul_ln1118_218_fu_33200_p0.read().is_01() || !mul_ln1118_218_fu_33200_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_218_fu_33200_p0.read()) * sc_bigint<32>(mul_ln1118_218_fu_33200_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2190_fu_104558_p0() {
    mul_ln1118_2190_fu_104558_p0 = tmp_2341_fu_104544_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2190_fu_104558_p1() {
    mul_ln1118_2190_fu_104558_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2190_fu_104558_p2() {
    mul_ln1118_2190_fu_104558_p2 = (!mul_ln1118_2190_fu_104558_p0.read().is_01() || !mul_ln1118_2190_fu_104558_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2190_fu_104558_p0.read()) * sc_bigint<32>(mul_ln1118_2190_fu_104558_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2191_fu_104588_p0() {
    mul_ln1118_2191_fu_104588_p0 = tmp_2342_fu_104574_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2191_fu_104588_p1() {
    mul_ln1118_2191_fu_104588_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2191_fu_104588_p2() {
    mul_ln1118_2191_fu_104588_p2 = (!mul_ln1118_2191_fu_104588_p0.read().is_01() || !mul_ln1118_2191_fu_104588_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2191_fu_104588_p0.read()) * sc_bigint<32>(mul_ln1118_2191_fu_104588_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2192_fu_104618_p0() {
    mul_ln1118_2192_fu_104618_p0 = tmp_2343_fu_104604_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2192_fu_104618_p1() {
    mul_ln1118_2192_fu_104618_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2192_fu_104618_p2() {
    mul_ln1118_2192_fu_104618_p2 = (!mul_ln1118_2192_fu_104618_p0.read().is_01() || !mul_ln1118_2192_fu_104618_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2192_fu_104618_p0.read()) * sc_bigint<32>(mul_ln1118_2192_fu_104618_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2193_fu_104648_p0() {
    mul_ln1118_2193_fu_104648_p0 = tmp_2344_fu_104634_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2193_fu_104648_p1() {
    mul_ln1118_2193_fu_104648_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2193_fu_104648_p2() {
    mul_ln1118_2193_fu_104648_p2 = (!mul_ln1118_2193_fu_104648_p0.read().is_01() || !mul_ln1118_2193_fu_104648_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2193_fu_104648_p0.read()) * sc_bigint<32>(mul_ln1118_2193_fu_104648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2194_fu_104678_p0() {
    mul_ln1118_2194_fu_104678_p0 = tmp_2345_fu_104664_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2194_fu_104678_p1() {
    mul_ln1118_2194_fu_104678_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2194_fu_104678_p2() {
    mul_ln1118_2194_fu_104678_p2 = (!mul_ln1118_2194_fu_104678_p0.read().is_01() || !mul_ln1118_2194_fu_104678_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2194_fu_104678_p0.read()) * sc_bigint<32>(mul_ln1118_2194_fu_104678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2195_fu_104708_p0() {
    mul_ln1118_2195_fu_104708_p0 = tmp_2346_fu_104694_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2195_fu_104708_p1() {
    mul_ln1118_2195_fu_104708_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2195_fu_104708_p2() {
    mul_ln1118_2195_fu_104708_p2 = (!mul_ln1118_2195_fu_104708_p0.read().is_01() || !mul_ln1118_2195_fu_104708_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2195_fu_104708_p0.read()) * sc_bigint<32>(mul_ln1118_2195_fu_104708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2196_fu_104738_p0() {
    mul_ln1118_2196_fu_104738_p0 = tmp_2347_fu_104724_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2196_fu_104738_p1() {
    mul_ln1118_2196_fu_104738_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2196_fu_104738_p2() {
    mul_ln1118_2196_fu_104738_p2 = (!mul_ln1118_2196_fu_104738_p0.read().is_01() || !mul_ln1118_2196_fu_104738_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2196_fu_104738_p0.read()) * sc_bigint<32>(mul_ln1118_2196_fu_104738_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2197_fu_104768_p0() {
    mul_ln1118_2197_fu_104768_p0 = tmp_2348_fu_104754_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2197_fu_104768_p1() {
    mul_ln1118_2197_fu_104768_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2197_fu_104768_p2() {
    mul_ln1118_2197_fu_104768_p2 = (!mul_ln1118_2197_fu_104768_p0.read().is_01() || !mul_ln1118_2197_fu_104768_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2197_fu_104768_p0.read()) * sc_bigint<32>(mul_ln1118_2197_fu_104768_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2198_fu_104798_p0() {
    mul_ln1118_2198_fu_104798_p0 = tmp_2349_fu_104784_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2198_fu_104798_p1() {
    mul_ln1118_2198_fu_104798_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2198_fu_104798_p2() {
    mul_ln1118_2198_fu_104798_p2 = (!mul_ln1118_2198_fu_104798_p0.read().is_01() || !mul_ln1118_2198_fu_104798_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2198_fu_104798_p0.read()) * sc_bigint<32>(mul_ln1118_2198_fu_104798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2199_fu_104828_p0() {
    mul_ln1118_2199_fu_104828_p0 = tmp_2350_fu_104814_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2199_fu_104828_p1() {
    mul_ln1118_2199_fu_104828_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2199_fu_104828_p2() {
    mul_ln1118_2199_fu_104828_p2 = (!mul_ln1118_2199_fu_104828_p0.read().is_01() || !mul_ln1118_2199_fu_104828_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2199_fu_104828_p0.read()) * sc_bigint<32>(mul_ln1118_2199_fu_104828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_219_fu_33230_p0() {
    mul_ln1118_219_fu_33230_p0 = tmp_256_fu_33216_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_219_fu_33230_p1() {
    mul_ln1118_219_fu_33230_p1 =  (sc_lv<32>) (sext_ln1116_10_cast_fu_25675_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_219_fu_33230_p2() {
    mul_ln1118_219_fu_33230_p2 = (!mul_ln1118_219_fu_33230_p0.read().is_01() || !mul_ln1118_219_fu_33230_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_219_fu_33230_p0.read()) * sc_bigint<32>(mul_ln1118_219_fu_33230_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_21_fu_26150_p0() {
    mul_ln1118_21_fu_26150_p0 = tmp_40_fu_26136_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_21_fu_26150_p1() {
    mul_ln1118_21_fu_26150_p1 =  (sc_lv<32>) (sext_ln1116_2_cast_fu_25411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_21_fu_26150_p2() {
    mul_ln1118_21_fu_26150_p2 = (!mul_ln1118_21_fu_26150_p0.read().is_01() || !mul_ln1118_21_fu_26150_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_21_fu_26150_p0.read()) * sc_bigint<32>(mul_ln1118_21_fu_26150_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2200_fu_104858_p0() {
    mul_ln1118_2200_fu_104858_p0 = tmp_2351_fu_104844_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2200_fu_104858_p1() {
    mul_ln1118_2200_fu_104858_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2200_fu_104858_p2() {
    mul_ln1118_2200_fu_104858_p2 = (!mul_ln1118_2200_fu_104858_p0.read().is_01() || !mul_ln1118_2200_fu_104858_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2200_fu_104858_p0.read()) * sc_bigint<32>(mul_ln1118_2200_fu_104858_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2201_fu_104888_p0() {
    mul_ln1118_2201_fu_104888_p0 = tmp_2352_fu_104874_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2201_fu_104888_p1() {
    mul_ln1118_2201_fu_104888_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2201_fu_104888_p2() {
    mul_ln1118_2201_fu_104888_p2 = (!mul_ln1118_2201_fu_104888_p0.read().is_01() || !mul_ln1118_2201_fu_104888_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2201_fu_104888_p0.read()) * sc_bigint<32>(mul_ln1118_2201_fu_104888_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2202_fu_104918_p0() {
    mul_ln1118_2202_fu_104918_p0 = tmp_2353_fu_104904_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2202_fu_104918_p1() {
    mul_ln1118_2202_fu_104918_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2202_fu_104918_p2() {
    mul_ln1118_2202_fu_104918_p2 = (!mul_ln1118_2202_fu_104918_p0.read().is_01() || !mul_ln1118_2202_fu_104918_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2202_fu_104918_p0.read()) * sc_bigint<32>(mul_ln1118_2202_fu_104918_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2203_fu_104948_p0() {
    mul_ln1118_2203_fu_104948_p0 = tmp_2354_fu_104934_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2203_fu_104948_p1() {
    mul_ln1118_2203_fu_104948_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2203_fu_104948_p2() {
    mul_ln1118_2203_fu_104948_p2 = (!mul_ln1118_2203_fu_104948_p0.read().is_01() || !mul_ln1118_2203_fu_104948_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2203_fu_104948_p0.read()) * sc_bigint<32>(mul_ln1118_2203_fu_104948_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2204_fu_105092_p0() {
    mul_ln1118_2204_fu_105092_p0 = tmp_2355_fu_105078_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2204_fu_105092_p1() {
    mul_ln1118_2204_fu_105092_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2204_fu_105092_p2() {
    mul_ln1118_2204_fu_105092_p2 = (!mul_ln1118_2204_fu_105092_p0.read().is_01() || !mul_ln1118_2204_fu_105092_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2204_fu_105092_p0.read()) * sc_bigint<32>(mul_ln1118_2204_fu_105092_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2205_fu_105122_p0() {
    mul_ln1118_2205_fu_105122_p0 = tmp_2356_fu_105108_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2205_fu_105122_p1() {
    mul_ln1118_2205_fu_105122_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2205_fu_105122_p2() {
    mul_ln1118_2205_fu_105122_p2 = (!mul_ln1118_2205_fu_105122_p0.read().is_01() || !mul_ln1118_2205_fu_105122_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2205_fu_105122_p0.read()) * sc_bigint<32>(mul_ln1118_2205_fu_105122_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2206_fu_105152_p0() {
    mul_ln1118_2206_fu_105152_p0 = tmp_2357_fu_105138_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2206_fu_105152_p1() {
    mul_ln1118_2206_fu_105152_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2206_fu_105152_p2() {
    mul_ln1118_2206_fu_105152_p2 = (!mul_ln1118_2206_fu_105152_p0.read().is_01() || !mul_ln1118_2206_fu_105152_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2206_fu_105152_p0.read()) * sc_bigint<32>(mul_ln1118_2206_fu_105152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2207_fu_105182_p0() {
    mul_ln1118_2207_fu_105182_p0 = tmp_2358_fu_105168_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2207_fu_105182_p1() {
    mul_ln1118_2207_fu_105182_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2207_fu_105182_p2() {
    mul_ln1118_2207_fu_105182_p2 = (!mul_ln1118_2207_fu_105182_p0.read().is_01() || !mul_ln1118_2207_fu_105182_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2207_fu_105182_p0.read()) * sc_bigint<32>(mul_ln1118_2207_fu_105182_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2208_fu_105212_p0() {
    mul_ln1118_2208_fu_105212_p0 = tmp_2359_fu_105198_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2208_fu_105212_p1() {
    mul_ln1118_2208_fu_105212_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2208_fu_105212_p2() {
    mul_ln1118_2208_fu_105212_p2 = (!mul_ln1118_2208_fu_105212_p0.read().is_01() || !mul_ln1118_2208_fu_105212_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2208_fu_105212_p0.read()) * sc_bigint<32>(mul_ln1118_2208_fu_105212_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2209_fu_105242_p0() {
    mul_ln1118_2209_fu_105242_p0 = tmp_2360_fu_105228_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2209_fu_105242_p1() {
    mul_ln1118_2209_fu_105242_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2209_fu_105242_p2() {
    mul_ln1118_2209_fu_105242_p2 = (!mul_ln1118_2209_fu_105242_p0.read().is_01() || !mul_ln1118_2209_fu_105242_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2209_fu_105242_p0.read()) * sc_bigint<32>(mul_ln1118_2209_fu_105242_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_220_fu_33260_p0() {
    mul_ln1118_220_fu_33260_p0 = tmp_257_fu_33246_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_220_fu_33260_p1() {
    mul_ln1118_220_fu_33260_p1 =  (sc_lv<32>) (sext_ln1116_11_cast_fu_25708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_220_fu_33260_p2() {
    mul_ln1118_220_fu_33260_p2 = (!mul_ln1118_220_fu_33260_p0.read().is_01() || !mul_ln1118_220_fu_33260_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_220_fu_33260_p0.read()) * sc_bigint<32>(mul_ln1118_220_fu_33260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2210_fu_105272_p0() {
    mul_ln1118_2210_fu_105272_p0 = tmp_2361_fu_105258_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2210_fu_105272_p1() {
    mul_ln1118_2210_fu_105272_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2210_fu_105272_p2() {
    mul_ln1118_2210_fu_105272_p2 = (!mul_ln1118_2210_fu_105272_p0.read().is_01() || !mul_ln1118_2210_fu_105272_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2210_fu_105272_p0.read()) * sc_bigint<32>(mul_ln1118_2210_fu_105272_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2211_fu_105302_p0() {
    mul_ln1118_2211_fu_105302_p0 = tmp_2362_fu_105288_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2211_fu_105302_p1() {
    mul_ln1118_2211_fu_105302_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2211_fu_105302_p2() {
    mul_ln1118_2211_fu_105302_p2 = (!mul_ln1118_2211_fu_105302_p0.read().is_01() || !mul_ln1118_2211_fu_105302_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2211_fu_105302_p0.read()) * sc_bigint<32>(mul_ln1118_2211_fu_105302_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2212_fu_105332_p0() {
    mul_ln1118_2212_fu_105332_p0 = tmp_2363_fu_105318_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2212_fu_105332_p1() {
    mul_ln1118_2212_fu_105332_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2212_fu_105332_p2() {
    mul_ln1118_2212_fu_105332_p2 = (!mul_ln1118_2212_fu_105332_p0.read().is_01() || !mul_ln1118_2212_fu_105332_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2212_fu_105332_p0.read()) * sc_bigint<32>(mul_ln1118_2212_fu_105332_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2213_fu_105362_p0() {
    mul_ln1118_2213_fu_105362_p0 = tmp_2364_fu_105348_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2213_fu_105362_p1() {
    mul_ln1118_2213_fu_105362_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2213_fu_105362_p2() {
    mul_ln1118_2213_fu_105362_p2 = (!mul_ln1118_2213_fu_105362_p0.read().is_01() || !mul_ln1118_2213_fu_105362_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2213_fu_105362_p0.read()) * sc_bigint<32>(mul_ln1118_2213_fu_105362_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2214_fu_105392_p0() {
    mul_ln1118_2214_fu_105392_p0 = tmp_2365_fu_105378_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2214_fu_105392_p1() {
    mul_ln1118_2214_fu_105392_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2214_fu_105392_p2() {
    mul_ln1118_2214_fu_105392_p2 = (!mul_ln1118_2214_fu_105392_p0.read().is_01() || !mul_ln1118_2214_fu_105392_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2214_fu_105392_p0.read()) * sc_bigint<32>(mul_ln1118_2214_fu_105392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2215_fu_105422_p0() {
    mul_ln1118_2215_fu_105422_p0 = tmp_2366_fu_105408_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2215_fu_105422_p1() {
    mul_ln1118_2215_fu_105422_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2215_fu_105422_p2() {
    mul_ln1118_2215_fu_105422_p2 = (!mul_ln1118_2215_fu_105422_p0.read().is_01() || !mul_ln1118_2215_fu_105422_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2215_fu_105422_p0.read()) * sc_bigint<32>(mul_ln1118_2215_fu_105422_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2216_fu_105452_p0() {
    mul_ln1118_2216_fu_105452_p0 = tmp_2367_fu_105438_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2216_fu_105452_p1() {
    mul_ln1118_2216_fu_105452_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2216_fu_105452_p2() {
    mul_ln1118_2216_fu_105452_p2 = (!mul_ln1118_2216_fu_105452_p0.read().is_01() || !mul_ln1118_2216_fu_105452_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2216_fu_105452_p0.read()) * sc_bigint<32>(mul_ln1118_2216_fu_105452_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2217_fu_105482_p0() {
    mul_ln1118_2217_fu_105482_p0 = tmp_2368_fu_105468_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2217_fu_105482_p1() {
    mul_ln1118_2217_fu_105482_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2217_fu_105482_p2() {
    mul_ln1118_2217_fu_105482_p2 = (!mul_ln1118_2217_fu_105482_p0.read().is_01() || !mul_ln1118_2217_fu_105482_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2217_fu_105482_p0.read()) * sc_bigint<32>(mul_ln1118_2217_fu_105482_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2218_fu_105512_p0() {
    mul_ln1118_2218_fu_105512_p0 = tmp_2369_fu_105498_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2218_fu_105512_p1() {
    mul_ln1118_2218_fu_105512_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2218_fu_105512_p2() {
    mul_ln1118_2218_fu_105512_p2 = (!mul_ln1118_2218_fu_105512_p0.read().is_01() || !mul_ln1118_2218_fu_105512_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2218_fu_105512_p0.read()) * sc_bigint<32>(mul_ln1118_2218_fu_105512_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2219_fu_105542_p0() {
    mul_ln1118_2219_fu_105542_p0 = tmp_2370_fu_105528_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2219_fu_105542_p1() {
    mul_ln1118_2219_fu_105542_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2219_fu_105542_p2() {
    mul_ln1118_2219_fu_105542_p2 = (!mul_ln1118_2219_fu_105542_p0.read().is_01() || !mul_ln1118_2219_fu_105542_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2219_fu_105542_p0.read()) * sc_bigint<32>(mul_ln1118_2219_fu_105542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_221_fu_33290_p0() {
    mul_ln1118_221_fu_33290_p0 = tmp_258_fu_33276_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_221_fu_33290_p1() {
    mul_ln1118_221_fu_33290_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_221_fu_33290_p2() {
    mul_ln1118_221_fu_33290_p2 = (!mul_ln1118_221_fu_33290_p0.read().is_01() || !mul_ln1118_221_fu_33290_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_221_fu_33290_p0.read()) * sc_bigint<32>(mul_ln1118_221_fu_33290_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2220_fu_105572_p0() {
    mul_ln1118_2220_fu_105572_p0 = tmp_2371_fu_105558_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2220_fu_105572_p1() {
    mul_ln1118_2220_fu_105572_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2220_fu_105572_p2() {
    mul_ln1118_2220_fu_105572_p2 = (!mul_ln1118_2220_fu_105572_p0.read().is_01() || !mul_ln1118_2220_fu_105572_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2220_fu_105572_p0.read()) * sc_bigint<32>(mul_ln1118_2220_fu_105572_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2221_fu_105602_p0() {
    mul_ln1118_2221_fu_105602_p0 = tmp_2372_fu_105588_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2221_fu_105602_p1() {
    mul_ln1118_2221_fu_105602_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2221_fu_105602_p2() {
    mul_ln1118_2221_fu_105602_p2 = (!mul_ln1118_2221_fu_105602_p0.read().is_01() || !mul_ln1118_2221_fu_105602_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2221_fu_105602_p0.read()) * sc_bigint<32>(mul_ln1118_2221_fu_105602_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2222_fu_105632_p0() {
    mul_ln1118_2222_fu_105632_p0 = tmp_2373_fu_105618_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2222_fu_105632_p1() {
    mul_ln1118_2222_fu_105632_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2222_fu_105632_p2() {
    mul_ln1118_2222_fu_105632_p2 = (!mul_ln1118_2222_fu_105632_p0.read().is_01() || !mul_ln1118_2222_fu_105632_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2222_fu_105632_p0.read()) * sc_bigint<32>(mul_ln1118_2222_fu_105632_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2223_fu_105776_p0() {
    mul_ln1118_2223_fu_105776_p0 = tmp_2374_fu_105762_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2223_fu_105776_p1() {
    mul_ln1118_2223_fu_105776_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2223_fu_105776_p2() {
    mul_ln1118_2223_fu_105776_p2 = (!mul_ln1118_2223_fu_105776_p0.read().is_01() || !mul_ln1118_2223_fu_105776_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2223_fu_105776_p0.read()) * sc_bigint<32>(mul_ln1118_2223_fu_105776_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2224_fu_105806_p0() {
    mul_ln1118_2224_fu_105806_p0 = tmp_2375_fu_105792_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2224_fu_105806_p1() {
    mul_ln1118_2224_fu_105806_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2224_fu_105806_p2() {
    mul_ln1118_2224_fu_105806_p2 = (!mul_ln1118_2224_fu_105806_p0.read().is_01() || !mul_ln1118_2224_fu_105806_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2224_fu_105806_p0.read()) * sc_bigint<32>(mul_ln1118_2224_fu_105806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2225_fu_105836_p0() {
    mul_ln1118_2225_fu_105836_p0 = tmp_2376_fu_105822_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2225_fu_105836_p1() {
    mul_ln1118_2225_fu_105836_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2225_fu_105836_p2() {
    mul_ln1118_2225_fu_105836_p2 = (!mul_ln1118_2225_fu_105836_p0.read().is_01() || !mul_ln1118_2225_fu_105836_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2225_fu_105836_p0.read()) * sc_bigint<32>(mul_ln1118_2225_fu_105836_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2226_fu_105866_p0() {
    mul_ln1118_2226_fu_105866_p0 = tmp_2377_fu_105852_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2226_fu_105866_p1() {
    mul_ln1118_2226_fu_105866_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2226_fu_105866_p2() {
    mul_ln1118_2226_fu_105866_p2 = (!mul_ln1118_2226_fu_105866_p0.read().is_01() || !mul_ln1118_2226_fu_105866_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2226_fu_105866_p0.read()) * sc_bigint<32>(mul_ln1118_2226_fu_105866_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2227_fu_105896_p0() {
    mul_ln1118_2227_fu_105896_p0 = tmp_2378_fu_105882_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2227_fu_105896_p1() {
    mul_ln1118_2227_fu_105896_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2227_fu_105896_p2() {
    mul_ln1118_2227_fu_105896_p2 = (!mul_ln1118_2227_fu_105896_p0.read().is_01() || !mul_ln1118_2227_fu_105896_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2227_fu_105896_p0.read()) * sc_bigint<32>(mul_ln1118_2227_fu_105896_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2228_fu_105926_p0() {
    mul_ln1118_2228_fu_105926_p0 = tmp_2379_fu_105912_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2228_fu_105926_p1() {
    mul_ln1118_2228_fu_105926_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2228_fu_105926_p2() {
    mul_ln1118_2228_fu_105926_p2 = (!mul_ln1118_2228_fu_105926_p0.read().is_01() || !mul_ln1118_2228_fu_105926_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2228_fu_105926_p0.read()) * sc_bigint<32>(mul_ln1118_2228_fu_105926_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2229_fu_105956_p0() {
    mul_ln1118_2229_fu_105956_p0 = tmp_2380_fu_105942_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2229_fu_105956_p1() {
    mul_ln1118_2229_fu_105956_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2229_fu_105956_p2() {
    mul_ln1118_2229_fu_105956_p2 = (!mul_ln1118_2229_fu_105956_p0.read().is_01() || !mul_ln1118_2229_fu_105956_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2229_fu_105956_p0.read()) * sc_bigint<32>(mul_ln1118_2229_fu_105956_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_222_fu_33320_p0() {
    mul_ln1118_222_fu_33320_p0 = tmp_259_fu_33306_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_222_fu_33320_p1() {
    mul_ln1118_222_fu_33320_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_222_fu_33320_p2() {
    mul_ln1118_222_fu_33320_p2 = (!mul_ln1118_222_fu_33320_p0.read().is_01() || !mul_ln1118_222_fu_33320_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_222_fu_33320_p0.read()) * sc_bigint<32>(mul_ln1118_222_fu_33320_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2230_fu_105986_p0() {
    mul_ln1118_2230_fu_105986_p0 = tmp_2381_fu_105972_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2230_fu_105986_p1() {
    mul_ln1118_2230_fu_105986_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2230_fu_105986_p2() {
    mul_ln1118_2230_fu_105986_p2 = (!mul_ln1118_2230_fu_105986_p0.read().is_01() || !mul_ln1118_2230_fu_105986_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2230_fu_105986_p0.read()) * sc_bigint<32>(mul_ln1118_2230_fu_105986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2231_fu_106016_p0() {
    mul_ln1118_2231_fu_106016_p0 = tmp_2382_fu_106002_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2231_fu_106016_p1() {
    mul_ln1118_2231_fu_106016_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2231_fu_106016_p2() {
    mul_ln1118_2231_fu_106016_p2 = (!mul_ln1118_2231_fu_106016_p0.read().is_01() || !mul_ln1118_2231_fu_106016_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2231_fu_106016_p0.read()) * sc_bigint<32>(mul_ln1118_2231_fu_106016_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2232_fu_106046_p0() {
    mul_ln1118_2232_fu_106046_p0 = tmp_2383_fu_106032_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2232_fu_106046_p1() {
    mul_ln1118_2232_fu_106046_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2232_fu_106046_p2() {
    mul_ln1118_2232_fu_106046_p2 = (!mul_ln1118_2232_fu_106046_p0.read().is_01() || !mul_ln1118_2232_fu_106046_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2232_fu_106046_p0.read()) * sc_bigint<32>(mul_ln1118_2232_fu_106046_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2233_fu_106076_p0() {
    mul_ln1118_2233_fu_106076_p0 = tmp_2384_fu_106062_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2233_fu_106076_p1() {
    mul_ln1118_2233_fu_106076_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2233_fu_106076_p2() {
    mul_ln1118_2233_fu_106076_p2 = (!mul_ln1118_2233_fu_106076_p0.read().is_01() || !mul_ln1118_2233_fu_106076_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2233_fu_106076_p0.read()) * sc_bigint<32>(mul_ln1118_2233_fu_106076_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2234_fu_106106_p0() {
    mul_ln1118_2234_fu_106106_p0 = tmp_2385_fu_106092_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2234_fu_106106_p1() {
    mul_ln1118_2234_fu_106106_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2234_fu_106106_p2() {
    mul_ln1118_2234_fu_106106_p2 = (!mul_ln1118_2234_fu_106106_p0.read().is_01() || !mul_ln1118_2234_fu_106106_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2234_fu_106106_p0.read()) * sc_bigint<32>(mul_ln1118_2234_fu_106106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2235_fu_106136_p0() {
    mul_ln1118_2235_fu_106136_p0 = tmp_2386_fu_106122_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2235_fu_106136_p1() {
    mul_ln1118_2235_fu_106136_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2235_fu_106136_p2() {
    mul_ln1118_2235_fu_106136_p2 = (!mul_ln1118_2235_fu_106136_p0.read().is_01() || !mul_ln1118_2235_fu_106136_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2235_fu_106136_p0.read()) * sc_bigint<32>(mul_ln1118_2235_fu_106136_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2236_fu_106166_p0() {
    mul_ln1118_2236_fu_106166_p0 = tmp_2387_fu_106152_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2236_fu_106166_p1() {
    mul_ln1118_2236_fu_106166_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2236_fu_106166_p2() {
    mul_ln1118_2236_fu_106166_p2 = (!mul_ln1118_2236_fu_106166_p0.read().is_01() || !mul_ln1118_2236_fu_106166_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2236_fu_106166_p0.read()) * sc_bigint<32>(mul_ln1118_2236_fu_106166_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2237_fu_106196_p0() {
    mul_ln1118_2237_fu_106196_p0 = tmp_2388_fu_106182_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2237_fu_106196_p1() {
    mul_ln1118_2237_fu_106196_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2237_fu_106196_p2() {
    mul_ln1118_2237_fu_106196_p2 = (!mul_ln1118_2237_fu_106196_p0.read().is_01() || !mul_ln1118_2237_fu_106196_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2237_fu_106196_p0.read()) * sc_bigint<32>(mul_ln1118_2237_fu_106196_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2238_fu_106226_p0() {
    mul_ln1118_2238_fu_106226_p0 = tmp_2389_fu_106212_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2238_fu_106226_p1() {
    mul_ln1118_2238_fu_106226_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2238_fu_106226_p2() {
    mul_ln1118_2238_fu_106226_p2 = (!mul_ln1118_2238_fu_106226_p0.read().is_01() || !mul_ln1118_2238_fu_106226_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2238_fu_106226_p0.read()) * sc_bigint<32>(mul_ln1118_2238_fu_106226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2239_fu_106256_p0() {
    mul_ln1118_2239_fu_106256_p0 = tmp_2390_fu_106242_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2239_fu_106256_p1() {
    mul_ln1118_2239_fu_106256_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2239_fu_106256_p2() {
    mul_ln1118_2239_fu_106256_p2 = (!mul_ln1118_2239_fu_106256_p0.read().is_01() || !mul_ln1118_2239_fu_106256_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2239_fu_106256_p0.read()) * sc_bigint<32>(mul_ln1118_2239_fu_106256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_223_fu_33350_p0() {
    mul_ln1118_223_fu_33350_p0 = tmp_260_fu_33336_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_223_fu_33350_p1() {
    mul_ln1118_223_fu_33350_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_223_fu_33350_p2() {
    mul_ln1118_223_fu_33350_p2 = (!mul_ln1118_223_fu_33350_p0.read().is_01() || !mul_ln1118_223_fu_33350_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_223_fu_33350_p0.read()) * sc_bigint<32>(mul_ln1118_223_fu_33350_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2240_fu_106286_p0() {
    mul_ln1118_2240_fu_106286_p0 = tmp_2391_fu_106272_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2240_fu_106286_p1() {
    mul_ln1118_2240_fu_106286_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2240_fu_106286_p2() {
    mul_ln1118_2240_fu_106286_p2 = (!mul_ln1118_2240_fu_106286_p0.read().is_01() || !mul_ln1118_2240_fu_106286_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2240_fu_106286_p0.read()) * sc_bigint<32>(mul_ln1118_2240_fu_106286_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2241_fu_106316_p0() {
    mul_ln1118_2241_fu_106316_p0 = tmp_2392_fu_106302_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2241_fu_106316_p1() {
    mul_ln1118_2241_fu_106316_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2241_fu_106316_p2() {
    mul_ln1118_2241_fu_106316_p2 = (!mul_ln1118_2241_fu_106316_p0.read().is_01() || !mul_ln1118_2241_fu_106316_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2241_fu_106316_p0.read()) * sc_bigint<32>(mul_ln1118_2241_fu_106316_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2242_fu_106460_p0() {
    mul_ln1118_2242_fu_106460_p0 = tmp_2393_fu_106446_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2242_fu_106460_p1() {
    mul_ln1118_2242_fu_106460_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2242_fu_106460_p2() {
    mul_ln1118_2242_fu_106460_p2 = (!mul_ln1118_2242_fu_106460_p0.read().is_01() || !mul_ln1118_2242_fu_106460_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2242_fu_106460_p0.read()) * sc_bigint<32>(mul_ln1118_2242_fu_106460_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2243_fu_106490_p0() {
    mul_ln1118_2243_fu_106490_p0 = tmp_2394_fu_106476_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2243_fu_106490_p1() {
    mul_ln1118_2243_fu_106490_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2243_fu_106490_p2() {
    mul_ln1118_2243_fu_106490_p2 = (!mul_ln1118_2243_fu_106490_p0.read().is_01() || !mul_ln1118_2243_fu_106490_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2243_fu_106490_p0.read()) * sc_bigint<32>(mul_ln1118_2243_fu_106490_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2244_fu_106520_p0() {
    mul_ln1118_2244_fu_106520_p0 = tmp_2395_fu_106506_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2244_fu_106520_p1() {
    mul_ln1118_2244_fu_106520_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2244_fu_106520_p2() {
    mul_ln1118_2244_fu_106520_p2 = (!mul_ln1118_2244_fu_106520_p0.read().is_01() || !mul_ln1118_2244_fu_106520_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2244_fu_106520_p0.read()) * sc_bigint<32>(mul_ln1118_2244_fu_106520_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2245_fu_106550_p0() {
    mul_ln1118_2245_fu_106550_p0 = tmp_2396_fu_106536_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2245_fu_106550_p1() {
    mul_ln1118_2245_fu_106550_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2245_fu_106550_p2() {
    mul_ln1118_2245_fu_106550_p2 = (!mul_ln1118_2245_fu_106550_p0.read().is_01() || !mul_ln1118_2245_fu_106550_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2245_fu_106550_p0.read()) * sc_bigint<32>(mul_ln1118_2245_fu_106550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2246_fu_106580_p0() {
    mul_ln1118_2246_fu_106580_p0 = tmp_2397_fu_106566_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2246_fu_106580_p1() {
    mul_ln1118_2246_fu_106580_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2246_fu_106580_p2() {
    mul_ln1118_2246_fu_106580_p2 = (!mul_ln1118_2246_fu_106580_p0.read().is_01() || !mul_ln1118_2246_fu_106580_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2246_fu_106580_p0.read()) * sc_bigint<32>(mul_ln1118_2246_fu_106580_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2247_fu_106610_p0() {
    mul_ln1118_2247_fu_106610_p0 = tmp_2398_fu_106596_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2247_fu_106610_p1() {
    mul_ln1118_2247_fu_106610_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2247_fu_106610_p2() {
    mul_ln1118_2247_fu_106610_p2 = (!mul_ln1118_2247_fu_106610_p0.read().is_01() || !mul_ln1118_2247_fu_106610_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2247_fu_106610_p0.read()) * sc_bigint<32>(mul_ln1118_2247_fu_106610_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2248_fu_106640_p0() {
    mul_ln1118_2248_fu_106640_p0 = tmp_2399_fu_106626_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2248_fu_106640_p1() {
    mul_ln1118_2248_fu_106640_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2248_fu_106640_p2() {
    mul_ln1118_2248_fu_106640_p2 = (!mul_ln1118_2248_fu_106640_p0.read().is_01() || !mul_ln1118_2248_fu_106640_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2248_fu_106640_p0.read()) * sc_bigint<32>(mul_ln1118_2248_fu_106640_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2249_fu_106670_p0() {
    mul_ln1118_2249_fu_106670_p0 = tmp_2400_fu_106656_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2249_fu_106670_p1() {
    mul_ln1118_2249_fu_106670_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2249_fu_106670_p2() {
    mul_ln1118_2249_fu_106670_p2 = (!mul_ln1118_2249_fu_106670_p0.read().is_01() || !mul_ln1118_2249_fu_106670_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2249_fu_106670_p0.read()) * sc_bigint<32>(mul_ln1118_2249_fu_106670_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_224_fu_33380_p0() {
    mul_ln1118_224_fu_33380_p0 = tmp_261_fu_33366_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_224_fu_33380_p1() {
    mul_ln1118_224_fu_33380_p1 =  (sc_lv<32>) (sext_ln1116_15_cast_fu_25840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_224_fu_33380_p2() {
    mul_ln1118_224_fu_33380_p2 = (!mul_ln1118_224_fu_33380_p0.read().is_01() || !mul_ln1118_224_fu_33380_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_224_fu_33380_p0.read()) * sc_bigint<32>(mul_ln1118_224_fu_33380_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2250_fu_106700_p0() {
    mul_ln1118_2250_fu_106700_p0 = tmp_2401_fu_106686_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2250_fu_106700_p1() {
    mul_ln1118_2250_fu_106700_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2250_fu_106700_p2() {
    mul_ln1118_2250_fu_106700_p2 = (!mul_ln1118_2250_fu_106700_p0.read().is_01() || !mul_ln1118_2250_fu_106700_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2250_fu_106700_p0.read()) * sc_bigint<32>(mul_ln1118_2250_fu_106700_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2251_fu_106730_p0() {
    mul_ln1118_2251_fu_106730_p0 = tmp_2402_fu_106716_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2251_fu_106730_p1() {
    mul_ln1118_2251_fu_106730_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2251_fu_106730_p2() {
    mul_ln1118_2251_fu_106730_p2 = (!mul_ln1118_2251_fu_106730_p0.read().is_01() || !mul_ln1118_2251_fu_106730_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2251_fu_106730_p0.read()) * sc_bigint<32>(mul_ln1118_2251_fu_106730_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2252_fu_106760_p0() {
    mul_ln1118_2252_fu_106760_p0 = tmp_2403_fu_106746_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2252_fu_106760_p1() {
    mul_ln1118_2252_fu_106760_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2252_fu_106760_p2() {
    mul_ln1118_2252_fu_106760_p2 = (!mul_ln1118_2252_fu_106760_p0.read().is_01() || !mul_ln1118_2252_fu_106760_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2252_fu_106760_p0.read()) * sc_bigint<32>(mul_ln1118_2252_fu_106760_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2253_fu_106790_p0() {
    mul_ln1118_2253_fu_106790_p0 = tmp_2404_fu_106776_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2253_fu_106790_p1() {
    mul_ln1118_2253_fu_106790_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2253_fu_106790_p2() {
    mul_ln1118_2253_fu_106790_p2 = (!mul_ln1118_2253_fu_106790_p0.read().is_01() || !mul_ln1118_2253_fu_106790_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2253_fu_106790_p0.read()) * sc_bigint<32>(mul_ln1118_2253_fu_106790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2254_fu_106820_p0() {
    mul_ln1118_2254_fu_106820_p0 = tmp_2405_fu_106806_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2254_fu_106820_p1() {
    mul_ln1118_2254_fu_106820_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2254_fu_106820_p2() {
    mul_ln1118_2254_fu_106820_p2 = (!mul_ln1118_2254_fu_106820_p0.read().is_01() || !mul_ln1118_2254_fu_106820_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2254_fu_106820_p0.read()) * sc_bigint<32>(mul_ln1118_2254_fu_106820_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2255_fu_106850_p0() {
    mul_ln1118_2255_fu_106850_p0 = tmp_2406_fu_106836_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2255_fu_106850_p1() {
    mul_ln1118_2255_fu_106850_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2255_fu_106850_p2() {
    mul_ln1118_2255_fu_106850_p2 = (!mul_ln1118_2255_fu_106850_p0.read().is_01() || !mul_ln1118_2255_fu_106850_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2255_fu_106850_p0.read()) * sc_bigint<32>(mul_ln1118_2255_fu_106850_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2256_fu_106880_p0() {
    mul_ln1118_2256_fu_106880_p0 = tmp_2407_fu_106866_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2256_fu_106880_p1() {
    mul_ln1118_2256_fu_106880_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2256_fu_106880_p2() {
    mul_ln1118_2256_fu_106880_p2 = (!mul_ln1118_2256_fu_106880_p0.read().is_01() || !mul_ln1118_2256_fu_106880_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2256_fu_106880_p0.read()) * sc_bigint<32>(mul_ln1118_2256_fu_106880_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2257_fu_106910_p0() {
    mul_ln1118_2257_fu_106910_p0 = tmp_2408_fu_106896_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2257_fu_106910_p1() {
    mul_ln1118_2257_fu_106910_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2257_fu_106910_p2() {
    mul_ln1118_2257_fu_106910_p2 = (!mul_ln1118_2257_fu_106910_p0.read().is_01() || !mul_ln1118_2257_fu_106910_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2257_fu_106910_p0.read()) * sc_bigint<32>(mul_ln1118_2257_fu_106910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2258_fu_106940_p0() {
    mul_ln1118_2258_fu_106940_p0 = tmp_2409_fu_106926_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2258_fu_106940_p1() {
    mul_ln1118_2258_fu_106940_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2258_fu_106940_p2() {
    mul_ln1118_2258_fu_106940_p2 = (!mul_ln1118_2258_fu_106940_p0.read().is_01() || !mul_ln1118_2258_fu_106940_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2258_fu_106940_p0.read()) * sc_bigint<32>(mul_ln1118_2258_fu_106940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2259_fu_106970_p0() {
    mul_ln1118_2259_fu_106970_p0 = tmp_2410_fu_106956_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2259_fu_106970_p1() {
    mul_ln1118_2259_fu_106970_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2259_fu_106970_p2() {
    mul_ln1118_2259_fu_106970_p2 = (!mul_ln1118_2259_fu_106970_p0.read().is_01() || !mul_ln1118_2259_fu_106970_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2259_fu_106970_p0.read()) * sc_bigint<32>(mul_ln1118_2259_fu_106970_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_225_fu_33410_p0() {
    mul_ln1118_225_fu_33410_p0 = tmp_262_fu_33396_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_225_fu_33410_p1() {
    mul_ln1118_225_fu_33410_p1 =  (sc_lv<32>) (sext_ln1116_16_cast_fu_25873_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_225_fu_33410_p2() {
    mul_ln1118_225_fu_33410_p2 = (!mul_ln1118_225_fu_33410_p0.read().is_01() || !mul_ln1118_225_fu_33410_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_225_fu_33410_p0.read()) * sc_bigint<32>(mul_ln1118_225_fu_33410_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2260_fu_107000_p0() {
    mul_ln1118_2260_fu_107000_p0 = tmp_2411_fu_106986_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2260_fu_107000_p1() {
    mul_ln1118_2260_fu_107000_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2260_fu_107000_p2() {
    mul_ln1118_2260_fu_107000_p2 = (!mul_ln1118_2260_fu_107000_p0.read().is_01() || !mul_ln1118_2260_fu_107000_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2260_fu_107000_p0.read()) * sc_bigint<32>(mul_ln1118_2260_fu_107000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2261_fu_107144_p0() {
    mul_ln1118_2261_fu_107144_p0 = tmp_2412_fu_107130_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2261_fu_107144_p1() {
    mul_ln1118_2261_fu_107144_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2261_fu_107144_p2() {
    mul_ln1118_2261_fu_107144_p2 = (!mul_ln1118_2261_fu_107144_p0.read().is_01() || !mul_ln1118_2261_fu_107144_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2261_fu_107144_p0.read()) * sc_bigint<32>(mul_ln1118_2261_fu_107144_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2262_fu_107174_p0() {
    mul_ln1118_2262_fu_107174_p0 = tmp_2413_fu_107160_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2262_fu_107174_p1() {
    mul_ln1118_2262_fu_107174_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2262_fu_107174_p2() {
    mul_ln1118_2262_fu_107174_p2 = (!mul_ln1118_2262_fu_107174_p0.read().is_01() || !mul_ln1118_2262_fu_107174_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2262_fu_107174_p0.read()) * sc_bigint<32>(mul_ln1118_2262_fu_107174_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2263_fu_107204_p0() {
    mul_ln1118_2263_fu_107204_p0 = tmp_2414_fu_107190_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2263_fu_107204_p1() {
    mul_ln1118_2263_fu_107204_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2263_fu_107204_p2() {
    mul_ln1118_2263_fu_107204_p2 = (!mul_ln1118_2263_fu_107204_p0.read().is_01() || !mul_ln1118_2263_fu_107204_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2263_fu_107204_p0.read()) * sc_bigint<32>(mul_ln1118_2263_fu_107204_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2264_fu_107234_p0() {
    mul_ln1118_2264_fu_107234_p0 = tmp_2415_fu_107220_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2264_fu_107234_p1() {
    mul_ln1118_2264_fu_107234_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2264_fu_107234_p2() {
    mul_ln1118_2264_fu_107234_p2 = (!mul_ln1118_2264_fu_107234_p0.read().is_01() || !mul_ln1118_2264_fu_107234_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2264_fu_107234_p0.read()) * sc_bigint<32>(mul_ln1118_2264_fu_107234_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2265_fu_107264_p0() {
    mul_ln1118_2265_fu_107264_p0 = tmp_2416_fu_107250_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2265_fu_107264_p1() {
    mul_ln1118_2265_fu_107264_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2265_fu_107264_p2() {
    mul_ln1118_2265_fu_107264_p2 = (!mul_ln1118_2265_fu_107264_p0.read().is_01() || !mul_ln1118_2265_fu_107264_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2265_fu_107264_p0.read()) * sc_bigint<32>(mul_ln1118_2265_fu_107264_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2266_fu_107294_p0() {
    mul_ln1118_2266_fu_107294_p0 = tmp_2417_fu_107280_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2266_fu_107294_p1() {
    mul_ln1118_2266_fu_107294_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2266_fu_107294_p2() {
    mul_ln1118_2266_fu_107294_p2 = (!mul_ln1118_2266_fu_107294_p0.read().is_01() || !mul_ln1118_2266_fu_107294_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2266_fu_107294_p0.read()) * sc_bigint<32>(mul_ln1118_2266_fu_107294_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2267_fu_107324_p0() {
    mul_ln1118_2267_fu_107324_p0 = tmp_2418_fu_107310_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2267_fu_107324_p1() {
    mul_ln1118_2267_fu_107324_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2267_fu_107324_p2() {
    mul_ln1118_2267_fu_107324_p2 = (!mul_ln1118_2267_fu_107324_p0.read().is_01() || !mul_ln1118_2267_fu_107324_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2267_fu_107324_p0.read()) * sc_bigint<32>(mul_ln1118_2267_fu_107324_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2268_fu_107354_p0() {
    mul_ln1118_2268_fu_107354_p0 = tmp_2419_fu_107340_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2268_fu_107354_p1() {
    mul_ln1118_2268_fu_107354_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2268_fu_107354_p2() {
    mul_ln1118_2268_fu_107354_p2 = (!mul_ln1118_2268_fu_107354_p0.read().is_01() || !mul_ln1118_2268_fu_107354_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2268_fu_107354_p0.read()) * sc_bigint<32>(mul_ln1118_2268_fu_107354_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2269_fu_107384_p0() {
    mul_ln1118_2269_fu_107384_p0 = tmp_2420_fu_107370_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2269_fu_107384_p1() {
    mul_ln1118_2269_fu_107384_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2269_fu_107384_p2() {
    mul_ln1118_2269_fu_107384_p2 = (!mul_ln1118_2269_fu_107384_p0.read().is_01() || !mul_ln1118_2269_fu_107384_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2269_fu_107384_p0.read()) * sc_bigint<32>(mul_ln1118_2269_fu_107384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_226_fu_33440_p0() {
    mul_ln1118_226_fu_33440_p0 = tmp_263_fu_33426_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_226_fu_33440_p1() {
    mul_ln1118_226_fu_33440_p1 =  (sc_lv<32>) (sext_ln1116_17_cast_fu_25906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_226_fu_33440_p2() {
    mul_ln1118_226_fu_33440_p2 = (!mul_ln1118_226_fu_33440_p0.read().is_01() || !mul_ln1118_226_fu_33440_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_226_fu_33440_p0.read()) * sc_bigint<32>(mul_ln1118_226_fu_33440_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2270_fu_107414_p0() {
    mul_ln1118_2270_fu_107414_p0 = tmp_2421_fu_107400_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2270_fu_107414_p1() {
    mul_ln1118_2270_fu_107414_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2270_fu_107414_p2() {
    mul_ln1118_2270_fu_107414_p2 = (!mul_ln1118_2270_fu_107414_p0.read().is_01() || !mul_ln1118_2270_fu_107414_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2270_fu_107414_p0.read()) * sc_bigint<32>(mul_ln1118_2270_fu_107414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2271_fu_107444_p0() {
    mul_ln1118_2271_fu_107444_p0 = tmp_2422_fu_107430_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2271_fu_107444_p1() {
    mul_ln1118_2271_fu_107444_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2271_fu_107444_p2() {
    mul_ln1118_2271_fu_107444_p2 = (!mul_ln1118_2271_fu_107444_p0.read().is_01() || !mul_ln1118_2271_fu_107444_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2271_fu_107444_p0.read()) * sc_bigint<32>(mul_ln1118_2271_fu_107444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2272_fu_107474_p0() {
    mul_ln1118_2272_fu_107474_p0 = tmp_2423_fu_107460_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2272_fu_107474_p1() {
    mul_ln1118_2272_fu_107474_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2272_fu_107474_p2() {
    mul_ln1118_2272_fu_107474_p2 = (!mul_ln1118_2272_fu_107474_p0.read().is_01() || !mul_ln1118_2272_fu_107474_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2272_fu_107474_p0.read()) * sc_bigint<32>(mul_ln1118_2272_fu_107474_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2273_fu_107504_p0() {
    mul_ln1118_2273_fu_107504_p0 = tmp_2424_fu_107490_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2273_fu_107504_p1() {
    mul_ln1118_2273_fu_107504_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2273_fu_107504_p2() {
    mul_ln1118_2273_fu_107504_p2 = (!mul_ln1118_2273_fu_107504_p0.read().is_01() || !mul_ln1118_2273_fu_107504_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2273_fu_107504_p0.read()) * sc_bigint<32>(mul_ln1118_2273_fu_107504_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2274_fu_107534_p0() {
    mul_ln1118_2274_fu_107534_p0 = tmp_2425_fu_107520_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2274_fu_107534_p1() {
    mul_ln1118_2274_fu_107534_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2274_fu_107534_p2() {
    mul_ln1118_2274_fu_107534_p2 = (!mul_ln1118_2274_fu_107534_p0.read().is_01() || !mul_ln1118_2274_fu_107534_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2274_fu_107534_p0.read()) * sc_bigint<32>(mul_ln1118_2274_fu_107534_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2275_fu_107564_p0() {
    mul_ln1118_2275_fu_107564_p0 = tmp_2426_fu_107550_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2275_fu_107564_p1() {
    mul_ln1118_2275_fu_107564_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2275_fu_107564_p2() {
    mul_ln1118_2275_fu_107564_p2 = (!mul_ln1118_2275_fu_107564_p0.read().is_01() || !mul_ln1118_2275_fu_107564_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2275_fu_107564_p0.read()) * sc_bigint<32>(mul_ln1118_2275_fu_107564_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2276_fu_107594_p0() {
    mul_ln1118_2276_fu_107594_p0 = tmp_2427_fu_107580_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2276_fu_107594_p1() {
    mul_ln1118_2276_fu_107594_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2276_fu_107594_p2() {
    mul_ln1118_2276_fu_107594_p2 = (!mul_ln1118_2276_fu_107594_p0.read().is_01() || !mul_ln1118_2276_fu_107594_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2276_fu_107594_p0.read()) * sc_bigint<32>(mul_ln1118_2276_fu_107594_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2277_fu_107624_p0() {
    mul_ln1118_2277_fu_107624_p0 = tmp_2428_fu_107610_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2277_fu_107624_p1() {
    mul_ln1118_2277_fu_107624_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2277_fu_107624_p2() {
    mul_ln1118_2277_fu_107624_p2 = (!mul_ln1118_2277_fu_107624_p0.read().is_01() || !mul_ln1118_2277_fu_107624_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2277_fu_107624_p0.read()) * sc_bigint<32>(mul_ln1118_2277_fu_107624_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2278_fu_107654_p0() {
    mul_ln1118_2278_fu_107654_p0 = tmp_2429_fu_107640_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2278_fu_107654_p1() {
    mul_ln1118_2278_fu_107654_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2278_fu_107654_p2() {
    mul_ln1118_2278_fu_107654_p2 = (!mul_ln1118_2278_fu_107654_p0.read().is_01() || !mul_ln1118_2278_fu_107654_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2278_fu_107654_p0.read()) * sc_bigint<32>(mul_ln1118_2278_fu_107654_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2279_fu_107684_p0() {
    mul_ln1118_2279_fu_107684_p0 = tmp_2430_fu_107670_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2279_fu_107684_p1() {
    mul_ln1118_2279_fu_107684_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2279_fu_107684_p2() {
    mul_ln1118_2279_fu_107684_p2 = (!mul_ln1118_2279_fu_107684_p0.read().is_01() || !mul_ln1118_2279_fu_107684_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2279_fu_107684_p0.read()) * sc_bigint<32>(mul_ln1118_2279_fu_107684_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_227_fu_33470_p0() {
    mul_ln1118_227_fu_33470_p0 = tmp_264_fu_33456_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_227_fu_33470_p1() {
    mul_ln1118_227_fu_33470_p1 =  (sc_lv<32>) (sext_ln1116_18_cast_fu_25939_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_227_fu_33470_p2() {
    mul_ln1118_227_fu_33470_p2 = (!mul_ln1118_227_fu_33470_p0.read().is_01() || !mul_ln1118_227_fu_33470_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_227_fu_33470_p0.read()) * sc_bigint<32>(mul_ln1118_227_fu_33470_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2280_fu_107828_p0() {
    mul_ln1118_2280_fu_107828_p0 = tmp_2431_fu_107814_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2280_fu_107828_p1() {
    mul_ln1118_2280_fu_107828_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2280_fu_107828_p2() {
    mul_ln1118_2280_fu_107828_p2 = (!mul_ln1118_2280_fu_107828_p0.read().is_01() || !mul_ln1118_2280_fu_107828_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2280_fu_107828_p0.read()) * sc_bigint<32>(mul_ln1118_2280_fu_107828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2281_fu_107858_p0() {
    mul_ln1118_2281_fu_107858_p0 = tmp_2432_fu_107844_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2281_fu_107858_p1() {
    mul_ln1118_2281_fu_107858_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2281_fu_107858_p2() {
    mul_ln1118_2281_fu_107858_p2 = (!mul_ln1118_2281_fu_107858_p0.read().is_01() || !mul_ln1118_2281_fu_107858_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2281_fu_107858_p0.read()) * sc_bigint<32>(mul_ln1118_2281_fu_107858_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2282_fu_107888_p0() {
    mul_ln1118_2282_fu_107888_p0 = tmp_2433_fu_107874_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2282_fu_107888_p1() {
    mul_ln1118_2282_fu_107888_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2282_fu_107888_p2() {
    mul_ln1118_2282_fu_107888_p2 = (!mul_ln1118_2282_fu_107888_p0.read().is_01() || !mul_ln1118_2282_fu_107888_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2282_fu_107888_p0.read()) * sc_bigint<32>(mul_ln1118_2282_fu_107888_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2283_fu_107918_p0() {
    mul_ln1118_2283_fu_107918_p0 = tmp_2434_fu_107904_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2283_fu_107918_p1() {
    mul_ln1118_2283_fu_107918_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2283_fu_107918_p2() {
    mul_ln1118_2283_fu_107918_p2 = (!mul_ln1118_2283_fu_107918_p0.read().is_01() || !mul_ln1118_2283_fu_107918_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2283_fu_107918_p0.read()) * sc_bigint<32>(mul_ln1118_2283_fu_107918_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2284_fu_107948_p0() {
    mul_ln1118_2284_fu_107948_p0 = tmp_2435_fu_107934_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2284_fu_107948_p1() {
    mul_ln1118_2284_fu_107948_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2284_fu_107948_p2() {
    mul_ln1118_2284_fu_107948_p2 = (!mul_ln1118_2284_fu_107948_p0.read().is_01() || !mul_ln1118_2284_fu_107948_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2284_fu_107948_p0.read()) * sc_bigint<32>(mul_ln1118_2284_fu_107948_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2285_fu_107978_p0() {
    mul_ln1118_2285_fu_107978_p0 = tmp_2436_fu_107964_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2285_fu_107978_p1() {
    mul_ln1118_2285_fu_107978_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2285_fu_107978_p2() {
    mul_ln1118_2285_fu_107978_p2 = (!mul_ln1118_2285_fu_107978_p0.read().is_01() || !mul_ln1118_2285_fu_107978_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2285_fu_107978_p0.read()) * sc_bigint<32>(mul_ln1118_2285_fu_107978_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2286_fu_108008_p0() {
    mul_ln1118_2286_fu_108008_p0 = tmp_2437_fu_107994_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2286_fu_108008_p1() {
    mul_ln1118_2286_fu_108008_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2286_fu_108008_p2() {
    mul_ln1118_2286_fu_108008_p2 = (!mul_ln1118_2286_fu_108008_p0.read().is_01() || !mul_ln1118_2286_fu_108008_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2286_fu_108008_p0.read()) * sc_bigint<32>(mul_ln1118_2286_fu_108008_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2287_fu_108038_p0() {
    mul_ln1118_2287_fu_108038_p0 = tmp_2438_fu_108024_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2287_fu_108038_p1() {
    mul_ln1118_2287_fu_108038_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2287_fu_108038_p2() {
    mul_ln1118_2287_fu_108038_p2 = (!mul_ln1118_2287_fu_108038_p0.read().is_01() || !mul_ln1118_2287_fu_108038_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2287_fu_108038_p0.read()) * sc_bigint<32>(mul_ln1118_2287_fu_108038_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2288_fu_108068_p0() {
    mul_ln1118_2288_fu_108068_p0 = tmp_2439_fu_108054_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2288_fu_108068_p1() {
    mul_ln1118_2288_fu_108068_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2288_fu_108068_p2() {
    mul_ln1118_2288_fu_108068_p2 = (!mul_ln1118_2288_fu_108068_p0.read().is_01() || !mul_ln1118_2288_fu_108068_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2288_fu_108068_p0.read()) * sc_bigint<32>(mul_ln1118_2288_fu_108068_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2289_fu_108098_p0() {
    mul_ln1118_2289_fu_108098_p0 = tmp_2440_fu_108084_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2289_fu_108098_p1() {
    mul_ln1118_2289_fu_108098_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2289_fu_108098_p2() {
    mul_ln1118_2289_fu_108098_p2 = (!mul_ln1118_2289_fu_108098_p0.read().is_01() || !mul_ln1118_2289_fu_108098_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2289_fu_108098_p0.read()) * sc_bigint<32>(mul_ln1118_2289_fu_108098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_228_fu_33614_p0() {
    mul_ln1118_228_fu_33614_p0 = tmp_265_fu_33600_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_228_fu_33614_p1() {
    mul_ln1118_228_fu_33614_p1 =  (sc_lv<32>) (sext_ln1116_cast_fu_25345_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_228_fu_33614_p2() {
    mul_ln1118_228_fu_33614_p2 = (!mul_ln1118_228_fu_33614_p0.read().is_01() || !mul_ln1118_228_fu_33614_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_228_fu_33614_p0.read()) * sc_bigint<32>(mul_ln1118_228_fu_33614_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2290_fu_108128_p0() {
    mul_ln1118_2290_fu_108128_p0 = tmp_2441_fu_108114_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2290_fu_108128_p1() {
    mul_ln1118_2290_fu_108128_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2290_fu_108128_p2() {
    mul_ln1118_2290_fu_108128_p2 = (!mul_ln1118_2290_fu_108128_p0.read().is_01() || !mul_ln1118_2290_fu_108128_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2290_fu_108128_p0.read()) * sc_bigint<32>(mul_ln1118_2290_fu_108128_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2291_fu_108158_p0() {
    mul_ln1118_2291_fu_108158_p0 = tmp_2442_fu_108144_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2291_fu_108158_p1() {
    mul_ln1118_2291_fu_108158_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2291_fu_108158_p2() {
    mul_ln1118_2291_fu_108158_p2 = (!mul_ln1118_2291_fu_108158_p0.read().is_01() || !mul_ln1118_2291_fu_108158_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2291_fu_108158_p0.read()) * sc_bigint<32>(mul_ln1118_2291_fu_108158_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2292_fu_108188_p0() {
    mul_ln1118_2292_fu_108188_p0 = tmp_2443_fu_108174_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2292_fu_108188_p1() {
    mul_ln1118_2292_fu_108188_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2292_fu_108188_p2() {
    mul_ln1118_2292_fu_108188_p2 = (!mul_ln1118_2292_fu_108188_p0.read().is_01() || !mul_ln1118_2292_fu_108188_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2292_fu_108188_p0.read()) * sc_bigint<32>(mul_ln1118_2292_fu_108188_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2293_fu_108218_p0() {
    mul_ln1118_2293_fu_108218_p0 = tmp_2444_fu_108204_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2293_fu_108218_p1() {
    mul_ln1118_2293_fu_108218_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2293_fu_108218_p2() {
    mul_ln1118_2293_fu_108218_p2 = (!mul_ln1118_2293_fu_108218_p0.read().is_01() || !mul_ln1118_2293_fu_108218_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2293_fu_108218_p0.read()) * sc_bigint<32>(mul_ln1118_2293_fu_108218_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2294_fu_108248_p0() {
    mul_ln1118_2294_fu_108248_p0 = tmp_2445_fu_108234_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2294_fu_108248_p1() {
    mul_ln1118_2294_fu_108248_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2294_fu_108248_p2() {
    mul_ln1118_2294_fu_108248_p2 = (!mul_ln1118_2294_fu_108248_p0.read().is_01() || !mul_ln1118_2294_fu_108248_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2294_fu_108248_p0.read()) * sc_bigint<32>(mul_ln1118_2294_fu_108248_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2295_fu_108278_p0() {
    mul_ln1118_2295_fu_108278_p0 = tmp_2446_fu_108264_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2295_fu_108278_p1() {
    mul_ln1118_2295_fu_108278_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2295_fu_108278_p2() {
    mul_ln1118_2295_fu_108278_p2 = (!mul_ln1118_2295_fu_108278_p0.read().is_01() || !mul_ln1118_2295_fu_108278_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2295_fu_108278_p0.read()) * sc_bigint<32>(mul_ln1118_2295_fu_108278_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2296_fu_108308_p0() {
    mul_ln1118_2296_fu_108308_p0 = tmp_2447_fu_108294_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2296_fu_108308_p1() {
    mul_ln1118_2296_fu_108308_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2296_fu_108308_p2() {
    mul_ln1118_2296_fu_108308_p2 = (!mul_ln1118_2296_fu_108308_p0.read().is_01() || !mul_ln1118_2296_fu_108308_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2296_fu_108308_p0.read()) * sc_bigint<32>(mul_ln1118_2296_fu_108308_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2297_fu_108338_p0() {
    mul_ln1118_2297_fu_108338_p0 = tmp_2448_fu_108324_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2297_fu_108338_p1() {
    mul_ln1118_2297_fu_108338_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2297_fu_108338_p2() {
    mul_ln1118_2297_fu_108338_p2 = (!mul_ln1118_2297_fu_108338_p0.read().is_01() || !mul_ln1118_2297_fu_108338_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2297_fu_108338_p0.read()) * sc_bigint<32>(mul_ln1118_2297_fu_108338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2298_fu_108368_p0() {
    mul_ln1118_2298_fu_108368_p0 = tmp_2449_fu_108354_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2298_fu_108368_p1() {
    mul_ln1118_2298_fu_108368_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2298_fu_108368_p2() {
    mul_ln1118_2298_fu_108368_p2 = (!mul_ln1118_2298_fu_108368_p0.read().is_01() || !mul_ln1118_2298_fu_108368_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2298_fu_108368_p0.read()) * sc_bigint<32>(mul_ln1118_2298_fu_108368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2299_fu_108512_p0() {
    mul_ln1118_2299_fu_108512_p0 = tmp_2450_fu_108498_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2299_fu_108512_p1() {
    mul_ln1118_2299_fu_108512_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2299_fu_108512_p2() {
    mul_ln1118_2299_fu_108512_p2 = (!mul_ln1118_2299_fu_108512_p0.read().is_01() || !mul_ln1118_2299_fu_108512_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2299_fu_108512_p0.read()) * sc_bigint<32>(mul_ln1118_2299_fu_108512_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_229_fu_33644_p0() {
    mul_ln1118_229_fu_33644_p0 = tmp_266_fu_33630_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_229_fu_33644_p1() {
    mul_ln1118_229_fu_33644_p1 =  (sc_lv<32>) (sext_ln1116_1_cast_fu_25378_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_229_fu_33644_p2() {
    mul_ln1118_229_fu_33644_p2 = (!mul_ln1118_229_fu_33644_p0.read().is_01() || !mul_ln1118_229_fu_33644_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_229_fu_33644_p0.read()) * sc_bigint<32>(mul_ln1118_229_fu_33644_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_22_fu_26180_p0() {
    mul_ln1118_22_fu_26180_p0 = tmp_41_fu_26166_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_22_fu_26180_p1() {
    mul_ln1118_22_fu_26180_p1 =  (sc_lv<32>) (sext_ln1116_3_cast_fu_25444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_22_fu_26180_p2() {
    mul_ln1118_22_fu_26180_p2 = (!mul_ln1118_22_fu_26180_p0.read().is_01() || !mul_ln1118_22_fu_26180_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_22_fu_26180_p0.read()) * sc_bigint<32>(mul_ln1118_22_fu_26180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2300_fu_108542_p0() {
    mul_ln1118_2300_fu_108542_p0 = tmp_2451_fu_108528_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2300_fu_108542_p1() {
    mul_ln1118_2300_fu_108542_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2300_fu_108542_p2() {
    mul_ln1118_2300_fu_108542_p2 = (!mul_ln1118_2300_fu_108542_p0.read().is_01() || !mul_ln1118_2300_fu_108542_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2300_fu_108542_p0.read()) * sc_bigint<32>(mul_ln1118_2300_fu_108542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2301_fu_108572_p0() {
    mul_ln1118_2301_fu_108572_p0 = tmp_2452_fu_108558_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2301_fu_108572_p1() {
    mul_ln1118_2301_fu_108572_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2301_fu_108572_p2() {
    mul_ln1118_2301_fu_108572_p2 = (!mul_ln1118_2301_fu_108572_p0.read().is_01() || !mul_ln1118_2301_fu_108572_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2301_fu_108572_p0.read()) * sc_bigint<32>(mul_ln1118_2301_fu_108572_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2302_fu_108602_p0() {
    mul_ln1118_2302_fu_108602_p0 = tmp_2453_fu_108588_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2302_fu_108602_p1() {
    mul_ln1118_2302_fu_108602_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2302_fu_108602_p2() {
    mul_ln1118_2302_fu_108602_p2 = (!mul_ln1118_2302_fu_108602_p0.read().is_01() || !mul_ln1118_2302_fu_108602_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2302_fu_108602_p0.read()) * sc_bigint<32>(mul_ln1118_2302_fu_108602_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2303_fu_108632_p0() {
    mul_ln1118_2303_fu_108632_p0 = tmp_2454_fu_108618_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2303_fu_108632_p1() {
    mul_ln1118_2303_fu_108632_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2303_fu_108632_p2() {
    mul_ln1118_2303_fu_108632_p2 = (!mul_ln1118_2303_fu_108632_p0.read().is_01() || !mul_ln1118_2303_fu_108632_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2303_fu_108632_p0.read()) * sc_bigint<32>(mul_ln1118_2303_fu_108632_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2304_fu_108662_p0() {
    mul_ln1118_2304_fu_108662_p0 = tmp_2455_fu_108648_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2304_fu_108662_p1() {
    mul_ln1118_2304_fu_108662_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2304_fu_108662_p2() {
    mul_ln1118_2304_fu_108662_p2 = (!mul_ln1118_2304_fu_108662_p0.read().is_01() || !mul_ln1118_2304_fu_108662_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2304_fu_108662_p0.read()) * sc_bigint<32>(mul_ln1118_2304_fu_108662_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2305_fu_108692_p0() {
    mul_ln1118_2305_fu_108692_p0 = tmp_2456_fu_108678_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2305_fu_108692_p1() {
    mul_ln1118_2305_fu_108692_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2305_fu_108692_p2() {
    mul_ln1118_2305_fu_108692_p2 = (!mul_ln1118_2305_fu_108692_p0.read().is_01() || !mul_ln1118_2305_fu_108692_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2305_fu_108692_p0.read()) * sc_bigint<32>(mul_ln1118_2305_fu_108692_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2306_fu_108722_p0() {
    mul_ln1118_2306_fu_108722_p0 = tmp_2457_fu_108708_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2306_fu_108722_p1() {
    mul_ln1118_2306_fu_108722_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2306_fu_108722_p2() {
    mul_ln1118_2306_fu_108722_p2 = (!mul_ln1118_2306_fu_108722_p0.read().is_01() || !mul_ln1118_2306_fu_108722_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2306_fu_108722_p0.read()) * sc_bigint<32>(mul_ln1118_2306_fu_108722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2307_fu_108752_p0() {
    mul_ln1118_2307_fu_108752_p0 = tmp_2458_fu_108738_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2307_fu_108752_p1() {
    mul_ln1118_2307_fu_108752_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2307_fu_108752_p2() {
    mul_ln1118_2307_fu_108752_p2 = (!mul_ln1118_2307_fu_108752_p0.read().is_01() || !mul_ln1118_2307_fu_108752_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2307_fu_108752_p0.read()) * sc_bigint<32>(mul_ln1118_2307_fu_108752_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2308_fu_108782_p0() {
    mul_ln1118_2308_fu_108782_p0 = tmp_2459_fu_108768_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2308_fu_108782_p1() {
    mul_ln1118_2308_fu_108782_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2308_fu_108782_p2() {
    mul_ln1118_2308_fu_108782_p2 = (!mul_ln1118_2308_fu_108782_p0.read().is_01() || !mul_ln1118_2308_fu_108782_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2308_fu_108782_p0.read()) * sc_bigint<32>(mul_ln1118_2308_fu_108782_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2309_fu_108812_p0() {
    mul_ln1118_2309_fu_108812_p0 = tmp_2460_fu_108798_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2309_fu_108812_p1() {
    mul_ln1118_2309_fu_108812_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2309_fu_108812_p2() {
    mul_ln1118_2309_fu_108812_p2 = (!mul_ln1118_2309_fu_108812_p0.read().is_01() || !mul_ln1118_2309_fu_108812_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2309_fu_108812_p0.read()) * sc_bigint<32>(mul_ln1118_2309_fu_108812_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_230_fu_33674_p0() {
    mul_ln1118_230_fu_33674_p0 = tmp_267_fu_33660_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_230_fu_33674_p1() {
    mul_ln1118_230_fu_33674_p1 =  (sc_lv<32>) (sext_ln1116_2_cast_fu_25411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_230_fu_33674_p2() {
    mul_ln1118_230_fu_33674_p2 = (!mul_ln1118_230_fu_33674_p0.read().is_01() || !mul_ln1118_230_fu_33674_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_230_fu_33674_p0.read()) * sc_bigint<32>(mul_ln1118_230_fu_33674_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2310_fu_108842_p0() {
    mul_ln1118_2310_fu_108842_p0 = tmp_2461_fu_108828_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2310_fu_108842_p1() {
    mul_ln1118_2310_fu_108842_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2310_fu_108842_p2() {
    mul_ln1118_2310_fu_108842_p2 = (!mul_ln1118_2310_fu_108842_p0.read().is_01() || !mul_ln1118_2310_fu_108842_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2310_fu_108842_p0.read()) * sc_bigint<32>(mul_ln1118_2310_fu_108842_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2311_fu_108872_p0() {
    mul_ln1118_2311_fu_108872_p0 = tmp_2462_fu_108858_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2311_fu_108872_p1() {
    mul_ln1118_2311_fu_108872_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2311_fu_108872_p2() {
    mul_ln1118_2311_fu_108872_p2 = (!mul_ln1118_2311_fu_108872_p0.read().is_01() || !mul_ln1118_2311_fu_108872_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2311_fu_108872_p0.read()) * sc_bigint<32>(mul_ln1118_2311_fu_108872_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2312_fu_108902_p0() {
    mul_ln1118_2312_fu_108902_p0 = tmp_2463_fu_108888_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2312_fu_108902_p1() {
    mul_ln1118_2312_fu_108902_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2312_fu_108902_p2() {
    mul_ln1118_2312_fu_108902_p2 = (!mul_ln1118_2312_fu_108902_p0.read().is_01() || !mul_ln1118_2312_fu_108902_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2312_fu_108902_p0.read()) * sc_bigint<32>(mul_ln1118_2312_fu_108902_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2313_fu_108932_p0() {
    mul_ln1118_2313_fu_108932_p0 = tmp_2464_fu_108918_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2313_fu_108932_p1() {
    mul_ln1118_2313_fu_108932_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2313_fu_108932_p2() {
    mul_ln1118_2313_fu_108932_p2 = (!mul_ln1118_2313_fu_108932_p0.read().is_01() || !mul_ln1118_2313_fu_108932_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2313_fu_108932_p0.read()) * sc_bigint<32>(mul_ln1118_2313_fu_108932_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2314_fu_108962_p0() {
    mul_ln1118_2314_fu_108962_p0 = tmp_2465_fu_108948_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2314_fu_108962_p1() {
    mul_ln1118_2314_fu_108962_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2314_fu_108962_p2() {
    mul_ln1118_2314_fu_108962_p2 = (!mul_ln1118_2314_fu_108962_p0.read().is_01() || !mul_ln1118_2314_fu_108962_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2314_fu_108962_p0.read()) * sc_bigint<32>(mul_ln1118_2314_fu_108962_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2315_fu_108992_p0() {
    mul_ln1118_2315_fu_108992_p0 = tmp_2466_fu_108978_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2315_fu_108992_p1() {
    mul_ln1118_2315_fu_108992_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2315_fu_108992_p2() {
    mul_ln1118_2315_fu_108992_p2 = (!mul_ln1118_2315_fu_108992_p0.read().is_01() || !mul_ln1118_2315_fu_108992_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2315_fu_108992_p0.read()) * sc_bigint<32>(mul_ln1118_2315_fu_108992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2316_fu_109022_p0() {
    mul_ln1118_2316_fu_109022_p0 = tmp_2467_fu_109008_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2316_fu_109022_p1() {
    mul_ln1118_2316_fu_109022_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2316_fu_109022_p2() {
    mul_ln1118_2316_fu_109022_p2 = (!mul_ln1118_2316_fu_109022_p0.read().is_01() || !mul_ln1118_2316_fu_109022_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2316_fu_109022_p0.read()) * sc_bigint<32>(mul_ln1118_2316_fu_109022_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2317_fu_109052_p0() {
    mul_ln1118_2317_fu_109052_p0 = tmp_2468_fu_109038_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2317_fu_109052_p1() {
    mul_ln1118_2317_fu_109052_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2317_fu_109052_p2() {
    mul_ln1118_2317_fu_109052_p2 = (!mul_ln1118_2317_fu_109052_p0.read().is_01() || !mul_ln1118_2317_fu_109052_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2317_fu_109052_p0.read()) * sc_bigint<32>(mul_ln1118_2317_fu_109052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2318_fu_109196_p0() {
    mul_ln1118_2318_fu_109196_p0 = tmp_2469_fu_109182_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2318_fu_109196_p1() {
    mul_ln1118_2318_fu_109196_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2318_fu_109196_p2() {
    mul_ln1118_2318_fu_109196_p2 = (!mul_ln1118_2318_fu_109196_p0.read().is_01() || !mul_ln1118_2318_fu_109196_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2318_fu_109196_p0.read()) * sc_bigint<32>(mul_ln1118_2318_fu_109196_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2319_fu_109226_p0() {
    mul_ln1118_2319_fu_109226_p0 = tmp_2470_fu_109212_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2319_fu_109226_p1() {
    mul_ln1118_2319_fu_109226_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2319_fu_109226_p2() {
    mul_ln1118_2319_fu_109226_p2 = (!mul_ln1118_2319_fu_109226_p0.read().is_01() || !mul_ln1118_2319_fu_109226_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2319_fu_109226_p0.read()) * sc_bigint<32>(mul_ln1118_2319_fu_109226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_231_fu_33704_p0() {
    mul_ln1118_231_fu_33704_p0 = tmp_268_fu_33690_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_231_fu_33704_p1() {
    mul_ln1118_231_fu_33704_p1 =  (sc_lv<32>) (sext_ln1116_3_cast_fu_25444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_231_fu_33704_p2() {
    mul_ln1118_231_fu_33704_p2 = (!mul_ln1118_231_fu_33704_p0.read().is_01() || !mul_ln1118_231_fu_33704_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_231_fu_33704_p0.read()) * sc_bigint<32>(mul_ln1118_231_fu_33704_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2320_fu_109256_p0() {
    mul_ln1118_2320_fu_109256_p0 = tmp_2471_fu_109242_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2320_fu_109256_p1() {
    mul_ln1118_2320_fu_109256_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2320_fu_109256_p2() {
    mul_ln1118_2320_fu_109256_p2 = (!mul_ln1118_2320_fu_109256_p0.read().is_01() || !mul_ln1118_2320_fu_109256_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2320_fu_109256_p0.read()) * sc_bigint<32>(mul_ln1118_2320_fu_109256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2321_fu_109286_p0() {
    mul_ln1118_2321_fu_109286_p0 = tmp_2472_fu_109272_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2321_fu_109286_p1() {
    mul_ln1118_2321_fu_109286_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2321_fu_109286_p2() {
    mul_ln1118_2321_fu_109286_p2 = (!mul_ln1118_2321_fu_109286_p0.read().is_01() || !mul_ln1118_2321_fu_109286_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2321_fu_109286_p0.read()) * sc_bigint<32>(mul_ln1118_2321_fu_109286_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2322_fu_109316_p0() {
    mul_ln1118_2322_fu_109316_p0 = tmp_2473_fu_109302_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2322_fu_109316_p1() {
    mul_ln1118_2322_fu_109316_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2322_fu_109316_p2() {
    mul_ln1118_2322_fu_109316_p2 = (!mul_ln1118_2322_fu_109316_p0.read().is_01() || !mul_ln1118_2322_fu_109316_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2322_fu_109316_p0.read()) * sc_bigint<32>(mul_ln1118_2322_fu_109316_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2323_fu_109346_p0() {
    mul_ln1118_2323_fu_109346_p0 = tmp_2474_fu_109332_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2323_fu_109346_p1() {
    mul_ln1118_2323_fu_109346_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2323_fu_109346_p2() {
    mul_ln1118_2323_fu_109346_p2 = (!mul_ln1118_2323_fu_109346_p0.read().is_01() || !mul_ln1118_2323_fu_109346_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2323_fu_109346_p0.read()) * sc_bigint<32>(mul_ln1118_2323_fu_109346_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2324_fu_109376_p0() {
    mul_ln1118_2324_fu_109376_p0 = tmp_2475_fu_109362_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2324_fu_109376_p1() {
    mul_ln1118_2324_fu_109376_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2324_fu_109376_p2() {
    mul_ln1118_2324_fu_109376_p2 = (!mul_ln1118_2324_fu_109376_p0.read().is_01() || !mul_ln1118_2324_fu_109376_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2324_fu_109376_p0.read()) * sc_bigint<32>(mul_ln1118_2324_fu_109376_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2325_fu_109406_p0() {
    mul_ln1118_2325_fu_109406_p0 = tmp_2476_fu_109392_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2325_fu_109406_p1() {
    mul_ln1118_2325_fu_109406_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2325_fu_109406_p2() {
    mul_ln1118_2325_fu_109406_p2 = (!mul_ln1118_2325_fu_109406_p0.read().is_01() || !mul_ln1118_2325_fu_109406_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2325_fu_109406_p0.read()) * sc_bigint<32>(mul_ln1118_2325_fu_109406_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2326_fu_109436_p0() {
    mul_ln1118_2326_fu_109436_p0 = tmp_2477_fu_109422_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2326_fu_109436_p1() {
    mul_ln1118_2326_fu_109436_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2326_fu_109436_p2() {
    mul_ln1118_2326_fu_109436_p2 = (!mul_ln1118_2326_fu_109436_p0.read().is_01() || !mul_ln1118_2326_fu_109436_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2326_fu_109436_p0.read()) * sc_bigint<32>(mul_ln1118_2326_fu_109436_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2327_fu_109466_p0() {
    mul_ln1118_2327_fu_109466_p0 = tmp_2478_fu_109452_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2327_fu_109466_p1() {
    mul_ln1118_2327_fu_109466_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2327_fu_109466_p2() {
    mul_ln1118_2327_fu_109466_p2 = (!mul_ln1118_2327_fu_109466_p0.read().is_01() || !mul_ln1118_2327_fu_109466_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2327_fu_109466_p0.read()) * sc_bigint<32>(mul_ln1118_2327_fu_109466_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2328_fu_109496_p0() {
    mul_ln1118_2328_fu_109496_p0 = tmp_2479_fu_109482_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2328_fu_109496_p1() {
    mul_ln1118_2328_fu_109496_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2328_fu_109496_p2() {
    mul_ln1118_2328_fu_109496_p2 = (!mul_ln1118_2328_fu_109496_p0.read().is_01() || !mul_ln1118_2328_fu_109496_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2328_fu_109496_p0.read()) * sc_bigint<32>(mul_ln1118_2328_fu_109496_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2329_fu_109526_p0() {
    mul_ln1118_2329_fu_109526_p0 = tmp_2480_fu_109512_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2329_fu_109526_p1() {
    mul_ln1118_2329_fu_109526_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2329_fu_109526_p2() {
    mul_ln1118_2329_fu_109526_p2 = (!mul_ln1118_2329_fu_109526_p0.read().is_01() || !mul_ln1118_2329_fu_109526_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2329_fu_109526_p0.read()) * sc_bigint<32>(mul_ln1118_2329_fu_109526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_232_fu_33734_p0() {
    mul_ln1118_232_fu_33734_p0 = tmp_269_fu_33720_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_232_fu_33734_p1() {
    mul_ln1118_232_fu_33734_p1 =  (sc_lv<32>) (sext_ln1116_4_cast_fu_25477_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_232_fu_33734_p2() {
    mul_ln1118_232_fu_33734_p2 = (!mul_ln1118_232_fu_33734_p0.read().is_01() || !mul_ln1118_232_fu_33734_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_232_fu_33734_p0.read()) * sc_bigint<32>(mul_ln1118_232_fu_33734_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2330_fu_109556_p0() {
    mul_ln1118_2330_fu_109556_p0 = tmp_2481_fu_109542_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2330_fu_109556_p1() {
    mul_ln1118_2330_fu_109556_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2330_fu_109556_p2() {
    mul_ln1118_2330_fu_109556_p2 = (!mul_ln1118_2330_fu_109556_p0.read().is_01() || !mul_ln1118_2330_fu_109556_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2330_fu_109556_p0.read()) * sc_bigint<32>(mul_ln1118_2330_fu_109556_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2331_fu_109586_p0() {
    mul_ln1118_2331_fu_109586_p0 = tmp_2482_fu_109572_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2331_fu_109586_p1() {
    mul_ln1118_2331_fu_109586_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2331_fu_109586_p2() {
    mul_ln1118_2331_fu_109586_p2 = (!mul_ln1118_2331_fu_109586_p0.read().is_01() || !mul_ln1118_2331_fu_109586_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2331_fu_109586_p0.read()) * sc_bigint<32>(mul_ln1118_2331_fu_109586_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2332_fu_109616_p0() {
    mul_ln1118_2332_fu_109616_p0 = tmp_2483_fu_109602_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2332_fu_109616_p1() {
    mul_ln1118_2332_fu_109616_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2332_fu_109616_p2() {
    mul_ln1118_2332_fu_109616_p2 = (!mul_ln1118_2332_fu_109616_p0.read().is_01() || !mul_ln1118_2332_fu_109616_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2332_fu_109616_p0.read()) * sc_bigint<32>(mul_ln1118_2332_fu_109616_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2333_fu_109646_p0() {
    mul_ln1118_2333_fu_109646_p0 = tmp_2484_fu_109632_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2333_fu_109646_p1() {
    mul_ln1118_2333_fu_109646_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2333_fu_109646_p2() {
    mul_ln1118_2333_fu_109646_p2 = (!mul_ln1118_2333_fu_109646_p0.read().is_01() || !mul_ln1118_2333_fu_109646_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2333_fu_109646_p0.read()) * sc_bigint<32>(mul_ln1118_2333_fu_109646_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2334_fu_109676_p0() {
    mul_ln1118_2334_fu_109676_p0 = tmp_2485_fu_109662_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2334_fu_109676_p1() {
    mul_ln1118_2334_fu_109676_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2334_fu_109676_p2() {
    mul_ln1118_2334_fu_109676_p2 = (!mul_ln1118_2334_fu_109676_p0.read().is_01() || !mul_ln1118_2334_fu_109676_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2334_fu_109676_p0.read()) * sc_bigint<32>(mul_ln1118_2334_fu_109676_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2335_fu_109706_p0() {
    mul_ln1118_2335_fu_109706_p0 = tmp_2486_fu_109692_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2335_fu_109706_p1() {
    mul_ln1118_2335_fu_109706_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2335_fu_109706_p2() {
    mul_ln1118_2335_fu_109706_p2 = (!mul_ln1118_2335_fu_109706_p0.read().is_01() || !mul_ln1118_2335_fu_109706_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2335_fu_109706_p0.read()) * sc_bigint<32>(mul_ln1118_2335_fu_109706_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2336_fu_109736_p0() {
    mul_ln1118_2336_fu_109736_p0 = tmp_2487_fu_109722_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2336_fu_109736_p1() {
    mul_ln1118_2336_fu_109736_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2336_fu_109736_p2() {
    mul_ln1118_2336_fu_109736_p2 = (!mul_ln1118_2336_fu_109736_p0.read().is_01() || !mul_ln1118_2336_fu_109736_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2336_fu_109736_p0.read()) * sc_bigint<32>(mul_ln1118_2336_fu_109736_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2337_fu_109880_p0() {
    mul_ln1118_2337_fu_109880_p0 = tmp_2488_fu_109866_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2337_fu_109880_p1() {
    mul_ln1118_2337_fu_109880_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2337_fu_109880_p2() {
    mul_ln1118_2337_fu_109880_p2 = (!mul_ln1118_2337_fu_109880_p0.read().is_01() || !mul_ln1118_2337_fu_109880_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2337_fu_109880_p0.read()) * sc_bigint<32>(mul_ln1118_2337_fu_109880_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2338_fu_109910_p0() {
    mul_ln1118_2338_fu_109910_p0 = tmp_2489_fu_109896_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2338_fu_109910_p1() {
    mul_ln1118_2338_fu_109910_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2338_fu_109910_p2() {
    mul_ln1118_2338_fu_109910_p2 = (!mul_ln1118_2338_fu_109910_p0.read().is_01() || !mul_ln1118_2338_fu_109910_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2338_fu_109910_p0.read()) * sc_bigint<32>(mul_ln1118_2338_fu_109910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2339_fu_109940_p0() {
    mul_ln1118_2339_fu_109940_p0 = tmp_2490_fu_109926_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2339_fu_109940_p1() {
    mul_ln1118_2339_fu_109940_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2339_fu_109940_p2() {
    mul_ln1118_2339_fu_109940_p2 = (!mul_ln1118_2339_fu_109940_p0.read().is_01() || !mul_ln1118_2339_fu_109940_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2339_fu_109940_p0.read()) * sc_bigint<32>(mul_ln1118_2339_fu_109940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_233_fu_33764_p0() {
    mul_ln1118_233_fu_33764_p0 = tmp_270_fu_33750_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_233_fu_33764_p1() {
    mul_ln1118_233_fu_33764_p1 =  (sc_lv<32>) (sext_ln1116_5_cast_fu_25510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_233_fu_33764_p2() {
    mul_ln1118_233_fu_33764_p2 = (!mul_ln1118_233_fu_33764_p0.read().is_01() || !mul_ln1118_233_fu_33764_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_233_fu_33764_p0.read()) * sc_bigint<32>(mul_ln1118_233_fu_33764_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2340_fu_109970_p0() {
    mul_ln1118_2340_fu_109970_p0 = tmp_2491_fu_109956_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2340_fu_109970_p1() {
    mul_ln1118_2340_fu_109970_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2340_fu_109970_p2() {
    mul_ln1118_2340_fu_109970_p2 = (!mul_ln1118_2340_fu_109970_p0.read().is_01() || !mul_ln1118_2340_fu_109970_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2340_fu_109970_p0.read()) * sc_bigint<32>(mul_ln1118_2340_fu_109970_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2341_fu_110000_p0() {
    mul_ln1118_2341_fu_110000_p0 = tmp_2492_fu_109986_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2341_fu_110000_p1() {
    mul_ln1118_2341_fu_110000_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2341_fu_110000_p2() {
    mul_ln1118_2341_fu_110000_p2 = (!mul_ln1118_2341_fu_110000_p0.read().is_01() || !mul_ln1118_2341_fu_110000_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2341_fu_110000_p0.read()) * sc_bigint<32>(mul_ln1118_2341_fu_110000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2342_fu_110030_p0() {
    mul_ln1118_2342_fu_110030_p0 = tmp_2493_fu_110016_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2342_fu_110030_p1() {
    mul_ln1118_2342_fu_110030_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2342_fu_110030_p2() {
    mul_ln1118_2342_fu_110030_p2 = (!mul_ln1118_2342_fu_110030_p0.read().is_01() || !mul_ln1118_2342_fu_110030_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2342_fu_110030_p0.read()) * sc_bigint<32>(mul_ln1118_2342_fu_110030_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2343_fu_110060_p0() {
    mul_ln1118_2343_fu_110060_p0 = tmp_2494_fu_110046_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2343_fu_110060_p1() {
    mul_ln1118_2343_fu_110060_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2343_fu_110060_p2() {
    mul_ln1118_2343_fu_110060_p2 = (!mul_ln1118_2343_fu_110060_p0.read().is_01() || !mul_ln1118_2343_fu_110060_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2343_fu_110060_p0.read()) * sc_bigint<32>(mul_ln1118_2343_fu_110060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2344_fu_110090_p0() {
    mul_ln1118_2344_fu_110090_p0 = tmp_2495_fu_110076_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2344_fu_110090_p1() {
    mul_ln1118_2344_fu_110090_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2344_fu_110090_p2() {
    mul_ln1118_2344_fu_110090_p2 = (!mul_ln1118_2344_fu_110090_p0.read().is_01() || !mul_ln1118_2344_fu_110090_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2344_fu_110090_p0.read()) * sc_bigint<32>(mul_ln1118_2344_fu_110090_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2345_fu_110120_p0() {
    mul_ln1118_2345_fu_110120_p0 = tmp_2496_fu_110106_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2345_fu_110120_p1() {
    mul_ln1118_2345_fu_110120_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2345_fu_110120_p2() {
    mul_ln1118_2345_fu_110120_p2 = (!mul_ln1118_2345_fu_110120_p0.read().is_01() || !mul_ln1118_2345_fu_110120_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2345_fu_110120_p0.read()) * sc_bigint<32>(mul_ln1118_2345_fu_110120_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2346_fu_110150_p0() {
    mul_ln1118_2346_fu_110150_p0 = tmp_2497_fu_110136_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2346_fu_110150_p1() {
    mul_ln1118_2346_fu_110150_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2346_fu_110150_p2() {
    mul_ln1118_2346_fu_110150_p2 = (!mul_ln1118_2346_fu_110150_p0.read().is_01() || !mul_ln1118_2346_fu_110150_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2346_fu_110150_p0.read()) * sc_bigint<32>(mul_ln1118_2346_fu_110150_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2347_fu_110180_p0() {
    mul_ln1118_2347_fu_110180_p0 = tmp_2498_fu_110166_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2347_fu_110180_p1() {
    mul_ln1118_2347_fu_110180_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2347_fu_110180_p2() {
    mul_ln1118_2347_fu_110180_p2 = (!mul_ln1118_2347_fu_110180_p0.read().is_01() || !mul_ln1118_2347_fu_110180_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2347_fu_110180_p0.read()) * sc_bigint<32>(mul_ln1118_2347_fu_110180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2348_fu_110210_p0() {
    mul_ln1118_2348_fu_110210_p0 = tmp_2499_fu_110196_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2348_fu_110210_p1() {
    mul_ln1118_2348_fu_110210_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2348_fu_110210_p2() {
    mul_ln1118_2348_fu_110210_p2 = (!mul_ln1118_2348_fu_110210_p0.read().is_01() || !mul_ln1118_2348_fu_110210_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2348_fu_110210_p0.read()) * sc_bigint<32>(mul_ln1118_2348_fu_110210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2349_fu_110240_p0() {
    mul_ln1118_2349_fu_110240_p0 = tmp_2500_fu_110226_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2349_fu_110240_p1() {
    mul_ln1118_2349_fu_110240_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2349_fu_110240_p2() {
    mul_ln1118_2349_fu_110240_p2 = (!mul_ln1118_2349_fu_110240_p0.read().is_01() || !mul_ln1118_2349_fu_110240_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2349_fu_110240_p0.read()) * sc_bigint<32>(mul_ln1118_2349_fu_110240_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_234_fu_33794_p0() {
    mul_ln1118_234_fu_33794_p0 = tmp_271_fu_33780_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_234_fu_33794_p1() {
    mul_ln1118_234_fu_33794_p1 =  (sc_lv<32>) (sext_ln1116_6_cast_fu_25543_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_234_fu_33794_p2() {
    mul_ln1118_234_fu_33794_p2 = (!mul_ln1118_234_fu_33794_p0.read().is_01() || !mul_ln1118_234_fu_33794_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_234_fu_33794_p0.read()) * sc_bigint<32>(mul_ln1118_234_fu_33794_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2350_fu_110270_p0() {
    mul_ln1118_2350_fu_110270_p0 = tmp_2501_fu_110256_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2350_fu_110270_p1() {
    mul_ln1118_2350_fu_110270_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2350_fu_110270_p2() {
    mul_ln1118_2350_fu_110270_p2 = (!mul_ln1118_2350_fu_110270_p0.read().is_01() || !mul_ln1118_2350_fu_110270_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2350_fu_110270_p0.read()) * sc_bigint<32>(mul_ln1118_2350_fu_110270_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2351_fu_110300_p0() {
    mul_ln1118_2351_fu_110300_p0 = tmp_2502_fu_110286_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2351_fu_110300_p1() {
    mul_ln1118_2351_fu_110300_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2351_fu_110300_p2() {
    mul_ln1118_2351_fu_110300_p2 = (!mul_ln1118_2351_fu_110300_p0.read().is_01() || !mul_ln1118_2351_fu_110300_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2351_fu_110300_p0.read()) * sc_bigint<32>(mul_ln1118_2351_fu_110300_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2352_fu_110330_p0() {
    mul_ln1118_2352_fu_110330_p0 = tmp_2503_fu_110316_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2352_fu_110330_p1() {
    mul_ln1118_2352_fu_110330_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2352_fu_110330_p2() {
    mul_ln1118_2352_fu_110330_p2 = (!mul_ln1118_2352_fu_110330_p0.read().is_01() || !mul_ln1118_2352_fu_110330_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2352_fu_110330_p0.read()) * sc_bigint<32>(mul_ln1118_2352_fu_110330_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2353_fu_110360_p0() {
    mul_ln1118_2353_fu_110360_p0 = tmp_2504_fu_110346_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2353_fu_110360_p1() {
    mul_ln1118_2353_fu_110360_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2353_fu_110360_p2() {
    mul_ln1118_2353_fu_110360_p2 = (!mul_ln1118_2353_fu_110360_p0.read().is_01() || !mul_ln1118_2353_fu_110360_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2353_fu_110360_p0.read()) * sc_bigint<32>(mul_ln1118_2353_fu_110360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2354_fu_110390_p0() {
    mul_ln1118_2354_fu_110390_p0 = tmp_2505_fu_110376_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2354_fu_110390_p1() {
    mul_ln1118_2354_fu_110390_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2354_fu_110390_p2() {
    mul_ln1118_2354_fu_110390_p2 = (!mul_ln1118_2354_fu_110390_p0.read().is_01() || !mul_ln1118_2354_fu_110390_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2354_fu_110390_p0.read()) * sc_bigint<32>(mul_ln1118_2354_fu_110390_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2355_fu_110420_p0() {
    mul_ln1118_2355_fu_110420_p0 = tmp_2506_fu_110406_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2355_fu_110420_p1() {
    mul_ln1118_2355_fu_110420_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2355_fu_110420_p2() {
    mul_ln1118_2355_fu_110420_p2 = (!mul_ln1118_2355_fu_110420_p0.read().is_01() || !mul_ln1118_2355_fu_110420_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2355_fu_110420_p0.read()) * sc_bigint<32>(mul_ln1118_2355_fu_110420_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2356_fu_110564_p0() {
    mul_ln1118_2356_fu_110564_p0 = tmp_2507_fu_110550_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2356_fu_110564_p1() {
    mul_ln1118_2356_fu_110564_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2356_fu_110564_p2() {
    mul_ln1118_2356_fu_110564_p2 = (!mul_ln1118_2356_fu_110564_p0.read().is_01() || !mul_ln1118_2356_fu_110564_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2356_fu_110564_p0.read()) * sc_bigint<32>(mul_ln1118_2356_fu_110564_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2357_fu_110594_p0() {
    mul_ln1118_2357_fu_110594_p0 = tmp_2508_fu_110580_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2357_fu_110594_p1() {
    mul_ln1118_2357_fu_110594_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2357_fu_110594_p2() {
    mul_ln1118_2357_fu_110594_p2 = (!mul_ln1118_2357_fu_110594_p0.read().is_01() || !mul_ln1118_2357_fu_110594_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2357_fu_110594_p0.read()) * sc_bigint<32>(mul_ln1118_2357_fu_110594_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2358_fu_110624_p0() {
    mul_ln1118_2358_fu_110624_p0 = tmp_2509_fu_110610_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2358_fu_110624_p1() {
    mul_ln1118_2358_fu_110624_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2358_fu_110624_p2() {
    mul_ln1118_2358_fu_110624_p2 = (!mul_ln1118_2358_fu_110624_p0.read().is_01() || !mul_ln1118_2358_fu_110624_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2358_fu_110624_p0.read()) * sc_bigint<32>(mul_ln1118_2358_fu_110624_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2359_fu_110654_p0() {
    mul_ln1118_2359_fu_110654_p0 = tmp_2510_fu_110640_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2359_fu_110654_p1() {
    mul_ln1118_2359_fu_110654_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2359_fu_110654_p2() {
    mul_ln1118_2359_fu_110654_p2 = (!mul_ln1118_2359_fu_110654_p0.read().is_01() || !mul_ln1118_2359_fu_110654_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2359_fu_110654_p0.read()) * sc_bigint<32>(mul_ln1118_2359_fu_110654_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_235_fu_33824_p0() {
    mul_ln1118_235_fu_33824_p0 = tmp_272_fu_33810_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_235_fu_33824_p1() {
    mul_ln1118_235_fu_33824_p1 =  (sc_lv<32>) (sext_ln1116_7_cast_fu_25576_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_235_fu_33824_p2() {
    mul_ln1118_235_fu_33824_p2 = (!mul_ln1118_235_fu_33824_p0.read().is_01() || !mul_ln1118_235_fu_33824_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_235_fu_33824_p0.read()) * sc_bigint<32>(mul_ln1118_235_fu_33824_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2360_fu_110684_p0() {
    mul_ln1118_2360_fu_110684_p0 = tmp_2511_fu_110670_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2360_fu_110684_p1() {
    mul_ln1118_2360_fu_110684_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2360_fu_110684_p2() {
    mul_ln1118_2360_fu_110684_p2 = (!mul_ln1118_2360_fu_110684_p0.read().is_01() || !mul_ln1118_2360_fu_110684_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2360_fu_110684_p0.read()) * sc_bigint<32>(mul_ln1118_2360_fu_110684_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2361_fu_110714_p0() {
    mul_ln1118_2361_fu_110714_p0 = tmp_2512_fu_110700_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2361_fu_110714_p1() {
    mul_ln1118_2361_fu_110714_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2361_fu_110714_p2() {
    mul_ln1118_2361_fu_110714_p2 = (!mul_ln1118_2361_fu_110714_p0.read().is_01() || !mul_ln1118_2361_fu_110714_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2361_fu_110714_p0.read()) * sc_bigint<32>(mul_ln1118_2361_fu_110714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2362_fu_110744_p0() {
    mul_ln1118_2362_fu_110744_p0 = tmp_2513_fu_110730_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2362_fu_110744_p1() {
    mul_ln1118_2362_fu_110744_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2362_fu_110744_p2() {
    mul_ln1118_2362_fu_110744_p2 = (!mul_ln1118_2362_fu_110744_p0.read().is_01() || !mul_ln1118_2362_fu_110744_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2362_fu_110744_p0.read()) * sc_bigint<32>(mul_ln1118_2362_fu_110744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2363_fu_110774_p0() {
    mul_ln1118_2363_fu_110774_p0 = tmp_2514_fu_110760_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2363_fu_110774_p1() {
    mul_ln1118_2363_fu_110774_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2363_fu_110774_p2() {
    mul_ln1118_2363_fu_110774_p2 = (!mul_ln1118_2363_fu_110774_p0.read().is_01() || !mul_ln1118_2363_fu_110774_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2363_fu_110774_p0.read()) * sc_bigint<32>(mul_ln1118_2363_fu_110774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2364_fu_110804_p0() {
    mul_ln1118_2364_fu_110804_p0 = tmp_2515_fu_110790_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2364_fu_110804_p1() {
    mul_ln1118_2364_fu_110804_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2364_fu_110804_p2() {
    mul_ln1118_2364_fu_110804_p2 = (!mul_ln1118_2364_fu_110804_p0.read().is_01() || !mul_ln1118_2364_fu_110804_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2364_fu_110804_p0.read()) * sc_bigint<32>(mul_ln1118_2364_fu_110804_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2365_fu_110834_p0() {
    mul_ln1118_2365_fu_110834_p0 = tmp_2516_fu_110820_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2365_fu_110834_p1() {
    mul_ln1118_2365_fu_110834_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2365_fu_110834_p2() {
    mul_ln1118_2365_fu_110834_p2 = (!mul_ln1118_2365_fu_110834_p0.read().is_01() || !mul_ln1118_2365_fu_110834_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2365_fu_110834_p0.read()) * sc_bigint<32>(mul_ln1118_2365_fu_110834_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2366_fu_110864_p0() {
    mul_ln1118_2366_fu_110864_p0 = tmp_2517_fu_110850_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2366_fu_110864_p1() {
    mul_ln1118_2366_fu_110864_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2366_fu_110864_p2() {
    mul_ln1118_2366_fu_110864_p2 = (!mul_ln1118_2366_fu_110864_p0.read().is_01() || !mul_ln1118_2366_fu_110864_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2366_fu_110864_p0.read()) * sc_bigint<32>(mul_ln1118_2366_fu_110864_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2367_fu_110894_p0() {
    mul_ln1118_2367_fu_110894_p0 = tmp_2518_fu_110880_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2367_fu_110894_p1() {
    mul_ln1118_2367_fu_110894_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2367_fu_110894_p2() {
    mul_ln1118_2367_fu_110894_p2 = (!mul_ln1118_2367_fu_110894_p0.read().is_01() || !mul_ln1118_2367_fu_110894_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2367_fu_110894_p0.read()) * sc_bigint<32>(mul_ln1118_2367_fu_110894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2368_fu_110924_p0() {
    mul_ln1118_2368_fu_110924_p0 = tmp_2519_fu_110910_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2368_fu_110924_p1() {
    mul_ln1118_2368_fu_110924_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2368_fu_110924_p2() {
    mul_ln1118_2368_fu_110924_p2 = (!mul_ln1118_2368_fu_110924_p0.read().is_01() || !mul_ln1118_2368_fu_110924_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2368_fu_110924_p0.read()) * sc_bigint<32>(mul_ln1118_2368_fu_110924_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2369_fu_110954_p0() {
    mul_ln1118_2369_fu_110954_p0 = tmp_2520_fu_110940_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2369_fu_110954_p1() {
    mul_ln1118_2369_fu_110954_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2369_fu_110954_p2() {
    mul_ln1118_2369_fu_110954_p2 = (!mul_ln1118_2369_fu_110954_p0.read().is_01() || !mul_ln1118_2369_fu_110954_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2369_fu_110954_p0.read()) * sc_bigint<32>(mul_ln1118_2369_fu_110954_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_236_fu_33854_p0() {
    mul_ln1118_236_fu_33854_p0 = tmp_273_fu_33840_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_236_fu_33854_p1() {
    mul_ln1118_236_fu_33854_p1 =  (sc_lv<32>) (sext_ln1116_8_cast_fu_25609_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_236_fu_33854_p2() {
    mul_ln1118_236_fu_33854_p2 = (!mul_ln1118_236_fu_33854_p0.read().is_01() || !mul_ln1118_236_fu_33854_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_236_fu_33854_p0.read()) * sc_bigint<32>(mul_ln1118_236_fu_33854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2370_fu_110984_p0() {
    mul_ln1118_2370_fu_110984_p0 = tmp_2521_fu_110970_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2370_fu_110984_p1() {
    mul_ln1118_2370_fu_110984_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2370_fu_110984_p2() {
    mul_ln1118_2370_fu_110984_p2 = (!mul_ln1118_2370_fu_110984_p0.read().is_01() || !mul_ln1118_2370_fu_110984_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2370_fu_110984_p0.read()) * sc_bigint<32>(mul_ln1118_2370_fu_110984_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2371_fu_111014_p0() {
    mul_ln1118_2371_fu_111014_p0 = tmp_2522_fu_111000_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2371_fu_111014_p1() {
    mul_ln1118_2371_fu_111014_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2371_fu_111014_p2() {
    mul_ln1118_2371_fu_111014_p2 = (!mul_ln1118_2371_fu_111014_p0.read().is_01() || !mul_ln1118_2371_fu_111014_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2371_fu_111014_p0.read()) * sc_bigint<32>(mul_ln1118_2371_fu_111014_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2372_fu_111044_p0() {
    mul_ln1118_2372_fu_111044_p0 = tmp_2523_fu_111030_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2372_fu_111044_p1() {
    mul_ln1118_2372_fu_111044_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2372_fu_111044_p2() {
    mul_ln1118_2372_fu_111044_p2 = (!mul_ln1118_2372_fu_111044_p0.read().is_01() || !mul_ln1118_2372_fu_111044_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2372_fu_111044_p0.read()) * sc_bigint<32>(mul_ln1118_2372_fu_111044_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2373_fu_111074_p0() {
    mul_ln1118_2373_fu_111074_p0 = tmp_2524_fu_111060_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2373_fu_111074_p1() {
    mul_ln1118_2373_fu_111074_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2373_fu_111074_p2() {
    mul_ln1118_2373_fu_111074_p2 = (!mul_ln1118_2373_fu_111074_p0.read().is_01() || !mul_ln1118_2373_fu_111074_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2373_fu_111074_p0.read()) * sc_bigint<32>(mul_ln1118_2373_fu_111074_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2374_fu_111104_p0() {
    mul_ln1118_2374_fu_111104_p0 = tmp_2525_fu_111090_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2374_fu_111104_p1() {
    mul_ln1118_2374_fu_111104_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2374_fu_111104_p2() {
    mul_ln1118_2374_fu_111104_p2 = (!mul_ln1118_2374_fu_111104_p0.read().is_01() || !mul_ln1118_2374_fu_111104_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2374_fu_111104_p0.read()) * sc_bigint<32>(mul_ln1118_2374_fu_111104_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2375_fu_111248_p0() {
    mul_ln1118_2375_fu_111248_p0 = tmp_2526_fu_111234_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2375_fu_111248_p1() {
    mul_ln1118_2375_fu_111248_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2375_fu_111248_p2() {
    mul_ln1118_2375_fu_111248_p2 = (!mul_ln1118_2375_fu_111248_p0.read().is_01() || !mul_ln1118_2375_fu_111248_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2375_fu_111248_p0.read()) * sc_bigint<32>(mul_ln1118_2375_fu_111248_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2376_fu_111278_p0() {
    mul_ln1118_2376_fu_111278_p0 = tmp_2527_fu_111264_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2376_fu_111278_p1() {
    mul_ln1118_2376_fu_111278_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2376_fu_111278_p2() {
    mul_ln1118_2376_fu_111278_p2 = (!mul_ln1118_2376_fu_111278_p0.read().is_01() || !mul_ln1118_2376_fu_111278_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2376_fu_111278_p0.read()) * sc_bigint<32>(mul_ln1118_2376_fu_111278_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2377_fu_111308_p0() {
    mul_ln1118_2377_fu_111308_p0 = tmp_2528_fu_111294_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2377_fu_111308_p1() {
    mul_ln1118_2377_fu_111308_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2377_fu_111308_p2() {
    mul_ln1118_2377_fu_111308_p2 = (!mul_ln1118_2377_fu_111308_p0.read().is_01() || !mul_ln1118_2377_fu_111308_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2377_fu_111308_p0.read()) * sc_bigint<32>(mul_ln1118_2377_fu_111308_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2378_fu_111338_p0() {
    mul_ln1118_2378_fu_111338_p0 = tmp_2529_fu_111324_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2378_fu_111338_p1() {
    mul_ln1118_2378_fu_111338_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2378_fu_111338_p2() {
    mul_ln1118_2378_fu_111338_p2 = (!mul_ln1118_2378_fu_111338_p0.read().is_01() || !mul_ln1118_2378_fu_111338_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2378_fu_111338_p0.read()) * sc_bigint<32>(mul_ln1118_2378_fu_111338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2379_fu_111368_p0() {
    mul_ln1118_2379_fu_111368_p0 = tmp_2530_fu_111354_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2379_fu_111368_p1() {
    mul_ln1118_2379_fu_111368_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2379_fu_111368_p2() {
    mul_ln1118_2379_fu_111368_p2 = (!mul_ln1118_2379_fu_111368_p0.read().is_01() || !mul_ln1118_2379_fu_111368_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2379_fu_111368_p0.read()) * sc_bigint<32>(mul_ln1118_2379_fu_111368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_237_fu_33884_p0() {
    mul_ln1118_237_fu_33884_p0 = tmp_274_fu_33870_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_237_fu_33884_p1() {
    mul_ln1118_237_fu_33884_p1 =  (sc_lv<32>) (sext_ln1116_9_cast_fu_25642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_237_fu_33884_p2() {
    mul_ln1118_237_fu_33884_p2 = (!mul_ln1118_237_fu_33884_p0.read().is_01() || !mul_ln1118_237_fu_33884_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_237_fu_33884_p0.read()) * sc_bigint<32>(mul_ln1118_237_fu_33884_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2380_fu_111398_p0() {
    mul_ln1118_2380_fu_111398_p0 = tmp_2531_fu_111384_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2380_fu_111398_p1() {
    mul_ln1118_2380_fu_111398_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2380_fu_111398_p2() {
    mul_ln1118_2380_fu_111398_p2 = (!mul_ln1118_2380_fu_111398_p0.read().is_01() || !mul_ln1118_2380_fu_111398_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2380_fu_111398_p0.read()) * sc_bigint<32>(mul_ln1118_2380_fu_111398_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2381_fu_111428_p0() {
    mul_ln1118_2381_fu_111428_p0 = tmp_2532_fu_111414_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2381_fu_111428_p1() {
    mul_ln1118_2381_fu_111428_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2381_fu_111428_p2() {
    mul_ln1118_2381_fu_111428_p2 = (!mul_ln1118_2381_fu_111428_p0.read().is_01() || !mul_ln1118_2381_fu_111428_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2381_fu_111428_p0.read()) * sc_bigint<32>(mul_ln1118_2381_fu_111428_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2382_fu_111458_p0() {
    mul_ln1118_2382_fu_111458_p0 = tmp_2533_fu_111444_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2382_fu_111458_p1() {
    mul_ln1118_2382_fu_111458_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2382_fu_111458_p2() {
    mul_ln1118_2382_fu_111458_p2 = (!mul_ln1118_2382_fu_111458_p0.read().is_01() || !mul_ln1118_2382_fu_111458_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2382_fu_111458_p0.read()) * sc_bigint<32>(mul_ln1118_2382_fu_111458_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2383_fu_111488_p0() {
    mul_ln1118_2383_fu_111488_p0 = tmp_2534_fu_111474_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2383_fu_111488_p1() {
    mul_ln1118_2383_fu_111488_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2383_fu_111488_p2() {
    mul_ln1118_2383_fu_111488_p2 = (!mul_ln1118_2383_fu_111488_p0.read().is_01() || !mul_ln1118_2383_fu_111488_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2383_fu_111488_p0.read()) * sc_bigint<32>(mul_ln1118_2383_fu_111488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2384_fu_111518_p0() {
    mul_ln1118_2384_fu_111518_p0 = tmp_2535_fu_111504_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2384_fu_111518_p1() {
    mul_ln1118_2384_fu_111518_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2384_fu_111518_p2() {
    mul_ln1118_2384_fu_111518_p2 = (!mul_ln1118_2384_fu_111518_p0.read().is_01() || !mul_ln1118_2384_fu_111518_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2384_fu_111518_p0.read()) * sc_bigint<32>(mul_ln1118_2384_fu_111518_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2385_fu_111548_p0() {
    mul_ln1118_2385_fu_111548_p0 = tmp_2536_fu_111534_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2385_fu_111548_p1() {
    mul_ln1118_2385_fu_111548_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2385_fu_111548_p2() {
    mul_ln1118_2385_fu_111548_p2 = (!mul_ln1118_2385_fu_111548_p0.read().is_01() || !mul_ln1118_2385_fu_111548_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2385_fu_111548_p0.read()) * sc_bigint<32>(mul_ln1118_2385_fu_111548_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2386_fu_111578_p0() {
    mul_ln1118_2386_fu_111578_p0 = tmp_2537_fu_111564_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2386_fu_111578_p1() {
    mul_ln1118_2386_fu_111578_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2386_fu_111578_p2() {
    mul_ln1118_2386_fu_111578_p2 = (!mul_ln1118_2386_fu_111578_p0.read().is_01() || !mul_ln1118_2386_fu_111578_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2386_fu_111578_p0.read()) * sc_bigint<32>(mul_ln1118_2386_fu_111578_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2387_fu_111608_p0() {
    mul_ln1118_2387_fu_111608_p0 = tmp_2538_fu_111594_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2387_fu_111608_p1() {
    mul_ln1118_2387_fu_111608_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2387_fu_111608_p2() {
    mul_ln1118_2387_fu_111608_p2 = (!mul_ln1118_2387_fu_111608_p0.read().is_01() || !mul_ln1118_2387_fu_111608_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2387_fu_111608_p0.read()) * sc_bigint<32>(mul_ln1118_2387_fu_111608_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2388_fu_111638_p0() {
    mul_ln1118_2388_fu_111638_p0 = tmp_2539_fu_111624_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2388_fu_111638_p1() {
    mul_ln1118_2388_fu_111638_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2388_fu_111638_p2() {
    mul_ln1118_2388_fu_111638_p2 = (!mul_ln1118_2388_fu_111638_p0.read().is_01() || !mul_ln1118_2388_fu_111638_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2388_fu_111638_p0.read()) * sc_bigint<32>(mul_ln1118_2388_fu_111638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2389_fu_111668_p0() {
    mul_ln1118_2389_fu_111668_p0 = tmp_2540_fu_111654_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2389_fu_111668_p1() {
    mul_ln1118_2389_fu_111668_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2389_fu_111668_p2() {
    mul_ln1118_2389_fu_111668_p2 = (!mul_ln1118_2389_fu_111668_p0.read().is_01() || !mul_ln1118_2389_fu_111668_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2389_fu_111668_p0.read()) * sc_bigint<32>(mul_ln1118_2389_fu_111668_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_238_fu_33914_p0() {
    mul_ln1118_238_fu_33914_p0 = tmp_275_fu_33900_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_238_fu_33914_p1() {
    mul_ln1118_238_fu_33914_p1 =  (sc_lv<32>) (sext_ln1116_10_cast_fu_25675_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_238_fu_33914_p2() {
    mul_ln1118_238_fu_33914_p2 = (!mul_ln1118_238_fu_33914_p0.read().is_01() || !mul_ln1118_238_fu_33914_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_238_fu_33914_p0.read()) * sc_bigint<32>(mul_ln1118_238_fu_33914_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2390_fu_111698_p0() {
    mul_ln1118_2390_fu_111698_p0 = tmp_2541_fu_111684_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2390_fu_111698_p1() {
    mul_ln1118_2390_fu_111698_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2390_fu_111698_p2() {
    mul_ln1118_2390_fu_111698_p2 = (!mul_ln1118_2390_fu_111698_p0.read().is_01() || !mul_ln1118_2390_fu_111698_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2390_fu_111698_p0.read()) * sc_bigint<32>(mul_ln1118_2390_fu_111698_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2391_fu_111728_p0() {
    mul_ln1118_2391_fu_111728_p0 = tmp_2542_fu_111714_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2391_fu_111728_p1() {
    mul_ln1118_2391_fu_111728_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2391_fu_111728_p2() {
    mul_ln1118_2391_fu_111728_p2 = (!mul_ln1118_2391_fu_111728_p0.read().is_01() || !mul_ln1118_2391_fu_111728_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2391_fu_111728_p0.read()) * sc_bigint<32>(mul_ln1118_2391_fu_111728_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2392_fu_111758_p0() {
    mul_ln1118_2392_fu_111758_p0 = tmp_2543_fu_111744_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2392_fu_111758_p1() {
    mul_ln1118_2392_fu_111758_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2392_fu_111758_p2() {
    mul_ln1118_2392_fu_111758_p2 = (!mul_ln1118_2392_fu_111758_p0.read().is_01() || !mul_ln1118_2392_fu_111758_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2392_fu_111758_p0.read()) * sc_bigint<32>(mul_ln1118_2392_fu_111758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2393_fu_111788_p0() {
    mul_ln1118_2393_fu_111788_p0 = tmp_2544_fu_111774_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2393_fu_111788_p1() {
    mul_ln1118_2393_fu_111788_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2393_fu_111788_p2() {
    mul_ln1118_2393_fu_111788_p2 = (!mul_ln1118_2393_fu_111788_p0.read().is_01() || !mul_ln1118_2393_fu_111788_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2393_fu_111788_p0.read()) * sc_bigint<32>(mul_ln1118_2393_fu_111788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2394_fu_111932_p0() {
    mul_ln1118_2394_fu_111932_p0 = tmp_2545_fu_111918_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2394_fu_111932_p1() {
    mul_ln1118_2394_fu_111932_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2394_fu_111932_p2() {
    mul_ln1118_2394_fu_111932_p2 = (!mul_ln1118_2394_fu_111932_p0.read().is_01() || !mul_ln1118_2394_fu_111932_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2394_fu_111932_p0.read()) * sc_bigint<32>(mul_ln1118_2394_fu_111932_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2395_fu_111962_p0() {
    mul_ln1118_2395_fu_111962_p0 = tmp_2546_fu_111948_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2395_fu_111962_p1() {
    mul_ln1118_2395_fu_111962_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2395_fu_111962_p2() {
    mul_ln1118_2395_fu_111962_p2 = (!mul_ln1118_2395_fu_111962_p0.read().is_01() || !mul_ln1118_2395_fu_111962_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2395_fu_111962_p0.read()) * sc_bigint<32>(mul_ln1118_2395_fu_111962_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2396_fu_111992_p0() {
    mul_ln1118_2396_fu_111992_p0 = tmp_2547_fu_111978_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2396_fu_111992_p1() {
    mul_ln1118_2396_fu_111992_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2396_fu_111992_p2() {
    mul_ln1118_2396_fu_111992_p2 = (!mul_ln1118_2396_fu_111992_p0.read().is_01() || !mul_ln1118_2396_fu_111992_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2396_fu_111992_p0.read()) * sc_bigint<32>(mul_ln1118_2396_fu_111992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2397_fu_112022_p0() {
    mul_ln1118_2397_fu_112022_p0 = tmp_2548_fu_112008_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2397_fu_112022_p1() {
    mul_ln1118_2397_fu_112022_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2397_fu_112022_p2() {
    mul_ln1118_2397_fu_112022_p2 = (!mul_ln1118_2397_fu_112022_p0.read().is_01() || !mul_ln1118_2397_fu_112022_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2397_fu_112022_p0.read()) * sc_bigint<32>(mul_ln1118_2397_fu_112022_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2398_fu_112052_p0() {
    mul_ln1118_2398_fu_112052_p0 = tmp_2549_fu_112038_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2398_fu_112052_p1() {
    mul_ln1118_2398_fu_112052_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2398_fu_112052_p2() {
    mul_ln1118_2398_fu_112052_p2 = (!mul_ln1118_2398_fu_112052_p0.read().is_01() || !mul_ln1118_2398_fu_112052_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2398_fu_112052_p0.read()) * sc_bigint<32>(mul_ln1118_2398_fu_112052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2399_fu_112082_p0() {
    mul_ln1118_2399_fu_112082_p0 = tmp_2550_fu_112068_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2399_fu_112082_p1() {
    mul_ln1118_2399_fu_112082_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2399_fu_112082_p2() {
    mul_ln1118_2399_fu_112082_p2 = (!mul_ln1118_2399_fu_112082_p0.read().is_01() || !mul_ln1118_2399_fu_112082_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2399_fu_112082_p0.read()) * sc_bigint<32>(mul_ln1118_2399_fu_112082_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_239_fu_33944_p0() {
    mul_ln1118_239_fu_33944_p0 = tmp_276_fu_33930_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_239_fu_33944_p1() {
    mul_ln1118_239_fu_33944_p1 =  (sc_lv<32>) (sext_ln1116_11_cast_fu_25708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_239_fu_33944_p2() {
    mul_ln1118_239_fu_33944_p2 = (!mul_ln1118_239_fu_33944_p0.read().is_01() || !mul_ln1118_239_fu_33944_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_239_fu_33944_p0.read()) * sc_bigint<32>(mul_ln1118_239_fu_33944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_23_fu_26210_p0() {
    mul_ln1118_23_fu_26210_p0 = tmp_42_fu_26196_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_23_fu_26210_p1() {
    mul_ln1118_23_fu_26210_p1 =  (sc_lv<32>) (sext_ln1116_4_cast_fu_25477_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_23_fu_26210_p2() {
    mul_ln1118_23_fu_26210_p2 = (!mul_ln1118_23_fu_26210_p0.read().is_01() || !mul_ln1118_23_fu_26210_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_23_fu_26210_p0.read()) * sc_bigint<32>(mul_ln1118_23_fu_26210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2400_fu_112112_p0() {
    mul_ln1118_2400_fu_112112_p0 = tmp_2551_fu_112098_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2400_fu_112112_p1() {
    mul_ln1118_2400_fu_112112_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2400_fu_112112_p2() {
    mul_ln1118_2400_fu_112112_p2 = (!mul_ln1118_2400_fu_112112_p0.read().is_01() || !mul_ln1118_2400_fu_112112_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2400_fu_112112_p0.read()) * sc_bigint<32>(mul_ln1118_2400_fu_112112_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2401_fu_112142_p0() {
    mul_ln1118_2401_fu_112142_p0 = tmp_2552_fu_112128_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2401_fu_112142_p1() {
    mul_ln1118_2401_fu_112142_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2401_fu_112142_p2() {
    mul_ln1118_2401_fu_112142_p2 = (!mul_ln1118_2401_fu_112142_p0.read().is_01() || !mul_ln1118_2401_fu_112142_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2401_fu_112142_p0.read()) * sc_bigint<32>(mul_ln1118_2401_fu_112142_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2402_fu_112172_p0() {
    mul_ln1118_2402_fu_112172_p0 = tmp_2553_fu_112158_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2402_fu_112172_p1() {
    mul_ln1118_2402_fu_112172_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2402_fu_112172_p2() {
    mul_ln1118_2402_fu_112172_p2 = (!mul_ln1118_2402_fu_112172_p0.read().is_01() || !mul_ln1118_2402_fu_112172_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2402_fu_112172_p0.read()) * sc_bigint<32>(mul_ln1118_2402_fu_112172_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2403_fu_112202_p0() {
    mul_ln1118_2403_fu_112202_p0 = tmp_2554_fu_112188_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2403_fu_112202_p1() {
    mul_ln1118_2403_fu_112202_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2403_fu_112202_p2() {
    mul_ln1118_2403_fu_112202_p2 = (!mul_ln1118_2403_fu_112202_p0.read().is_01() || !mul_ln1118_2403_fu_112202_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2403_fu_112202_p0.read()) * sc_bigint<32>(mul_ln1118_2403_fu_112202_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2404_fu_112232_p0() {
    mul_ln1118_2404_fu_112232_p0 = tmp_2555_fu_112218_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2404_fu_112232_p1() {
    mul_ln1118_2404_fu_112232_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2404_fu_112232_p2() {
    mul_ln1118_2404_fu_112232_p2 = (!mul_ln1118_2404_fu_112232_p0.read().is_01() || !mul_ln1118_2404_fu_112232_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2404_fu_112232_p0.read()) * sc_bigint<32>(mul_ln1118_2404_fu_112232_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2405_fu_112262_p0() {
    mul_ln1118_2405_fu_112262_p0 = tmp_2556_fu_112248_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2405_fu_112262_p1() {
    mul_ln1118_2405_fu_112262_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2405_fu_112262_p2() {
    mul_ln1118_2405_fu_112262_p2 = (!mul_ln1118_2405_fu_112262_p0.read().is_01() || !mul_ln1118_2405_fu_112262_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2405_fu_112262_p0.read()) * sc_bigint<32>(mul_ln1118_2405_fu_112262_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2406_fu_112292_p0() {
    mul_ln1118_2406_fu_112292_p0 = tmp_2557_fu_112278_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2406_fu_112292_p1() {
    mul_ln1118_2406_fu_112292_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2406_fu_112292_p2() {
    mul_ln1118_2406_fu_112292_p2 = (!mul_ln1118_2406_fu_112292_p0.read().is_01() || !mul_ln1118_2406_fu_112292_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2406_fu_112292_p0.read()) * sc_bigint<32>(mul_ln1118_2406_fu_112292_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2407_fu_112322_p0() {
    mul_ln1118_2407_fu_112322_p0 = tmp_2558_fu_112308_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2407_fu_112322_p1() {
    mul_ln1118_2407_fu_112322_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2407_fu_112322_p2() {
    mul_ln1118_2407_fu_112322_p2 = (!mul_ln1118_2407_fu_112322_p0.read().is_01() || !mul_ln1118_2407_fu_112322_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2407_fu_112322_p0.read()) * sc_bigint<32>(mul_ln1118_2407_fu_112322_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2408_fu_112352_p0() {
    mul_ln1118_2408_fu_112352_p0 = tmp_2559_fu_112338_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2408_fu_112352_p1() {
    mul_ln1118_2408_fu_112352_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2408_fu_112352_p2() {
    mul_ln1118_2408_fu_112352_p2 = (!mul_ln1118_2408_fu_112352_p0.read().is_01() || !mul_ln1118_2408_fu_112352_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2408_fu_112352_p0.read()) * sc_bigint<32>(mul_ln1118_2408_fu_112352_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2409_fu_112382_p0() {
    mul_ln1118_2409_fu_112382_p0 = tmp_2560_fu_112368_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2409_fu_112382_p1() {
    mul_ln1118_2409_fu_112382_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2409_fu_112382_p2() {
    mul_ln1118_2409_fu_112382_p2 = (!mul_ln1118_2409_fu_112382_p0.read().is_01() || !mul_ln1118_2409_fu_112382_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2409_fu_112382_p0.read()) * sc_bigint<32>(mul_ln1118_2409_fu_112382_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_240_fu_33974_p0() {
    mul_ln1118_240_fu_33974_p0 = tmp_277_fu_33960_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_240_fu_33974_p1() {
    mul_ln1118_240_fu_33974_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_240_fu_33974_p2() {
    mul_ln1118_240_fu_33974_p2 = (!mul_ln1118_240_fu_33974_p0.read().is_01() || !mul_ln1118_240_fu_33974_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_240_fu_33974_p0.read()) * sc_bigint<32>(mul_ln1118_240_fu_33974_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2410_fu_112412_p0() {
    mul_ln1118_2410_fu_112412_p0 = tmp_2561_fu_112398_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2410_fu_112412_p1() {
    mul_ln1118_2410_fu_112412_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2410_fu_112412_p2() {
    mul_ln1118_2410_fu_112412_p2 = (!mul_ln1118_2410_fu_112412_p0.read().is_01() || !mul_ln1118_2410_fu_112412_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2410_fu_112412_p0.read()) * sc_bigint<32>(mul_ln1118_2410_fu_112412_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2411_fu_112442_p0() {
    mul_ln1118_2411_fu_112442_p0 = tmp_2562_fu_112428_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2411_fu_112442_p1() {
    mul_ln1118_2411_fu_112442_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2411_fu_112442_p2() {
    mul_ln1118_2411_fu_112442_p2 = (!mul_ln1118_2411_fu_112442_p0.read().is_01() || !mul_ln1118_2411_fu_112442_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2411_fu_112442_p0.read()) * sc_bigint<32>(mul_ln1118_2411_fu_112442_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2412_fu_112472_p0() {
    mul_ln1118_2412_fu_112472_p0 = tmp_2563_fu_112458_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2412_fu_112472_p1() {
    mul_ln1118_2412_fu_112472_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2412_fu_112472_p2() {
    mul_ln1118_2412_fu_112472_p2 = (!mul_ln1118_2412_fu_112472_p0.read().is_01() || !mul_ln1118_2412_fu_112472_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2412_fu_112472_p0.read()) * sc_bigint<32>(mul_ln1118_2412_fu_112472_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2413_fu_112616_p0() {
    mul_ln1118_2413_fu_112616_p0 = tmp_2564_fu_112602_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2413_fu_112616_p1() {
    mul_ln1118_2413_fu_112616_p1 =  (sc_lv<32>) (sext_ln1116_250_cast_fu_100252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2413_fu_112616_p2() {
    mul_ln1118_2413_fu_112616_p2 = (!mul_ln1118_2413_fu_112616_p0.read().is_01() || !mul_ln1118_2413_fu_112616_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2413_fu_112616_p0.read()) * sc_bigint<32>(mul_ln1118_2413_fu_112616_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2414_fu_112646_p0() {
    mul_ln1118_2414_fu_112646_p0 = tmp_2565_fu_112632_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2414_fu_112646_p1() {
    mul_ln1118_2414_fu_112646_p1 =  (sc_lv<32>) (sext_ln1116_251_cast_fu_100285_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2414_fu_112646_p2() {
    mul_ln1118_2414_fu_112646_p2 = (!mul_ln1118_2414_fu_112646_p0.read().is_01() || !mul_ln1118_2414_fu_112646_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2414_fu_112646_p0.read()) * sc_bigint<32>(mul_ln1118_2414_fu_112646_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2415_fu_112676_p0() {
    mul_ln1118_2415_fu_112676_p0 = tmp_2566_fu_112662_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2415_fu_112676_p1() {
    mul_ln1118_2415_fu_112676_p1 =  (sc_lv<32>) (sext_ln1116_252_cast_fu_100318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2415_fu_112676_p2() {
    mul_ln1118_2415_fu_112676_p2 = (!mul_ln1118_2415_fu_112676_p0.read().is_01() || !mul_ln1118_2415_fu_112676_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2415_fu_112676_p0.read()) * sc_bigint<32>(mul_ln1118_2415_fu_112676_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2416_fu_112706_p0() {
    mul_ln1118_2416_fu_112706_p0 = tmp_2567_fu_112692_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2416_fu_112706_p1() {
    mul_ln1118_2416_fu_112706_p1 =  (sc_lv<32>) (sext_ln1116_253_cast_fu_100351_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2416_fu_112706_p2() {
    mul_ln1118_2416_fu_112706_p2 = (!mul_ln1118_2416_fu_112706_p0.read().is_01() || !mul_ln1118_2416_fu_112706_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2416_fu_112706_p0.read()) * sc_bigint<32>(mul_ln1118_2416_fu_112706_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2417_fu_112736_p0() {
    mul_ln1118_2417_fu_112736_p0 = tmp_2568_fu_112722_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2417_fu_112736_p1() {
    mul_ln1118_2417_fu_112736_p1 =  (sc_lv<32>) (sext_ln1116_254_cast_fu_100384_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2417_fu_112736_p2() {
    mul_ln1118_2417_fu_112736_p2 = (!mul_ln1118_2417_fu_112736_p0.read().is_01() || !mul_ln1118_2417_fu_112736_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2417_fu_112736_p0.read()) * sc_bigint<32>(mul_ln1118_2417_fu_112736_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2418_fu_112766_p0() {
    mul_ln1118_2418_fu_112766_p0 = tmp_2569_fu_112752_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2418_fu_112766_p1() {
    mul_ln1118_2418_fu_112766_p1 =  (sc_lv<32>) (sext_ln1116_255_cast_fu_100417_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2418_fu_112766_p2() {
    mul_ln1118_2418_fu_112766_p2 = (!mul_ln1118_2418_fu_112766_p0.read().is_01() || !mul_ln1118_2418_fu_112766_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2418_fu_112766_p0.read()) * sc_bigint<32>(mul_ln1118_2418_fu_112766_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2419_fu_112796_p0() {
    mul_ln1118_2419_fu_112796_p0 = tmp_2570_fu_112782_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2419_fu_112796_p1() {
    mul_ln1118_2419_fu_112796_p1 =  (sc_lv<32>) (sext_ln1116_256_cast_fu_100450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2419_fu_112796_p2() {
    mul_ln1118_2419_fu_112796_p2 = (!mul_ln1118_2419_fu_112796_p0.read().is_01() || !mul_ln1118_2419_fu_112796_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2419_fu_112796_p0.read()) * sc_bigint<32>(mul_ln1118_2419_fu_112796_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_241_fu_34004_p0() {
    mul_ln1118_241_fu_34004_p0 = tmp_278_fu_33990_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_241_fu_34004_p1() {
    mul_ln1118_241_fu_34004_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_241_fu_34004_p2() {
    mul_ln1118_241_fu_34004_p2 = (!mul_ln1118_241_fu_34004_p0.read().is_01() || !mul_ln1118_241_fu_34004_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_241_fu_34004_p0.read()) * sc_bigint<32>(mul_ln1118_241_fu_34004_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2420_fu_112826_p0() {
    mul_ln1118_2420_fu_112826_p0 = tmp_2571_fu_112812_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2420_fu_112826_p1() {
    mul_ln1118_2420_fu_112826_p1 =  (sc_lv<32>) (sext_ln1116_257_cast_fu_100483_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2420_fu_112826_p2() {
    mul_ln1118_2420_fu_112826_p2 = (!mul_ln1118_2420_fu_112826_p0.read().is_01() || !mul_ln1118_2420_fu_112826_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2420_fu_112826_p0.read()) * sc_bigint<32>(mul_ln1118_2420_fu_112826_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2421_fu_112856_p0() {
    mul_ln1118_2421_fu_112856_p0 = tmp_2572_fu_112842_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2421_fu_112856_p1() {
    mul_ln1118_2421_fu_112856_p1 =  (sc_lv<32>) (sext_ln1116_258_cast_fu_100516_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2421_fu_112856_p2() {
    mul_ln1118_2421_fu_112856_p2 = (!mul_ln1118_2421_fu_112856_p0.read().is_01() || !mul_ln1118_2421_fu_112856_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2421_fu_112856_p0.read()) * sc_bigint<32>(mul_ln1118_2421_fu_112856_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2422_fu_112886_p0() {
    mul_ln1118_2422_fu_112886_p0 = tmp_2573_fu_112872_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2422_fu_112886_p1() {
    mul_ln1118_2422_fu_112886_p1 =  (sc_lv<32>) (sext_ln1116_259_cast_fu_100549_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2422_fu_112886_p2() {
    mul_ln1118_2422_fu_112886_p2 = (!mul_ln1118_2422_fu_112886_p0.read().is_01() || !mul_ln1118_2422_fu_112886_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2422_fu_112886_p0.read()) * sc_bigint<32>(mul_ln1118_2422_fu_112886_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2423_fu_112916_p0() {
    mul_ln1118_2423_fu_112916_p0 = tmp_2574_fu_112902_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2423_fu_112916_p1() {
    mul_ln1118_2423_fu_112916_p1 =  (sc_lv<32>) (sext_ln1116_260_cast_fu_100582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2423_fu_112916_p2() {
    mul_ln1118_2423_fu_112916_p2 = (!mul_ln1118_2423_fu_112916_p0.read().is_01() || !mul_ln1118_2423_fu_112916_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2423_fu_112916_p0.read()) * sc_bigint<32>(mul_ln1118_2423_fu_112916_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2424_fu_112946_p0() {
    mul_ln1118_2424_fu_112946_p0 = tmp_2575_fu_112932_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2424_fu_112946_p1() {
    mul_ln1118_2424_fu_112946_p1 =  (sc_lv<32>) (sext_ln1116_261_cast_fu_100615_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2424_fu_112946_p2() {
    mul_ln1118_2424_fu_112946_p2 = (!mul_ln1118_2424_fu_112946_p0.read().is_01() || !mul_ln1118_2424_fu_112946_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2424_fu_112946_p0.read()) * sc_bigint<32>(mul_ln1118_2424_fu_112946_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2425_fu_112976_p0() {
    mul_ln1118_2425_fu_112976_p0 = tmp_2576_fu_112962_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2425_fu_112976_p1() {
    mul_ln1118_2425_fu_112976_p1 =  (sc_lv<32>) (sext_ln1116_262_cast_fu_100648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2425_fu_112976_p2() {
    mul_ln1118_2425_fu_112976_p2 = (!mul_ln1118_2425_fu_112976_p0.read().is_01() || !mul_ln1118_2425_fu_112976_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2425_fu_112976_p0.read()) * sc_bigint<32>(mul_ln1118_2425_fu_112976_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2426_fu_113006_p0() {
    mul_ln1118_2426_fu_113006_p0 = tmp_2577_fu_112992_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2426_fu_113006_p1() {
    mul_ln1118_2426_fu_113006_p1 =  (sc_lv<32>) (sext_ln1116_263_cast_fu_100681_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2426_fu_113006_p2() {
    mul_ln1118_2426_fu_113006_p2 = (!mul_ln1118_2426_fu_113006_p0.read().is_01() || !mul_ln1118_2426_fu_113006_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2426_fu_113006_p0.read()) * sc_bigint<32>(mul_ln1118_2426_fu_113006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2427_fu_113036_p0() {
    mul_ln1118_2427_fu_113036_p0 = tmp_2578_fu_113022_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2427_fu_113036_p1() {
    mul_ln1118_2427_fu_113036_p1 =  (sc_lv<32>) (sext_ln1116_264_cast_fu_100714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2427_fu_113036_p2() {
    mul_ln1118_2427_fu_113036_p2 = (!mul_ln1118_2427_fu_113036_p0.read().is_01() || !mul_ln1118_2427_fu_113036_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2427_fu_113036_p0.read()) * sc_bigint<32>(mul_ln1118_2427_fu_113036_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2428_fu_113066_p0() {
    mul_ln1118_2428_fu_113066_p0 = tmp_2579_fu_113052_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2428_fu_113066_p1() {
    mul_ln1118_2428_fu_113066_p1 =  (sc_lv<32>) (sext_ln1116_265_cast_fu_100747_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2428_fu_113066_p2() {
    mul_ln1118_2428_fu_113066_p2 = (!mul_ln1118_2428_fu_113066_p0.read().is_01() || !mul_ln1118_2428_fu_113066_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2428_fu_113066_p0.read()) * sc_bigint<32>(mul_ln1118_2428_fu_113066_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2429_fu_113096_p0() {
    mul_ln1118_2429_fu_113096_p0 = tmp_2580_fu_113082_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2429_fu_113096_p1() {
    mul_ln1118_2429_fu_113096_p1 =  (sc_lv<32>) (sext_ln1116_247_cast_fu_100039_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2429_fu_113096_p2() {
    mul_ln1118_2429_fu_113096_p2 = (!mul_ln1118_2429_fu_113096_p0.read().is_01() || !mul_ln1118_2429_fu_113096_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2429_fu_113096_p0.read()) * sc_bigint<32>(mul_ln1118_2429_fu_113096_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_242_fu_34034_p0() {
    mul_ln1118_242_fu_34034_p0 = tmp_279_fu_34020_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_242_fu_34034_p1() {
    mul_ln1118_242_fu_34034_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_242_fu_34034_p2() {
    mul_ln1118_242_fu_34034_p2 = (!mul_ln1118_242_fu_34034_p0.read().is_01() || !mul_ln1118_242_fu_34034_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_242_fu_34034_p0.read()) * sc_bigint<32>(mul_ln1118_242_fu_34034_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2430_fu_113126_p0() {
    mul_ln1118_2430_fu_113126_p0 = tmp_2581_fu_113112_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2430_fu_113126_p1() {
    mul_ln1118_2430_fu_113126_p1 =  (sc_lv<32>) (sext_ln1116_248_cast_fu_100072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2430_fu_113126_p2() {
    mul_ln1118_2430_fu_113126_p2 = (!mul_ln1118_2430_fu_113126_p0.read().is_01() || !mul_ln1118_2430_fu_113126_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_2430_fu_113126_p0.read()) * sc_bigint<32>(mul_ln1118_2430_fu_113126_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2431_fu_113156_p0() {
    mul_ln1118_2431_fu_113156_p0 = tmp_2582_fu_113142_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2431_fu_113156_p1() {
    mul_ln1118_2431_fu_113156_p1 =  (sc_lv<32>) (sext_ln1116_249_cast_fu_100105_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2431_fu_113156_p2() {
    mul_ln1118_2431_fu_113156_p2 = (!mul_ln1118_2431_fu_113156_p0.read().is_01() || !mul_ln1118_2431_fu_113156_p1.read().is_01())? sc_lv<39>(): sc_bigint<7>(mul_ln1118_2431_fu_113156_p0.read()) * sc_bigint<32>(mul_ln1118_2431_fu_113156_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_243_fu_34064_p0() {
    mul_ln1118_243_fu_34064_p0 = tmp_280_fu_34050_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_243_fu_34064_p1() {
    mul_ln1118_243_fu_34064_p1 =  (sc_lv<32>) (sext_ln1116_15_cast_fu_25840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_243_fu_34064_p2() {
    mul_ln1118_243_fu_34064_p2 = (!mul_ln1118_243_fu_34064_p0.read().is_01() || !mul_ln1118_243_fu_34064_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_243_fu_34064_p0.read()) * sc_bigint<32>(mul_ln1118_243_fu_34064_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_244_fu_34094_p0() {
    mul_ln1118_244_fu_34094_p0 = tmp_281_fu_34080_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_244_fu_34094_p1() {
    mul_ln1118_244_fu_34094_p1 =  (sc_lv<32>) (sext_ln1116_16_cast_fu_25873_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_244_fu_34094_p2() {
    mul_ln1118_244_fu_34094_p2 = (!mul_ln1118_244_fu_34094_p0.read().is_01() || !mul_ln1118_244_fu_34094_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_244_fu_34094_p0.read()) * sc_bigint<32>(mul_ln1118_244_fu_34094_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_245_fu_34124_p0() {
    mul_ln1118_245_fu_34124_p0 = tmp_282_fu_34110_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_245_fu_34124_p1() {
    mul_ln1118_245_fu_34124_p1 =  (sc_lv<32>) (sext_ln1116_17_cast_fu_25906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_245_fu_34124_p2() {
    mul_ln1118_245_fu_34124_p2 = (!mul_ln1118_245_fu_34124_p0.read().is_01() || !mul_ln1118_245_fu_34124_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_245_fu_34124_p0.read()) * sc_bigint<32>(mul_ln1118_245_fu_34124_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_246_fu_34154_p0() {
    mul_ln1118_246_fu_34154_p0 = tmp_283_fu_34140_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_246_fu_34154_p1() {
    mul_ln1118_246_fu_34154_p1 =  (sc_lv<32>) (sext_ln1116_18_cast_fu_25939_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_246_fu_34154_p2() {
    mul_ln1118_246_fu_34154_p2 = (!mul_ln1118_246_fu_34154_p0.read().is_01() || !mul_ln1118_246_fu_34154_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_246_fu_34154_p0.read()) * sc_bigint<32>(mul_ln1118_246_fu_34154_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_247_fu_34298_p0() {
    mul_ln1118_247_fu_34298_p0 = tmp_284_fu_34284_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_247_fu_34298_p1() {
    mul_ln1118_247_fu_34298_p1 =  (sc_lv<32>) (sext_ln1116_cast_fu_25345_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_247_fu_34298_p2() {
    mul_ln1118_247_fu_34298_p2 = (!mul_ln1118_247_fu_34298_p0.read().is_01() || !mul_ln1118_247_fu_34298_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_247_fu_34298_p0.read()) * sc_bigint<32>(mul_ln1118_247_fu_34298_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_248_fu_34328_p0() {
    mul_ln1118_248_fu_34328_p0 = tmp_285_fu_34314_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_248_fu_34328_p1() {
    mul_ln1118_248_fu_34328_p1 =  (sc_lv<32>) (sext_ln1116_1_cast_fu_25378_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_248_fu_34328_p2() {
    mul_ln1118_248_fu_34328_p2 = (!mul_ln1118_248_fu_34328_p0.read().is_01() || !mul_ln1118_248_fu_34328_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_248_fu_34328_p0.read()) * sc_bigint<32>(mul_ln1118_248_fu_34328_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_249_fu_34358_p0() {
    mul_ln1118_249_fu_34358_p0 = tmp_286_fu_34344_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_249_fu_34358_p1() {
    mul_ln1118_249_fu_34358_p1 =  (sc_lv<32>) (sext_ln1116_2_cast_fu_25411_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_249_fu_34358_p2() {
    mul_ln1118_249_fu_34358_p2 = (!mul_ln1118_249_fu_34358_p0.read().is_01() || !mul_ln1118_249_fu_34358_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_249_fu_34358_p0.read()) * sc_bigint<32>(mul_ln1118_249_fu_34358_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_24_fu_26240_p0() {
    mul_ln1118_24_fu_26240_p0 = tmp_43_fu_26226_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_24_fu_26240_p1() {
    mul_ln1118_24_fu_26240_p1 =  (sc_lv<32>) (sext_ln1116_5_cast_fu_25510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_24_fu_26240_p2() {
    mul_ln1118_24_fu_26240_p2 = (!mul_ln1118_24_fu_26240_p0.read().is_01() || !mul_ln1118_24_fu_26240_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_24_fu_26240_p0.read()) * sc_bigint<32>(mul_ln1118_24_fu_26240_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_250_fu_34388_p0() {
    mul_ln1118_250_fu_34388_p0 = tmp_287_fu_34374_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_250_fu_34388_p1() {
    mul_ln1118_250_fu_34388_p1 =  (sc_lv<32>) (sext_ln1116_3_cast_fu_25444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_250_fu_34388_p2() {
    mul_ln1118_250_fu_34388_p2 = (!mul_ln1118_250_fu_34388_p0.read().is_01() || !mul_ln1118_250_fu_34388_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_250_fu_34388_p0.read()) * sc_bigint<32>(mul_ln1118_250_fu_34388_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_251_fu_34418_p0() {
    mul_ln1118_251_fu_34418_p0 = tmp_288_fu_34404_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_251_fu_34418_p1() {
    mul_ln1118_251_fu_34418_p1 =  (sc_lv<32>) (sext_ln1116_4_cast_fu_25477_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_251_fu_34418_p2() {
    mul_ln1118_251_fu_34418_p2 = (!mul_ln1118_251_fu_34418_p0.read().is_01() || !mul_ln1118_251_fu_34418_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_251_fu_34418_p0.read()) * sc_bigint<32>(mul_ln1118_251_fu_34418_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_252_fu_34448_p0() {
    mul_ln1118_252_fu_34448_p0 = tmp_289_fu_34434_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_252_fu_34448_p1() {
    mul_ln1118_252_fu_34448_p1 =  (sc_lv<32>) (sext_ln1116_5_cast_fu_25510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_252_fu_34448_p2() {
    mul_ln1118_252_fu_34448_p2 = (!mul_ln1118_252_fu_34448_p0.read().is_01() || !mul_ln1118_252_fu_34448_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_252_fu_34448_p0.read()) * sc_bigint<32>(mul_ln1118_252_fu_34448_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_253_fu_34478_p0() {
    mul_ln1118_253_fu_34478_p0 = tmp_290_fu_34464_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_253_fu_34478_p1() {
    mul_ln1118_253_fu_34478_p1 =  (sc_lv<32>) (sext_ln1116_6_cast_fu_25543_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_253_fu_34478_p2() {
    mul_ln1118_253_fu_34478_p2 = (!mul_ln1118_253_fu_34478_p0.read().is_01() || !mul_ln1118_253_fu_34478_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_253_fu_34478_p0.read()) * sc_bigint<32>(mul_ln1118_253_fu_34478_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_254_fu_34508_p0() {
    mul_ln1118_254_fu_34508_p0 = tmp_291_fu_34494_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_254_fu_34508_p1() {
    mul_ln1118_254_fu_34508_p1 =  (sc_lv<32>) (sext_ln1116_7_cast_fu_25576_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_254_fu_34508_p2() {
    mul_ln1118_254_fu_34508_p2 = (!mul_ln1118_254_fu_34508_p0.read().is_01() || !mul_ln1118_254_fu_34508_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_254_fu_34508_p0.read()) * sc_bigint<32>(mul_ln1118_254_fu_34508_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_255_fu_34538_p0() {
    mul_ln1118_255_fu_34538_p0 = tmp_292_fu_34524_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_255_fu_34538_p1() {
    mul_ln1118_255_fu_34538_p1 =  (sc_lv<32>) (sext_ln1116_8_cast_fu_25609_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_255_fu_34538_p2() {
    mul_ln1118_255_fu_34538_p2 = (!mul_ln1118_255_fu_34538_p0.read().is_01() || !mul_ln1118_255_fu_34538_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_255_fu_34538_p0.read()) * sc_bigint<32>(mul_ln1118_255_fu_34538_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_256_fu_34568_p0() {
    mul_ln1118_256_fu_34568_p0 = tmp_293_fu_34554_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_256_fu_34568_p1() {
    mul_ln1118_256_fu_34568_p1 =  (sc_lv<32>) (sext_ln1116_9_cast_fu_25642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_256_fu_34568_p2() {
    mul_ln1118_256_fu_34568_p2 = (!mul_ln1118_256_fu_34568_p0.read().is_01() || !mul_ln1118_256_fu_34568_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_256_fu_34568_p0.read()) * sc_bigint<32>(mul_ln1118_256_fu_34568_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_257_fu_34598_p0() {
    mul_ln1118_257_fu_34598_p0 = tmp_294_fu_34584_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_257_fu_34598_p1() {
    mul_ln1118_257_fu_34598_p1 =  (sc_lv<32>) (sext_ln1116_10_cast_fu_25675_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_257_fu_34598_p2() {
    mul_ln1118_257_fu_34598_p2 = (!mul_ln1118_257_fu_34598_p0.read().is_01() || !mul_ln1118_257_fu_34598_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_257_fu_34598_p0.read()) * sc_bigint<32>(mul_ln1118_257_fu_34598_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_258_fu_34628_p0() {
    mul_ln1118_258_fu_34628_p0 = tmp_295_fu_34614_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_258_fu_34628_p1() {
    mul_ln1118_258_fu_34628_p1 =  (sc_lv<32>) (sext_ln1116_11_cast_fu_25708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_258_fu_34628_p2() {
    mul_ln1118_258_fu_34628_p2 = (!mul_ln1118_258_fu_34628_p0.read().is_01() || !mul_ln1118_258_fu_34628_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_258_fu_34628_p0.read()) * sc_bigint<32>(mul_ln1118_258_fu_34628_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_259_fu_34658_p0() {
    mul_ln1118_259_fu_34658_p0 = tmp_296_fu_34644_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_259_fu_34658_p1() {
    mul_ln1118_259_fu_34658_p1 =  (sc_lv<32>) (sext_ln1116_12_cast_fu_25741_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_259_fu_34658_p2() {
    mul_ln1118_259_fu_34658_p2 = (!mul_ln1118_259_fu_34658_p0.read().is_01() || !mul_ln1118_259_fu_34658_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_259_fu_34658_p0.read()) * sc_bigint<32>(mul_ln1118_259_fu_34658_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_25_fu_26270_p0() {
    mul_ln1118_25_fu_26270_p0 = tmp_44_fu_26256_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_25_fu_26270_p1() {
    mul_ln1118_25_fu_26270_p1 =  (sc_lv<32>) (sext_ln1116_6_cast_fu_25543_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_25_fu_26270_p2() {
    mul_ln1118_25_fu_26270_p2 = (!mul_ln1118_25_fu_26270_p0.read().is_01() || !mul_ln1118_25_fu_26270_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_25_fu_26270_p0.read()) * sc_bigint<32>(mul_ln1118_25_fu_26270_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_260_fu_34688_p0() {
    mul_ln1118_260_fu_34688_p0 = tmp_297_fu_34674_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_260_fu_34688_p1() {
    mul_ln1118_260_fu_34688_p1 =  (sc_lv<32>) (sext_ln1116_13_cast_fu_25774_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_260_fu_34688_p2() {
    mul_ln1118_260_fu_34688_p2 = (!mul_ln1118_260_fu_34688_p0.read().is_01() || !mul_ln1118_260_fu_34688_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_260_fu_34688_p0.read()) * sc_bigint<32>(mul_ln1118_260_fu_34688_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_261_fu_34718_p0() {
    mul_ln1118_261_fu_34718_p0 = tmp_298_fu_34704_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_261_fu_34718_p1() {
    mul_ln1118_261_fu_34718_p1 =  (sc_lv<32>) (sext_ln1116_14_cast_fu_25807_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_261_fu_34718_p2() {
    mul_ln1118_261_fu_34718_p2 = (!mul_ln1118_261_fu_34718_p0.read().is_01() || !mul_ln1118_261_fu_34718_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_261_fu_34718_p0.read()) * sc_bigint<32>(mul_ln1118_261_fu_34718_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_262_fu_34748_p0() {
    mul_ln1118_262_fu_34748_p0 = tmp_299_fu_34734_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_262_fu_34748_p1() {
    mul_ln1118_262_fu_34748_p1 =  (sc_lv<32>) (sext_ln1116_15_cast_fu_25840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_262_fu_34748_p2() {
    mul_ln1118_262_fu_34748_p2 = (!mul_ln1118_262_fu_34748_p0.read().is_01() || !mul_ln1118_262_fu_34748_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_262_fu_34748_p0.read()) * sc_bigint<32>(mul_ln1118_262_fu_34748_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_263_fu_34778_p0() {
    mul_ln1118_263_fu_34778_p0 = tmp_300_fu_34764_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_263_fu_34778_p1() {
    mul_ln1118_263_fu_34778_p1 =  (sc_lv<32>) (sext_ln1116_16_cast_fu_25873_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_263_fu_34778_p2() {
    mul_ln1118_263_fu_34778_p2 = (!mul_ln1118_263_fu_34778_p0.read().is_01() || !mul_ln1118_263_fu_34778_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_263_fu_34778_p0.read()) * sc_bigint<32>(mul_ln1118_263_fu_34778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_264_fu_34808_p0() {
    mul_ln1118_264_fu_34808_p0 = tmp_301_fu_34794_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_264_fu_34808_p1() {
    mul_ln1118_264_fu_34808_p1 =  (sc_lv<32>) (sext_ln1116_17_cast_fu_25906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_264_fu_34808_p2() {
    mul_ln1118_264_fu_34808_p2 = (!mul_ln1118_264_fu_34808_p0.read().is_01() || !mul_ln1118_264_fu_34808_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_264_fu_34808_p0.read()) * sc_bigint<32>(mul_ln1118_264_fu_34808_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_265_fu_34838_p0() {
    mul_ln1118_265_fu_34838_p0 = tmp_302_fu_34824_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_265_fu_34838_p1() {
    mul_ln1118_265_fu_34838_p1 =  (sc_lv<32>) (sext_ln1116_18_cast_fu_25939_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_265_fu_34838_p2() {
    mul_ln1118_265_fu_34838_p2 = (!mul_ln1118_265_fu_34838_p0.read().is_01() || !mul_ln1118_265_fu_34838_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_265_fu_34838_p0.read()) * sc_bigint<32>(mul_ln1118_265_fu_34838_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_266_fu_34982_p0() {
    mul_ln1118_266_fu_34982_p0 = tmp_303_fu_34968_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_266_fu_34982_p1() {
    mul_ln1118_266_fu_34982_p1 =  (sc_lv<32>) (sext_ln1116_cast_fu_25345_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_266_fu_34982_p2() {
    mul_ln1118_266_fu_34982_p2 = (!mul_ln1118_266_fu_34982_p0.read().is_01() || !mul_ln1118_266_fu_34982_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(mul_ln1118_266_fu_34982_p0.read()) * sc_bigint<32>(mul_ln1118_266_fu_34982_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_267_fu_35012_p0() {
    mul_ln1118_267_fu_35012_p0 = tmp_304_fu_34998_p4.read();
}

}


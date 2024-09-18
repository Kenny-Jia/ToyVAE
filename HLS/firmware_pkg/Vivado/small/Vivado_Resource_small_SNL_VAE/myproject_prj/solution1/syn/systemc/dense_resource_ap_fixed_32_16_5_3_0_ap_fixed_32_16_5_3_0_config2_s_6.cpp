#include "dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1510_fu_47670_p1() {
    mul_ln1118_1510_fu_47670_p1 =  (sc_lv<32>) (sext_ln1118_387_fu_7118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1510_fu_47670_p2() {
    mul_ln1118_1510_fu_47670_p2 = (!ap_const_lv44_746.is_01() || !mul_ln1118_1510_fu_47670_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_746) * sc_bigint<32>(mul_ln1118_1510_fu_47670_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1511_fu_48140_p1() {
    mul_ln1118_1511_fu_48140_p1 =  (sc_lv<32>) (sext_ln1118_1_fu_3922_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1511_fu_48140_p2() {
    mul_ln1118_1511_fu_48140_p2 = (!ap_const_lv43_7FFFFFFFCFC.is_01() || !mul_ln1118_1511_fu_48140_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCFC) * sc_bigint<32>(mul_ln1118_1511_fu_48140_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1512_fu_48160_p1() {
    mul_ln1118_1512_fu_48160_p1 = tmp_1_fu_3966_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1512_fu_48160_p2() {
    mul_ln1118_1512_fu_48160_p2 = (!ap_const_lv44_FFFFFFFFAA0.is_01() || !mul_ln1118_1512_fu_48160_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFAA0) * sc_bigint<32>(mul_ln1118_1512_fu_48160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1513_fu_48180_p1() {
    mul_ln1118_1513_fu_48180_p1 =  (sc_lv<32>) (sext_ln1118_18_fu_4050_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1513_fu_48180_p2() {
    mul_ln1118_1513_fu_48180_p2 = (!ap_const_lv44_FFFFFFFF899.is_01() || !mul_ln1118_1513_fu_48180_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF899) * sc_bigint<32>(mul_ln1118_1513_fu_48180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1514_fu_48200_p1() {
    mul_ln1118_1514_fu_48200_p1 =  (sc_lv<32>) (sext_ln1118_23_fu_4100_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1514_fu_48200_p2() {
    mul_ln1118_1514_fu_48200_p2 = (!ap_const_lv44_490.is_01() || !mul_ln1118_1514_fu_48200_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_490) * sc_bigint<32>(mul_ln1118_1514_fu_48200_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1515_fu_48220_p1() {
    mul_ln1118_1515_fu_48220_p1 =  (sc_lv<32>) (sext_ln1118_34_fu_4174_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1515_fu_48220_p2() {
    mul_ln1118_1515_fu_48220_p2 = (!ap_const_lv44_78B.is_01() || !mul_ln1118_1515_fu_48220_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_78B) * sc_bigint<32>(mul_ln1118_1515_fu_48220_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1516_fu_48240_p1() {
    mul_ln1118_1516_fu_48240_p1 =  (sc_lv<32>) (sext_ln1118_44_fu_4244_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1516_fu_48240_p2() {
    mul_ln1118_1516_fu_48240_p2 = (!ap_const_lv46_3FFFFFFFEA48.is_01() || !mul_ln1118_1516_fu_48240_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEA48) * sc_bigint<32>(mul_ln1118_1516_fu_48240_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1517_fu_48260_p1() {
    mul_ln1118_1517_fu_48260_p1 =  (sc_lv<32>) (sext_ln1118_52_fu_4306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1517_fu_48260_p2() {
    mul_ln1118_1517_fu_48260_p2 = (!ap_const_lv48_FFFFFFFF4780.is_01() || !mul_ln1118_1517_fu_48260_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF4780) * sc_bigint<32>(mul_ln1118_1517_fu_48260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1518_fu_48276_p1() {
    mul_ln1118_1518_fu_48276_p1 =  (sc_lv<32>) (sext_ln1118_58_fu_4360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1518_fu_48276_p2() {
    mul_ln1118_1518_fu_48276_p2 = (!ap_const_lv43_7FFFFFFFCC6.is_01() || !mul_ln1118_1518_fu_48276_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCC6) * sc_bigint<32>(mul_ln1118_1518_fu_48276_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1519_fu_48296_p1() {
    mul_ln1118_1519_fu_48296_p1 =  (sc_lv<32>) (sext_ln1118_65_fu_4418_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1519_fu_48296_p2() {
    mul_ln1118_1519_fu_48296_p2 = (!ap_const_lv43_7FFFFFFFDD6.is_01() || !mul_ln1118_1519_fu_48296_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFDD6) * sc_bigint<32>(mul_ln1118_1519_fu_48296_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_151_fu_9942_p1() {
    mul_ln1118_151_fu_9942_p1 =  (sc_lv<32>) (sext_ln1118_286_fu_6260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_151_fu_9942_p2() {
    mul_ln1118_151_fu_9942_p2 = (!ap_const_lv44_FFFFFFFFA17.is_01() || !mul_ln1118_151_fu_9942_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA17) * sc_bigint<32>(mul_ln1118_151_fu_9942_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1520_fu_48316_p1() {
    mul_ln1118_1520_fu_48316_p1 =  (sc_lv<32>) (sext_ln1118_69_fu_4464_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1520_fu_48316_p2() {
    mul_ln1118_1520_fu_48316_p2 = (!ap_const_lv47_2F47.is_01() || !mul_ln1118_1520_fu_48316_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2F47) * sc_bigint<32>(mul_ln1118_1520_fu_48316_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1521_fu_48336_p1() {
    mul_ln1118_1521_fu_48336_p1 =  (sc_lv<32>) (sext_ln1118_75_fu_4518_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1521_fu_48336_p2() {
    mul_ln1118_1521_fu_48336_p2 = (!ap_const_lv47_3CD6.is_01() || !mul_ln1118_1521_fu_48336_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3CD6) * sc_bigint<32>(mul_ln1118_1521_fu_48336_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1522_fu_48356_p1() {
    mul_ln1118_1522_fu_48356_p1 =  (sc_lv<32>) (sext_ln1118_86_fu_4592_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1522_fu_48356_p2() {
    mul_ln1118_1522_fu_48356_p2 = (!ap_const_lv47_310E.is_01() || !mul_ln1118_1522_fu_48356_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_310E) * sc_bigint<32>(mul_ln1118_1522_fu_48356_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1523_fu_48376_p1() {
    mul_ln1118_1523_fu_48376_p1 = tmp_11_fu_4620_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1523_fu_48376_p2() {
    mul_ln1118_1523_fu_48376_p2 = (!ap_const_lv44_FFFFFFFFB82.is_01() || !mul_ln1118_1523_fu_48376_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFB82) * sc_bigint<32>(mul_ln1118_1523_fu_48376_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1524_fu_48396_p1() {
    mul_ln1118_1524_fu_48396_p1 = tmp_12_fu_4674_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1524_fu_48396_p2() {
    mul_ln1118_1524_fu_48396_p2 = (!ap_const_lv42_3FFFFFFFEFA.is_01() || !mul_ln1118_1524_fu_48396_p1.read().is_01())? sc_lv<42>(): sc_bigint<42>(ap_const_lv42_3FFFFFFFEFA) * sc_bigint<32>(mul_ln1118_1524_fu_48396_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1525_fu_48416_p1() {
    mul_ln1118_1525_fu_48416_p1 =  (sc_lv<32>) (sext_ln1118_107_fu_4766_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1525_fu_48416_p2() {
    mul_ln1118_1525_fu_48416_p2 = (!ap_const_lv47_344D.is_01() || !mul_ln1118_1525_fu_48416_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_344D) * sc_bigint<32>(mul_ln1118_1525_fu_48416_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1526_fu_48436_p1() {
    mul_ln1118_1526_fu_48436_p1 =  (sc_lv<32>) (sext_ln1118_115_fu_4828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1526_fu_48436_p2() {
    mul_ln1118_1526_fu_48436_p2 = (!ap_const_lv44_FFFFFFFF8E6.is_01() || !mul_ln1118_1526_fu_48436_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8E6) * sc_bigint<32>(mul_ln1118_1526_fu_48436_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1527_fu_48500_p1() {
    mul_ln1118_1527_fu_48500_p1 =  (sc_lv<32>) (sext_ln1118_128_fu_4940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1527_fu_48500_p2() {
    mul_ln1118_1527_fu_48500_p2 = (!ap_const_lv46_3FFFFFFFE062.is_01() || !mul_ln1118_1527_fu_48500_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE062) * sc_bigint<32>(mul_ln1118_1527_fu_48500_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1528_fu_48520_p1() {
    mul_ln1118_1528_fu_48520_p1 =  (sc_lv<32>) (sext_ln1118_132_fu_4986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1528_fu_48520_p2() {
    mul_ln1118_1528_fu_48520_p2 = (!ap_const_lv48_BB42.is_01() || !mul_ln1118_1528_fu_48520_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_BB42) * sc_bigint<32>(mul_ln1118_1528_fu_48520_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1529_fu_48536_p1() {
    mul_ln1118_1529_fu_48536_p1 =  (sc_lv<32>) (sext_ln1118_139_fu_5040_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1529_fu_48536_p2() {
    mul_ln1118_1529_fu_48536_p2 = (!ap_const_lv47_304B.is_01() || !mul_ln1118_1529_fu_48536_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_304B) * sc_bigint<32>(mul_ln1118_1529_fu_48536_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_152_fu_9962_p1() {
    mul_ln1118_152_fu_9962_p1 =  (sc_lv<32>) (sext_ln1118_291_fu_6310_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_152_fu_9962_p2() {
    mul_ln1118_152_fu_9962_p2 = (!ap_const_lv47_3C5A.is_01() || !mul_ln1118_152_fu_9962_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3C5A) * sc_bigint<32>(mul_ln1118_152_fu_9962_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1530_fu_48556_p1() {
    mul_ln1118_1530_fu_48556_p1 =  (sc_lv<32>) (sext_ln1118_147_fu_5102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1530_fu_48556_p2() {
    mul_ln1118_1530_fu_48556_p2 = (!ap_const_lv44_44C.is_01() || !mul_ln1118_1530_fu_48556_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_44C) * sc_bigint<32>(mul_ln1118_1530_fu_48556_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1531_fu_48576_p1() {
    mul_ln1118_1531_fu_48576_p1 = tmp_20_fu_5142_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1531_fu_48576_p2() {
    mul_ln1118_1531_fu_48576_p2 = (!ap_const_lv41_D3.is_01() || !mul_ln1118_1531_fu_48576_p1.read().is_01())? sc_lv<41>(): sc_biguint<41>(ap_const_lv41_D3) * sc_bigint<32>(mul_ln1118_1531_fu_48576_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1532_fu_48596_p1() {
    mul_ln1118_1532_fu_48596_p1 =  (sc_lv<32>) (sext_ln1118_160_fu_5214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1532_fu_48596_p2() {
    mul_ln1118_1532_fu_48596_p2 = (!ap_const_lv48_510A.is_01() || !mul_ln1118_1532_fu_48596_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_510A) * sc_bigint<32>(mul_ln1118_1532_fu_48596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1533_fu_48612_p1() {
    mul_ln1118_1533_fu_48612_p1 =  (sc_lv<32>) (sext_ln1118_171_fu_5288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1533_fu_48612_p2() {
    mul_ln1118_1533_fu_48612_p2 = (!ap_const_lv48_66C3.is_01() || !mul_ln1118_1533_fu_48612_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_66C3) * sc_bigint<32>(mul_ln1118_1533_fu_48612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1534_fu_48628_p1() {
    mul_ln1118_1534_fu_48628_p1 =  (sc_lv<32>) (sext_ln1118_174_fu_5330_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1534_fu_48628_p2() {
    mul_ln1118_1534_fu_48628_p2 = (!ap_const_lv47_7FFFFFFFD515.is_01() || !mul_ln1118_1534_fu_48628_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD515) * sc_bigint<32>(mul_ln1118_1534_fu_48628_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1535_fu_48648_p1() {
    mul_ln1118_1535_fu_48648_p1 = tmp_24_fu_5362_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1535_fu_48648_p2() {
    mul_ln1118_1535_fu_48648_p2 = (!ap_const_lv42_150.is_01() || !mul_ln1118_1535_fu_48648_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_150) * sc_bigint<32>(mul_ln1118_1535_fu_48648_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1536_fu_48668_p1() {
    mul_ln1118_1536_fu_48668_p1 =  (sc_lv<32>) (sext_ln1118_187_fu_5438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1536_fu_48668_p2() {
    mul_ln1118_1536_fu_48668_p2 = (!ap_const_lv47_318D.is_01() || !mul_ln1118_1536_fu_48668_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_318D) * sc_bigint<32>(mul_ln1118_1536_fu_48668_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1537_fu_48688_p1() {
    mul_ln1118_1537_fu_48688_p1 =  (sc_lv<32>) (sext_ln1118_192_fu_5488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1537_fu_48688_p2() {
    mul_ln1118_1537_fu_48688_p2 = (!ap_const_lv43_316.is_01() || !mul_ln1118_1537_fu_48688_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_316) * sc_bigint<32>(mul_ln1118_1537_fu_48688_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1538_fu_48708_p1() {
    mul_ln1118_1538_fu_48708_p1 =  (sc_lv<32>) (sext_ln1118_198_fu_5542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1538_fu_48708_p2() {
    mul_ln1118_1538_fu_48708_p2 = (!ap_const_lv42_11C.is_01() || !mul_ln1118_1538_fu_48708_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_11C) * sc_bigint<32>(mul_ln1118_1538_fu_48708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1539_fu_48728_p1() {
    mul_ln1118_1539_fu_48728_p1 =  (sc_lv<32>) (sext_ln1118_208_fu_5612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1539_fu_48728_p2() {
    mul_ln1118_1539_fu_48728_p2 = (!ap_const_lv46_15C0.is_01() || !mul_ln1118_1539_fu_48728_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_15C0) * sc_bigint<32>(mul_ln1118_1539_fu_48728_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_153_fu_9982_p1() {
    mul_ln1118_153_fu_9982_p1 =  (sc_lv<32>) (sext_ln1118_296_fu_6356_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_153_fu_9982_p2() {
    mul_ln1118_153_fu_9982_p2 = (!ap_const_lv44_51C.is_01() || !mul_ln1118_153_fu_9982_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_51C) * sc_bigint<32>(mul_ln1118_153_fu_9982_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1540_fu_48748_p1() {
    mul_ln1118_1540_fu_48748_p1 =  (sc_lv<32>) (sext_ln1118_217_fu_5678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1540_fu_48748_p2() {
    mul_ln1118_1540_fu_48748_p2 = (!ap_const_lv45_BFA.is_01() || !mul_ln1118_1540_fu_48748_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_BFA) * sc_bigint<32>(mul_ln1118_1540_fu_48748_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1541_fu_48768_p1() {
    mul_ln1118_1541_fu_48768_p1 =  (sc_lv<32>) (sext_ln1118_220_fu_5720_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1541_fu_48768_p2() {
    mul_ln1118_1541_fu_48768_p2 = (!ap_const_lv45_1FFFFFFFF512.is_01() || !mul_ln1118_1541_fu_48768_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF512) * sc_bigint<32>(mul_ln1118_1541_fu_48768_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1542_fu_48788_p1() {
    mul_ln1118_1542_fu_48788_p1 =  (sc_lv<32>) (sext_ln1118_229_fu_5786_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1542_fu_48788_p2() {
    mul_ln1118_1542_fu_48788_p2 = (!ap_const_lv47_3F69.is_01() || !mul_ln1118_1542_fu_48788_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3F69) * sc_bigint<32>(mul_ln1118_1542_fu_48788_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1543_fu_48808_p1() {
    mul_ln1118_1543_fu_48808_p1 =  (sc_lv<32>) (sext_ln1118_236_fu_5840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1543_fu_48808_p2() {
    mul_ln1118_1543_fu_48808_p2 = (!ap_const_lv45_98A.is_01() || !mul_ln1118_1543_fu_48808_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_98A) * sc_bigint<32>(mul_ln1118_1543_fu_48808_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1544_fu_48828_p1() {
    mul_ln1118_1544_fu_48828_p1 =  (sc_lv<32>) (sext_ln1118_241_fu_5886_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1544_fu_48828_p2() {
    mul_ln1118_1544_fu_48828_p2 = (!ap_const_lv48_53A1.is_01() || !mul_ln1118_1544_fu_48828_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_53A1) * sc_bigint<32>(mul_ln1118_1544_fu_48828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1545_fu_48844_p1() {
    mul_ln1118_1545_fu_48844_p1 =  (sc_lv<32>) (sext_ln1118_253_fu_5960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1545_fu_48844_p2() {
    mul_ln1118_1545_fu_48844_p2 = (!ap_const_lv47_25C3.is_01() || !mul_ln1118_1545_fu_48844_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_25C3) * sc_bigint<32>(mul_ln1118_1545_fu_48844_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1546_fu_48864_p1() {
    mul_ln1118_1546_fu_48864_p1 =  (sc_lv<32>) (sext_ln1118_257_fu_6006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1546_fu_48864_p2() {
    mul_ln1118_1546_fu_48864_p2 = (!ap_const_lv48_FFFFFFFFA9ED.is_01() || !mul_ln1118_1546_fu_48864_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFA9ED) * sc_bigint<32>(mul_ln1118_1546_fu_48864_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1547_fu_48880_p1() {
    mul_ln1118_1547_fu_48880_p1 =  (sc_lv<32>) (sext_ln1118_262_fu_6052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1547_fu_48880_p2() {
    mul_ln1118_1547_fu_48880_p2 = (!ap_const_lv47_313A.is_01() || !mul_ln1118_1547_fu_48880_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_313A) * sc_bigint<32>(mul_ln1118_1547_fu_48880_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1548_fu_48900_p1() {
    mul_ln1118_1548_fu_48900_p1 =  (sc_lv<32>) (sext_ln1118_266_fu_6094_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1548_fu_48900_p2() {
    mul_ln1118_1548_fu_48900_p2 = (!ap_const_lv46_10AE.is_01() || !mul_ln1118_1548_fu_48900_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_10AE) * sc_bigint<32>(mul_ln1118_1548_fu_48900_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1549_fu_48920_p1() {
    mul_ln1118_1549_fu_48920_p1 =  (sc_lv<32>) (sext_ln1118_273_fu_6152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1549_fu_48920_p2() {
    mul_ln1118_1549_fu_48920_p2 = (!ap_const_lv48_FFFFFFFFBCEE.is_01() || !mul_ln1118_1549_fu_48920_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBCEE) * sc_bigint<32>(mul_ln1118_1549_fu_48920_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_154_fu_10002_p1() {
    mul_ln1118_154_fu_10002_p1 =  (sc_lv<32>) (sext_ln1118_307_fu_6430_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_154_fu_10002_p2() {
    mul_ln1118_154_fu_10002_p2 = (!ap_const_lv44_FFFFFFFF9B3.is_01() || !mul_ln1118_154_fu_10002_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF9B3) * sc_bigint<32>(mul_ln1118_154_fu_10002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1550_fu_48936_p1() {
    mul_ln1118_1550_fu_48936_p1 =  (sc_lv<32>) (sext_ln1118_282_fu_6214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1550_fu_48936_p2() {
    mul_ln1118_1550_fu_48936_p2 = (!ap_const_lv45_8C5.is_01() || !mul_ln1118_1550_fu_48936_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_8C5) * sc_bigint<32>(mul_ln1118_1550_fu_48936_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1551_fu_48956_p1() {
    mul_ln1118_1551_fu_48956_p1 =  (sc_lv<32>) (sext_ln1118_287_fu_6264_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1551_fu_48956_p2() {
    mul_ln1118_1551_fu_48956_p2 = (!ap_const_lv45_88C.is_01() || !mul_ln1118_1551_fu_48956_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_88C) * sc_bigint<32>(mul_ln1118_1551_fu_48956_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1552_fu_48976_p1() {
    mul_ln1118_1552_fu_48976_p1 =  (sc_lv<32>) (sext_ln1118_291_fu_6310_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1552_fu_48976_p2() {
    mul_ln1118_1552_fu_48976_p2 = (!ap_const_lv47_7FFFFFFFD3BB.is_01() || !mul_ln1118_1552_fu_48976_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD3BB) * sc_bigint<32>(mul_ln1118_1552_fu_48976_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1553_fu_48996_p1() {
    mul_ln1118_1553_fu_48996_p1 =  (sc_lv<32>) (sext_ln1118_300_fu_6372_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1553_fu_48996_p2() {
    mul_ln1118_1553_fu_48996_p2 = (!ap_const_lv46_134A.is_01() || !mul_ln1118_1553_fu_48996_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_134A) * sc_bigint<32>(mul_ln1118_1553_fu_48996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1554_fu_49016_p1() {
    mul_ln1118_1554_fu_49016_p1 =  (sc_lv<32>) (sext_ln1118_306_fu_6426_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1554_fu_49016_p2() {
    mul_ln1118_1554_fu_49016_p2 = (!ap_const_lv45_8B7.is_01() || !mul_ln1118_1554_fu_49016_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_8B7) * sc_bigint<32>(mul_ln1118_1554_fu_49016_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1555_fu_49036_p1() {
    mul_ln1118_1555_fu_49036_p1 =  (sc_lv<32>) (sext_ln1118_315_fu_6492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1555_fu_49036_p2() {
    mul_ln1118_1555_fu_49036_p2 = (!ap_const_lv48_FFFFFFFF7731.is_01() || !mul_ln1118_1555_fu_49036_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF7731) * sc_bigint<32>(mul_ln1118_1555_fu_49036_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1556_fu_49052_p1() {
    mul_ln1118_1556_fu_49052_p1 =  (sc_lv<32>) (sext_ln1118_320_fu_6538_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1556_fu_49052_p2() {
    mul_ln1118_1556_fu_49052_p2 = (!ap_const_lv46_18D9.is_01() || !mul_ln1118_1556_fu_49052_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_18D9) * sc_bigint<32>(mul_ln1118_1556_fu_49052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1557_fu_49072_p1() {
    mul_ln1118_1557_fu_49072_p1 =  (sc_lv<32>) (sext_ln1118_328_fu_6600_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1557_fu_49072_p2() {
    mul_ln1118_1557_fu_49072_p2 = (!ap_const_lv42_145.is_01() || !mul_ln1118_1557_fu_49072_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_145) * sc_bigint<32>(mul_ln1118_1557_fu_49072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1558_fu_49092_p1() {
    mul_ln1118_1558_fu_49092_p1 =  (sc_lv<32>) (sext_ln1118_339_fu_6690_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1558_fu_49092_p2() {
    mul_ln1118_1558_fu_49092_p2 = (!ap_const_lv47_7FFFFFFFDF38.is_01() || !mul_ln1118_1558_fu_49092_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDF38) * sc_bigint<32>(mul_ln1118_1558_fu_49092_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1559_fu_49112_p1() {
    mul_ln1118_1559_fu_49112_p1 =  (sc_lv<32>) (sext_ln1118_343_fu_6736_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1559_fu_49112_p2() {
    mul_ln1118_1559_fu_49112_p2 = (!ap_const_lv44_FFFFFFFF81C.is_01() || !mul_ln1118_1559_fu_49112_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF81C) * sc_bigint<32>(mul_ln1118_1559_fu_49112_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_155_fu_10022_p1() {
    mul_ln1118_155_fu_10022_p1 =  (sc_lv<32>) (sext_ln1118_314_fu_6488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_155_fu_10022_p2() {
    mul_ln1118_155_fu_10022_p2 = (!ap_const_lv46_3FFFFFFFE3FD.is_01() || !mul_ln1118_155_fu_10022_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE3FD) * sc_bigint<32>(mul_ln1118_155_fu_10022_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1560_fu_49132_p1() {
    mul_ln1118_1560_fu_49132_p1 =  (sc_lv<32>) (sext_ln1118_353_fu_6806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1560_fu_49132_p2() {
    mul_ln1118_1560_fu_49132_p2 = (!ap_const_lv46_1556.is_01() || !mul_ln1118_1560_fu_49132_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1556) * sc_bigint<32>(mul_ln1118_1560_fu_49132_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1561_fu_49152_p1() {
    mul_ln1118_1561_fu_49152_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1561_fu_49152_p2() {
    mul_ln1118_1561_fu_49152_p2 = (!ap_const_lv48_FFFFFFFF80CF.is_01() || !mul_ln1118_1561_fu_49152_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF80CF) * sc_bigint<32>(mul_ln1118_1561_fu_49152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1562_fu_49168_p1() {
    mul_ln1118_1562_fu_49168_p1 =  (sc_lv<32>) (sext_ln1118_364_fu_6910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1562_fu_49168_p2() {
    mul_ln1118_1562_fu_49168_p2 = (!ap_const_lv47_7FFFFFFFD435.is_01() || !mul_ln1118_1562_fu_49168_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD435) * sc_bigint<32>(mul_ln1118_1562_fu_49168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1563_fu_49188_p1() {
    mul_ln1118_1563_fu_49188_p1 =  (sc_lv<32>) (sext_ln1118_369_fu_6960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1563_fu_49188_p2() {
    mul_ln1118_1563_fu_49188_p2 = (!ap_const_lv47_7FFFFFFFC9A1.is_01() || !mul_ln1118_1563_fu_49188_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC9A1) * sc_bigint<32>(mul_ln1118_1563_fu_49188_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1564_fu_49208_p1() {
    mul_ln1118_1564_fu_49208_p1 =  (sc_lv<32>) (sext_ln1118_373_fu_7006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1564_fu_49208_p2() {
    mul_ln1118_1564_fu_49208_p2 = (!ap_const_lv48_FFFFFFFFB978.is_01() || !mul_ln1118_1564_fu_49208_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB978) * sc_bigint<32>(mul_ln1118_1564_fu_49208_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1565_fu_49224_p1() {
    mul_ln1118_1565_fu_49224_p1 =  (sc_lv<32>) (sext_ln1118_378_fu_7052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1565_fu_49224_p2() {
    mul_ln1118_1565_fu_49224_p2 = (!ap_const_lv46_1B53.is_01() || !mul_ln1118_1565_fu_49224_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1B53) * sc_bigint<32>(mul_ln1118_1565_fu_49224_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1566_fu_49244_p1() {
    mul_ln1118_1566_fu_49244_p1 = tmp_55_fu_7088_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1566_fu_49244_p2() {
    mul_ln1118_1566_fu_49244_p2 = (!ap_const_lv43_358.is_01() || !mul_ln1118_1566_fu_49244_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_358) * sc_bigint<32>(mul_ln1118_1566_fu_49244_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1567_fu_49694_p1() {
    mul_ln1118_1567_fu_49694_p1 =  (sc_lv<32>) (sext_ln1118_1_fu_3922_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1567_fu_49694_p2() {
    mul_ln1118_1567_fu_49694_p2 = (!ap_const_lv43_7FFFFFFFCFE.is_01() || !mul_ln1118_1567_fu_49694_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCFE) * sc_bigint<32>(mul_ln1118_1567_fu_49694_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1568_fu_49714_p1() {
    mul_ln1118_1568_fu_49714_p1 =  (sc_lv<32>) (sext_ln1118_10_fu_3988_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1568_fu_49714_p2() {
    mul_ln1118_1568_fu_49714_p2 = (!ap_const_lv48_52F0.is_01() || !mul_ln1118_1568_fu_49714_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_52F0) * sc_bigint<32>(mul_ln1118_1568_fu_49714_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1569_fu_49730_p1() {
    mul_ln1118_1569_fu_49730_p1 =  (sc_lv<32>) (sext_ln1118_16_fu_4042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1569_fu_49730_p2() {
    mul_ln1118_1569_fu_49730_p2 = (!ap_const_lv45_1FFFFFFFF7CE.is_01() || !mul_ln1118_1569_fu_49730_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF7CE) * sc_bigint<32>(mul_ln1118_1569_fu_49730_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_156_fu_10042_p1() {
    mul_ln1118_156_fu_10042_p1 =  (sc_lv<32>) (sext_ln1118_317_fu_6526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_156_fu_10042_p2() {
    mul_ln1118_156_fu_10042_p2 = (!ap_const_lv48_4139.is_01() || !mul_ln1118_156_fu_10042_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_4139) * sc_bigint<32>(mul_ln1118_156_fu_10042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1570_fu_49750_p1() {
    mul_ln1118_1570_fu_49750_p1 = tmp_3_fu_4082_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1570_fu_49750_p2() {
    mul_ln1118_1570_fu_49750_p2 = (!ap_const_lv39_7FFFFFFFD6.is_01() || !mul_ln1118_1570_fu_49750_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ap_const_lv39_7FFFFFFFD6) * sc_bigint<32>(mul_ln1118_1570_fu_49750_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1571_fu_49770_p1() {
    mul_ln1118_1571_fu_49770_p1 = tmp_4_fu_4144_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1571_fu_49770_p2() {
    mul_ln1118_1571_fu_49770_p2 = (!ap_const_lv41_1FFFFFFFF5F.is_01() || !mul_ln1118_1571_fu_49770_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF5F) * sc_bigint<32>(mul_ln1118_1571_fu_49770_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1572_fu_49790_p1() {
    mul_ln1118_1572_fu_49790_p1 = tmp_5_fu_4210_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1572_fu_49790_p2() {
    mul_ln1118_1572_fu_49790_p2 = (!ap_const_lv39_2B.is_01() || !mul_ln1118_1572_fu_49790_p1.read().is_01())? sc_lv<39>(): sc_biguint<39>(ap_const_lv39_2B) * sc_bigint<32>(mul_ln1118_1572_fu_49790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1573_fu_49810_p1() {
    mul_ln1118_1573_fu_49810_p1 =  (sc_lv<32>) (sext_ln1118_50_fu_4298_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1573_fu_49810_p2() {
    mul_ln1118_1573_fu_49810_p2 = (!ap_const_lv47_7FFFFFFFC247.is_01() || !mul_ln1118_1573_fu_49810_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC247) * sc_bigint<32>(mul_ln1118_1573_fu_49810_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1574_fu_49830_p1() {
    mul_ln1118_1574_fu_49830_p1 =  (sc_lv<32>) (sext_ln1118_59_fu_4364_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1574_fu_49830_p2() {
    mul_ln1118_1574_fu_49830_p2 = (!ap_const_lv47_7FFFFFFFDAD9.is_01() || !mul_ln1118_1574_fu_49830_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDAD9) * sc_bigint<32>(mul_ln1118_1574_fu_49830_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1575_fu_49850_p1() {
    mul_ln1118_1575_fu_49850_p1 =  (sc_lv<32>) (sext_ln1118_63_fu_4410_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1575_fu_49850_p2() {
    mul_ln1118_1575_fu_49850_p2 = (!ap_const_lv46_3FFFFFFFE63E.is_01() || !mul_ln1118_1575_fu_49850_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE63E) * sc_bigint<32>(mul_ln1118_1575_fu_49850_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1576_fu_49870_p1() {
    mul_ln1118_1576_fu_49870_p1 =  (sc_lv<32>) (sext_ln1118_70_fu_4468_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1576_fu_49870_p2() {
    mul_ln1118_1576_fu_49870_p2 = (!ap_const_lv44_78C.is_01() || !mul_ln1118_1576_fu_49870_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_78C) * sc_bigint<32>(mul_ln1118_1576_fu_49870_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1577_fu_49890_p1() {
    mul_ln1118_1577_fu_49890_p1 =  (sc_lv<32>) (sext_ln1118_75_fu_4518_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1577_fu_49890_p2() {
    mul_ln1118_1577_fu_49890_p2 = (!ap_const_lv47_3741.is_01() || !mul_ln1118_1577_fu_49890_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3741) * sc_bigint<32>(mul_ln1118_1577_fu_49890_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1578_fu_49910_p1() {
    mul_ln1118_1578_fu_49910_p1 =  (sc_lv<32>) (sext_ln1118_85_fu_4588_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1578_fu_49910_p2() {
    mul_ln1118_1578_fu_49910_p2 = (!ap_const_lv45_AA6.is_01() || !mul_ln1118_1578_fu_49910_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_AA6) * sc_bigint<32>(mul_ln1118_1578_fu_49910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1579_fu_49930_p1() {
    mul_ln1118_1579_fu_49930_p1 =  (sc_lv<32>) (sext_ln1118_93_fu_4650_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1579_fu_49930_p2() {
    mul_ln1118_1579_fu_49930_p2 = (!ap_const_lv48_8DFD.is_01() || !mul_ln1118_1579_fu_49930_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_8DFD) * sc_bigint<32>(mul_ln1118_1579_fu_49930_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_157_fu_10058_p1() {
    mul_ln1118_157_fu_10058_p1 =  (sc_lv<32>) (sext_ln1118_330_fu_6608_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_157_fu_10058_p2() {
    mul_ln1118_157_fu_10058_p2 = (!ap_const_lv45_D30.is_01() || !mul_ln1118_157_fu_10058_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_D30) * sc_bigint<32>(mul_ln1118_157_fu_10058_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1580_fu_49946_p1() {
    mul_ln1118_1580_fu_49946_p1 =  (sc_lv<32>) (sext_ln1118_99_fu_4704_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1580_fu_49946_p2() {
    mul_ln1118_1580_fu_49946_p2 = (!ap_const_lv46_3FFFFFFFE52F.is_01() || !mul_ln1118_1580_fu_49946_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE52F) * sc_bigint<32>(mul_ln1118_1580_fu_49946_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1581_fu_49966_p1() {
    mul_ln1118_1581_fu_49966_p1 =  (sc_lv<32>) (sext_ln1118_105_fu_4758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1581_fu_49966_p2() {
    mul_ln1118_1581_fu_49966_p2 = (!ap_const_lv48_FFFFFFFFB51C.is_01() || !mul_ln1118_1581_fu_49966_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB51C) * sc_bigint<32>(mul_ln1118_1581_fu_49966_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1582_fu_49982_p1() {
    mul_ln1118_1582_fu_49982_p1 =  (sc_lv<32>) (sext_ln1118_115_fu_4828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1582_fu_49982_p2() {
    mul_ln1118_1582_fu_49982_p2 = (!ap_const_lv44_FFFFFFFFBB6.is_01() || !mul_ln1118_1582_fu_49982_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFBB6) * sc_bigint<32>(mul_ln1118_1582_fu_49982_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1583_fu_50002_p1() {
    mul_ln1118_1583_fu_50002_p1 = tmp_15_fu_4856_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1583_fu_50002_p2() {
    mul_ln1118_1583_fu_50002_p2 = (!ap_const_lv40_FFFFFFFFAD.is_01() || !mul_ln1118_1583_fu_50002_p1.read().is_01())? sc_lv<40>(): sc_bigint<40>(ap_const_lv40_FFFFFFFFAD) * sc_bigint<32>(mul_ln1118_1583_fu_50002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1584_fu_50022_p1() {
    mul_ln1118_1584_fu_50022_p1 =  (sc_lv<32>) (sext_ln1118_127_fu_4936_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1584_fu_50022_p2() {
    mul_ln1118_1584_fu_50022_p2 = (!ap_const_lv42_18A.is_01() || !mul_ln1118_1584_fu_50022_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_18A) * sc_bigint<32>(mul_ln1118_1584_fu_50022_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1585_fu_50042_p1() {
    mul_ln1118_1585_fu_50042_p1 =  (sc_lv<32>) (sext_ln1118_133_fu_4990_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1585_fu_50042_p2() {
    mul_ln1118_1585_fu_50042_p2 = (!ap_const_lv44_55A.is_01() || !mul_ln1118_1585_fu_50042_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_55A) * sc_bigint<32>(mul_ln1118_1585_fu_50042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1586_fu_50062_p1() {
    mul_ln1118_1586_fu_50062_p1 =  (sc_lv<32>) (sext_ln1118_140_fu_5044_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1586_fu_50062_p2() {
    mul_ln1118_1586_fu_50062_p2 = (!ap_const_lv46_1C17.is_01() || !mul_ln1118_1586_fu_50062_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1C17) * sc_bigint<32>(mul_ln1118_1586_fu_50062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1587_fu_50082_p1() {
    mul_ln1118_1587_fu_50082_p1 =  (sc_lv<32>) (sext_ln1118_148_fu_5106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1587_fu_50082_p2() {
    mul_ln1118_1587_fu_50082_p2 = (!ap_const_lv45_98B.is_01() || !mul_ln1118_1587_fu_50082_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_98B) * sc_bigint<32>(mul_ln1118_1587_fu_50082_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1588_fu_50102_p1() {
    mul_ln1118_1588_fu_50102_p1 =  (sc_lv<32>) (sext_ln1118_156_fu_5168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1588_fu_50102_p2() {
    mul_ln1118_1588_fu_50102_p2 = (!ap_const_lv48_59C8.is_01() || !mul_ln1118_1588_fu_50102_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_59C8) * sc_bigint<32>(mul_ln1118_1588_fu_50102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1589_fu_50118_p1() {
    mul_ln1118_1589_fu_50118_p1 =  (sc_lv<32>) (sext_ln1118_163_fu_5226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1589_fu_50118_p2() {
    mul_ln1118_1589_fu_50118_p2 = (!ap_const_lv47_3A71.is_01() || !mul_ln1118_1589_fu_50118_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3A71) * sc_bigint<32>(mul_ln1118_1589_fu_50118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_158_fu_10078_p1() {
    mul_ln1118_158_fu_10078_p1 =  (sc_lv<32>) (sext_ln1118_338_fu_6686_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_158_fu_10078_p2() {
    mul_ln1118_158_fu_10078_p2 = (!ap_const_lv48_FFFFFFFF7902.is_01() || !mul_ln1118_158_fu_10078_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF7902) * sc_bigint<32>(mul_ln1118_158_fu_10078_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1590_fu_50138_p1() {
    mul_ln1118_1590_fu_50138_p1 =  (sc_lv<32>) (sext_ln1118_171_fu_5288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1590_fu_50138_p2() {
    mul_ln1118_1590_fu_50138_p2 = (!ap_const_lv48_FFFFFFFF9F97.is_01() || !mul_ln1118_1590_fu_50138_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9F97) * sc_bigint<32>(mul_ln1118_1590_fu_50138_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1591_fu_50154_p1() {
    mul_ln1118_1591_fu_50154_p1 =  (sc_lv<32>) (sext_ln1118_175_fu_5334_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1591_fu_50154_p2() {
    mul_ln1118_1591_fu_50154_p2 = (!ap_const_lv46_121A.is_01() || !mul_ln1118_1591_fu_50154_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_121A) * sc_bigint<32>(mul_ln1118_1591_fu_50154_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1592_fu_50174_p1() {
    mul_ln1118_1592_fu_50174_p1 =  (sc_lv<32>) (sext_ln1118_181_fu_5388_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1592_fu_50174_p2() {
    mul_ln1118_1592_fu_50174_p2 = (!ap_const_lv44_FFFFFFFF98D.is_01() || !mul_ln1118_1592_fu_50174_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF98D) * sc_bigint<32>(mul_ln1118_1592_fu_50174_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1593_fu_50194_p1() {
    mul_ln1118_1593_fu_50194_p1 =  (sc_lv<32>) (sext_ln1118_187_fu_5438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1593_fu_50194_p2() {
    mul_ln1118_1593_fu_50194_p2 = (!ap_const_lv47_3933.is_01() || !mul_ln1118_1593_fu_50194_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3933) * sc_bigint<32>(mul_ln1118_1593_fu_50194_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1594_fu_50214_p1() {
    mul_ln1118_1594_fu_50214_p1 =  (sc_lv<32>) (sext_ln1118_195_fu_5500_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1594_fu_50214_p2() {
    mul_ln1118_1594_fu_50214_p2 = (!ap_const_lv42_3FFFFFFFE74.is_01() || !mul_ln1118_1594_fu_50214_p1.read().is_01())? sc_lv<42>(): sc_bigint<42>(ap_const_lv42_3FFFFFFFE74) * sc_bigint<32>(mul_ln1118_1594_fu_50214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1595_fu_50234_p1() {
    mul_ln1118_1595_fu_50234_p1 =  (sc_lv<32>) (sext_ln1118_199_fu_5546_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1595_fu_50234_p2() {
    mul_ln1118_1595_fu_50234_p2 = (!ap_const_lv41_1FFFFFFFF1E.is_01() || !mul_ln1118_1595_fu_50234_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF1E) * sc_bigint<32>(mul_ln1118_1595_fu_50234_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1596_fu_50254_p1() {
    mul_ln1118_1596_fu_50254_p1 =  (sc_lv<32>) (sext_ln1118_210_fu_5620_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1596_fu_50254_p2() {
    mul_ln1118_1596_fu_50254_p2 = (!ap_const_lv43_7FFFFFFFD8D.is_01() || !mul_ln1118_1596_fu_50254_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD8D) * sc_bigint<32>(mul_ln1118_1596_fu_50254_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1597_fu_50274_p1() {
    mul_ln1118_1597_fu_50274_p1 =  (sc_lv<32>) (sext_ln1118_215_fu_5670_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1597_fu_50274_p2() {
    mul_ln1118_1597_fu_50274_p2 = (!ap_const_lv43_343.is_01() || !mul_ln1118_1597_fu_50274_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_343) * sc_bigint<32>(mul_ln1118_1597_fu_50274_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1598_fu_50294_p1() {
    mul_ln1118_1598_fu_50294_p1 =  (sc_lv<32>) (sext_ln1118_221_fu_5724_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1598_fu_50294_p2() {
    mul_ln1118_1598_fu_50294_p2 = (!ap_const_lv46_1D71.is_01() || !mul_ln1118_1598_fu_50294_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1D71) * sc_bigint<32>(mul_ln1118_1598_fu_50294_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1599_fu_50314_p1() {
    mul_ln1118_1599_fu_50314_p1 =  (sc_lv<32>) (sext_ln1118_229_fu_5786_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1599_fu_50314_p2() {
    mul_ln1118_1599_fu_50314_p2 = (!ap_const_lv47_3566.is_01() || !mul_ln1118_1599_fu_50314_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3566) * sc_bigint<32>(mul_ln1118_1599_fu_50314_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_159_fu_10094_p1() {
    mul_ln1118_159_fu_10094_p1 =  (sc_lv<32>) (sext_ln1118_345_fu_6744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_159_fu_10094_p2() {
    mul_ln1118_159_fu_10094_p2 = (!ap_const_lv46_1EE1.is_01() || !mul_ln1118_159_fu_10094_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1EE1) * sc_bigint<32>(mul_ln1118_159_fu_10094_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_15_fu_4836_p1() {
    mul_ln1118_15_fu_4836_p1 = tmp_14_fu_4790_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_15_fu_4836_p2() {
    mul_ln1118_15_fu_4836_p2 = (!ap_const_lv42_1D0.is_01() || !mul_ln1118_15_fu_4836_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_1D0) * sc_bigint<32>(mul_ln1118_15_fu_4836_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1600_fu_50334_p1() {
    mul_ln1118_1600_fu_50334_p1 =  (sc_lv<32>) (sext_ln1118_234_fu_5832_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1600_fu_50334_p2() {
    mul_ln1118_1600_fu_50334_p2 = (!ap_const_lv47_388F.is_01() || !mul_ln1118_1600_fu_50334_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_388F) * sc_bigint<32>(mul_ln1118_1600_fu_50334_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1601_fu_50354_p1() {
    mul_ln1118_1601_fu_50354_p1 =  (sc_lv<32>) (sext_ln1118_242_fu_5890_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1601_fu_50354_p2() {
    mul_ln1118_1601_fu_50354_p2 = (!ap_const_lv44_FFFFFFFF904.is_01() || !mul_ln1118_1601_fu_50354_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF904) * sc_bigint<32>(mul_ln1118_1601_fu_50354_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1602_fu_50374_p1() {
    mul_ln1118_1602_fu_50374_p1 =  (sc_lv<32>) (sext_ln1118_251_fu_5952_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1602_fu_50374_p2() {
    mul_ln1118_1602_fu_50374_p2 = (!ap_const_lv40_4B.is_01() || !mul_ln1118_1602_fu_50374_p1.read().is_01())? sc_lv<40>(): sc_biguint<40>(ap_const_lv40_4B) * sc_bigint<32>(mul_ln1118_1602_fu_50374_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1603_fu_50394_p1() {
    mul_ln1118_1603_fu_50394_p1 =  (sc_lv<32>) (sext_ln1118_257_fu_6006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1603_fu_50394_p2() {
    mul_ln1118_1603_fu_50394_p2 = (!ap_const_lv48_6AF7.is_01() || !mul_ln1118_1603_fu_50394_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_6AF7) * sc_bigint<32>(mul_ln1118_1603_fu_50394_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1604_fu_50410_p1() {
    mul_ln1118_1604_fu_50410_p1 =  (sc_lv<32>) (sext_ln1118_262_fu_6052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1604_fu_50410_p2() {
    mul_ln1118_1604_fu_50410_p2 = (!ap_const_lv47_3385.is_01() || !mul_ln1118_1604_fu_50410_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3385) * sc_bigint<32>(mul_ln1118_1604_fu_50410_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1605_fu_50430_p1() {
    mul_ln1118_1605_fu_50430_p1 =  (sc_lv<32>) (sext_ln1118_267_fu_6098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1605_fu_50430_p2() {
    mul_ln1118_1605_fu_50430_p2 = (!ap_const_lv45_C10.is_01() || !mul_ln1118_1605_fu_50430_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_C10) * sc_bigint<32>(mul_ln1118_1605_fu_50430_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1606_fu_50450_p1() {
    mul_ln1118_1606_fu_50450_p1 =  (sc_lv<32>) (sext_ln1118_275_fu_6160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1606_fu_50450_p2() {
    mul_ln1118_1606_fu_50450_p2 = (!ap_const_lv47_3DA0.is_01() || !mul_ln1118_1606_fu_50450_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3DA0) * sc_bigint<32>(mul_ln1118_1606_fu_50450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1607_fu_50470_p1() {
    mul_ln1118_1607_fu_50470_p1 =  (sc_lv<32>) (sext_ln1118_280_fu_6206_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1607_fu_50470_p2() {
    mul_ln1118_1607_fu_50470_p2 = (!ap_const_lv47_3CA1.is_01() || !mul_ln1118_1607_fu_50470_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3CA1) * sc_bigint<32>(mul_ln1118_1607_fu_50470_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1608_fu_50490_p1() {
    mul_ln1118_1608_fu_50490_p1 =  (sc_lv<32>) (sext_ln1118_287_fu_6264_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1608_fu_50490_p2() {
    mul_ln1118_1608_fu_50490_p2 = (!ap_const_lv45_EF8.is_01() || !mul_ln1118_1608_fu_50490_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_EF8) * sc_bigint<32>(mul_ln1118_1608_fu_50490_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1609_fu_50510_p1() {
    mul_ln1118_1609_fu_50510_p1 =  (sc_lv<32>) (sext_ln1118_292_fu_6314_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1609_fu_50510_p2() {
    mul_ln1118_1609_fu_50510_p2 = (!ap_const_lv46_3FFFFFFFE2FF.is_01() || !mul_ln1118_1609_fu_50510_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE2FF) * sc_bigint<32>(mul_ln1118_1609_fu_50510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_160_fu_10114_p1() {
    mul_ln1118_160_fu_10114_p1 =  (sc_lv<32>) (sext_ln1118_351_fu_6798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_160_fu_10114_p2() {
    mul_ln1118_160_fu_10114_p2 = (!ap_const_lv45_1FFFFFFFF0CD.is_01() || !mul_ln1118_160_fu_10114_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF0CD) * sc_bigint<32>(mul_ln1118_160_fu_10114_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1610_fu_50530_p1() {
    mul_ln1118_1610_fu_50530_p1 =  (sc_lv<32>) (sext_ln1118_297_fu_6360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1610_fu_50530_p2() {
    mul_ln1118_1610_fu_50530_p2 = (!ap_const_lv45_FEB.is_01() || !mul_ln1118_1610_fu_50530_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_FEB) * sc_bigint<32>(mul_ln1118_1610_fu_50530_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1611_fu_50550_p1() {
    mul_ln1118_1611_fu_50550_p1 =  (sc_lv<32>) (sext_ln1118_304_fu_6418_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1611_fu_50550_p2() {
    mul_ln1118_1611_fu_50550_p2 = (!ap_const_lv41_1FFFFFFFF4A.is_01() || !mul_ln1118_1611_fu_50550_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF4A) * sc_bigint<32>(mul_ln1118_1611_fu_50550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1612_fu_50570_p1() {
    mul_ln1118_1612_fu_50570_p1 =  (sc_lv<32>) (sext_ln1118_315_fu_6492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1612_fu_50570_p2() {
    mul_ln1118_1612_fu_50570_p2 = (!ap_const_lv48_FFFFFFFF1AEE.is_01() || !mul_ln1118_1612_fu_50570_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF1AEE) * sc_bigint<32>(mul_ln1118_1612_fu_50570_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1613_fu_50586_p1() {
    mul_ln1118_1613_fu_50586_p1 =  (sc_lv<32>) (sext_ln1118_321_fu_6542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1613_fu_50586_p2() {
    mul_ln1118_1613_fu_50586_p2 = (!ap_const_lv45_8DC.is_01() || !mul_ln1118_1613_fu_50586_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_8DC) * sc_bigint<32>(mul_ln1118_1613_fu_50586_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1614_fu_50606_p1() {
    mul_ln1118_1614_fu_50606_p1 =  (sc_lv<32>) (sext_ln1118_327_fu_6596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1614_fu_50606_p2() {
    mul_ln1118_1614_fu_50606_p2 = (!ap_const_lv46_1BAB.is_01() || !mul_ln1118_1614_fu_50606_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1BAB) * sc_bigint<32>(mul_ln1118_1614_fu_50606_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1615_fu_50626_p1() {
    mul_ln1118_1615_fu_50626_p1 =  (sc_lv<32>) (sext_ln1118_338_fu_6686_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1615_fu_50626_p2() {
    mul_ln1118_1615_fu_50626_p2 = (!ap_const_lv48_FFFFFFFF8B8A.is_01() || !mul_ln1118_1615_fu_50626_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF8B8A) * sc_bigint<32>(mul_ln1118_1615_fu_50626_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1616_fu_50642_p1() {
    mul_ln1118_1616_fu_50642_p1 =  (sc_lv<32>) (sext_ln1118_344_fu_6740_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1616_fu_50642_p2() {
    mul_ln1118_1616_fu_50642_p2 = (!ap_const_lv47_7FFFFFFFDC48.is_01() || !mul_ln1118_1616_fu_50642_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDC48) * sc_bigint<32>(mul_ln1118_1616_fu_50642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1617_fu_50662_p1() {
    mul_ln1118_1617_fu_50662_p1 =  (sc_lv<32>) (sext_ln1118_351_fu_6798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1617_fu_50662_p2() {
    mul_ln1118_1617_fu_50662_p2 = (!ap_const_lv45_F23.is_01() || !mul_ln1118_1617_fu_50662_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_F23) * sc_bigint<32>(mul_ln1118_1617_fu_50662_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1618_fu_50682_p1() {
    mul_ln1118_1618_fu_50682_p1 =  (sc_lv<32>) (sext_ln1118_357_fu_6852_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1618_fu_50682_p2() {
    mul_ln1118_1618_fu_50682_p2 = (!ap_const_lv41_C8.is_01() || !mul_ln1118_1618_fu_50682_p1.read().is_01())? sc_lv<41>(): sc_biguint<41>(ap_const_lv41_C8) * sc_bigint<32>(mul_ln1118_1618_fu_50682_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1619_fu_50702_p1() {
    mul_ln1118_1619_fu_50702_p1 =  (sc_lv<32>) (sext_ln1118_363_fu_6906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1619_fu_50702_p2() {
    mul_ln1118_1619_fu_50702_p2 = (!ap_const_lv46_1D65.is_01() || !mul_ln1118_1619_fu_50702_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1D65) * sc_bigint<32>(mul_ln1118_1619_fu_50702_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_161_fu_10134_p1() {
    mul_ln1118_161_fu_10134_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_161_fu_10134_p2() {
    mul_ln1118_161_fu_10134_p2 = (!ap_const_lv48_FFFFFFFFBBBD.is_01() || !mul_ln1118_161_fu_10134_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBBBD) * sc_bigint<32>(mul_ln1118_161_fu_10134_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1620_fu_50722_p1() {
    mul_ln1118_1620_fu_50722_p1 =  (sc_lv<32>) (sext_ln1118_369_fu_6960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1620_fu_50722_p2() {
    mul_ln1118_1620_fu_50722_p2 = (!ap_const_lv47_7FFFFFFFDDD5.is_01() || !mul_ln1118_1620_fu_50722_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDDD5) * sc_bigint<32>(mul_ln1118_1620_fu_50722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1621_fu_50742_p1() {
    mul_ln1118_1621_fu_50742_p1 =  (sc_lv<32>) (sext_ln1118_373_fu_7006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1621_fu_50742_p2() {
    mul_ln1118_1621_fu_50742_p2 = (!ap_const_lv48_FFFFFFFFBD53.is_01() || !mul_ln1118_1621_fu_50742_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBD53) * sc_bigint<32>(mul_ln1118_1621_fu_50742_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1622_fu_50758_p1() {
    mul_ln1118_1622_fu_50758_p1 =  (sc_lv<32>) (sext_ln1118_378_fu_7052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1622_fu_50758_p2() {
    mul_ln1118_1622_fu_50758_p2 = (!ap_const_lv46_19C8.is_01() || !mul_ln1118_1622_fu_50758_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_19C8) * sc_bigint<32>(mul_ln1118_1622_fu_50758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1623_fu_50778_p1() {
    mul_ln1118_1623_fu_50778_p1 =  (sc_lv<32>) (sext_ln1118_384_fu_7106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1623_fu_50778_p2() {
    mul_ln1118_1623_fu_50778_p2 = (!ap_const_lv46_3FFFFFFFEFCB.is_01() || !mul_ln1118_1623_fu_50778_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEFCB) * sc_bigint<32>(mul_ln1118_1623_fu_50778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1624_fu_51244_p1() {
    mul_ln1118_1624_fu_51244_p1 =  (sc_lv<32>) (sext_ln1118_1_fu_3922_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1624_fu_51244_p2() {
    mul_ln1118_1624_fu_51244_p2 = (!ap_const_lv43_3FA.is_01() || !mul_ln1118_1624_fu_51244_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_3FA) * sc_bigint<32>(mul_ln1118_1624_fu_51244_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1625_fu_51264_p1() {
    mul_ln1118_1625_fu_51264_p1 =  (sc_lv<32>) (sext_ln1118_10_fu_3988_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1625_fu_51264_p2() {
    mul_ln1118_1625_fu_51264_p2 = (!ap_const_lv48_6B69.is_01() || !mul_ln1118_1625_fu_51264_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_6B69) * sc_bigint<32>(mul_ln1118_1625_fu_51264_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1626_fu_51280_p1() {
    mul_ln1118_1626_fu_51280_p1 =  (sc_lv<32>) (sext_ln1118_17_fu_4046_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1626_fu_51280_p2() {
    mul_ln1118_1626_fu_51280_p2 = (!ap_const_lv46_1152.is_01() || !mul_ln1118_1626_fu_51280_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1152) * sc_bigint<32>(mul_ln1118_1626_fu_51280_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1627_fu_51300_p1() {
    mul_ln1118_1627_fu_51300_p1 =  (sc_lv<32>) (sext_ln1118_25_fu_4108_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1627_fu_51300_p2() {
    mul_ln1118_1627_fu_51300_p2 = (!ap_const_lv45_948.is_01() || !mul_ln1118_1627_fu_51300_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_948) * sc_bigint<32>(mul_ln1118_1627_fu_51300_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1628_fu_51320_p1() {
    mul_ln1118_1628_fu_51320_p1 =  (sc_lv<32>) (sext_ln1118_37_fu_4186_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1628_fu_51320_p2() {
    mul_ln1118_1628_fu_51320_p2 = (!ap_const_lv43_23C.is_01() || !mul_ln1118_1628_fu_51320_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_23C) * sc_bigint<32>(mul_ln1118_1628_fu_51320_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1629_fu_51340_p1() {
    mul_ln1118_1629_fu_51340_p1 = tmp_5_fu_4210_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1629_fu_51340_p2() {
    mul_ln1118_1629_fu_51340_p2 = (!ap_const_lv41_D7.is_01() || !mul_ln1118_1629_fu_51340_p1.read().is_01())? sc_lv<41>(): sc_biguint<41>(ap_const_lv41_D7) * sc_bigint<32>(mul_ln1118_1629_fu_51340_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_162_fu_10150_p1() {
    mul_ln1118_162_fu_10150_p1 =  (sc_lv<32>) (sext_ln1118_363_fu_6906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_162_fu_10150_p2() {
    mul_ln1118_162_fu_10150_p2 = (!ap_const_lv46_3FFFFFFFEF0A.is_01() || !mul_ln1118_162_fu_10150_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEF0A) * sc_bigint<32>(mul_ln1118_162_fu_10150_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1630_fu_51360_p1() {
    mul_ln1118_1630_fu_51360_p1 =  (sc_lv<32>) (sext_ln1118_50_fu_4298_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1630_fu_51360_p2() {
    mul_ln1118_1630_fu_51360_p2 = (!ap_const_lv47_7FFFFFFFDF78.is_01() || !mul_ln1118_1630_fu_51360_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDF78) * sc_bigint<32>(mul_ln1118_1630_fu_51360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1631_fu_51380_p1() {
    mul_ln1118_1631_fu_51380_p1 =  (sc_lv<32>) (sext_ln1118_60_fu_4368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1631_fu_51380_p2() {
    mul_ln1118_1631_fu_51380_p2 = (!ap_const_lv44_73F.is_01() || !mul_ln1118_1631_fu_51380_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_73F) * sc_bigint<32>(mul_ln1118_1631_fu_51380_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1632_fu_51400_p1() {
    mul_ln1118_1632_fu_51400_p1 =  (sc_lv<32>) (sext_ln1118_63_fu_4410_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1632_fu_51400_p2() {
    mul_ln1118_1632_fu_51400_p2 = (!ap_const_lv46_1ECE.is_01() || !mul_ln1118_1632_fu_51400_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1ECE) * sc_bigint<32>(mul_ln1118_1632_fu_51400_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1633_fu_51420_p1() {
    mul_ln1118_1633_fu_51420_p1 =  (sc_lv<32>) (sext_ln1118_71_fu_4472_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1633_fu_51420_p2() {
    mul_ln1118_1633_fu_51420_p2 = (!ap_const_lv48_BB67.is_01() || !mul_ln1118_1633_fu_51420_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_BB67) * sc_bigint<32>(mul_ln1118_1633_fu_51420_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1634_fu_51436_p1() {
    mul_ln1118_1634_fu_51436_p1 =  (sc_lv<32>) (sext_ln1118_77_fu_4526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1634_fu_51436_p2() {
    mul_ln1118_1634_fu_51436_p2 = (!ap_const_lv45_E80.is_01() || !mul_ln1118_1634_fu_51436_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_E80) * sc_bigint<32>(mul_ln1118_1634_fu_51436_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1635_fu_51456_p1() {
    mul_ln1118_1635_fu_51456_p1 =  (sc_lv<32>) (sext_ln1118_85_fu_4588_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1635_fu_51456_p2() {
    mul_ln1118_1635_fu_51456_p2 = (!ap_const_lv45_1FFFFFFFF3B0.is_01() || !mul_ln1118_1635_fu_51456_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF3B0) * sc_bigint<32>(mul_ln1118_1635_fu_51456_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1636_fu_51476_p1() {
    mul_ln1118_1636_fu_51476_p1 =  (sc_lv<32>) (sext_ln1118_93_fu_4650_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1636_fu_51476_p2() {
    mul_ln1118_1636_fu_51476_p2 = (!ap_const_lv48_FFFFFFFF9782.is_01() || !mul_ln1118_1636_fu_51476_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9782) * sc_bigint<32>(mul_ln1118_1636_fu_51476_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1637_fu_51492_p1() {
    mul_ln1118_1637_fu_51492_p1 =  (sc_lv<32>) (sext_ln1118_100_fu_4708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1637_fu_51492_p2() {
    mul_ln1118_1637_fu_51492_p2 = (!ap_const_lv47_320A.is_01() || !mul_ln1118_1637_fu_51492_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_320A) * sc_bigint<32>(mul_ln1118_1637_fu_51492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1638_fu_51512_p1() {
    mul_ln1118_1638_fu_51512_p1 =  (sc_lv<32>) (sext_ln1118_105_fu_4758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1638_fu_51512_p2() {
    mul_ln1118_1638_fu_51512_p2 = (!ap_const_lv48_9768.is_01() || !mul_ln1118_1638_fu_51512_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_9768) * sc_bigint<32>(mul_ln1118_1638_fu_51512_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1639_fu_51528_p1() {
    mul_ln1118_1639_fu_51528_p1 =  (sc_lv<32>) (sext_ln1118_116_fu_4832_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1639_fu_51528_p2() {
    mul_ln1118_1639_fu_51528_p2 = (!ap_const_lv45_870.is_01() || !mul_ln1118_1639_fu_51528_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_870) * sc_bigint<32>(mul_ln1118_1639_fu_51528_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_163_fu_10170_p1() {
    mul_ln1118_163_fu_10170_p1 =  (sc_lv<32>) (sext_ln1118_368_fu_6956_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_163_fu_10170_p2() {
    mul_ln1118_163_fu_10170_p2 = (!ap_const_lv45_1FFFFFFFF4A0.is_01() || !mul_ln1118_163_fu_10170_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF4A0) * sc_bigint<32>(mul_ln1118_163_fu_10170_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1640_fu_51592_p1() {
    mul_ln1118_1640_fu_51592_p1 =  (sc_lv<32>) (sext_ln1118_128_fu_4940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1640_fu_51592_p2() {
    mul_ln1118_1640_fu_51592_p2 = (!ap_const_lv46_176F.is_01() || !mul_ln1118_1640_fu_51592_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_176F) * sc_bigint<32>(mul_ln1118_1640_fu_51592_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1641_fu_51612_p1() {
    mul_ln1118_1641_fu_51612_p1 =  (sc_lv<32>) (sext_ln1118_134_fu_4994_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1641_fu_51612_p2() {
    mul_ln1118_1641_fu_51612_p2 = (!ap_const_lv45_C9B.is_01() || !mul_ln1118_1641_fu_51612_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_C9B) * sc_bigint<32>(mul_ln1118_1641_fu_51612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1642_fu_51632_p1() {
    mul_ln1118_1642_fu_51632_p1 =  (sc_lv<32>) (sext_ln1118_141_fu_5048_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1642_fu_51632_p2() {
    mul_ln1118_1642_fu_51632_p2 = (!ap_const_lv43_33A.is_01() || !mul_ln1118_1642_fu_51632_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_33A) * sc_bigint<32>(mul_ln1118_1642_fu_51632_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1643_fu_51652_p1() {
    mul_ln1118_1643_fu_51652_p1 =  (sc_lv<32>) (sext_ln1118_149_fu_5110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1643_fu_51652_p2() {
    mul_ln1118_1643_fu_51652_p2 = (!ap_const_lv46_3FFFFFFFE6D4.is_01() || !mul_ln1118_1643_fu_51652_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE6D4) * sc_bigint<32>(mul_ln1118_1643_fu_51652_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1644_fu_51672_p1() {
    mul_ln1118_1644_fu_51672_p1 =  (sc_lv<32>) (sext_ln1118_156_fu_5168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1644_fu_51672_p2() {
    mul_ln1118_1644_fu_51672_p2 = (!ap_const_lv48_9D15.is_01() || !mul_ln1118_1644_fu_51672_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_9D15) * sc_bigint<32>(mul_ln1118_1644_fu_51672_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1645_fu_51688_p1() {
    mul_ln1118_1645_fu_51688_p1 =  (sc_lv<32>) (sext_ln1118_161_fu_5218_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1645_fu_51688_p2() {
    mul_ln1118_1645_fu_51688_p2 = (!ap_const_lv44_7A9.is_01() || !mul_ln1118_1645_fu_51688_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_7A9) * sc_bigint<32>(mul_ln1118_1645_fu_51688_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1646_fu_51708_p1() {
    mul_ln1118_1646_fu_51708_p1 =  (sc_lv<32>) (sext_ln1118_170_fu_5284_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1646_fu_51708_p2() {
    mul_ln1118_1646_fu_51708_p2 = (!ap_const_lv47_2994.is_01() || !mul_ln1118_1646_fu_51708_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2994) * sc_bigint<32>(mul_ln1118_1646_fu_51708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1647_fu_51728_p1() {
    mul_ln1118_1647_fu_51728_p1 =  (sc_lv<32>) (sext_ln1118_176_fu_5338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1647_fu_51728_p2() {
    mul_ln1118_1647_fu_51728_p2 = (!ap_const_lv48_C63F.is_01() || !mul_ln1118_1647_fu_51728_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_C63F) * sc_bigint<32>(mul_ln1118_1647_fu_51728_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1648_fu_51744_p1() {
    mul_ln1118_1648_fu_51744_p1 =  (sc_lv<32>) (sext_ln1118_182_fu_5392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1648_fu_51744_p2() {
    mul_ln1118_1648_fu_51744_p2 = (!ap_const_lv47_7FFFFFFFDFFA.is_01() || !mul_ln1118_1648_fu_51744_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDFFA) * sc_bigint<32>(mul_ln1118_1648_fu_51744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1649_fu_51764_p1() {
    mul_ln1118_1649_fu_51764_p1 =  (sc_lv<32>) (sext_ln1118_189_fu_5446_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1649_fu_51764_p2() {
    mul_ln1118_1649_fu_51764_p2 = (!ap_const_lv45_1FFFFFFFF303.is_01() || !mul_ln1118_1649_fu_51764_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF303) * sc_bigint<32>(mul_ln1118_1649_fu_51764_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_164_fu_10190_p1() {
    mul_ln1118_164_fu_10190_p1 =  (sc_lv<32>) (sext_ln1118_374_fu_7010_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_164_fu_10190_p2() {
    mul_ln1118_164_fu_10190_p2 = (!ap_const_lv47_7FFFFFFFCAF9.is_01() || !mul_ln1118_164_fu_10190_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCAF9) * sc_bigint<32>(mul_ln1118_164_fu_10190_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1650_fu_51784_p1() {
    mul_ln1118_1650_fu_51784_p1 =  (sc_lv<32>) (sext_ln1118_194_fu_5496_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1650_fu_51784_p2() {
    mul_ln1118_1650_fu_51784_p2 = (!ap_const_lv44_541.is_01() || !mul_ln1118_1650_fu_51784_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_541) * sc_bigint<32>(mul_ln1118_1650_fu_51784_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1651_fu_51804_p1() {
    mul_ln1118_1651_fu_51804_p1 =  (sc_lv<32>) (sext_ln1118_200_fu_5550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1651_fu_51804_p2() {
    mul_ln1118_1651_fu_51804_p2 = (!ap_const_lv45_BD7.is_01() || !mul_ln1118_1651_fu_51804_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_BD7) * sc_bigint<32>(mul_ln1118_1651_fu_51804_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1652_fu_51824_p1() {
    mul_ln1118_1652_fu_51824_p1 =  (sc_lv<32>) (sext_ln1118_208_fu_5612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1652_fu_51824_p2() {
    mul_ln1118_1652_fu_51824_p2 = (!ap_const_lv46_3FFFFFFFE62E.is_01() || !mul_ln1118_1652_fu_51824_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE62E) * sc_bigint<32>(mul_ln1118_1652_fu_51824_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1653_fu_51844_p1() {
    mul_ln1118_1653_fu_51844_p1 =  (sc_lv<32>) (sext_ln1118_216_fu_5674_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1653_fu_51844_p2() {
    mul_ln1118_1653_fu_51844_p2 = (!ap_const_lv46_18A6.is_01() || !mul_ln1118_1653_fu_51844_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_18A6) * sc_bigint<32>(mul_ln1118_1653_fu_51844_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1654_fu_51864_p1() {
    mul_ln1118_1654_fu_51864_p1 =  (sc_lv<32>) (sext_ln1118_222_fu_5728_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1654_fu_51864_p2() {
    mul_ln1118_1654_fu_51864_p2 = (!ap_const_lv44_FFFFFFFF956.is_01() || !mul_ln1118_1654_fu_51864_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF956) * sc_bigint<32>(mul_ln1118_1654_fu_51864_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1655_fu_51884_p1() {
    mul_ln1118_1655_fu_51884_p1 =  (sc_lv<32>) (sext_ln1118_230_fu_5790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1655_fu_51884_p2() {
    mul_ln1118_1655_fu_51884_p2 = (!ap_const_lv43_2B1.is_01() || !mul_ln1118_1655_fu_51884_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_2B1) * sc_bigint<32>(mul_ln1118_1655_fu_51884_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1656_fu_51904_p1() {
    mul_ln1118_1656_fu_51904_p1 =  (sc_lv<32>) (sext_ln1118_235_fu_5836_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1656_fu_51904_p2() {
    mul_ln1118_1656_fu_51904_p2 = (!ap_const_lv44_541.is_01() || !mul_ln1118_1656_fu_51904_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_541) * sc_bigint<32>(mul_ln1118_1656_fu_51904_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1657_fu_51924_p1() {
    mul_ln1118_1657_fu_51924_p1 =  (sc_lv<32>) (sext_ln1118_243_fu_5894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1657_fu_51924_p2() {
    mul_ln1118_1657_fu_51924_p2 = (!ap_const_lv43_298.is_01() || !mul_ln1118_1657_fu_51924_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_298) * sc_bigint<32>(mul_ln1118_1657_fu_51924_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1658_fu_51944_p1() {
    mul_ln1118_1658_fu_51944_p1 =  (sc_lv<32>) (sext_ln1118_251_fu_5952_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1658_fu_51944_p2() {
    mul_ln1118_1658_fu_51944_p2 = (!ap_const_lv40_7A.is_01() || !mul_ln1118_1658_fu_51944_p1.read().is_01())? sc_lv<40>(): sc_biguint<40>(ap_const_lv40_7A) * sc_bigint<32>(mul_ln1118_1658_fu_51944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1659_fu_51964_p1() {
    mul_ln1118_1659_fu_51964_p1 =  (sc_lv<32>) (sext_ln1118_256_fu_6002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1659_fu_51964_p2() {
    mul_ln1118_1659_fu_51964_p2 = (!ap_const_lv46_3FFFFFFFEE97.is_01() || !mul_ln1118_1659_fu_51964_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEE97) * sc_bigint<32>(mul_ln1118_1659_fu_51964_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_165_fu_10210_p1() {
    mul_ln1118_165_fu_10210_p1 =  (sc_lv<32>) (sext_ln1118_377_fu_7048_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_165_fu_10210_p2() {
    mul_ln1118_165_fu_10210_p2 = (!ap_const_lv47_7FFFFFFFD486.is_01() || !mul_ln1118_165_fu_10210_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD486) * sc_bigint<32>(mul_ln1118_165_fu_10210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1660_fu_51984_p1() {
    mul_ln1118_1660_fu_51984_p1 =  (sc_lv<32>) (sext_ln1118_263_fu_6056_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1660_fu_51984_p2() {
    mul_ln1118_1660_fu_51984_p2 = (!ap_const_lv48_41A6.is_01() || !mul_ln1118_1660_fu_51984_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_41A6) * sc_bigint<32>(mul_ln1118_1660_fu_51984_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1661_fu_52000_p1() {
    mul_ln1118_1661_fu_52000_p1 =  (sc_lv<32>) (sext_ln1118_268_fu_6102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1661_fu_52000_p2() {
    mul_ln1118_1661_fu_52000_p2 = (!ap_const_lv44_403.is_01() || !mul_ln1118_1661_fu_52000_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_403) * sc_bigint<32>(mul_ln1118_1661_fu_52000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1662_fu_52020_p1() {
    mul_ln1118_1662_fu_52020_p1 =  (sc_lv<32>) (sext_ln1118_274_fu_6156_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1662_fu_52020_p2() {
    mul_ln1118_1662_fu_52020_p2 = (!ap_const_lv44_FFFFFFFFA66.is_01() || !mul_ln1118_1662_fu_52020_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA66) * sc_bigint<32>(mul_ln1118_1662_fu_52020_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1663_fu_52040_p1() {
    mul_ln1118_1663_fu_52040_p1 =  (sc_lv<32>) (sext_ln1118_280_fu_6206_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1663_fu_52040_p2() {
    mul_ln1118_1663_fu_52040_p2 = (!ap_const_lv47_278E.is_01() || !mul_ln1118_1663_fu_52040_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_278E) * sc_bigint<32>(mul_ln1118_1663_fu_52040_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1664_fu_52104_p1() {
    mul_ln1118_1664_fu_52104_p1 =  (sc_lv<32>) (sext_ln1118_294_fu_6322_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1664_fu_52104_p2() {
    mul_ln1118_1664_fu_52104_p2 = (!ap_const_lv44_FFFFFFFF8ED.is_01() || !mul_ln1118_1664_fu_52104_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8ED) * sc_bigint<32>(mul_ln1118_1664_fu_52104_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1665_fu_52124_p1() {
    mul_ln1118_1665_fu_52124_p1 =  (sc_lv<32>) (sext_ln1118_298_fu_6364_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1665_fu_52124_p2() {
    mul_ln1118_1665_fu_52124_p2 = (!ap_const_lv43_3B5.is_01() || !mul_ln1118_1665_fu_52124_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_3B5) * sc_bigint<32>(mul_ln1118_1665_fu_52124_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1666_fu_52144_p1() {
    mul_ln1118_1666_fu_52144_p1 = tmp_43_fu_6396_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1666_fu_52144_p2() {
    mul_ln1118_1666_fu_52144_p2 = (!ap_const_lv43_7FFFFFFFDD0.is_01() || !mul_ln1118_1666_fu_52144_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFDD0) * sc_bigint<32>(mul_ln1118_1666_fu_52144_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1667_fu_52164_p1() {
    mul_ln1118_1667_fu_52164_p1 =  (sc_lv<32>) (sext_ln1118_315_fu_6492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1667_fu_52164_p2() {
    mul_ln1118_1667_fu_52164_p2 = (!ap_const_lv48_FFFFFFFF9ACB.is_01() || !mul_ln1118_1667_fu_52164_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9ACB) * sc_bigint<32>(mul_ln1118_1667_fu_52164_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1668_fu_52180_p1() {
    mul_ln1118_1668_fu_52180_p1 =  (sc_lv<32>) (sext_ln1118_321_fu_6542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1668_fu_52180_p2() {
    mul_ln1118_1668_fu_52180_p2 = (!ap_const_lv45_1FFFFFFFF4F8.is_01() || !mul_ln1118_1668_fu_52180_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF4F8) * sc_bigint<32>(mul_ln1118_1668_fu_52180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1669_fu_52200_p1() {
    mul_ln1118_1669_fu_52200_p1 =  (sc_lv<32>) (sext_ln1118_328_fu_6600_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1669_fu_52200_p2() {
    mul_ln1118_1669_fu_52200_p2 = (!ap_const_lv42_14D.is_01() || !mul_ln1118_1669_fu_52200_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_14D) * sc_bigint<32>(mul_ln1118_1669_fu_52200_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_166_fu_10230_p1() {
    mul_ln1118_166_fu_10230_p1 =  (sc_lv<32>) (sext_ln1118_384_fu_7106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_166_fu_10230_p2() {
    mul_ln1118_166_fu_10230_p2 = (!ap_const_lv46_3FFFFFFFE396.is_01() || !mul_ln1118_166_fu_10230_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE396) * sc_bigint<32>(mul_ln1118_166_fu_10230_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1670_fu_52220_p1() {
    mul_ln1118_1670_fu_52220_p1 =  (sc_lv<32>) (sext_ln1118_339_fu_6690_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1670_fu_52220_p2() {
    mul_ln1118_1670_fu_52220_p2 = (!ap_const_lv47_7FFFFFFFD358.is_01() || !mul_ln1118_1670_fu_52220_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD358) * sc_bigint<32>(mul_ln1118_1670_fu_52220_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1671_fu_52240_p1() {
    mul_ln1118_1671_fu_52240_p1 =  (sc_lv<32>) (sext_ln1118_345_fu_6744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1671_fu_52240_p2() {
    mul_ln1118_1671_fu_52240_p2 = (!ap_const_lv46_3FFFFFFFEB20.is_01() || !mul_ln1118_1671_fu_52240_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEB20) * sc_bigint<32>(mul_ln1118_1671_fu_52240_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1672_fu_52260_p1() {
    mul_ln1118_1672_fu_52260_p1 =  (sc_lv<32>) (sext_ln1118_353_fu_6806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1672_fu_52260_p2() {
    mul_ln1118_1672_fu_52260_p2 = (!ap_const_lv46_1E15.is_01() || !mul_ln1118_1672_fu_52260_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1E15) * sc_bigint<32>(mul_ln1118_1672_fu_52260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1673_fu_52280_p1() {
    mul_ln1118_1673_fu_52280_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1673_fu_52280_p2() {
    mul_ln1118_1673_fu_52280_p2 = (!ap_const_lv48_FFFFFFFF3FCE.is_01() || !mul_ln1118_1673_fu_52280_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF3FCE) * sc_bigint<32>(mul_ln1118_1673_fu_52280_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1674_fu_52296_p1() {
    mul_ln1118_1674_fu_52296_p1 =  (sc_lv<32>) (sext_ln1118_363_fu_6906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1674_fu_52296_p2() {
    mul_ln1118_1674_fu_52296_p2 = (!ap_const_lv46_1EC0.is_01() || !mul_ln1118_1674_fu_52296_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1EC0) * sc_bigint<32>(mul_ln1118_1674_fu_52296_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1675_fu_52316_p1() {
    mul_ln1118_1675_fu_52316_p1 =  (sc_lv<32>) (sext_ln1118_370_fu_6964_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1675_fu_52316_p2() {
    mul_ln1118_1675_fu_52316_p2 = (!ap_const_lv46_1DCF.is_01() || !mul_ln1118_1675_fu_52316_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1DCF) * sc_bigint<32>(mul_ln1118_1675_fu_52316_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1676_fu_52336_p1() {
    mul_ln1118_1676_fu_52336_p1 =  (sc_lv<32>) (sext_ln1118_374_fu_7010_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1676_fu_52336_p2() {
    mul_ln1118_1676_fu_52336_p2 = (!ap_const_lv47_7FFFFFFFC731.is_01() || !mul_ln1118_1676_fu_52336_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC731) * sc_bigint<32>(mul_ln1118_1676_fu_52336_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1677_fu_52356_p1() {
    mul_ln1118_1677_fu_52356_p1 =  (sc_lv<32>) (sext_ln1118_379_fu_7056_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1677_fu_52356_p2() {
    mul_ln1118_1677_fu_52356_p2 = (!ap_const_lv44_FFFFFFFF8E5.is_01() || !mul_ln1118_1677_fu_52356_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8E5) * sc_bigint<32>(mul_ln1118_1677_fu_52356_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1678_fu_52376_p1() {
    mul_ln1118_1678_fu_52376_p1 =  (sc_lv<32>) (sext_ln1118_385_fu_7110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1678_fu_52376_p2() {
    mul_ln1118_1678_fu_52376_p2 = (!ap_const_lv45_B6E.is_01() || !mul_ln1118_1678_fu_52376_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_B6E) * sc_bigint<32>(mul_ln1118_1678_fu_52376_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1679_fu_52850_p1() {
    mul_ln1118_1679_fu_52850_p1 =  (sc_lv<32>) (sext_ln1118_2_fu_3926_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1679_fu_52850_p2() {
    mul_ln1118_1679_fu_52850_p2 = (!ap_const_lv45_1FFFFFFFF546.is_01() || !mul_ln1118_1679_fu_52850_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF546) * sc_bigint<32>(mul_ln1118_1679_fu_52850_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_167_fu_10696_p1() {
    mul_ln1118_167_fu_10696_p1 =  (sc_lv<32>) (sext_ln1118_3_fu_3930_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_167_fu_10696_p2() {
    mul_ln1118_167_fu_10696_p2 = (!ap_const_lv44_67C.is_01() || !mul_ln1118_167_fu_10696_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_67C) * sc_bigint<32>(mul_ln1118_167_fu_10696_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1680_fu_52870_p1() {
    mul_ln1118_1680_fu_52870_p1 =  (sc_lv<32>) (sext_ln1118_11_fu_3992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1680_fu_52870_p2() {
    mul_ln1118_1680_fu_52870_p2 = (!ap_const_lv45_1FFFFFFFF67D.is_01() || !mul_ln1118_1680_fu_52870_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF67D) * sc_bigint<32>(mul_ln1118_1680_fu_52870_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1681_fu_52890_p1() {
    mul_ln1118_1681_fu_52890_p1 =  (sc_lv<32>) (sext_ln1118_18_fu_4050_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1681_fu_52890_p2() {
    mul_ln1118_1681_fu_52890_p2 = (!ap_const_lv44_FFFFFFFF8BD.is_01() || !mul_ln1118_1681_fu_52890_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8BD) * sc_bigint<32>(mul_ln1118_1681_fu_52890_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1682_fu_52910_p1() {
    mul_ln1118_1682_fu_52910_p1 =  (sc_lv<32>) (sext_ln1118_26_fu_4112_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1682_fu_52910_p2() {
    mul_ln1118_1682_fu_52910_p2 = (!ap_const_lv48_FFFFFFFF9BD6.is_01() || !mul_ln1118_1682_fu_52910_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9BD6) * sc_bigint<32>(mul_ln1118_1682_fu_52910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1683_fu_52926_p1() {
    mul_ln1118_1683_fu_52926_p1 =  (sc_lv<32>) (sext_ln1118_36_fu_4182_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1683_fu_52926_p2() {
    mul_ln1118_1683_fu_52926_p2 = (!ap_const_lv46_3FFFFFFFEF63.is_01() || !mul_ln1118_1683_fu_52926_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEF63) * sc_bigint<32>(mul_ln1118_1683_fu_52926_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1684_fu_52946_p1() {
    mul_ln1118_1684_fu_52946_p1 =  (sc_lv<32>) (sext_ln1118_47_fu_4256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1684_fu_52946_p2() {
    mul_ln1118_1684_fu_52946_p2 = (!ap_const_lv45_C74.is_01() || !mul_ln1118_1684_fu_52946_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_C74) * sc_bigint<32>(mul_ln1118_1684_fu_52946_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1685_fu_52966_p1() {
    mul_ln1118_1685_fu_52966_p1 =  (sc_lv<32>) (sext_ln1118_51_fu_4302_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1685_fu_52966_p2() {
    mul_ln1118_1685_fu_52966_p2 = (!ap_const_lv43_7FFFFFFFD42.is_01() || !mul_ln1118_1685_fu_52966_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD42) * sc_bigint<32>(mul_ln1118_1685_fu_52966_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1686_fu_52986_p1() {
    mul_ln1118_1686_fu_52986_p1 =  (sc_lv<32>) (sext_ln1118_59_fu_4364_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1686_fu_52986_p2() {
    mul_ln1118_1686_fu_52986_p2 = (!ap_const_lv47_7FFFFFFFD22F.is_01() || !mul_ln1118_1686_fu_52986_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD22F) * sc_bigint<32>(mul_ln1118_1686_fu_52986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1687_fu_53006_p1() {
    mul_ln1118_1687_fu_53006_p1 =  (sc_lv<32>) (sext_ln1118_64_fu_4414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1687_fu_53006_p2() {
    mul_ln1118_1687_fu_53006_p2 = (!ap_const_lv45_91E.is_01() || !mul_ln1118_1687_fu_53006_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_91E) * sc_bigint<32>(mul_ln1118_1687_fu_53006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1688_fu_53026_p1() {
    mul_ln1118_1688_fu_53026_p1 =  (sc_lv<32>) (sext_ln1118_71_fu_4472_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1688_fu_53026_p2() {
    mul_ln1118_1688_fu_53026_p2 = (!ap_const_lv48_FFFFFFFFB1B7.is_01() || !mul_ln1118_1688_fu_53026_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB1B7) * sc_bigint<32>(mul_ln1118_1688_fu_53026_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1689_fu_53042_p1() {
    mul_ln1118_1689_fu_53042_p1 =  (sc_lv<32>) (sext_ln1118_76_fu_4522_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1689_fu_53042_p2() {
    mul_ln1118_1689_fu_53042_p2 = (!ap_const_lv44_FFFFFFFF80D.is_01() || !mul_ln1118_1689_fu_53042_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF80D) * sc_bigint<32>(mul_ln1118_1689_fu_53042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_168_fu_10716_p1() {
    mul_ln1118_168_fu_10716_p1 =  (sc_lv<32>) (sext_ln1118_11_fu_3992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_168_fu_10716_p2() {
    mul_ln1118_168_fu_10716_p2 = (!ap_const_lv45_D39.is_01() || !mul_ln1118_168_fu_10716_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_D39) * sc_bigint<32>(mul_ln1118_168_fu_10716_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1690_fu_53062_p1() {
    mul_ln1118_1690_fu_53062_p1 =  (sc_lv<32>) (sext_ln1118_86_fu_4592_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1690_fu_53062_p2() {
    mul_ln1118_1690_fu_53062_p2 = (!ap_const_lv47_7FFFFFFFD3E1.is_01() || !mul_ln1118_1690_fu_53062_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD3E1) * sc_bigint<32>(mul_ln1118_1690_fu_53062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1691_fu_53082_p1() {
    mul_ln1118_1691_fu_53082_p1 =  (sc_lv<32>) (sext_ln1118_92_fu_4646_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1691_fu_53082_p2() {
    mul_ln1118_1691_fu_53082_p2 = (!ap_const_lv46_1F17.is_01() || !mul_ln1118_1691_fu_53082_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1F17) * sc_bigint<32>(mul_ln1118_1691_fu_53082_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1692_fu_53102_p1() {
    mul_ln1118_1692_fu_53102_p1 =  (sc_lv<32>) (sext_ln1118_100_fu_4708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1692_fu_53102_p2() {
    mul_ln1118_1692_fu_53102_p2 = (!ap_const_lv47_3643.is_01() || !mul_ln1118_1692_fu_53102_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3643) * sc_bigint<32>(mul_ln1118_1692_fu_53102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1693_fu_53122_p1() {
    mul_ln1118_1693_fu_53122_p1 =  (sc_lv<32>) (sext_ln1118_106_fu_4762_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1693_fu_53122_p2() {
    mul_ln1118_1693_fu_53122_p2 = (!ap_const_lv45_E3E.is_01() || !mul_ln1118_1693_fu_53122_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_E3E) * sc_bigint<32>(mul_ln1118_1693_fu_53122_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1694_fu_53142_p1() {
    mul_ln1118_1694_fu_53142_p1 =  (sc_lv<32>) (sext_ln1118_116_fu_4832_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1694_fu_53142_p2() {
    mul_ln1118_1694_fu_53142_p2 = (!ap_const_lv45_BF4.is_01() || !mul_ln1118_1694_fu_53142_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_BF4) * sc_bigint<32>(mul_ln1118_1694_fu_53142_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1695_fu_53162_p1() {
    mul_ln1118_1695_fu_53162_p1 =  (sc_lv<32>) (sext_ln1118_121_fu_4882_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1695_fu_53162_p2() {
    mul_ln1118_1695_fu_53162_p2 = (!ap_const_lv47_7FFFFFFFD34A.is_01() || !mul_ln1118_1695_fu_53162_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD34A) * sc_bigint<32>(mul_ln1118_1695_fu_53162_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1696_fu_53182_p1() {
    mul_ln1118_1696_fu_53182_p1 =  (sc_lv<32>) (sext_ln1118_129_fu_4944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1696_fu_53182_p2() {
    mul_ln1118_1696_fu_53182_p2 = (!ap_const_lv44_FFFFFFFFB55.is_01() || !mul_ln1118_1696_fu_53182_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFB55) * sc_bigint<32>(mul_ln1118_1696_fu_53182_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1697_fu_53202_p1() {
    mul_ln1118_1697_fu_53202_p1 =  (sc_lv<32>) (sext_ln1118_135_fu_4998_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1697_fu_53202_p2() {
    mul_ln1118_1697_fu_53202_p2 = (!ap_const_lv46_1E23.is_01() || !mul_ln1118_1697_fu_53202_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1E23) * sc_bigint<32>(mul_ln1118_1697_fu_53202_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1698_fu_53222_p1() {
    mul_ln1118_1698_fu_53222_p1 =  (sc_lv<32>) (sext_ln1118_142_fu_5052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1698_fu_53222_p2() {
    mul_ln1118_1698_fu_53222_p2 = (!ap_const_lv48_FFFFFFFF8D01.is_01() || !mul_ln1118_1698_fu_53222_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF8D01) * sc_bigint<32>(mul_ln1118_1698_fu_53222_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1699_fu_53238_p1() {
    mul_ln1118_1699_fu_53238_p1 =  (sc_lv<32>) (sext_ln1118_149_fu_5110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1699_fu_53238_p2() {
    mul_ln1118_1699_fu_53238_p2 = (!ap_const_lv46_3FFFFFFFEF62.is_01() || !mul_ln1118_1699_fu_53238_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEF62) * sc_bigint<32>(mul_ln1118_1699_fu_53238_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_169_fu_10736_p1() {
    mul_ln1118_169_fu_10736_p1 = tmp_2_fu_4020_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_169_fu_10736_p2() {
    mul_ln1118_169_fu_10736_p2 = (!ap_const_lv39_23.is_01() || !mul_ln1118_169_fu_10736_p1.read().is_01())? sc_lv<39>(): sc_biguint<39>(ap_const_lv39_23) * sc_bigint<32>(mul_ln1118_169_fu_10736_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_16_fu_4894_p1() {
    mul_ln1118_16_fu_4894_p1 =  (sc_lv<32>) (sext_ln1118_121_fu_4882_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_16_fu_4894_p2() {
    mul_ln1118_16_fu_4894_p2 = (!ap_const_lv47_7FFFFFFFDB76.is_01() || !mul_ln1118_16_fu_4894_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDB76) * sc_bigint<32>(mul_ln1118_16_fu_4894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1700_fu_53258_p1() {
    mul_ln1118_1700_fu_53258_p1 =  (sc_lv<32>) (sext_ln1118_156_fu_5168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1700_fu_53258_p2() {
    mul_ln1118_1700_fu_53258_p2 = (!ap_const_lv48_FFFFFFFFB552.is_01() || !mul_ln1118_1700_fu_53258_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB552) * sc_bigint<32>(mul_ln1118_1700_fu_53258_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1701_fu_53274_p1() {
    mul_ln1118_1701_fu_53274_p1 = tmp_21_fu_5196_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1701_fu_53274_p2() {
    mul_ln1118_1701_fu_53274_p2 = (!ap_const_lv43_317.is_01() || !mul_ln1118_1701_fu_53274_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_317) * sc_bigint<32>(mul_ln1118_1701_fu_53274_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1702_fu_53294_p1() {
    mul_ln1118_1702_fu_53294_p1 =  (sc_lv<32>) (sext_ln1118_170_fu_5284_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1702_fu_53294_p2() {
    mul_ln1118_1702_fu_53294_p2 = (!ap_const_lv47_7FFFFFFFCE6A.is_01() || !mul_ln1118_1702_fu_53294_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCE6A) * sc_bigint<32>(mul_ln1118_1702_fu_53294_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1703_fu_53314_p1() {
    mul_ln1118_1703_fu_53314_p1 =  (sc_lv<32>) (sext_ln1118_175_fu_5334_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1703_fu_53314_p2() {
    mul_ln1118_1703_fu_53314_p2 = (!ap_const_lv46_16AE.is_01() || !mul_ln1118_1703_fu_53314_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_16AE) * sc_bigint<32>(mul_ln1118_1703_fu_53314_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1704_fu_53334_p1() {
    mul_ln1118_1704_fu_53334_p1 =  (sc_lv<32>) (sext_ln1118_182_fu_5392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1704_fu_53334_p2() {
    mul_ln1118_1704_fu_53334_p2 = (!ap_const_lv47_7FFFFFFFD268.is_01() || !mul_ln1118_1704_fu_53334_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD268) * sc_bigint<32>(mul_ln1118_1704_fu_53334_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1705_fu_53354_p1() {
    mul_ln1118_1705_fu_53354_p1 =  (sc_lv<32>) (sext_ln1118_188_fu_5442_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1705_fu_53354_p2() {
    mul_ln1118_1705_fu_53354_p2 = (!ap_const_lv46_15EC.is_01() || !mul_ln1118_1705_fu_53354_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_15EC) * sc_bigint<32>(mul_ln1118_1705_fu_53354_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1706_fu_53374_p1() {
    mul_ln1118_1706_fu_53374_p1 =  (sc_lv<32>) (sext_ln1118_193_fu_5492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1706_fu_53374_p2() {
    mul_ln1118_1706_fu_53374_p2 = (!ap_const_lv45_1FFFFFFFF2FC.is_01() || !mul_ln1118_1706_fu_53374_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF2FC) * sc_bigint<32>(mul_ln1118_1706_fu_53374_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1707_fu_53394_p1() {
    mul_ln1118_1707_fu_53394_p1 =  (sc_lv<32>) (sext_ln1118_200_fu_5550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1707_fu_53394_p2() {
    mul_ln1118_1707_fu_53394_p2 = (!ap_const_lv45_1FFFFFFFF6B7.is_01() || !mul_ln1118_1707_fu_53394_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF6B7) * sc_bigint<32>(mul_ln1118_1707_fu_53394_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1708_fu_53414_p1() {
    mul_ln1118_1708_fu_53414_p1 =  (sc_lv<32>) (sext_ln1118_209_fu_5616_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1708_fu_53414_p2() {
    mul_ln1118_1708_fu_53414_p2 = (!ap_const_lv45_E53.is_01() || !mul_ln1118_1708_fu_53414_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_E53) * sc_bigint<32>(mul_ln1118_1708_fu_53414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1709_fu_53434_p1() {
    mul_ln1118_1709_fu_53434_p1 =  (sc_lv<32>) (sext_ln1118_217_fu_5678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1709_fu_53434_p2() {
    mul_ln1118_1709_fu_53434_p2 = (!ap_const_lv45_B2E.is_01() || !mul_ln1118_1709_fu_53434_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_B2E) * sc_bigint<32>(mul_ln1118_1709_fu_53434_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_170_fu_10756_p1() {
    mul_ln1118_170_fu_10756_p1 =  (sc_lv<32>) (sext_ln1118_28_fu_4120_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_170_fu_10756_p2() {
    mul_ln1118_170_fu_10756_p2 = (!ap_const_lv42_3FFFFFFFEF9.is_01() || !mul_ln1118_170_fu_10756_p1.read().is_01())? sc_lv<42>(): sc_bigint<42>(ap_const_lv42_3FFFFFFFEF9) * sc_bigint<32>(mul_ln1118_170_fu_10756_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1710_fu_53454_p1() {
    mul_ln1118_1710_fu_53454_p1 =  (sc_lv<32>) (sext_ln1118_222_fu_5728_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1710_fu_53454_p2() {
    mul_ln1118_1710_fu_53454_p2 = (!ap_const_lv44_470.is_01() || !mul_ln1118_1710_fu_53454_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_470) * sc_bigint<32>(mul_ln1118_1710_fu_53454_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1711_fu_53474_p1() {
    mul_ln1118_1711_fu_53474_p1 =  (sc_lv<32>) (sext_ln1118_230_fu_5790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1711_fu_53474_p2() {
    mul_ln1118_1711_fu_53474_p2 = (!ap_const_lv43_7FFFFFFFC52.is_01() || !mul_ln1118_1711_fu_53474_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFC52) * sc_bigint<32>(mul_ln1118_1711_fu_53474_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1712_fu_53494_p1() {
    mul_ln1118_1712_fu_53494_p1 =  (sc_lv<32>) (sext_ln1118_235_fu_5836_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1712_fu_53494_p2() {
    mul_ln1118_1712_fu_53494_p2 = (!ap_const_lv44_595.is_01() || !mul_ln1118_1712_fu_53494_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_595) * sc_bigint<32>(mul_ln1118_1712_fu_53494_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1713_fu_53514_p1() {
    mul_ln1118_1713_fu_53514_p1 =  (sc_lv<32>) (sext_ln1118_244_fu_5898_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1713_fu_53514_p2() {
    mul_ln1118_1713_fu_53514_p2 = (!ap_const_lv47_28F8.is_01() || !mul_ln1118_1713_fu_53514_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_28F8) * sc_bigint<32>(mul_ln1118_1713_fu_53514_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1714_fu_53534_p1() {
    mul_ln1118_1714_fu_53534_p1 =  (sc_lv<32>) (sext_ln1118_252_fu_5956_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1714_fu_53534_p2() {
    mul_ln1118_1714_fu_53534_p2 = (!ap_const_lv48_BDC2.is_01() || !mul_ln1118_1714_fu_53534_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_BDC2) * sc_bigint<32>(mul_ln1118_1714_fu_53534_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1715_fu_53550_p1() {
    mul_ln1118_1715_fu_53550_p1 =  (sc_lv<32>) (sext_ln1118_257_fu_6006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1715_fu_53550_p2() {
    mul_ln1118_1715_fu_53550_p2 = (!ap_const_lv48_FFFFFFFF9D92.is_01() || !mul_ln1118_1715_fu_53550_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9D92) * sc_bigint<32>(mul_ln1118_1715_fu_53550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1716_fu_53566_p1() {
    mul_ln1118_1716_fu_53566_p1 =  (sc_lv<32>) (sext_ln1118_264_fu_6060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1716_fu_53566_p2() {
    mul_ln1118_1716_fu_53566_p2 = (!ap_const_lv46_126B.is_01() || !mul_ln1118_1716_fu_53566_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_126B) * sc_bigint<32>(mul_ln1118_1716_fu_53566_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1717_fu_53586_p1() {
    mul_ln1118_1717_fu_53586_p1 =  (sc_lv<32>) (sext_ln1118_269_fu_6106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1717_fu_53586_p2() {
    mul_ln1118_1717_fu_53586_p2 = (!ap_const_lv48_FFFFFFFFB907.is_01() || !mul_ln1118_1717_fu_53586_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB907) * sc_bigint<32>(mul_ln1118_1717_fu_53586_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1718_fu_53602_p1() {
    mul_ln1118_1718_fu_53602_p1 =  (sc_lv<32>) (sext_ln1118_275_fu_6160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1718_fu_53602_p2() {
    mul_ln1118_1718_fu_53602_p2 = (!ap_const_lv47_7FFFFFFFD3BF.is_01() || !mul_ln1118_1718_fu_53602_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD3BF) * sc_bigint<32>(mul_ln1118_1718_fu_53602_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1719_fu_53622_p1() {
    mul_ln1118_1719_fu_53622_p1 =  (sc_lv<32>) (sext_ln1118_281_fu_6210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1719_fu_53622_p2() {
    mul_ln1118_1719_fu_53622_p2 = (!ap_const_lv46_3FFFFFFFE15C.is_01() || !mul_ln1118_1719_fu_53622_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE15C) * sc_bigint<32>(mul_ln1118_1719_fu_53622_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_171_fu_10776_p1() {
    mul_ln1118_171_fu_10776_p1 =  (sc_lv<32>) (sext_ln1118_33_fu_4170_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_171_fu_10776_p2() {
    mul_ln1118_171_fu_10776_p2 = (!ap_const_lv47_204F.is_01() || !mul_ln1118_171_fu_10776_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_204F) * sc_bigint<32>(mul_ln1118_171_fu_10776_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1720_fu_53642_p1() {
    mul_ln1118_1720_fu_53642_p1 =  (sc_lv<32>) (sext_ln1118_284_fu_6252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1720_fu_53642_p2() {
    mul_ln1118_1720_fu_53642_p2 = (!ap_const_lv48_4B14.is_01() || !mul_ln1118_1720_fu_53642_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_4B14) * sc_bigint<32>(mul_ln1118_1720_fu_53642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1721_fu_53658_p1() {
    mul_ln1118_1721_fu_53658_p1 =  (sc_lv<32>) (sext_ln1118_293_fu_6318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1721_fu_53658_p2() {
    mul_ln1118_1721_fu_53658_p2 = (!ap_const_lv45_A96.is_01() || !mul_ln1118_1721_fu_53658_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_A96) * sc_bigint<32>(mul_ln1118_1721_fu_53658_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1722_fu_53678_p1() {
    mul_ln1118_1722_fu_53678_p1 =  (sc_lv<32>) (sext_ln1118_299_fu_6368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1722_fu_53678_p2() {
    mul_ln1118_1722_fu_53678_p2 = (!ap_const_lv47_28B9.is_01() || !mul_ln1118_1722_fu_53678_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_28B9) * sc_bigint<32>(mul_ln1118_1722_fu_53678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1723_fu_53698_p1() {
    mul_ln1118_1723_fu_53698_p1 =  (sc_lv<32>) (sext_ln1118_306_fu_6426_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1723_fu_53698_p2() {
    mul_ln1118_1723_fu_53698_p2 = (!ap_const_lv45_F3F.is_01() || !mul_ln1118_1723_fu_53698_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_F3F) * sc_bigint<32>(mul_ln1118_1723_fu_53698_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1724_fu_53718_p1() {
    mul_ln1118_1724_fu_53718_p1 =  (sc_lv<32>) (sext_ln1118_314_fu_6488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1724_fu_53718_p2() {
    mul_ln1118_1724_fu_53718_p2 = (!ap_const_lv46_1860.is_01() || !mul_ln1118_1724_fu_53718_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1860) * sc_bigint<32>(mul_ln1118_1724_fu_53718_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1725_fu_53738_p1() {
    mul_ln1118_1725_fu_53738_p1 =  (sc_lv<32>) (sext_ln1118_321_fu_6542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1725_fu_53738_p2() {
    mul_ln1118_1725_fu_53738_p2 = (!ap_const_lv45_B46.is_01() || !mul_ln1118_1725_fu_53738_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_B46) * sc_bigint<32>(mul_ln1118_1725_fu_53738_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1726_fu_53758_p1() {
    mul_ln1118_1726_fu_53758_p1 =  (sc_lv<32>) (sext_ln1118_330_fu_6608_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1726_fu_53758_p2() {
    mul_ln1118_1726_fu_53758_p2 = (!ap_const_lv45_1FFFFFFFF338.is_01() || !mul_ln1118_1726_fu_53758_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF338) * sc_bigint<32>(mul_ln1118_1726_fu_53758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1727_fu_53778_p1() {
    mul_ln1118_1727_fu_53778_p1 =  (sc_lv<32>) (sext_ln1118_338_fu_6686_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1727_fu_53778_p2() {
    mul_ln1118_1727_fu_53778_p2 = (!ap_const_lv48_51D5.is_01() || !mul_ln1118_1727_fu_53778_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_51D5) * sc_bigint<32>(mul_ln1118_1727_fu_53778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1728_fu_53794_p1() {
    mul_ln1118_1728_fu_53794_p1 =  (sc_lv<32>) (sext_ln1118_345_fu_6744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1728_fu_53794_p2() {
    mul_ln1118_1728_fu_53794_p2 = (!ap_const_lv46_3FFFFFFFEFA5.is_01() || !mul_ln1118_1728_fu_53794_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEFA5) * sc_bigint<32>(mul_ln1118_1728_fu_53794_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1729_fu_53814_p1() {
    mul_ln1118_1729_fu_53814_p1 =  (sc_lv<32>) (sext_ln1118_352_fu_6802_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1729_fu_53814_p2() {
    mul_ln1118_1729_fu_53814_p2 = (!ap_const_lv47_2B0C.is_01() || !mul_ln1118_1729_fu_53814_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2B0C) * sc_bigint<32>(mul_ln1118_1729_fu_53814_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_172_fu_10796_p1() {
    mul_ln1118_172_fu_10796_p1 = tmp_5_fu_4210_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_172_fu_10796_p2() {
    mul_ln1118_172_fu_10796_p2 = (!ap_const_lv38_3FFFFFFFED.is_01() || !mul_ln1118_172_fu_10796_p1.read().is_01())? sc_lv<38>(): sc_bigint<38>(ap_const_lv38_3FFFFFFFED) * sc_bigint<32>(mul_ln1118_172_fu_10796_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1730_fu_53834_p1() {
    mul_ln1118_1730_fu_53834_p1 =  (sc_lv<32>) (sext_ln1118_358_fu_6856_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1730_fu_53834_p2() {
    mul_ln1118_1730_fu_53834_p2 = (!ap_const_lv46_3FFFFFFFE2B2.is_01() || !mul_ln1118_1730_fu_53834_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE2B2) * sc_bigint<32>(mul_ln1118_1730_fu_53834_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1731_fu_53854_p1() {
    mul_ln1118_1731_fu_53854_p1 =  (sc_lv<32>) (sext_ln1118_364_fu_6910_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1731_fu_53854_p2() {
    mul_ln1118_1731_fu_53854_p2 = (!ap_const_lv47_7FFFFFFFC231.is_01() || !mul_ln1118_1731_fu_53854_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC231) * sc_bigint<32>(mul_ln1118_1731_fu_53854_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1732_fu_53874_p1() {
    mul_ln1118_1732_fu_53874_p1 =  (sc_lv<32>) (sext_ln1118_369_fu_6960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1732_fu_53874_p2() {
    mul_ln1118_1732_fu_53874_p2 = (!ap_const_lv47_7FFFFFFFC017.is_01() || !mul_ln1118_1732_fu_53874_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC017) * sc_bigint<32>(mul_ln1118_1732_fu_53874_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1733_fu_53894_p1() {
    mul_ln1118_1733_fu_53894_p1 =  (sc_lv<32>) (sext_ln1118_373_fu_7006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1733_fu_53894_p2() {
    mul_ln1118_1733_fu_53894_p2 = (!ap_const_lv48_FFFFFFFF9E7B.is_01() || !mul_ln1118_1733_fu_53894_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9E7B) * sc_bigint<32>(mul_ln1118_1733_fu_53894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1734_fu_53942_p1() {
    mul_ln1118_1734_fu_53942_p1 =  (sc_lv<32>) (sext_ln1118_386_fu_7114_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1734_fu_53942_p2() {
    mul_ln1118_1734_fu_53942_p2 = (!ap_const_lv48_FFFFFFFFB269.is_01() || !mul_ln1118_1734_fu_53942_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB269) * sc_bigint<32>(mul_ln1118_1734_fu_53942_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1735_fu_54392_p1() {
    mul_ln1118_1735_fu_54392_p1 =  (sc_lv<32>) (sext_ln1118_3_fu_3930_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1735_fu_54392_p2() {
    mul_ln1118_1735_fu_54392_p2 = (!ap_const_lv44_62F.is_01() || !mul_ln1118_1735_fu_54392_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_62F) * sc_bigint<32>(mul_ln1118_1735_fu_54392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1736_fu_54412_p1() {
    mul_ln1118_1736_fu_54412_p1 =  (sc_lv<32>) (sext_ln1118_12_fu_3996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1736_fu_54412_p2() {
    mul_ln1118_1736_fu_54412_p2 = (!ap_const_lv46_1D01.is_01() || !mul_ln1118_1736_fu_54412_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1D01) * sc_bigint<32>(mul_ln1118_1736_fu_54412_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1737_fu_54432_p1() {
    mul_ln1118_1737_fu_54432_p1 = tmp_2_fu_4020_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1737_fu_54432_p2() {
    mul_ln1118_1737_fu_54432_p2 = (!ap_const_lv41_1FFFFFFFF0A.is_01() || !mul_ln1118_1737_fu_54432_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF0A) * sc_bigint<32>(mul_ln1118_1737_fu_54432_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1738_fu_54452_p1() {
    mul_ln1118_1738_fu_54452_p1 =  (sc_lv<32>) (sext_ln1118_27_fu_4116_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1738_fu_54452_p2() {
    mul_ln1118_1738_fu_54452_p2 = (!ap_const_lv46_12A7.is_01() || !mul_ln1118_1738_fu_54452_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_12A7) * sc_bigint<32>(mul_ln1118_1738_fu_54452_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1739_fu_54472_p1() {
    mul_ln1118_1739_fu_54472_p1 =  (sc_lv<32>) (sext_ln1118_37_fu_4186_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1739_fu_54472_p2() {
    mul_ln1118_1739_fu_54472_p2 = (!ap_const_lv43_206.is_01() || !mul_ln1118_1739_fu_54472_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_206) * sc_bigint<32>(mul_ln1118_1739_fu_54472_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_173_fu_10816_p1() {
    mul_ln1118_173_fu_10816_p1 =  (sc_lv<32>) (sext_ln1118_50_fu_4298_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_173_fu_10816_p2() {
    mul_ln1118_173_fu_10816_p2 = (!ap_const_lv47_7FFFFFFFDA54.is_01() || !mul_ln1118_173_fu_10816_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDA54) * sc_bigint<32>(mul_ln1118_173_fu_10816_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1740_fu_54492_p1() {
    mul_ln1118_1740_fu_54492_p1 =  (sc_lv<32>) (sext_ln1118_48_fu_4260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1740_fu_54492_p2() {
    mul_ln1118_1740_fu_54492_p2 = (!ap_const_lv44_FFFFFFFFB6E.is_01() || !mul_ln1118_1740_fu_54492_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFB6E) * sc_bigint<32>(mul_ln1118_1740_fu_54492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1741_fu_54512_p1() {
    mul_ln1118_1741_fu_54512_p1 =  (sc_lv<32>) (sext_ln1118_52_fu_4306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1741_fu_54512_p2() {
    mul_ln1118_1741_fu_54512_p2 = (!ap_const_lv48_FFFFFFFF7C82.is_01() || !mul_ln1118_1741_fu_54512_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF7C82) * sc_bigint<32>(mul_ln1118_1741_fu_54512_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1742_fu_54528_p1() {
    mul_ln1118_1742_fu_54528_p1 =  (sc_lv<32>) (sext_ln1118_60_fu_4368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1742_fu_54528_p2() {
    mul_ln1118_1742_fu_54528_p2 = (!ap_const_lv44_FFFFFFFF963.is_01() || !mul_ln1118_1742_fu_54528_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF963) * sc_bigint<32>(mul_ln1118_1742_fu_54528_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1743_fu_54548_p1() {
    mul_ln1118_1743_fu_54548_p1 =  (sc_lv<32>) (sext_ln1118_65_fu_4418_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1743_fu_54548_p2() {
    mul_ln1118_1743_fu_54548_p2 = (!ap_const_lv43_7FFFFFFFDE9.is_01() || !mul_ln1118_1743_fu_54548_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFDE9) * sc_bigint<32>(mul_ln1118_1743_fu_54548_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1744_fu_54568_p1() {
    mul_ln1118_1744_fu_54568_p1 =  (sc_lv<32>) (sext_ln1118_71_fu_4472_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1744_fu_54568_p2() {
    mul_ln1118_1744_fu_54568_p2 = (!ap_const_lv48_A621.is_01() || !mul_ln1118_1744_fu_54568_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_A621) * sc_bigint<32>(mul_ln1118_1744_fu_54568_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1745_fu_54584_p1() {
    mul_ln1118_1745_fu_54584_p1 =  (sc_lv<32>) (sext_ln1118_77_fu_4526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1745_fu_54584_p2() {
    mul_ln1118_1745_fu_54584_p2 = (!ap_const_lv45_AAD.is_01() || !mul_ln1118_1745_fu_54584_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_AAD) * sc_bigint<32>(mul_ln1118_1745_fu_54584_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1746_fu_54604_p1() {
    mul_ln1118_1746_fu_54604_p1 =  (sc_lv<32>) (sext_ln1118_87_fu_4596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1746_fu_54604_p2() {
    mul_ln1118_1746_fu_54604_p2 = (!ap_const_lv44_FFFFFFFFB08.is_01() || !mul_ln1118_1746_fu_54604_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFB08) * sc_bigint<32>(mul_ln1118_1746_fu_54604_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1747_fu_54624_p1() {
    mul_ln1118_1747_fu_54624_p1 =  (sc_lv<32>) (sext_ln1118_93_fu_4650_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1747_fu_54624_p2() {
    mul_ln1118_1747_fu_54624_p2 = (!ap_const_lv48_8B38.is_01() || !mul_ln1118_1747_fu_54624_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_8B38) * sc_bigint<32>(mul_ln1118_1747_fu_54624_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1748_fu_54640_p1() {
    mul_ln1118_1748_fu_54640_p1 =  (sc_lv<32>) (sext_ln1118_100_fu_4708_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1748_fu_54640_p2() {
    mul_ln1118_1748_fu_54640_p2 = (!ap_const_lv47_7FFFFFFFC8D5.is_01() || !mul_ln1118_1748_fu_54640_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC8D5) * sc_bigint<32>(mul_ln1118_1748_fu_54640_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1749_fu_54660_p1() {
    mul_ln1118_1749_fu_54660_p1 =  (sc_lv<32>) (sext_ln1118_107_fu_4766_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1749_fu_54660_p2() {
    mul_ln1118_1749_fu_54660_p2 = (!ap_const_lv47_233B.is_01() || !mul_ln1118_1749_fu_54660_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_233B) * sc_bigint<32>(mul_ln1118_1749_fu_54660_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_174_fu_10836_p1() {
    mul_ln1118_174_fu_10836_p1 =  (sc_lv<32>) (sext_ln1118_57_fu_4356_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_174_fu_10836_p2() {
    mul_ln1118_174_fu_10836_p2 = (!ap_const_lv46_10CA.is_01() || !mul_ln1118_174_fu_10836_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_10CA) * sc_bigint<32>(mul_ln1118_174_fu_10836_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1750_fu_54680_p1() {
    mul_ln1118_1750_fu_54680_p1 =  (sc_lv<32>) (sext_ln1118_116_fu_4832_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1750_fu_54680_p2() {
    mul_ln1118_1750_fu_54680_p2 = (!ap_const_lv45_1FFFFFFFF71E.is_01() || !mul_ln1118_1750_fu_54680_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF71E) * sc_bigint<32>(mul_ln1118_1750_fu_54680_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1751_fu_54700_p1() {
    mul_ln1118_1751_fu_54700_p1 =  (sc_lv<32>) (sext_ln1118_122_fu_4886_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1751_fu_54700_p2() {
    mul_ln1118_1751_fu_54700_p2 = (!ap_const_lv45_EDF.is_01() || !mul_ln1118_1751_fu_54700_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_EDF) * sc_bigint<32>(mul_ln1118_1751_fu_54700_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1752_fu_54720_p1() {
    mul_ln1118_1752_fu_54720_p1 =  (sc_lv<32>) (sext_ln1118_129_fu_4944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1752_fu_54720_p2() {
    mul_ln1118_1752_fu_54720_p2 = (!ap_const_lv44_4FB.is_01() || !mul_ln1118_1752_fu_54720_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_4FB) * sc_bigint<32>(mul_ln1118_1752_fu_54720_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1753_fu_54740_p1() {
    mul_ln1118_1753_fu_54740_p1 =  (sc_lv<32>) (sext_ln1118_136_fu_5002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1753_fu_54740_p2() {
    mul_ln1118_1753_fu_54740_p2 = (!ap_const_lv47_7FFFFFFFD18B.is_01() || !mul_ln1118_1753_fu_54740_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD18B) * sc_bigint<32>(mul_ln1118_1753_fu_54740_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1754_fu_54760_p1() {
    mul_ln1118_1754_fu_54760_p1 =  (sc_lv<32>) (sext_ln1118_143_fu_5056_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1754_fu_54760_p2() {
    mul_ln1118_1754_fu_54760_p2 = (!ap_const_lv44_71D.is_01() || !mul_ln1118_1754_fu_54760_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_71D) * sc_bigint<32>(mul_ln1118_1754_fu_54760_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1755_fu_54780_p1() {
    mul_ln1118_1755_fu_54780_p1 = tmp_19_fu_5080_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1755_fu_54780_p2() {
    mul_ln1118_1755_fu_54780_p2 = (!ap_const_lv41_1FFFFFFFF6C.is_01() || !mul_ln1118_1755_fu_54780_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF6C) * sc_bigint<32>(mul_ln1118_1755_fu_54780_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1756_fu_54800_p1() {
    mul_ln1118_1756_fu_54800_p1 =  (sc_lv<32>) (sext_ln1118_157_fu_5172_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1756_fu_54800_p2() {
    mul_ln1118_1756_fu_54800_p2 = (!ap_const_lv46_3FFFFFFFEAC4.is_01() || !mul_ln1118_1756_fu_54800_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEAC4) * sc_bigint<32>(mul_ln1118_1756_fu_54800_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1757_fu_54820_p1() {
    mul_ln1118_1757_fu_54820_p1 =  (sc_lv<32>) (sext_ln1118_163_fu_5226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1757_fu_54820_p2() {
    mul_ln1118_1757_fu_54820_p2 = (!ap_const_lv47_7FFFFFFFDA42.is_01() || !mul_ln1118_1757_fu_54820_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDA42) * sc_bigint<32>(mul_ln1118_1757_fu_54820_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1758_fu_54840_p1() {
    mul_ln1118_1758_fu_54840_p1 =  (sc_lv<32>) (sext_ln1118_171_fu_5288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1758_fu_54840_p2() {
    mul_ln1118_1758_fu_54840_p2 = (!ap_const_lv48_FFFFFFFFBEF9.is_01() || !mul_ln1118_1758_fu_54840_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBEF9) * sc_bigint<32>(mul_ln1118_1758_fu_54840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1759_fu_54856_p1() {
    mul_ln1118_1759_fu_54856_p1 =  (sc_lv<32>) (sext_ln1118_176_fu_5338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1759_fu_54856_p2() {
    mul_ln1118_1759_fu_54856_p2 = (!ap_const_lv48_FFFFFFFFB78B.is_01() || !mul_ln1118_1759_fu_54856_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB78B) * sc_bigint<32>(mul_ln1118_1759_fu_54856_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_175_fu_10856_p1() {
    mul_ln1118_175_fu_10856_p1 =  (sc_lv<32>) (sext_ln1118_64_fu_4414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_175_fu_10856_p2() {
    mul_ln1118_175_fu_10856_p2 = (!ap_const_lv45_AB2.is_01() || !mul_ln1118_175_fu_10856_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_AB2) * sc_bigint<32>(mul_ln1118_175_fu_10856_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1760_fu_54872_p1() {
    mul_ln1118_1760_fu_54872_p1 =  (sc_lv<32>) (sext_ln1118_183_fu_5396_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1760_fu_54872_p2() {
    mul_ln1118_1760_fu_54872_p2 = (!ap_const_lv43_7FFFFFFFD38.is_01() || !mul_ln1118_1760_fu_54872_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD38) * sc_bigint<32>(mul_ln1118_1760_fu_54872_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1761_fu_54892_p1() {
    mul_ln1118_1761_fu_54892_p1 =  (sc_lv<32>) (sext_ln1118_189_fu_5446_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1761_fu_54892_p2() {
    mul_ln1118_1761_fu_54892_p2 = (!ap_const_lv45_B93.is_01() || !mul_ln1118_1761_fu_54892_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_B93) * sc_bigint<32>(mul_ln1118_1761_fu_54892_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1762_fu_54912_p1() {
    mul_ln1118_1762_fu_54912_p1 =  (sc_lv<32>) (sext_ln1118_194_fu_5496_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1762_fu_54912_p2() {
    mul_ln1118_1762_fu_54912_p2 = (!ap_const_lv44_764.is_01() || !mul_ln1118_1762_fu_54912_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_764) * sc_bigint<32>(mul_ln1118_1762_fu_54912_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1763_fu_54932_p1() {
    mul_ln1118_1763_fu_54932_p1 =  (sc_lv<32>) (sext_ln1118_201_fu_5554_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1763_fu_54932_p2() {
    mul_ln1118_1763_fu_54932_p2 = (!ap_const_lv44_523.is_01() || !mul_ln1118_1763_fu_54932_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_523) * sc_bigint<32>(mul_ln1118_1763_fu_54932_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1764_fu_54952_p1() {
    mul_ln1118_1764_fu_54952_p1 =  (sc_lv<32>) (sext_ln1118_210_fu_5620_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1764_fu_54952_p2() {
    mul_ln1118_1764_fu_54952_p2 = (!ap_const_lv43_7FFFFFFFD8B.is_01() || !mul_ln1118_1764_fu_54952_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD8B) * sc_bigint<32>(mul_ln1118_1764_fu_54952_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1765_fu_54972_p1() {
    mul_ln1118_1765_fu_54972_p1 =  (sc_lv<32>) (sext_ln1118_217_fu_5678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1765_fu_54972_p2() {
    mul_ln1118_1765_fu_54972_p2 = (!ap_const_lv45_DD6.is_01() || !mul_ln1118_1765_fu_54972_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_DD6) * sc_bigint<32>(mul_ln1118_1765_fu_54972_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1766_fu_54992_p1() {
    mul_ln1118_1766_fu_54992_p1 =  (sc_lv<32>) (sext_ln1118_223_fu_5732_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1766_fu_54992_p2() {
    mul_ln1118_1766_fu_54992_p2 = (!ap_const_lv43_367.is_01() || !mul_ln1118_1766_fu_54992_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_367) * sc_bigint<32>(mul_ln1118_1766_fu_54992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1767_fu_55012_p1() {
    mul_ln1118_1767_fu_55012_p1 =  (sc_lv<32>) (sext_ln1118_231_fu_5794_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1767_fu_55012_p2() {
    mul_ln1118_1767_fu_55012_p2 = (!ap_const_lv45_1FFFFFFFF6A0.is_01() || !mul_ln1118_1767_fu_55012_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF6A0) * sc_bigint<32>(mul_ln1118_1767_fu_55012_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1768_fu_55032_p1() {
    mul_ln1118_1768_fu_55032_p1 =  (sc_lv<32>) (sext_ln1118_236_fu_5840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1768_fu_55032_p2() {
    mul_ln1118_1768_fu_55032_p2 = (!ap_const_lv45_DDB.is_01() || !mul_ln1118_1768_fu_55032_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_DDB) * sc_bigint<32>(mul_ln1118_1768_fu_55032_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1769_fu_55052_p1() {
    mul_ln1118_1769_fu_55052_p1 =  (sc_lv<32>) (sext_ln1118_244_fu_5898_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1769_fu_55052_p2() {
    mul_ln1118_1769_fu_55052_p2 = (!ap_const_lv47_26DB.is_01() || !mul_ln1118_1769_fu_55052_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_26DB) * sc_bigint<32>(mul_ln1118_1769_fu_55052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_176_fu_10876_p1() {
    mul_ln1118_176_fu_10876_p1 =  (sc_lv<32>) (sext_ln1118_69_fu_4464_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_176_fu_10876_p2() {
    mul_ln1118_176_fu_10876_p2 = (!ap_const_lv47_343F.is_01() || !mul_ln1118_176_fu_10876_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_343F) * sc_bigint<32>(mul_ln1118_176_fu_10876_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1770_fu_55072_p1() {
    mul_ln1118_1770_fu_55072_p1 =  (sc_lv<32>) (sext_ln1118_253_fu_5960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1770_fu_55072_p2() {
    mul_ln1118_1770_fu_55072_p2 = (!ap_const_lv47_7FFFFFFFD64D.is_01() || !mul_ln1118_1770_fu_55072_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD64D) * sc_bigint<32>(mul_ln1118_1770_fu_55072_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1771_fu_55092_p1() {
    mul_ln1118_1771_fu_55092_p1 =  (sc_lv<32>) (sext_ln1118_258_fu_6010_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1771_fu_55092_p2() {
    mul_ln1118_1771_fu_55092_p2 = (!ap_const_lv45_1FFFFFFFF724.is_01() || !mul_ln1118_1771_fu_55092_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF724) * sc_bigint<32>(mul_ln1118_1771_fu_55092_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1772_fu_55112_p1() {
    mul_ln1118_1772_fu_55112_p1 =  (sc_lv<32>) (sext_ln1118_264_fu_6060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1772_fu_55112_p2() {
    mul_ln1118_1772_fu_55112_p2 = (!ap_const_lv46_1CFF.is_01() || !mul_ln1118_1772_fu_55112_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1CFF) * sc_bigint<32>(mul_ln1118_1772_fu_55112_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1773_fu_55132_p1() {
    mul_ln1118_1773_fu_55132_p1 =  (sc_lv<32>) (sext_ln1118_270_fu_6110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1773_fu_55132_p2() {
    mul_ln1118_1773_fu_55132_p2 = (!ap_const_lv47_2081.is_01() || !mul_ln1118_1773_fu_55132_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2081) * sc_bigint<32>(mul_ln1118_1773_fu_55132_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1774_fu_55152_p1() {
    mul_ln1118_1774_fu_55152_p1 =  (sc_lv<32>) (sext_ln1118_276_fu_6164_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1774_fu_55152_p2() {
    mul_ln1118_1774_fu_55152_p2 = (!ap_const_lv46_3FFFFFFFE1C3.is_01() || !mul_ln1118_1774_fu_55152_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE1C3) * sc_bigint<32>(mul_ln1118_1774_fu_55152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1775_fu_55172_p1() {
    mul_ln1118_1775_fu_55172_p1 =  (sc_lv<32>) (sext_ln1118_282_fu_6214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1775_fu_55172_p2() {
    mul_ln1118_1775_fu_55172_p2 = (!ap_const_lv45_9F6.is_01() || !mul_ln1118_1775_fu_55172_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_9F6) * sc_bigint<32>(mul_ln1118_1775_fu_55172_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1776_fu_55192_p1() {
    mul_ln1118_1776_fu_55192_p1 =  (sc_lv<32>) (sext_ln1118_285_fu_6256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1776_fu_55192_p2() {
    mul_ln1118_1776_fu_55192_p2 = (!ap_const_lv46_3FFFFFFFEAEE.is_01() || !mul_ln1118_1776_fu_55192_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEAEE) * sc_bigint<32>(mul_ln1118_1776_fu_55192_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1777_fu_55212_p1() {
    mul_ln1118_1777_fu_55212_p1 =  (sc_lv<32>) (sext_ln1118_294_fu_6322_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1777_fu_55212_p2() {
    mul_ln1118_1777_fu_55212_p2 = (!ap_const_lv44_FFFFFFFF888.is_01() || !mul_ln1118_1777_fu_55212_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF888) * sc_bigint<32>(mul_ln1118_1777_fu_55212_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1778_fu_55232_p1() {
    mul_ln1118_1778_fu_55232_p1 =  (sc_lv<32>) (sext_ln1118_300_fu_6372_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1778_fu_55232_p2() {
    mul_ln1118_1778_fu_55232_p2 = (!ap_const_lv46_11DA.is_01() || !mul_ln1118_1778_fu_55232_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_11DA) * sc_bigint<32>(mul_ln1118_1778_fu_55232_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1779_fu_55252_p1() {
    mul_ln1118_1779_fu_55252_p1 =  (sc_lv<32>) (sext_ln1118_307_fu_6430_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1779_fu_55252_p2() {
    mul_ln1118_1779_fu_55252_p2 = (!ap_const_lv44_FFFFFFFF844.is_01() || !mul_ln1118_1779_fu_55252_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF844) * sc_bigint<32>(mul_ln1118_1779_fu_55252_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_177_fu_10896_p1() {
    mul_ln1118_177_fu_10896_p1 =  (sc_lv<32>) (sext_ln1118_73_fu_4510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_177_fu_10896_p2() {
    mul_ln1118_177_fu_10896_p2 = (!ap_const_lv46_3FFFFFFFE6F1.is_01() || !mul_ln1118_177_fu_10896_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE6F1) * sc_bigint<32>(mul_ln1118_177_fu_10896_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1780_fu_55272_p1() {
    mul_ln1118_1780_fu_55272_p1 =  (sc_lv<32>) (sext_ln1118_315_fu_6492_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1780_fu_55272_p2() {
    mul_ln1118_1780_fu_55272_p2 = (!ap_const_lv48_FFFFFFFF8A94.is_01() || !mul_ln1118_1780_fu_55272_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF8A94) * sc_bigint<32>(mul_ln1118_1780_fu_55272_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1781_fu_55288_p1() {
    mul_ln1118_1781_fu_55288_p1 =  (sc_lv<32>) (sext_ln1118_322_fu_6546_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1781_fu_55288_p2() {
    mul_ln1118_1781_fu_55288_p2 = (!ap_const_lv43_7FFFFFFFC43.is_01() || !mul_ln1118_1781_fu_55288_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFC43) * sc_bigint<32>(mul_ln1118_1781_fu_55288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1782_fu_55308_p1() {
    mul_ln1118_1782_fu_55308_p1 =  (sc_lv<32>) (sext_ln1118_329_fu_6604_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1782_fu_55308_p2() {
    mul_ln1118_1782_fu_55308_p2 = (!ap_const_lv44_FFFFFFFFAAB.is_01() || !mul_ln1118_1782_fu_55308_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFAAB) * sc_bigint<32>(mul_ln1118_1782_fu_55308_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1783_fu_55328_p1() {
    mul_ln1118_1783_fu_55328_p1 =  (sc_lv<32>) (sext_ln1118_339_fu_6690_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1783_fu_55328_p2() {
    mul_ln1118_1783_fu_55328_p2 = (!ap_const_lv47_7FFFFFFFD4D3.is_01() || !mul_ln1118_1783_fu_55328_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD4D3) * sc_bigint<32>(mul_ln1118_1783_fu_55328_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1784_fu_55348_p1() {
    mul_ln1118_1784_fu_55348_p1 =  (sc_lv<32>) (sext_ln1118_345_fu_6744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1784_fu_55348_p2() {
    mul_ln1118_1784_fu_55348_p2 = (!ap_const_lv46_1D01.is_01() || !mul_ln1118_1784_fu_55348_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1D01) * sc_bigint<32>(mul_ln1118_1784_fu_55348_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1785_fu_55368_p1() {
    mul_ln1118_1785_fu_55368_p1 =  (sc_lv<32>) (sext_ln1118_353_fu_6806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1785_fu_55368_p2() {
    mul_ln1118_1785_fu_55368_p2 = (!ap_const_lv46_14A6.is_01() || !mul_ln1118_1785_fu_55368_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_14A6) * sc_bigint<32>(mul_ln1118_1785_fu_55368_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1786_fu_55388_p1() {
    mul_ln1118_1786_fu_55388_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1786_fu_55388_p2() {
    mul_ln1118_1786_fu_55388_p2 = (!ap_const_lv48_FFFFFFFFB957.is_01() || !mul_ln1118_1786_fu_55388_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB957) * sc_bigint<32>(mul_ln1118_1786_fu_55388_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1787_fu_55404_p1() {
    mul_ln1118_1787_fu_55404_p1 =  (sc_lv<32>) (sext_ln1118_365_fu_6914_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1787_fu_55404_p2() {
    mul_ln1118_1787_fu_55404_p2 = (!ap_const_lv43_384.is_01() || !mul_ln1118_1787_fu_55404_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_384) * sc_bigint<32>(mul_ln1118_1787_fu_55404_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1788_fu_55424_p1() {
    mul_ln1118_1788_fu_55424_p1 =  (sc_lv<32>) (sext_ln1118_370_fu_6964_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1788_fu_55424_p2() {
    mul_ln1118_1788_fu_55424_p2 = (!ap_const_lv46_1DE0.is_01() || !mul_ln1118_1788_fu_55424_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1DE0) * sc_bigint<32>(mul_ln1118_1788_fu_55424_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1789_fu_55444_p1() {
    mul_ln1118_1789_fu_55444_p1 =  (sc_lv<32>) (sext_ln1118_374_fu_7010_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1789_fu_55444_p2() {
    mul_ln1118_1789_fu_55444_p2 = (!ap_const_lv47_7FFFFFFFC84C.is_01() || !mul_ln1118_1789_fu_55444_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC84C) * sc_bigint<32>(mul_ln1118_1789_fu_55444_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_178_fu_10916_p1() {
    mul_ln1118_178_fu_10916_p1 =  (sc_lv<32>) (sext_ln1118_86_fu_4592_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_178_fu_10916_p2() {
    mul_ln1118_178_fu_10916_p2 = (!ap_const_lv47_7FFFFFFFD99A.is_01() || !mul_ln1118_178_fu_10916_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD99A) * sc_bigint<32>(mul_ln1118_178_fu_10916_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1790_fu_55464_p1() {
    mul_ln1118_1790_fu_55464_p1 =  (sc_lv<32>) (sext_ln1118_380_fu_7060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1790_fu_55464_p2() {
    mul_ln1118_1790_fu_55464_p2 = (!ap_const_lv43_2FE.is_01() || !mul_ln1118_1790_fu_55464_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_2FE) * sc_bigint<32>(mul_ln1118_1790_fu_55464_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_179_fu_10936_p1() {
    mul_ln1118_179_fu_10936_p1 =  (sc_lv<32>) (sext_ln1118_90_fu_4638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_179_fu_10936_p2() {
    mul_ln1118_179_fu_10936_p2 = (!ap_const_lv47_7FFFFFFFCF92.is_01() || !mul_ln1118_179_fu_10936_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCF92) * sc_bigint<32>(mul_ln1118_179_fu_10936_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_17_fu_4952_p1() {
    mul_ln1118_17_fu_4952_p1 =  (sc_lv<32>) (sext_ln1118_126_fu_4932_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_17_fu_4952_p2() {
    mul_ln1118_17_fu_4952_p2 = (!ap_const_lv45_1FFFFFFFF3AC.is_01() || !mul_ln1118_17_fu_4952_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF3AC) * sc_bigint<32>(mul_ln1118_17_fu_4952_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_180_fu_10994_p1() {
    mul_ln1118_180_fu_10994_p1 =  (sc_lv<32>) (sext_ln1118_104_fu_4754_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_180_fu_10994_p2() {
    mul_ln1118_180_fu_10994_p2 = (!ap_const_lv46_128C.is_01() || !mul_ln1118_180_fu_10994_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_128C) * sc_bigint<32>(mul_ln1118_180_fu_10994_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_181_fu_11014_p1() {
    mul_ln1118_181_fu_11014_p1 =  (sc_lv<32>) (sext_ln1118_115_fu_4828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_181_fu_11014_p2() {
    mul_ln1118_181_fu_11014_p2 = (!ap_const_lv44_765.is_01() || !mul_ln1118_181_fu_11014_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_765) * sc_bigint<32>(mul_ln1118_181_fu_11014_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_182_fu_11034_p1() {
    mul_ln1118_182_fu_11034_p1 =  (sc_lv<32>) (sext_ln1118_118_fu_4870_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_182_fu_11034_p2() {
    mul_ln1118_182_fu_11034_p2 = (!ap_const_lv44_FFFFFFFF898.is_01() || !mul_ln1118_182_fu_11034_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF898) * sc_bigint<32>(mul_ln1118_182_fu_11034_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_183_fu_11054_p1() {
    mul_ln1118_183_fu_11054_p1 =  (sc_lv<32>) (sext_ln1118_129_fu_4944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_183_fu_11054_p2() {
    mul_ln1118_183_fu_11054_p2 = (!ap_const_lv44_432.is_01() || !mul_ln1118_183_fu_11054_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_432) * sc_bigint<32>(mul_ln1118_183_fu_11054_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_184_fu_11074_p1() {
    mul_ln1118_184_fu_11074_p1 =  (sc_lv<32>) (sext_ln1118_136_fu_5002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_184_fu_11074_p2() {
    mul_ln1118_184_fu_11074_p2 = (!ap_const_lv47_7FFFFFFFDAEC.is_01() || !mul_ln1118_184_fu_11074_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDAEC) * sc_bigint<32>(mul_ln1118_184_fu_11074_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_185_fu_11094_p1() {
    mul_ln1118_185_fu_11094_p1 =  (sc_lv<32>) (sext_ln1118_137_fu_5032_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_185_fu_11094_p2() {
    mul_ln1118_185_fu_11094_p2 = (!ap_const_lv42_167.is_01() || !mul_ln1118_185_fu_11094_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_167) * sc_bigint<32>(mul_ln1118_185_fu_11094_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_186_fu_11114_p1() {
    mul_ln1118_186_fu_11114_p1 =  (sc_lv<32>) (sext_ln1118_148_fu_5106_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_186_fu_11114_p2() {
    mul_ln1118_186_fu_11114_p2 = (!ap_const_lv45_1FFFFFFFF3B9.is_01() || !mul_ln1118_186_fu_11114_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF3B9) * sc_bigint<32>(mul_ln1118_186_fu_11114_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_187_fu_11134_p1() {
    mul_ln1118_187_fu_11134_p1 =  (sc_lv<32>) (sext_ln1118_156_fu_5168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_187_fu_11134_p2() {
    mul_ln1118_187_fu_11134_p2 = (!ap_const_lv48_55D1.is_01() || !mul_ln1118_187_fu_11134_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_55D1) * sc_bigint<32>(mul_ln1118_187_fu_11134_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_188_fu_11150_p1() {
    mul_ln1118_188_fu_11150_p1 =  (sc_lv<32>) (sext_ln1118_159_fu_5210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_188_fu_11150_p2() {
    mul_ln1118_188_fu_11150_p2 = (!ap_const_lv46_1114.is_01() || !mul_ln1118_188_fu_11150_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1114) * sc_bigint<32>(mul_ln1118_188_fu_11150_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_189_fu_11170_p1() {
    mul_ln1118_189_fu_11170_p1 =  (sc_lv<32>) (sext_ln1118_171_fu_5288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_189_fu_11170_p2() {
    mul_ln1118_189_fu_11170_p2 = (!ap_const_lv48_623C.is_01() || !mul_ln1118_189_fu_11170_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_623C) * sc_bigint<32>(mul_ln1118_189_fu_11170_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_18_fu_5006_p1() {
    mul_ln1118_18_fu_5006_p1 =  (sc_lv<32>) (sext_ln1118_132_fu_4986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_18_fu_5006_p2() {
    mul_ln1118_18_fu_5006_p2 = (!ap_const_lv48_72D8.is_01() || !mul_ln1118_18_fu_5006_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_72D8) * sc_bigint<32>(mul_ln1118_18_fu_5006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_190_fu_11186_p1() {
    mul_ln1118_190_fu_11186_p1 =  (sc_lv<32>) (sext_ln1118_175_fu_5334_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_190_fu_11186_p2() {
    mul_ln1118_190_fu_11186_p2 = (!ap_const_lv46_1ACF.is_01() || !mul_ln1118_190_fu_11186_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1ACF) * sc_bigint<32>(mul_ln1118_190_fu_11186_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_191_fu_11206_p1() {
    mul_ln1118_191_fu_11206_p1 =  (sc_lv<32>) (sext_ln1118_182_fu_5392_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_191_fu_11206_p2() {
    mul_ln1118_191_fu_11206_p2 = (!ap_const_lv47_2A11.is_01() || !mul_ln1118_191_fu_11206_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2A11) * sc_bigint<32>(mul_ln1118_191_fu_11206_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_192_fu_11226_p1() {
    mul_ln1118_192_fu_11226_p1 =  (sc_lv<32>) (sext_ln1118_187_fu_5438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_192_fu_11226_p2() {
    mul_ln1118_192_fu_11226_p2 = (!ap_const_lv47_7FFFFFFFD311.is_01() || !mul_ln1118_192_fu_11226_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD311) * sc_bigint<32>(mul_ln1118_192_fu_11226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_193_fu_11246_p1() {
    mul_ln1118_193_fu_11246_p1 =  (sc_lv<32>) (sext_ln1118_194_fu_5496_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_193_fu_11246_p2() {
    mul_ln1118_193_fu_11246_p2 = (!ap_const_lv44_78B.is_01() || !mul_ln1118_193_fu_11246_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_78B) * sc_bigint<32>(mul_ln1118_193_fu_11246_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_194_fu_11266_p1() {
    mul_ln1118_194_fu_11266_p1 =  (sc_lv<32>) (sext_ln1118_200_fu_5550_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_194_fu_11266_p2() {
    mul_ln1118_194_fu_11266_p2 = (!ap_const_lv45_FDF.is_01() || !mul_ln1118_194_fu_11266_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_FDF) * sc_bigint<32>(mul_ln1118_194_fu_11266_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_195_fu_11286_p1() {
    mul_ln1118_195_fu_11286_p1 =  (sc_lv<32>) (sext_ln1118_205_fu_5600_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_195_fu_11286_p2() {
    mul_ln1118_195_fu_11286_p2 = (!ap_const_lv40_54.is_01() || !mul_ln1118_195_fu_11286_p1.read().is_01())? sc_lv<40>(): sc_biguint<40>(ap_const_lv40_54) * sc_bigint<32>(mul_ln1118_195_fu_11286_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_196_fu_11306_p1() {
    mul_ln1118_196_fu_11306_p1 =  (sc_lv<32>) (sext_ln1118_212_fu_5658_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_196_fu_11306_p2() {
    mul_ln1118_196_fu_11306_p2 = (!ap_const_lv42_1E5.is_01() || !mul_ln1118_196_fu_11306_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_1E5) * sc_bigint<32>(mul_ln1118_196_fu_11306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_197_fu_11326_p1() {
    mul_ln1118_197_fu_11326_p1 =  (sc_lv<32>) (sext_ln1118_218_fu_5712_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_197_fu_11326_p2() {
    mul_ln1118_197_fu_11326_p2 = (!ap_const_lv41_1FFFFFFFF27.is_01() || !mul_ln1118_197_fu_11326_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF27) * sc_bigint<32>(mul_ln1118_197_fu_11326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_198_fu_11346_p1() {
    mul_ln1118_198_fu_11346_p1 =  (sc_lv<32>) (sext_ln1118_231_fu_5794_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_198_fu_11346_p2() {
    mul_ln1118_198_fu_11346_p2 = (!ap_const_lv45_1FFFFFFFF511.is_01() || !mul_ln1118_198_fu_11346_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF511) * sc_bigint<32>(mul_ln1118_198_fu_11346_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_199_fu_11366_p1() {
    mul_ln1118_199_fu_11366_p1 =  (sc_lv<32>) (sext_ln1118_236_fu_5840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_199_fu_11366_p2() {
    mul_ln1118_199_fu_11366_p2 = (!ap_const_lv45_83E.is_01() || !mul_ln1118_199_fu_11366_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_83E) * sc_bigint<32>(mul_ln1118_199_fu_11366_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_19_fu_5060_p1() {
    mul_ln1118_19_fu_5060_p1 =  (sc_lv<32>) (sext_ln1118_140_fu_5044_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_19_fu_5060_p2() {
    mul_ln1118_19_fu_5060_p2 = (!ap_const_lv46_1817.is_01() || !mul_ln1118_19_fu_5060_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1817) * sc_bigint<32>(mul_ln1118_19_fu_5060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1_fu_4000_p1() {
    mul_ln1118_1_fu_4000_p1 =  (sc_lv<32>) (sext_ln1118_8_fu_3980_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_1_fu_4000_p2() {
    mul_ln1118_1_fu_4000_p2 = (!ap_const_lv47_7FFFFFFFD8CF.is_01() || !mul_ln1118_1_fu_4000_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD8CF) * sc_bigint<32>(mul_ln1118_1_fu_4000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_200_fu_11386_p1() {
    mul_ln1118_200_fu_11386_p1 =  (sc_lv<32>) (sext_ln1118_242_fu_5890_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_200_fu_11386_p2() {
    mul_ln1118_200_fu_11386_p2 = (!ap_const_lv44_FFFFFFFFA6B.is_01() || !mul_ln1118_200_fu_11386_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA6B) * sc_bigint<32>(mul_ln1118_200_fu_11386_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_201_fu_11406_p1() {
    mul_ln1118_201_fu_11406_p1 =  (sc_lv<32>) (sext_ln1118_250_fu_5948_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_201_fu_11406_p2() {
    mul_ln1118_201_fu_11406_p2 = (!ap_const_lv44_55C.is_01() || !mul_ln1118_201_fu_11406_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_55C) * sc_bigint<32>(mul_ln1118_201_fu_11406_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_202_fu_11426_p1() {
    mul_ln1118_202_fu_11426_p1 =  (sc_lv<32>) (sext_ln1118_254_fu_5994_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_202_fu_11426_p2() {
    mul_ln1118_202_fu_11426_p2 = (!ap_const_lv47_7FFFFFFFD594.is_01() || !mul_ln1118_202_fu_11426_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD594) * sc_bigint<32>(mul_ln1118_202_fu_11426_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_203_fu_11446_p1() {
    mul_ln1118_203_fu_11446_p1 =  (sc_lv<32>) (sext_ln1118_260_fu_6044_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_203_fu_11446_p2() {
    mul_ln1118_203_fu_11446_p2 = (!ap_const_lv44_513.is_01() || !mul_ln1118_203_fu_11446_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_513) * sc_bigint<32>(mul_ln1118_203_fu_11446_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_204_fu_11466_p1() {
    mul_ln1118_204_fu_11466_p1 =  (sc_lv<32>) (sext_ln1118_268_fu_6102_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_204_fu_11466_p2() {
    mul_ln1118_204_fu_11466_p2 = (!ap_const_lv44_FFFFFFFFA90.is_01() || !mul_ln1118_204_fu_11466_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA90) * sc_bigint<32>(mul_ln1118_204_fu_11466_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_205_fu_11486_p1() {
    mul_ln1118_205_fu_11486_p1 =  (sc_lv<32>) (sext_ln1118_271_fu_6144_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_205_fu_11486_p2() {
    mul_ln1118_205_fu_11486_p2 = (!ap_const_lv45_8CA.is_01() || !mul_ln1118_205_fu_11486_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_8CA) * sc_bigint<32>(mul_ln1118_205_fu_11486_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_206_fu_11506_p1() {
    mul_ln1118_206_fu_11506_p1 =  (sc_lv<32>) (sext_ln1118_282_fu_6214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_206_fu_11506_p2() {
    mul_ln1118_206_fu_11506_p2 = (!ap_const_lv45_1FFFFFFFF647.is_01() || !mul_ln1118_206_fu_11506_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF647) * sc_bigint<32>(mul_ln1118_206_fu_11506_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_207_fu_11526_p1() {
    mul_ln1118_207_fu_11526_p1 =  (sc_lv<32>) (sext_ln1118_285_fu_6256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_207_fu_11526_p2() {
    mul_ln1118_207_fu_11526_p2 = (!ap_const_lv46_3FFFFFFFED34.is_01() || !mul_ln1118_207_fu_11526_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFED34) * sc_bigint<32>(mul_ln1118_207_fu_11526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_208_fu_11546_p1() {
    mul_ln1118_208_fu_11546_p1 =  (sc_lv<32>) (sext_ln1118_291_fu_6310_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_208_fu_11546_p2() {
    mul_ln1118_208_fu_11546_p2 = (!ap_const_lv47_3845.is_01() || !mul_ln1118_208_fu_11546_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3845) * sc_bigint<32>(mul_ln1118_208_fu_11546_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_209_fu_11566_p1() {
    mul_ln1118_209_fu_11566_p1 = tmp_42_fu_6342_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_209_fu_11566_p2() {
    mul_ln1118_209_fu_11566_p2 = (!ap_const_lv41_1FFFFFFFF5F.is_01() || !mul_ln1118_209_fu_11566_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF5F) * sc_bigint<32>(mul_ln1118_209_fu_11566_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_20_fu_5122_p1() {
    mul_ln1118_20_fu_5122_p1 =  (sc_lv<32>) (sext_ln1118_146_fu_5098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_20_fu_5122_p2() {
    mul_ln1118_20_fu_5122_p2 = (!ap_const_lv42_182.is_01() || !mul_ln1118_20_fu_5122_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_182) * sc_bigint<32>(mul_ln1118_20_fu_5122_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_210_fu_11586_p1() {
    mul_ln1118_210_fu_11586_p1 =  (sc_lv<32>) (sext_ln1118_306_fu_6426_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_210_fu_11586_p2() {
    mul_ln1118_210_fu_11586_p2 = (!ap_const_lv45_1FFFFFFFF775.is_01() || !mul_ln1118_210_fu_11586_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF775) * sc_bigint<32>(mul_ln1118_210_fu_11586_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_211_fu_11606_p1() {
    mul_ln1118_211_fu_11606_p1 =  (sc_lv<32>) (sext_ln1118_313_fu_6484_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_211_fu_11606_p2() {
    mul_ln1118_211_fu_11606_p2 = (!ap_const_lv47_3621.is_01() || !mul_ln1118_211_fu_11606_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3621) * sc_bigint<32>(mul_ln1118_211_fu_11606_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_212_fu_11626_p1() {
    mul_ln1118_212_fu_11626_p1 =  (sc_lv<32>) (sext_ln1118_322_fu_6546_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_212_fu_11626_p2() {
    mul_ln1118_212_fu_11626_p2 = (!ap_const_lv43_392.is_01() || !mul_ln1118_212_fu_11626_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_392) * sc_bigint<32>(mul_ln1118_212_fu_11626_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_213_fu_11646_p1() {
    mul_ln1118_213_fu_11646_p1 =  (sc_lv<32>) (sext_ln1118_327_fu_6596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_213_fu_11646_p2() {
    mul_ln1118_213_fu_11646_p2 = (!ap_const_lv46_1401.is_01() || !mul_ln1118_213_fu_11646_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1401) * sc_bigint<32>(mul_ln1118_213_fu_11646_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_214_fu_11666_p1() {
    mul_ln1118_214_fu_11666_p1 =  (sc_lv<32>) (sext_ln1118_338_fu_6686_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_214_fu_11666_p2() {
    mul_ln1118_214_fu_11666_p2 = (!ap_const_lv48_8A0D.is_01() || !mul_ln1118_214_fu_11666_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_8A0D) * sc_bigint<32>(mul_ln1118_214_fu_11666_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_215_fu_11682_p1() {
    mul_ln1118_215_fu_11682_p1 =  (sc_lv<32>) (sext_ln1118_345_fu_6744_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_215_fu_11682_p2() {
    mul_ln1118_215_fu_11682_p2 = (!ap_const_lv46_1CFA.is_01() || !mul_ln1118_215_fu_11682_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1CFA) * sc_bigint<32>(mul_ln1118_215_fu_11682_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_216_fu_11702_p1() {
    mul_ln1118_216_fu_11702_p1 =  (sc_lv<32>) (sext_ln1118_349_fu_6790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_216_fu_11702_p2() {
    mul_ln1118_216_fu_11702_p2 = (!ap_const_lv43_7FFFFFFFCC8.is_01() || !mul_ln1118_216_fu_11702_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCC8) * sc_bigint<32>(mul_ln1118_216_fu_11702_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_217_fu_11722_p1() {
    mul_ln1118_217_fu_11722_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_217_fu_11722_p2() {
    mul_ln1118_217_fu_11722_p2 = (!ap_const_lv48_6CC8.is_01() || !mul_ln1118_217_fu_11722_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_6CC8) * sc_bigint<32>(mul_ln1118_217_fu_11722_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_218_fu_11738_p1() {
    mul_ln1118_218_fu_11738_p1 =  (sc_lv<32>) (sext_ln1118_363_fu_6906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_218_fu_11738_p2() {
    mul_ln1118_218_fu_11738_p2 = (!ap_const_lv46_1C06.is_01() || !mul_ln1118_218_fu_11738_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1C06) * sc_bigint<32>(mul_ln1118_218_fu_11738_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_219_fu_11758_p1() {
    mul_ln1118_219_fu_11758_p1 =  (sc_lv<32>) (sext_ln1118_368_fu_6956_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_219_fu_11758_p2() {
    mul_ln1118_219_fu_11758_p2 = (!ap_const_lv45_1FFFFFFFF499.is_01() || !mul_ln1118_219_fu_11758_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF499) * sc_bigint<32>(mul_ln1118_219_fu_11758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_21_fu_5176_p1() {
    mul_ln1118_21_fu_5176_p1 =  (sc_lv<32>) (sext_ln1118_152_fu_5152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_21_fu_5176_p2() {
    mul_ln1118_21_fu_5176_p2 = (!ap_const_lv45_D1D.is_01() || !mul_ln1118_21_fu_5176_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_D1D) * sc_bigint<32>(mul_ln1118_21_fu_5176_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_220_fu_11778_p1() {
    mul_ln1118_220_fu_11778_p1 = tmp_53_fu_6988_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_220_fu_11778_p2() {
    mul_ln1118_220_fu_11778_p2 = (!ap_const_lv45_1FFFFFFFF18A.is_01() || !mul_ln1118_220_fu_11778_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF18A) * sc_bigint<32>(mul_ln1118_220_fu_11778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_221_fu_11798_p1() {
    mul_ln1118_221_fu_11798_p1 =  (sc_lv<32>) (sext_ln1118_377_fu_7048_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_221_fu_11798_p2() {
    mul_ln1118_221_fu_11798_p2 = (!ap_const_lv47_27E9.is_01() || !mul_ln1118_221_fu_11798_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_27E9) * sc_bigint<32>(mul_ln1118_221_fu_11798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_222_fu_11818_p1() {
    mul_ln1118_222_fu_11818_p1 =  (sc_lv<32>) (sext_ln1118_386_fu_7114_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_222_fu_11818_p2() {
    mul_ln1118_222_fu_11818_p2 = (!ap_const_lv48_5879.is_01() || !mul_ln1118_222_fu_11818_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_5879) * sc_bigint<32>(mul_ln1118_222_fu_11818_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_223_fu_12326_p1() {
    mul_ln1118_223_fu_12326_p1 =  (sc_lv<32>) (sext_ln1118_8_fu_3980_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_223_fu_12326_p2() {
    mul_ln1118_223_fu_12326_p2 = (!ap_const_lv47_7FFFFFFFC153.is_01() || !mul_ln1118_223_fu_12326_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC153) * sc_bigint<32>(mul_ln1118_223_fu_12326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_224_fu_12346_p1() {
    mul_ln1118_224_fu_12346_p1 =  (sc_lv<32>) (sext_ln1118_19_fu_4054_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_224_fu_12346_p2() {
    mul_ln1118_224_fu_12346_p2 = (!ap_const_lv43_20F.is_01() || !mul_ln1118_224_fu_12346_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_20F) * sc_bigint<32>(mul_ln1118_224_fu_12346_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_225_fu_12410_p1() {
    mul_ln1118_225_fu_12410_p1 =  (sc_lv<32>) (sext_ln1118_34_fu_4174_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_225_fu_12410_p2() {
    mul_ln1118_225_fu_12410_p2 = (!ap_const_lv44_644.is_01() || !mul_ln1118_225_fu_12410_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_644) * sc_bigint<32>(mul_ln1118_225_fu_12410_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_226_fu_12430_p1() {
    mul_ln1118_226_fu_12430_p1 =  (sc_lv<32>) (sext_ln1118_47_fu_4256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_226_fu_12430_p2() {
    mul_ln1118_226_fu_12430_p2 = (!ap_const_lv45_1FFFFFFFF5A4.is_01() || !mul_ln1118_226_fu_12430_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF5A4) * sc_bigint<32>(mul_ln1118_226_fu_12430_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_227_fu_12450_p1() {
    mul_ln1118_227_fu_12450_p1 =  (sc_lv<32>) (sext_ln1118_52_fu_4306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_227_fu_12450_p2() {
    mul_ln1118_227_fu_12450_p2 = (!ap_const_lv48_60D2.is_01() || !mul_ln1118_227_fu_12450_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_60D2) * sc_bigint<32>(mul_ln1118_227_fu_12450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_228_fu_12466_p1() {
    mul_ln1118_228_fu_12466_p1 =  (sc_lv<32>) (sext_ln1118_56_fu_4352_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_228_fu_12466_p2() {
    mul_ln1118_228_fu_12466_p2 = (!ap_const_lv48_4AC3.is_01() || !mul_ln1118_228_fu_12466_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_4AC3) * sc_bigint<32>(mul_ln1118_228_fu_12466_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_229_fu_12482_p1() {
    mul_ln1118_229_fu_12482_p1 =  (sc_lv<32>) (sext_ln1118_64_fu_4414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_229_fu_12482_p2() {
    mul_ln1118_229_fu_12482_p2 = (!ap_const_lv45_DFE.is_01() || !mul_ln1118_229_fu_12482_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_DFE) * sc_bigint<32>(mul_ln1118_229_fu_12482_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_22_fu_5230_p1() {
    mul_ln1118_22_fu_5230_p1 =  (sc_lv<32>) (sext_ln1118_163_fu_5226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_22_fu_5230_p2() {
    mul_ln1118_22_fu_5230_p2 = (!ap_const_lv47_7FFFFFFFCD44.is_01() || !mul_ln1118_22_fu_5230_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCD44) * sc_bigint<32>(mul_ln1118_22_fu_5230_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_230_fu_12502_p1() {
    mul_ln1118_230_fu_12502_p1 =  (sc_lv<32>) (sext_ln1118_67_fu_4456_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_230_fu_12502_p2() {
    mul_ln1118_230_fu_12502_p2 = (!ap_const_lv46_3FFFFFFFE6AE.is_01() || !mul_ln1118_230_fu_12502_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE6AE) * sc_bigint<32>(mul_ln1118_230_fu_12502_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_231_fu_12522_p1() {
    mul_ln1118_231_fu_12522_p1 =  (sc_lv<32>) (sext_ln1118_73_fu_4510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_231_fu_12522_p2() {
    mul_ln1118_231_fu_12522_p2 = (!ap_const_lv46_3FFFFFFFEF8E.is_01() || !mul_ln1118_231_fu_12522_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEF8E) * sc_bigint<32>(mul_ln1118_231_fu_12522_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_232_fu_12542_p1() {
    mul_ln1118_232_fu_12542_p1 =  (sc_lv<32>) (sext_ln1118_86_fu_4592_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_232_fu_12542_p2() {
    mul_ln1118_232_fu_12542_p2 = (!ap_const_lv47_7FFFFFFFC9D9.is_01() || !mul_ln1118_232_fu_12542_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC9D9) * sc_bigint<32>(mul_ln1118_232_fu_12542_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_233_fu_12562_p1() {
    mul_ln1118_233_fu_12562_p1 =  (sc_lv<32>) (sext_ln1118_90_fu_4638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_233_fu_12562_p2() {
    mul_ln1118_233_fu_12562_p2 = (!ap_const_lv47_7FFFFFFFD957.is_01() || !mul_ln1118_233_fu_12562_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD957) * sc_bigint<32>(mul_ln1118_233_fu_12562_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_234_fu_12582_p1() {
    mul_ln1118_234_fu_12582_p1 = tmp_12_fu_4674_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_234_fu_12582_p2() {
    mul_ln1118_234_fu_12582_p2 = (!ap_const_lv43_7FFFFFFFD1D.is_01() || !mul_ln1118_234_fu_12582_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD1D) * sc_bigint<32>(mul_ln1118_234_fu_12582_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_235_fu_12602_p1() {
    mul_ln1118_235_fu_12602_p1 =  (sc_lv<32>) (sext_ln1118_103_fu_4750_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_235_fu_12602_p2() {
    mul_ln1118_235_fu_12602_p2 = (!ap_const_lv44_482.is_01() || !mul_ln1118_235_fu_12602_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_482) * sc_bigint<32>(mul_ln1118_235_fu_12602_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_236_fu_12622_p1() {
    mul_ln1118_236_fu_12622_p1 =  (sc_lv<32>) (sext_ln1118_116_fu_4832_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_236_fu_12622_p2() {
    mul_ln1118_236_fu_12622_p2 = (!ap_const_lv45_1FFFFFFFF44A.is_01() || !mul_ln1118_236_fu_12622_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF44A) * sc_bigint<32>(mul_ln1118_236_fu_12622_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_237_fu_12642_p1() {
    mul_ln1118_237_fu_12642_p1 =  (sc_lv<32>) (sext_ln1118_117_fu_4866_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_237_fu_12642_p2() {
    mul_ln1118_237_fu_12642_p2 = (!ap_const_lv43_7FFFFFFFDB7.is_01() || !mul_ln1118_237_fu_12642_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFDB7) * sc_bigint<32>(mul_ln1118_237_fu_12642_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_238_fu_12662_p1() {
    mul_ln1118_238_fu_12662_p1 =  (sc_lv<32>) (sext_ln1118_128_fu_4940_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_238_fu_12662_p2() {
    mul_ln1118_238_fu_12662_p2 = (!ap_const_lv46_3FFFFFFFEE13.is_01() || !mul_ln1118_238_fu_12662_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEE13) * sc_bigint<32>(mul_ln1118_238_fu_12662_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_239_fu_12682_p1() {
    mul_ln1118_239_fu_12682_p1 =  (sc_lv<32>) (sext_ln1118_132_fu_4986_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_239_fu_12682_p2() {
    mul_ln1118_239_fu_12682_p2 = (!ap_const_lv48_7B87.is_01() || !mul_ln1118_239_fu_12682_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_7B87) * sc_bigint<32>(mul_ln1118_239_fu_12682_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_23_fu_5292_p1() {
    mul_ln1118_23_fu_5292_p1 =  (sc_lv<32>) (sext_ln1118_170_fu_5284_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_23_fu_5292_p2() {
    mul_ln1118_23_fu_5292_p2 = (!ap_const_lv47_7FFFFFFFC08B.is_01() || !mul_ln1118_23_fu_5292_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC08B) * sc_bigint<32>(mul_ln1118_23_fu_5292_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_240_fu_12698_p1() {
    mul_ln1118_240_fu_12698_p1 =  (sc_lv<32>) (sext_ln1118_139_fu_5040_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_240_fu_12698_p2() {
    mul_ln1118_240_fu_12698_p2 = (!ap_const_lv47_32BC.is_01() || !mul_ln1118_240_fu_12698_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_32BC) * sc_bigint<32>(mul_ln1118_240_fu_12698_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_241_fu_12718_p1() {
    mul_ln1118_241_fu_12718_p1 =  (sc_lv<32>) (sext_ln1118_149_fu_5110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_241_fu_12718_p2() {
    mul_ln1118_241_fu_12718_p2 = (!ap_const_lv46_1575.is_01() || !mul_ln1118_241_fu_12718_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1575) * sc_bigint<32>(mul_ln1118_241_fu_12718_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_242_fu_12738_p1() {
    mul_ln1118_242_fu_12738_p1 =  (sc_lv<32>) (sext_ln1118_156_fu_5168_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_242_fu_12738_p2() {
    mul_ln1118_242_fu_12738_p2 = (!ap_const_lv48_42E4.is_01() || !mul_ln1118_242_fu_12738_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_42E4) * sc_bigint<32>(mul_ln1118_242_fu_12738_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_243_fu_12754_p1() {
    mul_ln1118_243_fu_12754_p1 =  (sc_lv<32>) (sext_ln1118_160_fu_5214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_243_fu_12754_p2() {
    mul_ln1118_243_fu_12754_p2 = (!ap_const_lv48_FFFFFFFFBDD3.is_01() || !mul_ln1118_243_fu_12754_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBDD3) * sc_bigint<32>(mul_ln1118_243_fu_12754_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_244_fu_12770_p1() {
    mul_ln1118_244_fu_12770_p1 =  (sc_lv<32>) (sext_ln1118_170_fu_5284_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_244_fu_12770_p2() {
    mul_ln1118_244_fu_12770_p2 = (!ap_const_lv47_3533.is_01() || !mul_ln1118_244_fu_12770_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3533) * sc_bigint<32>(mul_ln1118_244_fu_12770_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_245_fu_12790_p1() {
    mul_ln1118_245_fu_12790_p1 =  (sc_lv<32>) (sext_ln1118_176_fu_5338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_245_fu_12790_p2() {
    mul_ln1118_245_fu_12790_p2 = (!ap_const_lv48_FFFFFFFF8559.is_01() || !mul_ln1118_245_fu_12790_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF8559) * sc_bigint<32>(mul_ln1118_245_fu_12790_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_246_fu_12806_p1() {
    mul_ln1118_246_fu_12806_p1 =  (sc_lv<32>) (sext_ln1118_181_fu_5388_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_246_fu_12806_p2() {
    mul_ln1118_246_fu_12806_p2 = (!ap_const_lv44_43F.is_01() || !mul_ln1118_246_fu_12806_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_43F) * sc_bigint<32>(mul_ln1118_246_fu_12806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_247_fu_12826_p1() {
    mul_ln1118_247_fu_12826_p1 =  (sc_lv<32>) (sext_ln1118_187_fu_5438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_247_fu_12826_p2() {
    mul_ln1118_247_fu_12826_p2 = (!ap_const_lv47_7FFFFFFFDE08.is_01() || !mul_ln1118_247_fu_12826_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDE08) * sc_bigint<32>(mul_ln1118_247_fu_12826_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_248_fu_12846_p1() {
    mul_ln1118_248_fu_12846_p1 =  (sc_lv<32>) (sext_ln1118_192_fu_5488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_248_fu_12846_p2() {
    mul_ln1118_248_fu_12846_p2 = (!ap_const_lv43_3A1.is_01() || !mul_ln1118_248_fu_12846_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_3A1) * sc_bigint<32>(mul_ln1118_248_fu_12846_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_249_fu_12866_p1() {
    mul_ln1118_249_fu_12866_p1 =  (sc_lv<32>) (sext_ln1118_197_fu_5538_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_249_fu_12866_p2() {
    mul_ln1118_249_fu_12866_p2 = (!ap_const_lv43_2C2.is_01() || !mul_ln1118_249_fu_12866_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_2C2) * sc_bigint<32>(mul_ln1118_249_fu_12866_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_24_fu_5342_p1() {
    mul_ln1118_24_fu_5342_p1 =  (sc_lv<32>) (sext_ln1118_174_fu_5330_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_24_fu_5342_p2() {
    mul_ln1118_24_fu_5342_p2 = (!ap_const_lv47_7FFFFFFFD040.is_01() || !mul_ln1118_24_fu_5342_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD040) * sc_bigint<32>(mul_ln1118_24_fu_5342_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_250_fu_12886_p1() {
    mul_ln1118_250_fu_12886_p1 =  (sc_lv<32>) (sext_ln1118_204_fu_5596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_250_fu_12886_p2() {
    mul_ln1118_250_fu_12886_p2 = (!ap_const_lv42_1FD.is_01() || !mul_ln1118_250_fu_12886_p1.read().is_01())? sc_lv<42>(): sc_biguint<42>(ap_const_lv42_1FD) * sc_bigint<32>(mul_ln1118_250_fu_12886_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_251_fu_12906_p1() {
    mul_ln1118_251_fu_12906_p1 =  (sc_lv<32>) (sext_ln1118_216_fu_5674_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_251_fu_12906_p2() {
    mul_ln1118_251_fu_12906_p2 = (!ap_const_lv46_3FFFFFFFEA0D.is_01() || !mul_ln1118_251_fu_12906_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEA0D) * sc_bigint<32>(mul_ln1118_251_fu_12906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_252_fu_12926_p1() {
    mul_ln1118_252_fu_12926_p1 =  (sc_lv<32>) (sext_ln1118_219_fu_5716_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_252_fu_12926_p2() {
    mul_ln1118_252_fu_12926_p2 = (!ap_const_lv47_3D15.is_01() || !mul_ln1118_252_fu_12926_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_3D15) * sc_bigint<32>(mul_ln1118_252_fu_12926_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_253_fu_12946_p1() {
    mul_ln1118_253_fu_12946_p1 =  (sc_lv<32>) (sext_ln1118_228_fu_5782_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_253_fu_12946_p2() {
    mul_ln1118_253_fu_12946_p2 = (!ap_const_lv46_3FFFFFFFE4E3.is_01() || !mul_ln1118_253_fu_12946_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE4E3) * sc_bigint<32>(mul_ln1118_253_fu_12946_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_254_fu_12966_p1() {
    mul_ln1118_254_fu_12966_p1 =  (sc_lv<32>) (sext_ln1118_236_fu_5840_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_254_fu_12966_p2() {
    mul_ln1118_254_fu_12966_p2 = (!ap_const_lv45_1FFFFFFFF215.is_01() || !mul_ln1118_254_fu_12966_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF215) * sc_bigint<32>(mul_ln1118_254_fu_12966_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_255_fu_13000_p1() {
    mul_ln1118_255_fu_13000_p1 =  (sc_lv<32>) (sext_ln1118_249_fu_5944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_255_fu_13000_p2() {
    mul_ln1118_255_fu_13000_p2 = (!ap_const_lv43_7FFFFFFFC89.is_01() || !mul_ln1118_255_fu_13000_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFC89) * sc_bigint<32>(mul_ln1118_255_fu_13000_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_256_fu_13020_p1() {
    mul_ln1118_256_fu_13020_p1 =  (sc_lv<32>) (sext_ln1118_254_fu_5994_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_256_fu_13020_p2() {
    mul_ln1118_256_fu_13020_p2 = (!ap_const_lv47_7FFFFFFFD1FB.is_01() || !mul_ln1118_256_fu_13020_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD1FB) * sc_bigint<32>(mul_ln1118_256_fu_13020_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_257_fu_13040_p1() {
    mul_ln1118_257_fu_13040_p1 =  (sc_lv<32>) (sext_ln1118_260_fu_6044_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_257_fu_13040_p2() {
    mul_ln1118_257_fu_13040_p2 = (!ap_const_lv44_FFFFFFFF8E7.is_01() || !mul_ln1118_257_fu_13040_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8E7) * sc_bigint<32>(mul_ln1118_257_fu_13040_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_258_fu_13060_p1() {
    mul_ln1118_258_fu_13060_p1 =  (sc_lv<32>) (sext_ln1118_267_fu_6098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_258_fu_13060_p2() {
    mul_ln1118_258_fu_13060_p2 = (!ap_const_lv45_A61.is_01() || !mul_ln1118_258_fu_13060_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_A61) * sc_bigint<32>(mul_ln1118_258_fu_13060_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_259_fu_13080_p1() {
    mul_ln1118_259_fu_13080_p1 =  (sc_lv<32>) (sext_ln1118_275_fu_6160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_259_fu_13080_p2() {
    mul_ln1118_259_fu_13080_p2 = (!ap_const_lv47_7FFFFFFFD608.is_01() || !mul_ln1118_259_fu_13080_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD608) * sc_bigint<32>(mul_ln1118_259_fu_13080_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_25_fu_5400_p1() {
    mul_ln1118_25_fu_5400_p1 =  (sc_lv<32>) (sext_ln1118_179_fu_5380_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_25_fu_5400_p2() {
    mul_ln1118_25_fu_5400_p2 = (!ap_const_lv48_434B.is_01() || !mul_ln1118_25_fu_5400_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_434B) * sc_bigint<32>(mul_ln1118_25_fu_5400_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_260_fu_13100_p1() {
    mul_ln1118_260_fu_13100_p1 =  (sc_lv<32>) (sext_ln1118_282_fu_6214_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_260_fu_13100_p2() {
    mul_ln1118_260_fu_13100_p2 = (!ap_const_lv45_1FFFFFFFF26E.is_01() || !mul_ln1118_260_fu_13100_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF26E) * sc_bigint<32>(mul_ln1118_260_fu_13100_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_261_fu_13120_p1() {
    mul_ln1118_261_fu_13120_p1 =  (sc_lv<32>) (sext_ln1118_283_fu_6248_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_261_fu_13120_p2() {
    mul_ln1118_261_fu_13120_p2 = (!ap_const_lv47_7FFFFFFFDF17.is_01() || !mul_ln1118_261_fu_13120_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDF17) * sc_bigint<32>(mul_ln1118_261_fu_13120_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_262_fu_13140_p1() {
    mul_ln1118_262_fu_13140_p1 =  (sc_lv<32>) (sext_ln1118_293_fu_6318_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_262_fu_13140_p2() {
    mul_ln1118_262_fu_13140_p2 = (!ap_const_lv45_1FFFFFFFF4D8.is_01() || !mul_ln1118_262_fu_13140_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF4D8) * sc_bigint<32>(mul_ln1118_262_fu_13140_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_263_fu_13160_p1() {
    mul_ln1118_263_fu_13160_p1 =  (sc_lv<32>) (sext_ln1118_300_fu_6372_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_263_fu_13160_p2() {
    mul_ln1118_263_fu_13160_p2 = (!ap_const_lv46_10EF.is_01() || !mul_ln1118_263_fu_13160_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_10EF) * sc_bigint<32>(mul_ln1118_263_fu_13160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_264_fu_13180_p1() {
    mul_ln1118_264_fu_13180_p1 =  (sc_lv<32>) (sext_ln1118_306_fu_6426_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_264_fu_13180_p2() {
    mul_ln1118_264_fu_13180_p2 = (!ap_const_lv45_B36.is_01() || !mul_ln1118_264_fu_13180_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_B36) * sc_bigint<32>(mul_ln1118_264_fu_13180_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_265_fu_13200_p1() {
    mul_ln1118_265_fu_13200_p1 =  (sc_lv<32>) (sext_ln1118_313_fu_6484_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_265_fu_13200_p2() {
    mul_ln1118_265_fu_13200_p2 = (!ap_const_lv47_7FFFFFFFD0F1.is_01() || !mul_ln1118_265_fu_13200_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD0F1) * sc_bigint<32>(mul_ln1118_265_fu_13200_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_266_fu_13220_p1() {
    mul_ln1118_266_fu_13220_p1 =  (sc_lv<32>) (sext_ln1118_319_fu_6534_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_266_fu_13220_p2() {
    mul_ln1118_266_fu_13220_p2 = (!ap_const_lv44_630.is_01() || !mul_ln1118_266_fu_13220_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_630) * sc_bigint<32>(mul_ln1118_266_fu_13220_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_267_fu_13240_p1() {
    mul_ln1118_267_fu_13240_p1 =  (sc_lv<32>) (sext_ln1118_329_fu_6604_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_267_fu_13240_p2() {
    mul_ln1118_267_fu_13240_p2 = (!ap_const_lv44_FFFFFFFF823.is_01() || !mul_ln1118_267_fu_13240_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF823) * sc_bigint<32>(mul_ln1118_267_fu_13240_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_268_fu_13260_p1() {
    mul_ln1118_268_fu_13260_p1 =  (sc_lv<32>) (sext_ln1118_335_fu_6674_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_268_fu_13260_p2() {
    mul_ln1118_268_fu_13260_p2 = (!ap_const_lv46_3FFFFFFFE3C1.is_01() || !mul_ln1118_268_fu_13260_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE3C1) * sc_bigint<32>(mul_ln1118_268_fu_13260_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_269_fu_13280_p1() {
    mul_ln1118_269_fu_13280_p1 =  (sc_lv<32>) (sext_ln1118_344_fu_6740_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_269_fu_13280_p2() {
    mul_ln1118_269_fu_13280_p2 = (!ap_const_lv47_7FFFFFFFDD05.is_01() || !mul_ln1118_269_fu_13280_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDD05) * sc_bigint<32>(mul_ln1118_269_fu_13280_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_26_fu_5450_p1() {
    mul_ln1118_26_fu_5450_p1 =  (sc_lv<32>) (sext_ln1118_187_fu_5438_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_26_fu_5450_p2() {
    mul_ln1118_26_fu_5450_p2 = (!ap_const_lv47_7FFFFFFFDF02.is_01() || !mul_ln1118_26_fu_5450_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDF02) * sc_bigint<32>(mul_ln1118_26_fu_5450_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_270_fu_13300_p1() {
    mul_ln1118_270_fu_13300_p1 =  (sc_lv<32>) (sext_ln1118_353_fu_6806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_270_fu_13300_p2() {
    mul_ln1118_270_fu_13300_p2 = (!ap_const_lv46_1F19.is_01() || !mul_ln1118_270_fu_13300_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1F19) * sc_bigint<32>(mul_ln1118_270_fu_13300_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_271_fu_13320_p1() {
    mul_ln1118_271_fu_13320_p1 =  (sc_lv<32>) (sext_ln1118_358_fu_6856_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_271_fu_13320_p2() {
    mul_ln1118_271_fu_13320_p2 = (!ap_const_lv46_10CF.is_01() || !mul_ln1118_271_fu_13320_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_10CF) * sc_bigint<32>(mul_ln1118_271_fu_13320_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_272_fu_13340_p1() {
    mul_ln1118_272_fu_13340_p1 =  (sc_lv<32>) (sext_ln1118_363_fu_6906_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_272_fu_13340_p2() {
    mul_ln1118_272_fu_13340_p2 = (!ap_const_lv46_17D9.is_01() || !mul_ln1118_272_fu_13340_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_17D9) * sc_bigint<32>(mul_ln1118_272_fu_13340_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_273_fu_13360_p1() {
    mul_ln1118_273_fu_13360_p1 =  (sc_lv<32>) (sext_ln1118_369_fu_6960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_273_fu_13360_p2() {
    mul_ln1118_273_fu_13360_p2 = (!ap_const_lv47_2F78.is_01() || !mul_ln1118_273_fu_13360_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2F78) * sc_bigint<32>(mul_ln1118_273_fu_13360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_274_fu_13380_p1() {
    mul_ln1118_274_fu_13380_p1 =  (sc_lv<32>) (sext_ln1118_373_fu_7006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_274_fu_13380_p2() {
    mul_ln1118_274_fu_13380_p2 = (!ap_const_lv48_6B6C.is_01() || !mul_ln1118_274_fu_13380_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_6B6C) * sc_bigint<32>(mul_ln1118_274_fu_13380_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_275_fu_13396_p1() {
    mul_ln1118_275_fu_13396_p1 =  (sc_lv<32>) (sext_ln1118_377_fu_7048_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_275_fu_13396_p2() {
    mul_ln1118_275_fu_13396_p2 = (!ap_const_lv47_2A23.is_01() || !mul_ln1118_275_fu_13396_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2A23) * sc_bigint<32>(mul_ln1118_275_fu_13396_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_276_fu_13416_p1() {
    mul_ln1118_276_fu_13416_p1 =  (sc_lv<32>) (sext_ln1118_385_fu_7110_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_276_fu_13416_p2() {
    mul_ln1118_276_fu_13416_p2 = (!ap_const_lv45_1FFFFFFFF5A5.is_01() || !mul_ln1118_276_fu_13416_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF5A5) * sc_bigint<32>(mul_ln1118_276_fu_13416_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_277_fu_13882_p1() {
    mul_ln1118_277_fu_13882_p1 =  (sc_lv<32>) (sext_ln1118_1_fu_3922_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_277_fu_13882_p2() {
    mul_ln1118_277_fu_13882_p2 = (!ap_const_lv43_7FFFFFFFD19.is_01() || !mul_ln1118_277_fu_13882_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD19) * sc_bigint<32>(mul_ln1118_277_fu_13882_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_278_fu_13902_p1() {
    mul_ln1118_278_fu_13902_p1 =  (sc_lv<32>) (sext_ln1118_12_fu_3996_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_278_fu_13902_p2() {
    mul_ln1118_278_fu_13902_p2 = (!ap_const_lv46_3FFFFFFFE475.is_01() || !mul_ln1118_278_fu_13902_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE475) * sc_bigint<32>(mul_ln1118_278_fu_13902_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_279_fu_13922_p1() {
    mul_ln1118_279_fu_13922_p1 =  (sc_lv<32>) (sext_ln1118_16_fu_4042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_279_fu_13922_p2() {
    mul_ln1118_279_fu_13922_p2 = (!ap_const_lv45_1FFFFFFFF6B2.is_01() || !mul_ln1118_279_fu_13922_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF6B2) * sc_bigint<32>(mul_ln1118_279_fu_13922_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_27_fu_5504_p1() {
    mul_ln1118_27_fu_5504_p1 =  (sc_lv<32>) (sext_ln1118_191_fu_5484_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_27_fu_5504_p2() {
    mul_ln1118_27_fu_5504_p2 = (!ap_const_lv46_3FFFFFFFEED7.is_01() || !mul_ln1118_27_fu_5504_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFEED7) * sc_bigint<32>(mul_ln1118_27_fu_5504_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_280_fu_13942_p1() {
    mul_ln1118_280_fu_13942_p1 =  (sc_lv<32>) (sext_ln1118_25_fu_4108_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_280_fu_13942_p2() {
    mul_ln1118_280_fu_13942_p2 = (!ap_const_lv45_1FFFFFFFF1F6.is_01() || !mul_ln1118_280_fu_13942_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF1F6) * sc_bigint<32>(mul_ln1118_280_fu_13942_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_281_fu_13962_p1() {
    mul_ln1118_281_fu_13962_p1 =  (sc_lv<32>) (sext_ln1118_36_fu_4182_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_281_fu_13962_p2() {
    mul_ln1118_281_fu_13962_p2 = (!ap_const_lv46_14C6.is_01() || !mul_ln1118_281_fu_13962_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_14C6) * sc_bigint<32>(mul_ln1118_281_fu_13962_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_282_fu_13982_p1() {
    mul_ln1118_282_fu_13982_p1 =  (sc_lv<32>) (sext_ln1118_44_fu_4244_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_282_fu_13982_p2() {
    mul_ln1118_282_fu_13982_p2 = (!ap_const_lv46_1646.is_01() || !mul_ln1118_282_fu_13982_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1646) * sc_bigint<32>(mul_ln1118_282_fu_13982_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_283_fu_14002_p1() {
    mul_ln1118_283_fu_14002_p1 =  (sc_lv<32>) (sext_ln1118_52_fu_4306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_283_fu_14002_p2() {
    mul_ln1118_283_fu_14002_p2 = (!ap_const_lv48_B1E9.is_01() || !mul_ln1118_283_fu_14002_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_B1E9) * sc_bigint<32>(mul_ln1118_283_fu_14002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_284_fu_14018_p1() {
    mul_ln1118_284_fu_14018_p1 =  (sc_lv<32>) (sext_ln1118_57_fu_4356_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_284_fu_14018_p2() {
    mul_ln1118_284_fu_14018_p2 = (!ap_const_lv46_3FFFFFFFE5C3.is_01() || !mul_ln1118_284_fu_14018_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE5C3) * sc_bigint<32>(mul_ln1118_284_fu_14018_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_285_fu_14038_p1() {
    mul_ln1118_285_fu_14038_p1 =  (sc_lv<32>) (sext_ln1118_64_fu_4414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_285_fu_14038_p2() {
    mul_ln1118_285_fu_14038_p2 = (!ap_const_lv45_C31.is_01() || !mul_ln1118_285_fu_14038_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_C31) * sc_bigint<32>(mul_ln1118_285_fu_14038_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_286_fu_14058_p1() {
    mul_ln1118_286_fu_14058_p1 =  (sc_lv<32>) (sext_ln1118_69_fu_4464_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_286_fu_14058_p2() {
    mul_ln1118_286_fu_14058_p2 = (!ap_const_lv47_7FFFFFFFC9CA.is_01() || !mul_ln1118_286_fu_14058_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC9CA) * sc_bigint<32>(mul_ln1118_286_fu_14058_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_287_fu_14078_p1() {
    mul_ln1118_287_fu_14078_p1 =  (sc_lv<32>) (sext_ln1118_79_fu_4534_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_287_fu_14078_p2() {
    mul_ln1118_287_fu_14078_p2 = (!ap_const_lv43_7FFFFFFFD83.is_01() || !mul_ln1118_287_fu_14078_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFD83) * sc_bigint<32>(mul_ln1118_287_fu_14078_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_288_fu_14098_p1() {
    mul_ln1118_288_fu_14098_p1 =  (sc_lv<32>) (sext_ln1118_87_fu_4596_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_288_fu_14098_p2() {
    mul_ln1118_288_fu_14098_p2 = (!ap_const_lv44_FFFFFFFF9A8.is_01() || !mul_ln1118_288_fu_14098_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF9A8) * sc_bigint<32>(mul_ln1118_288_fu_14098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_289_fu_14118_p1() {
    mul_ln1118_289_fu_14118_p1 = tmp_11_fu_4620_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_289_fu_14118_p2() {
    mul_ln1118_289_fu_14118_p2 = (!ap_const_lv42_3FFFFFFFE9E.is_01() || !mul_ln1118_289_fu_14118_p1.read().is_01())? sc_lv<42>(): sc_bigint<42>(ap_const_lv42_3FFFFFFFE9E) * sc_bigint<32>(mul_ln1118_289_fu_14118_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_28_fu_5562_p1() {
    mul_ln1118_28_fu_5562_p1 =  (sc_lv<32>) (sext_ln1118_201_fu_5554_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_28_fu_5562_p2() {
    mul_ln1118_28_fu_5562_p2 = (!ap_const_lv44_FFFFFFFFA25.is_01() || !mul_ln1118_28_fu_5562_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA25) * sc_bigint<32>(mul_ln1118_28_fu_5562_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_290_fu_14138_p1() {
    mul_ln1118_290_fu_14138_p1 =  (sc_lv<32>) (sext_ln1118_96_fu_4692_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_290_fu_14138_p2() {
    mul_ln1118_290_fu_14138_p2 = (!ap_const_lv48_843B.is_01() || !mul_ln1118_290_fu_14138_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_843B) * sc_bigint<32>(mul_ln1118_290_fu_14138_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_291_fu_14154_p1() {
    mul_ln1118_291_fu_14154_p1 =  (sc_lv<32>) (sext_ln1118_105_fu_4758_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_291_fu_14154_p2() {
    mul_ln1118_291_fu_14154_p2 = (!ap_const_lv48_5581.is_01() || !mul_ln1118_291_fu_14154_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_5581) * sc_bigint<32>(mul_ln1118_291_fu_14154_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_292_fu_14170_p1() {
    mul_ln1118_292_fu_14170_p1 =  (sc_lv<32>) (sext_ln1118_110_fu_4808_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_292_fu_14170_p2() {
    mul_ln1118_292_fu_14170_p2 = (!ap_const_lv48_FFFFFFFE3F39.is_01() || !mul_ln1118_292_fu_14170_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFE3F39) * sc_bigint<32>(mul_ln1118_292_fu_14170_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_293_fu_14186_p1() {
    mul_ln1118_293_fu_14186_p1 =  (sc_lv<32>) (sext_ln1118_117_fu_4866_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_293_fu_14186_p2() {
    mul_ln1118_293_fu_14186_p2 = (!ap_const_lv43_7FFFFFFFC7B.is_01() || !mul_ln1118_293_fu_14186_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFC7B) * sc_bigint<32>(mul_ln1118_293_fu_14186_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_294_fu_14206_p1() {
    mul_ln1118_294_fu_14206_p1 =  (sc_lv<32>) (sext_ln1118_126_fu_4932_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_294_fu_14206_p2() {
    mul_ln1118_294_fu_14206_p2 = (!ap_const_lv45_1FFFFFFFF1D0.is_01() || !mul_ln1118_294_fu_14206_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF1D0) * sc_bigint<32>(mul_ln1118_294_fu_14206_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_295_fu_14226_p1() {
    mul_ln1118_295_fu_14226_p1 =  (sc_lv<32>) (sext_ln1118_136_fu_5002_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_295_fu_14226_p2() {
    mul_ln1118_295_fu_14226_p2 = (!ap_const_lv47_7FFFFFFFDD16.is_01() || !mul_ln1118_295_fu_14226_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDD16) * sc_bigint<32>(mul_ln1118_295_fu_14226_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_296_fu_14246_p1() {
    mul_ln1118_296_fu_14246_p1 =  (sc_lv<32>) (sext_ln1118_139_fu_5040_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_296_fu_14246_p2() {
    mul_ln1118_296_fu_14246_p2 = (!ap_const_lv47_7FFFFFFFDCE4.is_01() || !mul_ln1118_296_fu_14246_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDCE4) * sc_bigint<32>(mul_ln1118_296_fu_14246_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_297_fu_14266_p1() {
    mul_ln1118_297_fu_14266_p1 =  (sc_lv<32>) (sext_ln1118_145_fu_5094_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_297_fu_14266_p2() {
    mul_ln1118_297_fu_14266_p2 = (!ap_const_lv47_268B.is_01() || !mul_ln1118_297_fu_14266_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_268B) * sc_bigint<32>(mul_ln1118_297_fu_14266_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_298_fu_14286_p1() {
    mul_ln1118_298_fu_14286_p1 =  (sc_lv<32>) (sext_ln1118_152_fu_5152_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_298_fu_14286_p2() {
    mul_ln1118_298_fu_14286_p2 = (!ap_const_lv45_98B.is_01() || !mul_ln1118_298_fu_14286_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_98B) * sc_bigint<32>(mul_ln1118_298_fu_14286_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_299_fu_14306_p1() {
    mul_ln1118_299_fu_14306_p1 =  (sc_lv<32>) (sext_ln1118_159_fu_5210_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_299_fu_14306_p2() {
    mul_ln1118_299_fu_14306_p2 = (!ap_const_lv46_3FFFFFFFE3DF.is_01() || !mul_ln1118_299_fu_14306_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE3DF) * sc_bigint<32>(mul_ln1118_299_fu_14306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_29_fu_5624_p1() {
    mul_ln1118_29_fu_5624_p1 =  (sc_lv<32>) (sext_ln1118_206_fu_5604_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_29_fu_5624_p2() {
    mul_ln1118_29_fu_5624_p2 = (!ap_const_lv44_FFFFFFFF8FA.is_01() || !mul_ln1118_29_fu_5624_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFF8FA) * sc_bigint<32>(mul_ln1118_29_fu_5624_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2_fu_4062_p1() {
    mul_ln1118_2_fu_4062_p1 =  (sc_lv<32>) (sext_ln1118_18_fu_4050_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_2_fu_4062_p2() {
    mul_ln1118_2_fu_4062_p2 = (!ap_const_lv44_FFFFFFFFA32.is_01() || !mul_ln1118_2_fu_4062_p1.read().is_01())? sc_lv<44>(): sc_bigint<44>(ap_const_lv44_FFFFFFFFA32) * sc_bigint<32>(mul_ln1118_2_fu_4062_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_300_fu_14326_p1() {
    mul_ln1118_300_fu_14326_p1 =  (sc_lv<32>) (sext_ln1118_171_fu_5288_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_300_fu_14326_p2() {
    mul_ln1118_300_fu_14326_p2 = (!ap_const_lv48_43A2.is_01() || !mul_ln1118_300_fu_14326_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_43A2) * sc_bigint<32>(mul_ln1118_300_fu_14326_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_301_fu_14342_p1() {
    mul_ln1118_301_fu_14342_p1 =  (sc_lv<32>) (sext_ln1118_176_fu_5338_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_301_fu_14342_p2() {
    mul_ln1118_301_fu_14342_p2 = (!ap_const_lv48_FFFFFFFF9C02.is_01() || !mul_ln1118_301_fu_14342_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF9C02) * sc_bigint<32>(mul_ln1118_301_fu_14342_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_302_fu_14358_p1() {
    mul_ln1118_302_fu_14358_p1 =  (sc_lv<32>) (sext_ln1118_179_fu_5380_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_302_fu_14358_p2() {
    mul_ln1118_302_fu_14358_p2 = (!ap_const_lv48_FFFFFFFFB791.is_01() || !mul_ln1118_302_fu_14358_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFB791) * sc_bigint<32>(mul_ln1118_302_fu_14358_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_303_fu_14374_p1() {
    mul_ln1118_303_fu_14374_p1 =  (sc_lv<32>) (sext_ln1118_188_fu_5442_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_303_fu_14374_p2() {
    mul_ln1118_303_fu_14374_p2 = (!ap_const_lv46_170F.is_01() || !mul_ln1118_303_fu_14374_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_170F) * sc_bigint<32>(mul_ln1118_303_fu_14374_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_304_fu_14394_p1() {
    mul_ln1118_304_fu_14394_p1 =  (sc_lv<32>) (sext_ln1118_191_fu_5484_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_304_fu_14394_p2() {
    mul_ln1118_304_fu_14394_p2 = (!ap_const_lv46_1C1C.is_01() || !mul_ln1118_304_fu_14394_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1C1C) * sc_bigint<32>(mul_ln1118_304_fu_14394_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_305_fu_14414_p1() {
    mul_ln1118_305_fu_14414_p1 =  (sc_lv<32>) (sext_ln1118_197_fu_5538_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_305_fu_14414_p2() {
    mul_ln1118_305_fu_14414_p2 = (!ap_const_lv43_7FFFFFFFDC7.is_01() || !mul_ln1118_305_fu_14414_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFDC7) * sc_bigint<32>(mul_ln1118_305_fu_14414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_306_fu_14434_p1() {
    mul_ln1118_306_fu_14434_p1 =  (sc_lv<32>) (sext_ln1118_208_fu_5612_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_306_fu_14434_p2() {
    mul_ln1118_306_fu_14434_p2 = (!ap_const_lv46_1781.is_01() || !mul_ln1118_306_fu_14434_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1781) * sc_bigint<32>(mul_ln1118_306_fu_14434_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_307_fu_14454_p1() {
    mul_ln1118_307_fu_14454_p1 =  (sc_lv<32>) (sext_ln1118_213_fu_5662_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_307_fu_14454_p2() {
    mul_ln1118_307_fu_14454_p2 = (!ap_const_lv47_7FFFFFFFCDCE.is_01() || !mul_ln1118_307_fu_14454_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCDCE) * sc_bigint<32>(mul_ln1118_307_fu_14454_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_308_fu_14474_p1() {
    mul_ln1118_308_fu_14474_p1 =  (sc_lv<32>) (sext_ln1118_218_fu_5712_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_308_fu_14474_p2() {
    mul_ln1118_308_fu_14474_p2 = (!ap_const_lv41_1FFFFFFFF58.is_01() || !mul_ln1118_308_fu_14474_p1.read().is_01())? sc_lv<41>(): sc_bigint<41>(ap_const_lv41_1FFFFFFFF58) * sc_bigint<32>(mul_ln1118_308_fu_14474_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_309_fu_14494_p1() {
    mul_ln1118_309_fu_14494_p1 =  (sc_lv<32>) (sext_ln1118_227_fu_5778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_309_fu_14494_p2() {
    mul_ln1118_309_fu_14494_p2 = (!ap_const_lv48_FFFFFFFFA459.is_01() || !mul_ln1118_309_fu_14494_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFA459) * sc_bigint<32>(mul_ln1118_309_fu_14494_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_30_fu_5682_p1() {
    mul_ln1118_30_fu_5682_p1 =  (sc_lv<32>) (sext_ln1118_217_fu_5678_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_30_fu_5682_p2() {
    mul_ln1118_30_fu_5682_p2 = (!ap_const_lv45_1FFFFFFFF1DF.is_01() || !mul_ln1118_30_fu_5682_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF1DF) * sc_bigint<32>(mul_ln1118_30_fu_5682_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_310_fu_14510_p1() {
    mul_ln1118_310_fu_14510_p1 =  (sc_lv<32>) (sext_ln1118_233_fu_5828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_310_fu_14510_p2() {
    mul_ln1118_310_fu_14510_p2 = (!ap_const_lv48_FFFFFFFF83CC.is_01() || !mul_ln1118_310_fu_14510_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF83CC) * sc_bigint<32>(mul_ln1118_310_fu_14510_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_311_fu_14526_p1() {
    mul_ln1118_311_fu_14526_p1 =  (sc_lv<32>) (sext_ln1118_239_fu_5878_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_311_fu_14526_p2() {
    mul_ln1118_311_fu_14526_p2 = (!ap_const_lv46_14F0.is_01() || !mul_ln1118_311_fu_14526_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_14F0) * sc_bigint<32>(mul_ln1118_311_fu_14526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_312_fu_14546_p1() {
    mul_ln1118_312_fu_14546_p1 =  (sc_lv<32>) (sext_ln1118_249_fu_5944_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_312_fu_14546_p2() {
    mul_ln1118_312_fu_14546_p2 = (!ap_const_lv43_334.is_01() || !mul_ln1118_312_fu_14546_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_334) * sc_bigint<32>(mul_ln1118_312_fu_14546_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_313_fu_14566_p1() {
    mul_ln1118_313_fu_14566_p1 =  (sc_lv<32>) (sext_ln1118_258_fu_6010_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_313_fu_14566_p2() {
    mul_ln1118_313_fu_14566_p2 = (!ap_const_lv45_1FFFFFFFF3DA.is_01() || !mul_ln1118_313_fu_14566_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF3DA) * sc_bigint<32>(mul_ln1118_313_fu_14566_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_314_fu_14586_p1() {
    mul_ln1118_314_fu_14586_p1 =  (sc_lv<32>) (sext_ln1118_262_fu_6052_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_314_fu_14586_p2() {
    mul_ln1118_314_fu_14586_p2 = (!ap_const_lv47_7FFFFFFFDE0B.is_01() || !mul_ln1118_314_fu_14586_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDE0B) * sc_bigint<32>(mul_ln1118_314_fu_14586_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_315_fu_14606_p1() {
    mul_ln1118_315_fu_14606_p1 =  (sc_lv<32>) (sext_ln1118_265_fu_6090_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_315_fu_14606_p2() {
    mul_ln1118_315_fu_14606_p2 = (!ap_const_lv43_388.is_01() || !mul_ln1118_315_fu_14606_p1.read().is_01())? sc_lv<43>(): sc_biguint<43>(ap_const_lv43_388) * sc_bigint<32>(mul_ln1118_315_fu_14606_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_316_fu_14626_p1() {
    mul_ln1118_316_fu_14626_p1 =  (sc_lv<32>) (sext_ln1118_275_fu_6160_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_316_fu_14626_p2() {
    mul_ln1118_316_fu_14626_p2 = (!ap_const_lv47_7FFFFFFFC7CB.is_01() || !mul_ln1118_316_fu_14626_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC7CB) * sc_bigint<32>(mul_ln1118_316_fu_14626_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_317_fu_14646_p1() {
    mul_ln1118_317_fu_14646_p1 =  (sc_lv<32>) (sext_ln1118_280_fu_6206_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_317_fu_14646_p2() {
    mul_ln1118_317_fu_14646_p2 = (!ap_const_lv47_37A5.is_01() || !mul_ln1118_317_fu_14646_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_37A5) * sc_bigint<32>(mul_ln1118_317_fu_14646_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_318_fu_14666_p1() {
    mul_ln1118_318_fu_14666_p1 =  (sc_lv<32>) (sext_ln1118_285_fu_6256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_318_fu_14666_p2() {
    mul_ln1118_318_fu_14666_p2 = (!ap_const_lv46_3FFFFFFFE9AC.is_01() || !mul_ln1118_318_fu_14666_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE9AC) * sc_bigint<32>(mul_ln1118_318_fu_14666_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_319_fu_14686_p1() {
    mul_ln1118_319_fu_14686_p1 =  (sc_lv<32>) (sext_ln1118_291_fu_6310_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_319_fu_14686_p2() {
    mul_ln1118_319_fu_14686_p2 = (!ap_const_lv47_7FFFFFFFC06A.is_01() || !mul_ln1118_319_fu_14686_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC06A) * sc_bigint<32>(mul_ln1118_319_fu_14686_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_31_fu_5736_p1() {
    mul_ln1118_31_fu_5736_p1 =  (sc_lv<32>) (sext_ln1118_219_fu_5716_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_31_fu_5736_p2() {
    mul_ln1118_31_fu_5736_p2 = (!ap_const_lv47_7FFFFFFFDD89.is_01() || !mul_ln1118_31_fu_5736_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDD89) * sc_bigint<32>(mul_ln1118_31_fu_5736_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_320_fu_14706_p1() {
    mul_ln1118_320_fu_14706_p1 =  (sc_lv<32>) (sext_ln1118_297_fu_6360_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_320_fu_14706_p2() {
    mul_ln1118_320_fu_14706_p2 = (!ap_const_lv45_A79.is_01() || !mul_ln1118_320_fu_14706_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_A79) * sc_bigint<32>(mul_ln1118_320_fu_14706_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_321_fu_14726_p1() {
    mul_ln1118_321_fu_14726_p1 =  (sc_lv<32>) (sext_ln1118_303_fu_6414_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_321_fu_14726_p2() {
    mul_ln1118_321_fu_14726_p2 = (!ap_const_lv46_3FFFFFFFE73E.is_01() || !mul_ln1118_321_fu_14726_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE73E) * sc_bigint<32>(mul_ln1118_321_fu_14726_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_322_fu_14746_p1() {
    mul_ln1118_322_fu_14746_p1 =  (sc_lv<32>) (sext_ln1118_313_fu_6484_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_322_fu_14746_p2() {
    mul_ln1118_322_fu_14746_p2 = (!ap_const_lv47_7FFFFFFFD2DE.is_01() || !mul_ln1118_322_fu_14746_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFD2DE) * sc_bigint<32>(mul_ln1118_322_fu_14746_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_323_fu_14766_p1() {
    mul_ln1118_323_fu_14766_p1 =  (sc_lv<32>) (sext_ln1118_320_fu_6538_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_323_fu_14766_p2() {
    mul_ln1118_323_fu_14766_p2 = (!ap_const_lv46_1E70.is_01() || !mul_ln1118_323_fu_14766_p1.read().is_01())? sc_lv<46>(): sc_biguint<46>(ap_const_lv46_1E70) * sc_bigint<32>(mul_ln1118_323_fu_14766_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_324_fu_14786_p1() {
    mul_ln1118_324_fu_14786_p1 = tmp_46_fu_6570_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_324_fu_14786_p2() {
    mul_ln1118_324_fu_14786_p2 = (!ap_const_lv48_42B5.is_01() || !mul_ln1118_324_fu_14786_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_42B5) * sc_bigint<32>(mul_ln1118_324_fu_14786_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_325_fu_14802_p1() {
    mul_ln1118_325_fu_14802_p1 =  (sc_lv<32>) (sext_ln1118_339_fu_6690_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_325_fu_14802_p2() {
    mul_ln1118_325_fu_14802_p2 = (!ap_const_lv47_7FFFFFFFCB1B.is_01() || !mul_ln1118_325_fu_14802_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFCB1B) * sc_bigint<32>(mul_ln1118_325_fu_14802_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_326_fu_14822_p1() {
    mul_ln1118_326_fu_14822_p1 =  (sc_lv<32>) (sext_ln1118_340_fu_6724_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_326_fu_14822_p2() {
    mul_ln1118_326_fu_14822_p2 = (!ap_const_lv43_7FFFFFFFCEE.is_01() || !mul_ln1118_326_fu_14822_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCEE) * sc_bigint<32>(mul_ln1118_326_fu_14822_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_327_fu_14842_p1() {
    mul_ln1118_327_fu_14842_p1 =  (sc_lv<32>) (sext_ln1118_353_fu_6806_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_327_fu_14842_p2() {
    mul_ln1118_327_fu_14842_p2 = (!ap_const_lv46_3FFFFFFFE91E.is_01() || !mul_ln1118_327_fu_14842_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFE91E) * sc_bigint<32>(mul_ln1118_327_fu_14842_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_328_fu_14862_p1() {
    mul_ln1118_328_fu_14862_p1 =  (sc_lv<32>) (sext_ln1118_359_fu_6860_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_328_fu_14862_p2() {
    mul_ln1118_328_fu_14862_p2 = (!ap_const_lv48_FFFFFFFFA575.is_01() || !mul_ln1118_328_fu_14862_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFA575) * sc_bigint<32>(mul_ln1118_328_fu_14862_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_329_fu_14878_p1() {
    mul_ln1118_329_fu_14878_p1 =  (sc_lv<32>) (sext_ln1118_360_fu_6894_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_329_fu_14878_p2() {
    mul_ln1118_329_fu_14878_p2 = (!ap_const_lv44_5C4.is_01() || !mul_ln1118_329_fu_14878_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_5C4) * sc_bigint<32>(mul_ln1118_329_fu_14878_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_32_fu_5798_p1() {
    mul_ln1118_32_fu_5798_p1 =  (sc_lv<32>) (sext_ln1118_227_fu_5778_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_32_fu_5798_p2() {
    mul_ln1118_32_fu_5798_p2 = (!ap_const_lv48_867E.is_01() || !mul_ln1118_32_fu_5798_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_867E) * sc_bigint<32>(mul_ln1118_32_fu_5798_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_330_fu_14898_p1() {
    mul_ln1118_330_fu_14898_p1 =  (sc_lv<32>) (sext_ln1118_369_fu_6960_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_330_fu_14898_p2() {
    mul_ln1118_330_fu_14898_p2 = (!ap_const_lv47_7FFFFFFFC821.is_01() || !mul_ln1118_330_fu_14898_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFC821) * sc_bigint<32>(mul_ln1118_330_fu_14898_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_331_fu_14918_p1() {
    mul_ln1118_331_fu_14918_p1 =  (sc_lv<32>) (sext_ln1118_373_fu_7006_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_331_fu_14918_p2() {
    mul_ln1118_331_fu_14918_p2 = (!ap_const_lv48_4AB8.is_01() || !mul_ln1118_331_fu_14918_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_4AB8) * sc_bigint<32>(mul_ln1118_331_fu_14918_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_332_fu_14934_p1() {
    mul_ln1118_332_fu_14934_p1 = tmp_54_fu_7030_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_332_fu_14934_p2() {
    mul_ln1118_332_fu_14934_p2 = (!ap_const_lv48_5C82.is_01() || !mul_ln1118_332_fu_14934_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_5C82) * sc_bigint<32>(mul_ln1118_332_fu_14934_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_333_fu_14950_p1() {
    mul_ln1118_333_fu_14950_p1 =  (sc_lv<32>) (sext_ln1118_382_fu_7098_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_333_fu_14950_p2() {
    mul_ln1118_333_fu_14950_p2 = (!ap_const_lv47_278D.is_01() || !mul_ln1118_333_fu_14950_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_278D) * sc_bigint<32>(mul_ln1118_333_fu_14950_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_334_fu_15388_p1() {
    mul_ln1118_334_fu_15388_p1 =  (sc_lv<32>) (sext_ln1118_2_fu_3926_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_334_fu_15388_p2() {
    mul_ln1118_334_fu_15388_p2 = (!ap_const_lv45_1FFFFFFFF3EC.is_01() || !mul_ln1118_334_fu_15388_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF3EC) * sc_bigint<32>(mul_ln1118_334_fu_15388_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_335_fu_15408_p1() {
    mul_ln1118_335_fu_15408_p1 =  (sc_lv<32>) (sext_ln1118_11_fu_3992_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_335_fu_15408_p2() {
    mul_ln1118_335_fu_15408_p2 = (!ap_const_lv45_1FFFFFFFF1A0.is_01() || !mul_ln1118_335_fu_15408_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF1A0) * sc_bigint<32>(mul_ln1118_335_fu_15408_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_336_fu_15428_p1() {
    mul_ln1118_336_fu_15428_p1 =  (sc_lv<32>) (sext_ln1118_16_fu_4042_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_336_fu_15428_p2() {
    mul_ln1118_336_fu_15428_p2 = (!ap_const_lv45_1FFFFFFFF35E.is_01() || !mul_ln1118_336_fu_15428_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF35E) * sc_bigint<32>(mul_ln1118_336_fu_15428_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_337_fu_15448_p1() {
    mul_ln1118_337_fu_15448_p1 =  (sc_lv<32>) (sext_ln1118_25_fu_4108_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_337_fu_15448_p2() {
    mul_ln1118_337_fu_15448_p2 = (!ap_const_lv45_1FFFFFFFF2D3.is_01() || !mul_ln1118_337_fu_15448_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF2D3) * sc_bigint<32>(mul_ln1118_337_fu_15448_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_338_fu_15468_p1() {
    mul_ln1118_338_fu_15468_p1 =  (sc_lv<32>) (sext_ln1118_37_fu_4186_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_338_fu_15468_p2() {
    mul_ln1118_338_fu_15468_p2 = (!ap_const_lv43_7FFFFFFFCF2.is_01() || !mul_ln1118_338_fu_15468_p1.read().is_01())? sc_lv<43>(): sc_bigint<43>(ap_const_lv43_7FFFFFFFCF2) * sc_bigint<32>(mul_ln1118_338_fu_15468_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_339_fu_15488_p1() {
    mul_ln1118_339_fu_15488_p1 =  (sc_lv<32>) (sext_ln1118_47_fu_4256_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_339_fu_15488_p2() {
    mul_ln1118_339_fu_15488_p2 = (!ap_const_lv45_DC4.is_01() || !mul_ln1118_339_fu_15488_p1.read().is_01())? sc_lv<45>(): sc_biguint<45>(ap_const_lv45_DC4) * sc_bigint<32>(mul_ln1118_339_fu_15488_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_33_fu_5844_p1() {
    mul_ln1118_33_fu_5844_p1 =  (sc_lv<32>) (sext_ln1118_233_fu_5828_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_33_fu_5844_p2() {
    mul_ln1118_33_fu_5844_p2 = (!ap_const_lv48_FFFFFFFFBDD5.is_01() || !mul_ln1118_33_fu_5844_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFFBDD5) * sc_bigint<32>(mul_ln1118_33_fu_5844_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_340_fu_15508_p1() {
    mul_ln1118_340_fu_15508_p1 =  (sc_lv<32>) (sext_ln1118_52_fu_4306_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_340_fu_15508_p2() {
    mul_ln1118_340_fu_15508_p2 = (!ap_const_lv48_FFFFFFFF99AB.is_01() || !mul_ln1118_340_fu_15508_p1.read().is_01())? sc_lv<48>(): sc_bigint<48>(ap_const_lv48_FFFFFFFF99AB) * sc_bigint<32>(mul_ln1118_340_fu_15508_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_341_fu_15524_p1() {
    mul_ln1118_341_fu_15524_p1 = tmp_7_fu_4334_p4.read();
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_341_fu_15524_p2() {
    mul_ln1118_341_fu_15524_p2 = (!ap_const_lv42_3FFFFFFFE3F.is_01() || !mul_ln1118_341_fu_15524_p1.read().is_01())? sc_lv<42>(): sc_bigint<42>(ap_const_lv42_3FFFFFFFE3F) * sc_bigint<32>(mul_ln1118_341_fu_15524_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_342_fu_15544_p1() {
    mul_ln1118_342_fu_15544_p1 =  (sc_lv<32>) (sext_ln1118_62_fu_4406_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_342_fu_15544_p2() {
    mul_ln1118_342_fu_15544_p2 = (!ap_const_lv47_2337.is_01() || !mul_ln1118_342_fu_15544_p1.read().is_01())? sc_lv<47>(): sc_biguint<47>(ap_const_lv47_2337) * sc_bigint<32>(mul_ln1118_342_fu_15544_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_343_fu_15564_p1() {
    mul_ln1118_343_fu_15564_p1 =  (sc_lv<32>) (sext_ln1118_67_fu_4456_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_343_fu_15564_p2() {
    mul_ln1118_343_fu_15564_p2 = (!ap_const_lv46_3FFFFFFFECD8.is_01() || !mul_ln1118_343_fu_15564_p1.read().is_01())? sc_lv<46>(): sc_bigint<46>(ap_const_lv46_3FFFFFFFECD8) * sc_bigint<32>(mul_ln1118_343_fu_15564_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_344_fu_15584_p1() {
    mul_ln1118_344_fu_15584_p1 =  (sc_lv<32>) (sext_ln1118_77_fu_4526_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_344_fu_15584_p2() {
    mul_ln1118_344_fu_15584_p2 = (!ap_const_lv45_1FFFFFFFF7B9.is_01() || !mul_ln1118_344_fu_15584_p1.read().is_01())? sc_lv<45>(): sc_bigint<45>(ap_const_lv45_1FFFFFFFF7B9) * sc_bigint<32>(mul_ln1118_344_fu_15584_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_345_fu_15604_p1() {
    mul_ln1118_345_fu_15604_p1 =  (sc_lv<32>) (sext_ln1118_83_fu_4580_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_345_fu_15604_p2() {
    mul_ln1118_345_fu_15604_p2 = (!ap_const_lv48_4E68.is_01() || !mul_ln1118_345_fu_15604_p1.read().is_01())? sc_lv<48>(): sc_biguint<48>(ap_const_lv48_4E68) * sc_bigint<32>(mul_ln1118_345_fu_15604_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_346_fu_15620_p1() {
    mul_ln1118_346_fu_15620_p1 =  (sc_lv<32>) (sext_ln1118_90_fu_4638_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_346_fu_15620_p2() {
    mul_ln1118_346_fu_15620_p2 = (!ap_const_lv47_7FFFFFFFDB18.is_01() || !mul_ln1118_346_fu_15620_p1.read().is_01())? sc_lv<47>(): sc_bigint<47>(ap_const_lv47_7FFFFFFFDB18) * sc_bigint<32>(mul_ln1118_346_fu_15620_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_347_fu_15640_p1() {
    mul_ln1118_347_fu_15640_p1 =  (sc_lv<32>) (sext_ln1118_97_fu_4696_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_347_fu_15640_p2() {
    mul_ln1118_347_fu_15640_p2 = (!ap_const_lv44_5D5.is_01() || !mul_ln1118_347_fu_15640_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_5D5) * sc_bigint<32>(mul_ln1118_347_fu_15640_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_348_fu_15660_p1() {
    mul_ln1118_348_fu_15660_p1 =  (sc_lv<32>) (sext_ln1118_103_fu_4750_p1.read());
}

void dense_resource_ap_fixed_32_16_5_3_0_ap_fixed_32_16_5_3_0_config2_s::thread_mul_ln1118_348_fu_15660_p2() {
    mul_ln1118_348_fu_15660_p2 = (!ap_const_lv44_4F7.is_01() || !mul_ln1118_348_fu_15660_p1.read().is_01())? sc_lv<44>(): sc_biguint<44>(ap_const_lv44_4F7) * sc_bigint<32>(mul_ln1118_348_fu_15660_p1.read());
}

}


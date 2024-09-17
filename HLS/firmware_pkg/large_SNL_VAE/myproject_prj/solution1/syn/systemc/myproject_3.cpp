#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"inputs_V\" :  \"" << inputs_V.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"layer8_out_0_V\" :  \"" << layer8_out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_1_V\" :  \"" << layer8_out_1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_2_V\" :  \"" << layer8_out_2_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_3_V\" :  \"" << layer8_out_3_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_4_V\" :  \"" << layer8_out_4_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_5_V\" :  \"" << layer8_out_5_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_6_V\" :  \"" << layer8_out_6_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_7_V\" :  \"" << layer8_out_7_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_8_V\" :  \"" << layer8_out_8_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_9_V\" :  \"" << layer8_out_9_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_10_V\" :  \"" << layer8_out_10_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_11_V\" :  \"" << layer8_out_11_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_12_V\" :  \"" << layer8_out_12_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_13_V\" :  \"" << layer8_out_13_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_14_V\" :  \"" << layer8_out_14_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_15_V\" :  \"" << layer8_out_15_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inputs_V_ap_vld\" :  \"" << inputs_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_0_V_ap_vld\" :  \"" << layer8_out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_1_V_ap_vld\" :  \"" << layer8_out_1_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_2_V_ap_vld\" :  \"" << layer8_out_2_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_3_V_ap_vld\" :  \"" << layer8_out_3_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_4_V_ap_vld\" :  \"" << layer8_out_4_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_5_V_ap_vld\" :  \"" << layer8_out_5_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_6_V_ap_vld\" :  \"" << layer8_out_6_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_7_V_ap_vld\" :  \"" << layer8_out_7_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_8_V_ap_vld\" :  \"" << layer8_out_8_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_9_V_ap_vld\" :  \"" << layer8_out_9_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_10_V_ap_vld\" :  \"" << layer8_out_10_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_11_V_ap_vld\" :  \"" << layer8_out_11_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_12_V_ap_vld\" :  \"" << layer8_out_12_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_13_V_ap_vld\" :  \"" << layer8_out_13_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_14_V_ap_vld\" :  \"" << layer8_out_14_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer8_out_15_V_ap_vld\" :  \"" << layer8_out_15_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}


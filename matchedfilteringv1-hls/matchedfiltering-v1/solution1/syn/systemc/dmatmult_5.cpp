#include "dmatmult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dmatmult::thread_rxmat_M_real_105_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_105_ce1 = grp_kernel_mmult_fu_10781_a_M_real105_ce1.read();
    } else {
        rxmat_M_real_105_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_105_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_105_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_105_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_105_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_105_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_69)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_69)))) {
        rxmat_M_real_105_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_105_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_106_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_106_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_106_address0 = grp_kernel_mmult_fu_10781_a_M_real106_address0.read();
    } else {
        rxmat_M_real_106_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_106_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_106_ce0 = grp_kernel_mmult_fu_10781_a_M_real106_ce0.read();
    } else {
        rxmat_M_real_106_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_106_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_106_ce1 = grp_kernel_mmult_fu_10781_a_M_real106_ce1.read();
    } else {
        rxmat_M_real_106_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_106_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_106_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_106_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_106_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_106_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6A)))) {
        rxmat_M_real_106_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_106_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_107_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_107_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_107_address0 = grp_kernel_mmult_fu_10781_a_M_real107_address0.read();
    } else {
        rxmat_M_real_107_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_107_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_107_ce0 = grp_kernel_mmult_fu_10781_a_M_real107_ce0.read();
    } else {
        rxmat_M_real_107_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_107_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_107_ce1 = grp_kernel_mmult_fu_10781_a_M_real107_ce1.read();
    } else {
        rxmat_M_real_107_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_107_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_107_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_107_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_107_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_107_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6B)))) {
        rxmat_M_real_107_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_107_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_108_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_108_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_108_address0 = grp_kernel_mmult_fu_10781_a_M_real108_address0.read();
    } else {
        rxmat_M_real_108_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_108_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_108_ce0 = grp_kernel_mmult_fu_10781_a_M_real108_ce0.read();
    } else {
        rxmat_M_real_108_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_108_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_108_ce1 = grp_kernel_mmult_fu_10781_a_M_real108_ce1.read();
    } else {
        rxmat_M_real_108_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_108_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_108_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_108_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_108_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_108_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6C)))) {
        rxmat_M_real_108_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_108_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_109_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_109_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_109_address0 = grp_kernel_mmult_fu_10781_a_M_real109_address0.read();
    } else {
        rxmat_M_real_109_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_109_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_109_ce0 = grp_kernel_mmult_fu_10781_a_M_real109_ce0.read();
    } else {
        rxmat_M_real_109_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_109_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_109_ce1 = grp_kernel_mmult_fu_10781_a_M_real109_ce1.read();
    } else {
        rxmat_M_real_109_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_109_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_109_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_109_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_109_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_109_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6D)))) {
        rxmat_M_real_109_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_109_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_10_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_10_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_10_address0 = grp_kernel_mmult_fu_10781_a_M_real10_address0.read();
    } else {
        rxmat_M_real_10_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_10_ce0 = grp_kernel_mmult_fu_10781_a_M_real10_ce0.read();
    } else {
        rxmat_M_real_10_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_10_ce1 = grp_kernel_mmult_fu_10781_a_M_real10_ce1.read();
    } else {
        rxmat_M_real_10_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_10_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_10_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_A)))) {
        rxmat_M_real_10_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_10_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_110_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_110_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_110_address0 = grp_kernel_mmult_fu_10781_a_M_real110_address0.read();
    } else {
        rxmat_M_real_110_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_110_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_110_ce0 = grp_kernel_mmult_fu_10781_a_M_real110_ce0.read();
    } else {
        rxmat_M_real_110_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_110_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_110_ce1 = grp_kernel_mmult_fu_10781_a_M_real110_ce1.read();
    } else {
        rxmat_M_real_110_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_110_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_110_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_110_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_110_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_110_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6E)))) {
        rxmat_M_real_110_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_110_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_111_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_111_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_111_address0 = grp_kernel_mmult_fu_10781_a_M_real111_address0.read();
    } else {
        rxmat_M_real_111_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_111_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_111_ce0 = grp_kernel_mmult_fu_10781_a_M_real111_ce0.read();
    } else {
        rxmat_M_real_111_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_111_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_111_ce1 = grp_kernel_mmult_fu_10781_a_M_real111_ce1.read();
    } else {
        rxmat_M_real_111_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_111_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_111_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_111_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_111_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_111_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6F)))) {
        rxmat_M_real_111_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_111_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_112_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_112_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_112_address0 = grp_kernel_mmult_fu_10781_a_M_real112_address0.read();
    } else {
        rxmat_M_real_112_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_112_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_112_ce0 = grp_kernel_mmult_fu_10781_a_M_real112_ce0.read();
    } else {
        rxmat_M_real_112_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_112_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_112_ce1 = grp_kernel_mmult_fu_10781_a_M_real112_ce1.read();
    } else {
        rxmat_M_real_112_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_112_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_112_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_112_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_112_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_112_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_70)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_70)))) {
        rxmat_M_real_112_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_112_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_113_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_113_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_113_address0 = grp_kernel_mmult_fu_10781_a_M_real113_address0.read();
    } else {
        rxmat_M_real_113_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_113_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_113_ce0 = grp_kernel_mmult_fu_10781_a_M_real113_ce0.read();
    } else {
        rxmat_M_real_113_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_113_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_113_ce1 = grp_kernel_mmult_fu_10781_a_M_real113_ce1.read();
    } else {
        rxmat_M_real_113_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_113_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_113_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_113_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_113_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_113_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_71)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_71)))) {
        rxmat_M_real_113_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_113_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_114_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_114_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_114_address0 = grp_kernel_mmult_fu_10781_a_M_real114_address0.read();
    } else {
        rxmat_M_real_114_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_114_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_114_ce0 = grp_kernel_mmult_fu_10781_a_M_real114_ce0.read();
    } else {
        rxmat_M_real_114_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_114_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_114_ce1 = grp_kernel_mmult_fu_10781_a_M_real114_ce1.read();
    } else {
        rxmat_M_real_114_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_114_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_114_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_114_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_114_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_114_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_72)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_72)))) {
        rxmat_M_real_114_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_114_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_115_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_115_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_115_address0 = grp_kernel_mmult_fu_10781_a_M_real115_address0.read();
    } else {
        rxmat_M_real_115_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_115_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_115_ce0 = grp_kernel_mmult_fu_10781_a_M_real115_ce0.read();
    } else {
        rxmat_M_real_115_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_115_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_115_ce1 = grp_kernel_mmult_fu_10781_a_M_real115_ce1.read();
    } else {
        rxmat_M_real_115_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_115_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_115_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_115_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_115_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_115_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_73)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_73)))) {
        rxmat_M_real_115_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_115_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_116_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_116_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_116_address0 = grp_kernel_mmult_fu_10781_a_M_real116_address0.read();
    } else {
        rxmat_M_real_116_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_116_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_116_ce0 = grp_kernel_mmult_fu_10781_a_M_real116_ce0.read();
    } else {
        rxmat_M_real_116_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_116_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_116_ce1 = grp_kernel_mmult_fu_10781_a_M_real116_ce1.read();
    } else {
        rxmat_M_real_116_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_116_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_116_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_116_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_116_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_116_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_74)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_74)))) {
        rxmat_M_real_116_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_116_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_117_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_117_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_117_address0 = grp_kernel_mmult_fu_10781_a_M_real117_address0.read();
    } else {
        rxmat_M_real_117_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_117_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_117_ce0 = grp_kernel_mmult_fu_10781_a_M_real117_ce0.read();
    } else {
        rxmat_M_real_117_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_117_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_117_ce1 = grp_kernel_mmult_fu_10781_a_M_real117_ce1.read();
    } else {
        rxmat_M_real_117_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_117_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_117_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_117_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_117_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_117_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_75)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_75)))) {
        rxmat_M_real_117_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_117_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_118_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_118_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_118_address0 = grp_kernel_mmult_fu_10781_a_M_real118_address0.read();
    } else {
        rxmat_M_real_118_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_118_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_118_ce0 = grp_kernel_mmult_fu_10781_a_M_real118_ce0.read();
    } else {
        rxmat_M_real_118_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_118_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_118_ce1 = grp_kernel_mmult_fu_10781_a_M_real118_ce1.read();
    } else {
        rxmat_M_real_118_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_118_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_118_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_118_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_118_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_118_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_76)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_76)))) {
        rxmat_M_real_118_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_118_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_119_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_119_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_119_address0 = grp_kernel_mmult_fu_10781_a_M_real119_address0.read();
    } else {
        rxmat_M_real_119_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_119_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_119_ce0 = grp_kernel_mmult_fu_10781_a_M_real119_ce0.read();
    } else {
        rxmat_M_real_119_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_119_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_119_ce1 = grp_kernel_mmult_fu_10781_a_M_real119_ce1.read();
    } else {
        rxmat_M_real_119_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_119_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_119_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_119_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_119_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_119_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_77)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_77)))) {
        rxmat_M_real_119_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_119_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_11_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_11_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_11_address0 = grp_kernel_mmult_fu_10781_a_M_real11_address0.read();
    } else {
        rxmat_M_real_11_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_11_ce0 = grp_kernel_mmult_fu_10781_a_M_real11_ce0.read();
    } else {
        rxmat_M_real_11_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_11_ce1 = grp_kernel_mmult_fu_10781_a_M_real11_ce1.read();
    } else {
        rxmat_M_real_11_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_11_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_11_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_B)))) {
        rxmat_M_real_11_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_11_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_120_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_120_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_120_address0 = grp_kernel_mmult_fu_10781_a_M_real120_address0.read();
    } else {
        rxmat_M_real_120_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_120_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_120_ce0 = grp_kernel_mmult_fu_10781_a_M_real120_ce0.read();
    } else {
        rxmat_M_real_120_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_120_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_120_ce1 = grp_kernel_mmult_fu_10781_a_M_real120_ce1.read();
    } else {
        rxmat_M_real_120_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_120_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_120_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_120_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_120_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_120_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_78)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_78)))) {
        rxmat_M_real_120_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_120_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_121_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_121_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_121_address0 = grp_kernel_mmult_fu_10781_a_M_real121_address0.read();
    } else {
        rxmat_M_real_121_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_121_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_121_ce0 = grp_kernel_mmult_fu_10781_a_M_real121_ce0.read();
    } else {
        rxmat_M_real_121_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_121_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_121_ce1 = grp_kernel_mmult_fu_10781_a_M_real121_ce1.read();
    } else {
        rxmat_M_real_121_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_121_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_121_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_121_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_121_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_121_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_79)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_79)))) {
        rxmat_M_real_121_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_121_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_122_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_122_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_122_address0 = grp_kernel_mmult_fu_10781_a_M_real122_address0.read();
    } else {
        rxmat_M_real_122_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_122_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_122_ce0 = grp_kernel_mmult_fu_10781_a_M_real122_ce0.read();
    } else {
        rxmat_M_real_122_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_122_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_122_ce1 = grp_kernel_mmult_fu_10781_a_M_real122_ce1.read();
    } else {
        rxmat_M_real_122_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_122_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_122_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_122_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_122_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_122_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7A)))) {
        rxmat_M_real_122_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_122_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_123_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_123_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_123_address0 = grp_kernel_mmult_fu_10781_a_M_real123_address0.read();
    } else {
        rxmat_M_real_123_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_123_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_123_ce0 = grp_kernel_mmult_fu_10781_a_M_real123_ce0.read();
    } else {
        rxmat_M_real_123_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_123_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_123_ce1 = grp_kernel_mmult_fu_10781_a_M_real123_ce1.read();
    } else {
        rxmat_M_real_123_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_123_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_123_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_123_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_123_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_123_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7B)))) {
        rxmat_M_real_123_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_123_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_124_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_124_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_124_address0 = grp_kernel_mmult_fu_10781_a_M_real124_address0.read();
    } else {
        rxmat_M_real_124_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_124_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_124_ce0 = grp_kernel_mmult_fu_10781_a_M_real124_ce0.read();
    } else {
        rxmat_M_real_124_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_124_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_124_ce1 = grp_kernel_mmult_fu_10781_a_M_real124_ce1.read();
    } else {
        rxmat_M_real_124_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_124_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_124_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_124_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_124_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_124_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7C)))) {
        rxmat_M_real_124_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_124_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_125_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_125_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_125_address0 = grp_kernel_mmult_fu_10781_a_M_real125_address0.read();
    } else {
        rxmat_M_real_125_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_125_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_125_ce0 = grp_kernel_mmult_fu_10781_a_M_real125_ce0.read();
    } else {
        rxmat_M_real_125_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_125_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_125_ce1 = grp_kernel_mmult_fu_10781_a_M_real125_ce1.read();
    } else {
        rxmat_M_real_125_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_125_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_125_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_125_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_125_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_125_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7D)))) {
        rxmat_M_real_125_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_125_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_126_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_126_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_126_address0 = grp_kernel_mmult_fu_10781_a_M_real126_address0.read();
    } else {
        rxmat_M_real_126_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_126_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_126_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_126_ce0 = grp_kernel_mmult_fu_10781_a_M_real126_ce0.read();
    } else {
        rxmat_M_real_126_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_126_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_126_ce1 = grp_kernel_mmult_fu_10781_a_M_real126_ce1.read();
    } else {
        rxmat_M_real_126_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_126_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_126_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_126_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_126_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_126_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(ap_const_lv7_7E, trunc_ln76_fu_11944_p1.read())))) {
        rxmat_M_real_126_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_126_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_127_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_127_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_127_address0 = grp_kernel_mmult_fu_10781_a_M_real127_address0.read();
    } else {
        rxmat_M_real_127_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_127_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_127_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_127_ce0 = grp_kernel_mmult_fu_10781_a_M_real127_ce0.read();
    } else {
        rxmat_M_real_127_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_127_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_127_ce1 = grp_kernel_mmult_fu_10781_a_M_real127_ce1.read();
    } else {
        rxmat_M_real_127_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_127_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_127_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_127_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_127_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_127_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7F)))) {
        rxmat_M_real_127_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_127_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_12_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_12_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_12_address0 = grp_kernel_mmult_fu_10781_a_M_real12_address0.read();
    } else {
        rxmat_M_real_12_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_12_ce0 = grp_kernel_mmult_fu_10781_a_M_real12_ce0.read();
    } else {
        rxmat_M_real_12_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_12_ce1 = grp_kernel_mmult_fu_10781_a_M_real12_ce1.read();
    } else {
        rxmat_M_real_12_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_12_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_12_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_C)))) {
        rxmat_M_real_12_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_12_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_13_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_13_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_13_address0 = grp_kernel_mmult_fu_10781_a_M_real13_address0.read();
    } else {
        rxmat_M_real_13_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_13_ce0 = grp_kernel_mmult_fu_10781_a_M_real13_ce0.read();
    } else {
        rxmat_M_real_13_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_13_ce1 = grp_kernel_mmult_fu_10781_a_M_real13_ce1.read();
    } else {
        rxmat_M_real_13_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_13_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_13_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_D)))) {
        rxmat_M_real_13_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_13_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_14_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_14_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_14_address0 = grp_kernel_mmult_fu_10781_a_M_real14_address0.read();
    } else {
        rxmat_M_real_14_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_14_ce0 = grp_kernel_mmult_fu_10781_a_M_real14_ce0.read();
    } else {
        rxmat_M_real_14_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_14_ce1 = grp_kernel_mmult_fu_10781_a_M_real14_ce1.read();
    } else {
        rxmat_M_real_14_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_14_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_14_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_E)))) {
        rxmat_M_real_14_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_14_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_15_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_15_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_15_address0 = grp_kernel_mmult_fu_10781_a_M_real15_address0.read();
    } else {
        rxmat_M_real_15_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_15_ce0 = grp_kernel_mmult_fu_10781_a_M_real15_ce0.read();
    } else {
        rxmat_M_real_15_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_15_ce1 = grp_kernel_mmult_fu_10781_a_M_real15_ce1.read();
    } else {
        rxmat_M_real_15_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_15_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_15_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_F)))) {
        rxmat_M_real_15_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_15_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_16_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_16_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_16_address0 = grp_kernel_mmult_fu_10781_a_M_real16_address0.read();
    } else {
        rxmat_M_real_16_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_16_ce0 = grp_kernel_mmult_fu_10781_a_M_real16_ce0.read();
    } else {
        rxmat_M_real_16_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_16_ce1 = grp_kernel_mmult_fu_10781_a_M_real16_ce1.read();
    } else {
        rxmat_M_real_16_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_16_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_16_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_16_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_10)))) {
        rxmat_M_real_16_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_16_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_17_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_17_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_17_address0 = grp_kernel_mmult_fu_10781_a_M_real17_address0.read();
    } else {
        rxmat_M_real_17_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_17_ce0 = grp_kernel_mmult_fu_10781_a_M_real17_ce0.read();
    } else {
        rxmat_M_real_17_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_17_ce1 = grp_kernel_mmult_fu_10781_a_M_real17_ce1.read();
    } else {
        rxmat_M_real_17_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_17_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_17_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_17_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_11)))) {
        rxmat_M_real_17_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_17_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_18_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_18_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_18_address0 = grp_kernel_mmult_fu_10781_a_M_real18_address0.read();
    } else {
        rxmat_M_real_18_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_18_ce0 = grp_kernel_mmult_fu_10781_a_M_real18_ce0.read();
    } else {
        rxmat_M_real_18_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_18_ce1 = grp_kernel_mmult_fu_10781_a_M_real18_ce1.read();
    } else {
        rxmat_M_real_18_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_18_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_18_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_18_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_12)))) {
        rxmat_M_real_18_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_18_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_19_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_19_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_19_address0 = grp_kernel_mmult_fu_10781_a_M_real19_address0.read();
    } else {
        rxmat_M_real_19_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_19_ce0 = grp_kernel_mmult_fu_10781_a_M_real19_ce0.read();
    } else {
        rxmat_M_real_19_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_19_ce1 = grp_kernel_mmult_fu_10781_a_M_real19_ce1.read();
    } else {
        rxmat_M_real_19_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_19_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_19_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_19_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_13)))) {
        rxmat_M_real_19_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_19_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_1_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_1_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_1_address0 = grp_kernel_mmult_fu_10781_a_M_real1_address0.read();
    } else {
        rxmat_M_real_1_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_1_ce0 = grp_kernel_mmult_fu_10781_a_M_real1_ce0.read();
    } else {
        rxmat_M_real_1_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_1_ce1 = grp_kernel_mmult_fu_10781_a_M_real1_ce1.read();
    } else {
        rxmat_M_real_1_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_1_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_1_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1)))) {
        rxmat_M_real_1_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_1_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_20_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_20_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_20_address0 = grp_kernel_mmult_fu_10781_a_M_real20_address0.read();
    } else {
        rxmat_M_real_20_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_20_ce0 = grp_kernel_mmult_fu_10781_a_M_real20_ce0.read();
    } else {
        rxmat_M_real_20_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_20_ce1 = grp_kernel_mmult_fu_10781_a_M_real20_ce1.read();
    } else {
        rxmat_M_real_20_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_20_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_20_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_20_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_14)))) {
        rxmat_M_real_20_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_20_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_21_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_21_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_21_address0 = grp_kernel_mmult_fu_10781_a_M_real21_address0.read();
    } else {
        rxmat_M_real_21_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_21_ce0 = grp_kernel_mmult_fu_10781_a_M_real21_ce0.read();
    } else {
        rxmat_M_real_21_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_21_ce1 = grp_kernel_mmult_fu_10781_a_M_real21_ce1.read();
    } else {
        rxmat_M_real_21_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_21_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_21_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_21_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_15)))) {
        rxmat_M_real_21_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_21_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_22_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_22_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_22_address0 = grp_kernel_mmult_fu_10781_a_M_real22_address0.read();
    } else {
        rxmat_M_real_22_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_22_ce0 = grp_kernel_mmult_fu_10781_a_M_real22_ce0.read();
    } else {
        rxmat_M_real_22_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_22_ce1 = grp_kernel_mmult_fu_10781_a_M_real22_ce1.read();
    } else {
        rxmat_M_real_22_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_22_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_22_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_22_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_16)))) {
        rxmat_M_real_22_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_22_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_23_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_23_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_23_address0 = grp_kernel_mmult_fu_10781_a_M_real23_address0.read();
    } else {
        rxmat_M_real_23_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_23_ce0 = grp_kernel_mmult_fu_10781_a_M_real23_ce0.read();
    } else {
        rxmat_M_real_23_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_23_ce1 = grp_kernel_mmult_fu_10781_a_M_real23_ce1.read();
    } else {
        rxmat_M_real_23_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_23_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_23_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_23_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_17)))) {
        rxmat_M_real_23_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_23_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_24_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_24_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_24_address0 = grp_kernel_mmult_fu_10781_a_M_real24_address0.read();
    } else {
        rxmat_M_real_24_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_24_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_24_ce0 = grp_kernel_mmult_fu_10781_a_M_real24_ce0.read();
    } else {
        rxmat_M_real_24_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_24_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_24_ce1 = grp_kernel_mmult_fu_10781_a_M_real24_ce1.read();
    } else {
        rxmat_M_real_24_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_24_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_24_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_24_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_18)))) {
        rxmat_M_real_24_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_24_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_25_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_25_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_25_address0 = grp_kernel_mmult_fu_10781_a_M_real25_address0.read();
    } else {
        rxmat_M_real_25_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_25_ce0 = grp_kernel_mmult_fu_10781_a_M_real25_ce0.read();
    } else {
        rxmat_M_real_25_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_25_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_25_ce1 = grp_kernel_mmult_fu_10781_a_M_real25_ce1.read();
    } else {
        rxmat_M_real_25_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_25_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_25_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_25_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_19)))) {
        rxmat_M_real_25_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_25_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_26_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_26_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_26_address0 = grp_kernel_mmult_fu_10781_a_M_real26_address0.read();
    } else {
        rxmat_M_real_26_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_26_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_26_ce0 = grp_kernel_mmult_fu_10781_a_M_real26_ce0.read();
    } else {
        rxmat_M_real_26_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_26_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_26_ce1 = grp_kernel_mmult_fu_10781_a_M_real26_ce1.read();
    } else {
        rxmat_M_real_26_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_26_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_26_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_26_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1A)))) {
        rxmat_M_real_26_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_26_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_27_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_27_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_27_address0 = grp_kernel_mmult_fu_10781_a_M_real27_address0.read();
    } else {
        rxmat_M_real_27_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_27_ce0 = grp_kernel_mmult_fu_10781_a_M_real27_ce0.read();
    } else {
        rxmat_M_real_27_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_27_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_27_ce1 = grp_kernel_mmult_fu_10781_a_M_real27_ce1.read();
    } else {
        rxmat_M_real_27_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_27_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_27_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_27_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1B)))) {
        rxmat_M_real_27_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_27_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_28_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_28_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_28_address0 = grp_kernel_mmult_fu_10781_a_M_real28_address0.read();
    } else {
        rxmat_M_real_28_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_28_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_28_ce0 = grp_kernel_mmult_fu_10781_a_M_real28_ce0.read();
    } else {
        rxmat_M_real_28_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_28_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_28_ce1 = grp_kernel_mmult_fu_10781_a_M_real28_ce1.read();
    } else {
        rxmat_M_real_28_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_28_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_28_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_28_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1C)))) {
        rxmat_M_real_28_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_28_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_29_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_29_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_29_address0 = grp_kernel_mmult_fu_10781_a_M_real29_address0.read();
    } else {
        rxmat_M_real_29_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_29_ce0 = grp_kernel_mmult_fu_10781_a_M_real29_ce0.read();
    } else {
        rxmat_M_real_29_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_29_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_29_ce1 = grp_kernel_mmult_fu_10781_a_M_real29_ce1.read();
    } else {
        rxmat_M_real_29_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_29_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_29_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_29_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1D)))) {
        rxmat_M_real_29_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_29_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_2_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_2_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_2_address0 = grp_kernel_mmult_fu_10781_a_M_real2_address0.read();
    } else {
        rxmat_M_real_2_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_2_ce0 = grp_kernel_mmult_fu_10781_a_M_real2_ce0.read();
    } else {
        rxmat_M_real_2_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_2_ce1 = grp_kernel_mmult_fu_10781_a_M_real2_ce1.read();
    } else {
        rxmat_M_real_2_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_2_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_2_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2)))) {
        rxmat_M_real_2_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_2_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_30_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_30_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_30_address0 = grp_kernel_mmult_fu_10781_a_M_real30_address0.read();
    } else {
        rxmat_M_real_30_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_30_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_30_ce0 = grp_kernel_mmult_fu_10781_a_M_real30_ce0.read();
    } else {
        rxmat_M_real_30_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_30_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_30_ce1 = grp_kernel_mmult_fu_10781_a_M_real30_ce1.read();
    } else {
        rxmat_M_real_30_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_30_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_30_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_30_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1E)))) {
        rxmat_M_real_30_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_30_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_31_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_31_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_31_address0 = grp_kernel_mmult_fu_10781_a_M_real31_address0.read();
    } else {
        rxmat_M_real_31_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_31_ce0 = grp_kernel_mmult_fu_10781_a_M_real31_ce0.read();
    } else {
        rxmat_M_real_31_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_31_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_31_ce1 = grp_kernel_mmult_fu_10781_a_M_real31_ce1.read();
    } else {
        rxmat_M_real_31_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_31_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_31_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_31_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_1F)))) {
        rxmat_M_real_31_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_31_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_32_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_32_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_32_address0 = grp_kernel_mmult_fu_10781_a_M_real32_address0.read();
    } else {
        rxmat_M_real_32_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_32_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_32_ce0 = grp_kernel_mmult_fu_10781_a_M_real32_ce0.read();
    } else {
        rxmat_M_real_32_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_32_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_32_ce1 = grp_kernel_mmult_fu_10781_a_M_real32_ce1.read();
    } else {
        rxmat_M_real_32_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_32_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_32_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_32_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_20)))) {
        rxmat_M_real_32_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_32_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_33_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_33_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_33_address0 = grp_kernel_mmult_fu_10781_a_M_real33_address0.read();
    } else {
        rxmat_M_real_33_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_33_ce0 = grp_kernel_mmult_fu_10781_a_M_real33_ce0.read();
    } else {
        rxmat_M_real_33_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_33_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_33_ce1 = grp_kernel_mmult_fu_10781_a_M_real33_ce1.read();
    } else {
        rxmat_M_real_33_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_33_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_33_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_33_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_21)))) {
        rxmat_M_real_33_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_33_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_34_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_34_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_34_address0 = grp_kernel_mmult_fu_10781_a_M_real34_address0.read();
    } else {
        rxmat_M_real_34_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_34_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_34_ce0 = grp_kernel_mmult_fu_10781_a_M_real34_ce0.read();
    } else {
        rxmat_M_real_34_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_34_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_34_ce1 = grp_kernel_mmult_fu_10781_a_M_real34_ce1.read();
    } else {
        rxmat_M_real_34_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_34_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_34_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_34_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_22)))) {
        rxmat_M_real_34_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_34_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_35_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_35_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_35_address0 = grp_kernel_mmult_fu_10781_a_M_real35_address0.read();
    } else {
        rxmat_M_real_35_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_35_ce0 = grp_kernel_mmult_fu_10781_a_M_real35_ce0.read();
    } else {
        rxmat_M_real_35_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_35_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_35_ce1 = grp_kernel_mmult_fu_10781_a_M_real35_ce1.read();
    } else {
        rxmat_M_real_35_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_35_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_35_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_35_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_23)))) {
        rxmat_M_real_35_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_35_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_36_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_36_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_36_address0 = grp_kernel_mmult_fu_10781_a_M_real36_address0.read();
    } else {
        rxmat_M_real_36_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_36_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_36_ce0 = grp_kernel_mmult_fu_10781_a_M_real36_ce0.read();
    } else {
        rxmat_M_real_36_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_36_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_36_ce1 = grp_kernel_mmult_fu_10781_a_M_real36_ce1.read();
    } else {
        rxmat_M_real_36_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_36_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_36_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_36_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_24)))) {
        rxmat_M_real_36_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_36_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_37_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_37_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_37_address0 = grp_kernel_mmult_fu_10781_a_M_real37_address0.read();
    } else {
        rxmat_M_real_37_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_37_ce0 = grp_kernel_mmult_fu_10781_a_M_real37_ce0.read();
    } else {
        rxmat_M_real_37_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_37_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_37_ce1 = grp_kernel_mmult_fu_10781_a_M_real37_ce1.read();
    } else {
        rxmat_M_real_37_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_37_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_37_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_37_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_25)))) {
        rxmat_M_real_37_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_37_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_38_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_38_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_38_address0 = grp_kernel_mmult_fu_10781_a_M_real38_address0.read();
    } else {
        rxmat_M_real_38_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_38_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_38_ce0 = grp_kernel_mmult_fu_10781_a_M_real38_ce0.read();
    } else {
        rxmat_M_real_38_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_38_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_38_ce1 = grp_kernel_mmult_fu_10781_a_M_real38_ce1.read();
    } else {
        rxmat_M_real_38_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_38_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_38_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_38_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_26)))) {
        rxmat_M_real_38_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_38_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_39_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_39_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_39_address0 = grp_kernel_mmult_fu_10781_a_M_real39_address0.read();
    } else {
        rxmat_M_real_39_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_39_ce0 = grp_kernel_mmult_fu_10781_a_M_real39_ce0.read();
    } else {
        rxmat_M_real_39_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_39_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_39_ce1 = grp_kernel_mmult_fu_10781_a_M_real39_ce1.read();
    } else {
        rxmat_M_real_39_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_39_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_39_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_39_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_27)))) {
        rxmat_M_real_39_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_39_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_3_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_3_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_3_address0 = grp_kernel_mmult_fu_10781_a_M_real3_address0.read();
    } else {
        rxmat_M_real_3_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_3_ce0 = grp_kernel_mmult_fu_10781_a_M_real3_ce0.read();
    } else {
        rxmat_M_real_3_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_3_ce1 = grp_kernel_mmult_fu_10781_a_M_real3_ce1.read();
    } else {
        rxmat_M_real_3_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_3_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_3_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3)))) {
        rxmat_M_real_3_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_3_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_40_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_40_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_40_address0 = grp_kernel_mmult_fu_10781_a_M_real40_address0.read();
    } else {
        rxmat_M_real_40_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_40_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_40_ce0 = grp_kernel_mmult_fu_10781_a_M_real40_ce0.read();
    } else {
        rxmat_M_real_40_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_40_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_40_ce1 = grp_kernel_mmult_fu_10781_a_M_real40_ce1.read();
    } else {
        rxmat_M_real_40_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_40_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_40_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_40_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_28)))) {
        rxmat_M_real_40_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_40_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_41_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_41_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_41_address0 = grp_kernel_mmult_fu_10781_a_M_real41_address0.read();
    } else {
        rxmat_M_real_41_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_41_ce0 = grp_kernel_mmult_fu_10781_a_M_real41_ce0.read();
    } else {
        rxmat_M_real_41_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_41_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_41_ce1 = grp_kernel_mmult_fu_10781_a_M_real41_ce1.read();
    } else {
        rxmat_M_real_41_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_41_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_41_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_41_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_29)))) {
        rxmat_M_real_41_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_41_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_42_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_42_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_42_address0 = grp_kernel_mmult_fu_10781_a_M_real42_address0.read();
    } else {
        rxmat_M_real_42_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_42_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_42_ce0 = grp_kernel_mmult_fu_10781_a_M_real42_ce0.read();
    } else {
        rxmat_M_real_42_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_42_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_42_ce1 = grp_kernel_mmult_fu_10781_a_M_real42_ce1.read();
    } else {
        rxmat_M_real_42_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_42_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_42_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_42_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2A)))) {
        rxmat_M_real_42_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_42_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_43_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_43_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_43_address0 = grp_kernel_mmult_fu_10781_a_M_real43_address0.read();
    } else {
        rxmat_M_real_43_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_43_ce0 = grp_kernel_mmult_fu_10781_a_M_real43_ce0.read();
    } else {
        rxmat_M_real_43_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_43_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_43_ce1 = grp_kernel_mmult_fu_10781_a_M_real43_ce1.read();
    } else {
        rxmat_M_real_43_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_43_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_43_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_43_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2B)))) {
        rxmat_M_real_43_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_43_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_44_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_44_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_44_address0 = grp_kernel_mmult_fu_10781_a_M_real44_address0.read();
    } else {
        rxmat_M_real_44_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_44_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_44_ce0 = grp_kernel_mmult_fu_10781_a_M_real44_ce0.read();
    } else {
        rxmat_M_real_44_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_44_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_44_ce1 = grp_kernel_mmult_fu_10781_a_M_real44_ce1.read();
    } else {
        rxmat_M_real_44_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_44_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_44_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_44_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2C)))) {
        rxmat_M_real_44_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_44_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_45_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_45_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_45_address0 = grp_kernel_mmult_fu_10781_a_M_real45_address0.read();
    } else {
        rxmat_M_real_45_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_45_ce0 = grp_kernel_mmult_fu_10781_a_M_real45_ce0.read();
    } else {
        rxmat_M_real_45_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_45_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_45_ce1 = grp_kernel_mmult_fu_10781_a_M_real45_ce1.read();
    } else {
        rxmat_M_real_45_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_45_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_45_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_45_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2D)))) {
        rxmat_M_real_45_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_45_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_46_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_46_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_46_address0 = grp_kernel_mmult_fu_10781_a_M_real46_address0.read();
    } else {
        rxmat_M_real_46_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_46_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_46_ce0 = grp_kernel_mmult_fu_10781_a_M_real46_ce0.read();
    } else {
        rxmat_M_real_46_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_46_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_46_ce1 = grp_kernel_mmult_fu_10781_a_M_real46_ce1.read();
    } else {
        rxmat_M_real_46_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_46_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_46_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_46_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2E)))) {
        rxmat_M_real_46_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_46_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_47_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_47_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_47_address0 = grp_kernel_mmult_fu_10781_a_M_real47_address0.read();
    } else {
        rxmat_M_real_47_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_47_ce0 = grp_kernel_mmult_fu_10781_a_M_real47_ce0.read();
    } else {
        rxmat_M_real_47_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_47_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_47_ce1 = grp_kernel_mmult_fu_10781_a_M_real47_ce1.read();
    } else {
        rxmat_M_real_47_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_47_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_47_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_47_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_2F)))) {
        rxmat_M_real_47_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_47_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_48_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_48_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_48_address0 = grp_kernel_mmult_fu_10781_a_M_real48_address0.read();
    } else {
        rxmat_M_real_48_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_48_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_48_ce0 = grp_kernel_mmult_fu_10781_a_M_real48_ce0.read();
    } else {
        rxmat_M_real_48_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_48_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_48_ce1 = grp_kernel_mmult_fu_10781_a_M_real48_ce1.read();
    } else {
        rxmat_M_real_48_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_48_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_48_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_48_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_48_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_48_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_30)))) {
        rxmat_M_real_48_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_48_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_49_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_49_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_49_address0 = grp_kernel_mmult_fu_10781_a_M_real49_address0.read();
    } else {
        rxmat_M_real_49_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_49_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_49_ce0 = grp_kernel_mmult_fu_10781_a_M_real49_ce0.read();
    } else {
        rxmat_M_real_49_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_49_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_49_ce1 = grp_kernel_mmult_fu_10781_a_M_real49_ce1.read();
    } else {
        rxmat_M_real_49_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_49_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_49_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_49_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_49_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_49_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_31)))) {
        rxmat_M_real_49_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_49_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_4_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_4_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_4_address0 = grp_kernel_mmult_fu_10781_a_M_real4_address0.read();
    } else {
        rxmat_M_real_4_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_4_ce0 = grp_kernel_mmult_fu_10781_a_M_real4_ce0.read();
    } else {
        rxmat_M_real_4_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_4_ce1 = grp_kernel_mmult_fu_10781_a_M_real4_ce1.read();
    } else {
        rxmat_M_real_4_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_4_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_4_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4)))) {
        rxmat_M_real_4_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_4_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_50_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_50_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_50_address0 = grp_kernel_mmult_fu_10781_a_M_real50_address0.read();
    } else {
        rxmat_M_real_50_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_50_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_50_ce0 = grp_kernel_mmult_fu_10781_a_M_real50_ce0.read();
    } else {
        rxmat_M_real_50_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_50_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_50_ce1 = grp_kernel_mmult_fu_10781_a_M_real50_ce1.read();
    } else {
        rxmat_M_real_50_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_50_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_50_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_50_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_50_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_50_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_32)))) {
        rxmat_M_real_50_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_50_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_51_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_51_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_51_address0 = grp_kernel_mmult_fu_10781_a_M_real51_address0.read();
    } else {
        rxmat_M_real_51_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_51_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_51_ce0 = grp_kernel_mmult_fu_10781_a_M_real51_ce0.read();
    } else {
        rxmat_M_real_51_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_51_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_51_ce1 = grp_kernel_mmult_fu_10781_a_M_real51_ce1.read();
    } else {
        rxmat_M_real_51_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_51_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_51_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_51_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_51_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_51_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_33)))) {
        rxmat_M_real_51_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_51_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_52_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_52_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_52_address0 = grp_kernel_mmult_fu_10781_a_M_real52_address0.read();
    } else {
        rxmat_M_real_52_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_52_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_52_ce0 = grp_kernel_mmult_fu_10781_a_M_real52_ce0.read();
    } else {
        rxmat_M_real_52_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_52_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_52_ce1 = grp_kernel_mmult_fu_10781_a_M_real52_ce1.read();
    } else {
        rxmat_M_real_52_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_52_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_52_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_52_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_52_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_52_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_34)))) {
        rxmat_M_real_52_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_52_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_53_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_53_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_53_address0 = grp_kernel_mmult_fu_10781_a_M_real53_address0.read();
    } else {
        rxmat_M_real_53_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_53_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_53_ce0 = grp_kernel_mmult_fu_10781_a_M_real53_ce0.read();
    } else {
        rxmat_M_real_53_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_53_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_53_ce1 = grp_kernel_mmult_fu_10781_a_M_real53_ce1.read();
    } else {
        rxmat_M_real_53_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_53_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_53_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_53_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_53_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_53_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_35)))) {
        rxmat_M_real_53_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_53_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_54_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_54_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_54_address0 = grp_kernel_mmult_fu_10781_a_M_real54_address0.read();
    } else {
        rxmat_M_real_54_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_54_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_54_ce0 = grp_kernel_mmult_fu_10781_a_M_real54_ce0.read();
    } else {
        rxmat_M_real_54_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_54_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_54_ce1 = grp_kernel_mmult_fu_10781_a_M_real54_ce1.read();
    } else {
        rxmat_M_real_54_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_54_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_54_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_54_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_54_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_54_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_36)))) {
        rxmat_M_real_54_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_54_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_55_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_55_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_55_address0 = grp_kernel_mmult_fu_10781_a_M_real55_address0.read();
    } else {
        rxmat_M_real_55_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_55_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_55_ce0 = grp_kernel_mmult_fu_10781_a_M_real55_ce0.read();
    } else {
        rxmat_M_real_55_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_55_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_55_ce1 = grp_kernel_mmult_fu_10781_a_M_real55_ce1.read();
    } else {
        rxmat_M_real_55_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_55_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_55_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_55_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_55_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_55_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_37)))) {
        rxmat_M_real_55_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_55_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_56_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_56_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_56_address0 = grp_kernel_mmult_fu_10781_a_M_real56_address0.read();
    } else {
        rxmat_M_real_56_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_56_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_56_ce0 = grp_kernel_mmult_fu_10781_a_M_real56_ce0.read();
    } else {
        rxmat_M_real_56_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_56_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_56_ce1 = grp_kernel_mmult_fu_10781_a_M_real56_ce1.read();
    } else {
        rxmat_M_real_56_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_56_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_56_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_56_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_56_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_56_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_38)))) {
        rxmat_M_real_56_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_56_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_57_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_57_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_57_address0 = grp_kernel_mmult_fu_10781_a_M_real57_address0.read();
    } else {
        rxmat_M_real_57_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_57_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_57_ce0 = grp_kernel_mmult_fu_10781_a_M_real57_ce0.read();
    } else {
        rxmat_M_real_57_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_57_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_57_ce1 = grp_kernel_mmult_fu_10781_a_M_real57_ce1.read();
    } else {
        rxmat_M_real_57_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_57_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_57_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_57_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_57_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_57_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_39)))) {
        rxmat_M_real_57_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_57_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_58_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_58_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_58_address0 = grp_kernel_mmult_fu_10781_a_M_real58_address0.read();
    } else {
        rxmat_M_real_58_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_58_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_58_ce0 = grp_kernel_mmult_fu_10781_a_M_real58_ce0.read();
    } else {
        rxmat_M_real_58_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_58_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_58_ce1 = grp_kernel_mmult_fu_10781_a_M_real58_ce1.read();
    } else {
        rxmat_M_real_58_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_58_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_58_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_58_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_58_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_58_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3A)))) {
        rxmat_M_real_58_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_58_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_59_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_59_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_59_address0 = grp_kernel_mmult_fu_10781_a_M_real59_address0.read();
    } else {
        rxmat_M_real_59_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_59_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_59_ce0 = grp_kernel_mmult_fu_10781_a_M_real59_ce0.read();
    } else {
        rxmat_M_real_59_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_59_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_59_ce1 = grp_kernel_mmult_fu_10781_a_M_real59_ce1.read();
    } else {
        rxmat_M_real_59_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_59_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_59_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_59_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_59_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_59_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3B)))) {
        rxmat_M_real_59_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_59_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_5_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_5_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_5_address0 = grp_kernel_mmult_fu_10781_a_M_real5_address0.read();
    } else {
        rxmat_M_real_5_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_5_ce0 = grp_kernel_mmult_fu_10781_a_M_real5_ce0.read();
    } else {
        rxmat_M_real_5_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_5_ce1 = grp_kernel_mmult_fu_10781_a_M_real5_ce1.read();
    } else {
        rxmat_M_real_5_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_5_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_5_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5)))) {
        rxmat_M_real_5_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_5_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_60_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_60_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_60_address0 = grp_kernel_mmult_fu_10781_a_M_real60_address0.read();
    } else {
        rxmat_M_real_60_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_60_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_60_ce0 = grp_kernel_mmult_fu_10781_a_M_real60_ce0.read();
    } else {
        rxmat_M_real_60_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_60_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_60_ce1 = grp_kernel_mmult_fu_10781_a_M_real60_ce1.read();
    } else {
        rxmat_M_real_60_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_60_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_60_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_60_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_60_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_60_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3C)))) {
        rxmat_M_real_60_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_60_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_61_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_61_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_61_address0 = grp_kernel_mmult_fu_10781_a_M_real61_address0.read();
    } else {
        rxmat_M_real_61_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_61_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_61_ce0 = grp_kernel_mmult_fu_10781_a_M_real61_ce0.read();
    } else {
        rxmat_M_real_61_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_61_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_61_ce1 = grp_kernel_mmult_fu_10781_a_M_real61_ce1.read();
    } else {
        rxmat_M_real_61_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_61_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_61_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_61_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_61_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_61_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3D)))) {
        rxmat_M_real_61_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_61_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_62_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_62_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_62_address0 = grp_kernel_mmult_fu_10781_a_M_real62_address0.read();
    } else {
        rxmat_M_real_62_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_62_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_62_ce0 = grp_kernel_mmult_fu_10781_a_M_real62_ce0.read();
    } else {
        rxmat_M_real_62_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_62_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_62_ce1 = grp_kernel_mmult_fu_10781_a_M_real62_ce1.read();
    } else {
        rxmat_M_real_62_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_62_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_62_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_62_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_62_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_62_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3E)))) {
        rxmat_M_real_62_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_62_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_63_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_63_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_63_address0 = grp_kernel_mmult_fu_10781_a_M_real63_address0.read();
    } else {
        rxmat_M_real_63_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_63_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_63_ce0 = grp_kernel_mmult_fu_10781_a_M_real63_ce0.read();
    } else {
        rxmat_M_real_63_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_63_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_63_ce1 = grp_kernel_mmult_fu_10781_a_M_real63_ce1.read();
    } else {
        rxmat_M_real_63_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_63_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_63_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_63_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_63_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_63_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_3F)))) {
        rxmat_M_real_63_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_63_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_64_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_64_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_64_address0 = grp_kernel_mmult_fu_10781_a_M_real64_address0.read();
    } else {
        rxmat_M_real_64_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_64_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_64_ce0 = grp_kernel_mmult_fu_10781_a_M_real64_ce0.read();
    } else {
        rxmat_M_real_64_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_64_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_64_ce1 = grp_kernel_mmult_fu_10781_a_M_real64_ce1.read();
    } else {
        rxmat_M_real_64_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_64_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_64_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_64_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_64_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_64_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_40)))) {
        rxmat_M_real_64_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_64_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_65_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_65_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_65_address0 = grp_kernel_mmult_fu_10781_a_M_real65_address0.read();
    } else {
        rxmat_M_real_65_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_65_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_65_ce0 = grp_kernel_mmult_fu_10781_a_M_real65_ce0.read();
    } else {
        rxmat_M_real_65_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_65_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_65_ce1 = grp_kernel_mmult_fu_10781_a_M_real65_ce1.read();
    } else {
        rxmat_M_real_65_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_65_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_65_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_65_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_65_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_65_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_41)))) {
        rxmat_M_real_65_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_65_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_66_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_66_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_66_address0 = grp_kernel_mmult_fu_10781_a_M_real66_address0.read();
    } else {
        rxmat_M_real_66_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_66_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_66_ce0 = grp_kernel_mmult_fu_10781_a_M_real66_ce0.read();
    } else {
        rxmat_M_real_66_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_66_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_66_ce1 = grp_kernel_mmult_fu_10781_a_M_real66_ce1.read();
    } else {
        rxmat_M_real_66_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_66_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_66_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_66_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_66_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_66_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_42)))) {
        rxmat_M_real_66_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_66_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_67_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_67_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_67_address0 = grp_kernel_mmult_fu_10781_a_M_real67_address0.read();
    } else {
        rxmat_M_real_67_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_67_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_67_ce0 = grp_kernel_mmult_fu_10781_a_M_real67_ce0.read();
    } else {
        rxmat_M_real_67_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_67_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_67_ce1 = grp_kernel_mmult_fu_10781_a_M_real67_ce1.read();
    } else {
        rxmat_M_real_67_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_67_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_67_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_67_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_67_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_67_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_43)))) {
        rxmat_M_real_67_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_67_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_68_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_68_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_68_address0 = grp_kernel_mmult_fu_10781_a_M_real68_address0.read();
    } else {
        rxmat_M_real_68_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_68_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_68_ce0 = grp_kernel_mmult_fu_10781_a_M_real68_ce0.read();
    } else {
        rxmat_M_real_68_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_68_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_68_ce1 = grp_kernel_mmult_fu_10781_a_M_real68_ce1.read();
    } else {
        rxmat_M_real_68_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_68_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_68_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_68_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_68_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_68_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_44)))) {
        rxmat_M_real_68_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_68_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_69_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_69_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_69_address0 = grp_kernel_mmult_fu_10781_a_M_real69_address0.read();
    } else {
        rxmat_M_real_69_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_69_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_69_ce0 = grp_kernel_mmult_fu_10781_a_M_real69_ce0.read();
    } else {
        rxmat_M_real_69_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_69_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_69_ce1 = grp_kernel_mmult_fu_10781_a_M_real69_ce1.read();
    } else {
        rxmat_M_real_69_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_69_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_69_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_69_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_69_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_69_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_45)))) {
        rxmat_M_real_69_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_69_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_6_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_6_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_6_address0 = grp_kernel_mmult_fu_10781_a_M_real6_address0.read();
    } else {
        rxmat_M_real_6_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_6_ce0 = grp_kernel_mmult_fu_10781_a_M_real6_ce0.read();
    } else {
        rxmat_M_real_6_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_6_ce1 = grp_kernel_mmult_fu_10781_a_M_real6_ce1.read();
    } else {
        rxmat_M_real_6_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_6_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_6_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_6)))) {
        rxmat_M_real_6_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_6_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_70_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_70_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_70_address0 = grp_kernel_mmult_fu_10781_a_M_real70_address0.read();
    } else {
        rxmat_M_real_70_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_70_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_70_ce0 = grp_kernel_mmult_fu_10781_a_M_real70_ce0.read();
    } else {
        rxmat_M_real_70_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_70_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_70_ce1 = grp_kernel_mmult_fu_10781_a_M_real70_ce1.read();
    } else {
        rxmat_M_real_70_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_70_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_70_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_70_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_70_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_70_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_46)))) {
        rxmat_M_real_70_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_70_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_71_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_71_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_71_address0 = grp_kernel_mmult_fu_10781_a_M_real71_address0.read();
    } else {
        rxmat_M_real_71_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_71_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_71_ce0 = grp_kernel_mmult_fu_10781_a_M_real71_ce0.read();
    } else {
        rxmat_M_real_71_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_71_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_71_ce1 = grp_kernel_mmult_fu_10781_a_M_real71_ce1.read();
    } else {
        rxmat_M_real_71_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_71_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_71_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_71_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_71_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_71_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_47)))) {
        rxmat_M_real_71_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_71_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_72_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_72_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_72_address0 = grp_kernel_mmult_fu_10781_a_M_real72_address0.read();
    } else {
        rxmat_M_real_72_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_72_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_72_ce0 = grp_kernel_mmult_fu_10781_a_M_real72_ce0.read();
    } else {
        rxmat_M_real_72_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_72_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_72_ce1 = grp_kernel_mmult_fu_10781_a_M_real72_ce1.read();
    } else {
        rxmat_M_real_72_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_72_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_72_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_72_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_72_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_72_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_48)))) {
        rxmat_M_real_72_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_72_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_73_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_73_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_73_address0 = grp_kernel_mmult_fu_10781_a_M_real73_address0.read();
    } else {
        rxmat_M_real_73_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_73_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_73_ce0 = grp_kernel_mmult_fu_10781_a_M_real73_ce0.read();
    } else {
        rxmat_M_real_73_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_73_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_73_ce1 = grp_kernel_mmult_fu_10781_a_M_real73_ce1.read();
    } else {
        rxmat_M_real_73_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_73_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_73_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_73_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_73_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_73_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_49)))) {
        rxmat_M_real_73_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_73_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_74_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_74_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_74_address0 = grp_kernel_mmult_fu_10781_a_M_real74_address0.read();
    } else {
        rxmat_M_real_74_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_74_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_74_ce0 = grp_kernel_mmult_fu_10781_a_M_real74_ce0.read();
    } else {
        rxmat_M_real_74_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_74_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_74_ce1 = grp_kernel_mmult_fu_10781_a_M_real74_ce1.read();
    } else {
        rxmat_M_real_74_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_74_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_74_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_74_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_74_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_74_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4A)))) {
        rxmat_M_real_74_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_74_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_75_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_75_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_75_address0 = grp_kernel_mmult_fu_10781_a_M_real75_address0.read();
    } else {
        rxmat_M_real_75_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_75_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_75_ce0 = grp_kernel_mmult_fu_10781_a_M_real75_ce0.read();
    } else {
        rxmat_M_real_75_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_75_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_75_ce1 = grp_kernel_mmult_fu_10781_a_M_real75_ce1.read();
    } else {
        rxmat_M_real_75_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_75_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_75_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_75_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_75_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_75_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4B)))) {
        rxmat_M_real_75_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_75_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_76_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_76_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_76_address0 = grp_kernel_mmult_fu_10781_a_M_real76_address0.read();
    } else {
        rxmat_M_real_76_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_76_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_76_ce0 = grp_kernel_mmult_fu_10781_a_M_real76_ce0.read();
    } else {
        rxmat_M_real_76_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_76_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_76_ce1 = grp_kernel_mmult_fu_10781_a_M_real76_ce1.read();
    } else {
        rxmat_M_real_76_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_76_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_76_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_76_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_76_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_76_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4C)))) {
        rxmat_M_real_76_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_76_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_77_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_77_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_77_address0 = grp_kernel_mmult_fu_10781_a_M_real77_address0.read();
    } else {
        rxmat_M_real_77_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_77_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_77_ce0 = grp_kernel_mmult_fu_10781_a_M_real77_ce0.read();
    } else {
        rxmat_M_real_77_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_77_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_77_ce1 = grp_kernel_mmult_fu_10781_a_M_real77_ce1.read();
    } else {
        rxmat_M_real_77_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_77_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_77_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_77_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_77_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_77_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4D)))) {
        rxmat_M_real_77_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_77_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_78_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_78_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_78_address0 = grp_kernel_mmult_fu_10781_a_M_real78_address0.read();
    } else {
        rxmat_M_real_78_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_78_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_78_ce0 = grp_kernel_mmult_fu_10781_a_M_real78_ce0.read();
    } else {
        rxmat_M_real_78_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_78_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_78_ce1 = grp_kernel_mmult_fu_10781_a_M_real78_ce1.read();
    } else {
        rxmat_M_real_78_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_78_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_78_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_78_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_78_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_78_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4E)))) {
        rxmat_M_real_78_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_78_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_79_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_79_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_79_address0 = grp_kernel_mmult_fu_10781_a_M_real79_address0.read();
    } else {
        rxmat_M_real_79_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_79_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_79_ce0 = grp_kernel_mmult_fu_10781_a_M_real79_ce0.read();
    } else {
        rxmat_M_real_79_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_79_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_79_ce1 = grp_kernel_mmult_fu_10781_a_M_real79_ce1.read();
    } else {
        rxmat_M_real_79_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_79_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_79_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_79_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_79_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_79_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_4F)))) {
        rxmat_M_real_79_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_79_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_7_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_7_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_7_address0 = grp_kernel_mmult_fu_10781_a_M_real7_address0.read();
    } else {
        rxmat_M_real_7_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_7_ce0 = grp_kernel_mmult_fu_10781_a_M_real7_ce0.read();
    } else {
        rxmat_M_real_7_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_7_ce1 = grp_kernel_mmult_fu_10781_a_M_real7_ce1.read();
    } else {
        rxmat_M_real_7_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_7_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_7_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_7)))) {
        rxmat_M_real_7_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_7_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_80_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_80_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_80_address0 = grp_kernel_mmult_fu_10781_a_M_real80_address0.read();
    } else {
        rxmat_M_real_80_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_80_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_80_ce0 = grp_kernel_mmult_fu_10781_a_M_real80_ce0.read();
    } else {
        rxmat_M_real_80_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_80_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_80_ce1 = grp_kernel_mmult_fu_10781_a_M_real80_ce1.read();
    } else {
        rxmat_M_real_80_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_80_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_80_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_80_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_80_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_80_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_50)))) {
        rxmat_M_real_80_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_80_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_81_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_81_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_81_address0 = grp_kernel_mmult_fu_10781_a_M_real81_address0.read();
    } else {
        rxmat_M_real_81_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_81_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_81_ce0 = grp_kernel_mmult_fu_10781_a_M_real81_ce0.read();
    } else {
        rxmat_M_real_81_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_81_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_81_ce1 = grp_kernel_mmult_fu_10781_a_M_real81_ce1.read();
    } else {
        rxmat_M_real_81_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_81_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_81_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_81_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_81_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_81_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_51)))) {
        rxmat_M_real_81_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_81_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_82_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_82_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_82_address0 = grp_kernel_mmult_fu_10781_a_M_real82_address0.read();
    } else {
        rxmat_M_real_82_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_82_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_82_ce0 = grp_kernel_mmult_fu_10781_a_M_real82_ce0.read();
    } else {
        rxmat_M_real_82_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_82_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_82_ce1 = grp_kernel_mmult_fu_10781_a_M_real82_ce1.read();
    } else {
        rxmat_M_real_82_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_82_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_82_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_82_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_82_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_82_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_52)))) {
        rxmat_M_real_82_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_82_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_83_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_83_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_83_address0 = grp_kernel_mmult_fu_10781_a_M_real83_address0.read();
    } else {
        rxmat_M_real_83_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_83_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_83_ce0 = grp_kernel_mmult_fu_10781_a_M_real83_ce0.read();
    } else {
        rxmat_M_real_83_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_83_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_83_ce1 = grp_kernel_mmult_fu_10781_a_M_real83_ce1.read();
    } else {
        rxmat_M_real_83_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_83_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_83_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_83_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_83_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_83_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_53)))) {
        rxmat_M_real_83_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_83_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_84_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_84_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_84_address0 = grp_kernel_mmult_fu_10781_a_M_real84_address0.read();
    } else {
        rxmat_M_real_84_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_84_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_84_ce0 = grp_kernel_mmult_fu_10781_a_M_real84_ce0.read();
    } else {
        rxmat_M_real_84_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_84_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_84_ce1 = grp_kernel_mmult_fu_10781_a_M_real84_ce1.read();
    } else {
        rxmat_M_real_84_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_84_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_84_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_84_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_84_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_84_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_54)))) {
        rxmat_M_real_84_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_84_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_85_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_85_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_85_address0 = grp_kernel_mmult_fu_10781_a_M_real85_address0.read();
    } else {
        rxmat_M_real_85_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_85_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_85_ce0 = grp_kernel_mmult_fu_10781_a_M_real85_ce0.read();
    } else {
        rxmat_M_real_85_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_85_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_85_ce1 = grp_kernel_mmult_fu_10781_a_M_real85_ce1.read();
    } else {
        rxmat_M_real_85_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_85_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_85_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_85_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_85_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_85_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_55)))) {
        rxmat_M_real_85_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_85_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_86_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_86_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_86_address0 = grp_kernel_mmult_fu_10781_a_M_real86_address0.read();
    } else {
        rxmat_M_real_86_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_86_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_86_ce0 = grp_kernel_mmult_fu_10781_a_M_real86_ce0.read();
    } else {
        rxmat_M_real_86_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_86_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_86_ce1 = grp_kernel_mmult_fu_10781_a_M_real86_ce1.read();
    } else {
        rxmat_M_real_86_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_86_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_86_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_86_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_86_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_86_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_56)))) {
        rxmat_M_real_86_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_86_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_87_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_87_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_87_address0 = grp_kernel_mmult_fu_10781_a_M_real87_address0.read();
    } else {
        rxmat_M_real_87_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_87_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_87_ce0 = grp_kernel_mmult_fu_10781_a_M_real87_ce0.read();
    } else {
        rxmat_M_real_87_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_87_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_87_ce1 = grp_kernel_mmult_fu_10781_a_M_real87_ce1.read();
    } else {
        rxmat_M_real_87_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_87_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_87_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_87_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_87_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_87_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_57)))) {
        rxmat_M_real_87_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_87_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_88_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_88_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_88_address0 = grp_kernel_mmult_fu_10781_a_M_real88_address0.read();
    } else {
        rxmat_M_real_88_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_88_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_88_ce0 = grp_kernel_mmult_fu_10781_a_M_real88_ce0.read();
    } else {
        rxmat_M_real_88_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_88_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_88_ce1 = grp_kernel_mmult_fu_10781_a_M_real88_ce1.read();
    } else {
        rxmat_M_real_88_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_88_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_88_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_88_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_88_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_88_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_58)))) {
        rxmat_M_real_88_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_88_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_89_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_89_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_89_address0 = grp_kernel_mmult_fu_10781_a_M_real89_address0.read();
    } else {
        rxmat_M_real_89_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_89_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_89_ce0 = grp_kernel_mmult_fu_10781_a_M_real89_ce0.read();
    } else {
        rxmat_M_real_89_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_89_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_89_ce1 = grp_kernel_mmult_fu_10781_a_M_real89_ce1.read();
    } else {
        rxmat_M_real_89_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_89_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_89_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_89_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_89_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_89_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_59)))) {
        rxmat_M_real_89_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_89_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_8_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_8_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_8_address0 = grp_kernel_mmult_fu_10781_a_M_real8_address0.read();
    } else {
        rxmat_M_real_8_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_8_ce0 = grp_kernel_mmult_fu_10781_a_M_real8_ce0.read();
    } else {
        rxmat_M_real_8_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_8_ce1 = grp_kernel_mmult_fu_10781_a_M_real8_ce1.read();
    } else {
        rxmat_M_real_8_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_8_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_8_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_8)))) {
        rxmat_M_real_8_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_8_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_90_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_90_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_90_address0 = grp_kernel_mmult_fu_10781_a_M_real90_address0.read();
    } else {
        rxmat_M_real_90_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_90_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_90_ce0 = grp_kernel_mmult_fu_10781_a_M_real90_ce0.read();
    } else {
        rxmat_M_real_90_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_90_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_90_ce1 = grp_kernel_mmult_fu_10781_a_M_real90_ce1.read();
    } else {
        rxmat_M_real_90_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_90_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_90_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_90_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_90_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_90_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5A)))) {
        rxmat_M_real_90_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_90_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_91_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_91_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_91_address0 = grp_kernel_mmult_fu_10781_a_M_real91_address0.read();
    } else {
        rxmat_M_real_91_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_91_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_91_ce0 = grp_kernel_mmult_fu_10781_a_M_real91_ce0.read();
    } else {
        rxmat_M_real_91_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_91_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_91_ce1 = grp_kernel_mmult_fu_10781_a_M_real91_ce1.read();
    } else {
        rxmat_M_real_91_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_91_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_91_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_91_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_91_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_91_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5B)))) {
        rxmat_M_real_91_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_91_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_92_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_92_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_92_address0 = grp_kernel_mmult_fu_10781_a_M_real92_address0.read();
    } else {
        rxmat_M_real_92_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_92_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_92_ce0 = grp_kernel_mmult_fu_10781_a_M_real92_ce0.read();
    } else {
        rxmat_M_real_92_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_92_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_92_ce1 = grp_kernel_mmult_fu_10781_a_M_real92_ce1.read();
    } else {
        rxmat_M_real_92_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_92_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_92_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_92_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_92_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_92_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5C)))) {
        rxmat_M_real_92_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_92_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_93_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_93_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_93_address0 = grp_kernel_mmult_fu_10781_a_M_real93_address0.read();
    } else {
        rxmat_M_real_93_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_93_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_93_ce0 = grp_kernel_mmult_fu_10781_a_M_real93_ce0.read();
    } else {
        rxmat_M_real_93_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_93_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_93_ce1 = grp_kernel_mmult_fu_10781_a_M_real93_ce1.read();
    } else {
        rxmat_M_real_93_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_93_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_93_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_93_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_93_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_93_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5D)))) {
        rxmat_M_real_93_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_93_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_94_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_94_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_94_address0 = grp_kernel_mmult_fu_10781_a_M_real94_address0.read();
    } else {
        rxmat_M_real_94_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_94_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_94_ce0 = grp_kernel_mmult_fu_10781_a_M_real94_ce0.read();
    } else {
        rxmat_M_real_94_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_94_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_94_ce1 = grp_kernel_mmult_fu_10781_a_M_real94_ce1.read();
    } else {
        rxmat_M_real_94_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_94_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_94_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_94_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_94_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_94_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5E)))) {
        rxmat_M_real_94_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_94_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_95_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_95_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_95_address0 = grp_kernel_mmult_fu_10781_a_M_real95_address0.read();
    } else {
        rxmat_M_real_95_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_95_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_95_ce0 = grp_kernel_mmult_fu_10781_a_M_real95_ce0.read();
    } else {
        rxmat_M_real_95_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_95_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_95_ce1 = grp_kernel_mmult_fu_10781_a_M_real95_ce1.read();
    } else {
        rxmat_M_real_95_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_95_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_95_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_95_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_95_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_95_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_5F)))) {
        rxmat_M_real_95_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_95_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_96_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_96_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_96_address0 = grp_kernel_mmult_fu_10781_a_M_real96_address0.read();
    } else {
        rxmat_M_real_96_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_96_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_96_ce0 = grp_kernel_mmult_fu_10781_a_M_real96_ce0.read();
    } else {
        rxmat_M_real_96_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_96_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_96_ce1 = grp_kernel_mmult_fu_10781_a_M_real96_ce1.read();
    } else {
        rxmat_M_real_96_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_96_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_96_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_96_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_96_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_96_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_60)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_60)))) {
        rxmat_M_real_96_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_96_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_97_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_97_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_97_address0 = grp_kernel_mmult_fu_10781_a_M_real97_address0.read();
    } else {
        rxmat_M_real_97_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_97_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_97_ce0 = grp_kernel_mmult_fu_10781_a_M_real97_ce0.read();
    } else {
        rxmat_M_real_97_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_97_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_97_ce1 = grp_kernel_mmult_fu_10781_a_M_real97_ce1.read();
    } else {
        rxmat_M_real_97_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_97_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_97_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_97_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_97_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_97_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_61)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_61)))) {
        rxmat_M_real_97_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_97_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_98_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_98_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_98_address0 = grp_kernel_mmult_fu_10781_a_M_real98_address0.read();
    } else {
        rxmat_M_real_98_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_98_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_98_ce0 = grp_kernel_mmult_fu_10781_a_M_real98_ce0.read();
    } else {
        rxmat_M_real_98_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_98_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_98_ce1 = grp_kernel_mmult_fu_10781_a_M_real98_ce1.read();
    } else {
        rxmat_M_real_98_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_98_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_98_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_98_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_98_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_98_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_62)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_62)))) {
        rxmat_M_real_98_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_98_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_99_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_99_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_99_address0 = grp_kernel_mmult_fu_10781_a_M_real99_address0.read();
    } else {
        rxmat_M_real_99_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_99_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_99_ce0 = grp_kernel_mmult_fu_10781_a_M_real99_ce0.read();
    } else {
        rxmat_M_real_99_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_99_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_99_ce1 = grp_kernel_mmult_fu_10781_a_M_real99_ce1.read();
    } else {
        rxmat_M_real_99_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_99_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_99_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_99_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_99_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_99_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_63)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_63)))) {
        rxmat_M_real_99_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_99_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_9_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_9_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_9_address0 = grp_kernel_mmult_fu_10781_a_M_real9_address0.read();
    } else {
        rxmat_M_real_9_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_9_ce0 = grp_kernel_mmult_fu_10781_a_M_real9_ce0.read();
    } else {
        rxmat_M_real_9_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_9_ce1 = grp_kernel_mmult_fu_10781_a_M_real9_ce1.read();
    } else {
        rxmat_M_real_9_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_9_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_9_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_9)))) {
        rxmat_M_real_9_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_9_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_stream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read())))) {
        rxmat_stream_TDATA_blk_n = rxmat_stream_TVALID.read();
    } else {
        rxmat_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void dmatmult::thread_rxmat_stream_TREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_stream_TREADY = ap_const_logic_1;
    } else {
        rxmat_stream_TREADY = ap_const_logic_0;
    }
}

void dmatmult::thread_select_ln513_100_fu_17999_p3() {
    select_ln513_100_fu_17999_p3 = (!icmp_ln513_100_fu_17994_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_100_fu_17994_p2.read()[0].to_bool())? out_vector_M_real_2_112_reg_21756.read(): select_ln513_99_fu_17987_p3.read());
}

void dmatmult::thread_select_ln513_101_fu_18011_p3() {
    select_ln513_101_fu_18011_p3 = (!icmp_ln513_101_fu_18006_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_101_fu_18006_p2.read()[0].to_bool())? out_vector_M_real_2_113_reg_21761.read(): select_ln513_100_fu_17999_p3.read());
}

void dmatmult::thread_select_ln513_102_fu_18023_p3() {
    select_ln513_102_fu_18023_p3 = (!icmp_ln513_102_fu_18018_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_102_fu_18018_p2.read()[0].to_bool())? out_vector_M_real_2_114_reg_21766.read(): select_ln513_101_fu_18011_p3.read());
}

void dmatmult::thread_select_ln513_103_fu_18035_p3() {
    select_ln513_103_fu_18035_p3 = (!icmp_ln513_103_fu_18030_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_103_fu_18030_p2.read()[0].to_bool())? out_vector_M_real_2_115_reg_21771.read(): select_ln513_102_fu_18023_p3.read());
}

void dmatmult::thread_select_ln513_104_fu_18047_p3() {
    select_ln513_104_fu_18047_p3 = (!icmp_ln513_104_fu_18042_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_104_fu_18042_p2.read()[0].to_bool())? out_vector_M_real_2_116_reg_21776.read(): select_ln513_103_fu_18035_p3.read());
}

void dmatmult::thread_select_ln513_105_fu_18059_p3() {
    select_ln513_105_fu_18059_p3 = (!icmp_ln513_105_fu_18054_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_105_fu_18054_p2.read()[0].to_bool())? out_vector_M_real_2_117_reg_21781.read(): select_ln513_104_fu_18047_p3.read());
}

void dmatmult::thread_select_ln513_106_fu_18071_p3() {
    select_ln513_106_fu_18071_p3 = (!icmp_ln513_106_fu_18066_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_106_fu_18066_p2.read()[0].to_bool())? out_vector_M_real_2_118_reg_21786.read(): select_ln513_105_fu_18059_p3.read());
}

void dmatmult::thread_select_ln513_107_fu_18083_p3() {
    select_ln513_107_fu_18083_p3 = (!icmp_ln513_107_fu_18078_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_107_fu_18078_p2.read()[0].to_bool())? out_vector_M_real_2_119_reg_21791.read(): select_ln513_106_fu_18071_p3.read());
}

void dmatmult::thread_select_ln513_108_fu_18095_p3() {
    select_ln513_108_fu_18095_p3 = (!icmp_ln513_108_fu_18090_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_108_fu_18090_p2.read()[0].to_bool())? out_vector_M_real_2_120_reg_21796.read(): select_ln513_107_fu_18083_p3.read());
}

void dmatmult::thread_select_ln513_109_fu_18107_p3() {
    select_ln513_109_fu_18107_p3 = (!icmp_ln513_109_fu_18102_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_109_fu_18102_p2.read()[0].to_bool())? out_vector_M_real_2_121_reg_21801.read(): select_ln513_108_fu_18095_p3.read());
}

void dmatmult::thread_select_ln513_10_fu_16896_p3() {
    select_ln513_10_fu_16896_p3 = (!icmp_ln513_10_fu_16890_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_10_fu_16890_p2.read()[0].to_bool())? out_vector_M_real_2_90_reg_21306.read(): select_ln513_9_fu_16883_p3.read());
}

void dmatmult::thread_select_ln513_110_fu_18134_p3() {
    select_ln513_110_fu_18134_p3 = (!icmp_ln513_110_reg_22825.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_110_reg_22825.read()[0].to_bool())? out_vector_M_real_2_122_reg_21806.read(): select_ln513_109_reg_22820.read());
}

void dmatmult::thread_select_ln513_111_fu_18139_p3() {
    select_ln513_111_fu_18139_p3 = (!icmp_ln513_111_reg_22830.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_111_reg_22830.read()[0].to_bool())? out_vector_M_real_2_123_reg_21811.read(): select_ln513_110_fu_18134_p3.read());
}

void dmatmult::thread_select_ln513_112_fu_18145_p3() {
    select_ln513_112_fu_18145_p3 = (!icmp_ln513_112_reg_22835.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_112_reg_22835.read()[0].to_bool())? out_vector_M_real_2_124_reg_21816.read(): select_ln513_111_fu_18139_p3.read());
}

void dmatmult::thread_select_ln513_113_fu_18151_p3() {
    select_ln513_113_fu_18151_p3 = (!icmp_ln513_113_reg_22840.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_113_reg_22840.read()[0].to_bool())? out_vector_M_real_2_125_reg_21821.read(): select_ln513_112_fu_18145_p3.read());
}

void dmatmult::thread_select_ln513_114_fu_18162_p3() {
    select_ln513_114_fu_18162_p3 = (!icmp_ln513_114_fu_18157_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_114_fu_18157_p2.read()[0].to_bool())? out_vector_M_real_2_126_reg_21826.read(): select_ln513_113_fu_18151_p3.read());
}

void dmatmult::thread_select_ln513_115_fu_18174_p3() {
    select_ln513_115_fu_18174_p3 = (!icmp_ln513_115_fu_18169_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_115_fu_18169_p2.read()[0].to_bool())? out_vector_M_real_2_127_reg_21831.read(): select_ln513_114_fu_18162_p3.read());
}

void dmatmult::thread_select_ln513_116_fu_18186_p3() {
    select_ln513_116_fu_18186_p3 = (!icmp_ln513_116_fu_18181_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_116_fu_18181_p2.read()[0].to_bool())? out_vector_M_real_2_128_reg_21836.read(): select_ln513_115_fu_18174_p3.read());
}

void dmatmult::thread_select_ln513_117_fu_18198_p3() {
    select_ln513_117_fu_18198_p3 = (!icmp_ln513_117_fu_18193_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_117_fu_18193_p2.read()[0].to_bool())? out_vector_M_real_2_129_reg_21841.read(): select_ln513_116_fu_18186_p3.read());
}

void dmatmult::thread_select_ln513_118_fu_18210_p3() {
    select_ln513_118_fu_18210_p3 = (!icmp_ln513_118_fu_18205_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_118_fu_18205_p2.read()[0].to_bool())? out_vector_M_real_2_130_reg_21846.read(): select_ln513_117_fu_18198_p3.read());
}

void dmatmult::thread_select_ln513_119_fu_18222_p3() {
    select_ln513_119_fu_18222_p3 = (!icmp_ln513_119_fu_18217_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_119_fu_18217_p2.read()[0].to_bool())? out_vector_M_real_2_131_reg_21851.read(): select_ln513_118_fu_18210_p3.read());
}

void dmatmult::thread_select_ln513_11_fu_16909_p3() {
    select_ln513_11_fu_16909_p3 = (!icmp_ln513_11_fu_16903_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_11_fu_16903_p2.read()[0].to_bool())? out_vector_M_real_2_91_reg_21311.read(): select_ln513_10_fu_16896_p3.read());
}

void dmatmult::thread_select_ln513_120_fu_18234_p3() {
    select_ln513_120_fu_18234_p3 = (!icmp_ln513_120_fu_18229_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_120_fu_18229_p2.read()[0].to_bool())? out_vector_M_real_3_92_reg_21856.read(): select_ln513_119_fu_18222_p3.read());
}

void dmatmult::thread_select_ln513_121_fu_18246_p3() {
    select_ln513_121_fu_18246_p3 = (!icmp_ln513_121_fu_18241_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_121_fu_18241_p2.read()[0].to_bool())? out_vector_M_real_3_93_reg_21861.read(): select_ln513_120_fu_18234_p3.read());
}

void dmatmult::thread_select_ln513_122_fu_18258_p3() {
    select_ln513_122_fu_18258_p3 = (!icmp_ln513_122_fu_18253_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_122_fu_18253_p2.read()[0].to_bool())? out_vector_M_real_3_94_reg_21866.read(): select_ln513_121_fu_18246_p3.read());
}

void dmatmult::thread_select_ln513_123_fu_18270_p3() {
    select_ln513_123_fu_18270_p3 = (!icmp_ln513_123_fu_18265_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_123_fu_18265_p2.read()[0].to_bool())? out_vector_M_real_3_95_reg_21871.read(): select_ln513_122_fu_18258_p3.read());
}

void dmatmult::thread_select_ln513_124_fu_18282_p3() {
    select_ln513_124_fu_18282_p3 = (!icmp_ln513_124_fu_18277_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_124_fu_18277_p2.read()[0].to_bool())? out_vector_M_real_3_96_reg_21876.read(): select_ln513_123_fu_18270_p3.read());
}

void dmatmult::thread_select_ln513_125_fu_18294_p3() {
    select_ln513_125_fu_18294_p3 = (!icmp_ln513_125_fu_18289_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_125_fu_18289_p2.read()[0].to_bool())? out_vector_M_real_3_97_reg_21881.read(): select_ln513_124_fu_18282_p3.read());
}

void dmatmult::thread_select_ln513_126_fu_18306_p3() {
    select_ln513_126_fu_18306_p3 = (!icmp_ln513_126_fu_18301_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_126_fu_18301_p2.read()[0].to_bool())? out_vector_M_real_3_98_reg_21886.read(): select_ln513_125_fu_18294_p3.read());
}

void dmatmult::thread_select_ln513_127_fu_18318_p3() {
    select_ln513_127_fu_18318_p3 = (!icmp_ln513_127_fu_18313_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_127_fu_18313_p2.read()[0].to_bool())? out_vector_M_real_3_99_reg_21891.read(): select_ln513_126_fu_18306_p3.read());
}

void dmatmult::thread_select_ln513_128_fu_18330_p3() {
    select_ln513_128_fu_18330_p3 = (!icmp_ln513_128_fu_18325_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_128_fu_18325_p2.read()[0].to_bool())? out_vector_M_real_3_100_reg_21896.read(): select_ln513_127_fu_18318_p3.read());
}

void dmatmult::thread_select_ln513_129_fu_18342_p3() {
    select_ln513_129_fu_18342_p3 = (!icmp_ln513_129_fu_18337_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_129_fu_18337_p2.read()[0].to_bool())? out_vector_M_real_3_101_reg_21901.read(): select_ln513_128_fu_18330_p3.read());
}

void dmatmult::thread_select_ln513_12_fu_16922_p3() {
    select_ln513_12_fu_16922_p3 = (!icmp_ln513_12_fu_16916_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_12_fu_16916_p2.read()[0].to_bool())? out_vector_M_real_3_88_reg_21316.read(): select_ln513_11_fu_16909_p3.read());
}

void dmatmult::thread_select_ln513_130_fu_18354_p3() {
    select_ln513_130_fu_18354_p3 = (!icmp_ln513_130_fu_18349_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_130_fu_18349_p2.read()[0].to_bool())? out_vector_M_real_3_102_reg_21906.read(): select_ln513_129_fu_18342_p3.read());
}

void dmatmult::thread_select_ln513_131_fu_18366_p3() {
    select_ln513_131_fu_18366_p3 = (!icmp_ln513_131_fu_18361_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_131_fu_18361_p2.read()[0].to_bool())? out_vector_M_real_3_103_reg_21911.read(): select_ln513_130_fu_18354_p3.read());
}

void dmatmult::thread_select_ln513_132_fu_18378_p3() {
    select_ln513_132_fu_18378_p3 = (!icmp_ln513_132_fu_18373_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_132_fu_18373_p2.read()[0].to_bool())? out_vector_M_real_3_104_reg_21916.read(): select_ln513_131_fu_18366_p3.read());
}

void dmatmult::thread_select_ln513_133_fu_18390_p3() {
    select_ln513_133_fu_18390_p3 = (!icmp_ln513_133_fu_18385_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_133_fu_18385_p2.read()[0].to_bool())? out_vector_M_real_3_105_reg_21921.read(): select_ln513_132_fu_18378_p3.read());
}

void dmatmult::thread_select_ln513_134_fu_18402_p3() {
    select_ln513_134_fu_18402_p3 = (!icmp_ln513_134_fu_18397_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_134_fu_18397_p2.read()[0].to_bool())? out_vector_M_real_3_106_reg_21926.read(): select_ln513_133_fu_18390_p3.read());
}

void dmatmult::thread_select_ln513_135_fu_18414_p3() {
    select_ln513_135_fu_18414_p3 = (!icmp_ln513_135_fu_18409_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_135_fu_18409_p2.read()[0].to_bool())? out_vector_M_real_3_107_reg_21931.read(): select_ln513_134_fu_18402_p3.read());
}

void dmatmult::thread_select_ln513_136_fu_18426_p3() {
    select_ln513_136_fu_18426_p3 = (!icmp_ln513_136_fu_18421_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_136_fu_18421_p2.read()[0].to_bool())? out_vector_M_real_3_108_reg_21936.read(): select_ln513_135_fu_18414_p3.read());
}

void dmatmult::thread_select_ln513_137_fu_18438_p3() {
    select_ln513_137_fu_18438_p3 = (!icmp_ln513_137_fu_18433_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_137_fu_18433_p2.read()[0].to_bool())? out_vector_M_real_3_109_reg_21941.read(): select_ln513_136_fu_18426_p3.read());
}

void dmatmult::thread_select_ln513_138_fu_18450_p3() {
    select_ln513_138_fu_18450_p3 = (!icmp_ln513_138_fu_18445_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_138_fu_18445_p2.read()[0].to_bool())? out_vector_M_real_3_110_reg_21946.read(): select_ln513_137_fu_18438_p3.read());
}

void dmatmult::thread_select_ln513_139_fu_18462_p3() {
    select_ln513_139_fu_18462_p3 = (!icmp_ln513_139_fu_18457_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_139_fu_18457_p2.read()[0].to_bool())? out_vector_M_real_3_111_reg_21951.read(): select_ln513_138_fu_18450_p3.read());
}

void dmatmult::thread_select_ln513_13_fu_16935_p3() {
    select_ln513_13_fu_16935_p3 = (!icmp_ln513_13_fu_16929_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_13_fu_16929_p2.read()[0].to_bool())? out_vector_M_real_3_89_reg_21321.read(): select_ln513_12_fu_16922_p3.read());
}

void dmatmult::thread_select_ln513_140_fu_18474_p3() {
    select_ln513_140_fu_18474_p3 = (!icmp_ln513_140_fu_18469_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_140_fu_18469_p2.read()[0].to_bool())? out_vector_M_real_3_112_reg_21956.read(): select_ln513_139_fu_18462_p3.read());
}

void dmatmult::thread_select_ln513_141_fu_18486_p3() {
    select_ln513_141_fu_18486_p3 = (!icmp_ln513_141_fu_18481_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_141_fu_18481_p2.read()[0].to_bool())? out_vector_M_real_3_113_reg_21961.read(): select_ln513_140_fu_18474_p3.read());
}

void dmatmult::thread_select_ln513_142_fu_18498_p3() {
    select_ln513_142_fu_18498_p3 = (!icmp_ln513_142_fu_18493_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_142_fu_18493_p2.read()[0].to_bool())? out_vector_M_real_3_114_reg_21966.read(): select_ln513_141_fu_18486_p3.read());
}

void dmatmult::thread_select_ln513_143_fu_18510_p3() {
    select_ln513_143_fu_18510_p3 = (!icmp_ln513_143_fu_18505_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_143_fu_18505_p2.read()[0].to_bool())? out_vector_M_real_3_115_reg_21971.read(): select_ln513_142_fu_18498_p3.read());
}

void dmatmult::thread_select_ln513_144_fu_18522_p3() {
    select_ln513_144_fu_18522_p3 = (!icmp_ln513_144_fu_18517_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_144_fu_18517_p2.read()[0].to_bool())? out_vector_M_real_3_116_reg_21976.read(): select_ln513_143_fu_18510_p3.read());
}

void dmatmult::thread_select_ln513_145_fu_18534_p3() {
    select_ln513_145_fu_18534_p3 = (!icmp_ln513_145_fu_18529_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_145_fu_18529_p2.read()[0].to_bool())? out_vector_M_real_3_117_reg_21981.read(): select_ln513_144_fu_18522_p3.read());
}

void dmatmult::thread_select_ln513_146_fu_18546_p3() {
    select_ln513_146_fu_18546_p3 = (!icmp_ln513_146_fu_18541_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_146_fu_18541_p2.read()[0].to_bool())? out_vector_M_real_3_118_reg_21986.read(): select_ln513_145_fu_18534_p3.read());
}

void dmatmult::thread_select_ln513_147_fu_18558_p3() {
    select_ln513_147_fu_18558_p3 = (!icmp_ln513_147_fu_18553_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_147_fu_18553_p2.read()[0].to_bool())? out_vector_M_real_3_119_reg_21991.read(): select_ln513_146_fu_18546_p3.read());
}

void dmatmult::thread_select_ln513_148_fu_18585_p3() {
    select_ln513_148_fu_18585_p3 = (!icmp_ln513_148_reg_22850.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_148_reg_22850.read()[0].to_bool())? out_vector_M_real_3_120_reg_21996.read(): select_ln513_147_reg_22845.read());
}

void dmatmult::thread_select_ln513_149_fu_18590_p3() {
    select_ln513_149_fu_18590_p3 = (!icmp_ln513_149_reg_22855.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_149_reg_22855.read()[0].to_bool())? out_vector_M_real_3_121_reg_22001.read(): select_ln513_148_fu_18585_p3.read());
}

void dmatmult::thread_select_ln513_14_fu_16948_p3() {
    select_ln513_14_fu_16948_p3 = (!icmp_ln513_14_fu_16942_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_14_fu_16942_p2.read()[0].to_bool())? out_vector_M_real_3_90_reg_21326.read(): select_ln513_13_fu_16935_p3.read());
}

void dmatmult::thread_select_ln513_150_fu_18596_p3() {
    select_ln513_150_fu_18596_p3 = (!icmp_ln513_150_reg_22860.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_150_reg_22860.read()[0].to_bool())? out_vector_M_real_3_122_reg_22006.read(): select_ln513_149_fu_18590_p3.read());
}

void dmatmult::thread_select_ln513_151_fu_18602_p3() {
    select_ln513_151_fu_18602_p3 = (!icmp_ln513_151_reg_22865.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_151_reg_22865.read()[0].to_bool())? out_vector_M_real_3_123_reg_22011.read(): select_ln513_150_fu_18596_p3.read());
}

void dmatmult::thread_select_ln513_152_fu_18613_p3() {
    select_ln513_152_fu_18613_p3 = (!icmp_ln513_152_fu_18608_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_152_fu_18608_p2.read()[0].to_bool())? out_vector_M_real_3_124_reg_22016.read(): select_ln513_151_fu_18602_p3.read());
}

void dmatmult::thread_select_ln513_153_fu_18625_p3() {
    select_ln513_153_fu_18625_p3 = (!icmp_ln513_153_fu_18620_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_153_fu_18620_p2.read()[0].to_bool())? out_vector_M_real_3_125_reg_22021.read(): select_ln513_152_fu_18613_p3.read());
}

void dmatmult::thread_select_ln513_154_fu_18637_p3() {
    select_ln513_154_fu_18637_p3 = (!icmp_ln513_154_fu_18632_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_154_fu_18632_p2.read()[0].to_bool())? out_vector_M_real_3_126_reg_22026.read(): select_ln513_153_fu_18625_p3.read());
}

void dmatmult::thread_select_ln513_155_fu_18649_p3() {
    select_ln513_155_fu_18649_p3 = (!icmp_ln513_155_fu_18644_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_155_fu_18644_p2.read()[0].to_bool())? out_vector_M_real_3_127_reg_22031.read(): select_ln513_154_fu_18637_p3.read());
}

void dmatmult::thread_select_ln513_156_fu_18661_p3() {
    select_ln513_156_fu_18661_p3 = (!icmp_ln513_156_fu_18656_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_156_fu_18656_p2.read()[0].to_bool())? out_vector_M_real_3_128_reg_22036.read(): select_ln513_155_fu_18649_p3.read());
}

void dmatmult::thread_select_ln513_157_fu_18673_p3() {
    select_ln513_157_fu_18673_p3 = (!icmp_ln513_157_fu_18668_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_157_fu_18668_p2.read()[0].to_bool())? out_vector_M_real_3_129_reg_22041.read(): select_ln513_156_fu_18661_p3.read());
}

void dmatmult::thread_select_ln513_158_fu_18685_p3() {
    select_ln513_158_fu_18685_p3 = (!icmp_ln513_158_fu_18680_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_158_fu_18680_p2.read()[0].to_bool())? out_vector_M_real_3_130_reg_22046.read(): select_ln513_157_fu_18673_p3.read());
}

void dmatmult::thread_select_ln513_159_fu_18697_p3() {
    select_ln513_159_fu_18697_p3 = (!icmp_ln513_159_fu_18692_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_159_fu_18692_p2.read()[0].to_bool())? out_vector_M_real_3_131_reg_22051.read(): select_ln513_158_fu_18685_p3.read());
}

void dmatmult::thread_select_ln513_15_fu_16961_p3() {
    select_ln513_15_fu_16961_p3 = (!icmp_ln513_15_fu_16955_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_15_fu_16955_p2.read()[0].to_bool())? out_vector_M_real_3_91_reg_21331.read(): select_ln513_14_fu_16948_p3.read());
}

void dmatmult::thread_select_ln513_160_fu_18709_p3() {
    select_ln513_160_fu_18709_p3 = (!icmp_ln513_160_fu_18704_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_160_fu_18704_p2.read()[0].to_bool())? out_vector_M_real_4_92_reg_22056.read(): select_ln513_159_fu_18697_p3.read());
}

void dmatmult::thread_select_ln513_161_fu_18721_p3() {
    select_ln513_161_fu_18721_p3 = (!icmp_ln513_161_fu_18716_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_161_fu_18716_p2.read()[0].to_bool())? out_vector_M_real_4_93_reg_22061.read(): select_ln513_160_fu_18709_p3.read());
}

void dmatmult::thread_select_ln513_162_fu_18733_p3() {
    select_ln513_162_fu_18733_p3 = (!icmp_ln513_162_fu_18728_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_162_fu_18728_p2.read()[0].to_bool())? out_vector_M_real_4_94_reg_22066.read(): select_ln513_161_fu_18721_p3.read());
}

void dmatmult::thread_select_ln513_163_fu_18745_p3() {
    select_ln513_163_fu_18745_p3 = (!icmp_ln513_163_fu_18740_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_163_fu_18740_p2.read()[0].to_bool())? out_vector_M_real_4_95_reg_22071.read(): select_ln513_162_fu_18733_p3.read());
}

void dmatmult::thread_select_ln513_164_fu_18757_p3() {
    select_ln513_164_fu_18757_p3 = (!icmp_ln513_164_fu_18752_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_164_fu_18752_p2.read()[0].to_bool())? out_vector_M_real_4_96_reg_22076.read(): select_ln513_163_fu_18745_p3.read());
}

void dmatmult::thread_select_ln513_165_fu_18769_p3() {
    select_ln513_165_fu_18769_p3 = (!icmp_ln513_165_fu_18764_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_165_fu_18764_p2.read()[0].to_bool())? out_vector_M_real_4_97_reg_22081.read(): select_ln513_164_fu_18757_p3.read());
}

void dmatmult::thread_select_ln513_166_fu_18781_p3() {
    select_ln513_166_fu_18781_p3 = (!icmp_ln513_166_fu_18776_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_166_fu_18776_p2.read()[0].to_bool())? out_vector_M_real_4_98_reg_22086.read(): select_ln513_165_fu_18769_p3.read());
}

void dmatmult::thread_select_ln513_167_fu_18793_p3() {
    select_ln513_167_fu_18793_p3 = (!icmp_ln513_167_fu_18788_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_167_fu_18788_p2.read()[0].to_bool())? out_vector_M_real_4_99_reg_22091.read(): select_ln513_166_fu_18781_p3.read());
}

void dmatmult::thread_select_ln513_168_fu_18805_p3() {
    select_ln513_168_fu_18805_p3 = (!icmp_ln513_168_fu_18800_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_168_fu_18800_p2.read()[0].to_bool())? out_vector_M_real_4_100_reg_22096.read(): select_ln513_167_fu_18793_p3.read());
}

void dmatmult::thread_select_ln513_169_fu_18817_p3() {
    select_ln513_169_fu_18817_p3 = (!icmp_ln513_169_fu_18812_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_169_fu_18812_p2.read()[0].to_bool())? out_vector_M_real_4_101_reg_22101.read(): select_ln513_168_fu_18805_p3.read());
}

void dmatmult::thread_select_ln513_16_fu_16974_p3() {
    select_ln513_16_fu_16974_p3 = (!icmp_ln513_16_fu_16968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_16_fu_16968_p2.read()[0].to_bool())? out_vector_M_real_4_88_reg_21336.read(): select_ln513_15_fu_16961_p3.read());
}

void dmatmult::thread_select_ln513_170_fu_18829_p3() {
    select_ln513_170_fu_18829_p3 = (!icmp_ln513_170_fu_18824_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_170_fu_18824_p2.read()[0].to_bool())? out_vector_M_real_4_102_reg_22106.read(): select_ln513_169_fu_18817_p3.read());
}

void dmatmult::thread_select_ln513_171_fu_18841_p3() {
    select_ln513_171_fu_18841_p3 = (!icmp_ln513_171_fu_18836_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_171_fu_18836_p2.read()[0].to_bool())? out_vector_M_real_4_103_reg_22111.read(): select_ln513_170_fu_18829_p3.read());
}

void dmatmult::thread_select_ln513_172_fu_18853_p3() {
    select_ln513_172_fu_18853_p3 = (!icmp_ln513_172_fu_18848_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_172_fu_18848_p2.read()[0].to_bool())? out_vector_M_real_4_104_reg_22116.read(): select_ln513_171_fu_18841_p3.read());
}

void dmatmult::thread_select_ln513_173_fu_18865_p3() {
    select_ln513_173_fu_18865_p3 = (!icmp_ln513_173_fu_18860_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_173_fu_18860_p2.read()[0].to_bool())? out_vector_M_real_4_105_reg_22121.read(): select_ln513_172_fu_18853_p3.read());
}

void dmatmult::thread_select_ln513_174_fu_18877_p3() {
    select_ln513_174_fu_18877_p3 = (!icmp_ln513_174_fu_18872_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_174_fu_18872_p2.read()[0].to_bool())? out_vector_M_real_4_106_reg_22126.read(): select_ln513_173_fu_18865_p3.read());
}

void dmatmult::thread_select_ln513_175_fu_18889_p3() {
    select_ln513_175_fu_18889_p3 = (!icmp_ln513_175_fu_18884_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_175_fu_18884_p2.read()[0].to_bool())? out_vector_M_real_4_107_reg_22131.read(): select_ln513_174_fu_18877_p3.read());
}

void dmatmult::thread_select_ln513_176_fu_18901_p3() {
    select_ln513_176_fu_18901_p3 = (!icmp_ln513_176_fu_18896_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_176_fu_18896_p2.read()[0].to_bool())? out_vector_M_real_4_108_reg_22136.read(): select_ln513_175_fu_18889_p3.read());
}

void dmatmult::thread_select_ln513_177_fu_18913_p3() {
    select_ln513_177_fu_18913_p3 = (!icmp_ln513_177_fu_18908_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_177_fu_18908_p2.read()[0].to_bool())? out_vector_M_real_4_109_reg_22141.read(): select_ln513_176_fu_18901_p3.read());
}

void dmatmult::thread_select_ln513_178_fu_18925_p3() {
    select_ln513_178_fu_18925_p3 = (!icmp_ln513_178_fu_18920_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_178_fu_18920_p2.read()[0].to_bool())? out_vector_M_real_4_110_reg_22146.read(): select_ln513_177_fu_18913_p3.read());
}

void dmatmult::thread_select_ln513_179_fu_18937_p3() {
    select_ln513_179_fu_18937_p3 = (!icmp_ln513_179_fu_18932_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_179_fu_18932_p2.read()[0].to_bool())? out_vector_M_real_4_111_reg_22151.read(): select_ln513_178_fu_18925_p3.read());
}

void dmatmult::thread_select_ln513_17_fu_16987_p3() {
    select_ln513_17_fu_16987_p3 = (!icmp_ln513_17_fu_16981_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_17_fu_16981_p2.read()[0].to_bool())? out_vector_M_real_4_89_reg_21341.read(): select_ln513_16_fu_16974_p3.read());
}

void dmatmult::thread_select_ln513_180_fu_18949_p3() {
    select_ln513_180_fu_18949_p3 = (!icmp_ln513_180_fu_18944_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_180_fu_18944_p2.read()[0].to_bool())? out_vector_M_real_4_112_reg_22156.read(): select_ln513_179_fu_18937_p3.read());
}

void dmatmult::thread_select_ln513_181_fu_18961_p3() {
    select_ln513_181_fu_18961_p3 = (!icmp_ln513_181_fu_18956_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_181_fu_18956_p2.read()[0].to_bool())? out_vector_M_real_4_113_reg_22161.read(): select_ln513_180_fu_18949_p3.read());
}

void dmatmult::thread_select_ln513_182_fu_18973_p3() {
    select_ln513_182_fu_18973_p3 = (!icmp_ln513_182_fu_18968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_182_fu_18968_p2.read()[0].to_bool())? out_vector_M_real_4_114_reg_22166.read(): select_ln513_181_fu_18961_p3.read());
}

void dmatmult::thread_select_ln513_183_fu_18985_p3() {
    select_ln513_183_fu_18985_p3 = (!icmp_ln513_183_fu_18980_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_183_fu_18980_p2.read()[0].to_bool())? out_vector_M_real_4_115_reg_22171.read(): select_ln513_182_fu_18973_p3.read());
}

void dmatmult::thread_select_ln513_184_fu_18997_p3() {
    select_ln513_184_fu_18997_p3 = (!icmp_ln513_184_fu_18992_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_184_fu_18992_p2.read()[0].to_bool())? out_vector_M_real_4_116_reg_22176.read(): select_ln513_183_fu_18985_p3.read());
}

void dmatmult::thread_select_ln513_185_fu_19009_p3() {
    select_ln513_185_fu_19009_p3 = (!icmp_ln513_185_fu_19004_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_185_fu_19004_p2.read()[0].to_bool())? out_vector_M_real_4_117_reg_22181.read(): select_ln513_184_fu_18997_p3.read());
}

void dmatmult::thread_select_ln513_186_fu_19036_p3() {
    select_ln513_186_fu_19036_p3 = (!icmp_ln513_186_reg_22875.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_186_reg_22875.read()[0].to_bool())? out_vector_M_real_4_118_reg_22186.read(): select_ln513_185_reg_22870.read());
}

void dmatmult::thread_select_ln513_187_fu_19041_p3() {
    select_ln513_187_fu_19041_p3 = (!icmp_ln513_187_reg_22880.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_187_reg_22880.read()[0].to_bool())? out_vector_M_real_4_119_reg_22191.read(): select_ln513_186_fu_19036_p3.read());
}

void dmatmult::thread_select_ln513_188_fu_19047_p3() {
    select_ln513_188_fu_19047_p3 = (!icmp_ln513_188_reg_22885.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_188_reg_22885.read()[0].to_bool())? out_vector_M_real_4_120_reg_22196.read(): select_ln513_187_fu_19041_p3.read());
}

void dmatmult::thread_select_ln513_189_fu_19053_p3() {
    select_ln513_189_fu_19053_p3 = (!icmp_ln513_189_reg_22890.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_189_reg_22890.read()[0].to_bool())? out_vector_M_real_4_121_reg_22201.read(): select_ln513_188_fu_19047_p3.read());
}

void dmatmult::thread_select_ln513_18_fu_17000_p3() {
    select_ln513_18_fu_17000_p3 = (!icmp_ln513_18_fu_16994_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_18_fu_16994_p2.read()[0].to_bool())? out_vector_M_real_4_90_reg_21346.read(): select_ln513_17_fu_16987_p3.read());
}

void dmatmult::thread_select_ln513_190_fu_19064_p3() {
    select_ln513_190_fu_19064_p3 = (!icmp_ln513_190_fu_19059_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_190_fu_19059_p2.read()[0].to_bool())? out_vector_M_real_4_122_reg_22206.read(): select_ln513_189_fu_19053_p3.read());
}

void dmatmult::thread_select_ln513_191_fu_19076_p3() {
    select_ln513_191_fu_19076_p3 = (!icmp_ln513_191_fu_19071_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_191_fu_19071_p2.read()[0].to_bool())? out_vector_M_real_4_123_reg_22211.read(): select_ln513_190_fu_19064_p3.read());
}

void dmatmult::thread_select_ln513_192_fu_19088_p3() {
    select_ln513_192_fu_19088_p3 = (!icmp_ln513_192_fu_19083_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_192_fu_19083_p2.read()[0].to_bool())? out_vector_M_real_4_124_reg_22216.read(): select_ln513_191_fu_19076_p3.read());
}

void dmatmult::thread_select_ln513_193_fu_19100_p3() {
    select_ln513_193_fu_19100_p3 = (!icmp_ln513_193_fu_19095_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_193_fu_19095_p2.read()[0].to_bool())? out_vector_M_real_4_125_reg_22221.read(): select_ln513_192_fu_19088_p3.read());
}

void dmatmult::thread_select_ln513_194_fu_19112_p3() {
    select_ln513_194_fu_19112_p3 = (!icmp_ln513_194_fu_19107_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_194_fu_19107_p2.read()[0].to_bool())? out_vector_M_real_4_126_reg_22226.read(): select_ln513_193_fu_19100_p3.read());
}

void dmatmult::thread_select_ln513_195_fu_19124_p3() {
    select_ln513_195_fu_19124_p3 = (!icmp_ln513_195_fu_19119_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_195_fu_19119_p2.read()[0].to_bool())? out_vector_M_real_4_127_reg_22231.read(): select_ln513_194_fu_19112_p3.read());
}

void dmatmult::thread_select_ln513_196_fu_19136_p3() {
    select_ln513_196_fu_19136_p3 = (!icmp_ln513_196_fu_19131_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_196_fu_19131_p2.read()[0].to_bool())? out_vector_M_real_4_128_reg_22236.read(): select_ln513_195_fu_19124_p3.read());
}

void dmatmult::thread_select_ln513_197_fu_19148_p3() {
    select_ln513_197_fu_19148_p3 = (!icmp_ln513_197_fu_19143_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_197_fu_19143_p2.read()[0].to_bool())? out_vector_M_real_4_129_reg_22241.read(): select_ln513_196_fu_19136_p3.read());
}

void dmatmult::thread_select_ln513_198_fu_19160_p3() {
    select_ln513_198_fu_19160_p3 = (!icmp_ln513_198_fu_19155_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_198_fu_19155_p2.read()[0].to_bool())? out_vector_M_real_4_130_reg_22246.read(): select_ln513_197_fu_19148_p3.read());
}

void dmatmult::thread_select_ln513_199_fu_19172_p3() {
    select_ln513_199_fu_19172_p3 = (!icmp_ln513_199_fu_19167_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_199_fu_19167_p2.read()[0].to_bool())? out_vector_M_real_4_131_reg_22251.read(): select_ln513_198_fu_19160_p3.read());
}

void dmatmult::thread_select_ln513_19_fu_17013_p3() {
    select_ln513_19_fu_17013_p3 = (!icmp_ln513_19_fu_17007_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_19_fu_17007_p2.read()[0].to_bool())? out_vector_M_real_4_91_reg_21351.read(): select_ln513_18_fu_17000_p3.read());
}

void dmatmult::thread_select_ln513_1_fu_16779_p3() {
    select_ln513_1_fu_16779_p3 = (!icmp_ln513_1_fu_16773_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_1_fu_16773_p2.read()[0].to_bool())? out_vector_M_real_0_9_reg_21261.read(): select_ln513_fu_16767_p3.read());
}

void dmatmult::thread_select_ln513_200_fu_19184_p3() {
    select_ln513_200_fu_19184_p3 = (!icmp_ln513_200_fu_19179_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_200_fu_19179_p2.read()[0].to_bool())? out_vector_M_real_5_92_reg_22256.read(): select_ln513_199_fu_19172_p3.read());
}

void dmatmult::thread_select_ln513_201_fu_19196_p3() {
    select_ln513_201_fu_19196_p3 = (!icmp_ln513_201_fu_19191_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_201_fu_19191_p2.read()[0].to_bool())? out_vector_M_real_5_93_reg_22261.read(): select_ln513_200_fu_19184_p3.read());
}

void dmatmult::thread_select_ln513_202_fu_19208_p3() {
    select_ln513_202_fu_19208_p3 = (!icmp_ln513_202_fu_19203_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_202_fu_19203_p2.read()[0].to_bool())? out_vector_M_real_5_94_reg_22266.read(): select_ln513_201_fu_19196_p3.read());
}

void dmatmult::thread_select_ln513_203_fu_19220_p3() {
    select_ln513_203_fu_19220_p3 = (!icmp_ln513_203_fu_19215_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_203_fu_19215_p2.read()[0].to_bool())? out_vector_M_real_5_95_reg_22271.read(): select_ln513_202_fu_19208_p3.read());
}

void dmatmult::thread_select_ln513_204_fu_19232_p3() {
    select_ln513_204_fu_19232_p3 = (!icmp_ln513_204_fu_19227_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_204_fu_19227_p2.read()[0].to_bool())? out_vector_M_real_5_96_reg_22276.read(): select_ln513_203_fu_19220_p3.read());
}

void dmatmult::thread_select_ln513_205_fu_19244_p3() {
    select_ln513_205_fu_19244_p3 = (!icmp_ln513_205_fu_19239_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_205_fu_19239_p2.read()[0].to_bool())? out_vector_M_real_5_97_reg_22281.read(): select_ln513_204_fu_19232_p3.read());
}

void dmatmult::thread_select_ln513_206_fu_19256_p3() {
    select_ln513_206_fu_19256_p3 = (!icmp_ln513_206_fu_19251_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_206_fu_19251_p2.read()[0].to_bool())? out_vector_M_real_5_98_reg_22286.read(): select_ln513_205_fu_19244_p3.read());
}

void dmatmult::thread_select_ln513_207_fu_19268_p3() {
    select_ln513_207_fu_19268_p3 = (!icmp_ln513_207_fu_19263_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_207_fu_19263_p2.read()[0].to_bool())? out_vector_M_real_5_99_reg_22291.read(): select_ln513_206_fu_19256_p3.read());
}

void dmatmult::thread_select_ln513_208_fu_19280_p3() {
    select_ln513_208_fu_19280_p3 = (!icmp_ln513_208_fu_19275_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_208_fu_19275_p2.read()[0].to_bool())? out_vector_M_real_5_100_reg_22296.read(): select_ln513_207_fu_19268_p3.read());
}

void dmatmult::thread_select_ln513_209_fu_19292_p3() {
    select_ln513_209_fu_19292_p3 = (!icmp_ln513_209_fu_19287_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_209_fu_19287_p2.read()[0].to_bool())? out_vector_M_real_5_101_reg_22301.read(): select_ln513_208_fu_19280_p3.read());
}

void dmatmult::thread_select_ln513_20_fu_17026_p3() {
    select_ln513_20_fu_17026_p3 = (!icmp_ln513_20_fu_17020_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_20_fu_17020_p2.read()[0].to_bool())? out_vector_M_real_5_88_reg_21356.read(): select_ln513_19_fu_17013_p3.read());
}

void dmatmult::thread_select_ln513_210_fu_19304_p3() {
    select_ln513_210_fu_19304_p3 = (!icmp_ln513_210_fu_19299_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_210_fu_19299_p2.read()[0].to_bool())? out_vector_M_real_5_102_reg_22306.read(): select_ln513_209_fu_19292_p3.read());
}

void dmatmult::thread_select_ln513_211_fu_19316_p3() {
    select_ln513_211_fu_19316_p3 = (!icmp_ln513_211_fu_19311_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_211_fu_19311_p2.read()[0].to_bool())? out_vector_M_real_5_103_reg_22311.read(): select_ln513_210_fu_19304_p3.read());
}

void dmatmult::thread_select_ln513_212_fu_19328_p3() {
    select_ln513_212_fu_19328_p3 = (!icmp_ln513_212_fu_19323_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_212_fu_19323_p2.read()[0].to_bool())? out_vector_M_real_5_104_reg_22316.read(): select_ln513_211_fu_19316_p3.read());
}

void dmatmult::thread_select_ln513_213_fu_19340_p3() {
    select_ln513_213_fu_19340_p3 = (!icmp_ln513_213_fu_19335_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_213_fu_19335_p2.read()[0].to_bool())? out_vector_M_real_5_105_reg_22321.read(): select_ln513_212_fu_19328_p3.read());
}

void dmatmult::thread_select_ln513_214_fu_19352_p3() {
    select_ln513_214_fu_19352_p3 = (!icmp_ln513_214_fu_19347_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_214_fu_19347_p2.read()[0].to_bool())? out_vector_M_real_5_106_reg_22326.read(): select_ln513_213_fu_19340_p3.read());
}

void dmatmult::thread_select_ln513_215_fu_19364_p3() {
    select_ln513_215_fu_19364_p3 = (!icmp_ln513_215_fu_19359_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_215_fu_19359_p2.read()[0].to_bool())? out_vector_M_real_5_107_reg_22331.read(): select_ln513_214_fu_19352_p3.read());
}

void dmatmult::thread_select_ln513_216_fu_19376_p3() {
    select_ln513_216_fu_19376_p3 = (!icmp_ln513_216_fu_19371_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_216_fu_19371_p2.read()[0].to_bool())? out_vector_M_real_5_108_reg_22336.read(): select_ln513_215_fu_19364_p3.read());
}

void dmatmult::thread_select_ln513_217_fu_19388_p3() {
    select_ln513_217_fu_19388_p3 = (!icmp_ln513_217_fu_19383_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_217_fu_19383_p2.read()[0].to_bool())? out_vector_M_real_5_109_reg_22341.read(): select_ln513_216_fu_19376_p3.read());
}

void dmatmult::thread_select_ln513_218_fu_19400_p3() {
    select_ln513_218_fu_19400_p3 = (!icmp_ln513_218_fu_19395_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_218_fu_19395_p2.read()[0].to_bool())? out_vector_M_real_5_110_reg_22346.read(): select_ln513_217_fu_19388_p3.read());
}

void dmatmult::thread_select_ln513_219_fu_19412_p3() {
    select_ln513_219_fu_19412_p3 = (!icmp_ln513_219_fu_19407_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_219_fu_19407_p2.read()[0].to_bool())? out_vector_M_real_5_111_reg_22351.read(): select_ln513_218_fu_19400_p3.read());
}

void dmatmult::thread_select_ln513_21_fu_17039_p3() {
    select_ln513_21_fu_17039_p3 = (!icmp_ln513_21_fu_17033_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_21_fu_17033_p2.read()[0].to_bool())? out_vector_M_real_5_89_reg_21361.read(): select_ln513_20_fu_17026_p3.read());
}

void dmatmult::thread_select_ln513_220_fu_19424_p3() {
    select_ln513_220_fu_19424_p3 = (!icmp_ln513_220_fu_19419_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_220_fu_19419_p2.read()[0].to_bool())? out_vector_M_real_5_112_reg_22356.read(): select_ln513_219_fu_19412_p3.read());
}

void dmatmult::thread_select_ln513_221_fu_19436_p3() {
    select_ln513_221_fu_19436_p3 = (!icmp_ln513_221_fu_19431_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_221_fu_19431_p2.read()[0].to_bool())? out_vector_M_real_5_113_reg_22361.read(): select_ln513_220_fu_19424_p3.read());
}

void dmatmult::thread_select_ln513_222_fu_19448_p3() {
    select_ln513_222_fu_19448_p3 = (!icmp_ln513_222_fu_19443_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_222_fu_19443_p2.read()[0].to_bool())? out_vector_M_real_5_114_reg_22366.read(): select_ln513_221_fu_19436_p3.read());
}

void dmatmult::thread_select_ln513_223_fu_19460_p3() {
    select_ln513_223_fu_19460_p3 = (!icmp_ln513_223_fu_19455_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_223_fu_19455_p2.read()[0].to_bool())? out_vector_M_real_5_115_reg_22371.read(): select_ln513_222_fu_19448_p3.read());
}

void dmatmult::thread_select_ln513_224_fu_19472_p3() {
    select_ln513_224_fu_19472_p3 = (!icmp_ln513_224_fu_19467_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_224_fu_19467_p2.read()[0].to_bool())? out_vector_M_real_5_116_reg_22376.read(): select_ln513_223_reg_22895.read());
}

void dmatmult::thread_select_ln513_225_fu_19483_p3() {
    select_ln513_225_fu_19483_p3 = (!icmp_ln513_225_fu_19478_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_225_fu_19478_p2.read()[0].to_bool())? out_vector_M_real_5_117_reg_22381.read(): select_ln513_224_fu_19472_p3.read());
}

void dmatmult::thread_select_ln513_226_fu_19495_p3() {
    select_ln513_226_fu_19495_p3 = (!icmp_ln513_226_fu_19490_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_226_fu_19490_p2.read()[0].to_bool())? out_vector_M_real_5_118_reg_22386.read(): select_ln513_225_fu_19483_p3.read());
}

void dmatmult::thread_select_ln513_227_fu_19507_p3() {
    select_ln513_227_fu_19507_p3 = (!icmp_ln513_227_fu_19502_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_227_fu_19502_p2.read()[0].to_bool())? out_vector_M_real_5_119_reg_22391.read(): select_ln513_226_fu_19495_p3.read());
}

void dmatmult::thread_select_ln513_228_fu_19519_p3() {
    select_ln513_228_fu_19519_p3 = (!icmp_ln513_228_fu_19514_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_228_fu_19514_p2.read()[0].to_bool())? out_vector_M_real_5_120_reg_22396.read(): select_ln513_227_fu_19507_p3.read());
}

void dmatmult::thread_select_ln513_229_fu_19531_p3() {
    select_ln513_229_fu_19531_p3 = (!icmp_ln513_229_fu_19526_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_229_fu_19526_p2.read()[0].to_bool())? out_vector_M_real_5_121_reg_22401.read(): select_ln513_228_fu_19519_p3.read());
}

void dmatmult::thread_select_ln513_22_fu_17052_p3() {
    select_ln513_22_fu_17052_p3 = (!icmp_ln513_22_fu_17046_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_22_fu_17046_p2.read()[0].to_bool())? out_vector_M_real_5_90_reg_21366.read(): select_ln513_21_fu_17039_p3.read());
}

void dmatmult::thread_select_ln513_230_fu_19543_p3() {
    select_ln513_230_fu_19543_p3 = (!icmp_ln513_230_fu_19538_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_230_fu_19538_p2.read()[0].to_bool())? out_vector_M_real_5_122_reg_22406.read(): select_ln513_229_fu_19531_p3.read());
}

void dmatmult::thread_select_ln513_231_fu_19555_p3() {
    select_ln513_231_fu_19555_p3 = (!icmp_ln513_231_fu_19550_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_231_fu_19550_p2.read()[0].to_bool())? out_vector_M_real_5_123_reg_22411.read(): select_ln513_230_fu_19543_p3.read());
}

void dmatmult::thread_select_ln513_232_fu_19567_p3() {
    select_ln513_232_fu_19567_p3 = (!icmp_ln513_232_fu_19562_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_232_fu_19562_p2.read()[0].to_bool())? out_vector_M_real_5_124_reg_22416.read(): select_ln513_231_fu_19555_p3.read());
}

void dmatmult::thread_select_ln513_233_fu_19579_p3() {
    select_ln513_233_fu_19579_p3 = (!icmp_ln513_233_fu_19574_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_233_fu_19574_p2.read()[0].to_bool())? out_vector_M_real_5_125_reg_22421.read(): select_ln513_232_fu_19567_p3.read());
}

void dmatmult::thread_select_ln513_234_fu_19591_p3() {
    select_ln513_234_fu_19591_p3 = (!icmp_ln513_234_fu_19586_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_234_fu_19586_p2.read()[0].to_bool())? out_vector_M_real_5_126_reg_22426.read(): select_ln513_233_fu_19579_p3.read());
}

void dmatmult::thread_select_ln513_235_fu_19603_p3() {
    select_ln513_235_fu_19603_p3 = (!icmp_ln513_235_fu_19598_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_235_fu_19598_p2.read()[0].to_bool())? out_vector_M_real_5_127_reg_22431.read(): select_ln513_234_fu_19591_p3.read());
}

void dmatmult::thread_select_ln513_236_fu_19615_p3() {
    select_ln513_236_fu_19615_p3 = (!icmp_ln513_236_fu_19610_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_236_fu_19610_p2.read()[0].to_bool())? out_vector_M_real_5_128_reg_22436.read(): select_ln513_235_fu_19603_p3.read());
}

void dmatmult::thread_select_ln513_237_fu_19627_p3() {
    select_ln513_237_fu_19627_p3 = (!icmp_ln513_237_fu_19622_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_237_fu_19622_p2.read()[0].to_bool())? out_vector_M_real_5_129_reg_22441.read(): select_ln513_236_fu_19615_p3.read());
}

void dmatmult::thread_select_ln513_238_fu_19639_p3() {
    select_ln513_238_fu_19639_p3 = (!icmp_ln513_238_fu_19634_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_238_fu_19634_p2.read()[0].to_bool())? out_vector_M_real_5_130_reg_22446.read(): select_ln513_237_fu_19627_p3.read());
}

void dmatmult::thread_select_ln513_239_fu_19651_p3() {
    select_ln513_239_fu_19651_p3 = (!icmp_ln513_239_fu_19646_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_239_fu_19646_p2.read()[0].to_bool())? out_vector_M_real_5_131_reg_22451.read(): select_ln513_238_fu_19639_p3.read());
}

void dmatmult::thread_select_ln513_23_fu_17065_p3() {
    select_ln513_23_fu_17065_p3 = (!icmp_ln513_23_fu_17059_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_23_fu_17059_p2.read()[0].to_bool())? out_vector_M_real_5_91_reg_21371.read(): select_ln513_22_fu_17052_p3.read());
}

void dmatmult::thread_select_ln513_240_fu_19663_p3() {
    select_ln513_240_fu_19663_p3 = (!icmp_ln513_240_fu_19658_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_240_fu_19658_p2.read()[0].to_bool())? out_vector_M_real_6_44_reg_22456.read(): select_ln513_239_fu_19651_p3.read());
}

void dmatmult::thread_select_ln513_241_fu_19675_p3() {
    select_ln513_241_fu_19675_p3 = (!icmp_ln513_241_fu_19670_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_241_fu_19670_p2.read()[0].to_bool())? out_vector_M_real_6_45_reg_22461.read(): select_ln513_240_fu_19663_p3.read());
}

void dmatmult::thread_select_ln513_242_fu_19687_p3() {
    select_ln513_242_fu_19687_p3 = (!icmp_ln513_242_fu_19682_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_242_fu_19682_p2.read()[0].to_bool())? out_vector_M_real_6_46_reg_22466.read(): select_ln513_241_fu_19675_p3.read());
}

void dmatmult::thread_select_ln513_243_fu_19699_p3() {
    select_ln513_243_fu_19699_p3 = (!icmp_ln513_243_fu_19694_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_243_fu_19694_p2.read()[0].to_bool())? out_vector_M_real_6_47_reg_22471.read(): select_ln513_242_fu_19687_p3.read());
}

void dmatmult::thread_select_ln513_244_fu_19711_p3() {
    select_ln513_244_fu_19711_p3 = (!icmp_ln513_244_fu_19706_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_244_fu_19706_p2.read()[0].to_bool())? out_vector_M_real_6_48_reg_22476.read(): select_ln513_243_fu_19699_p3.read());
}

void dmatmult::thread_select_ln513_245_fu_19723_p3() {
    select_ln513_245_fu_19723_p3 = (!icmp_ln513_245_fu_19718_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_245_fu_19718_p2.read()[0].to_bool())? out_vector_M_real_6_49_reg_22481.read(): select_ln513_244_fu_19711_p3.read());
}

void dmatmult::thread_select_ln513_246_fu_19735_p3() {
    select_ln513_246_fu_19735_p3 = (!icmp_ln513_246_fu_19730_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_246_fu_19730_p2.read()[0].to_bool())? out_vector_M_real_6_50_reg_22486.read(): select_ln513_245_fu_19723_p3.read());
}

void dmatmult::thread_select_ln513_247_fu_19747_p3() {
    select_ln513_247_fu_19747_p3 = (!icmp_ln513_247_fu_19742_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_247_fu_19742_p2.read()[0].to_bool())? out_vector_M_real_6_51_reg_22491.read(): select_ln513_246_fu_19735_p3.read());
}

void dmatmult::thread_select_ln513_248_fu_19759_p3() {
    select_ln513_248_fu_19759_p3 = (!icmp_ln513_248_fu_19754_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_248_fu_19754_p2.read()[0].to_bool())? out_vector_M_real_6_52_reg_22496.read(): select_ln513_247_fu_19747_p3.read());
}

void dmatmult::thread_select_ln513_249_fu_19771_p3() {
    select_ln513_249_fu_19771_p3 = (!icmp_ln513_249_fu_19766_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_249_fu_19766_p2.read()[0].to_bool())? out_vector_M_real_6_53_reg_22501.read(): select_ln513_248_fu_19759_p3.read());
}

void dmatmult::thread_select_ln513_24_fu_17078_p3() {
    select_ln513_24_fu_17078_p3 = (!icmp_ln513_24_fu_17072_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_24_fu_17072_p2.read()[0].to_bool())? out_vector_M_real_6_40_reg_21376.read(): select_ln513_23_fu_17065_p3.read());
}

void dmatmult::thread_select_ln513_250_fu_19783_p3() {
    select_ln513_250_fu_19783_p3 = (!icmp_ln513_250_fu_19778_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_250_fu_19778_p2.read()[0].to_bool())? out_vector_M_real_6_54_reg_22506.read(): select_ln513_249_fu_19771_p3.read());
}

void dmatmult::thread_select_ln513_251_fu_19795_p3() {
    select_ln513_251_fu_19795_p3 = (!icmp_ln513_251_fu_19790_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_251_fu_19790_p2.read()[0].to_bool())? out_vector_M_real_6_55_reg_22511.read(): select_ln513_250_fu_19783_p3.read());
}

void dmatmult::thread_select_ln513_252_fu_19807_p3() {
    select_ln513_252_fu_19807_p3 = (!icmp_ln513_252_fu_19802_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_252_fu_19802_p2.read()[0].to_bool())? out_vector_M_real_6_56_reg_22516.read(): select_ln513_251_fu_19795_p3.read());
}

void dmatmult::thread_select_ln513_253_fu_19819_p3() {
    select_ln513_253_fu_19819_p3 = (!icmp_ln513_253_fu_19814_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_253_fu_19814_p2.read()[0].to_bool())? out_vector_M_real_6_57_reg_22521.read(): select_ln513_252_fu_19807_p3.read());
}

void dmatmult::thread_select_ln513_25_fu_17091_p3() {
    select_ln513_25_fu_17091_p3 = (!icmp_ln513_25_fu_17085_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_25_fu_17085_p2.read()[0].to_bool())? out_vector_M_real_6_41_reg_21381.read(): select_ln513_24_fu_17078_p3.read());
}

void dmatmult::thread_select_ln513_26_fu_17104_p3() {
    select_ln513_26_fu_17104_p3 = (!icmp_ln513_26_fu_17098_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_26_fu_17098_p2.read()[0].to_bool())? out_vector_M_real_6_42_reg_21386.read(): select_ln513_25_fu_17091_p3.read());
}

void dmatmult::thread_select_ln513_27_fu_17117_p3() {
    select_ln513_27_fu_17117_p3 = (!icmp_ln513_27_fu_17111_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_27_fu_17111_p2.read()[0].to_bool())? out_vector_M_real_6_43_reg_21391.read(): select_ln513_26_fu_17104_p3.read());
}

void dmatmult::thread_select_ln513_28_fu_17130_p3() {
    select_ln513_28_fu_17130_p3 = (!icmp_ln513_28_fu_17124_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_28_fu_17124_p2.read()[0].to_bool())? out_vector_M_real_7_8_reg_21396.read(): select_ln513_27_fu_17117_p3.read());
}

void dmatmult::thread_select_ln513_29_fu_17143_p3() {
    select_ln513_29_fu_17143_p3 = (!icmp_ln513_29_fu_17137_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_29_fu_17137_p2.read()[0].to_bool())? out_vector_M_real_7_9_reg_21401.read(): select_ln513_28_fu_17130_p3.read());
}

void dmatmult::thread_select_ln513_2_fu_16792_p3() {
    select_ln513_2_fu_16792_p3 = (!icmp_ln513_2_fu_16786_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_2_fu_16786_p2.read()[0].to_bool())? out_vector_M_real_0_10_reg_21266.read(): select_ln513_1_fu_16779_p3.read());
}

void dmatmult::thread_select_ln513_30_fu_17156_p3() {
    select_ln513_30_fu_17156_p3 = (!icmp_ln513_30_fu_17150_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_30_fu_17150_p2.read()[0].to_bool())? out_vector_M_real_7_10_reg_21406.read(): select_ln513_29_fu_17143_p3.read());
}

void dmatmult::thread_select_ln513_31_fu_17169_p3() {
    select_ln513_31_fu_17169_p3 = (!icmp_ln513_31_fu_17163_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_31_fu_17163_p2.read()[0].to_bool())? out_vector_M_real_7_11_reg_21411.read(): select_ln513_30_fu_17156_p3.read());
}

void dmatmult::thread_select_ln513_32_fu_17182_p3() {
    select_ln513_32_fu_17182_p3 = (!icmp_ln513_32_fu_17176_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_32_fu_17176_p2.read()[0].to_bool())? out_vector_M_real_8_8_reg_21416.read(): select_ln513_31_fu_17169_p3.read());
}

void dmatmult::thread_select_ln513_33_fu_17195_p3() {
    select_ln513_33_fu_17195_p3 = (!icmp_ln513_33_fu_17189_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_33_fu_17189_p2.read()[0].to_bool())? out_vector_M_real_8_9_reg_21421.read(): select_ln513_32_fu_17182_p3.read());
}

void dmatmult::thread_select_ln513_34_fu_17232_p3() {
    select_ln513_34_fu_17232_p3 = (!icmp_ln513_34_reg_22770.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_34_reg_22770.read()[0].to_bool())? out_vector_M_real_8_10_reg_21426.read(): select_ln513_33_reg_22765.read());
}

void dmatmult::thread_select_ln513_35_fu_17237_p3() {
    select_ln513_35_fu_17237_p3 = (!icmp_ln513_35_reg_22775.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_35_reg_22775.read()[0].to_bool())? out_vector_M_real_8_11_reg_21431.read(): select_ln513_34_fu_17232_p3.read());
}

void dmatmult::thread_select_ln513_36_fu_17243_p3() {
    select_ln513_36_fu_17243_p3 = (!icmp_ln513_36_reg_22780.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_36_reg_22780.read()[0].to_bool())? out_vector_M_real_9_8_reg_21436.read(): select_ln513_35_fu_17237_p3.read());
}

void dmatmult::thread_select_ln513_37_fu_17249_p3() {
    select_ln513_37_fu_17249_p3 = (!icmp_ln513_37_reg_22785.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_37_reg_22785.read()[0].to_bool())? out_vector_M_real_9_9_reg_21441.read(): select_ln513_36_fu_17243_p3.read());
}

void dmatmult::thread_select_ln513_38_fu_17260_p3() {
    select_ln513_38_fu_17260_p3 = (!icmp_ln513_38_fu_17255_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_38_fu_17255_p2.read()[0].to_bool())? out_vector_M_real_9_10_reg_21446.read(): select_ln513_37_fu_17249_p3.read());
}

void dmatmult::thread_select_ln513_39_fu_17272_p3() {
    select_ln513_39_fu_17272_p3 = (!icmp_ln513_39_fu_17267_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_39_fu_17267_p2.read()[0].to_bool())? out_vector_M_real_9_11_reg_21451.read(): select_ln513_38_fu_17260_p3.read());
}

void dmatmult::thread_select_ln513_3_fu_16805_p3() {
    select_ln513_3_fu_16805_p3 = (!icmp_ln513_3_fu_16799_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_3_fu_16799_p2.read()[0].to_bool())? out_vector_M_real_0_11_reg_21271.read(): select_ln513_2_fu_16792_p3.read());
}

void dmatmult::thread_select_ln513_40_fu_17284_p3() {
    select_ln513_40_fu_17284_p3 = (!icmp_ln513_40_fu_17279_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_40_fu_17279_p2.read()[0].to_bool())? out_vector_M_real_1_92_reg_21456.read(): select_ln513_39_fu_17272_p3.read());
}

void dmatmult::thread_select_ln513_41_fu_17296_p3() {
    select_ln513_41_fu_17296_p3 = (!icmp_ln513_41_fu_17291_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_41_fu_17291_p2.read()[0].to_bool())? out_vector_M_real_1_93_reg_21461.read(): select_ln513_40_fu_17284_p3.read());
}

void dmatmult::thread_select_ln513_42_fu_17308_p3() {
    select_ln513_42_fu_17308_p3 = (!icmp_ln513_42_fu_17303_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_42_fu_17303_p2.read()[0].to_bool())? out_vector_M_real_1_94_reg_21466.read(): select_ln513_41_fu_17296_p3.read());
}

void dmatmult::thread_select_ln513_43_fu_17320_p3() {
    select_ln513_43_fu_17320_p3 = (!icmp_ln513_43_fu_17315_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_43_fu_17315_p2.read()[0].to_bool())? out_vector_M_real_1_95_reg_21471.read(): select_ln513_42_fu_17308_p3.read());
}

void dmatmult::thread_select_ln513_44_fu_17332_p3() {
    select_ln513_44_fu_17332_p3 = (!icmp_ln513_44_fu_17327_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_44_fu_17327_p2.read()[0].to_bool())? out_vector_M_real_1_96_reg_21476.read(): select_ln513_43_fu_17320_p3.read());
}

void dmatmult::thread_select_ln513_45_fu_17344_p3() {
    select_ln513_45_fu_17344_p3 = (!icmp_ln513_45_fu_17339_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_45_fu_17339_p2.read()[0].to_bool())? out_vector_M_real_1_97_reg_21481.read(): select_ln513_44_fu_17332_p3.read());
}

void dmatmult::thread_select_ln513_46_fu_17356_p3() {
    select_ln513_46_fu_17356_p3 = (!icmp_ln513_46_fu_17351_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_46_fu_17351_p2.read()[0].to_bool())? out_vector_M_real_1_98_reg_21486.read(): select_ln513_45_fu_17344_p3.read());
}

void dmatmult::thread_select_ln513_47_fu_17368_p3() {
    select_ln513_47_fu_17368_p3 = (!icmp_ln513_47_fu_17363_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_47_fu_17363_p2.read()[0].to_bool())? out_vector_M_real_1_99_reg_21491.read(): select_ln513_46_fu_17356_p3.read());
}

void dmatmult::thread_select_ln513_48_fu_17380_p3() {
    select_ln513_48_fu_17380_p3 = (!icmp_ln513_48_fu_17375_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_48_fu_17375_p2.read()[0].to_bool())? out_vector_M_real_1_100_reg_21496.read(): select_ln513_47_fu_17368_p3.read());
}

void dmatmult::thread_select_ln513_49_fu_17392_p3() {
    select_ln513_49_fu_17392_p3 = (!icmp_ln513_49_fu_17387_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_49_fu_17387_p2.read()[0].to_bool())? out_vector_M_real_1_101_reg_21501.read(): select_ln513_48_fu_17380_p3.read());
}

void dmatmult::thread_select_ln513_4_fu_16818_p3() {
    select_ln513_4_fu_16818_p3 = (!icmp_ln513_4_fu_16812_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_4_fu_16812_p2.read()[0].to_bool())? out_vector_M_real_1_88_reg_21276.read(): select_ln513_3_fu_16805_p3.read());
}

void dmatmult::thread_select_ln513_50_fu_17404_p3() {
    select_ln513_50_fu_17404_p3 = (!icmp_ln513_50_fu_17399_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_50_fu_17399_p2.read()[0].to_bool())? out_vector_M_real_1_102_reg_21506.read(): select_ln513_49_fu_17392_p3.read());
}

void dmatmult::thread_select_ln513_51_fu_17416_p3() {
    select_ln513_51_fu_17416_p3 = (!icmp_ln513_51_fu_17411_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_51_fu_17411_p2.read()[0].to_bool())? out_vector_M_real_1_103_reg_21511.read(): select_ln513_50_fu_17404_p3.read());
}

void dmatmult::thread_select_ln513_52_fu_17428_p3() {
    select_ln513_52_fu_17428_p3 = (!icmp_ln513_52_fu_17423_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_52_fu_17423_p2.read()[0].to_bool())? out_vector_M_real_1_104_reg_21516.read(): select_ln513_51_fu_17416_p3.read());
}

void dmatmult::thread_select_ln513_53_fu_17440_p3() {
    select_ln513_53_fu_17440_p3 = (!icmp_ln513_53_fu_17435_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_53_fu_17435_p2.read()[0].to_bool())? out_vector_M_real_1_105_reg_21521.read(): select_ln513_52_fu_17428_p3.read());
}

void dmatmult::thread_select_ln513_54_fu_17452_p3() {
    select_ln513_54_fu_17452_p3 = (!icmp_ln513_54_fu_17447_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_54_fu_17447_p2.read()[0].to_bool())? out_vector_M_real_1_106_reg_21526.read(): select_ln513_53_fu_17440_p3.read());
}

void dmatmult::thread_select_ln513_55_fu_17464_p3() {
    select_ln513_55_fu_17464_p3 = (!icmp_ln513_55_fu_17459_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_55_fu_17459_p2.read()[0].to_bool())? out_vector_M_real_1_107_reg_21531.read(): select_ln513_54_fu_17452_p3.read());
}

void dmatmult::thread_select_ln513_56_fu_17476_p3() {
    select_ln513_56_fu_17476_p3 = (!icmp_ln513_56_fu_17471_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_56_fu_17471_p2.read()[0].to_bool())? out_vector_M_real_1_108_reg_21536.read(): select_ln513_55_fu_17464_p3.read());
}

void dmatmult::thread_select_ln513_57_fu_17488_p3() {
    select_ln513_57_fu_17488_p3 = (!icmp_ln513_57_fu_17483_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_57_fu_17483_p2.read()[0].to_bool())? out_vector_M_real_1_109_reg_21541.read(): select_ln513_56_fu_17476_p3.read());
}

void dmatmult::thread_select_ln513_58_fu_17500_p3() {
    select_ln513_58_fu_17500_p3 = (!icmp_ln513_58_fu_17495_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_58_fu_17495_p2.read()[0].to_bool())? out_vector_M_real_1_110_reg_21546.read(): select_ln513_57_fu_17488_p3.read());
}

void dmatmult::thread_select_ln513_59_fu_17512_p3() {
    select_ln513_59_fu_17512_p3 = (!icmp_ln513_59_fu_17507_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_59_fu_17507_p2.read()[0].to_bool())? out_vector_M_real_1_111_reg_21551.read(): select_ln513_58_fu_17500_p3.read());
}

void dmatmult::thread_select_ln513_5_fu_16831_p3() {
    select_ln513_5_fu_16831_p3 = (!icmp_ln513_5_fu_16825_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_5_fu_16825_p2.read()[0].to_bool())? out_vector_M_real_1_89_reg_21281.read(): select_ln513_4_fu_16818_p3.read());
}

void dmatmult::thread_select_ln513_60_fu_17524_p3() {
    select_ln513_60_fu_17524_p3 = (!icmp_ln513_60_fu_17519_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_60_fu_17519_p2.read()[0].to_bool())? out_vector_M_real_1_112_reg_21556.read(): select_ln513_59_fu_17512_p3.read());
}

void dmatmult::thread_select_ln513_61_fu_17536_p3() {
    select_ln513_61_fu_17536_p3 = (!icmp_ln513_61_fu_17531_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_61_fu_17531_p2.read()[0].to_bool())? out_vector_M_real_1_113_reg_21561.read(): select_ln513_60_fu_17524_p3.read());
}

void dmatmult::thread_select_ln513_62_fu_17548_p3() {
    select_ln513_62_fu_17548_p3 = (!icmp_ln513_62_fu_17543_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_62_fu_17543_p2.read()[0].to_bool())? out_vector_M_real_1_114_reg_21566.read(): select_ln513_61_fu_17536_p3.read());
}

void dmatmult::thread_select_ln513_63_fu_17560_p3() {
    select_ln513_63_fu_17560_p3 = (!icmp_ln513_63_fu_17555_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_63_fu_17555_p2.read()[0].to_bool())? out_vector_M_real_1_115_reg_21571.read(): select_ln513_62_fu_17548_p3.read());
}

void dmatmult::thread_select_ln513_64_fu_17572_p3() {
    select_ln513_64_fu_17572_p3 = (!icmp_ln513_64_fu_17567_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_64_fu_17567_p2.read()[0].to_bool())? out_vector_M_real_1_116_reg_21576.read(): select_ln513_63_fu_17560_p3.read());
}

void dmatmult::thread_select_ln513_65_fu_17584_p3() {
    select_ln513_65_fu_17584_p3 = (!icmp_ln513_65_fu_17579_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_65_fu_17579_p2.read()[0].to_bool())? out_vector_M_real_1_117_reg_21581.read(): select_ln513_64_fu_17572_p3.read());
}

void dmatmult::thread_select_ln513_66_fu_17596_p3() {
    select_ln513_66_fu_17596_p3 = (!icmp_ln513_66_fu_17591_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_66_fu_17591_p2.read()[0].to_bool())? out_vector_M_real_1_118_reg_21586.read(): select_ln513_65_fu_17584_p3.read());
}

void dmatmult::thread_select_ln513_67_fu_17608_p3() {
    select_ln513_67_fu_17608_p3 = (!icmp_ln513_67_fu_17603_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_67_fu_17603_p2.read()[0].to_bool())? out_vector_M_real_1_119_reg_21591.read(): select_ln513_66_fu_17596_p3.read());
}

void dmatmult::thread_select_ln513_68_fu_17620_p3() {
    select_ln513_68_fu_17620_p3 = (!icmp_ln513_68_fu_17615_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_68_fu_17615_p2.read()[0].to_bool())? out_vector_M_real_1_120_reg_21596.read(): select_ln513_67_fu_17608_p3.read());
}

void dmatmult::thread_select_ln513_69_fu_17632_p3() {
    select_ln513_69_fu_17632_p3 = (!icmp_ln513_69_fu_17627_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_69_fu_17627_p2.read()[0].to_bool())? out_vector_M_real_1_121_reg_21601.read(): select_ln513_68_fu_17620_p3.read());
}

void dmatmult::thread_select_ln513_6_fu_16844_p3() {
    select_ln513_6_fu_16844_p3 = (!icmp_ln513_6_fu_16838_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_6_fu_16838_p2.read()[0].to_bool())? out_vector_M_real_1_90_reg_21286.read(): select_ln513_5_fu_16831_p3.read());
}

void dmatmult::thread_select_ln513_70_fu_17644_p3() {
    select_ln513_70_fu_17644_p3 = (!icmp_ln513_70_fu_17639_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_70_fu_17639_p2.read()[0].to_bool())? out_vector_M_real_1_122_reg_21606.read(): select_ln513_69_fu_17632_p3.read());
}

void dmatmult::thread_select_ln513_71_fu_17656_p3() {
    select_ln513_71_fu_17656_p3 = (!icmp_ln513_71_fu_17651_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_71_fu_17651_p2.read()[0].to_bool())? out_vector_M_real_1_123_reg_21611.read(): select_ln513_70_fu_17644_p3.read());
}

void dmatmult::thread_select_ln513_72_fu_17683_p3() {
    select_ln513_72_fu_17683_p3 = (!icmp_ln513_72_reg_22800.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_72_reg_22800.read()[0].to_bool())? out_vector_M_real_1_124_reg_21616.read(): select_ln513_71_reg_22795.read());
}

void dmatmult::thread_select_ln513_73_fu_17688_p3() {
    select_ln513_73_fu_17688_p3 = (!icmp_ln513_73_reg_22805.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_73_reg_22805.read()[0].to_bool())? out_vector_M_real_1_125_reg_21621.read(): select_ln513_72_fu_17683_p3.read());
}

void dmatmult::thread_select_ln513_74_fu_17694_p3() {
    select_ln513_74_fu_17694_p3 = (!icmp_ln513_74_reg_22810.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_74_reg_22810.read()[0].to_bool())? out_vector_M_real_1_126_reg_21626.read(): select_ln513_73_fu_17688_p3.read());
}

void dmatmult::thread_select_ln513_75_fu_17700_p3() {
    select_ln513_75_fu_17700_p3 = (!icmp_ln513_75_reg_22815.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_75_reg_22815.read()[0].to_bool())? out_vector_M_real_1_127_reg_21631.read(): select_ln513_74_fu_17694_p3.read());
}

void dmatmult::thread_select_ln513_76_fu_17711_p3() {
    select_ln513_76_fu_17711_p3 = (!icmp_ln513_76_fu_17706_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_76_fu_17706_p2.read()[0].to_bool())? out_vector_M_real_1_128_reg_21636.read(): select_ln513_75_fu_17700_p3.read());
}

void dmatmult::thread_select_ln513_77_fu_17723_p3() {
    select_ln513_77_fu_17723_p3 = (!icmp_ln513_77_fu_17718_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_77_fu_17718_p2.read()[0].to_bool())? out_vector_M_real_1_129_reg_21641.read(): select_ln513_76_fu_17711_p3.read());
}

void dmatmult::thread_select_ln513_78_fu_17735_p3() {
    select_ln513_78_fu_17735_p3 = (!icmp_ln513_78_fu_17730_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_78_fu_17730_p2.read()[0].to_bool())? out_vector_M_real_1_130_reg_21646.read(): select_ln513_77_fu_17723_p3.read());
}

void dmatmult::thread_select_ln513_79_fu_17747_p3() {
    select_ln513_79_fu_17747_p3 = (!icmp_ln513_79_fu_17742_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_79_fu_17742_p2.read()[0].to_bool())? out_vector_M_real_1_131_reg_21651.read(): select_ln513_78_fu_17735_p3.read());
}

void dmatmult::thread_select_ln513_7_fu_16857_p3() {
    select_ln513_7_fu_16857_p3 = (!icmp_ln513_7_fu_16851_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_7_fu_16851_p2.read()[0].to_bool())? out_vector_M_real_1_91_reg_21291.read(): select_ln513_6_fu_16844_p3.read());
}

void dmatmult::thread_select_ln513_80_fu_17759_p3() {
    select_ln513_80_fu_17759_p3 = (!icmp_ln513_80_fu_17754_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_80_fu_17754_p2.read()[0].to_bool())? out_vector_M_real_2_92_reg_21656.read(): select_ln513_79_fu_17747_p3.read());
}

void dmatmult::thread_select_ln513_81_fu_17771_p3() {
    select_ln513_81_fu_17771_p3 = (!icmp_ln513_81_fu_17766_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_81_fu_17766_p2.read()[0].to_bool())? out_vector_M_real_2_93_reg_21661.read(): select_ln513_80_fu_17759_p3.read());
}

void dmatmult::thread_select_ln513_82_fu_17783_p3() {
    select_ln513_82_fu_17783_p3 = (!icmp_ln513_82_fu_17778_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_82_fu_17778_p2.read()[0].to_bool())? out_vector_M_real_2_94_reg_21666.read(): select_ln513_81_fu_17771_p3.read());
}

void dmatmult::thread_select_ln513_83_fu_17795_p3() {
    select_ln513_83_fu_17795_p3 = (!icmp_ln513_83_fu_17790_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_83_fu_17790_p2.read()[0].to_bool())? out_vector_M_real_2_95_reg_21671.read(): select_ln513_82_fu_17783_p3.read());
}

void dmatmult::thread_select_ln513_84_fu_17807_p3() {
    select_ln513_84_fu_17807_p3 = (!icmp_ln513_84_fu_17802_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_84_fu_17802_p2.read()[0].to_bool())? out_vector_M_real_2_96_reg_21676.read(): select_ln513_83_fu_17795_p3.read());
}

void dmatmult::thread_select_ln513_85_fu_17819_p3() {
    select_ln513_85_fu_17819_p3 = (!icmp_ln513_85_fu_17814_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_85_fu_17814_p2.read()[0].to_bool())? out_vector_M_real_2_97_reg_21681.read(): select_ln513_84_fu_17807_p3.read());
}

void dmatmult::thread_select_ln513_86_fu_17831_p3() {
    select_ln513_86_fu_17831_p3 = (!icmp_ln513_86_fu_17826_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_86_fu_17826_p2.read()[0].to_bool())? out_vector_M_real_2_98_reg_21686.read(): select_ln513_85_fu_17819_p3.read());
}

void dmatmult::thread_select_ln513_87_fu_17843_p3() {
    select_ln513_87_fu_17843_p3 = (!icmp_ln513_87_fu_17838_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_87_fu_17838_p2.read()[0].to_bool())? out_vector_M_real_2_99_reg_21691.read(): select_ln513_86_fu_17831_p3.read());
}

void dmatmult::thread_select_ln513_88_fu_17855_p3() {
    select_ln513_88_fu_17855_p3 = (!icmp_ln513_88_fu_17850_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_88_fu_17850_p2.read()[0].to_bool())? out_vector_M_real_2_100_reg_21696.read(): select_ln513_87_fu_17843_p3.read());
}

void dmatmult::thread_select_ln513_89_fu_17867_p3() {
    select_ln513_89_fu_17867_p3 = (!icmp_ln513_89_fu_17862_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_89_fu_17862_p2.read()[0].to_bool())? out_vector_M_real_2_101_reg_21701.read(): select_ln513_88_fu_17855_p3.read());
}

void dmatmult::thread_select_ln513_8_fu_16870_p3() {
    select_ln513_8_fu_16870_p3 = (!icmp_ln513_8_fu_16864_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_8_fu_16864_p2.read()[0].to_bool())? out_vector_M_real_2_88_reg_21296.read(): select_ln513_7_fu_16857_p3.read());
}

void dmatmult::thread_select_ln513_90_fu_17879_p3() {
    select_ln513_90_fu_17879_p3 = (!icmp_ln513_90_fu_17874_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_90_fu_17874_p2.read()[0].to_bool())? out_vector_M_real_2_102_reg_21706.read(): select_ln513_89_fu_17867_p3.read());
}

void dmatmult::thread_select_ln513_91_fu_17891_p3() {
    select_ln513_91_fu_17891_p3 = (!icmp_ln513_91_fu_17886_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_91_fu_17886_p2.read()[0].to_bool())? out_vector_M_real_2_103_reg_21711.read(): select_ln513_90_fu_17879_p3.read());
}

void dmatmult::thread_select_ln513_92_fu_17903_p3() {
    select_ln513_92_fu_17903_p3 = (!icmp_ln513_92_fu_17898_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_92_fu_17898_p2.read()[0].to_bool())? out_vector_M_real_2_104_reg_21716.read(): select_ln513_91_fu_17891_p3.read());
}

void dmatmult::thread_select_ln513_93_fu_17915_p3() {
    select_ln513_93_fu_17915_p3 = (!icmp_ln513_93_fu_17910_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_93_fu_17910_p2.read()[0].to_bool())? out_vector_M_real_2_105_reg_21721.read(): select_ln513_92_fu_17903_p3.read());
}

void dmatmult::thread_select_ln513_94_fu_17927_p3() {
    select_ln513_94_fu_17927_p3 = (!icmp_ln513_94_fu_17922_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_94_fu_17922_p2.read()[0].to_bool())? out_vector_M_real_2_106_reg_21726.read(): select_ln513_93_fu_17915_p3.read());
}

void dmatmult::thread_select_ln513_95_fu_17939_p3() {
    select_ln513_95_fu_17939_p3 = (!icmp_ln513_95_fu_17934_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_95_fu_17934_p2.read()[0].to_bool())? out_vector_M_real_2_107_reg_21731.read(): select_ln513_94_fu_17927_p3.read());
}

void dmatmult::thread_select_ln513_96_fu_17951_p3() {
    select_ln513_96_fu_17951_p3 = (!icmp_ln513_96_fu_17946_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_96_fu_17946_p2.read()[0].to_bool())? out_vector_M_real_2_108_reg_21736.read(): select_ln513_95_fu_17939_p3.read());
}

void dmatmult::thread_select_ln513_97_fu_17963_p3() {
    select_ln513_97_fu_17963_p3 = (!icmp_ln513_97_fu_17958_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_97_fu_17958_p2.read()[0].to_bool())? out_vector_M_real_2_109_reg_21741.read(): select_ln513_96_fu_17951_p3.read());
}

void dmatmult::thread_select_ln513_98_fu_17975_p3() {
    select_ln513_98_fu_17975_p3 = (!icmp_ln513_98_fu_17970_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_98_fu_17970_p2.read()[0].to_bool())? out_vector_M_real_2_110_reg_21746.read(): select_ln513_97_fu_17963_p3.read());
}

void dmatmult::thread_select_ln513_99_fu_17987_p3() {
    select_ln513_99_fu_17987_p3 = (!icmp_ln513_99_fu_17982_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_99_fu_17982_p2.read()[0].to_bool())? out_vector_M_real_2_111_reg_21751.read(): select_ln513_98_fu_17975_p3.read());
}

void dmatmult::thread_select_ln513_9_fu_16883_p3() {
    select_ln513_9_fu_16883_p3 = (!icmp_ln513_9_fu_16877_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_9_fu_16877_p2.read()[0].to_bool())? out_vector_M_real_2_89_reg_21301.read(): select_ln513_8_fu_16870_p3.read());
}

void dmatmult::thread_select_ln513_fu_16767_p3() {
    select_ln513_fu_16767_p3 = (!icmp_ln513_fu_16761_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_fu_16761_p2.read()[0].to_bool())? out_vector_M_real_0_8_reg_21256.read(): out_vector_M_real_6_59_reg_22531.read());
}

void dmatmult::thread_temp_last_V_fu_17226_p2() {
    temp_last_V_fu_17226_p2 = (!i18_0_reg_10770.read().is_01() || !ap_const_lv9_FF.is_01())? sc_lv<1>(): sc_lv<1>(i18_0_reg_10770.read() == ap_const_lv9_FF);
}

void dmatmult::thread_tmp_10_fu_12271_p4() {
    tmp_10_fu_12271_p4 = j10_0_reg_10715.read().range(8, 7);
}

void dmatmult::thread_tmp_11_fu_12604_p3() {
    tmp_11_fu_12604_p3 = esl_concat<2,8>(lshr_ln3_fu_12594_p4.read(), ap_const_lv8_0);
}

void dmatmult::thread_tmp_1_fu_11445_p3() {
    tmp_1_fu_11445_p3 = phi_ln60_1_reg_10648.read().range(7, 7);
}

void dmatmult::thread_tmp_6_fu_11757_p3() {
    tmp_6_fu_11757_p3 = esl_concat<1,8>(tmp_5_reg_19871.read(), phi_ln63_1_reg_10671.read());
}

void dmatmult::thread_tmp_7_fu_11453_p3() {
    tmp_7_fu_11453_p3 = esl_concat<8,1>(phi_ln60_reg_10636.read(), tmp_1_fu_11445_p3.read());
}

void dmatmult::thread_tmp_8_fu_11948_p4() {
    tmp_8_fu_11948_p4 = j_0_reg_10693.read().range(8, 7);
}

void dmatmult::thread_tmp_9_fu_11920_p3() {
    tmp_9_fu_11920_p3 = esl_concat<9,1>(i_0_reg_10682.read(), ap_const_lv1_0);
}

void dmatmult::thread_tmp_s_fu_12243_p3() {
    tmp_s_fu_12243_p3 = esl_concat<9,1>(i9_0_reg_10704.read(), ap_const_lv1_0);
}

void dmatmult::thread_trunc_ln1027_1_fu_11739_p1() {
    trunc_ln1027_1_fu_11739_p1 = phi_ln63_reg_10659.read().range(7-1, 0);
}

void dmatmult::thread_trunc_ln1027_fu_11441_p1() {
    trunc_ln1027_fu_11441_p1 = phi_ln60_1_reg_10648.read().range(7-1, 0);
}

void dmatmult::thread_trunc_ln106_fu_12590_p1() {
    trunc_ln106_fu_12590_p1 = i15_0_reg_10748.read().range(7-1, 0);
}

void dmatmult::thread_trunc_ln118_fu_16757_p1() {
    trunc_ln118_fu_16757_p1 = i18_0_reg_10770.read().range(8-1, 0);
}

void dmatmult::thread_trunc_ln76_fu_11944_p1() {
    trunc_ln76_fu_11944_p1 = j_0_reg_10693.read().range(7-1, 0);
}

void dmatmult::thread_trunc_ln86_fu_12267_p1() {
    trunc_ln86_fu_12267_p1 = j10_0_reg_10715.read().range(7-1, 0);
}

void dmatmult::thread_xmat_M_imag_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_0_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_0_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_0_address0 = grp_kernel_mmult_fu_10781_b_M_imag_0_address0.read();
    } else {
        xmat_M_imag_0_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_0_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_0_ce0.read();
    } else {
        xmat_M_imag_0_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_0_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_0_ce1.read();
    } else {
        xmat_M_imag_0_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_0_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_0_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_0)))) {
        xmat_M_imag_0_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_0_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_100_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_100_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_100_address0 = grp_kernel_mmult_fu_10781_b_M_imag_100_address0.read();
    } else {
        xmat_M_imag_100_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_100_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_100_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_100_ce0.read();
    } else {
        xmat_M_imag_100_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_100_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_100_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_100_ce1.read();
    } else {
        xmat_M_imag_100_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_100_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_100_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_100_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_100_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_100_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_64)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_64)))) {
        xmat_M_imag_100_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_100_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_101_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_101_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_101_address0 = grp_kernel_mmult_fu_10781_b_M_imag_101_address0.read();
    } else {
        xmat_M_imag_101_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_101_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_101_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_101_ce0.read();
    } else {
        xmat_M_imag_101_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_101_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_101_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_101_ce1.read();
    } else {
        xmat_M_imag_101_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_101_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_101_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_101_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_101_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_101_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_65)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_65)))) {
        xmat_M_imag_101_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_101_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_102_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_102_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_102_address0 = grp_kernel_mmult_fu_10781_b_M_imag_102_address0.read();
    } else {
        xmat_M_imag_102_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_102_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_102_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_102_ce0.read();
    } else {
        xmat_M_imag_102_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_102_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_102_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_102_ce1.read();
    } else {
        xmat_M_imag_102_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_102_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_102_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_102_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_102_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_102_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_66)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_66)))) {
        xmat_M_imag_102_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_102_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_103_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_103_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_103_address0 = grp_kernel_mmult_fu_10781_b_M_imag_103_address0.read();
    } else {
        xmat_M_imag_103_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_103_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_103_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_103_ce0.read();
    } else {
        xmat_M_imag_103_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_103_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_103_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_103_ce1.read();
    } else {
        xmat_M_imag_103_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_103_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_103_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_103_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_103_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_103_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_67)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_67)))) {
        xmat_M_imag_103_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_103_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_104_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_104_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_104_address0 = grp_kernel_mmult_fu_10781_b_M_imag_104_address0.read();
    } else {
        xmat_M_imag_104_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_104_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_104_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_104_ce0.read();
    } else {
        xmat_M_imag_104_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_104_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_104_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_104_ce1.read();
    } else {
        xmat_M_imag_104_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_104_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_104_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_104_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_104_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_104_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_68)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_68)))) {
        xmat_M_imag_104_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_104_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_105_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_105_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_105_address0 = grp_kernel_mmult_fu_10781_b_M_imag_105_address0.read();
    } else {
        xmat_M_imag_105_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_105_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_105_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_105_ce0.read();
    } else {
        xmat_M_imag_105_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_105_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_105_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_105_ce1.read();
    } else {
        xmat_M_imag_105_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_105_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_105_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_105_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_105_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_105_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_69)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_69)))) {
        xmat_M_imag_105_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_105_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_106_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_106_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_106_address0 = grp_kernel_mmult_fu_10781_b_M_imag_106_address0.read();
    } else {
        xmat_M_imag_106_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_106_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_106_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_106_ce0.read();
    } else {
        xmat_M_imag_106_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_106_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_106_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_106_ce1.read();
    } else {
        xmat_M_imag_106_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_106_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_106_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_106_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_106_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_106_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6A)))) {
        xmat_M_imag_106_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_106_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_107_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_107_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_107_address0 = grp_kernel_mmult_fu_10781_b_M_imag_107_address0.read();
    } else {
        xmat_M_imag_107_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_107_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_107_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_107_ce0.read();
    } else {
        xmat_M_imag_107_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_107_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_107_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_107_ce1.read();
    } else {
        xmat_M_imag_107_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_107_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_107_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_107_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_107_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_107_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6B)))) {
        xmat_M_imag_107_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_107_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_108_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_108_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_108_address0 = grp_kernel_mmult_fu_10781_b_M_imag_108_address0.read();
    } else {
        xmat_M_imag_108_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_108_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_108_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_108_ce0.read();
    } else {
        xmat_M_imag_108_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_108_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_108_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_108_ce1.read();
    } else {
        xmat_M_imag_108_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_108_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_108_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_108_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_108_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_108_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6C)))) {
        xmat_M_imag_108_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_108_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_109_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_109_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_109_address0 = grp_kernel_mmult_fu_10781_b_M_imag_109_address0.read();
    } else {
        xmat_M_imag_109_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_109_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_109_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_109_ce0.read();
    } else {
        xmat_M_imag_109_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_109_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_109_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_109_ce1.read();
    } else {
        xmat_M_imag_109_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_109_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_109_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_109_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_109_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_109_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6D)))) {
        xmat_M_imag_109_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_109_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_10_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_10_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_10_address0 = grp_kernel_mmult_fu_10781_b_M_imag_10_address0.read();
    } else {
        xmat_M_imag_10_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_10_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_10_ce0.read();
    } else {
        xmat_M_imag_10_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_10_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_10_ce1.read();
    } else {
        xmat_M_imag_10_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_10_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_10_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_A)))) {
        xmat_M_imag_10_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_10_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_110_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_110_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_110_address0 = grp_kernel_mmult_fu_10781_b_M_imag_110_address0.read();
    } else {
        xmat_M_imag_110_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_110_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_110_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_110_ce0.read();
    } else {
        xmat_M_imag_110_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_110_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_110_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_110_ce1.read();
    } else {
        xmat_M_imag_110_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_110_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_110_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_110_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_110_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_110_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6E)))) {
        xmat_M_imag_110_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_110_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_111_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_111_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_111_address0 = grp_kernel_mmult_fu_10781_b_M_imag_111_address0.read();
    } else {
        xmat_M_imag_111_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_111_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_111_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_111_ce0.read();
    } else {
        xmat_M_imag_111_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_111_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_111_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_111_ce1.read();
    } else {
        xmat_M_imag_111_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_111_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_111_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_111_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_111_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_111_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6F)))) {
        xmat_M_imag_111_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_111_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_112_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_112_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_112_address0 = grp_kernel_mmult_fu_10781_b_M_imag_112_address0.read();
    } else {
        xmat_M_imag_112_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_112_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_112_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_112_ce0.read();
    } else {
        xmat_M_imag_112_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_112_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_112_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_112_ce1.read();
    } else {
        xmat_M_imag_112_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_112_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_112_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_112_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_112_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_112_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_70)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_70)))) {
        xmat_M_imag_112_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_112_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_113_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_113_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_113_address0 = grp_kernel_mmult_fu_10781_b_M_imag_113_address0.read();
    } else {
        xmat_M_imag_113_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_113_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_113_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_113_ce0.read();
    } else {
        xmat_M_imag_113_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_113_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_113_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_113_ce1.read();
    } else {
        xmat_M_imag_113_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_113_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_113_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_113_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_113_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_113_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_71)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_71)))) {
        xmat_M_imag_113_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_113_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_114_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_114_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_114_address0 = grp_kernel_mmult_fu_10781_b_M_imag_114_address0.read();
    } else {
        xmat_M_imag_114_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_114_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_114_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_114_ce0.read();
    } else {
        xmat_M_imag_114_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_114_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_114_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_114_ce1.read();
    } else {
        xmat_M_imag_114_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_114_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_114_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_114_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_114_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_114_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_72)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_72)))) {
        xmat_M_imag_114_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_114_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_115_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_115_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_115_address0 = grp_kernel_mmult_fu_10781_b_M_imag_115_address0.read();
    } else {
        xmat_M_imag_115_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_115_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_115_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_115_ce0.read();
    } else {
        xmat_M_imag_115_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_115_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_115_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_115_ce1.read();
    } else {
        xmat_M_imag_115_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_115_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_115_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_115_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_115_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_115_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_73)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_73)))) {
        xmat_M_imag_115_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_115_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_116_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_116_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_116_address0 = grp_kernel_mmult_fu_10781_b_M_imag_116_address0.read();
    } else {
        xmat_M_imag_116_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_116_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_116_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_116_ce0.read();
    } else {
        xmat_M_imag_116_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_116_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_116_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_116_ce1.read();
    } else {
        xmat_M_imag_116_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_116_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_116_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_116_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_116_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_116_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_74)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_74)))) {
        xmat_M_imag_116_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_116_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_117_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_117_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_117_address0 = grp_kernel_mmult_fu_10781_b_M_imag_117_address0.read();
    } else {
        xmat_M_imag_117_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_117_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_117_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_117_ce0.read();
    } else {
        xmat_M_imag_117_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_117_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_117_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_117_ce1.read();
    } else {
        xmat_M_imag_117_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_117_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_117_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_117_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_117_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_117_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_75)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_75)))) {
        xmat_M_imag_117_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_117_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_118_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_118_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_118_address0 = grp_kernel_mmult_fu_10781_b_M_imag_118_address0.read();
    } else {
        xmat_M_imag_118_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_118_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_118_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_118_ce0.read();
    } else {
        xmat_M_imag_118_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_118_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_118_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_118_ce1.read();
    } else {
        xmat_M_imag_118_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_118_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_118_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_118_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_118_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_118_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_76)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_76)))) {
        xmat_M_imag_118_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_118_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_119_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_119_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_119_address0 = grp_kernel_mmult_fu_10781_b_M_imag_119_address0.read();
    } else {
        xmat_M_imag_119_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_119_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_119_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_119_ce0.read();
    } else {
        xmat_M_imag_119_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_119_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_119_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_119_ce1.read();
    } else {
        xmat_M_imag_119_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_119_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_119_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_119_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_119_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_119_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_77)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_77)))) {
        xmat_M_imag_119_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_119_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_11_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_11_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_11_address0 = grp_kernel_mmult_fu_10781_b_M_imag_11_address0.read();
    } else {
        xmat_M_imag_11_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_11_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_11_ce0.read();
    } else {
        xmat_M_imag_11_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_11_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_11_ce1.read();
    } else {
        xmat_M_imag_11_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_11_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_11_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_B)))) {
        xmat_M_imag_11_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_11_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_120_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_120_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_120_address0 = grp_kernel_mmult_fu_10781_b_M_imag_120_address0.read();
    } else {
        xmat_M_imag_120_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_120_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_120_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_120_ce0.read();
    } else {
        xmat_M_imag_120_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_120_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_120_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_120_ce1.read();
    } else {
        xmat_M_imag_120_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_120_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_120_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_120_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_120_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_120_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_78)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_78)))) {
        xmat_M_imag_120_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_120_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_121_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_121_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_121_address0 = grp_kernel_mmult_fu_10781_b_M_imag_121_address0.read();
    } else {
        xmat_M_imag_121_address0 = "XXXXXXXXX";
    }
}

}


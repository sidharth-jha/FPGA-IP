#include "dmatmult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dmatmult::thread_xmat_M_imag_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_121_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_121_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_121_ce0.read();
    } else {
        xmat_M_imag_121_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_121_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_121_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_121_ce1.read();
    } else {
        xmat_M_imag_121_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_121_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_121_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_121_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_121_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_121_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_79)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_79)))) {
        xmat_M_imag_121_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_121_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_122_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_122_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_122_address0 = grp_kernel_mmult_fu_10781_b_M_imag_122_address0.read();
    } else {
        xmat_M_imag_122_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_122_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_122_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_122_ce0.read();
    } else {
        xmat_M_imag_122_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_122_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_122_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_122_ce1.read();
    } else {
        xmat_M_imag_122_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_122_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_122_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_122_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_122_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_122_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7A)))) {
        xmat_M_imag_122_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_122_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_123_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_123_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_123_address0 = grp_kernel_mmult_fu_10781_b_M_imag_123_address0.read();
    } else {
        xmat_M_imag_123_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_123_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_123_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_123_ce0.read();
    } else {
        xmat_M_imag_123_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_123_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_123_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_123_ce1.read();
    } else {
        xmat_M_imag_123_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_123_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_123_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_123_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_123_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_123_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7B)))) {
        xmat_M_imag_123_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_123_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_124_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_124_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_124_address0 = grp_kernel_mmult_fu_10781_b_M_imag_124_address0.read();
    } else {
        xmat_M_imag_124_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_124_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_124_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_124_ce0.read();
    } else {
        xmat_M_imag_124_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_124_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_124_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_124_ce1.read();
    } else {
        xmat_M_imag_124_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_124_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_124_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_124_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_124_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_124_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7C)))) {
        xmat_M_imag_124_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_124_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_125_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_125_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_125_address0 = grp_kernel_mmult_fu_10781_b_M_imag_125_address0.read();
    } else {
        xmat_M_imag_125_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_125_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_125_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_125_ce0.read();
    } else {
        xmat_M_imag_125_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_125_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_125_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_125_ce1.read();
    } else {
        xmat_M_imag_125_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_125_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_125_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_125_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_125_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_125_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7D)))) {
        xmat_M_imag_125_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_125_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_126_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_126_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_126_address0 = grp_kernel_mmult_fu_10781_b_M_imag_126_address0.read();
    } else {
        xmat_M_imag_126_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_126_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_126_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_126_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_126_ce0.read();
    } else {
        xmat_M_imag_126_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_126_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_126_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_126_ce1.read();
    } else {
        xmat_M_imag_126_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_126_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_126_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_126_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_126_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_126_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7E)))) {
        xmat_M_imag_126_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_126_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_127_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_127_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_127_address0 = grp_kernel_mmult_fu_10781_b_M_imag_127_address0.read();
    } else {
        xmat_M_imag_127_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_127_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_127_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_127_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_127_ce0.read();
    } else {
        xmat_M_imag_127_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_127_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_127_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_127_ce1.read();
    } else {
        xmat_M_imag_127_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_127_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_127_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_127_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_127_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_127_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7F)))) {
        xmat_M_imag_127_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_127_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_12_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_12_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_12_address0 = grp_kernel_mmult_fu_10781_b_M_imag_12_address0.read();
    } else {
        xmat_M_imag_12_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_12_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_12_ce0.read();
    } else {
        xmat_M_imag_12_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_12_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_12_ce1.read();
    } else {
        xmat_M_imag_12_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_12_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_12_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_C)))) {
        xmat_M_imag_12_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_12_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_13_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_13_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_13_address0 = grp_kernel_mmult_fu_10781_b_M_imag_13_address0.read();
    } else {
        xmat_M_imag_13_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_13_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_13_ce0.read();
    } else {
        xmat_M_imag_13_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_13_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_13_ce1.read();
    } else {
        xmat_M_imag_13_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_13_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_13_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_D)))) {
        xmat_M_imag_13_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_13_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_14_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_14_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_14_address0 = grp_kernel_mmult_fu_10781_b_M_imag_14_address0.read();
    } else {
        xmat_M_imag_14_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_14_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_14_ce0.read();
    } else {
        xmat_M_imag_14_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_14_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_14_ce1.read();
    } else {
        xmat_M_imag_14_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_14_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_14_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_E)))) {
        xmat_M_imag_14_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_14_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_15_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_15_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_15_address0 = grp_kernel_mmult_fu_10781_b_M_imag_15_address0.read();
    } else {
        xmat_M_imag_15_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_15_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_15_ce0.read();
    } else {
        xmat_M_imag_15_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_15_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_15_ce1.read();
    } else {
        xmat_M_imag_15_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_15_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_15_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_F)))) {
        xmat_M_imag_15_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_15_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_16_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_16_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_16_address0 = grp_kernel_mmult_fu_10781_b_M_imag_16_address0.read();
    } else {
        xmat_M_imag_16_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_16_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_16_ce0.read();
    } else {
        xmat_M_imag_16_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_16_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_16_ce1.read();
    } else {
        xmat_M_imag_16_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_16_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_16_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_16_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_10)))) {
        xmat_M_imag_16_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_16_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_17_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_17_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_17_address0 = grp_kernel_mmult_fu_10781_b_M_imag_17_address0.read();
    } else {
        xmat_M_imag_17_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_17_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_17_ce0.read();
    } else {
        xmat_M_imag_17_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_17_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_17_ce1.read();
    } else {
        xmat_M_imag_17_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_17_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_17_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_17_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_11)))) {
        xmat_M_imag_17_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_17_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_18_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_18_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_18_address0 = grp_kernel_mmult_fu_10781_b_M_imag_18_address0.read();
    } else {
        xmat_M_imag_18_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_18_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_18_ce0.read();
    } else {
        xmat_M_imag_18_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_18_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_18_ce1.read();
    } else {
        xmat_M_imag_18_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_18_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_18_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_18_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_12)))) {
        xmat_M_imag_18_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_18_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_19_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_19_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_19_address0 = grp_kernel_mmult_fu_10781_b_M_imag_19_address0.read();
    } else {
        xmat_M_imag_19_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_19_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_19_ce0.read();
    } else {
        xmat_M_imag_19_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_19_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_19_ce1.read();
    } else {
        xmat_M_imag_19_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_19_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_19_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_19_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_13)))) {
        xmat_M_imag_19_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_19_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_1_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_1_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_1_address0 = grp_kernel_mmult_fu_10781_b_M_imag_1_address0.read();
    } else {
        xmat_M_imag_1_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_1_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_1_ce0.read();
    } else {
        xmat_M_imag_1_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_1_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_1_ce1.read();
    } else {
        xmat_M_imag_1_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_1_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_1_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1)))) {
        xmat_M_imag_1_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_1_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_20_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_20_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_20_address0 = grp_kernel_mmult_fu_10781_b_M_imag_20_address0.read();
    } else {
        xmat_M_imag_20_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_20_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_20_ce0.read();
    } else {
        xmat_M_imag_20_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_20_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_20_ce1.read();
    } else {
        xmat_M_imag_20_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_20_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_20_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_20_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_14)))) {
        xmat_M_imag_20_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_20_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_21_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_21_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_21_address0 = grp_kernel_mmult_fu_10781_b_M_imag_21_address0.read();
    } else {
        xmat_M_imag_21_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_21_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_21_ce0.read();
    } else {
        xmat_M_imag_21_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_21_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_21_ce1.read();
    } else {
        xmat_M_imag_21_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_21_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_21_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_21_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_15)))) {
        xmat_M_imag_21_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_21_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_22_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_22_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_22_address0 = grp_kernel_mmult_fu_10781_b_M_imag_22_address0.read();
    } else {
        xmat_M_imag_22_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_22_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_22_ce0.read();
    } else {
        xmat_M_imag_22_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_22_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_22_ce1.read();
    } else {
        xmat_M_imag_22_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_22_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_22_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_22_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_16)))) {
        xmat_M_imag_22_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_22_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_23_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_23_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_23_address0 = grp_kernel_mmult_fu_10781_b_M_imag_23_address0.read();
    } else {
        xmat_M_imag_23_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_23_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_23_ce0.read();
    } else {
        xmat_M_imag_23_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_23_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_23_ce1.read();
    } else {
        xmat_M_imag_23_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_23_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_23_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_23_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_17)))) {
        xmat_M_imag_23_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_23_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_24_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_24_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_24_address0 = grp_kernel_mmult_fu_10781_b_M_imag_24_address0.read();
    } else {
        xmat_M_imag_24_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_24_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_24_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_24_ce0.read();
    } else {
        xmat_M_imag_24_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_24_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_24_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_24_ce1.read();
    } else {
        xmat_M_imag_24_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_24_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_24_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_24_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_18)))) {
        xmat_M_imag_24_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_24_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_25_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_25_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_25_address0 = grp_kernel_mmult_fu_10781_b_M_imag_25_address0.read();
    } else {
        xmat_M_imag_25_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_25_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_25_ce0.read();
    } else {
        xmat_M_imag_25_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_25_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_25_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_25_ce1.read();
    } else {
        xmat_M_imag_25_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_25_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_25_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_25_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_19)))) {
        xmat_M_imag_25_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_25_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_26_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_26_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_26_address0 = grp_kernel_mmult_fu_10781_b_M_imag_26_address0.read();
    } else {
        xmat_M_imag_26_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_26_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_26_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_26_ce0.read();
    } else {
        xmat_M_imag_26_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_26_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_26_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_26_ce1.read();
    } else {
        xmat_M_imag_26_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_26_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_26_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_26_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1A)))) {
        xmat_M_imag_26_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_26_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_27_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_27_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_27_address0 = grp_kernel_mmult_fu_10781_b_M_imag_27_address0.read();
    } else {
        xmat_M_imag_27_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_27_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_27_ce0.read();
    } else {
        xmat_M_imag_27_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_27_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_27_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_27_ce1.read();
    } else {
        xmat_M_imag_27_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_27_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_27_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_27_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1B)))) {
        xmat_M_imag_27_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_27_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_28_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_28_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_28_address0 = grp_kernel_mmult_fu_10781_b_M_imag_28_address0.read();
    } else {
        xmat_M_imag_28_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_28_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_28_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_28_ce0.read();
    } else {
        xmat_M_imag_28_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_28_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_28_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_28_ce1.read();
    } else {
        xmat_M_imag_28_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_28_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_28_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_28_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1C)))) {
        xmat_M_imag_28_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_28_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_29_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_29_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_29_address0 = grp_kernel_mmult_fu_10781_b_M_imag_29_address0.read();
    } else {
        xmat_M_imag_29_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_29_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_29_ce0.read();
    } else {
        xmat_M_imag_29_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_29_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_29_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_29_ce1.read();
    } else {
        xmat_M_imag_29_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_29_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_29_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_29_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1D)))) {
        xmat_M_imag_29_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_29_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_2_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_2_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_2_address0 = grp_kernel_mmult_fu_10781_b_M_imag_2_address0.read();
    } else {
        xmat_M_imag_2_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_2_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_2_ce0.read();
    } else {
        xmat_M_imag_2_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_2_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_2_ce1.read();
    } else {
        xmat_M_imag_2_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_2_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_2_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2)))) {
        xmat_M_imag_2_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_2_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_30_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_30_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_30_address0 = grp_kernel_mmult_fu_10781_b_M_imag_30_address0.read();
    } else {
        xmat_M_imag_30_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_30_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_30_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_30_ce0.read();
    } else {
        xmat_M_imag_30_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_30_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_30_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_30_ce1.read();
    } else {
        xmat_M_imag_30_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_30_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_30_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_30_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1E)))) {
        xmat_M_imag_30_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_30_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_31_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_31_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_31_address0 = grp_kernel_mmult_fu_10781_b_M_imag_31_address0.read();
    } else {
        xmat_M_imag_31_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_31_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_31_ce0.read();
    } else {
        xmat_M_imag_31_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_31_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_31_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_31_ce1.read();
    } else {
        xmat_M_imag_31_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_31_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_31_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_31_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_1F)))) {
        xmat_M_imag_31_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_31_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_32_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_32_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_32_address0 = grp_kernel_mmult_fu_10781_b_M_imag_32_address0.read();
    } else {
        xmat_M_imag_32_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_32_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_32_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_32_ce0.read();
    } else {
        xmat_M_imag_32_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_32_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_32_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_32_ce1.read();
    } else {
        xmat_M_imag_32_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_32_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_32_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_32_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_20)))) {
        xmat_M_imag_32_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_32_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_33_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_33_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_33_address0 = grp_kernel_mmult_fu_10781_b_M_imag_33_address0.read();
    } else {
        xmat_M_imag_33_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_33_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_33_ce0.read();
    } else {
        xmat_M_imag_33_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_33_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_33_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_33_ce1.read();
    } else {
        xmat_M_imag_33_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_33_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_33_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_33_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_21)))) {
        xmat_M_imag_33_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_33_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_34_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_34_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_34_address0 = grp_kernel_mmult_fu_10781_b_M_imag_34_address0.read();
    } else {
        xmat_M_imag_34_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_34_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_34_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_34_ce0.read();
    } else {
        xmat_M_imag_34_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_34_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_34_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_34_ce1.read();
    } else {
        xmat_M_imag_34_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_34_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_34_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_34_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_22)))) {
        xmat_M_imag_34_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_34_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_35_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_35_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_35_address0 = grp_kernel_mmult_fu_10781_b_M_imag_35_address0.read();
    } else {
        xmat_M_imag_35_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_35_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_35_ce0.read();
    } else {
        xmat_M_imag_35_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_35_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_35_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_35_ce1.read();
    } else {
        xmat_M_imag_35_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_35_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_35_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_35_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_23)))) {
        xmat_M_imag_35_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_35_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_36_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_36_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_36_address0 = grp_kernel_mmult_fu_10781_b_M_imag_36_address0.read();
    } else {
        xmat_M_imag_36_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_36_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_36_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_36_ce0.read();
    } else {
        xmat_M_imag_36_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_36_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_36_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_36_ce1.read();
    } else {
        xmat_M_imag_36_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_36_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_36_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_36_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_24)))) {
        xmat_M_imag_36_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_36_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_37_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_37_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_37_address0 = grp_kernel_mmult_fu_10781_b_M_imag_37_address0.read();
    } else {
        xmat_M_imag_37_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_37_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_37_ce0.read();
    } else {
        xmat_M_imag_37_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_37_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_37_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_37_ce1.read();
    } else {
        xmat_M_imag_37_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_37_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_37_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_37_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_25)))) {
        xmat_M_imag_37_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_37_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_38_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_38_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_38_address0 = grp_kernel_mmult_fu_10781_b_M_imag_38_address0.read();
    } else {
        xmat_M_imag_38_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_38_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_38_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_38_ce0.read();
    } else {
        xmat_M_imag_38_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_38_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_38_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_38_ce1.read();
    } else {
        xmat_M_imag_38_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_38_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_38_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_38_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_26)))) {
        xmat_M_imag_38_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_38_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_39_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_39_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_39_address0 = grp_kernel_mmult_fu_10781_b_M_imag_39_address0.read();
    } else {
        xmat_M_imag_39_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_39_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_39_ce0.read();
    } else {
        xmat_M_imag_39_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_39_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_39_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_39_ce1.read();
    } else {
        xmat_M_imag_39_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_39_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_39_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_39_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_27)))) {
        xmat_M_imag_39_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_39_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_3_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_3_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_3_address0 = grp_kernel_mmult_fu_10781_b_M_imag_3_address0.read();
    } else {
        xmat_M_imag_3_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_3_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_3_ce0.read();
    } else {
        xmat_M_imag_3_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_3_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_3_ce1.read();
    } else {
        xmat_M_imag_3_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_3_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_3_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3)))) {
        xmat_M_imag_3_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_3_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_40_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_40_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_40_address0 = grp_kernel_mmult_fu_10781_b_M_imag_40_address0.read();
    } else {
        xmat_M_imag_40_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_40_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_40_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_40_ce0.read();
    } else {
        xmat_M_imag_40_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_40_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_40_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_40_ce1.read();
    } else {
        xmat_M_imag_40_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_40_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_40_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_40_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_28)))) {
        xmat_M_imag_40_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_40_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_41_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_41_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_41_address0 = grp_kernel_mmult_fu_10781_b_M_imag_41_address0.read();
    } else {
        xmat_M_imag_41_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_41_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_41_ce0.read();
    } else {
        xmat_M_imag_41_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_41_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_41_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_41_ce1.read();
    } else {
        xmat_M_imag_41_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_41_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_41_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_41_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_29)))) {
        xmat_M_imag_41_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_41_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_42_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_42_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_42_address0 = grp_kernel_mmult_fu_10781_b_M_imag_42_address0.read();
    } else {
        xmat_M_imag_42_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_42_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_42_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_42_ce0.read();
    } else {
        xmat_M_imag_42_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_42_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_42_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_42_ce1.read();
    } else {
        xmat_M_imag_42_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_42_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_42_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_42_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2A)))) {
        xmat_M_imag_42_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_42_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_43_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_43_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_43_address0 = grp_kernel_mmult_fu_10781_b_M_imag_43_address0.read();
    } else {
        xmat_M_imag_43_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_43_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_43_ce0.read();
    } else {
        xmat_M_imag_43_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_43_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_43_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_43_ce1.read();
    } else {
        xmat_M_imag_43_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_43_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_43_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_43_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2B)))) {
        xmat_M_imag_43_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_43_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_44_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_44_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_44_address0 = grp_kernel_mmult_fu_10781_b_M_imag_44_address0.read();
    } else {
        xmat_M_imag_44_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_44_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_44_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_44_ce0.read();
    } else {
        xmat_M_imag_44_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_44_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_44_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_44_ce1.read();
    } else {
        xmat_M_imag_44_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_44_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_44_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_44_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2C)))) {
        xmat_M_imag_44_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_44_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_45_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_45_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_45_address0 = grp_kernel_mmult_fu_10781_b_M_imag_45_address0.read();
    } else {
        xmat_M_imag_45_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_45_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_45_ce0.read();
    } else {
        xmat_M_imag_45_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_45_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_45_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_45_ce1.read();
    } else {
        xmat_M_imag_45_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_45_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_45_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_45_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2D)))) {
        xmat_M_imag_45_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_45_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_46_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_46_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_46_address0 = grp_kernel_mmult_fu_10781_b_M_imag_46_address0.read();
    } else {
        xmat_M_imag_46_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_46_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_46_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_46_ce0.read();
    } else {
        xmat_M_imag_46_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_46_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_46_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_46_ce1.read();
    } else {
        xmat_M_imag_46_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_46_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_46_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_46_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2E)))) {
        xmat_M_imag_46_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_46_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_47_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_47_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_47_address0 = grp_kernel_mmult_fu_10781_b_M_imag_47_address0.read();
    } else {
        xmat_M_imag_47_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_47_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_47_ce0.read();
    } else {
        xmat_M_imag_47_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_47_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_47_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_47_ce1.read();
    } else {
        xmat_M_imag_47_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_47_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_47_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_47_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_2F)))) {
        xmat_M_imag_47_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_47_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_48_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_48_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_48_address0 = grp_kernel_mmult_fu_10781_b_M_imag_48_address0.read();
    } else {
        xmat_M_imag_48_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_48_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_48_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_48_ce0.read();
    } else {
        xmat_M_imag_48_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_48_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_48_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_48_ce1.read();
    } else {
        xmat_M_imag_48_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_48_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_48_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_48_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_48_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_48_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_30)))) {
        xmat_M_imag_48_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_48_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_49_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_49_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_49_address0 = grp_kernel_mmult_fu_10781_b_M_imag_49_address0.read();
    } else {
        xmat_M_imag_49_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_49_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_49_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_49_ce0.read();
    } else {
        xmat_M_imag_49_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_49_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_49_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_49_ce1.read();
    } else {
        xmat_M_imag_49_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_49_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_49_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_49_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_49_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_49_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_31)))) {
        xmat_M_imag_49_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_49_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_4_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_4_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_4_address0 = grp_kernel_mmult_fu_10781_b_M_imag_4_address0.read();
    } else {
        xmat_M_imag_4_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_4_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_4_ce0.read();
    } else {
        xmat_M_imag_4_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_4_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_4_ce1.read();
    } else {
        xmat_M_imag_4_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_4_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_4_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4)))) {
        xmat_M_imag_4_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_4_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_50_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_50_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_50_address0 = grp_kernel_mmult_fu_10781_b_M_imag_50_address0.read();
    } else {
        xmat_M_imag_50_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_50_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_50_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_50_ce0.read();
    } else {
        xmat_M_imag_50_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_50_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_50_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_50_ce1.read();
    } else {
        xmat_M_imag_50_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_50_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_50_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_50_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_50_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_50_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_32)))) {
        xmat_M_imag_50_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_50_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_51_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_51_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_51_address0 = grp_kernel_mmult_fu_10781_b_M_imag_51_address0.read();
    } else {
        xmat_M_imag_51_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_51_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_51_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_51_ce0.read();
    } else {
        xmat_M_imag_51_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_51_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_51_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_51_ce1.read();
    } else {
        xmat_M_imag_51_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_51_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_51_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_51_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_51_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_51_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_33)))) {
        xmat_M_imag_51_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_51_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_52_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_52_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_52_address0 = grp_kernel_mmult_fu_10781_b_M_imag_52_address0.read();
    } else {
        xmat_M_imag_52_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_52_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_52_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_52_ce0.read();
    } else {
        xmat_M_imag_52_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_52_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_52_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_52_ce1.read();
    } else {
        xmat_M_imag_52_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_52_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_52_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_52_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_52_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_52_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_34)))) {
        xmat_M_imag_52_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_52_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_53_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_53_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_53_address0 = grp_kernel_mmult_fu_10781_b_M_imag_53_address0.read();
    } else {
        xmat_M_imag_53_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_53_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_53_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_53_ce0.read();
    } else {
        xmat_M_imag_53_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_53_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_53_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_53_ce1.read();
    } else {
        xmat_M_imag_53_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_53_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_53_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_53_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_53_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_53_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_35)))) {
        xmat_M_imag_53_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_53_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_54_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_54_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_54_address0 = grp_kernel_mmult_fu_10781_b_M_imag_54_address0.read();
    } else {
        xmat_M_imag_54_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_54_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_54_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_54_ce0.read();
    } else {
        xmat_M_imag_54_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_54_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_54_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_54_ce1.read();
    } else {
        xmat_M_imag_54_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_54_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_54_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_54_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_54_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_54_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_36)))) {
        xmat_M_imag_54_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_54_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_55_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_55_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_55_address0 = grp_kernel_mmult_fu_10781_b_M_imag_55_address0.read();
    } else {
        xmat_M_imag_55_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_55_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_55_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_55_ce0.read();
    } else {
        xmat_M_imag_55_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_55_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_55_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_55_ce1.read();
    } else {
        xmat_M_imag_55_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_55_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_55_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_55_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_55_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_55_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_37)))) {
        xmat_M_imag_55_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_55_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_56_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_56_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_56_address0 = grp_kernel_mmult_fu_10781_b_M_imag_56_address0.read();
    } else {
        xmat_M_imag_56_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_56_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_56_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_56_ce0.read();
    } else {
        xmat_M_imag_56_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_56_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_56_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_56_ce1.read();
    } else {
        xmat_M_imag_56_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_56_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_56_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_56_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_56_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_56_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_38)))) {
        xmat_M_imag_56_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_56_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_57_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_57_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_57_address0 = grp_kernel_mmult_fu_10781_b_M_imag_57_address0.read();
    } else {
        xmat_M_imag_57_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_57_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_57_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_57_ce0.read();
    } else {
        xmat_M_imag_57_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_57_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_57_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_57_ce1.read();
    } else {
        xmat_M_imag_57_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_57_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_57_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_57_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_57_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_57_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_39)))) {
        xmat_M_imag_57_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_57_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_58_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_58_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_58_address0 = grp_kernel_mmult_fu_10781_b_M_imag_58_address0.read();
    } else {
        xmat_M_imag_58_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_58_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_58_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_58_ce0.read();
    } else {
        xmat_M_imag_58_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_58_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_58_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_58_ce1.read();
    } else {
        xmat_M_imag_58_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_58_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_58_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_58_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_58_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_58_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3A)))) {
        xmat_M_imag_58_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_58_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_59_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_59_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_59_address0 = grp_kernel_mmult_fu_10781_b_M_imag_59_address0.read();
    } else {
        xmat_M_imag_59_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_59_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_59_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_59_ce0.read();
    } else {
        xmat_M_imag_59_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_59_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_59_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_59_ce1.read();
    } else {
        xmat_M_imag_59_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_59_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_59_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_59_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_59_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_59_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3B)))) {
        xmat_M_imag_59_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_59_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_5_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_5_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_5_address0 = grp_kernel_mmult_fu_10781_b_M_imag_5_address0.read();
    } else {
        xmat_M_imag_5_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_5_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_5_ce0.read();
    } else {
        xmat_M_imag_5_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_5_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_5_ce1.read();
    } else {
        xmat_M_imag_5_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_5_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_5_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5)))) {
        xmat_M_imag_5_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_5_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_60_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_60_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_60_address0 = grp_kernel_mmult_fu_10781_b_M_imag_60_address0.read();
    } else {
        xmat_M_imag_60_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_60_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_60_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_60_ce0.read();
    } else {
        xmat_M_imag_60_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_60_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_60_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_60_ce1.read();
    } else {
        xmat_M_imag_60_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_60_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_60_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_60_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_60_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_60_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3C)))) {
        xmat_M_imag_60_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_60_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_61_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_61_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_61_address0 = grp_kernel_mmult_fu_10781_b_M_imag_61_address0.read();
    } else {
        xmat_M_imag_61_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_61_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_61_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_61_ce0.read();
    } else {
        xmat_M_imag_61_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_61_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_61_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_61_ce1.read();
    } else {
        xmat_M_imag_61_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_61_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_61_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_61_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_61_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_61_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3D)))) {
        xmat_M_imag_61_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_61_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_62_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_62_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_62_address0 = grp_kernel_mmult_fu_10781_b_M_imag_62_address0.read();
    } else {
        xmat_M_imag_62_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_62_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_62_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_62_ce0.read();
    } else {
        xmat_M_imag_62_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_62_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_62_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_62_ce1.read();
    } else {
        xmat_M_imag_62_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_62_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_62_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_62_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_62_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_62_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3E)))) {
        xmat_M_imag_62_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_62_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_63_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_63_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_63_address0 = grp_kernel_mmult_fu_10781_b_M_imag_63_address0.read();
    } else {
        xmat_M_imag_63_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_63_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_63_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_63_ce0.read();
    } else {
        xmat_M_imag_63_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_63_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_63_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_63_ce1.read();
    } else {
        xmat_M_imag_63_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_63_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_63_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_63_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_63_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_63_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_3F)))) {
        xmat_M_imag_63_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_63_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_64_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_64_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_64_address0 = grp_kernel_mmult_fu_10781_b_M_imag_64_address0.read();
    } else {
        xmat_M_imag_64_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_64_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_64_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_64_ce0.read();
    } else {
        xmat_M_imag_64_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_64_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_64_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_64_ce1.read();
    } else {
        xmat_M_imag_64_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_64_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_64_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_64_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_64_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_64_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_40)))) {
        xmat_M_imag_64_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_64_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_65_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_65_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_65_address0 = grp_kernel_mmult_fu_10781_b_M_imag_65_address0.read();
    } else {
        xmat_M_imag_65_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_65_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_65_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_65_ce0.read();
    } else {
        xmat_M_imag_65_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_65_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_65_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_65_ce1.read();
    } else {
        xmat_M_imag_65_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_65_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_65_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_65_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_65_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_65_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_41)))) {
        xmat_M_imag_65_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_65_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_66_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_66_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_66_address0 = grp_kernel_mmult_fu_10781_b_M_imag_66_address0.read();
    } else {
        xmat_M_imag_66_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_66_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_66_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_66_ce0.read();
    } else {
        xmat_M_imag_66_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_66_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_66_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_66_ce1.read();
    } else {
        xmat_M_imag_66_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_66_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_66_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_66_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_66_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_66_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_42)))) {
        xmat_M_imag_66_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_66_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_67_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_67_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_67_address0 = grp_kernel_mmult_fu_10781_b_M_imag_67_address0.read();
    } else {
        xmat_M_imag_67_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_67_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_67_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_67_ce0.read();
    } else {
        xmat_M_imag_67_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_67_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_67_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_67_ce1.read();
    } else {
        xmat_M_imag_67_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_67_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_67_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_67_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_67_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_67_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_43)))) {
        xmat_M_imag_67_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_67_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_68_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_68_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_68_address0 = grp_kernel_mmult_fu_10781_b_M_imag_68_address0.read();
    } else {
        xmat_M_imag_68_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_68_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_68_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_68_ce0.read();
    } else {
        xmat_M_imag_68_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_68_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_68_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_68_ce1.read();
    } else {
        xmat_M_imag_68_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_68_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_68_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_68_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_68_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_68_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_44)))) {
        xmat_M_imag_68_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_68_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_69_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_69_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_69_address0 = grp_kernel_mmult_fu_10781_b_M_imag_69_address0.read();
    } else {
        xmat_M_imag_69_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_69_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_69_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_69_ce0.read();
    } else {
        xmat_M_imag_69_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_69_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_69_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_69_ce1.read();
    } else {
        xmat_M_imag_69_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_69_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_69_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_69_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_69_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_69_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_45)))) {
        xmat_M_imag_69_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_69_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_6_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_6_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_6_address0 = grp_kernel_mmult_fu_10781_b_M_imag_6_address0.read();
    } else {
        xmat_M_imag_6_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_6_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_6_ce0.read();
    } else {
        xmat_M_imag_6_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_6_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_6_ce1.read();
    } else {
        xmat_M_imag_6_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_6_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_6_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_6)))) {
        xmat_M_imag_6_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_6_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_70_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_70_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_70_address0 = grp_kernel_mmult_fu_10781_b_M_imag_70_address0.read();
    } else {
        xmat_M_imag_70_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_70_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_70_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_70_ce0.read();
    } else {
        xmat_M_imag_70_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_70_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_70_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_70_ce1.read();
    } else {
        xmat_M_imag_70_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_70_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_70_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_70_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_70_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_70_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_46)))) {
        xmat_M_imag_70_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_70_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_71_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_71_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_71_address0 = grp_kernel_mmult_fu_10781_b_M_imag_71_address0.read();
    } else {
        xmat_M_imag_71_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_71_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_71_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_71_ce0.read();
    } else {
        xmat_M_imag_71_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_71_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_71_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_71_ce1.read();
    } else {
        xmat_M_imag_71_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_71_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_71_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_71_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_71_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_71_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_47)))) {
        xmat_M_imag_71_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_71_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_72_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_72_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_72_address0 = grp_kernel_mmult_fu_10781_b_M_imag_72_address0.read();
    } else {
        xmat_M_imag_72_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_72_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_72_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_72_ce0.read();
    } else {
        xmat_M_imag_72_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_72_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_72_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_72_ce1.read();
    } else {
        xmat_M_imag_72_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_72_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_72_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_72_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_72_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_72_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_48)))) {
        xmat_M_imag_72_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_72_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_73_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_73_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_73_address0 = grp_kernel_mmult_fu_10781_b_M_imag_73_address0.read();
    } else {
        xmat_M_imag_73_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_73_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_73_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_73_ce0.read();
    } else {
        xmat_M_imag_73_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_73_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_73_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_73_ce1.read();
    } else {
        xmat_M_imag_73_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_73_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_73_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_73_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_73_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_73_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_49)))) {
        xmat_M_imag_73_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_73_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_74_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_74_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_74_address0 = grp_kernel_mmult_fu_10781_b_M_imag_74_address0.read();
    } else {
        xmat_M_imag_74_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_74_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_74_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_74_ce0.read();
    } else {
        xmat_M_imag_74_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_74_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_74_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_74_ce1.read();
    } else {
        xmat_M_imag_74_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_74_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_74_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_74_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_74_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_74_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4A)))) {
        xmat_M_imag_74_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_74_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_75_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_75_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_75_address0 = grp_kernel_mmult_fu_10781_b_M_imag_75_address0.read();
    } else {
        xmat_M_imag_75_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_75_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_75_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_75_ce0.read();
    } else {
        xmat_M_imag_75_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_75_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_75_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_75_ce1.read();
    } else {
        xmat_M_imag_75_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_75_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_75_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_75_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_75_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_75_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4B)))) {
        xmat_M_imag_75_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_75_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_76_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_76_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_76_address0 = grp_kernel_mmult_fu_10781_b_M_imag_76_address0.read();
    } else {
        xmat_M_imag_76_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_76_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_76_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_76_ce0.read();
    } else {
        xmat_M_imag_76_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_76_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_76_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_76_ce1.read();
    } else {
        xmat_M_imag_76_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_76_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_76_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_76_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_76_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_76_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4C)))) {
        xmat_M_imag_76_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_76_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_77_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_77_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_77_address0 = grp_kernel_mmult_fu_10781_b_M_imag_77_address0.read();
    } else {
        xmat_M_imag_77_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_77_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_77_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_77_ce0.read();
    } else {
        xmat_M_imag_77_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_77_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_77_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_77_ce1.read();
    } else {
        xmat_M_imag_77_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_77_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_77_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_77_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_77_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_77_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4D)))) {
        xmat_M_imag_77_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_77_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_78_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_78_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_78_address0 = grp_kernel_mmult_fu_10781_b_M_imag_78_address0.read();
    } else {
        xmat_M_imag_78_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_78_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_78_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_78_ce0.read();
    } else {
        xmat_M_imag_78_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_78_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_78_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_78_ce1.read();
    } else {
        xmat_M_imag_78_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_78_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_78_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_78_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_78_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_78_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4E)))) {
        xmat_M_imag_78_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_78_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_79_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_79_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_79_address0 = grp_kernel_mmult_fu_10781_b_M_imag_79_address0.read();
    } else {
        xmat_M_imag_79_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_79_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_79_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_79_ce0.read();
    } else {
        xmat_M_imag_79_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_79_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_79_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_79_ce1.read();
    } else {
        xmat_M_imag_79_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_79_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_79_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_79_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_79_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_79_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_4F)))) {
        xmat_M_imag_79_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_79_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_7_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_7_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_7_address0 = grp_kernel_mmult_fu_10781_b_M_imag_7_address0.read();
    } else {
        xmat_M_imag_7_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_7_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_7_ce0.read();
    } else {
        xmat_M_imag_7_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_7_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_7_ce1.read();
    } else {
        xmat_M_imag_7_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_7_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_7_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_7)))) {
        xmat_M_imag_7_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_7_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_80_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_80_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_80_address0 = grp_kernel_mmult_fu_10781_b_M_imag_80_address0.read();
    } else {
        xmat_M_imag_80_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_80_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_80_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_80_ce0.read();
    } else {
        xmat_M_imag_80_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_80_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_80_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_80_ce1.read();
    } else {
        xmat_M_imag_80_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_80_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_80_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_80_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_80_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_80_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_50)))) {
        xmat_M_imag_80_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_80_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_81_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_81_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_81_address0 = grp_kernel_mmult_fu_10781_b_M_imag_81_address0.read();
    } else {
        xmat_M_imag_81_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_81_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_81_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_81_ce0.read();
    } else {
        xmat_M_imag_81_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_81_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_81_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_81_ce1.read();
    } else {
        xmat_M_imag_81_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_81_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_81_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_81_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_81_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_81_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_51)))) {
        xmat_M_imag_81_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_81_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_82_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_82_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_82_address0 = grp_kernel_mmult_fu_10781_b_M_imag_82_address0.read();
    } else {
        xmat_M_imag_82_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_82_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_82_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_82_ce0.read();
    } else {
        xmat_M_imag_82_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_82_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_82_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_82_ce1.read();
    } else {
        xmat_M_imag_82_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_82_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_82_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_82_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_82_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_82_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_52)))) {
        xmat_M_imag_82_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_82_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_83_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_83_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_83_address0 = grp_kernel_mmult_fu_10781_b_M_imag_83_address0.read();
    } else {
        xmat_M_imag_83_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_83_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_83_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_83_ce0.read();
    } else {
        xmat_M_imag_83_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_83_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_83_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_83_ce1.read();
    } else {
        xmat_M_imag_83_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_83_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_83_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_83_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_83_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_83_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_53)))) {
        xmat_M_imag_83_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_83_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_84_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_84_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_84_address0 = grp_kernel_mmult_fu_10781_b_M_imag_84_address0.read();
    } else {
        xmat_M_imag_84_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_84_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_84_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_84_ce0.read();
    } else {
        xmat_M_imag_84_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_84_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_84_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_84_ce1.read();
    } else {
        xmat_M_imag_84_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_84_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_84_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_84_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_84_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_84_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_54)))) {
        xmat_M_imag_84_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_84_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_85_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_85_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_85_address0 = grp_kernel_mmult_fu_10781_b_M_imag_85_address0.read();
    } else {
        xmat_M_imag_85_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_85_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_85_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_85_ce0.read();
    } else {
        xmat_M_imag_85_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_85_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_85_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_85_ce1.read();
    } else {
        xmat_M_imag_85_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_85_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_85_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_85_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_85_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_85_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_55)))) {
        xmat_M_imag_85_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_85_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_86_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_86_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_86_address0 = grp_kernel_mmult_fu_10781_b_M_imag_86_address0.read();
    } else {
        xmat_M_imag_86_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_86_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_86_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_86_ce0.read();
    } else {
        xmat_M_imag_86_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_86_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_86_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_86_ce1.read();
    } else {
        xmat_M_imag_86_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_86_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_86_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_86_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_86_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_86_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_56)))) {
        xmat_M_imag_86_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_86_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_87_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_87_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_87_address0 = grp_kernel_mmult_fu_10781_b_M_imag_87_address0.read();
    } else {
        xmat_M_imag_87_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_87_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_87_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_87_ce0.read();
    } else {
        xmat_M_imag_87_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_87_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_87_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_87_ce1.read();
    } else {
        xmat_M_imag_87_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_87_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_87_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_87_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_87_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_87_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_57)))) {
        xmat_M_imag_87_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_87_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_88_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_88_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_88_address0 = grp_kernel_mmult_fu_10781_b_M_imag_88_address0.read();
    } else {
        xmat_M_imag_88_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_88_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_88_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_88_ce0.read();
    } else {
        xmat_M_imag_88_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_88_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_88_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_88_ce1.read();
    } else {
        xmat_M_imag_88_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_88_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_88_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_88_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_88_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_88_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_58)))) {
        xmat_M_imag_88_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_88_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_89_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_89_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_89_address0 = grp_kernel_mmult_fu_10781_b_M_imag_89_address0.read();
    } else {
        xmat_M_imag_89_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_89_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_89_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_89_ce0.read();
    } else {
        xmat_M_imag_89_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_89_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_89_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_89_ce1.read();
    } else {
        xmat_M_imag_89_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_89_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_89_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_89_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_89_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_89_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_59)))) {
        xmat_M_imag_89_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_89_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_8_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_8_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_8_address0 = grp_kernel_mmult_fu_10781_b_M_imag_8_address0.read();
    } else {
        xmat_M_imag_8_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_8_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_8_ce0.read();
    } else {
        xmat_M_imag_8_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_8_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_8_ce1.read();
    } else {
        xmat_M_imag_8_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_8_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_8_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_8)))) {
        xmat_M_imag_8_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_8_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_90_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_90_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_90_address0 = grp_kernel_mmult_fu_10781_b_M_imag_90_address0.read();
    } else {
        xmat_M_imag_90_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_90_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_90_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_90_ce0.read();
    } else {
        xmat_M_imag_90_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_90_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_90_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_90_ce1.read();
    } else {
        xmat_M_imag_90_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_90_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_90_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_90_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_90_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_90_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5A)))) {
        xmat_M_imag_90_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_90_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_91_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_91_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_91_address0 = grp_kernel_mmult_fu_10781_b_M_imag_91_address0.read();
    } else {
        xmat_M_imag_91_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_91_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_91_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_91_ce0.read();
    } else {
        xmat_M_imag_91_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_91_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_91_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_91_ce1.read();
    } else {
        xmat_M_imag_91_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_91_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_91_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_91_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_91_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_91_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5B)))) {
        xmat_M_imag_91_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_91_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_92_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_92_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_92_address0 = grp_kernel_mmult_fu_10781_b_M_imag_92_address0.read();
    } else {
        xmat_M_imag_92_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_92_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_92_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_92_ce0.read();
    } else {
        xmat_M_imag_92_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_92_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_92_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_92_ce1.read();
    } else {
        xmat_M_imag_92_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_92_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_92_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_92_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_92_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_92_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5C)))) {
        xmat_M_imag_92_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_92_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_93_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_93_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_93_address0 = grp_kernel_mmult_fu_10781_b_M_imag_93_address0.read();
    } else {
        xmat_M_imag_93_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_93_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_93_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_93_ce0.read();
    } else {
        xmat_M_imag_93_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_93_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_93_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_93_ce1.read();
    } else {
        xmat_M_imag_93_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_93_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_93_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_93_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_93_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_93_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5D)))) {
        xmat_M_imag_93_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_93_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_94_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_94_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_94_address0 = grp_kernel_mmult_fu_10781_b_M_imag_94_address0.read();
    } else {
        xmat_M_imag_94_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_94_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_94_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_94_ce0.read();
    } else {
        xmat_M_imag_94_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_94_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_94_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_94_ce1.read();
    } else {
        xmat_M_imag_94_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_94_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_94_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_94_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_94_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_94_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5E)))) {
        xmat_M_imag_94_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_94_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_95_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_95_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_95_address0 = grp_kernel_mmult_fu_10781_b_M_imag_95_address0.read();
    } else {
        xmat_M_imag_95_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_95_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_95_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_95_ce0.read();
    } else {
        xmat_M_imag_95_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_95_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_95_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_95_ce1.read();
    } else {
        xmat_M_imag_95_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_95_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_95_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_95_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_95_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_95_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_5F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_5F)))) {
        xmat_M_imag_95_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_95_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_96_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_96_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_96_address0 = grp_kernel_mmult_fu_10781_b_M_imag_96_address0.read();
    } else {
        xmat_M_imag_96_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_96_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_96_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_96_ce0.read();
    } else {
        xmat_M_imag_96_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_96_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_96_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_96_ce1.read();
    } else {
        xmat_M_imag_96_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_96_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_96_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_96_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_96_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_96_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_60)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_60)))) {
        xmat_M_imag_96_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_96_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_97_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_97_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_97_address0 = grp_kernel_mmult_fu_10781_b_M_imag_97_address0.read();
    } else {
        xmat_M_imag_97_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_97_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_97_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_97_ce0.read();
    } else {
        xmat_M_imag_97_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_97_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_97_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_97_ce1.read();
    } else {
        xmat_M_imag_97_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_97_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_97_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_97_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_97_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_97_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_61)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_61)))) {
        xmat_M_imag_97_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_97_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_98_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_98_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_98_address0 = grp_kernel_mmult_fu_10781_b_M_imag_98_address0.read();
    } else {
        xmat_M_imag_98_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_98_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_98_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_98_ce0.read();
    } else {
        xmat_M_imag_98_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_98_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_98_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_98_ce1.read();
    } else {
        xmat_M_imag_98_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_98_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_98_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_98_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_98_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_98_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_62)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_62)))) {
        xmat_M_imag_98_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_98_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_99_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_99_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_99_address0 = grp_kernel_mmult_fu_10781_b_M_imag_99_address0.read();
    } else {
        xmat_M_imag_99_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_99_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_99_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_99_ce0.read();
    } else {
        xmat_M_imag_99_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_99_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_99_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_99_ce1.read();
    } else {
        xmat_M_imag_99_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_99_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_99_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_99_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_99_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_99_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_63)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_63)))) {
        xmat_M_imag_99_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_99_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_9_address0 =  (sc_lv<9>) (zext_ln106_1_fu_13921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_9_address0 =  (sc_lv<9>) (zext_ln1028_fu_11764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_9_address0 = grp_kernel_mmult_fu_10781_b_M_imag_9_address0.read();
    } else {
        xmat_M_imag_9_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_xmat_M_imag_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_M_imag_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_9_ce0 = grp_kernel_mmult_fu_10781_b_M_imag_9_ce0.read();
    } else {
        xmat_M_imag_9_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        xmat_M_imag_9_ce1 = grp_kernel_mmult_fu_10781_b_M_imag_9_ce1.read();
    } else {
        xmat_M_imag_9_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_M_imag_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        xmat_M_imag_9_d0 = bitcast_ln106_fu_14053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xmat_M_imag_9_d0 = ap_const_lv32_0;
    } else {
        xmat_M_imag_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_xmat_M_imag_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_1_reg_19867.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln106_reg_19959.read(), ap_const_lv7_9)))) {
        xmat_M_imag_9_we0 = ap_const_logic_1;
    } else {
        xmat_M_imag_9_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_xmat_stream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_12566_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read())))) {
        xmat_stream_TDATA_blk_n = xmat_stream_TVALID.read();
    } else {
        xmat_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void dmatmult::thread_xmat_stream_TREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_12566_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_12566_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()))))) {
        xmat_stream_TREADY = ap_const_logic_1;
    } else {
        xmat_stream_TREADY = ap_const_logic_0;
    }
}

void dmatmult::thread_zext_ln1027_fu_11461_p1() {
    zext_ln1027_fu_11461_p1 = esl_zext<64,9>(tmp_7_fu_11453_p3.read());
}

void dmatmult::thread_zext_ln1028_fu_11764_p1() {
    zext_ln1028_fu_11764_p1 = esl_zext<64,9>(tmp_6_fu_11757_p3.read());
}

void dmatmult::thread_zext_ln103_fu_12612_p1() {
    zext_ln103_fu_12612_p1 = esl_zext<11,10>(tmp_11_fu_12604_p3.read());
}

void dmatmult::thread_zext_ln106_1_fu_13921_p1() {
    zext_ln106_1_fu_13921_p1 = esl_zext<64,11>(add_ln106_fu_13916_p2.read());
}

void dmatmult::thread_zext_ln106_fu_13912_p1() {
    zext_ln106_fu_13912_p1 = esl_zext<11,9>(j16_0_reg_10759.read());
}

void dmatmult::thread_zext_ln73_fu_11928_p1() {
    zext_ln73_fu_11928_p1 = esl_zext<11,10>(tmp_9_fu_11920_p3.read());
}

void dmatmult::thread_zext_ln76_1_fu_11967_p1() {
    zext_ln76_1_fu_11967_p1 = esl_zext<64,11>(add_ln76_fu_11962_p2.read());
}

void dmatmult::thread_zext_ln76_fu_11958_p1() {
    zext_ln76_fu_11958_p1 = esl_zext<11,2>(tmp_8_fu_11948_p4.read());
}

void dmatmult::thread_zext_ln83_fu_12251_p1() {
    zext_ln83_fu_12251_p1 = esl_zext<11,10>(tmp_s_fu_12243_p3.read());
}

void dmatmult::thread_zext_ln86_1_fu_12290_p1() {
    zext_ln86_1_fu_12290_p1 = esl_zext<64,11>(add_ln86_fu_12285_p2.read());
}

void dmatmult::thread_zext_ln86_fu_12281_p1() {
    zext_ln86_fu_12281_p1 = esl_zext<11,2>(tmp_10_fu_12271_p4.read());
}

}


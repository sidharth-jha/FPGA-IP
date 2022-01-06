#include "dmatmult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dmatmult::thread_UnifiedRetVal_i_fu_19831_p3() {
    UnifiedRetVal_i_fu_19831_p3 = (!icmp_ln513_254_fu_19826_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln513_254_fu_19826_p2.read()[0].to_bool())? out_vector_M_real_6_58_reg_22526.read(): select_ln513_253_fu_19819_p3.read());
}

void dmatmult::thread_add_ln106_fu_13916_p2() {
    add_ln106_fu_13916_p2 = (!zext_ln103_reg_19963.read().is_01() || !zext_ln106_fu_13912_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln103_reg_19963.read()) + sc_biguint<11>(zext_ln106_fu_13912_p1.read()));
}

void dmatmult::thread_add_ln60_1_fu_11435_p2() {
    add_ln60_1_fu_11435_p2 = (!ap_const_lv8_1.is_01() || !phi_ln60_1_reg_10648.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(phi_ln60_1_reg_10648.read()));
}

void dmatmult::thread_add_ln60_fu_11429_p2() {
    add_ln60_fu_11429_p2 = (!phi_ln60_reg_10636.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln60_reg_10636.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void dmatmult::thread_add_ln63_1_fu_11751_p2() {
    add_ln63_1_fu_11751_p2 = (!phi_ln63_1_reg_10671.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(phi_ln63_1_reg_10671.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void dmatmult::thread_add_ln63_fu_11733_p2() {
    add_ln63_fu_11733_p2 = (!ap_const_lv8_1.is_01() || !phi_ln63_reg_10659.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(phi_ln63_reg_10659.read()));
}

void dmatmult::thread_add_ln76_fu_11962_p2() {
    add_ln76_fu_11962_p2 = (!zext_ln73_reg_19895.read().is_01() || !zext_ln76_fu_11958_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln73_reg_19895.read()) + sc_biguint<11>(zext_ln76_fu_11958_p1.read()));
}

void dmatmult::thread_add_ln86_fu_12285_p2() {
    add_ln86_fu_12285_p2 = (!zext_ln83_reg_19919.read().is_01() || !zext_ln86_fu_12281_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln83_reg_19919.read()) + sc_biguint<11>(zext_ln86_fu_12281_p1.read()));
}

void dmatmult::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dmatmult::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void dmatmult::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void dmatmult::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void dmatmult::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void dmatmult::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void dmatmult::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void dmatmult::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void dmatmult::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void dmatmult::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void dmatmult::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void dmatmult::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void dmatmult::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void dmatmult::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void dmatmult::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void dmatmult::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void dmatmult::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void dmatmult::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void dmatmult::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void dmatmult::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void dmatmult::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void dmatmult::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void dmatmult::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void dmatmult::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void dmatmult::thread_ap_block_state10() {
    ap_block_state10 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()));
}

void dmatmult::thread_ap_block_state13() {
    ap_block_state13 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln94_fu_12566_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()));
}

void dmatmult::thread_ap_block_state15() {
    ap_block_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln103_fu_13896_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, xmat_stream_TVALID.read()));
}

void dmatmult::thread_ap_block_state7() {
    ap_block_state7 = (esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()));
}

void dmatmult::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln113_fu_16745_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dmatmult::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dmatmult::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln113_fu_16745_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dmatmult::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void dmatmult::thread_bitcast_ln106_fu_14053_p1() {
    bitcast_ln106_fu_14053_p1 = xmat_stream_TDATA.read();
}

void dmatmult::thread_bitcast_ln76_fu_12099_p1() {
    bitcast_ln76_fu_12099_p1 = rxmat_stream_TDATA.read();
}

void dmatmult::thread_bitcast_ln86_fu_12422_p1() {
    bitcast_ln86_fu_12422_p1 = rxmat_stream_TDATA.read();
}

void dmatmult::thread_grp_kernel_mmult_fu_10781_ap_start() {
    grp_kernel_mmult_fu_10781_ap_start = grp_kernel_mmult_fu_10781_ap_start_reg.read();
}

void dmatmult::thread_i_1_fu_12237_p2() {
    i_1_fu_12237_p2 = (!i9_0_reg_10704.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i9_0_reg_10704.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_i_2_fu_12560_p2() {
    i_2_fu_12560_p2 = (!i12_0_reg_10726.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i12_0_reg_10726.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_i_3_fu_16751_p2() {
    i_3_fu_16751_p2 = (!i18_0_reg_10770.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i18_0_reg_10770.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_i_4_fu_12584_p2() {
    i_4_fu_12584_p2 = (!i15_0_reg_10748.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i15_0_reg_10748.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_i_fu_11914_p2() {
    i_fu_11914_p2 = (!i_0_reg_10682.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_reg_10682.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_icmp_ln102_fu_12578_p2() {
    icmp_ln102_fu_12578_p2 = (!i15_0_reg_10748.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i15_0_reg_10748.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln103_fu_13896_p2() {
    icmp_ln103_fu_13896_p2 = (!j16_0_reg_10759.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(j16_0_reg_10759.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln113_fu_16745_p2() {
    icmp_ln113_fu_16745_p2 = (!i18_0_reg_10770.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i18_0_reg_10770.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln513_100_fu_17994_p2() {
    icmp_ln513_100_fu_17994_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_64.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_64);
}

void dmatmult::thread_icmp_ln513_101_fu_18006_p2() {
    icmp_ln513_101_fu_18006_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_65.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_65);
}

void dmatmult::thread_icmp_ln513_102_fu_18018_p2() {
    icmp_ln513_102_fu_18018_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_66.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_66);
}

void dmatmult::thread_icmp_ln513_103_fu_18030_p2() {
    icmp_ln513_103_fu_18030_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_67.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_67);
}

void dmatmult::thread_icmp_ln513_104_fu_18042_p2() {
    icmp_ln513_104_fu_18042_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_68.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_68);
}

void dmatmult::thread_icmp_ln513_105_fu_18054_p2() {
    icmp_ln513_105_fu_18054_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_69.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_69);
}

void dmatmult::thread_icmp_ln513_106_fu_18066_p2() {
    icmp_ln513_106_fu_18066_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6A);
}

void dmatmult::thread_icmp_ln513_107_fu_18078_p2() {
    icmp_ln513_107_fu_18078_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6B);
}

void dmatmult::thread_icmp_ln513_108_fu_18090_p2() {
    icmp_ln513_108_fu_18090_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6C);
}

void dmatmult::thread_icmp_ln513_109_fu_18102_p2() {
    icmp_ln513_109_fu_18102_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6D);
}

void dmatmult::thread_icmp_ln513_10_fu_16890_p2() {
    icmp_ln513_10_fu_16890_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_A);
}

void dmatmult::thread_icmp_ln513_110_fu_18114_p2() {
    icmp_ln513_110_fu_18114_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6E);
}

void dmatmult::thread_icmp_ln513_111_fu_18119_p2() {
    icmp_ln513_111_fu_18119_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_6F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_6F);
}

void dmatmult::thread_icmp_ln513_112_fu_18124_p2() {
    icmp_ln513_112_fu_18124_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_70.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_70);
}

void dmatmult::thread_icmp_ln513_113_fu_18129_p2() {
    icmp_ln513_113_fu_18129_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_71.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_71);
}

void dmatmult::thread_icmp_ln513_114_fu_18157_p2() {
    icmp_ln513_114_fu_18157_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_72.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_72);
}

void dmatmult::thread_icmp_ln513_115_fu_18169_p2() {
    icmp_ln513_115_fu_18169_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_73.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_73);
}

void dmatmult::thread_icmp_ln513_116_fu_18181_p2() {
    icmp_ln513_116_fu_18181_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_74.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_74);
}

void dmatmult::thread_icmp_ln513_117_fu_18193_p2() {
    icmp_ln513_117_fu_18193_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_75.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_75);
}

void dmatmult::thread_icmp_ln513_118_fu_18205_p2() {
    icmp_ln513_118_fu_18205_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_76.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_76);
}

void dmatmult::thread_icmp_ln513_119_fu_18217_p2() {
    icmp_ln513_119_fu_18217_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_77.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_77);
}

void dmatmult::thread_icmp_ln513_11_fu_16903_p2() {
    icmp_ln513_11_fu_16903_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_B);
}

void dmatmult::thread_icmp_ln513_120_fu_18229_p2() {
    icmp_ln513_120_fu_18229_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_78);
}

void dmatmult::thread_icmp_ln513_121_fu_18241_p2() {
    icmp_ln513_121_fu_18241_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_79.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_79);
}

void dmatmult::thread_icmp_ln513_122_fu_18253_p2() {
    icmp_ln513_122_fu_18253_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7A);
}

void dmatmult::thread_icmp_ln513_123_fu_18265_p2() {
    icmp_ln513_123_fu_18265_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7B);
}

void dmatmult::thread_icmp_ln513_124_fu_18277_p2() {
    icmp_ln513_124_fu_18277_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7C);
}

void dmatmult::thread_icmp_ln513_125_fu_18289_p2() {
    icmp_ln513_125_fu_18289_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7D);
}

void dmatmult::thread_icmp_ln513_126_fu_18301_p2() {
    icmp_ln513_126_fu_18301_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7E);
}

void dmatmult::thread_icmp_ln513_127_fu_18313_p2() {
    icmp_ln513_127_fu_18313_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_7F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_7F);
}

void dmatmult::thread_icmp_ln513_128_fu_18325_p2() {
    icmp_ln513_128_fu_18325_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_80);
}

void dmatmult::thread_icmp_ln513_129_fu_18337_p2() {
    icmp_ln513_129_fu_18337_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_81.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_81);
}

void dmatmult::thread_icmp_ln513_12_fu_16916_p2() {
    icmp_ln513_12_fu_16916_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_C);
}

void dmatmult::thread_icmp_ln513_130_fu_18349_p2() {
    icmp_ln513_130_fu_18349_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_82.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_82);
}

void dmatmult::thread_icmp_ln513_131_fu_18361_p2() {
    icmp_ln513_131_fu_18361_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_83.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_83);
}

void dmatmult::thread_icmp_ln513_132_fu_18373_p2() {
    icmp_ln513_132_fu_18373_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_84.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_84);
}

void dmatmult::thread_icmp_ln513_133_fu_18385_p2() {
    icmp_ln513_133_fu_18385_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_85.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_85);
}

void dmatmult::thread_icmp_ln513_134_fu_18397_p2() {
    icmp_ln513_134_fu_18397_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_86.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_86);
}

void dmatmult::thread_icmp_ln513_135_fu_18409_p2() {
    icmp_ln513_135_fu_18409_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_87.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_87);
}

void dmatmult::thread_icmp_ln513_136_fu_18421_p2() {
    icmp_ln513_136_fu_18421_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_88.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_88);
}

void dmatmult::thread_icmp_ln513_137_fu_18433_p2() {
    icmp_ln513_137_fu_18433_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_89.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_89);
}

void dmatmult::thread_icmp_ln513_138_fu_18445_p2() {
    icmp_ln513_138_fu_18445_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8A);
}

void dmatmult::thread_icmp_ln513_139_fu_18457_p2() {
    icmp_ln513_139_fu_18457_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8B);
}

void dmatmult::thread_icmp_ln513_13_fu_16929_p2() {
    icmp_ln513_13_fu_16929_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_D);
}

void dmatmult::thread_icmp_ln513_140_fu_18469_p2() {
    icmp_ln513_140_fu_18469_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8C);
}

void dmatmult::thread_icmp_ln513_141_fu_18481_p2() {
    icmp_ln513_141_fu_18481_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8D);
}

void dmatmult::thread_icmp_ln513_142_fu_18493_p2() {
    icmp_ln513_142_fu_18493_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8E);
}

void dmatmult::thread_icmp_ln513_143_fu_18505_p2() {
    icmp_ln513_143_fu_18505_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_8F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_8F);
}

void dmatmult::thread_icmp_ln513_144_fu_18517_p2() {
    icmp_ln513_144_fu_18517_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_90);
}

void dmatmult::thread_icmp_ln513_145_fu_18529_p2() {
    icmp_ln513_145_fu_18529_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_91.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_91);
}

void dmatmult::thread_icmp_ln513_146_fu_18541_p2() {
    icmp_ln513_146_fu_18541_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_92.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_92);
}

void dmatmult::thread_icmp_ln513_147_fu_18553_p2() {
    icmp_ln513_147_fu_18553_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_93.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_93);
}

void dmatmult::thread_icmp_ln513_148_fu_18565_p2() {
    icmp_ln513_148_fu_18565_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_94.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_94);
}

void dmatmult::thread_icmp_ln513_149_fu_18570_p2() {
    icmp_ln513_149_fu_18570_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_95.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_95);
}

void dmatmult::thread_icmp_ln513_14_fu_16942_p2() {
    icmp_ln513_14_fu_16942_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_E);
}

void dmatmult::thread_icmp_ln513_150_fu_18575_p2() {
    icmp_ln513_150_fu_18575_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_96);
}

void dmatmult::thread_icmp_ln513_151_fu_18580_p2() {
    icmp_ln513_151_fu_18580_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_97.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_97);
}

void dmatmult::thread_icmp_ln513_152_fu_18608_p2() {
    icmp_ln513_152_fu_18608_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_98.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_98);
}

void dmatmult::thread_icmp_ln513_153_fu_18620_p2() {
    icmp_ln513_153_fu_18620_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_99.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_99);
}

void dmatmult::thread_icmp_ln513_154_fu_18632_p2() {
    icmp_ln513_154_fu_18632_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9A);
}

void dmatmult::thread_icmp_ln513_155_fu_18644_p2() {
    icmp_ln513_155_fu_18644_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9B);
}

void dmatmult::thread_icmp_ln513_156_fu_18656_p2() {
    icmp_ln513_156_fu_18656_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9C);
}

void dmatmult::thread_icmp_ln513_157_fu_18668_p2() {
    icmp_ln513_157_fu_18668_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9D);
}

void dmatmult::thread_icmp_ln513_158_fu_18680_p2() {
    icmp_ln513_158_fu_18680_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9E);
}

void dmatmult::thread_icmp_ln513_159_fu_18692_p2() {
    icmp_ln513_159_fu_18692_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_9F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_9F);
}

void dmatmult::thread_icmp_ln513_15_fu_16955_p2() {
    icmp_ln513_15_fu_16955_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_F);
}

void dmatmult::thread_icmp_ln513_160_fu_18704_p2() {
    icmp_ln513_160_fu_18704_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A0);
}

void dmatmult::thread_icmp_ln513_161_fu_18716_p2() {
    icmp_ln513_161_fu_18716_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A1);
}

void dmatmult::thread_icmp_ln513_162_fu_18728_p2() {
    icmp_ln513_162_fu_18728_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A2);
}

void dmatmult::thread_icmp_ln513_163_fu_18740_p2() {
    icmp_ln513_163_fu_18740_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A3);
}

void dmatmult::thread_icmp_ln513_164_fu_18752_p2() {
    icmp_ln513_164_fu_18752_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A4);
}

void dmatmult::thread_icmp_ln513_165_fu_18764_p2() {
    icmp_ln513_165_fu_18764_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A5);
}

void dmatmult::thread_icmp_ln513_166_fu_18776_p2() {
    icmp_ln513_166_fu_18776_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A6);
}

void dmatmult::thread_icmp_ln513_167_fu_18788_p2() {
    icmp_ln513_167_fu_18788_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A7);
}

void dmatmult::thread_icmp_ln513_168_fu_18800_p2() {
    icmp_ln513_168_fu_18800_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A8);
}

void dmatmult::thread_icmp_ln513_169_fu_18812_p2() {
    icmp_ln513_169_fu_18812_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_A9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_A9);
}

void dmatmult::thread_icmp_ln513_16_fu_16968_p2() {
    icmp_ln513_16_fu_16968_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_10.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_10);
}

void dmatmult::thread_icmp_ln513_170_fu_18824_p2() {
    icmp_ln513_170_fu_18824_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AA);
}

void dmatmult::thread_icmp_ln513_171_fu_18836_p2() {
    icmp_ln513_171_fu_18836_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AB);
}

void dmatmult::thread_icmp_ln513_172_fu_18848_p2() {
    icmp_ln513_172_fu_18848_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AC);
}

void dmatmult::thread_icmp_ln513_173_fu_18860_p2() {
    icmp_ln513_173_fu_18860_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AD.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AD);
}

void dmatmult::thread_icmp_ln513_174_fu_18872_p2() {
    icmp_ln513_174_fu_18872_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AE);
}

void dmatmult::thread_icmp_ln513_175_fu_18884_p2() {
    icmp_ln513_175_fu_18884_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_AF.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_AF);
}

void dmatmult::thread_icmp_ln513_176_fu_18896_p2() {
    icmp_ln513_176_fu_18896_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B0);
}

void dmatmult::thread_icmp_ln513_177_fu_18908_p2() {
    icmp_ln513_177_fu_18908_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B1);
}

void dmatmult::thread_icmp_ln513_178_fu_18920_p2() {
    icmp_ln513_178_fu_18920_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B2);
}

void dmatmult::thread_icmp_ln513_179_fu_18932_p2() {
    icmp_ln513_179_fu_18932_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B3);
}

void dmatmult::thread_icmp_ln513_17_fu_16981_p2() {
    icmp_ln513_17_fu_16981_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_11.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_11);
}

void dmatmult::thread_icmp_ln513_180_fu_18944_p2() {
    icmp_ln513_180_fu_18944_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B4);
}

void dmatmult::thread_icmp_ln513_181_fu_18956_p2() {
    icmp_ln513_181_fu_18956_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B5);
}

void dmatmult::thread_icmp_ln513_182_fu_18968_p2() {
    icmp_ln513_182_fu_18968_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B6);
}

void dmatmult::thread_icmp_ln513_183_fu_18980_p2() {
    icmp_ln513_183_fu_18980_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B7);
}

void dmatmult::thread_icmp_ln513_184_fu_18992_p2() {
    icmp_ln513_184_fu_18992_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B8);
}

void dmatmult::thread_icmp_ln513_185_fu_19004_p2() {
    icmp_ln513_185_fu_19004_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_B9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_B9);
}

void dmatmult::thread_icmp_ln513_186_fu_19016_p2() {
    icmp_ln513_186_fu_19016_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BA);
}

void dmatmult::thread_icmp_ln513_187_fu_19021_p2() {
    icmp_ln513_187_fu_19021_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BB);
}

void dmatmult::thread_icmp_ln513_188_fu_19026_p2() {
    icmp_ln513_188_fu_19026_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BC);
}

void dmatmult::thread_icmp_ln513_189_fu_19031_p2() {
    icmp_ln513_189_fu_19031_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BD.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BD);
}

void dmatmult::thread_icmp_ln513_18_fu_16994_p2() {
    icmp_ln513_18_fu_16994_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_12.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_12);
}

void dmatmult::thread_icmp_ln513_190_fu_19059_p2() {
    icmp_ln513_190_fu_19059_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BE);
}

void dmatmult::thread_icmp_ln513_191_fu_19071_p2() {
    icmp_ln513_191_fu_19071_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_BF.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_BF);
}

void dmatmult::thread_icmp_ln513_192_fu_19083_p2() {
    icmp_ln513_192_fu_19083_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C0);
}

void dmatmult::thread_icmp_ln513_193_fu_19095_p2() {
    icmp_ln513_193_fu_19095_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C1);
}

void dmatmult::thread_icmp_ln513_194_fu_19107_p2() {
    icmp_ln513_194_fu_19107_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C2);
}

void dmatmult::thread_icmp_ln513_195_fu_19119_p2() {
    icmp_ln513_195_fu_19119_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C3);
}

void dmatmult::thread_icmp_ln513_196_fu_19131_p2() {
    icmp_ln513_196_fu_19131_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C4);
}

void dmatmult::thread_icmp_ln513_197_fu_19143_p2() {
    icmp_ln513_197_fu_19143_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C5);
}

void dmatmult::thread_icmp_ln513_198_fu_19155_p2() {
    icmp_ln513_198_fu_19155_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C6);
}

void dmatmult::thread_icmp_ln513_199_fu_19167_p2() {
    icmp_ln513_199_fu_19167_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C7);
}

void dmatmult::thread_icmp_ln513_19_fu_17007_p2() {
    icmp_ln513_19_fu_17007_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_13.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_13);
}

void dmatmult::thread_icmp_ln513_1_fu_16773_p2() {
    icmp_ln513_1_fu_16773_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1);
}

void dmatmult::thread_icmp_ln513_200_fu_19179_p2() {
    icmp_ln513_200_fu_19179_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C8);
}

void dmatmult::thread_icmp_ln513_201_fu_19191_p2() {
    icmp_ln513_201_fu_19191_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_C9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_C9);
}

void dmatmult::thread_icmp_ln513_202_fu_19203_p2() {
    icmp_ln513_202_fu_19203_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CA);
}

void dmatmult::thread_icmp_ln513_203_fu_19215_p2() {
    icmp_ln513_203_fu_19215_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CB);
}

void dmatmult::thread_icmp_ln513_204_fu_19227_p2() {
    icmp_ln513_204_fu_19227_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CC);
}

void dmatmult::thread_icmp_ln513_205_fu_19239_p2() {
    icmp_ln513_205_fu_19239_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CD.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CD);
}

void dmatmult::thread_icmp_ln513_206_fu_19251_p2() {
    icmp_ln513_206_fu_19251_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CE);
}

void dmatmult::thread_icmp_ln513_207_fu_19263_p2() {
    icmp_ln513_207_fu_19263_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_CF.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_CF);
}

void dmatmult::thread_icmp_ln513_208_fu_19275_p2() {
    icmp_ln513_208_fu_19275_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D0);
}

void dmatmult::thread_icmp_ln513_209_fu_19287_p2() {
    icmp_ln513_209_fu_19287_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D1);
}

void dmatmult::thread_icmp_ln513_20_fu_17020_p2() {
    icmp_ln513_20_fu_17020_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_14.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_14);
}

void dmatmult::thread_icmp_ln513_210_fu_19299_p2() {
    icmp_ln513_210_fu_19299_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D2);
}

void dmatmult::thread_icmp_ln513_211_fu_19311_p2() {
    icmp_ln513_211_fu_19311_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D3);
}

void dmatmult::thread_icmp_ln513_212_fu_19323_p2() {
    icmp_ln513_212_fu_19323_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D4);
}

void dmatmult::thread_icmp_ln513_213_fu_19335_p2() {
    icmp_ln513_213_fu_19335_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D5);
}

void dmatmult::thread_icmp_ln513_214_fu_19347_p2() {
    icmp_ln513_214_fu_19347_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D6);
}

void dmatmult::thread_icmp_ln513_215_fu_19359_p2() {
    icmp_ln513_215_fu_19359_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D7);
}

void dmatmult::thread_icmp_ln513_216_fu_19371_p2() {
    icmp_ln513_216_fu_19371_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D8);
}

void dmatmult::thread_icmp_ln513_217_fu_19383_p2() {
    icmp_ln513_217_fu_19383_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_D9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_D9);
}

void dmatmult::thread_icmp_ln513_218_fu_19395_p2() {
    icmp_ln513_218_fu_19395_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DA);
}

void dmatmult::thread_icmp_ln513_219_fu_19407_p2() {
    icmp_ln513_219_fu_19407_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DB);
}

void dmatmult::thread_icmp_ln513_21_fu_17033_p2() {
    icmp_ln513_21_fu_17033_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_15.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_15);
}

void dmatmult::thread_icmp_ln513_220_fu_19419_p2() {
    icmp_ln513_220_fu_19419_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DC);
}

void dmatmult::thread_icmp_ln513_221_fu_19431_p2() {
    icmp_ln513_221_fu_19431_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DD.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DD);
}

void dmatmult::thread_icmp_ln513_222_fu_19443_p2() {
    icmp_ln513_222_fu_19443_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DE);
}

void dmatmult::thread_icmp_ln513_223_fu_19455_p2() {
    icmp_ln513_223_fu_19455_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_DF.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_DF);
}

void dmatmult::thread_icmp_ln513_224_fu_19467_p2() {
    icmp_ln513_224_fu_19467_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E0);
}

void dmatmult::thread_icmp_ln513_225_fu_19478_p2() {
    icmp_ln513_225_fu_19478_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E1);
}

void dmatmult::thread_icmp_ln513_226_fu_19490_p2() {
    icmp_ln513_226_fu_19490_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E2);
}

void dmatmult::thread_icmp_ln513_227_fu_19502_p2() {
    icmp_ln513_227_fu_19502_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E3);
}

void dmatmult::thread_icmp_ln513_228_fu_19514_p2() {
    icmp_ln513_228_fu_19514_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E4);
}

void dmatmult::thread_icmp_ln513_229_fu_19526_p2() {
    icmp_ln513_229_fu_19526_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E5);
}

void dmatmult::thread_icmp_ln513_22_fu_17046_p2() {
    icmp_ln513_22_fu_17046_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_16.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_16);
}

void dmatmult::thread_icmp_ln513_230_fu_19538_p2() {
    icmp_ln513_230_fu_19538_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E6);
}

void dmatmult::thread_icmp_ln513_231_fu_19550_p2() {
    icmp_ln513_231_fu_19550_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E7);
}

void dmatmult::thread_icmp_ln513_232_fu_19562_p2() {
    icmp_ln513_232_fu_19562_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E8);
}

void dmatmult::thread_icmp_ln513_233_fu_19574_p2() {
    icmp_ln513_233_fu_19574_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_E9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_E9);
}

void dmatmult::thread_icmp_ln513_234_fu_19586_p2() {
    icmp_ln513_234_fu_19586_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_EA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_EA);
}

void dmatmult::thread_icmp_ln513_235_fu_19598_p2() {
    icmp_ln513_235_fu_19598_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_EB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_EB);
}

void dmatmult::thread_icmp_ln513_236_fu_19610_p2() {
    icmp_ln513_236_fu_19610_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_EC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_EC);
}

void dmatmult::thread_icmp_ln513_237_fu_19622_p2() {
    icmp_ln513_237_fu_19622_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_ED.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_ED);
}

void dmatmult::thread_icmp_ln513_238_fu_19634_p2() {
    icmp_ln513_238_fu_19634_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_EE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_EE);
}

void dmatmult::thread_icmp_ln513_239_fu_19646_p2() {
    icmp_ln513_239_fu_19646_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_EF.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_EF);
}

void dmatmult::thread_icmp_ln513_23_fu_17059_p2() {
    icmp_ln513_23_fu_17059_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_17.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_17);
}

void dmatmult::thread_icmp_ln513_240_fu_19658_p2() {
    icmp_ln513_240_fu_19658_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F0);
}

void dmatmult::thread_icmp_ln513_241_fu_19670_p2() {
    icmp_ln513_241_fu_19670_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F1);
}

void dmatmult::thread_icmp_ln513_242_fu_19682_p2() {
    icmp_ln513_242_fu_19682_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F2);
}

void dmatmult::thread_icmp_ln513_243_fu_19694_p2() {
    icmp_ln513_243_fu_19694_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F3);
}

void dmatmult::thread_icmp_ln513_244_fu_19706_p2() {
    icmp_ln513_244_fu_19706_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F4);
}

void dmatmult::thread_icmp_ln513_245_fu_19718_p2() {
    icmp_ln513_245_fu_19718_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F5);
}

void dmatmult::thread_icmp_ln513_246_fu_19730_p2() {
    icmp_ln513_246_fu_19730_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F6);
}

void dmatmult::thread_icmp_ln513_247_fu_19742_p2() {
    icmp_ln513_247_fu_19742_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F7);
}

void dmatmult::thread_icmp_ln513_248_fu_19754_p2() {
    icmp_ln513_248_fu_19754_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F8);
}

void dmatmult::thread_icmp_ln513_249_fu_19766_p2() {
    icmp_ln513_249_fu_19766_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_F9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_F9);
}

void dmatmult::thread_icmp_ln513_24_fu_17072_p2() {
    icmp_ln513_24_fu_17072_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_18.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_18);
}

void dmatmult::thread_icmp_ln513_250_fu_19778_p2() {
    icmp_ln513_250_fu_19778_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_FA.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_FA);
}

void dmatmult::thread_icmp_ln513_251_fu_19790_p2() {
    icmp_ln513_251_fu_19790_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_FB.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_FB);
}

void dmatmult::thread_icmp_ln513_252_fu_19802_p2() {
    icmp_ln513_252_fu_19802_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_FC.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_FC);
}

void dmatmult::thread_icmp_ln513_253_fu_19814_p2() {
    icmp_ln513_253_fu_19814_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_FD.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_FD);
}

void dmatmult::thread_icmp_ln513_254_fu_19826_p2() {
    icmp_ln513_254_fu_19826_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_FE.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_FE);
}

void dmatmult::thread_icmp_ln513_25_fu_17085_p2() {
    icmp_ln513_25_fu_17085_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_19.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_19);
}

void dmatmult::thread_icmp_ln513_26_fu_17098_p2() {
    icmp_ln513_26_fu_17098_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1A);
}

void dmatmult::thread_icmp_ln513_27_fu_17111_p2() {
    icmp_ln513_27_fu_17111_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1B);
}

void dmatmult::thread_icmp_ln513_28_fu_17124_p2() {
    icmp_ln513_28_fu_17124_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1C);
}

void dmatmult::thread_icmp_ln513_29_fu_17137_p2() {
    icmp_ln513_29_fu_17137_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1D);
}

void dmatmult::thread_icmp_ln513_2_fu_16786_p2() {
    icmp_ln513_2_fu_16786_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_2);
}

void dmatmult::thread_icmp_ln513_30_fu_17150_p2() {
    icmp_ln513_30_fu_17150_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1E);
}

void dmatmult::thread_icmp_ln513_31_fu_17163_p2() {
    icmp_ln513_31_fu_17163_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_1F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_1F);
}

void dmatmult::thread_icmp_ln513_32_fu_17176_p2() {
    icmp_ln513_32_fu_17176_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_20.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_20);
}

void dmatmult::thread_icmp_ln513_33_fu_17189_p2() {
    icmp_ln513_33_fu_17189_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_21.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_21);
}

void dmatmult::thread_icmp_ln513_34_fu_17202_p2() {
    icmp_ln513_34_fu_17202_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_22.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_22);
}

void dmatmult::thread_icmp_ln513_35_fu_17208_p2() {
    icmp_ln513_35_fu_17208_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_23.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_23);
}

void dmatmult::thread_icmp_ln513_36_fu_17214_p2() {
    icmp_ln513_36_fu_17214_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_24.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_24);
}

void dmatmult::thread_icmp_ln513_37_fu_17220_p2() {
    icmp_ln513_37_fu_17220_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_25.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_25);
}

void dmatmult::thread_icmp_ln513_38_fu_17255_p2() {
    icmp_ln513_38_fu_17255_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_26.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_26);
}

void dmatmult::thread_icmp_ln513_39_fu_17267_p2() {
    icmp_ln513_39_fu_17267_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_27.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_27);
}

void dmatmult::thread_icmp_ln513_3_fu_16799_p2() {
    icmp_ln513_3_fu_16799_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_3.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_3);
}

void dmatmult::thread_icmp_ln513_40_fu_17279_p2() {
    icmp_ln513_40_fu_17279_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_28.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_28);
}

void dmatmult::thread_icmp_ln513_41_fu_17291_p2() {
    icmp_ln513_41_fu_17291_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_29.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_29);
}

void dmatmult::thread_icmp_ln513_42_fu_17303_p2() {
    icmp_ln513_42_fu_17303_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2A);
}

void dmatmult::thread_icmp_ln513_43_fu_17315_p2() {
    icmp_ln513_43_fu_17315_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2B);
}

void dmatmult::thread_icmp_ln513_44_fu_17327_p2() {
    icmp_ln513_44_fu_17327_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2C);
}

void dmatmult::thread_icmp_ln513_45_fu_17339_p2() {
    icmp_ln513_45_fu_17339_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2D);
}

void dmatmult::thread_icmp_ln513_46_fu_17351_p2() {
    icmp_ln513_46_fu_17351_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2E);
}

void dmatmult::thread_icmp_ln513_47_fu_17363_p2() {
    icmp_ln513_47_fu_17363_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_2F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_2F);
}

void dmatmult::thread_icmp_ln513_48_fu_17375_p2() {
    icmp_ln513_48_fu_17375_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_30.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_30);
}

void dmatmult::thread_icmp_ln513_49_fu_17387_p2() {
    icmp_ln513_49_fu_17387_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_31.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_31);
}

void dmatmult::thread_icmp_ln513_4_fu_16812_p2() {
    icmp_ln513_4_fu_16812_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_4);
}

void dmatmult::thread_icmp_ln513_50_fu_17399_p2() {
    icmp_ln513_50_fu_17399_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_32.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_32);
}

void dmatmult::thread_icmp_ln513_51_fu_17411_p2() {
    icmp_ln513_51_fu_17411_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_33.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_33);
}

void dmatmult::thread_icmp_ln513_52_fu_17423_p2() {
    icmp_ln513_52_fu_17423_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_34.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_34);
}

void dmatmult::thread_icmp_ln513_53_fu_17435_p2() {
    icmp_ln513_53_fu_17435_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_35.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_35);
}

void dmatmult::thread_icmp_ln513_54_fu_17447_p2() {
    icmp_ln513_54_fu_17447_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_36.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_36);
}

void dmatmult::thread_icmp_ln513_55_fu_17459_p2() {
    icmp_ln513_55_fu_17459_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_37.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_37);
}

void dmatmult::thread_icmp_ln513_56_fu_17471_p2() {
    icmp_ln513_56_fu_17471_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_38.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_38);
}

void dmatmult::thread_icmp_ln513_57_fu_17483_p2() {
    icmp_ln513_57_fu_17483_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_39.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_39);
}

void dmatmult::thread_icmp_ln513_58_fu_17495_p2() {
    icmp_ln513_58_fu_17495_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3A);
}

void dmatmult::thread_icmp_ln513_59_fu_17507_p2() {
    icmp_ln513_59_fu_17507_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3B);
}

void dmatmult::thread_icmp_ln513_5_fu_16825_p2() {
    icmp_ln513_5_fu_16825_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_5.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_5);
}

void dmatmult::thread_icmp_ln513_60_fu_17519_p2() {
    icmp_ln513_60_fu_17519_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3C);
}

void dmatmult::thread_icmp_ln513_61_fu_17531_p2() {
    icmp_ln513_61_fu_17531_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3D);
}

void dmatmult::thread_icmp_ln513_62_fu_17543_p2() {
    icmp_ln513_62_fu_17543_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3E);
}

void dmatmult::thread_icmp_ln513_63_fu_17555_p2() {
    icmp_ln513_63_fu_17555_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_3F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_3F);
}

void dmatmult::thread_icmp_ln513_64_fu_17567_p2() {
    icmp_ln513_64_fu_17567_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_40);
}

void dmatmult::thread_icmp_ln513_65_fu_17579_p2() {
    icmp_ln513_65_fu_17579_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_41.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_41);
}

void dmatmult::thread_icmp_ln513_66_fu_17591_p2() {
    icmp_ln513_66_fu_17591_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_42.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_42);
}

void dmatmult::thread_icmp_ln513_67_fu_17603_p2() {
    icmp_ln513_67_fu_17603_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_43.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_43);
}

void dmatmult::thread_icmp_ln513_68_fu_17615_p2() {
    icmp_ln513_68_fu_17615_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_44.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_44);
}

void dmatmult::thread_icmp_ln513_69_fu_17627_p2() {
    icmp_ln513_69_fu_17627_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_45.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_45);
}

void dmatmult::thread_icmp_ln513_6_fu_16838_p2() {
    icmp_ln513_6_fu_16838_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_6.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_6);
}

void dmatmult::thread_icmp_ln513_70_fu_17639_p2() {
    icmp_ln513_70_fu_17639_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_46.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_46);
}

void dmatmult::thread_icmp_ln513_71_fu_17651_p2() {
    icmp_ln513_71_fu_17651_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_47.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_47);
}

void dmatmult::thread_icmp_ln513_72_fu_17663_p2() {
    icmp_ln513_72_fu_17663_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_48.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_48);
}

void dmatmult::thread_icmp_ln513_73_fu_17668_p2() {
    icmp_ln513_73_fu_17668_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_49.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_49);
}

void dmatmult::thread_icmp_ln513_74_fu_17673_p2() {
    icmp_ln513_74_fu_17673_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4A);
}

void dmatmult::thread_icmp_ln513_75_fu_17678_p2() {
    icmp_ln513_75_fu_17678_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4B);
}

void dmatmult::thread_icmp_ln513_76_fu_17706_p2() {
    icmp_ln513_76_fu_17706_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4C);
}

void dmatmult::thread_icmp_ln513_77_fu_17718_p2() {
    icmp_ln513_77_fu_17718_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4D);
}

void dmatmult::thread_icmp_ln513_78_fu_17730_p2() {
    icmp_ln513_78_fu_17730_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4E);
}

void dmatmult::thread_icmp_ln513_79_fu_17742_p2() {
    icmp_ln513_79_fu_17742_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_4F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_4F);
}

void dmatmult::thread_icmp_ln513_7_fu_16851_p2() {
    icmp_ln513_7_fu_16851_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_7.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_7);
}

void dmatmult::thread_icmp_ln513_80_fu_17754_p2() {
    icmp_ln513_80_fu_17754_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_50.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_50);
}

void dmatmult::thread_icmp_ln513_81_fu_17766_p2() {
    icmp_ln513_81_fu_17766_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_51.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_51);
}

void dmatmult::thread_icmp_ln513_82_fu_17778_p2() {
    icmp_ln513_82_fu_17778_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_52.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_52);
}

void dmatmult::thread_icmp_ln513_83_fu_17790_p2() {
    icmp_ln513_83_fu_17790_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_53.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_53);
}

void dmatmult::thread_icmp_ln513_84_fu_17802_p2() {
    icmp_ln513_84_fu_17802_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_54.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_54);
}

void dmatmult::thread_icmp_ln513_85_fu_17814_p2() {
    icmp_ln513_85_fu_17814_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_55.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_55);
}

void dmatmult::thread_icmp_ln513_86_fu_17826_p2() {
    icmp_ln513_86_fu_17826_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_56.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_56);
}

void dmatmult::thread_icmp_ln513_87_fu_17838_p2() {
    icmp_ln513_87_fu_17838_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_57.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_57);
}

void dmatmult::thread_icmp_ln513_88_fu_17850_p2() {
    icmp_ln513_88_fu_17850_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_58.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_58);
}

void dmatmult::thread_icmp_ln513_89_fu_17862_p2() {
    icmp_ln513_89_fu_17862_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_59.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_59);
}

void dmatmult::thread_icmp_ln513_8_fu_16864_p2() {
    icmp_ln513_8_fu_16864_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_8.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_8);
}

void dmatmult::thread_icmp_ln513_90_fu_17874_p2() {
    icmp_ln513_90_fu_17874_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5A.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5A);
}

void dmatmult::thread_icmp_ln513_91_fu_17886_p2() {
    icmp_ln513_91_fu_17886_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5B.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5B);
}

void dmatmult::thread_icmp_ln513_92_fu_17898_p2() {
    icmp_ln513_92_fu_17898_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5C.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5C);
}

void dmatmult::thread_icmp_ln513_93_fu_17910_p2() {
    icmp_ln513_93_fu_17910_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5D.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5D);
}

void dmatmult::thread_icmp_ln513_94_fu_17922_p2() {
    icmp_ln513_94_fu_17922_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5E.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5E);
}

void dmatmult::thread_icmp_ln513_95_fu_17934_p2() {
    icmp_ln513_95_fu_17934_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_5F.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_5F);
}

void dmatmult::thread_icmp_ln513_96_fu_17946_p2() {
    icmp_ln513_96_fu_17946_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_60);
}

void dmatmult::thread_icmp_ln513_97_fu_17958_p2() {
    icmp_ln513_97_fu_17958_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_61.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_61);
}

void dmatmult::thread_icmp_ln513_98_fu_17970_p2() {
    icmp_ln513_98_fu_17970_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_62.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_62);
}

void dmatmult::thread_icmp_ln513_99_fu_17982_p2() {
    icmp_ln513_99_fu_17982_p2 = (!trunc_ln118_reg_22544.read().is_01() || !ap_const_lv8_63.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_reg_22544.read() == ap_const_lv8_63);
}

void dmatmult::thread_icmp_ln513_9_fu_16877_p2() {
    icmp_ln513_9_fu_16877_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_9);
}

void dmatmult::thread_icmp_ln513_fu_16761_p2() {
    icmp_ln513_fu_16761_p2 = (!trunc_ln118_fu_16757_p1.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln118_fu_16757_p1.read() == ap_const_lv8_0);
}

void dmatmult::thread_icmp_ln60_1_fu_11727_p2() {
    icmp_ln60_1_fu_11727_p2 = (!phi_ln60_reg_10636.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln60_reg_10636.read() == ap_const_lv8_FF);
}

void dmatmult::thread_icmp_ln60_fu_11721_p2() {
    icmp_ln60_fu_11721_p2 = (!phi_ln60_1_reg_10648.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln60_1_reg_10648.read() == ap_const_lv8_FF);
}

void dmatmult::thread_icmp_ln63_1_fu_11902_p2() {
    icmp_ln63_1_fu_11902_p2 = (!phi_ln63_reg_10659.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln63_reg_10659.read() == ap_const_lv8_FF);
}

void dmatmult::thread_icmp_ln63_fu_11896_p2() {
    icmp_ln63_fu_11896_p2 = (!phi_ln63_1_reg_10671.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln63_1_reg_10671.read() == ap_const_lv8_FF);
}

void dmatmult::thread_icmp_ln72_fu_11908_p2() {
    icmp_ln72_fu_11908_p2 = (!i_0_reg_10682.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_10682.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln73_fu_11932_p2() {
    icmp_ln73_fu_11932_p2 = (!j_0_reg_10693.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_10693.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln82_fu_12231_p2() {
    icmp_ln82_fu_12231_p2 = (!i9_0_reg_10704.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i9_0_reg_10704.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln83_fu_12255_p2() {
    icmp_ln83_fu_12255_p2 = (!j10_0_reg_10715.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(j10_0_reg_10715.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln93_fu_12554_p2() {
    icmp_ln93_fu_12554_p2 = (!i12_0_reg_10726.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i12_0_reg_10726.read() == ap_const_lv9_100);
}

void dmatmult::thread_icmp_ln94_fu_12566_p2() {
    icmp_ln94_fu_12566_p2 = (!j13_0_reg_10737.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(j13_0_reg_10737.read() == ap_const_lv9_100);
}

void dmatmult::thread_j_1_fu_12572_p2() {
    j_1_fu_12572_p2 = (!j13_0_reg_10737.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j13_0_reg_10737.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_j_2_fu_12261_p2() {
    j_2_fu_12261_p2 = (!j10_0_reg_10715.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j10_0_reg_10715.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_j_3_fu_13902_p2() {
    j_3_fu_13902_p2 = (!j16_0_reg_10759.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j16_0_reg_10759.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_j_fu_11938_p2() {
    j_fu_11938_p2 = (!j_0_reg_10693.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j_0_reg_10693.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void dmatmult::thread_lshr_ln3_fu_12594_p4() {
    lshr_ln3_fu_12594_p4 = i15_0_reg_10748.read().range(8, 7);
}

void dmatmult::thread_out_stream_TDATA() {
    out_stream_TDATA = UnifiedRetVal_i_fu_19831_p3.read();
}

void dmatmult::thread_out_stream_TDATA_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        out_stream_TDATA_blk_n = out_stream_TREADY.read();
    } else {
        out_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void dmatmult::thread_out_stream_TKEEP() {
    out_stream_TKEEP = ap_const_lv4_F;
}

void dmatmult::thread_out_stream_TLAST() {
    out_stream_TLAST = temp_last_V_reg_22790.read();
}

void dmatmult::thread_out_stream_TSTRB() {
    out_stream_TSTRB = ap_const_lv4_F;
}

void dmatmult::thread_out_stream_TVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
         esl_seteq<1,1,1>(out_stream_TREADY.read(), ap_const_logic_1))) {
        out_stream_TVALID = ap_const_logic_1;
    } else {
        out_stream_TVALID = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_0_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_0_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_0_address0 = grp_kernel_mmult_fu_10781_a_M_imag_address0.read();
    } else {
        rxmat_M_imag_0_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_0_ce0 = grp_kernel_mmult_fu_10781_a_M_imag_ce0.read();
    } else {
        rxmat_M_imag_0_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_0_ce1 = grp_kernel_mmult_fu_10781_a_M_imag_ce1.read();
    } else {
        rxmat_M_imag_0_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_0_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_0_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_0)))) {
        rxmat_M_imag_0_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_0_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_100_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_100_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_100_address0 = grp_kernel_mmult_fu_10781_a_M_imag227_address0.read();
    } else {
        rxmat_M_imag_100_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_100_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_100_ce0 = grp_kernel_mmult_fu_10781_a_M_imag227_ce0.read();
    } else {
        rxmat_M_imag_100_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_100_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_100_ce1 = grp_kernel_mmult_fu_10781_a_M_imag227_ce1.read();
    } else {
        rxmat_M_imag_100_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_100_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_100_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_100_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_100_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_100_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_64)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_64)))) {
        rxmat_M_imag_100_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_100_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_101_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_101_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_101_address0 = grp_kernel_mmult_fu_10781_a_M_imag228_address0.read();
    } else {
        rxmat_M_imag_101_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_101_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_101_ce0 = grp_kernel_mmult_fu_10781_a_M_imag228_ce0.read();
    } else {
        rxmat_M_imag_101_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_101_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_101_ce1 = grp_kernel_mmult_fu_10781_a_M_imag228_ce1.read();
    } else {
        rxmat_M_imag_101_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_101_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_101_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_101_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_101_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_101_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_65)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_65)))) {
        rxmat_M_imag_101_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_101_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_102_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_102_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_102_address0 = grp_kernel_mmult_fu_10781_a_M_imag229_address0.read();
    } else {
        rxmat_M_imag_102_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_102_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_102_ce0 = grp_kernel_mmult_fu_10781_a_M_imag229_ce0.read();
    } else {
        rxmat_M_imag_102_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_102_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_102_ce1 = grp_kernel_mmult_fu_10781_a_M_imag229_ce1.read();
    } else {
        rxmat_M_imag_102_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_102_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_102_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_102_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_102_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_102_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_66)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_66)))) {
        rxmat_M_imag_102_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_102_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_103_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_103_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_103_address0 = grp_kernel_mmult_fu_10781_a_M_imag230_address0.read();
    } else {
        rxmat_M_imag_103_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_103_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_103_ce0 = grp_kernel_mmult_fu_10781_a_M_imag230_ce0.read();
    } else {
        rxmat_M_imag_103_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_103_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_103_ce1 = grp_kernel_mmult_fu_10781_a_M_imag230_ce1.read();
    } else {
        rxmat_M_imag_103_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_103_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_103_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_103_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_103_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_103_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_67)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_67)))) {
        rxmat_M_imag_103_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_103_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_104_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_104_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_104_address0 = grp_kernel_mmult_fu_10781_a_M_imag231_address0.read();
    } else {
        rxmat_M_imag_104_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_104_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_104_ce0 = grp_kernel_mmult_fu_10781_a_M_imag231_ce0.read();
    } else {
        rxmat_M_imag_104_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_104_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_104_ce1 = grp_kernel_mmult_fu_10781_a_M_imag231_ce1.read();
    } else {
        rxmat_M_imag_104_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_104_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_104_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_104_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_104_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_104_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_68)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_68)))) {
        rxmat_M_imag_104_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_104_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_105_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_105_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_105_address0 = grp_kernel_mmult_fu_10781_a_M_imag232_address0.read();
    } else {
        rxmat_M_imag_105_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_105_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_105_ce0 = grp_kernel_mmult_fu_10781_a_M_imag232_ce0.read();
    } else {
        rxmat_M_imag_105_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_105_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_105_ce1 = grp_kernel_mmult_fu_10781_a_M_imag232_ce1.read();
    } else {
        rxmat_M_imag_105_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_105_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_105_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_105_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_105_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_105_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_69)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_69)))) {
        rxmat_M_imag_105_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_105_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_106_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_106_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_106_address0 = grp_kernel_mmult_fu_10781_a_M_imag233_address0.read();
    } else {
        rxmat_M_imag_106_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_106_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_106_ce0 = grp_kernel_mmult_fu_10781_a_M_imag233_ce0.read();
    } else {
        rxmat_M_imag_106_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_106_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_106_ce1 = grp_kernel_mmult_fu_10781_a_M_imag233_ce1.read();
    } else {
        rxmat_M_imag_106_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_106_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_106_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_106_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_106_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_106_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6A)))) {
        rxmat_M_imag_106_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_106_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_107_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_107_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_107_address0 = grp_kernel_mmult_fu_10781_a_M_imag234_address0.read();
    } else {
        rxmat_M_imag_107_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_107_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_107_ce0 = grp_kernel_mmult_fu_10781_a_M_imag234_ce0.read();
    } else {
        rxmat_M_imag_107_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_107_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_107_ce1 = grp_kernel_mmult_fu_10781_a_M_imag234_ce1.read();
    } else {
        rxmat_M_imag_107_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_107_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_107_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_107_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_107_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_107_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6B)))) {
        rxmat_M_imag_107_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_107_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_108_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_108_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_108_address0 = grp_kernel_mmult_fu_10781_a_M_imag235_address0.read();
    } else {
        rxmat_M_imag_108_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_108_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_108_ce0 = grp_kernel_mmult_fu_10781_a_M_imag235_ce0.read();
    } else {
        rxmat_M_imag_108_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_108_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_108_ce1 = grp_kernel_mmult_fu_10781_a_M_imag235_ce1.read();
    } else {
        rxmat_M_imag_108_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_108_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_108_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_108_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_108_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_108_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6C)))) {
        rxmat_M_imag_108_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_108_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_109_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_109_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_109_address0 = grp_kernel_mmult_fu_10781_a_M_imag236_address0.read();
    } else {
        rxmat_M_imag_109_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_109_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_109_ce0 = grp_kernel_mmult_fu_10781_a_M_imag236_ce0.read();
    } else {
        rxmat_M_imag_109_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_109_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_109_ce1 = grp_kernel_mmult_fu_10781_a_M_imag236_ce1.read();
    } else {
        rxmat_M_imag_109_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_109_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_109_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_109_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_109_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_109_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6D)))) {
        rxmat_M_imag_109_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_109_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_10_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_10_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_10_address0 = grp_kernel_mmult_fu_10781_a_M_imag137_address0.read();
    } else {
        rxmat_M_imag_10_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_10_ce0 = grp_kernel_mmult_fu_10781_a_M_imag137_ce0.read();
    } else {
        rxmat_M_imag_10_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_10_ce1 = grp_kernel_mmult_fu_10781_a_M_imag137_ce1.read();
    } else {
        rxmat_M_imag_10_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_10_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_10_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_A)))) {
        rxmat_M_imag_10_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_10_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_110_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_110_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_110_address0 = grp_kernel_mmult_fu_10781_a_M_imag237_address0.read();
    } else {
        rxmat_M_imag_110_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_110_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_110_ce0 = grp_kernel_mmult_fu_10781_a_M_imag237_ce0.read();
    } else {
        rxmat_M_imag_110_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_110_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_110_ce1 = grp_kernel_mmult_fu_10781_a_M_imag237_ce1.read();
    } else {
        rxmat_M_imag_110_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_110_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_110_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_110_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_110_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_110_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6E)))) {
        rxmat_M_imag_110_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_110_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_111_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_111_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_111_address0 = grp_kernel_mmult_fu_10781_a_M_imag238_address0.read();
    } else {
        rxmat_M_imag_111_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_111_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_111_ce0 = grp_kernel_mmult_fu_10781_a_M_imag238_ce0.read();
    } else {
        rxmat_M_imag_111_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_111_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_111_ce1 = grp_kernel_mmult_fu_10781_a_M_imag238_ce1.read();
    } else {
        rxmat_M_imag_111_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_111_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_111_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_111_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_111_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_111_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6F)))) {
        rxmat_M_imag_111_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_111_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_112_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_112_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_112_address0 = grp_kernel_mmult_fu_10781_a_M_imag239_address0.read();
    } else {
        rxmat_M_imag_112_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_112_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_112_ce0 = grp_kernel_mmult_fu_10781_a_M_imag239_ce0.read();
    } else {
        rxmat_M_imag_112_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_112_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_112_ce1 = grp_kernel_mmult_fu_10781_a_M_imag239_ce1.read();
    } else {
        rxmat_M_imag_112_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_112_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_112_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_112_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_112_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_112_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_70)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_70)))) {
        rxmat_M_imag_112_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_112_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_113_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_113_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_113_address0 = grp_kernel_mmult_fu_10781_a_M_imag240_address0.read();
    } else {
        rxmat_M_imag_113_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_113_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_113_ce0 = grp_kernel_mmult_fu_10781_a_M_imag240_ce0.read();
    } else {
        rxmat_M_imag_113_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_113_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_113_ce1 = grp_kernel_mmult_fu_10781_a_M_imag240_ce1.read();
    } else {
        rxmat_M_imag_113_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_113_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_113_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_113_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_113_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_113_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_71)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_71)))) {
        rxmat_M_imag_113_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_113_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_114_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_114_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_114_address0 = grp_kernel_mmult_fu_10781_a_M_imag241_address0.read();
    } else {
        rxmat_M_imag_114_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_114_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_114_ce0 = grp_kernel_mmult_fu_10781_a_M_imag241_ce0.read();
    } else {
        rxmat_M_imag_114_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_114_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_114_ce1 = grp_kernel_mmult_fu_10781_a_M_imag241_ce1.read();
    } else {
        rxmat_M_imag_114_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_114_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_114_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_114_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_114_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_114_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_72)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_72)))) {
        rxmat_M_imag_114_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_114_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_115_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_115_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_115_address0 = grp_kernel_mmult_fu_10781_a_M_imag242_address0.read();
    } else {
        rxmat_M_imag_115_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_115_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_115_ce0 = grp_kernel_mmult_fu_10781_a_M_imag242_ce0.read();
    } else {
        rxmat_M_imag_115_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_115_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_115_ce1 = grp_kernel_mmult_fu_10781_a_M_imag242_ce1.read();
    } else {
        rxmat_M_imag_115_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_115_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_115_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_115_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_115_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_115_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_73)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_73)))) {
        rxmat_M_imag_115_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_115_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_116_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_116_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_116_address0 = grp_kernel_mmult_fu_10781_a_M_imag243_address0.read();
    } else {
        rxmat_M_imag_116_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_116_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_116_ce0 = grp_kernel_mmult_fu_10781_a_M_imag243_ce0.read();
    } else {
        rxmat_M_imag_116_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_116_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_116_ce1 = grp_kernel_mmult_fu_10781_a_M_imag243_ce1.read();
    } else {
        rxmat_M_imag_116_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_116_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_116_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_116_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_116_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_116_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_74)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_74)))) {
        rxmat_M_imag_116_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_116_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_117_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_117_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_117_address0 = grp_kernel_mmult_fu_10781_a_M_imag244_address0.read();
    } else {
        rxmat_M_imag_117_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_117_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_117_ce0 = grp_kernel_mmult_fu_10781_a_M_imag244_ce0.read();
    } else {
        rxmat_M_imag_117_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_117_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_117_ce1 = grp_kernel_mmult_fu_10781_a_M_imag244_ce1.read();
    } else {
        rxmat_M_imag_117_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_117_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_117_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_117_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_117_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_117_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_75)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_75)))) {
        rxmat_M_imag_117_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_117_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_118_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_118_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_118_address0 = grp_kernel_mmult_fu_10781_a_M_imag245_address0.read();
    } else {
        rxmat_M_imag_118_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_118_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_118_ce0 = grp_kernel_mmult_fu_10781_a_M_imag245_ce0.read();
    } else {
        rxmat_M_imag_118_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_118_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_118_ce1 = grp_kernel_mmult_fu_10781_a_M_imag245_ce1.read();
    } else {
        rxmat_M_imag_118_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_118_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_118_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_118_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_118_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_118_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_76)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_76)))) {
        rxmat_M_imag_118_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_118_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_119_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_119_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_119_address0 = grp_kernel_mmult_fu_10781_a_M_imag246_address0.read();
    } else {
        rxmat_M_imag_119_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_119_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_119_ce0 = grp_kernel_mmult_fu_10781_a_M_imag246_ce0.read();
    } else {
        rxmat_M_imag_119_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_119_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_119_ce1 = grp_kernel_mmult_fu_10781_a_M_imag246_ce1.read();
    } else {
        rxmat_M_imag_119_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_119_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_119_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_119_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_119_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_119_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_77)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_77)))) {
        rxmat_M_imag_119_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_119_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_11_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_11_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_11_address0 = grp_kernel_mmult_fu_10781_a_M_imag138_address0.read();
    } else {
        rxmat_M_imag_11_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_11_ce0 = grp_kernel_mmult_fu_10781_a_M_imag138_ce0.read();
    } else {
        rxmat_M_imag_11_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_11_ce1 = grp_kernel_mmult_fu_10781_a_M_imag138_ce1.read();
    } else {
        rxmat_M_imag_11_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_11_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_11_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_B)))) {
        rxmat_M_imag_11_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_11_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_120_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_120_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_120_address0 = grp_kernel_mmult_fu_10781_a_M_imag247_address0.read();
    } else {
        rxmat_M_imag_120_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_120_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_120_ce0 = grp_kernel_mmult_fu_10781_a_M_imag247_ce0.read();
    } else {
        rxmat_M_imag_120_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_120_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_120_ce1 = grp_kernel_mmult_fu_10781_a_M_imag247_ce1.read();
    } else {
        rxmat_M_imag_120_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_120_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_120_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_120_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_120_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_120_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_78)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_78)))) {
        rxmat_M_imag_120_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_120_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_121_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_121_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_121_address0 = grp_kernel_mmult_fu_10781_a_M_imag248_address0.read();
    } else {
        rxmat_M_imag_121_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_121_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_121_ce0 = grp_kernel_mmult_fu_10781_a_M_imag248_ce0.read();
    } else {
        rxmat_M_imag_121_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_121_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_121_ce1 = grp_kernel_mmult_fu_10781_a_M_imag248_ce1.read();
    } else {
        rxmat_M_imag_121_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_121_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_121_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_121_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_121_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_121_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_79)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_79)))) {
        rxmat_M_imag_121_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_121_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_122_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_122_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_122_address0 = grp_kernel_mmult_fu_10781_a_M_imag249_address0.read();
    } else {
        rxmat_M_imag_122_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_122_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_122_ce0 = grp_kernel_mmult_fu_10781_a_M_imag249_ce0.read();
    } else {
        rxmat_M_imag_122_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_122_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_122_ce1 = grp_kernel_mmult_fu_10781_a_M_imag249_ce1.read();
    } else {
        rxmat_M_imag_122_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_122_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_122_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_122_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_122_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_122_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7A)))) {
        rxmat_M_imag_122_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_122_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_123_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_123_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_123_address0 = grp_kernel_mmult_fu_10781_a_M_imag250_address0.read();
    } else {
        rxmat_M_imag_123_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_123_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_123_ce0 = grp_kernel_mmult_fu_10781_a_M_imag250_ce0.read();
    } else {
        rxmat_M_imag_123_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_123_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_123_ce1 = grp_kernel_mmult_fu_10781_a_M_imag250_ce1.read();
    } else {
        rxmat_M_imag_123_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_123_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_123_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_123_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_123_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_123_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7B)))) {
        rxmat_M_imag_123_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_123_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_124_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_124_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_124_address0 = grp_kernel_mmult_fu_10781_a_M_imag251_address0.read();
    } else {
        rxmat_M_imag_124_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_124_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_124_ce0 = grp_kernel_mmult_fu_10781_a_M_imag251_ce0.read();
    } else {
        rxmat_M_imag_124_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_124_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_124_ce1 = grp_kernel_mmult_fu_10781_a_M_imag251_ce1.read();
    } else {
        rxmat_M_imag_124_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_124_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_124_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_124_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_124_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_124_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7C)))) {
        rxmat_M_imag_124_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_124_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_125_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_125_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_125_address0 = grp_kernel_mmult_fu_10781_a_M_imag252_address0.read();
    } else {
        rxmat_M_imag_125_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_125_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_125_ce0 = grp_kernel_mmult_fu_10781_a_M_imag252_ce0.read();
    } else {
        rxmat_M_imag_125_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_125_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_125_ce1 = grp_kernel_mmult_fu_10781_a_M_imag252_ce1.read();
    } else {
        rxmat_M_imag_125_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_125_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_125_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_125_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_125_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_125_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7D)))) {
        rxmat_M_imag_125_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_125_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_126_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_126_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_126_address0 = grp_kernel_mmult_fu_10781_a_M_imag253_address0.read();
    } else {
        rxmat_M_imag_126_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_126_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_126_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_126_ce0 = grp_kernel_mmult_fu_10781_a_M_imag253_ce0.read();
    } else {
        rxmat_M_imag_126_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_126_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_126_ce1 = grp_kernel_mmult_fu_10781_a_M_imag253_ce1.read();
    } else {
        rxmat_M_imag_126_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_126_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_126_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_126_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_126_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_126_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(ap_const_lv7_7E, trunc_ln86_fu_12267_p1.read())))) {
        rxmat_M_imag_126_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_126_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_127_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_127_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_127_address0 = grp_kernel_mmult_fu_10781_a_M_imag254_address0.read();
    } else {
        rxmat_M_imag_127_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_127_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_127_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_127_ce0 = grp_kernel_mmult_fu_10781_a_M_imag254_ce0.read();
    } else {
        rxmat_M_imag_127_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_127_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_127_ce1 = grp_kernel_mmult_fu_10781_a_M_imag254_ce1.read();
    } else {
        rxmat_M_imag_127_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_127_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_127_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_127_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_127_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_127_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7F)))) {
        rxmat_M_imag_127_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_127_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_12_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_12_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_12_address0 = grp_kernel_mmult_fu_10781_a_M_imag139_address0.read();
    } else {
        rxmat_M_imag_12_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_12_ce0 = grp_kernel_mmult_fu_10781_a_M_imag139_ce0.read();
    } else {
        rxmat_M_imag_12_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_12_ce1 = grp_kernel_mmult_fu_10781_a_M_imag139_ce1.read();
    } else {
        rxmat_M_imag_12_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_12_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_12_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_C)))) {
        rxmat_M_imag_12_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_12_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_13_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_13_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_13_address0 = grp_kernel_mmult_fu_10781_a_M_imag140_address0.read();
    } else {
        rxmat_M_imag_13_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_13_ce0 = grp_kernel_mmult_fu_10781_a_M_imag140_ce0.read();
    } else {
        rxmat_M_imag_13_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_13_ce1 = grp_kernel_mmult_fu_10781_a_M_imag140_ce1.read();
    } else {
        rxmat_M_imag_13_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_13_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_13_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_D)))) {
        rxmat_M_imag_13_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_13_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_14_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_14_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_14_address0 = grp_kernel_mmult_fu_10781_a_M_imag141_address0.read();
    } else {
        rxmat_M_imag_14_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_14_ce0 = grp_kernel_mmult_fu_10781_a_M_imag141_ce0.read();
    } else {
        rxmat_M_imag_14_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_14_ce1 = grp_kernel_mmult_fu_10781_a_M_imag141_ce1.read();
    } else {
        rxmat_M_imag_14_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_14_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_14_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_E)))) {
        rxmat_M_imag_14_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_14_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_15_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_15_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_15_address0 = grp_kernel_mmult_fu_10781_a_M_imag142_address0.read();
    } else {
        rxmat_M_imag_15_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_15_ce0 = grp_kernel_mmult_fu_10781_a_M_imag142_ce0.read();
    } else {
        rxmat_M_imag_15_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_15_ce1 = grp_kernel_mmult_fu_10781_a_M_imag142_ce1.read();
    } else {
        rxmat_M_imag_15_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_15_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_15_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_F)))) {
        rxmat_M_imag_15_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_15_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_16_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_16_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_16_address0 = grp_kernel_mmult_fu_10781_a_M_imag143_address0.read();
    } else {
        rxmat_M_imag_16_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_16_ce0 = grp_kernel_mmult_fu_10781_a_M_imag143_ce0.read();
    } else {
        rxmat_M_imag_16_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_16_ce1 = grp_kernel_mmult_fu_10781_a_M_imag143_ce1.read();
    } else {
        rxmat_M_imag_16_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_16_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_16_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_16_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_10)))) {
        rxmat_M_imag_16_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_16_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_17_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_17_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_17_address0 = grp_kernel_mmult_fu_10781_a_M_imag144_address0.read();
    } else {
        rxmat_M_imag_17_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_17_ce0 = grp_kernel_mmult_fu_10781_a_M_imag144_ce0.read();
    } else {
        rxmat_M_imag_17_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_17_ce1 = grp_kernel_mmult_fu_10781_a_M_imag144_ce1.read();
    } else {
        rxmat_M_imag_17_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_17_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_17_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_17_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_11)))) {
        rxmat_M_imag_17_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_17_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_18_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_18_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_18_address0 = grp_kernel_mmult_fu_10781_a_M_imag145_address0.read();
    } else {
        rxmat_M_imag_18_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_18_ce0 = grp_kernel_mmult_fu_10781_a_M_imag145_ce0.read();
    } else {
        rxmat_M_imag_18_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_18_ce1 = grp_kernel_mmult_fu_10781_a_M_imag145_ce1.read();
    } else {
        rxmat_M_imag_18_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_18_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_18_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_18_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_12)))) {
        rxmat_M_imag_18_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_18_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_19_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_19_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_19_address0 = grp_kernel_mmult_fu_10781_a_M_imag146_address0.read();
    } else {
        rxmat_M_imag_19_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_19_ce0 = grp_kernel_mmult_fu_10781_a_M_imag146_ce0.read();
    } else {
        rxmat_M_imag_19_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_19_ce1 = grp_kernel_mmult_fu_10781_a_M_imag146_ce1.read();
    } else {
        rxmat_M_imag_19_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_19_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_19_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_19_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_13)))) {
        rxmat_M_imag_19_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_19_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_1_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_1_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_1_address0 = grp_kernel_mmult_fu_10781_a_M_imag128_address0.read();
    } else {
        rxmat_M_imag_1_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_1_ce0 = grp_kernel_mmult_fu_10781_a_M_imag128_ce0.read();
    } else {
        rxmat_M_imag_1_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_1_ce1 = grp_kernel_mmult_fu_10781_a_M_imag128_ce1.read();
    } else {
        rxmat_M_imag_1_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_1_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_1_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1)))) {
        rxmat_M_imag_1_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_1_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_20_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_20_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_20_address0 = grp_kernel_mmult_fu_10781_a_M_imag147_address0.read();
    } else {
        rxmat_M_imag_20_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_20_ce0 = grp_kernel_mmult_fu_10781_a_M_imag147_ce0.read();
    } else {
        rxmat_M_imag_20_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_20_ce1 = grp_kernel_mmult_fu_10781_a_M_imag147_ce1.read();
    } else {
        rxmat_M_imag_20_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_20_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_20_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_20_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_14)))) {
        rxmat_M_imag_20_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_20_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_21_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_21_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_21_address0 = grp_kernel_mmult_fu_10781_a_M_imag148_address0.read();
    } else {
        rxmat_M_imag_21_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_21_ce0 = grp_kernel_mmult_fu_10781_a_M_imag148_ce0.read();
    } else {
        rxmat_M_imag_21_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_21_ce1 = grp_kernel_mmult_fu_10781_a_M_imag148_ce1.read();
    } else {
        rxmat_M_imag_21_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_21_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_21_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_21_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_15)))) {
        rxmat_M_imag_21_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_21_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_22_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_22_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_22_address0 = grp_kernel_mmult_fu_10781_a_M_imag149_address0.read();
    } else {
        rxmat_M_imag_22_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_22_ce0 = grp_kernel_mmult_fu_10781_a_M_imag149_ce0.read();
    } else {
        rxmat_M_imag_22_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_22_ce1 = grp_kernel_mmult_fu_10781_a_M_imag149_ce1.read();
    } else {
        rxmat_M_imag_22_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_22_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_22_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_22_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_16)))) {
        rxmat_M_imag_22_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_22_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_23_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_23_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_23_address0 = grp_kernel_mmult_fu_10781_a_M_imag150_address0.read();
    } else {
        rxmat_M_imag_23_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_23_ce0 = grp_kernel_mmult_fu_10781_a_M_imag150_ce0.read();
    } else {
        rxmat_M_imag_23_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_23_ce1 = grp_kernel_mmult_fu_10781_a_M_imag150_ce1.read();
    } else {
        rxmat_M_imag_23_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_23_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_23_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_23_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_17)))) {
        rxmat_M_imag_23_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_23_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_24_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_24_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_24_address0 = grp_kernel_mmult_fu_10781_a_M_imag151_address0.read();
    } else {
        rxmat_M_imag_24_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_24_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_24_ce0 = grp_kernel_mmult_fu_10781_a_M_imag151_ce0.read();
    } else {
        rxmat_M_imag_24_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_24_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_24_ce1 = grp_kernel_mmult_fu_10781_a_M_imag151_ce1.read();
    } else {
        rxmat_M_imag_24_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_24_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_24_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_24_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_18)))) {
        rxmat_M_imag_24_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_24_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_25_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_25_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_25_address0 = grp_kernel_mmult_fu_10781_a_M_imag152_address0.read();
    } else {
        rxmat_M_imag_25_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_25_ce0 = grp_kernel_mmult_fu_10781_a_M_imag152_ce0.read();
    } else {
        rxmat_M_imag_25_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_25_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_25_ce1 = grp_kernel_mmult_fu_10781_a_M_imag152_ce1.read();
    } else {
        rxmat_M_imag_25_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_25_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_25_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_25_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_19)))) {
        rxmat_M_imag_25_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_25_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_26_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_26_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_26_address0 = grp_kernel_mmult_fu_10781_a_M_imag153_address0.read();
    } else {
        rxmat_M_imag_26_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_26_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_26_ce0 = grp_kernel_mmult_fu_10781_a_M_imag153_ce0.read();
    } else {
        rxmat_M_imag_26_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_26_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_26_ce1 = grp_kernel_mmult_fu_10781_a_M_imag153_ce1.read();
    } else {
        rxmat_M_imag_26_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_26_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_26_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_26_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1A)))) {
        rxmat_M_imag_26_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_26_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_27_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_27_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_27_address0 = grp_kernel_mmult_fu_10781_a_M_imag154_address0.read();
    } else {
        rxmat_M_imag_27_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_27_ce0 = grp_kernel_mmult_fu_10781_a_M_imag154_ce0.read();
    } else {
        rxmat_M_imag_27_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_27_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_27_ce1 = grp_kernel_mmult_fu_10781_a_M_imag154_ce1.read();
    } else {
        rxmat_M_imag_27_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_27_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_27_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_27_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1B)))) {
        rxmat_M_imag_27_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_27_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_28_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_28_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_28_address0 = grp_kernel_mmult_fu_10781_a_M_imag155_address0.read();
    } else {
        rxmat_M_imag_28_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_28_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_28_ce0 = grp_kernel_mmult_fu_10781_a_M_imag155_ce0.read();
    } else {
        rxmat_M_imag_28_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_28_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_28_ce1 = grp_kernel_mmult_fu_10781_a_M_imag155_ce1.read();
    } else {
        rxmat_M_imag_28_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_28_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_28_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_28_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1C)))) {
        rxmat_M_imag_28_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_28_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_29_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_29_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_29_address0 = grp_kernel_mmult_fu_10781_a_M_imag156_address0.read();
    } else {
        rxmat_M_imag_29_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_29_ce0 = grp_kernel_mmult_fu_10781_a_M_imag156_ce0.read();
    } else {
        rxmat_M_imag_29_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_29_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_29_ce1 = grp_kernel_mmult_fu_10781_a_M_imag156_ce1.read();
    } else {
        rxmat_M_imag_29_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_29_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_29_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_29_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1D)))) {
        rxmat_M_imag_29_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_29_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_2_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_2_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_2_address0 = grp_kernel_mmult_fu_10781_a_M_imag129_address0.read();
    } else {
        rxmat_M_imag_2_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_2_ce0 = grp_kernel_mmult_fu_10781_a_M_imag129_ce0.read();
    } else {
        rxmat_M_imag_2_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_2_ce1 = grp_kernel_mmult_fu_10781_a_M_imag129_ce1.read();
    } else {
        rxmat_M_imag_2_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_2_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_2_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2)))) {
        rxmat_M_imag_2_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_2_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_30_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_30_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_30_address0 = grp_kernel_mmult_fu_10781_a_M_imag157_address0.read();
    } else {
        rxmat_M_imag_30_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_30_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_30_ce0 = grp_kernel_mmult_fu_10781_a_M_imag157_ce0.read();
    } else {
        rxmat_M_imag_30_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_30_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_30_ce1 = grp_kernel_mmult_fu_10781_a_M_imag157_ce1.read();
    } else {
        rxmat_M_imag_30_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_30_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_30_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_30_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1E)))) {
        rxmat_M_imag_30_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_30_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_31_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_31_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_31_address0 = grp_kernel_mmult_fu_10781_a_M_imag158_address0.read();
    } else {
        rxmat_M_imag_31_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_31_ce0 = grp_kernel_mmult_fu_10781_a_M_imag158_ce0.read();
    } else {
        rxmat_M_imag_31_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_31_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_31_ce1 = grp_kernel_mmult_fu_10781_a_M_imag158_ce1.read();
    } else {
        rxmat_M_imag_31_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_31_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_31_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_31_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_1F)))) {
        rxmat_M_imag_31_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_31_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_32_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_32_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_32_address0 = grp_kernel_mmult_fu_10781_a_M_imag159_address0.read();
    } else {
        rxmat_M_imag_32_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_32_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_32_ce0 = grp_kernel_mmult_fu_10781_a_M_imag159_ce0.read();
    } else {
        rxmat_M_imag_32_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_32_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_32_ce1 = grp_kernel_mmult_fu_10781_a_M_imag159_ce1.read();
    } else {
        rxmat_M_imag_32_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_32_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_32_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_32_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_20)))) {
        rxmat_M_imag_32_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_32_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_33_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_33_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_33_address0 = grp_kernel_mmult_fu_10781_a_M_imag160_address0.read();
    } else {
        rxmat_M_imag_33_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_33_ce0 = grp_kernel_mmult_fu_10781_a_M_imag160_ce0.read();
    } else {
        rxmat_M_imag_33_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_33_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_33_ce1 = grp_kernel_mmult_fu_10781_a_M_imag160_ce1.read();
    } else {
        rxmat_M_imag_33_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_33_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_33_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_33_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_21)))) {
        rxmat_M_imag_33_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_33_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_34_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_34_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_34_address0 = grp_kernel_mmult_fu_10781_a_M_imag161_address0.read();
    } else {
        rxmat_M_imag_34_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_34_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_34_ce0 = grp_kernel_mmult_fu_10781_a_M_imag161_ce0.read();
    } else {
        rxmat_M_imag_34_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_34_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_34_ce1 = grp_kernel_mmult_fu_10781_a_M_imag161_ce1.read();
    } else {
        rxmat_M_imag_34_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_34_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_34_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_34_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_22)))) {
        rxmat_M_imag_34_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_34_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_35_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_35_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_35_address0 = grp_kernel_mmult_fu_10781_a_M_imag162_address0.read();
    } else {
        rxmat_M_imag_35_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_35_ce0 = grp_kernel_mmult_fu_10781_a_M_imag162_ce0.read();
    } else {
        rxmat_M_imag_35_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_35_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_35_ce1 = grp_kernel_mmult_fu_10781_a_M_imag162_ce1.read();
    } else {
        rxmat_M_imag_35_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_35_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_35_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_35_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_23)))) {
        rxmat_M_imag_35_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_35_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_36_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_36_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_36_address0 = grp_kernel_mmult_fu_10781_a_M_imag163_address0.read();
    } else {
        rxmat_M_imag_36_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_36_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_36_ce0 = grp_kernel_mmult_fu_10781_a_M_imag163_ce0.read();
    } else {
        rxmat_M_imag_36_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_36_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_36_ce1 = grp_kernel_mmult_fu_10781_a_M_imag163_ce1.read();
    } else {
        rxmat_M_imag_36_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_36_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_36_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_36_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_24)))) {
        rxmat_M_imag_36_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_36_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_37_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_37_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_37_address0 = grp_kernel_mmult_fu_10781_a_M_imag164_address0.read();
    } else {
        rxmat_M_imag_37_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_37_ce0 = grp_kernel_mmult_fu_10781_a_M_imag164_ce0.read();
    } else {
        rxmat_M_imag_37_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_37_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_37_ce1 = grp_kernel_mmult_fu_10781_a_M_imag164_ce1.read();
    } else {
        rxmat_M_imag_37_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_37_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_37_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_37_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_25)))) {
        rxmat_M_imag_37_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_37_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_38_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_38_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_38_address0 = grp_kernel_mmult_fu_10781_a_M_imag165_address0.read();
    } else {
        rxmat_M_imag_38_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_38_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_38_ce0 = grp_kernel_mmult_fu_10781_a_M_imag165_ce0.read();
    } else {
        rxmat_M_imag_38_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_38_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_38_ce1 = grp_kernel_mmult_fu_10781_a_M_imag165_ce1.read();
    } else {
        rxmat_M_imag_38_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_38_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_38_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_38_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_26)))) {
        rxmat_M_imag_38_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_38_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_39_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_39_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_39_address0 = grp_kernel_mmult_fu_10781_a_M_imag166_address0.read();
    } else {
        rxmat_M_imag_39_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_39_ce0 = grp_kernel_mmult_fu_10781_a_M_imag166_ce0.read();
    } else {
        rxmat_M_imag_39_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_39_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_39_ce1 = grp_kernel_mmult_fu_10781_a_M_imag166_ce1.read();
    } else {
        rxmat_M_imag_39_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_39_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_39_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_39_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_27)))) {
        rxmat_M_imag_39_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_39_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_3_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_3_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_3_address0 = grp_kernel_mmult_fu_10781_a_M_imag130_address0.read();
    } else {
        rxmat_M_imag_3_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_3_ce0 = grp_kernel_mmult_fu_10781_a_M_imag130_ce0.read();
    } else {
        rxmat_M_imag_3_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_3_ce1 = grp_kernel_mmult_fu_10781_a_M_imag130_ce1.read();
    } else {
        rxmat_M_imag_3_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_3_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_3_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3)))) {
        rxmat_M_imag_3_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_3_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_40_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_40_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_40_address0 = grp_kernel_mmult_fu_10781_a_M_imag167_address0.read();
    } else {
        rxmat_M_imag_40_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_40_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_40_ce0 = grp_kernel_mmult_fu_10781_a_M_imag167_ce0.read();
    } else {
        rxmat_M_imag_40_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_40_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_40_ce1 = grp_kernel_mmult_fu_10781_a_M_imag167_ce1.read();
    } else {
        rxmat_M_imag_40_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_40_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_40_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_40_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_28)))) {
        rxmat_M_imag_40_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_40_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_41_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_41_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_41_address0 = grp_kernel_mmult_fu_10781_a_M_imag168_address0.read();
    } else {
        rxmat_M_imag_41_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_41_ce0 = grp_kernel_mmult_fu_10781_a_M_imag168_ce0.read();
    } else {
        rxmat_M_imag_41_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_41_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_41_ce1 = grp_kernel_mmult_fu_10781_a_M_imag168_ce1.read();
    } else {
        rxmat_M_imag_41_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_41_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_41_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_41_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_29)))) {
        rxmat_M_imag_41_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_41_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_42_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_42_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_42_address0 = grp_kernel_mmult_fu_10781_a_M_imag169_address0.read();
    } else {
        rxmat_M_imag_42_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_42_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_42_ce0 = grp_kernel_mmult_fu_10781_a_M_imag169_ce0.read();
    } else {
        rxmat_M_imag_42_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_42_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_42_ce1 = grp_kernel_mmult_fu_10781_a_M_imag169_ce1.read();
    } else {
        rxmat_M_imag_42_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_42_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_42_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_42_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2A)))) {
        rxmat_M_imag_42_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_42_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_43_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_43_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_43_address0 = grp_kernel_mmult_fu_10781_a_M_imag170_address0.read();
    } else {
        rxmat_M_imag_43_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_43_ce0 = grp_kernel_mmult_fu_10781_a_M_imag170_ce0.read();
    } else {
        rxmat_M_imag_43_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_43_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_43_ce1 = grp_kernel_mmult_fu_10781_a_M_imag170_ce1.read();
    } else {
        rxmat_M_imag_43_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_43_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_43_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_43_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2B)))) {
        rxmat_M_imag_43_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_43_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_44_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_44_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_44_address0 = grp_kernel_mmult_fu_10781_a_M_imag171_address0.read();
    } else {
        rxmat_M_imag_44_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_44_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_44_ce0 = grp_kernel_mmult_fu_10781_a_M_imag171_ce0.read();
    } else {
        rxmat_M_imag_44_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_44_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_44_ce1 = grp_kernel_mmult_fu_10781_a_M_imag171_ce1.read();
    } else {
        rxmat_M_imag_44_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_44_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_44_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_44_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2C)))) {
        rxmat_M_imag_44_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_44_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_45_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_45_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_45_address0 = grp_kernel_mmult_fu_10781_a_M_imag172_address0.read();
    } else {
        rxmat_M_imag_45_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_45_ce0 = grp_kernel_mmult_fu_10781_a_M_imag172_ce0.read();
    } else {
        rxmat_M_imag_45_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_45_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_45_ce1 = grp_kernel_mmult_fu_10781_a_M_imag172_ce1.read();
    } else {
        rxmat_M_imag_45_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_45_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_45_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_45_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2D)))) {
        rxmat_M_imag_45_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_45_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_46_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_46_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_46_address0 = grp_kernel_mmult_fu_10781_a_M_imag173_address0.read();
    } else {
        rxmat_M_imag_46_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_46_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_46_ce0 = grp_kernel_mmult_fu_10781_a_M_imag173_ce0.read();
    } else {
        rxmat_M_imag_46_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_46_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_46_ce1 = grp_kernel_mmult_fu_10781_a_M_imag173_ce1.read();
    } else {
        rxmat_M_imag_46_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_46_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_46_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_46_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2E)))) {
        rxmat_M_imag_46_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_46_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_47_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_47_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_47_address0 = grp_kernel_mmult_fu_10781_a_M_imag174_address0.read();
    } else {
        rxmat_M_imag_47_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_47_ce0 = grp_kernel_mmult_fu_10781_a_M_imag174_ce0.read();
    } else {
        rxmat_M_imag_47_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_47_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_47_ce1 = grp_kernel_mmult_fu_10781_a_M_imag174_ce1.read();
    } else {
        rxmat_M_imag_47_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_47_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_47_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_47_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_2F)))) {
        rxmat_M_imag_47_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_47_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_48_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_48_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_48_address0 = grp_kernel_mmult_fu_10781_a_M_imag175_address0.read();
    } else {
        rxmat_M_imag_48_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_48_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_48_ce0 = grp_kernel_mmult_fu_10781_a_M_imag175_ce0.read();
    } else {
        rxmat_M_imag_48_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_48_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_48_ce1 = grp_kernel_mmult_fu_10781_a_M_imag175_ce1.read();
    } else {
        rxmat_M_imag_48_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_48_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_48_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_48_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_48_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_48_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_30)))) {
        rxmat_M_imag_48_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_48_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_49_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_49_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_49_address0 = grp_kernel_mmult_fu_10781_a_M_imag176_address0.read();
    } else {
        rxmat_M_imag_49_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_49_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_49_ce0 = grp_kernel_mmult_fu_10781_a_M_imag176_ce0.read();
    } else {
        rxmat_M_imag_49_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_49_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_49_ce1 = grp_kernel_mmult_fu_10781_a_M_imag176_ce1.read();
    } else {
        rxmat_M_imag_49_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_49_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_49_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_49_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_49_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_49_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_31)))) {
        rxmat_M_imag_49_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_49_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_4_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_4_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_4_address0 = grp_kernel_mmult_fu_10781_a_M_imag131_address0.read();
    } else {
        rxmat_M_imag_4_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_4_ce0 = grp_kernel_mmult_fu_10781_a_M_imag131_ce0.read();
    } else {
        rxmat_M_imag_4_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_4_ce1 = grp_kernel_mmult_fu_10781_a_M_imag131_ce1.read();
    } else {
        rxmat_M_imag_4_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_4_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_4_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4)))) {
        rxmat_M_imag_4_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_4_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_50_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_50_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_50_address0 = grp_kernel_mmult_fu_10781_a_M_imag177_address0.read();
    } else {
        rxmat_M_imag_50_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_50_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_50_ce0 = grp_kernel_mmult_fu_10781_a_M_imag177_ce0.read();
    } else {
        rxmat_M_imag_50_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_50_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_50_ce1 = grp_kernel_mmult_fu_10781_a_M_imag177_ce1.read();
    } else {
        rxmat_M_imag_50_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_50_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_50_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_50_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_50_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_50_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_32)))) {
        rxmat_M_imag_50_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_50_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_51_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_51_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_51_address0 = grp_kernel_mmult_fu_10781_a_M_imag178_address0.read();
    } else {
        rxmat_M_imag_51_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_51_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_51_ce0 = grp_kernel_mmult_fu_10781_a_M_imag178_ce0.read();
    } else {
        rxmat_M_imag_51_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_51_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_51_ce1 = grp_kernel_mmult_fu_10781_a_M_imag178_ce1.read();
    } else {
        rxmat_M_imag_51_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_51_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_51_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_51_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_51_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_51_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_33)))) {
        rxmat_M_imag_51_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_51_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_52_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_52_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_52_address0 = grp_kernel_mmult_fu_10781_a_M_imag179_address0.read();
    } else {
        rxmat_M_imag_52_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_52_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_52_ce0 = grp_kernel_mmult_fu_10781_a_M_imag179_ce0.read();
    } else {
        rxmat_M_imag_52_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_52_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_52_ce1 = grp_kernel_mmult_fu_10781_a_M_imag179_ce1.read();
    } else {
        rxmat_M_imag_52_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_52_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_52_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_52_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_52_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_52_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_34)))) {
        rxmat_M_imag_52_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_52_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_53_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_53_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_53_address0 = grp_kernel_mmult_fu_10781_a_M_imag180_address0.read();
    } else {
        rxmat_M_imag_53_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_53_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_53_ce0 = grp_kernel_mmult_fu_10781_a_M_imag180_ce0.read();
    } else {
        rxmat_M_imag_53_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_53_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_53_ce1 = grp_kernel_mmult_fu_10781_a_M_imag180_ce1.read();
    } else {
        rxmat_M_imag_53_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_53_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_53_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_53_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_53_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_53_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_35)))) {
        rxmat_M_imag_53_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_53_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_54_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_54_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_54_address0 = grp_kernel_mmult_fu_10781_a_M_imag181_address0.read();
    } else {
        rxmat_M_imag_54_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_54_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_54_ce0 = grp_kernel_mmult_fu_10781_a_M_imag181_ce0.read();
    } else {
        rxmat_M_imag_54_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_54_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_54_ce1 = grp_kernel_mmult_fu_10781_a_M_imag181_ce1.read();
    } else {
        rxmat_M_imag_54_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_54_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_54_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_54_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_54_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_54_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_36)))) {
        rxmat_M_imag_54_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_54_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_55_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_55_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_55_address0 = grp_kernel_mmult_fu_10781_a_M_imag182_address0.read();
    } else {
        rxmat_M_imag_55_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_55_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_55_ce0 = grp_kernel_mmult_fu_10781_a_M_imag182_ce0.read();
    } else {
        rxmat_M_imag_55_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_55_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_55_ce1 = grp_kernel_mmult_fu_10781_a_M_imag182_ce1.read();
    } else {
        rxmat_M_imag_55_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_55_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_55_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_55_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_55_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_55_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_37)))) {
        rxmat_M_imag_55_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_55_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_56_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_56_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_56_address0 = grp_kernel_mmult_fu_10781_a_M_imag183_address0.read();
    } else {
        rxmat_M_imag_56_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_56_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_56_ce0 = grp_kernel_mmult_fu_10781_a_M_imag183_ce0.read();
    } else {
        rxmat_M_imag_56_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_56_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_56_ce1 = grp_kernel_mmult_fu_10781_a_M_imag183_ce1.read();
    } else {
        rxmat_M_imag_56_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_56_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_56_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_56_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_56_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_56_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_38)))) {
        rxmat_M_imag_56_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_56_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_57_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_57_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_57_address0 = grp_kernel_mmult_fu_10781_a_M_imag184_address0.read();
    } else {
        rxmat_M_imag_57_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_57_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_57_ce0 = grp_kernel_mmult_fu_10781_a_M_imag184_ce0.read();
    } else {
        rxmat_M_imag_57_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_57_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_57_ce1 = grp_kernel_mmult_fu_10781_a_M_imag184_ce1.read();
    } else {
        rxmat_M_imag_57_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_57_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_57_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_57_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_57_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_57_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_39)))) {
        rxmat_M_imag_57_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_57_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_58_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_58_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_58_address0 = grp_kernel_mmult_fu_10781_a_M_imag185_address0.read();
    } else {
        rxmat_M_imag_58_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_58_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_58_ce0 = grp_kernel_mmult_fu_10781_a_M_imag185_ce0.read();
    } else {
        rxmat_M_imag_58_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_58_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_58_ce1 = grp_kernel_mmult_fu_10781_a_M_imag185_ce1.read();
    } else {
        rxmat_M_imag_58_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_58_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_58_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_58_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_58_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_58_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3A)))) {
        rxmat_M_imag_58_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_58_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_59_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_59_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_59_address0 = grp_kernel_mmult_fu_10781_a_M_imag186_address0.read();
    } else {
        rxmat_M_imag_59_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_59_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_59_ce0 = grp_kernel_mmult_fu_10781_a_M_imag186_ce0.read();
    } else {
        rxmat_M_imag_59_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_59_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_59_ce1 = grp_kernel_mmult_fu_10781_a_M_imag186_ce1.read();
    } else {
        rxmat_M_imag_59_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_59_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_59_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_59_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_59_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_59_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3B)))) {
        rxmat_M_imag_59_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_59_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_5_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_5_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_5_address0 = grp_kernel_mmult_fu_10781_a_M_imag132_address0.read();
    } else {
        rxmat_M_imag_5_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_5_ce0 = grp_kernel_mmult_fu_10781_a_M_imag132_ce0.read();
    } else {
        rxmat_M_imag_5_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_5_ce1 = grp_kernel_mmult_fu_10781_a_M_imag132_ce1.read();
    } else {
        rxmat_M_imag_5_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_5_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_5_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5)))) {
        rxmat_M_imag_5_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_5_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_60_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_60_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_60_address0 = grp_kernel_mmult_fu_10781_a_M_imag187_address0.read();
    } else {
        rxmat_M_imag_60_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_60_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_60_ce0 = grp_kernel_mmult_fu_10781_a_M_imag187_ce0.read();
    } else {
        rxmat_M_imag_60_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_60_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_60_ce1 = grp_kernel_mmult_fu_10781_a_M_imag187_ce1.read();
    } else {
        rxmat_M_imag_60_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_60_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_60_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_60_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_60_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_60_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3C)))) {
        rxmat_M_imag_60_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_60_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_61_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_61_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_61_address0 = grp_kernel_mmult_fu_10781_a_M_imag188_address0.read();
    } else {
        rxmat_M_imag_61_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_61_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_61_ce0 = grp_kernel_mmult_fu_10781_a_M_imag188_ce0.read();
    } else {
        rxmat_M_imag_61_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_61_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_61_ce1 = grp_kernel_mmult_fu_10781_a_M_imag188_ce1.read();
    } else {
        rxmat_M_imag_61_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_61_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_61_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_61_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_61_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_61_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3D)))) {
        rxmat_M_imag_61_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_61_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_62_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_62_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_62_address0 = grp_kernel_mmult_fu_10781_a_M_imag189_address0.read();
    } else {
        rxmat_M_imag_62_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_62_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_62_ce0 = grp_kernel_mmult_fu_10781_a_M_imag189_ce0.read();
    } else {
        rxmat_M_imag_62_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_62_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_62_ce1 = grp_kernel_mmult_fu_10781_a_M_imag189_ce1.read();
    } else {
        rxmat_M_imag_62_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_62_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_62_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_62_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_62_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_62_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3E)))) {
        rxmat_M_imag_62_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_62_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_63_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_63_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_63_address0 = grp_kernel_mmult_fu_10781_a_M_imag190_address0.read();
    } else {
        rxmat_M_imag_63_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_63_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_63_ce0 = grp_kernel_mmult_fu_10781_a_M_imag190_ce0.read();
    } else {
        rxmat_M_imag_63_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_63_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_63_ce1 = grp_kernel_mmult_fu_10781_a_M_imag190_ce1.read();
    } else {
        rxmat_M_imag_63_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_63_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_63_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_63_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_63_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_63_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_3F)))) {
        rxmat_M_imag_63_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_63_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_64_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_64_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_64_address0 = grp_kernel_mmult_fu_10781_a_M_imag191_address0.read();
    } else {
        rxmat_M_imag_64_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_64_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_64_ce0 = grp_kernel_mmult_fu_10781_a_M_imag191_ce0.read();
    } else {
        rxmat_M_imag_64_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_64_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_64_ce1 = grp_kernel_mmult_fu_10781_a_M_imag191_ce1.read();
    } else {
        rxmat_M_imag_64_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_64_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_64_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_64_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_64_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_64_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_40)))) {
        rxmat_M_imag_64_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_64_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_65_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_65_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_65_address0 = grp_kernel_mmult_fu_10781_a_M_imag192_address0.read();
    } else {
        rxmat_M_imag_65_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_65_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_65_ce0 = grp_kernel_mmult_fu_10781_a_M_imag192_ce0.read();
    } else {
        rxmat_M_imag_65_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_65_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_65_ce1 = grp_kernel_mmult_fu_10781_a_M_imag192_ce1.read();
    } else {
        rxmat_M_imag_65_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_65_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_65_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_65_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_65_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_65_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_41)))) {
        rxmat_M_imag_65_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_65_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_66_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_66_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_66_address0 = grp_kernel_mmult_fu_10781_a_M_imag193_address0.read();
    } else {
        rxmat_M_imag_66_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_66_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_66_ce0 = grp_kernel_mmult_fu_10781_a_M_imag193_ce0.read();
    } else {
        rxmat_M_imag_66_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_66_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_66_ce1 = grp_kernel_mmult_fu_10781_a_M_imag193_ce1.read();
    } else {
        rxmat_M_imag_66_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_66_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_66_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_66_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_66_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_66_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_42)))) {
        rxmat_M_imag_66_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_66_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_67_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_67_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_67_address0 = grp_kernel_mmult_fu_10781_a_M_imag194_address0.read();
    } else {
        rxmat_M_imag_67_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_67_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_67_ce0 = grp_kernel_mmult_fu_10781_a_M_imag194_ce0.read();
    } else {
        rxmat_M_imag_67_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_67_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_67_ce1 = grp_kernel_mmult_fu_10781_a_M_imag194_ce1.read();
    } else {
        rxmat_M_imag_67_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_67_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_67_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_67_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_67_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_67_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_43)))) {
        rxmat_M_imag_67_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_67_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_68_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_68_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_68_address0 = grp_kernel_mmult_fu_10781_a_M_imag195_address0.read();
    } else {
        rxmat_M_imag_68_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_68_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_68_ce0 = grp_kernel_mmult_fu_10781_a_M_imag195_ce0.read();
    } else {
        rxmat_M_imag_68_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_68_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_68_ce1 = grp_kernel_mmult_fu_10781_a_M_imag195_ce1.read();
    } else {
        rxmat_M_imag_68_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_68_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_68_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_68_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_68_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_68_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_44)))) {
        rxmat_M_imag_68_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_68_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_69_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_69_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_69_address0 = grp_kernel_mmult_fu_10781_a_M_imag196_address0.read();
    } else {
        rxmat_M_imag_69_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_69_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_69_ce0 = grp_kernel_mmult_fu_10781_a_M_imag196_ce0.read();
    } else {
        rxmat_M_imag_69_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_69_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_69_ce1 = grp_kernel_mmult_fu_10781_a_M_imag196_ce1.read();
    } else {
        rxmat_M_imag_69_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_69_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_69_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_69_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_69_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_69_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_45)))) {
        rxmat_M_imag_69_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_69_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_6_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_6_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_6_address0 = grp_kernel_mmult_fu_10781_a_M_imag133_address0.read();
    } else {
        rxmat_M_imag_6_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_6_ce0 = grp_kernel_mmult_fu_10781_a_M_imag133_ce0.read();
    } else {
        rxmat_M_imag_6_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_6_ce1 = grp_kernel_mmult_fu_10781_a_M_imag133_ce1.read();
    } else {
        rxmat_M_imag_6_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_6_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_6_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_6)))) {
        rxmat_M_imag_6_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_6_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_70_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_70_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_70_address0 = grp_kernel_mmult_fu_10781_a_M_imag197_address0.read();
    } else {
        rxmat_M_imag_70_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_70_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_70_ce0 = grp_kernel_mmult_fu_10781_a_M_imag197_ce0.read();
    } else {
        rxmat_M_imag_70_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_70_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_70_ce1 = grp_kernel_mmult_fu_10781_a_M_imag197_ce1.read();
    } else {
        rxmat_M_imag_70_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_70_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_70_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_70_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_70_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_70_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_46)))) {
        rxmat_M_imag_70_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_70_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_71_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_71_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_71_address0 = grp_kernel_mmult_fu_10781_a_M_imag198_address0.read();
    } else {
        rxmat_M_imag_71_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_71_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_71_ce0 = grp_kernel_mmult_fu_10781_a_M_imag198_ce0.read();
    } else {
        rxmat_M_imag_71_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_71_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_71_ce1 = grp_kernel_mmult_fu_10781_a_M_imag198_ce1.read();
    } else {
        rxmat_M_imag_71_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_71_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_71_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_71_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_71_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_71_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_47)))) {
        rxmat_M_imag_71_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_71_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_72_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_72_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_72_address0 = grp_kernel_mmult_fu_10781_a_M_imag199_address0.read();
    } else {
        rxmat_M_imag_72_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_72_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_72_ce0 = grp_kernel_mmult_fu_10781_a_M_imag199_ce0.read();
    } else {
        rxmat_M_imag_72_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_72_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_72_ce1 = grp_kernel_mmult_fu_10781_a_M_imag199_ce1.read();
    } else {
        rxmat_M_imag_72_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_72_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_72_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_72_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_72_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_72_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_48)))) {
        rxmat_M_imag_72_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_72_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_73_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_73_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_73_address0 = grp_kernel_mmult_fu_10781_a_M_imag200_address0.read();
    } else {
        rxmat_M_imag_73_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_73_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_73_ce0 = grp_kernel_mmult_fu_10781_a_M_imag200_ce0.read();
    } else {
        rxmat_M_imag_73_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_73_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_73_ce1 = grp_kernel_mmult_fu_10781_a_M_imag200_ce1.read();
    } else {
        rxmat_M_imag_73_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_73_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_73_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_73_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_73_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_73_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_49)))) {
        rxmat_M_imag_73_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_73_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_74_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_74_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_74_address0 = grp_kernel_mmult_fu_10781_a_M_imag201_address0.read();
    } else {
        rxmat_M_imag_74_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_74_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_74_ce0 = grp_kernel_mmult_fu_10781_a_M_imag201_ce0.read();
    } else {
        rxmat_M_imag_74_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_74_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_74_ce1 = grp_kernel_mmult_fu_10781_a_M_imag201_ce1.read();
    } else {
        rxmat_M_imag_74_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_74_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_74_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_74_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_74_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_74_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4A)))) {
        rxmat_M_imag_74_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_74_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_75_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_75_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_75_address0 = grp_kernel_mmult_fu_10781_a_M_imag202_address0.read();
    } else {
        rxmat_M_imag_75_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_75_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_75_ce0 = grp_kernel_mmult_fu_10781_a_M_imag202_ce0.read();
    } else {
        rxmat_M_imag_75_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_75_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_75_ce1 = grp_kernel_mmult_fu_10781_a_M_imag202_ce1.read();
    } else {
        rxmat_M_imag_75_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_75_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_75_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_75_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_75_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_75_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4B)))) {
        rxmat_M_imag_75_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_75_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_76_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_76_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_76_address0 = grp_kernel_mmult_fu_10781_a_M_imag203_address0.read();
    } else {
        rxmat_M_imag_76_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_76_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_76_ce0 = grp_kernel_mmult_fu_10781_a_M_imag203_ce0.read();
    } else {
        rxmat_M_imag_76_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_76_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_76_ce1 = grp_kernel_mmult_fu_10781_a_M_imag203_ce1.read();
    } else {
        rxmat_M_imag_76_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_76_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_76_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_76_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_76_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_76_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4C)))) {
        rxmat_M_imag_76_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_76_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_77_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_77_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_77_address0 = grp_kernel_mmult_fu_10781_a_M_imag204_address0.read();
    } else {
        rxmat_M_imag_77_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_77_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_77_ce0 = grp_kernel_mmult_fu_10781_a_M_imag204_ce0.read();
    } else {
        rxmat_M_imag_77_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_77_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_77_ce1 = grp_kernel_mmult_fu_10781_a_M_imag204_ce1.read();
    } else {
        rxmat_M_imag_77_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_77_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_77_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_77_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_77_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_77_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4D)))) {
        rxmat_M_imag_77_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_77_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_78_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_78_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_78_address0 = grp_kernel_mmult_fu_10781_a_M_imag205_address0.read();
    } else {
        rxmat_M_imag_78_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_78_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_78_ce0 = grp_kernel_mmult_fu_10781_a_M_imag205_ce0.read();
    } else {
        rxmat_M_imag_78_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_78_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_78_ce1 = grp_kernel_mmult_fu_10781_a_M_imag205_ce1.read();
    } else {
        rxmat_M_imag_78_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_78_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_78_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_78_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_78_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_78_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4E)))) {
        rxmat_M_imag_78_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_78_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_79_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_79_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_79_address0 = grp_kernel_mmult_fu_10781_a_M_imag206_address0.read();
    } else {
        rxmat_M_imag_79_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_79_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_79_ce0 = grp_kernel_mmult_fu_10781_a_M_imag206_ce0.read();
    } else {
        rxmat_M_imag_79_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_79_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_79_ce1 = grp_kernel_mmult_fu_10781_a_M_imag206_ce1.read();
    } else {
        rxmat_M_imag_79_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_79_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_79_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_79_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_79_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_79_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_4F)))) {
        rxmat_M_imag_79_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_79_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_7_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_7_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_7_address0 = grp_kernel_mmult_fu_10781_a_M_imag134_address0.read();
    } else {
        rxmat_M_imag_7_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_7_ce0 = grp_kernel_mmult_fu_10781_a_M_imag134_ce0.read();
    } else {
        rxmat_M_imag_7_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_7_ce1 = grp_kernel_mmult_fu_10781_a_M_imag134_ce1.read();
    } else {
        rxmat_M_imag_7_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_7_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_7_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_7)))) {
        rxmat_M_imag_7_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_7_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_80_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_80_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_80_address0 = grp_kernel_mmult_fu_10781_a_M_imag207_address0.read();
    } else {
        rxmat_M_imag_80_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_80_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_80_ce0 = grp_kernel_mmult_fu_10781_a_M_imag207_ce0.read();
    } else {
        rxmat_M_imag_80_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_80_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_80_ce1 = grp_kernel_mmult_fu_10781_a_M_imag207_ce1.read();
    } else {
        rxmat_M_imag_80_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_80_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_80_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_80_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_80_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_80_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_50)))) {
        rxmat_M_imag_80_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_80_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_81_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_81_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_81_address0 = grp_kernel_mmult_fu_10781_a_M_imag208_address0.read();
    } else {
        rxmat_M_imag_81_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_81_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_81_ce0 = grp_kernel_mmult_fu_10781_a_M_imag208_ce0.read();
    } else {
        rxmat_M_imag_81_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_81_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_81_ce1 = grp_kernel_mmult_fu_10781_a_M_imag208_ce1.read();
    } else {
        rxmat_M_imag_81_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_81_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_81_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_81_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_81_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_81_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_51)))) {
        rxmat_M_imag_81_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_81_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_82_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_82_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_82_address0 = grp_kernel_mmult_fu_10781_a_M_imag209_address0.read();
    } else {
        rxmat_M_imag_82_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_82_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_82_ce0 = grp_kernel_mmult_fu_10781_a_M_imag209_ce0.read();
    } else {
        rxmat_M_imag_82_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_82_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_82_ce1 = grp_kernel_mmult_fu_10781_a_M_imag209_ce1.read();
    } else {
        rxmat_M_imag_82_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_82_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_82_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_82_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_82_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_82_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_52)))) {
        rxmat_M_imag_82_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_82_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_83_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_83_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_83_address0 = grp_kernel_mmult_fu_10781_a_M_imag210_address0.read();
    } else {
        rxmat_M_imag_83_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_83_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_83_ce0 = grp_kernel_mmult_fu_10781_a_M_imag210_ce0.read();
    } else {
        rxmat_M_imag_83_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_83_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_83_ce1 = grp_kernel_mmult_fu_10781_a_M_imag210_ce1.read();
    } else {
        rxmat_M_imag_83_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_83_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_83_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_83_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_83_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_83_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_53)))) {
        rxmat_M_imag_83_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_83_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_84_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_84_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_84_address0 = grp_kernel_mmult_fu_10781_a_M_imag211_address0.read();
    } else {
        rxmat_M_imag_84_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_84_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_84_ce0 = grp_kernel_mmult_fu_10781_a_M_imag211_ce0.read();
    } else {
        rxmat_M_imag_84_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_84_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_84_ce1 = grp_kernel_mmult_fu_10781_a_M_imag211_ce1.read();
    } else {
        rxmat_M_imag_84_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_84_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_84_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_84_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_84_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_84_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_54)))) {
        rxmat_M_imag_84_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_84_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_85_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_85_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_85_address0 = grp_kernel_mmult_fu_10781_a_M_imag212_address0.read();
    } else {
        rxmat_M_imag_85_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_85_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_85_ce0 = grp_kernel_mmult_fu_10781_a_M_imag212_ce0.read();
    } else {
        rxmat_M_imag_85_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_85_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_85_ce1 = grp_kernel_mmult_fu_10781_a_M_imag212_ce1.read();
    } else {
        rxmat_M_imag_85_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_85_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_85_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_85_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_85_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_85_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_55)))) {
        rxmat_M_imag_85_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_85_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_86_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_86_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_86_address0 = grp_kernel_mmult_fu_10781_a_M_imag213_address0.read();
    } else {
        rxmat_M_imag_86_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_86_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_86_ce0 = grp_kernel_mmult_fu_10781_a_M_imag213_ce0.read();
    } else {
        rxmat_M_imag_86_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_86_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_86_ce1 = grp_kernel_mmult_fu_10781_a_M_imag213_ce1.read();
    } else {
        rxmat_M_imag_86_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_86_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_86_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_86_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_86_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_86_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_56)))) {
        rxmat_M_imag_86_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_86_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_87_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_87_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_87_address0 = grp_kernel_mmult_fu_10781_a_M_imag214_address0.read();
    } else {
        rxmat_M_imag_87_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_87_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_87_ce0 = grp_kernel_mmult_fu_10781_a_M_imag214_ce0.read();
    } else {
        rxmat_M_imag_87_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_87_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_87_ce1 = grp_kernel_mmult_fu_10781_a_M_imag214_ce1.read();
    } else {
        rxmat_M_imag_87_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_87_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_87_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_87_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_87_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_87_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_57)))) {
        rxmat_M_imag_87_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_87_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_88_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_88_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_88_address0 = grp_kernel_mmult_fu_10781_a_M_imag215_address0.read();
    } else {
        rxmat_M_imag_88_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_88_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_88_ce0 = grp_kernel_mmult_fu_10781_a_M_imag215_ce0.read();
    } else {
        rxmat_M_imag_88_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_88_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_88_ce1 = grp_kernel_mmult_fu_10781_a_M_imag215_ce1.read();
    } else {
        rxmat_M_imag_88_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_88_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_88_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_88_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_88_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_88_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_58)))) {
        rxmat_M_imag_88_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_88_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_89_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_89_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_89_address0 = grp_kernel_mmult_fu_10781_a_M_imag216_address0.read();
    } else {
        rxmat_M_imag_89_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_89_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_89_ce0 = grp_kernel_mmult_fu_10781_a_M_imag216_ce0.read();
    } else {
        rxmat_M_imag_89_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_89_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_89_ce1 = grp_kernel_mmult_fu_10781_a_M_imag216_ce1.read();
    } else {
        rxmat_M_imag_89_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_89_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_89_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_89_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_89_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_89_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_59)))) {
        rxmat_M_imag_89_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_89_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_8_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_8_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_8_address0 = grp_kernel_mmult_fu_10781_a_M_imag135_address0.read();
    } else {
        rxmat_M_imag_8_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_8_ce0 = grp_kernel_mmult_fu_10781_a_M_imag135_ce0.read();
    } else {
        rxmat_M_imag_8_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_8_ce1 = grp_kernel_mmult_fu_10781_a_M_imag135_ce1.read();
    } else {
        rxmat_M_imag_8_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_8_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_8_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_8)))) {
        rxmat_M_imag_8_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_8_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_90_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_90_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_90_address0 = grp_kernel_mmult_fu_10781_a_M_imag217_address0.read();
    } else {
        rxmat_M_imag_90_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_90_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_90_ce0 = grp_kernel_mmult_fu_10781_a_M_imag217_ce0.read();
    } else {
        rxmat_M_imag_90_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_90_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_90_ce1 = grp_kernel_mmult_fu_10781_a_M_imag217_ce1.read();
    } else {
        rxmat_M_imag_90_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_90_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_90_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_90_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_90_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_90_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5A)))) {
        rxmat_M_imag_90_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_90_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_91_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_91_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_91_address0 = grp_kernel_mmult_fu_10781_a_M_imag218_address0.read();
    } else {
        rxmat_M_imag_91_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_91_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_91_ce0 = grp_kernel_mmult_fu_10781_a_M_imag218_ce0.read();
    } else {
        rxmat_M_imag_91_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_91_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_91_ce1 = grp_kernel_mmult_fu_10781_a_M_imag218_ce1.read();
    } else {
        rxmat_M_imag_91_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_91_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_91_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_91_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_91_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_91_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5B)))) {
        rxmat_M_imag_91_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_91_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_92_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_92_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_92_address0 = grp_kernel_mmult_fu_10781_a_M_imag219_address0.read();
    } else {
        rxmat_M_imag_92_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_92_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_92_ce0 = grp_kernel_mmult_fu_10781_a_M_imag219_ce0.read();
    } else {
        rxmat_M_imag_92_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_92_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_92_ce1 = grp_kernel_mmult_fu_10781_a_M_imag219_ce1.read();
    } else {
        rxmat_M_imag_92_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_92_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_92_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_92_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_92_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_92_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5C)))) {
        rxmat_M_imag_92_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_92_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_93_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_93_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_93_address0 = grp_kernel_mmult_fu_10781_a_M_imag220_address0.read();
    } else {
        rxmat_M_imag_93_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_93_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_93_ce0 = grp_kernel_mmult_fu_10781_a_M_imag220_ce0.read();
    } else {
        rxmat_M_imag_93_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_93_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_93_ce1 = grp_kernel_mmult_fu_10781_a_M_imag220_ce1.read();
    } else {
        rxmat_M_imag_93_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_93_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_93_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_93_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_93_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_93_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5D)))) {
        rxmat_M_imag_93_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_93_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_94_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_94_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_94_address0 = grp_kernel_mmult_fu_10781_a_M_imag221_address0.read();
    } else {
        rxmat_M_imag_94_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_94_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_94_ce0 = grp_kernel_mmult_fu_10781_a_M_imag221_ce0.read();
    } else {
        rxmat_M_imag_94_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_94_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_94_ce1 = grp_kernel_mmult_fu_10781_a_M_imag221_ce1.read();
    } else {
        rxmat_M_imag_94_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_94_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_94_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_94_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_94_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_94_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5E)))) {
        rxmat_M_imag_94_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_94_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_95_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_95_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_95_address0 = grp_kernel_mmult_fu_10781_a_M_imag222_address0.read();
    } else {
        rxmat_M_imag_95_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_95_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_95_ce0 = grp_kernel_mmult_fu_10781_a_M_imag222_ce0.read();
    } else {
        rxmat_M_imag_95_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_95_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_95_ce1 = grp_kernel_mmult_fu_10781_a_M_imag222_ce1.read();
    } else {
        rxmat_M_imag_95_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_95_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_95_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_95_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_95_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_95_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_5F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_5F)))) {
        rxmat_M_imag_95_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_95_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_96_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_96_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_96_address0 = grp_kernel_mmult_fu_10781_a_M_imag223_address0.read();
    } else {
        rxmat_M_imag_96_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_96_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_96_ce0 = grp_kernel_mmult_fu_10781_a_M_imag223_ce0.read();
    } else {
        rxmat_M_imag_96_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_96_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_96_ce1 = grp_kernel_mmult_fu_10781_a_M_imag223_ce1.read();
    } else {
        rxmat_M_imag_96_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_96_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_96_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_96_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_96_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_96_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_60)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_60)))) {
        rxmat_M_imag_96_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_96_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_97_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_97_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_97_address0 = grp_kernel_mmult_fu_10781_a_M_imag224_address0.read();
    } else {
        rxmat_M_imag_97_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_97_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_97_ce0 = grp_kernel_mmult_fu_10781_a_M_imag224_ce0.read();
    } else {
        rxmat_M_imag_97_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_97_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_97_ce1 = grp_kernel_mmult_fu_10781_a_M_imag224_ce1.read();
    } else {
        rxmat_M_imag_97_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_97_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_97_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_97_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_97_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_97_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_61)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_61)))) {
        rxmat_M_imag_97_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_97_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_98_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_98_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_98_address0 = grp_kernel_mmult_fu_10781_a_M_imag225_address0.read();
    } else {
        rxmat_M_imag_98_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_98_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_98_ce0 = grp_kernel_mmult_fu_10781_a_M_imag225_ce0.read();
    } else {
        rxmat_M_imag_98_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_98_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_98_ce1 = grp_kernel_mmult_fu_10781_a_M_imag225_ce1.read();
    } else {
        rxmat_M_imag_98_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_98_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_98_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_98_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_98_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_98_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_62)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_62)))) {
        rxmat_M_imag_98_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_98_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_99_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_99_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_99_address0 = grp_kernel_mmult_fu_10781_a_M_imag226_address0.read();
    } else {
        rxmat_M_imag_99_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_99_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_99_ce0 = grp_kernel_mmult_fu_10781_a_M_imag226_ce0.read();
    } else {
        rxmat_M_imag_99_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_99_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_99_ce1 = grp_kernel_mmult_fu_10781_a_M_imag226_ce1.read();
    } else {
        rxmat_M_imag_99_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_99_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_99_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_99_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_99_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_99_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_63)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_63)))) {
        rxmat_M_imag_99_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_99_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_9_address0 =  (sc_lv<9>) (zext_ln86_1_fu_12290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_9_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_9_address0 = grp_kernel_mmult_fu_10781_a_M_imag136_address0.read();
    } else {
        rxmat_M_imag_9_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_imag_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_imag_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_9_ce0 = grp_kernel_mmult_fu_10781_a_M_imag136_ce0.read();
    } else {
        rxmat_M_imag_9_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_imag_9_ce1 = grp_kernel_mmult_fu_10781_a_M_imag136_ce1.read();
    } else {
        rxmat_M_imag_9_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_imag_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        rxmat_M_imag_9_d0 = bitcast_ln86_fu_12422_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_imag_9_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_imag_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_imag_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln83_fu_12255_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln86_fu_12267_p1.read(), ap_const_lv7_9)))) {
        rxmat_M_imag_9_we0 = ap_const_logic_1;
    } else {
        rxmat_M_imag_9_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_0_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_0_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_0_address0 = grp_kernel_mmult_fu_10781_a_M_real_address0.read();
    } else {
        rxmat_M_real_0_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_0_ce0 = grp_kernel_mmult_fu_10781_a_M_real_ce0.read();
    } else {
        rxmat_M_real_0_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_0_ce1 = grp_kernel_mmult_fu_10781_a_M_real_ce1.read();
    } else {
        rxmat_M_real_0_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_0_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_0_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_0)))) {
        rxmat_M_real_0_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_0_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_100_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_100_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_100_address0 = grp_kernel_mmult_fu_10781_a_M_real100_address0.read();
    } else {
        rxmat_M_real_100_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_100_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_100_ce0 = grp_kernel_mmult_fu_10781_a_M_real100_ce0.read();
    } else {
        rxmat_M_real_100_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_100_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_100_ce1 = grp_kernel_mmult_fu_10781_a_M_real100_ce1.read();
    } else {
        rxmat_M_real_100_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_100_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_100_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_100_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_100_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_100_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_64)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_64)))) {
        rxmat_M_real_100_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_100_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_101_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_101_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_101_address0 = grp_kernel_mmult_fu_10781_a_M_real101_address0.read();
    } else {
        rxmat_M_real_101_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_101_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_101_ce0 = grp_kernel_mmult_fu_10781_a_M_real101_ce0.read();
    } else {
        rxmat_M_real_101_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_101_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_101_ce1 = grp_kernel_mmult_fu_10781_a_M_real101_ce1.read();
    } else {
        rxmat_M_real_101_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_101_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_101_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_101_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_101_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_101_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_65)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_65)))) {
        rxmat_M_real_101_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_101_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_102_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_102_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_102_address0 = grp_kernel_mmult_fu_10781_a_M_real102_address0.read();
    } else {
        rxmat_M_real_102_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_102_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_102_ce0 = grp_kernel_mmult_fu_10781_a_M_real102_ce0.read();
    } else {
        rxmat_M_real_102_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_102_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_102_ce1 = grp_kernel_mmult_fu_10781_a_M_real102_ce1.read();
    } else {
        rxmat_M_real_102_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_102_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_102_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_102_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_102_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_102_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_66)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_66)))) {
        rxmat_M_real_102_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_102_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_103_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_103_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_103_address0 = grp_kernel_mmult_fu_10781_a_M_real103_address0.read();
    } else {
        rxmat_M_real_103_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_103_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_103_ce0 = grp_kernel_mmult_fu_10781_a_M_real103_ce0.read();
    } else {
        rxmat_M_real_103_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_103_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_103_ce1 = grp_kernel_mmult_fu_10781_a_M_real103_ce1.read();
    } else {
        rxmat_M_real_103_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_103_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_103_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_103_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_103_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_103_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_67)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_67)))) {
        rxmat_M_real_103_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_103_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_104_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_104_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_104_address0 = grp_kernel_mmult_fu_10781_a_M_real104_address0.read();
    } else {
        rxmat_M_real_104_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_104_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_104_ce0 = grp_kernel_mmult_fu_10781_a_M_real104_ce0.read();
    } else {
        rxmat_M_real_104_ce0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_104_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_104_ce1 = grp_kernel_mmult_fu_10781_a_M_real104_ce1.read();
    } else {
        rxmat_M_real_104_ce1 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_104_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_104_d0 = bitcast_ln76_fu_12099_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_104_d0 = ap_const_lv32_0;
    } else {
        rxmat_M_real_104_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void dmatmult::thread_rxmat_M_real_104_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,7,7>(trunc_ln1027_fu_11441_p1.read(), ap_const_lv7_68)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read())) && 
          esl_seteq<1,7,7>(trunc_ln76_fu_11944_p1.read(), ap_const_lv7_68)))) {
        rxmat_M_real_104_we0 = ap_const_logic_1;
    } else {
        rxmat_M_real_104_we0 = ap_const_logic_0;
    }
}

void dmatmult::thread_rxmat_M_real_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        rxmat_M_real_105_address0 =  (sc_lv<9>) (zext_ln76_1_fu_11967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rxmat_M_real_105_address0 =  (sc_lv<9>) (zext_ln1027_fu_11461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_105_address0 = grp_kernel_mmult_fu_10781_a_M_real105_address0.read();
    } else {
        rxmat_M_real_105_address0 = "XXXXXXXXX";
    }
}

void dmatmult::thread_rxmat_M_real_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln73_fu_11932_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, rxmat_stream_TVALID.read()))))) {
        rxmat_M_real_105_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        rxmat_M_real_105_ce0 = grp_kernel_mmult_fu_10781_a_M_real105_ce0.read();
    } else {
        rxmat_M_real_105_ce0 = ap_const_logic_0;
    }
}

}


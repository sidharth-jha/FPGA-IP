# This script segment is generated automatically by AutoPilot

set id 1
set name matmul_fsub_32ns_bkb
set corename simcore_fsub
set op fsub
set stage_num 4
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fsub] == "ap_gen_simcore_fsub"} {
eval "ap_gen_simcore_fsub { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fsub, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fsub
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 2
set name matmul_fadd_32ns_cud
set corename simcore_fadd
set op fadd
set stage_num 4
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fadd] == "ap_gen_simcore_fadd"} {
eval "ap_gen_simcore_fadd { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fadd, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fadd
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 17
set name matmul_fmul_32ns_dEe
set corename simcore_fmul
set op fmul
set stage_num 2
set max_latency -1
set registered_input 1
set impl_style max_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fmul] == "ap_gen_simcore_fmul"} {
eval "ap_gen_simcore_fmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fmul
set corename FMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name rxmat_M_real_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_real_2 \
    op interface \
    ports { rxmat_M_real_2_address0 { O 5 vector } rxmat_M_real_2_ce0 { O 1 bit } rxmat_M_real_2_q0 { I 32 vector } rxmat_M_real_2_address1 { O 5 vector } rxmat_M_real_2_ce1 { O 1 bit } rxmat_M_real_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_real_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name rxmat_M_real_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_real_21 \
    op interface \
    ports { rxmat_M_real_21_address0 { O 5 vector } rxmat_M_real_21_ce0 { O 1 bit } rxmat_M_real_21_q0 { I 32 vector } rxmat_M_real_21_address1 { O 5 vector } rxmat_M_real_21_ce1 { O 1 bit } rxmat_M_real_21_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_real_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name rxmat_M_real_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_real_22 \
    op interface \
    ports { rxmat_M_real_22_address0 { O 5 vector } rxmat_M_real_22_ce0 { O 1 bit } rxmat_M_real_22_q0 { I 32 vector } rxmat_M_real_22_address1 { O 5 vector } rxmat_M_real_22_ce1 { O 1 bit } rxmat_M_real_22_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_real_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name rxmat_M_real_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_real_23 \
    op interface \
    ports { rxmat_M_real_23_address0 { O 5 vector } rxmat_M_real_23_ce0 { O 1 bit } rxmat_M_real_23_q0 { I 32 vector } rxmat_M_real_23_address1 { O 5 vector } rxmat_M_real_23_ce1 { O 1 bit } rxmat_M_real_23_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_real_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name rxmat_M_imag_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_imag_2 \
    op interface \
    ports { rxmat_M_imag_2_address0 { O 5 vector } rxmat_M_imag_2_ce0 { O 1 bit } rxmat_M_imag_2_q0 { I 32 vector } rxmat_M_imag_2_address1 { O 5 vector } rxmat_M_imag_2_ce1 { O 1 bit } rxmat_M_imag_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_imag_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name rxmat_M_imag_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_imag_24 \
    op interface \
    ports { rxmat_M_imag_24_address0 { O 5 vector } rxmat_M_imag_24_ce0 { O 1 bit } rxmat_M_imag_24_q0 { I 32 vector } rxmat_M_imag_24_address1 { O 5 vector } rxmat_M_imag_24_ce1 { O 1 bit } rxmat_M_imag_24_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_imag_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name rxmat_M_imag_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_imag_25 \
    op interface \
    ports { rxmat_M_imag_25_address0 { O 5 vector } rxmat_M_imag_25_ce0 { O 1 bit } rxmat_M_imag_25_q0 { I 32 vector } rxmat_M_imag_25_address1 { O 5 vector } rxmat_M_imag_25_ce1 { O 1 bit } rxmat_M_imag_25_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_imag_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name rxmat_M_imag_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename rxmat_M_imag_26 \
    op interface \
    ports { rxmat_M_imag_26_address0 { O 5 vector } rxmat_M_imag_26_ce0 { O 1 bit } rxmat_M_imag_26_q0 { I 32 vector } rxmat_M_imag_26_address1 { O 5 vector } rxmat_M_imag_26_ce1 { O 1 bit } rxmat_M_imag_26_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_M_imag_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name rxmat_delay_M_real_s \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_s \
    op interface \
    ports { rxmat_delay_M_real_s_address0 { O 4 vector } rxmat_delay_M_real_s_ce0 { O 1 bit } rxmat_delay_M_real_s_we0 { O 1 bit } rxmat_delay_M_real_s_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_s'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name rxmat_delay_M_imag_s \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_s \
    op interface \
    ports { rxmat_delay_M_imag_s_address0 { O 4 vector } rxmat_delay_M_imag_s_ce0 { O 1 bit } rxmat_delay_M_imag_s_we0 { O 1 bit } rxmat_delay_M_imag_s_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_s'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name rxmat_delay_M_real_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_1 \
    op interface \
    ports { rxmat_delay_M_real_1_address0 { O 4 vector } rxmat_delay_M_real_1_ce0 { O 1 bit } rxmat_delay_M_real_1_we0 { O 1 bit } rxmat_delay_M_real_1_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name rxmat_delay_M_imag_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_1 \
    op interface \
    ports { rxmat_delay_M_imag_1_address0 { O 4 vector } rxmat_delay_M_imag_1_ce0 { O 1 bit } rxmat_delay_M_imag_1_we0 { O 1 bit } rxmat_delay_M_imag_1_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name rxmat_delay_M_real_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_2 \
    op interface \
    ports { rxmat_delay_M_real_2_address0 { O 4 vector } rxmat_delay_M_real_2_ce0 { O 1 bit } rxmat_delay_M_real_2_we0 { O 1 bit } rxmat_delay_M_real_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name rxmat_delay_M_imag_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_2 \
    op interface \
    ports { rxmat_delay_M_imag_2_address0 { O 4 vector } rxmat_delay_M_imag_2_ce0 { O 1 bit } rxmat_delay_M_imag_2_we0 { O 1 bit } rxmat_delay_M_imag_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name rxmat_delay_M_real_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_3 \
    op interface \
    ports { rxmat_delay_M_real_3_address0 { O 4 vector } rxmat_delay_M_real_3_ce0 { O 1 bit } rxmat_delay_M_real_3_we0 { O 1 bit } rxmat_delay_M_real_3_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name rxmat_delay_M_imag_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_3 \
    op interface \
    ports { rxmat_delay_M_imag_3_address0 { O 4 vector } rxmat_delay_M_imag_3_ce0 { O 1 bit } rxmat_delay_M_imag_3_we0 { O 1 bit } rxmat_delay_M_imag_3_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name rxmat_delay_M_real_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_4 \
    op interface \
    ports { rxmat_delay_M_real_4_address0 { O 4 vector } rxmat_delay_M_real_4_ce0 { O 1 bit } rxmat_delay_M_real_4_we0 { O 1 bit } rxmat_delay_M_real_4_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name rxmat_delay_M_imag_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_4 \
    op interface \
    ports { rxmat_delay_M_imag_4_address0 { O 4 vector } rxmat_delay_M_imag_4_ce0 { O 1 bit } rxmat_delay_M_imag_4_we0 { O 1 bit } rxmat_delay_M_imag_4_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name rxmat_delay_M_real_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_5 \
    op interface \
    ports { rxmat_delay_M_real_5_address0 { O 4 vector } rxmat_delay_M_real_5_ce0 { O 1 bit } rxmat_delay_M_real_5_we0 { O 1 bit } rxmat_delay_M_real_5_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name rxmat_delay_M_imag_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_5 \
    op interface \
    ports { rxmat_delay_M_imag_5_address0 { O 4 vector } rxmat_delay_M_imag_5_ce0 { O 1 bit } rxmat_delay_M_imag_5_we0 { O 1 bit } rxmat_delay_M_imag_5_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name rxmat_delay_M_real_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_6 \
    op interface \
    ports { rxmat_delay_M_real_6_address0 { O 4 vector } rxmat_delay_M_real_6_ce0 { O 1 bit } rxmat_delay_M_real_6_we0 { O 1 bit } rxmat_delay_M_real_6_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name rxmat_delay_M_imag_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_6 \
    op interface \
    ports { rxmat_delay_M_imag_6_address0 { O 4 vector } rxmat_delay_M_imag_6_ce0 { O 1 bit } rxmat_delay_M_imag_6_we0 { O 1 bit } rxmat_delay_M_imag_6_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name rxmat_delay_M_real_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_real_7 \
    op interface \
    ports { rxmat_delay_M_real_7_address0 { O 4 vector } rxmat_delay_M_real_7_ce0 { O 1 bit } rxmat_delay_M_real_7_we0 { O 1 bit } rxmat_delay_M_real_7_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_real_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name rxmat_delay_M_imag_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename rxmat_delay_M_imag_7 \
    op interface \
    ports { rxmat_delay_M_imag_7_address0 { O 4 vector } rxmat_delay_M_imag_7_ce0 { O 1 bit } rxmat_delay_M_imag_7_we0 { O 1 bit } rxmat_delay_M_imag_7_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'rxmat_delay_M_imag_7'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}



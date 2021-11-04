# This script segment is generated automatically by AutoPilot

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
    id 20 \
    name A_M_real \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real \
    op interface \
    ports { A_M_real_address0 { O 12 vector } A_M_real_ce0 { O 1 bit } A_M_real_q0 { I 32 vector } A_M_real_address1 { O 12 vector } A_M_real_ce1 { O 1 bit } A_M_real_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name A_M_real1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real1 \
    op interface \
    ports { A_M_real1_address0 { O 12 vector } A_M_real1_ce0 { O 1 bit } A_M_real1_q0 { I 32 vector } A_M_real1_address1 { O 12 vector } A_M_real1_ce1 { O 1 bit } A_M_real1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name A_M_real2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real2 \
    op interface \
    ports { A_M_real2_address0 { O 12 vector } A_M_real2_ce0 { O 1 bit } A_M_real2_q0 { I 32 vector } A_M_real2_address1 { O 12 vector } A_M_real2_ce1 { O 1 bit } A_M_real2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name A_M_real3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real3 \
    op interface \
    ports { A_M_real3_address0 { O 12 vector } A_M_real3_ce0 { O 1 bit } A_M_real3_q0 { I 32 vector } A_M_real3_address1 { O 12 vector } A_M_real3_ce1 { O 1 bit } A_M_real3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name A_M_imag \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag \
    op interface \
    ports { A_M_imag_address0 { O 12 vector } A_M_imag_ce0 { O 1 bit } A_M_imag_q0 { I 32 vector } A_M_imag_address1 { O 12 vector } A_M_imag_ce1 { O 1 bit } A_M_imag_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name A_M_imag4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag4 \
    op interface \
    ports { A_M_imag4_address0 { O 12 vector } A_M_imag4_ce0 { O 1 bit } A_M_imag4_q0 { I 32 vector } A_M_imag4_address1 { O 12 vector } A_M_imag4_ce1 { O 1 bit } A_M_imag4_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name A_M_imag5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag5 \
    op interface \
    ports { A_M_imag5_address0 { O 12 vector } A_M_imag5_ce0 { O 1 bit } A_M_imag5_q0 { I 32 vector } A_M_imag5_address1 { O 12 vector } A_M_imag5_ce1 { O 1 bit } A_M_imag5_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name A_M_imag6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag6 \
    op interface \
    ports { A_M_imag6_address0 { O 12 vector } A_M_imag6_ce0 { O 1 bit } A_M_imag6_q0 { I 32 vector } A_M_imag6_address1 { O 12 vector } A_M_imag6_ce1 { O 1 bit } A_M_imag6_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name B_M_real_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_0 \
    op interface \
    ports { B_M_real_0_address0 { O 12 vector } B_M_real_0_ce0 { O 1 bit } B_M_real_0_q0 { I 32 vector } B_M_real_0_address1 { O 12 vector } B_M_real_0_ce1 { O 1 bit } B_M_real_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name B_M_real_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_1 \
    op interface \
    ports { B_M_real_1_address0 { O 12 vector } B_M_real_1_ce0 { O 1 bit } B_M_real_1_q0 { I 32 vector } B_M_real_1_address1 { O 12 vector } B_M_real_1_ce1 { O 1 bit } B_M_real_1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name B_M_real_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_2 \
    op interface \
    ports { B_M_real_2_address0 { O 12 vector } B_M_real_2_ce0 { O 1 bit } B_M_real_2_q0 { I 32 vector } B_M_real_2_address1 { O 12 vector } B_M_real_2_ce1 { O 1 bit } B_M_real_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name B_M_real_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_3 \
    op interface \
    ports { B_M_real_3_address0 { O 12 vector } B_M_real_3_ce0 { O 1 bit } B_M_real_3_q0 { I 32 vector } B_M_real_3_address1 { O 12 vector } B_M_real_3_ce1 { O 1 bit } B_M_real_3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name B_M_imag_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_0 \
    op interface \
    ports { B_M_imag_0_address0 { O 12 vector } B_M_imag_0_ce0 { O 1 bit } B_M_imag_0_q0 { I 32 vector } B_M_imag_0_address1 { O 12 vector } B_M_imag_0_ce1 { O 1 bit } B_M_imag_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name B_M_imag_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_1 \
    op interface \
    ports { B_M_imag_1_address0 { O 12 vector } B_M_imag_1_ce0 { O 1 bit } B_M_imag_1_q0 { I 32 vector } B_M_imag_1_address1 { O 12 vector } B_M_imag_1_ce1 { O 1 bit } B_M_imag_1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name B_M_imag_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_2 \
    op interface \
    ports { B_M_imag_2_address0 { O 12 vector } B_M_imag_2_ce0 { O 1 bit } B_M_imag_2_q0 { I 32 vector } B_M_imag_2_address1 { O 12 vector } B_M_imag_2_ce1 { O 1 bit } B_M_imag_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name B_M_imag_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_3 \
    op interface \
    ports { B_M_imag_3_address0 { O 12 vector } B_M_imag_3_ce0 { O 1 bit } B_M_imag_3_q0 { I 32 vector } B_M_imag_3_address1 { O 12 vector } B_M_imag_3_ce1 { O 1 bit } B_M_imag_3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name C_M_real_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_real_0 \
    op interface \
    ports { C_M_real_0_address0 { O 6 vector } C_M_real_0_ce0 { O 1 bit } C_M_real_0_we0 { O 1 bit } C_M_real_0_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_real_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name C_M_real_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_real_1 \
    op interface \
    ports { C_M_real_1_address0 { O 6 vector } C_M_real_1_ce0 { O 1 bit } C_M_real_1_we0 { O 1 bit } C_M_real_1_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_real_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name C_M_real_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_real_2 \
    op interface \
    ports { C_M_real_2_address0 { O 6 vector } C_M_real_2_ce0 { O 1 bit } C_M_real_2_we0 { O 1 bit } C_M_real_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_real_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name C_M_real_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_real_3 \
    op interface \
    ports { C_M_real_3_address0 { O 6 vector } C_M_real_3_ce0 { O 1 bit } C_M_real_3_we0 { O 1 bit } C_M_real_3_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_real_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name C_M_imag_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_imag_0 \
    op interface \
    ports { C_M_imag_0_address0 { O 6 vector } C_M_imag_0_ce0 { O 1 bit } C_M_imag_0_we0 { O 1 bit } C_M_imag_0_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_imag_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name C_M_imag_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_imag_1 \
    op interface \
    ports { C_M_imag_1_address0 { O 6 vector } C_M_imag_1_ce0 { O 1 bit } C_M_imag_1_we0 { O 1 bit } C_M_imag_1_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_imag_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name C_M_imag_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_imag_2 \
    op interface \
    ports { C_M_imag_2_address0 { O 6 vector } C_M_imag_2_ce0 { O 1 bit } C_M_imag_2_we0 { O 1 bit } C_M_imag_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_imag_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name C_M_imag_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename C_M_imag_3 \
    op interface \
    ports { C_M_imag_3_address0 { O 6 vector } C_M_imag_3_ce0 { O 1 bit } C_M_imag_3_we0 { O 1 bit } C_M_imag_3_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_M_imag_3'"
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



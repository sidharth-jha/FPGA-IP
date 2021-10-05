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
    id 30 \
    name A_M_real \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real \
    op interface \
    ports { A_M_real_address0 { O 6 vector } A_M_real_ce0 { O 1 bit } A_M_real_q0 { I 32 vector } A_M_real_address1 { O 6 vector } A_M_real_ce1 { O 1 bit } A_M_real_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name A_M_real1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real1 \
    op interface \
    ports { A_M_real1_address0 { O 6 vector } A_M_real1_ce0 { O 1 bit } A_M_real1_q0 { I 32 vector } A_M_real1_address1 { O 6 vector } A_M_real1_ce1 { O 1 bit } A_M_real1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name A_M_real2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real2 \
    op interface \
    ports { A_M_real2_address0 { O 6 vector } A_M_real2_ce0 { O 1 bit } A_M_real2_q0 { I 32 vector } A_M_real2_address1 { O 6 vector } A_M_real2_ce1 { O 1 bit } A_M_real2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name A_M_real3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real3 \
    op interface \
    ports { A_M_real3_address0 { O 6 vector } A_M_real3_ce0 { O 1 bit } A_M_real3_q0 { I 32 vector } A_M_real3_address1 { O 6 vector } A_M_real3_ce1 { O 1 bit } A_M_real3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name A_M_imag \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag \
    op interface \
    ports { A_M_imag_address0 { O 6 vector } A_M_imag_ce0 { O 1 bit } A_M_imag_q0 { I 32 vector } A_M_imag_address1 { O 6 vector } A_M_imag_ce1 { O 1 bit } A_M_imag_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name A_M_imag4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag4 \
    op interface \
    ports { A_M_imag4_address0 { O 6 vector } A_M_imag4_ce0 { O 1 bit } A_M_imag4_q0 { I 32 vector } A_M_imag4_address1 { O 6 vector } A_M_imag4_ce1 { O 1 bit } A_M_imag4_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name A_M_imag5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag5 \
    op interface \
    ports { A_M_imag5_address0 { O 6 vector } A_M_imag5_ce0 { O 1 bit } A_M_imag5_q0 { I 32 vector } A_M_imag5_address1 { O 6 vector } A_M_imag5_ce1 { O 1 bit } A_M_imag5_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name A_M_imag6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag6 \
    op interface \
    ports { A_M_imag6_address0 { O 6 vector } A_M_imag6_ce0 { O 1 bit } A_M_imag6_q0 { I 32 vector } A_M_imag6_address1 { O 6 vector } A_M_imag6_ce1 { O 1 bit } A_M_imag6_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name B_M_real_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_0 \
    op interface \
    ports { B_M_real_0_address0 { O 6 vector } B_M_real_0_ce0 { O 1 bit } B_M_real_0_q0 { I 32 vector } B_M_real_0_address1 { O 6 vector } B_M_real_0_ce1 { O 1 bit } B_M_real_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name B_M_real_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_1 \
    op interface \
    ports { B_M_real_1_address0 { O 6 vector } B_M_real_1_ce0 { O 1 bit } B_M_real_1_q0 { I 32 vector } B_M_real_1_address1 { O 6 vector } B_M_real_1_ce1 { O 1 bit } B_M_real_1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name B_M_real_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_2 \
    op interface \
    ports { B_M_real_2_address0 { O 6 vector } B_M_real_2_ce0 { O 1 bit } B_M_real_2_q0 { I 32 vector } B_M_real_2_address1 { O 6 vector } B_M_real_2_ce1 { O 1 bit } B_M_real_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name B_M_real_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_real_3 \
    op interface \
    ports { B_M_real_3_address0 { O 6 vector } B_M_real_3_ce0 { O 1 bit } B_M_real_3_q0 { I 32 vector } B_M_real_3_address1 { O 6 vector } B_M_real_3_ce1 { O 1 bit } B_M_real_3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_real_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name B_M_imag_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_0 \
    op interface \
    ports { B_M_imag_0_address0 { O 6 vector } B_M_imag_0_ce0 { O 1 bit } B_M_imag_0_q0 { I 32 vector } B_M_imag_0_address1 { O 6 vector } B_M_imag_0_ce1 { O 1 bit } B_M_imag_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name B_M_imag_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_1 \
    op interface \
    ports { B_M_imag_1_address0 { O 6 vector } B_M_imag_1_ce0 { O 1 bit } B_M_imag_1_q0 { I 32 vector } B_M_imag_1_address1 { O 6 vector } B_M_imag_1_ce1 { O 1 bit } B_M_imag_1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name B_M_imag_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_2 \
    op interface \
    ports { B_M_imag_2_address0 { O 6 vector } B_M_imag_2_ce0 { O 1 bit } B_M_imag_2_q0 { I 32 vector } B_M_imag_2_address1 { O 6 vector } B_M_imag_2_ce1 { O 1 bit } B_M_imag_2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name B_M_imag_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename B_M_imag_3 \
    op interface \
    ports { B_M_imag_3_address0 { O 6 vector } B_M_imag_3_ce0 { O 1 bit } B_M_imag_3_q0 { I 32 vector } B_M_imag_3_address1 { O 6 vector } B_M_imag_3_ce1 { O 1 bit } B_M_imag_3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'B_M_imag_3'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name C_M_real_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_0_0_read \
    op interface \
    ports { C_M_real_0_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name C_M_real_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_0_1_read \
    op interface \
    ports { C_M_real_0_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name C_M_real_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_0_2_read \
    op interface \
    ports { C_M_real_0_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name C_M_real_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_0_3_read \
    op interface \
    ports { C_M_real_0_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name C_M_real_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_1_0_read \
    op interface \
    ports { C_M_real_1_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name C_M_real_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_1_1_read \
    op interface \
    ports { C_M_real_1_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name C_M_real_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_1_2_read \
    op interface \
    ports { C_M_real_1_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name C_M_real_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_1_3_read \
    op interface \
    ports { C_M_real_1_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name C_M_real_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_2_0_read \
    op interface \
    ports { C_M_real_2_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name C_M_real_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_2_1_read \
    op interface \
    ports { C_M_real_2_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name C_M_real_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_2_2_read \
    op interface \
    ports { C_M_real_2_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name C_M_real_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_2_3_read \
    op interface \
    ports { C_M_real_2_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name C_M_real_3_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_3_0_read \
    op interface \
    ports { C_M_real_3_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name C_M_real_3_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_3_1_read \
    op interface \
    ports { C_M_real_3_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name C_M_real_3_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_3_2_read \
    op interface \
    ports { C_M_real_3_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name C_M_real_3_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_real_3_3_read \
    op interface \
    ports { C_M_real_3_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name C_M_imag_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_0_0_read \
    op interface \
    ports { C_M_imag_0_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name C_M_imag_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_0_1_read \
    op interface \
    ports { C_M_imag_0_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name C_M_imag_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_0_2_read \
    op interface \
    ports { C_M_imag_0_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name C_M_imag_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_0_3_read \
    op interface \
    ports { C_M_imag_0_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name C_M_imag_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_1_0_read \
    op interface \
    ports { C_M_imag_1_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name C_M_imag_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_1_1_read \
    op interface \
    ports { C_M_imag_1_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name C_M_imag_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_1_2_read \
    op interface \
    ports { C_M_imag_1_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name C_M_imag_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_1_3_read \
    op interface \
    ports { C_M_imag_1_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name C_M_imag_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_2_0_read \
    op interface \
    ports { C_M_imag_2_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 71 \
    name C_M_imag_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_2_1_read \
    op interface \
    ports { C_M_imag_2_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 72 \
    name C_M_imag_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_2_2_read \
    op interface \
    ports { C_M_imag_2_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name C_M_imag_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_2_3_read \
    op interface \
    ports { C_M_imag_2_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name C_M_imag_3_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_3_0_read \
    op interface \
    ports { C_M_imag_3_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name C_M_imag_3_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_3_1_read \
    op interface \
    ports { C_M_imag_3_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 76 \
    name C_M_imag_3_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_3_2_read \
    op interface \
    ports { C_M_imag_3_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 77 \
    name C_M_imag_3_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_C_M_imag_3_3_read \
    op interface \
    ports { C_M_imag_3_3_read { I 32 vector } } \
} "
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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



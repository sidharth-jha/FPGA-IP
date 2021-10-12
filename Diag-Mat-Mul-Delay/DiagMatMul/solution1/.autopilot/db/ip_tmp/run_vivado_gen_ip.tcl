create_project prj -part xczu28dr-ffvg1517-2-e -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/home/sidharth/Documents/BTP/Diag-Mat-Mul/DiagMatMul/solution1/syn/verilog/matmul_ap_fsub_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips matmul_ap_fsub_2_full_dsp_32]]
}
source "/home/sidharth/Documents/BTP/Diag-Mat-Mul/DiagMatMul/solution1/syn/verilog/matmul_ap_fadd_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips matmul_ap_fadd_2_full_dsp_32]]
}
source "/home/sidharth/Documents/BTP/Diag-Mat-Mul/DiagMatMul/solution1/syn/verilog/matmul_ap_fmul_0_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips matmul_ap_fmul_0_max_dsp_32]]
}

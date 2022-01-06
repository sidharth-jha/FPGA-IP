############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project matchedfiltering-v1
set_top dmatmult
add_files matchedfiltering-v1/matchedfiltering.h
add_files matchedfiltering-v1/top.cpp
open_solution "solution1"
set_part {xczu28dr-ffvg1517-2-e}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog -use_netlist none -version 1.1.3 -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
#source "./matchedfiltering-v1/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog

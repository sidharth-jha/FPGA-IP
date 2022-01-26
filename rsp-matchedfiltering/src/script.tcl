############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project rsp_matchedfiltering
set_top matchedfilteringp1
add_files matchedfiltering.h
add_files top.cpp
add_files -tb input_a.txt
add_files -tb input_b.txt
add_files -tb input_c.txt
add_files -tb tb_top.cpp
open_solution "solution1"
set_part {xczu28dr-ffvg1517-2-e}
create_clock -period 10 -name default
#source "./rsp_matchedfiltering/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog

############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project DiagMatMul
set_top matmul
add_files matmul.cpp
add_files matmul.h
add_files -tb matmul-tb.cpp
open_solution "solution1"
set_part {xczu28dr-ffvg1517-2-e}
create_clock -period 10 -name default
#source "./DiagMatMul/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog

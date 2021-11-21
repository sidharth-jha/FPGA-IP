############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dmm_16x64
set_top dmatmult
add_files matmult.h
add_files dmm_16x64/matmult_top.cpp
add_files -tb dmm_16x64/tb_matmult.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu28dr-ffvg1517-2-e}
create_clock -period 10 -name default
#source "./dmm_16x64/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog

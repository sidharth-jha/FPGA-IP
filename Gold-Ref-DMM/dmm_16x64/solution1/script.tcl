############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dmm_64x4096
set_top dmatmult
add_files dmm_64x4096/matmult.h
add_files dmm_64x4096/matmult_top.cpp
add_files -tb dmm_64x4096/tb_matmult.cpp
open_solution "solution1"
set_part {xczu28dr-ffvg1517-2-e}
create_clock -period 10 -name default
#source "./dmm_64x4096/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog

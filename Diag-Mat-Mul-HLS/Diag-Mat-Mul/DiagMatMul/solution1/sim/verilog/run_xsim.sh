
/ext_disk/ext_hdd/downloads/Vivado_2020_1/Vivado/2020.1/bin/xelab xil_defaultlib.apatb_matmul_top glbl -prj matmul.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "/ext_disk/ext_hdd/downloads/Vivado_2020_1/Vivado/2020.1/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s matmul -debug wave
/ext_disk/ext_hdd/downloads/Vivado_2020_1/Vivado/2020.1/bin/xsim --noieeewarnings matmul -tclbatch matmul.tcl

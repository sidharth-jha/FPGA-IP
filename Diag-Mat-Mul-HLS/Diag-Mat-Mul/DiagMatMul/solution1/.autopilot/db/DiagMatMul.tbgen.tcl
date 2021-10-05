set moduleName DiagMatMul
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {DiagMatMul}
set C_modelType { int 1024 }
set C_modelArgList {
	{ A_M_real float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_real1 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_real2 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_real3 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_imag float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_imag4 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_imag5 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ A_M_imag6 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_real_0 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_real_1 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_real_2 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_real_3 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_imag_0 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_imag_1 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_imag_2 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ B_M_imag_3 float 32 regular {array 64 { 1 1 } 1 1 }  }
	{ C_M_real_0_0_read float 32 regular  }
	{ C_M_real_0_1_read float 32 regular  }
	{ C_M_real_0_2_read float 32 regular  }
	{ C_M_real_0_3_read float 32 regular  }
	{ C_M_real_1_0_read float 32 regular  }
	{ C_M_real_1_1_read float 32 regular  }
	{ C_M_real_1_2_read float 32 regular  }
	{ C_M_real_1_3_read float 32 regular  }
	{ C_M_real_2_0_read float 32 regular  }
	{ C_M_real_2_1_read float 32 regular  }
	{ C_M_real_2_2_read float 32 regular  }
	{ C_M_real_2_3_read float 32 regular  }
	{ C_M_real_3_0_read float 32 regular  }
	{ C_M_real_3_1_read float 32 regular  }
	{ C_M_real_3_2_read float 32 regular  }
	{ C_M_real_3_3_read float 32 regular  }
	{ C_M_imag_0_0_read float 32 regular  }
	{ C_M_imag_0_1_read float 32 regular  }
	{ C_M_imag_0_2_read float 32 regular  }
	{ C_M_imag_0_3_read float 32 regular  }
	{ C_M_imag_1_0_read float 32 regular  }
	{ C_M_imag_1_1_read float 32 regular  }
	{ C_M_imag_1_2_read float 32 regular  }
	{ C_M_imag_1_3_read float 32 regular  }
	{ C_M_imag_2_0_read float 32 regular  }
	{ C_M_imag_2_1_read float 32 regular  }
	{ C_M_imag_2_2_read float 32 regular  }
	{ C_M_imag_2_3_read float 32 regular  }
	{ C_M_imag_3_0_read float 32 regular  }
	{ C_M_imag_3_1_read float 32 regular  }
	{ C_M_imag_3_2_read float 32 regular  }
	{ C_M_imag_3_3_read float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_real_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_real_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_real_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_real_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_imag_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_imag_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_imag_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_M_imag_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_0_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_0_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_0_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_0_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_1_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_1_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_1_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_1_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_2_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_2_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_2_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_2_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_3_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_3_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_3_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_real_3_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_0_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_0_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_0_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_0_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_1_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_1_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_1_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_1_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_2_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_2_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_2_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_2_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_3_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_3_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_3_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C_M_imag_3_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1024} ]}
# RTL Port declarations: 
set portNum 166
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_M_real_address0 sc_out sc_lv 6 signal 0 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_real_address1 sc_out sc_lv 6 signal 0 } 
	{ A_M_real_ce1 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q1 sc_in sc_lv 32 signal 0 } 
	{ A_M_real1_address0 sc_out sc_lv 6 signal 1 } 
	{ A_M_real1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_real1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_M_real1_address1 sc_out sc_lv 6 signal 1 } 
	{ A_M_real1_ce1 sc_out sc_logic 1 signal 1 } 
	{ A_M_real1_q1 sc_in sc_lv 32 signal 1 } 
	{ A_M_real2_address0 sc_out sc_lv 6 signal 2 } 
	{ A_M_real2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_M_real2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_M_real2_address1 sc_out sc_lv 6 signal 2 } 
	{ A_M_real2_ce1 sc_out sc_logic 1 signal 2 } 
	{ A_M_real2_q1 sc_in sc_lv 32 signal 2 } 
	{ A_M_real3_address0 sc_out sc_lv 6 signal 3 } 
	{ A_M_real3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_M_real3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_M_real3_address1 sc_out sc_lv 6 signal 3 } 
	{ A_M_real3_ce1 sc_out sc_logic 1 signal 3 } 
	{ A_M_real3_q1 sc_in sc_lv 32 signal 3 } 
	{ A_M_imag_address0 sc_out sc_lv 6 signal 4 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 4 } 
	{ A_M_imag_address1 sc_out sc_lv 6 signal 4 } 
	{ A_M_imag_ce1 sc_out sc_logic 1 signal 4 } 
	{ A_M_imag_q1 sc_in sc_lv 32 signal 4 } 
	{ A_M_imag4_address0 sc_out sc_lv 6 signal 5 } 
	{ A_M_imag4_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_M_imag4_q0 sc_in sc_lv 32 signal 5 } 
	{ A_M_imag4_address1 sc_out sc_lv 6 signal 5 } 
	{ A_M_imag4_ce1 sc_out sc_logic 1 signal 5 } 
	{ A_M_imag4_q1 sc_in sc_lv 32 signal 5 } 
	{ A_M_imag5_address0 sc_out sc_lv 6 signal 6 } 
	{ A_M_imag5_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_M_imag5_q0 sc_in sc_lv 32 signal 6 } 
	{ A_M_imag5_address1 sc_out sc_lv 6 signal 6 } 
	{ A_M_imag5_ce1 sc_out sc_logic 1 signal 6 } 
	{ A_M_imag5_q1 sc_in sc_lv 32 signal 6 } 
	{ A_M_imag6_address0 sc_out sc_lv 6 signal 7 } 
	{ A_M_imag6_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_M_imag6_q0 sc_in sc_lv 32 signal 7 } 
	{ A_M_imag6_address1 sc_out sc_lv 6 signal 7 } 
	{ A_M_imag6_ce1 sc_out sc_logic 1 signal 7 } 
	{ A_M_imag6_q1 sc_in sc_lv 32 signal 7 } 
	{ B_M_real_0_address0 sc_out sc_lv 6 signal 8 } 
	{ B_M_real_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ B_M_real_0_q0 sc_in sc_lv 32 signal 8 } 
	{ B_M_real_0_address1 sc_out sc_lv 6 signal 8 } 
	{ B_M_real_0_ce1 sc_out sc_logic 1 signal 8 } 
	{ B_M_real_0_q1 sc_in sc_lv 32 signal 8 } 
	{ B_M_real_1_address0 sc_out sc_lv 6 signal 9 } 
	{ B_M_real_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ B_M_real_1_q0 sc_in sc_lv 32 signal 9 } 
	{ B_M_real_1_address1 sc_out sc_lv 6 signal 9 } 
	{ B_M_real_1_ce1 sc_out sc_logic 1 signal 9 } 
	{ B_M_real_1_q1 sc_in sc_lv 32 signal 9 } 
	{ B_M_real_2_address0 sc_out sc_lv 6 signal 10 } 
	{ B_M_real_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ B_M_real_2_q0 sc_in sc_lv 32 signal 10 } 
	{ B_M_real_2_address1 sc_out sc_lv 6 signal 10 } 
	{ B_M_real_2_ce1 sc_out sc_logic 1 signal 10 } 
	{ B_M_real_2_q1 sc_in sc_lv 32 signal 10 } 
	{ B_M_real_3_address0 sc_out sc_lv 6 signal 11 } 
	{ B_M_real_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ B_M_real_3_q0 sc_in sc_lv 32 signal 11 } 
	{ B_M_real_3_address1 sc_out sc_lv 6 signal 11 } 
	{ B_M_real_3_ce1 sc_out sc_logic 1 signal 11 } 
	{ B_M_real_3_q1 sc_in sc_lv 32 signal 11 } 
	{ B_M_imag_0_address0 sc_out sc_lv 6 signal 12 } 
	{ B_M_imag_0_ce0 sc_out sc_logic 1 signal 12 } 
	{ B_M_imag_0_q0 sc_in sc_lv 32 signal 12 } 
	{ B_M_imag_0_address1 sc_out sc_lv 6 signal 12 } 
	{ B_M_imag_0_ce1 sc_out sc_logic 1 signal 12 } 
	{ B_M_imag_0_q1 sc_in sc_lv 32 signal 12 } 
	{ B_M_imag_1_address0 sc_out sc_lv 6 signal 13 } 
	{ B_M_imag_1_ce0 sc_out sc_logic 1 signal 13 } 
	{ B_M_imag_1_q0 sc_in sc_lv 32 signal 13 } 
	{ B_M_imag_1_address1 sc_out sc_lv 6 signal 13 } 
	{ B_M_imag_1_ce1 sc_out sc_logic 1 signal 13 } 
	{ B_M_imag_1_q1 sc_in sc_lv 32 signal 13 } 
	{ B_M_imag_2_address0 sc_out sc_lv 6 signal 14 } 
	{ B_M_imag_2_ce0 sc_out sc_logic 1 signal 14 } 
	{ B_M_imag_2_q0 sc_in sc_lv 32 signal 14 } 
	{ B_M_imag_2_address1 sc_out sc_lv 6 signal 14 } 
	{ B_M_imag_2_ce1 sc_out sc_logic 1 signal 14 } 
	{ B_M_imag_2_q1 sc_in sc_lv 32 signal 14 } 
	{ B_M_imag_3_address0 sc_out sc_lv 6 signal 15 } 
	{ B_M_imag_3_ce0 sc_out sc_logic 1 signal 15 } 
	{ B_M_imag_3_q0 sc_in sc_lv 32 signal 15 } 
	{ B_M_imag_3_address1 sc_out sc_lv 6 signal 15 } 
	{ B_M_imag_3_ce1 sc_out sc_logic 1 signal 15 } 
	{ B_M_imag_3_q1 sc_in sc_lv 32 signal 15 } 
	{ C_M_real_0_0_read sc_in sc_lv 32 signal 16 } 
	{ C_M_real_0_1_read sc_in sc_lv 32 signal 17 } 
	{ C_M_real_0_2_read sc_in sc_lv 32 signal 18 } 
	{ C_M_real_0_3_read sc_in sc_lv 32 signal 19 } 
	{ C_M_real_1_0_read sc_in sc_lv 32 signal 20 } 
	{ C_M_real_1_1_read sc_in sc_lv 32 signal 21 } 
	{ C_M_real_1_2_read sc_in sc_lv 32 signal 22 } 
	{ C_M_real_1_3_read sc_in sc_lv 32 signal 23 } 
	{ C_M_real_2_0_read sc_in sc_lv 32 signal 24 } 
	{ C_M_real_2_1_read sc_in sc_lv 32 signal 25 } 
	{ C_M_real_2_2_read sc_in sc_lv 32 signal 26 } 
	{ C_M_real_2_3_read sc_in sc_lv 32 signal 27 } 
	{ C_M_real_3_0_read sc_in sc_lv 32 signal 28 } 
	{ C_M_real_3_1_read sc_in sc_lv 32 signal 29 } 
	{ C_M_real_3_2_read sc_in sc_lv 32 signal 30 } 
	{ C_M_real_3_3_read sc_in sc_lv 32 signal 31 } 
	{ C_M_imag_0_0_read sc_in sc_lv 32 signal 32 } 
	{ C_M_imag_0_1_read sc_in sc_lv 32 signal 33 } 
	{ C_M_imag_0_2_read sc_in sc_lv 32 signal 34 } 
	{ C_M_imag_0_3_read sc_in sc_lv 32 signal 35 } 
	{ C_M_imag_1_0_read sc_in sc_lv 32 signal 36 } 
	{ C_M_imag_1_1_read sc_in sc_lv 32 signal 37 } 
	{ C_M_imag_1_2_read sc_in sc_lv 32 signal 38 } 
	{ C_M_imag_1_3_read sc_in sc_lv 32 signal 39 } 
	{ C_M_imag_2_0_read sc_in sc_lv 32 signal 40 } 
	{ C_M_imag_2_1_read sc_in sc_lv 32 signal 41 } 
	{ C_M_imag_2_2_read sc_in sc_lv 32 signal 42 } 
	{ C_M_imag_2_3_read sc_in sc_lv 32 signal 43 } 
	{ C_M_imag_3_0_read sc_in sc_lv 32 signal 44 } 
	{ C_M_imag_3_1_read sc_in sc_lv 32 signal 45 } 
	{ C_M_imag_3_2_read sc_in sc_lv 32 signal 46 } 
	{ C_M_imag_3_3_read sc_in sc_lv 32 signal 47 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
	{ ap_return_10 sc_out sc_lv 32 signal -1 } 
	{ ap_return_11 sc_out sc_lv 32 signal -1 } 
	{ ap_return_12 sc_out sc_lv 32 signal -1 } 
	{ ap_return_13 sc_out sc_lv 32 signal -1 } 
	{ ap_return_14 sc_out sc_lv 32 signal -1 } 
	{ ap_return_15 sc_out sc_lv 32 signal -1 } 
	{ ap_return_16 sc_out sc_lv 32 signal -1 } 
	{ ap_return_17 sc_out sc_lv 32 signal -1 } 
	{ ap_return_18 sc_out sc_lv 32 signal -1 } 
	{ ap_return_19 sc_out sc_lv 32 signal -1 } 
	{ ap_return_20 sc_out sc_lv 32 signal -1 } 
	{ ap_return_21 sc_out sc_lv 32 signal -1 } 
	{ ap_return_22 sc_out sc_lv 32 signal -1 } 
	{ ap_return_23 sc_out sc_lv 32 signal -1 } 
	{ ap_return_24 sc_out sc_lv 32 signal -1 } 
	{ ap_return_25 sc_out sc_lv 32 signal -1 } 
	{ ap_return_26 sc_out sc_lv 32 signal -1 } 
	{ ap_return_27 sc_out sc_lv 32 signal -1 } 
	{ ap_return_28 sc_out sc_lv 32 signal -1 } 
	{ ap_return_29 sc_out sc_lv 32 signal -1 } 
	{ ap_return_30 sc_out sc_lv 32 signal -1 } 
	{ ap_return_31 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real", "role": "address1" }} , 
 	{ "name": "A_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce1" }} , 
 	{ "name": "A_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q1" }} , 
 	{ "name": "A_M_real1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real1", "role": "address0" }} , 
 	{ "name": "A_M_real1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real1", "role": "ce0" }} , 
 	{ "name": "A_M_real1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real1", "role": "q0" }} , 
 	{ "name": "A_M_real1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real1", "role": "address1" }} , 
 	{ "name": "A_M_real1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real1", "role": "ce1" }} , 
 	{ "name": "A_M_real1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real1", "role": "q1" }} , 
 	{ "name": "A_M_real2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real2", "role": "address0" }} , 
 	{ "name": "A_M_real2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real2", "role": "ce0" }} , 
 	{ "name": "A_M_real2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real2", "role": "q0" }} , 
 	{ "name": "A_M_real2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real2", "role": "address1" }} , 
 	{ "name": "A_M_real2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real2", "role": "ce1" }} , 
 	{ "name": "A_M_real2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real2", "role": "q1" }} , 
 	{ "name": "A_M_real3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real3", "role": "address0" }} , 
 	{ "name": "A_M_real3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real3", "role": "ce0" }} , 
 	{ "name": "A_M_real3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real3", "role": "q0" }} , 
 	{ "name": "A_M_real3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_real3", "role": "address1" }} , 
 	{ "name": "A_M_real3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real3", "role": "ce1" }} , 
 	{ "name": "A_M_real3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real3", "role": "q1" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }} , 
 	{ "name": "A_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address1" }} , 
 	{ "name": "A_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce1" }} , 
 	{ "name": "A_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q1" }} , 
 	{ "name": "A_M_imag4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "address0" }} , 
 	{ "name": "A_M_imag4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "ce0" }} , 
 	{ "name": "A_M_imag4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "q0" }} , 
 	{ "name": "A_M_imag4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "address1" }} , 
 	{ "name": "A_M_imag4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "ce1" }} , 
 	{ "name": "A_M_imag4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "q1" }} , 
 	{ "name": "A_M_imag5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "address0" }} , 
 	{ "name": "A_M_imag5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "ce0" }} , 
 	{ "name": "A_M_imag5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "q0" }} , 
 	{ "name": "A_M_imag5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "address1" }} , 
 	{ "name": "A_M_imag5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "ce1" }} , 
 	{ "name": "A_M_imag5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "q1" }} , 
 	{ "name": "A_M_imag6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "address0" }} , 
 	{ "name": "A_M_imag6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "ce0" }} , 
 	{ "name": "A_M_imag6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "q0" }} , 
 	{ "name": "A_M_imag6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "address1" }} , 
 	{ "name": "A_M_imag6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "ce1" }} , 
 	{ "name": "A_M_imag6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "q1" }} , 
 	{ "name": "B_M_real_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address0" }} , 
 	{ "name": "B_M_real_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce0" }} , 
 	{ "name": "B_M_real_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q0" }} , 
 	{ "name": "B_M_real_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address1" }} , 
 	{ "name": "B_M_real_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce1" }} , 
 	{ "name": "B_M_real_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q1" }} , 
 	{ "name": "B_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address0" }} , 
 	{ "name": "B_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce0" }} , 
 	{ "name": "B_M_real_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q0" }} , 
 	{ "name": "B_M_real_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address1" }} , 
 	{ "name": "B_M_real_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce1" }} , 
 	{ "name": "B_M_real_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q1" }} , 
 	{ "name": "B_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address0" }} , 
 	{ "name": "B_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce0" }} , 
 	{ "name": "B_M_real_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q0" }} , 
 	{ "name": "B_M_real_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address1" }} , 
 	{ "name": "B_M_real_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce1" }} , 
 	{ "name": "B_M_real_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q1" }} , 
 	{ "name": "B_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address0" }} , 
 	{ "name": "B_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce0" }} , 
 	{ "name": "B_M_real_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q0" }} , 
 	{ "name": "B_M_real_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address1" }} , 
 	{ "name": "B_M_real_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce1" }} , 
 	{ "name": "B_M_real_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q1" }} , 
 	{ "name": "B_M_imag_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address0" }} , 
 	{ "name": "B_M_imag_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce0" }} , 
 	{ "name": "B_M_imag_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q0" }} , 
 	{ "name": "B_M_imag_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address1" }} , 
 	{ "name": "B_M_imag_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce1" }} , 
 	{ "name": "B_M_imag_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q1" }} , 
 	{ "name": "B_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address0" }} , 
 	{ "name": "B_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce0" }} , 
 	{ "name": "B_M_imag_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q0" }} , 
 	{ "name": "B_M_imag_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address1" }} , 
 	{ "name": "B_M_imag_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce1" }} , 
 	{ "name": "B_M_imag_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q1" }} , 
 	{ "name": "B_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address0" }} , 
 	{ "name": "B_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce0" }} , 
 	{ "name": "B_M_imag_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q0" }} , 
 	{ "name": "B_M_imag_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address1" }} , 
 	{ "name": "B_M_imag_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce1" }} , 
 	{ "name": "B_M_imag_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q1" }} , 
 	{ "name": "B_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address0" }} , 
 	{ "name": "B_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "ce0" }} , 
 	{ "name": "B_M_imag_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "q0" }} , 
 	{ "name": "B_M_imag_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address1" }} , 
 	{ "name": "B_M_imag_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "ce1" }} , 
 	{ "name": "B_M_imag_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "q1" }} , 
 	{ "name": "C_M_real_0_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_0_0_read", "role": "default" }} , 
 	{ "name": "C_M_real_0_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_0_1_read", "role": "default" }} , 
 	{ "name": "C_M_real_0_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_0_2_read", "role": "default" }} , 
 	{ "name": "C_M_real_0_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_0_3_read", "role": "default" }} , 
 	{ "name": "C_M_real_1_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_1_0_read", "role": "default" }} , 
 	{ "name": "C_M_real_1_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_1_1_read", "role": "default" }} , 
 	{ "name": "C_M_real_1_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_1_2_read", "role": "default" }} , 
 	{ "name": "C_M_real_1_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_1_3_read", "role": "default" }} , 
 	{ "name": "C_M_real_2_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_2_0_read", "role": "default" }} , 
 	{ "name": "C_M_real_2_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_2_1_read", "role": "default" }} , 
 	{ "name": "C_M_real_2_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_2_2_read", "role": "default" }} , 
 	{ "name": "C_M_real_2_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_2_3_read", "role": "default" }} , 
 	{ "name": "C_M_real_3_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_3_0_read", "role": "default" }} , 
 	{ "name": "C_M_real_3_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_3_1_read", "role": "default" }} , 
 	{ "name": "C_M_real_3_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_3_2_read", "role": "default" }} , 
 	{ "name": "C_M_real_3_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_3_3_read", "role": "default" }} , 
 	{ "name": "C_M_imag_0_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_0_0_read", "role": "default" }} , 
 	{ "name": "C_M_imag_0_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_0_1_read", "role": "default" }} , 
 	{ "name": "C_M_imag_0_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_0_2_read", "role": "default" }} , 
 	{ "name": "C_M_imag_0_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_0_3_read", "role": "default" }} , 
 	{ "name": "C_M_imag_1_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_1_0_read", "role": "default" }} , 
 	{ "name": "C_M_imag_1_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_1_1_read", "role": "default" }} , 
 	{ "name": "C_M_imag_1_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_1_2_read", "role": "default" }} , 
 	{ "name": "C_M_imag_1_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_1_3_read", "role": "default" }} , 
 	{ "name": "C_M_imag_2_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_2_0_read", "role": "default" }} , 
 	{ "name": "C_M_imag_2_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_2_1_read", "role": "default" }} , 
 	{ "name": "C_M_imag_2_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_2_2_read", "role": "default" }} , 
 	{ "name": "C_M_imag_2_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_2_3_read", "role": "default" }} , 
 	{ "name": "C_M_imag_3_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_3_0_read", "role": "default" }} , 
 	{ "name": "C_M_imag_3_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_3_1_read", "role": "default" }} , 
 	{ "name": "C_M_imag_3_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_3_2_read", "role": "default" }} , 
 	{ "name": "C_M_imag_3_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_3_3_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "15", "22", "29", "36", "43", "50", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72"],
		"CDFG" : "DiagMatMul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "105", "EstimateLatencyMax" : "105",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_real_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_real_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_real_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_real_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_imag_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_imag_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_imag_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_M_imag_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "C_M_real_0_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_0_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_0_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_0_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_1_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_1_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_1_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_1_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_2_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_2_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_2_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_2_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_3_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_3_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_3_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_real_3_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_0_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_0_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_0_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_0_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_1_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_1_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_1_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_1_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_2_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_2_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_2_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_2_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_3_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_3_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_3_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "C_M_imag_3_3_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fsub_32ns_bkb_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fadd_32ns_cud_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fsub_32ns_bkb_U1", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fadd_32ns_cud_U2", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U3", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U4", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U5", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U6", "Parent" : "8"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20", "21"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fsub_32ns_bkb_U1", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fadd_32ns_cud_U2", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U3", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U4", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U5", "Parent" : "15"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U6", "Parent" : "15"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312", "Parent" : "0", "Child" : ["23", "24", "25", "26", "27", "28"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fsub_32ns_bkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fadd_32ns_cud_U2", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U3", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U4", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U5", "Parent" : "22"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U6", "Parent" : "22"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320", "Parent" : "0", "Child" : ["30", "31", "32", "33", "34", "35"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fsub_32ns_bkb_U1", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fadd_32ns_cud_U2", "Parent" : "29"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U3", "Parent" : "29"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U4", "Parent" : "29"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U5", "Parent" : "29"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U6", "Parent" : "29"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328", "Parent" : "0", "Child" : ["37", "38", "39", "40", "41", "42"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fsub_32ns_bkb_U1", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fadd_32ns_cud_U2", "Parent" : "36"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U3", "Parent" : "36"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U4", "Parent" : "36"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U5", "Parent" : "36"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U6", "Parent" : "36"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336", "Parent" : "0", "Child" : ["44", "45", "46", "47", "48", "49"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fsub_32ns_bkb_U1", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fadd_32ns_cud_U2", "Parent" : "43"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U3", "Parent" : "43"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U4", "Parent" : "43"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U5", "Parent" : "43"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U6", "Parent" : "43"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344", "Parent" : "0", "Child" : ["51", "52", "53", "54", "55", "56"],
		"CDFG" : "operator_mul_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "5", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_x_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_x_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_y_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fsub_32ns_bkb_U1", "Parent" : "50"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fadd_32ns_cud_U2", "Parent" : "50"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U3", "Parent" : "50"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U4", "Parent" : "50"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U5", "Parent" : "50"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U6", "Parent" : "50"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U14", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U15", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U16", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U17", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U18", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U19", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U20", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U21", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U22", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U23", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U24", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U25", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U26", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U27", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U28", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U29", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	DiagMatMul {
		A_M_real {Type I LastRead 3 FirstWrite -1}
		A_M_real1 {Type I LastRead 3 FirstWrite -1}
		A_M_real2 {Type I LastRead 3 FirstWrite -1}
		A_M_real3 {Type I LastRead 4 FirstWrite -1}
		A_M_imag {Type I LastRead 3 FirstWrite -1}
		A_M_imag4 {Type I LastRead 3 FirstWrite -1}
		A_M_imag5 {Type I LastRead 3 FirstWrite -1}
		A_M_imag6 {Type I LastRead 4 FirstWrite -1}
		B_M_real_0 {Type I LastRead 3 FirstWrite -1}
		B_M_real_1 {Type I LastRead 3 FirstWrite -1}
		B_M_real_2 {Type I LastRead 3 FirstWrite -1}
		B_M_real_3 {Type I LastRead 3 FirstWrite -1}
		B_M_imag_0 {Type I LastRead 3 FirstWrite -1}
		B_M_imag_1 {Type I LastRead 3 FirstWrite -1}
		B_M_imag_2 {Type I LastRead 3 FirstWrite -1}
		B_M_imag_3 {Type I LastRead 3 FirstWrite -1}
		C_M_real_0_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_0_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_0_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_0_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_1_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_1_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_1_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_1_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_2_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_2_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_2_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_2_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_3_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_3_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_3_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_real_3_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_0_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_0_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_0_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_0_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_1_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_1_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_1_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_1_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_2_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_2_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_2_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_2_3_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_3_0_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_3_1_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_3_2_read {Type I LastRead 0 FirstWrite -1}
		C_M_imag_3_3_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_mul_float {
		p_x_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "105", "Max" : "105"}
	, {"Name" : "Interval", "Min" : "105", "Max" : "105"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 6 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_q0 mem_dout 0 32 }  { A_M_real_address1 MemPortADDR2 1 6 }  { A_M_real_ce1 MemPortCE2 1 1 }  { A_M_real_q1 MemPortDOUT2 0 32 } } }
	A_M_real1 { ap_memory {  { A_M_real1_address0 mem_address 1 6 }  { A_M_real1_ce0 mem_ce 1 1 }  { A_M_real1_q0 mem_dout 0 32 }  { A_M_real1_address1 MemPortADDR2 1 6 }  { A_M_real1_ce1 MemPortCE2 1 1 }  { A_M_real1_q1 MemPortDOUT2 0 32 } } }
	A_M_real2 { ap_memory {  { A_M_real2_address0 mem_address 1 6 }  { A_M_real2_ce0 mem_ce 1 1 }  { A_M_real2_q0 mem_dout 0 32 }  { A_M_real2_address1 MemPortADDR2 1 6 }  { A_M_real2_ce1 MemPortCE2 1 1 }  { A_M_real2_q1 MemPortDOUT2 0 32 } } }
	A_M_real3 { ap_memory {  { A_M_real3_address0 mem_address 1 6 }  { A_M_real3_ce0 mem_ce 1 1 }  { A_M_real3_q0 mem_dout 0 32 }  { A_M_real3_address1 MemPortADDR2 1 6 }  { A_M_real3_ce1 MemPortCE2 1 1 }  { A_M_real3_q1 MemPortDOUT2 0 32 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 6 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_q0 mem_dout 0 32 }  { A_M_imag_address1 MemPortADDR2 1 6 }  { A_M_imag_ce1 MemPortCE2 1 1 }  { A_M_imag_q1 MemPortDOUT2 0 32 } } }
	A_M_imag4 { ap_memory {  { A_M_imag4_address0 mem_address 1 6 }  { A_M_imag4_ce0 mem_ce 1 1 }  { A_M_imag4_q0 mem_dout 0 32 }  { A_M_imag4_address1 MemPortADDR2 1 6 }  { A_M_imag4_ce1 MemPortCE2 1 1 }  { A_M_imag4_q1 MemPortDOUT2 0 32 } } }
	A_M_imag5 { ap_memory {  { A_M_imag5_address0 mem_address 1 6 }  { A_M_imag5_ce0 mem_ce 1 1 }  { A_M_imag5_q0 mem_dout 0 32 }  { A_M_imag5_address1 MemPortADDR2 1 6 }  { A_M_imag5_ce1 MemPortCE2 1 1 }  { A_M_imag5_q1 MemPortDOUT2 0 32 } } }
	A_M_imag6 { ap_memory {  { A_M_imag6_address0 mem_address 1 6 }  { A_M_imag6_ce0 mem_ce 1 1 }  { A_M_imag6_q0 mem_dout 0 32 }  { A_M_imag6_address1 MemPortADDR2 1 6 }  { A_M_imag6_ce1 MemPortCE2 1 1 }  { A_M_imag6_q1 MemPortDOUT2 0 32 } } }
	B_M_real_0 { ap_memory {  { B_M_real_0_address0 mem_address 1 6 }  { B_M_real_0_ce0 mem_ce 1 1 }  { B_M_real_0_q0 mem_dout 0 32 }  { B_M_real_0_address1 MemPortADDR2 1 6 }  { B_M_real_0_ce1 MemPortCE2 1 1 }  { B_M_real_0_q1 MemPortDOUT2 0 32 } } }
	B_M_real_1 { ap_memory {  { B_M_real_1_address0 mem_address 1 6 }  { B_M_real_1_ce0 mem_ce 1 1 }  { B_M_real_1_q0 mem_dout 0 32 }  { B_M_real_1_address1 MemPortADDR2 1 6 }  { B_M_real_1_ce1 MemPortCE2 1 1 }  { B_M_real_1_q1 MemPortDOUT2 0 32 } } }
	B_M_real_2 { ap_memory {  { B_M_real_2_address0 mem_address 1 6 }  { B_M_real_2_ce0 mem_ce 1 1 }  { B_M_real_2_q0 mem_dout 0 32 }  { B_M_real_2_address1 MemPortADDR2 1 6 }  { B_M_real_2_ce1 MemPortCE2 1 1 }  { B_M_real_2_q1 MemPortDOUT2 0 32 } } }
	B_M_real_3 { ap_memory {  { B_M_real_3_address0 mem_address 1 6 }  { B_M_real_3_ce0 mem_ce 1 1 }  { B_M_real_3_q0 mem_dout 0 32 }  { B_M_real_3_address1 MemPortADDR2 1 6 }  { B_M_real_3_ce1 MemPortCE2 1 1 }  { B_M_real_3_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_0 { ap_memory {  { B_M_imag_0_address0 mem_address 1 6 }  { B_M_imag_0_ce0 mem_ce 1 1 }  { B_M_imag_0_q0 mem_dout 0 32 }  { B_M_imag_0_address1 MemPortADDR2 1 6 }  { B_M_imag_0_ce1 MemPortCE2 1 1 }  { B_M_imag_0_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_1 { ap_memory {  { B_M_imag_1_address0 mem_address 1 6 }  { B_M_imag_1_ce0 mem_ce 1 1 }  { B_M_imag_1_q0 mem_dout 0 32 }  { B_M_imag_1_address1 MemPortADDR2 1 6 }  { B_M_imag_1_ce1 MemPortCE2 1 1 }  { B_M_imag_1_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_2 { ap_memory {  { B_M_imag_2_address0 mem_address 1 6 }  { B_M_imag_2_ce0 mem_ce 1 1 }  { B_M_imag_2_q0 mem_dout 0 32 }  { B_M_imag_2_address1 MemPortADDR2 1 6 }  { B_M_imag_2_ce1 MemPortCE2 1 1 }  { B_M_imag_2_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_3 { ap_memory {  { B_M_imag_3_address0 mem_address 1 6 }  { B_M_imag_3_ce0 mem_ce 1 1 }  { B_M_imag_3_q0 mem_dout 0 32 }  { B_M_imag_3_address1 MemPortADDR2 1 6 }  { B_M_imag_3_ce1 MemPortCE2 1 1 }  { B_M_imag_3_q1 MemPortDOUT2 0 32 } } }
	C_M_real_0_0_read { ap_none {  { C_M_real_0_0_read in_data 0 32 } } }
	C_M_real_0_1_read { ap_none {  { C_M_real_0_1_read in_data 0 32 } } }
	C_M_real_0_2_read { ap_none {  { C_M_real_0_2_read in_data 0 32 } } }
	C_M_real_0_3_read { ap_none {  { C_M_real_0_3_read in_data 0 32 } } }
	C_M_real_1_0_read { ap_none {  { C_M_real_1_0_read in_data 0 32 } } }
	C_M_real_1_1_read { ap_none {  { C_M_real_1_1_read in_data 0 32 } } }
	C_M_real_1_2_read { ap_none {  { C_M_real_1_2_read in_data 0 32 } } }
	C_M_real_1_3_read { ap_none {  { C_M_real_1_3_read in_data 0 32 } } }
	C_M_real_2_0_read { ap_none {  { C_M_real_2_0_read in_data 0 32 } } }
	C_M_real_2_1_read { ap_none {  { C_M_real_2_1_read in_data 0 32 } } }
	C_M_real_2_2_read { ap_none {  { C_M_real_2_2_read in_data 0 32 } } }
	C_M_real_2_3_read { ap_none {  { C_M_real_2_3_read in_data 0 32 } } }
	C_M_real_3_0_read { ap_none {  { C_M_real_3_0_read in_data 0 32 } } }
	C_M_real_3_1_read { ap_none {  { C_M_real_3_1_read in_data 0 32 } } }
	C_M_real_3_2_read { ap_none {  { C_M_real_3_2_read in_data 0 32 } } }
	C_M_real_3_3_read { ap_none {  { C_M_real_3_3_read in_data 0 32 } } }
	C_M_imag_0_0_read { ap_none {  { C_M_imag_0_0_read in_data 0 32 } } }
	C_M_imag_0_1_read { ap_none {  { C_M_imag_0_1_read in_data 0 32 } } }
	C_M_imag_0_2_read { ap_none {  { C_M_imag_0_2_read in_data 0 32 } } }
	C_M_imag_0_3_read { ap_none {  { C_M_imag_0_3_read in_data 0 32 } } }
	C_M_imag_1_0_read { ap_none {  { C_M_imag_1_0_read in_data 0 32 } } }
	C_M_imag_1_1_read { ap_none {  { C_M_imag_1_1_read in_data 0 32 } } }
	C_M_imag_1_2_read { ap_none {  { C_M_imag_1_2_read in_data 0 32 } } }
	C_M_imag_1_3_read { ap_none {  { C_M_imag_1_3_read in_data 0 32 } } }
	C_M_imag_2_0_read { ap_none {  { C_M_imag_2_0_read in_data 0 32 } } }
	C_M_imag_2_1_read { ap_none {  { C_M_imag_2_1_read in_data 0 32 } } }
	C_M_imag_2_2_read { ap_none {  { C_M_imag_2_2_read in_data 0 32 } } }
	C_M_imag_2_3_read { ap_none {  { C_M_imag_2_3_read in_data 0 32 } } }
	C_M_imag_3_0_read { ap_none {  { C_M_imag_3_0_read in_data 0 32 } } }
	C_M_imag_3_1_read { ap_none {  { C_M_imag_3_1_read in_data 0 32 } } }
	C_M_imag_3_2_read { ap_none {  { C_M_imag_3_2_read in_data 0 32 } } }
	C_M_imag_3_3_read { ap_none {  { C_M_imag_3_3_read in_data 0 32 } } }
}

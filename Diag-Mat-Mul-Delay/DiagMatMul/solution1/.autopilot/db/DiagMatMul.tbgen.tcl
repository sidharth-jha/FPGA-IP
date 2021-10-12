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
	{ A_M_real_0 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_1 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_2 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_3 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_4 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_5 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_6 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_real_7 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_0 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_1 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_2 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_3 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_4 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_5 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_6 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag_7 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_M_real_0 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_real_1 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_real_2 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_real_3 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_imag_0 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_imag_1 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_imag_2 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ B_M_imag_3 float 32 regular {array 32 { 1 1 } 1 1 }  }
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
	{ "Name" : "A_M_real_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_real_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
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
	{ A_M_real_0_address0 sc_out sc_lv 4 signal 0 } 
	{ A_M_real_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_0_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_real_1_address0 sc_out sc_lv 4 signal 1 } 
	{ A_M_real_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_real_1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_M_real_2_address0 sc_out sc_lv 4 signal 2 } 
	{ A_M_real_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_M_real_2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_M_real_3_address0 sc_out sc_lv 4 signal 3 } 
	{ A_M_real_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_M_real_3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_M_real_4_address0 sc_out sc_lv 4 signal 4 } 
	{ A_M_real_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_M_real_4_q0 sc_in sc_lv 32 signal 4 } 
	{ A_M_real_5_address0 sc_out sc_lv 4 signal 5 } 
	{ A_M_real_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_M_real_5_q0 sc_in sc_lv 32 signal 5 } 
	{ A_M_real_6_address0 sc_out sc_lv 4 signal 6 } 
	{ A_M_real_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_M_real_6_q0 sc_in sc_lv 32 signal 6 } 
	{ A_M_real_7_address0 sc_out sc_lv 4 signal 7 } 
	{ A_M_real_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_M_real_7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_M_imag_0_address0 sc_out sc_lv 4 signal 8 } 
	{ A_M_imag_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_M_imag_0_q0 sc_in sc_lv 32 signal 8 } 
	{ A_M_imag_1_address0 sc_out sc_lv 4 signal 9 } 
	{ A_M_imag_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_M_imag_1_q0 sc_in sc_lv 32 signal 9 } 
	{ A_M_imag_2_address0 sc_out sc_lv 4 signal 10 } 
	{ A_M_imag_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ A_M_imag_2_q0 sc_in sc_lv 32 signal 10 } 
	{ A_M_imag_3_address0 sc_out sc_lv 4 signal 11 } 
	{ A_M_imag_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ A_M_imag_3_q0 sc_in sc_lv 32 signal 11 } 
	{ A_M_imag_4_address0 sc_out sc_lv 4 signal 12 } 
	{ A_M_imag_4_ce0 sc_out sc_logic 1 signal 12 } 
	{ A_M_imag_4_q0 sc_in sc_lv 32 signal 12 } 
	{ A_M_imag_5_address0 sc_out sc_lv 4 signal 13 } 
	{ A_M_imag_5_ce0 sc_out sc_logic 1 signal 13 } 
	{ A_M_imag_5_q0 sc_in sc_lv 32 signal 13 } 
	{ A_M_imag_6_address0 sc_out sc_lv 4 signal 14 } 
	{ A_M_imag_6_ce0 sc_out sc_logic 1 signal 14 } 
	{ A_M_imag_6_q0 sc_in sc_lv 32 signal 14 } 
	{ A_M_imag_7_address0 sc_out sc_lv 4 signal 15 } 
	{ A_M_imag_7_ce0 sc_out sc_logic 1 signal 15 } 
	{ A_M_imag_7_q0 sc_in sc_lv 32 signal 15 } 
	{ B_M_real_0_address0 sc_out sc_lv 5 signal 16 } 
	{ B_M_real_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ B_M_real_0_q0 sc_in sc_lv 32 signal 16 } 
	{ B_M_real_0_address1 sc_out sc_lv 5 signal 16 } 
	{ B_M_real_0_ce1 sc_out sc_logic 1 signal 16 } 
	{ B_M_real_0_q1 sc_in sc_lv 32 signal 16 } 
	{ B_M_real_1_address0 sc_out sc_lv 5 signal 17 } 
	{ B_M_real_1_ce0 sc_out sc_logic 1 signal 17 } 
	{ B_M_real_1_q0 sc_in sc_lv 32 signal 17 } 
	{ B_M_real_1_address1 sc_out sc_lv 5 signal 17 } 
	{ B_M_real_1_ce1 sc_out sc_logic 1 signal 17 } 
	{ B_M_real_1_q1 sc_in sc_lv 32 signal 17 } 
	{ B_M_real_2_address0 sc_out sc_lv 5 signal 18 } 
	{ B_M_real_2_ce0 sc_out sc_logic 1 signal 18 } 
	{ B_M_real_2_q0 sc_in sc_lv 32 signal 18 } 
	{ B_M_real_2_address1 sc_out sc_lv 5 signal 18 } 
	{ B_M_real_2_ce1 sc_out sc_logic 1 signal 18 } 
	{ B_M_real_2_q1 sc_in sc_lv 32 signal 18 } 
	{ B_M_real_3_address0 sc_out sc_lv 5 signal 19 } 
	{ B_M_real_3_ce0 sc_out sc_logic 1 signal 19 } 
	{ B_M_real_3_q0 sc_in sc_lv 32 signal 19 } 
	{ B_M_real_3_address1 sc_out sc_lv 5 signal 19 } 
	{ B_M_real_3_ce1 sc_out sc_logic 1 signal 19 } 
	{ B_M_real_3_q1 sc_in sc_lv 32 signal 19 } 
	{ B_M_imag_0_address0 sc_out sc_lv 5 signal 20 } 
	{ B_M_imag_0_ce0 sc_out sc_logic 1 signal 20 } 
	{ B_M_imag_0_q0 sc_in sc_lv 32 signal 20 } 
	{ B_M_imag_0_address1 sc_out sc_lv 5 signal 20 } 
	{ B_M_imag_0_ce1 sc_out sc_logic 1 signal 20 } 
	{ B_M_imag_0_q1 sc_in sc_lv 32 signal 20 } 
	{ B_M_imag_1_address0 sc_out sc_lv 5 signal 21 } 
	{ B_M_imag_1_ce0 sc_out sc_logic 1 signal 21 } 
	{ B_M_imag_1_q0 sc_in sc_lv 32 signal 21 } 
	{ B_M_imag_1_address1 sc_out sc_lv 5 signal 21 } 
	{ B_M_imag_1_ce1 sc_out sc_logic 1 signal 21 } 
	{ B_M_imag_1_q1 sc_in sc_lv 32 signal 21 } 
	{ B_M_imag_2_address0 sc_out sc_lv 5 signal 22 } 
	{ B_M_imag_2_ce0 sc_out sc_logic 1 signal 22 } 
	{ B_M_imag_2_q0 sc_in sc_lv 32 signal 22 } 
	{ B_M_imag_2_address1 sc_out sc_lv 5 signal 22 } 
	{ B_M_imag_2_ce1 sc_out sc_logic 1 signal 22 } 
	{ B_M_imag_2_q1 sc_in sc_lv 32 signal 22 } 
	{ B_M_imag_3_address0 sc_out sc_lv 5 signal 23 } 
	{ B_M_imag_3_ce0 sc_out sc_logic 1 signal 23 } 
	{ B_M_imag_3_q0 sc_in sc_lv 32 signal 23 } 
	{ B_M_imag_3_address1 sc_out sc_lv 5 signal 23 } 
	{ B_M_imag_3_ce1 sc_out sc_logic 1 signal 23 } 
	{ B_M_imag_3_q1 sc_in sc_lv 32 signal 23 } 
	{ C_M_real_0_0_read sc_in sc_lv 32 signal 24 } 
	{ C_M_real_0_1_read sc_in sc_lv 32 signal 25 } 
	{ C_M_real_0_2_read sc_in sc_lv 32 signal 26 } 
	{ C_M_real_0_3_read sc_in sc_lv 32 signal 27 } 
	{ C_M_real_1_0_read sc_in sc_lv 32 signal 28 } 
	{ C_M_real_1_1_read sc_in sc_lv 32 signal 29 } 
	{ C_M_real_1_2_read sc_in sc_lv 32 signal 30 } 
	{ C_M_real_1_3_read sc_in sc_lv 32 signal 31 } 
	{ C_M_real_2_0_read sc_in sc_lv 32 signal 32 } 
	{ C_M_real_2_1_read sc_in sc_lv 32 signal 33 } 
	{ C_M_real_2_2_read sc_in sc_lv 32 signal 34 } 
	{ C_M_real_2_3_read sc_in sc_lv 32 signal 35 } 
	{ C_M_real_3_0_read sc_in sc_lv 32 signal 36 } 
	{ C_M_real_3_1_read sc_in sc_lv 32 signal 37 } 
	{ C_M_real_3_2_read sc_in sc_lv 32 signal 38 } 
	{ C_M_real_3_3_read sc_in sc_lv 32 signal 39 } 
	{ C_M_imag_0_0_read sc_in sc_lv 32 signal 40 } 
	{ C_M_imag_0_1_read sc_in sc_lv 32 signal 41 } 
	{ C_M_imag_0_2_read sc_in sc_lv 32 signal 42 } 
	{ C_M_imag_0_3_read sc_in sc_lv 32 signal 43 } 
	{ C_M_imag_1_0_read sc_in sc_lv 32 signal 44 } 
	{ C_M_imag_1_1_read sc_in sc_lv 32 signal 45 } 
	{ C_M_imag_1_2_read sc_in sc_lv 32 signal 46 } 
	{ C_M_imag_1_3_read sc_in sc_lv 32 signal 47 } 
	{ C_M_imag_2_0_read sc_in sc_lv 32 signal 48 } 
	{ C_M_imag_2_1_read sc_in sc_lv 32 signal 49 } 
	{ C_M_imag_2_2_read sc_in sc_lv 32 signal 50 } 
	{ C_M_imag_2_3_read sc_in sc_lv 32 signal 51 } 
	{ C_M_imag_3_0_read sc_in sc_lv 32 signal 52 } 
	{ C_M_imag_3_1_read sc_in sc_lv 32 signal 53 } 
	{ C_M_imag_3_2_read sc_in sc_lv 32 signal 54 } 
	{ C_M_imag_3_3_read sc_in sc_lv 32 signal 55 } 
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
 	{ "name": "A_M_real_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_0", "role": "address0" }} , 
 	{ "name": "A_M_real_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_0", "role": "ce0" }} , 
 	{ "name": "A_M_real_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_0", "role": "q0" }} , 
 	{ "name": "A_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_1", "role": "address0" }} , 
 	{ "name": "A_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_1", "role": "ce0" }} , 
 	{ "name": "A_M_real_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_1", "role": "q0" }} , 
 	{ "name": "A_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_2", "role": "address0" }} , 
 	{ "name": "A_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_2", "role": "ce0" }} , 
 	{ "name": "A_M_real_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_2", "role": "q0" }} , 
 	{ "name": "A_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_3", "role": "address0" }} , 
 	{ "name": "A_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_3", "role": "ce0" }} , 
 	{ "name": "A_M_real_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_3", "role": "q0" }} , 
 	{ "name": "A_M_real_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_4", "role": "address0" }} , 
 	{ "name": "A_M_real_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_4", "role": "ce0" }} , 
 	{ "name": "A_M_real_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_4", "role": "q0" }} , 
 	{ "name": "A_M_real_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_5", "role": "address0" }} , 
 	{ "name": "A_M_real_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_5", "role": "ce0" }} , 
 	{ "name": "A_M_real_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_5", "role": "q0" }} , 
 	{ "name": "A_M_real_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_6", "role": "address0" }} , 
 	{ "name": "A_M_real_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_6", "role": "ce0" }} , 
 	{ "name": "A_M_real_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_6", "role": "q0" }} , 
 	{ "name": "A_M_real_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real_7", "role": "address0" }} , 
 	{ "name": "A_M_real_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real_7", "role": "ce0" }} , 
 	{ "name": "A_M_real_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real_7", "role": "q0" }} , 
 	{ "name": "A_M_imag_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_0", "role": "address0" }} , 
 	{ "name": "A_M_imag_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_0", "role": "ce0" }} , 
 	{ "name": "A_M_imag_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_0", "role": "q0" }} , 
 	{ "name": "A_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_1", "role": "address0" }} , 
 	{ "name": "A_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_1", "role": "ce0" }} , 
 	{ "name": "A_M_imag_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_1", "role": "q0" }} , 
 	{ "name": "A_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_2", "role": "address0" }} , 
 	{ "name": "A_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_2", "role": "ce0" }} , 
 	{ "name": "A_M_imag_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_2", "role": "q0" }} , 
 	{ "name": "A_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_3", "role": "address0" }} , 
 	{ "name": "A_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_3", "role": "ce0" }} , 
 	{ "name": "A_M_imag_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_3", "role": "q0" }} , 
 	{ "name": "A_M_imag_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_4", "role": "address0" }} , 
 	{ "name": "A_M_imag_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_4", "role": "ce0" }} , 
 	{ "name": "A_M_imag_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_4", "role": "q0" }} , 
 	{ "name": "A_M_imag_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_5", "role": "address0" }} , 
 	{ "name": "A_M_imag_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_5", "role": "ce0" }} , 
 	{ "name": "A_M_imag_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_5", "role": "q0" }} , 
 	{ "name": "A_M_imag_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_6", "role": "address0" }} , 
 	{ "name": "A_M_imag_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_6", "role": "ce0" }} , 
 	{ "name": "A_M_imag_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_6", "role": "q0" }} , 
 	{ "name": "A_M_imag_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag_7", "role": "address0" }} , 
 	{ "name": "A_M_imag_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag_7", "role": "ce0" }} , 
 	{ "name": "A_M_imag_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag_7", "role": "q0" }} , 
 	{ "name": "B_M_real_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address0" }} , 
 	{ "name": "B_M_real_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce0" }} , 
 	{ "name": "B_M_real_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q0" }} , 
 	{ "name": "B_M_real_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address1" }} , 
 	{ "name": "B_M_real_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce1" }} , 
 	{ "name": "B_M_real_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q1" }} , 
 	{ "name": "B_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address0" }} , 
 	{ "name": "B_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce0" }} , 
 	{ "name": "B_M_real_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q0" }} , 
 	{ "name": "B_M_real_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address1" }} , 
 	{ "name": "B_M_real_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce1" }} , 
 	{ "name": "B_M_real_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q1" }} , 
 	{ "name": "B_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address0" }} , 
 	{ "name": "B_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce0" }} , 
 	{ "name": "B_M_real_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q0" }} , 
 	{ "name": "B_M_real_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address1" }} , 
 	{ "name": "B_M_real_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce1" }} , 
 	{ "name": "B_M_real_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q1" }} , 
 	{ "name": "B_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address0" }} , 
 	{ "name": "B_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce0" }} , 
 	{ "name": "B_M_real_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q0" }} , 
 	{ "name": "B_M_real_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address1" }} , 
 	{ "name": "B_M_real_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce1" }} , 
 	{ "name": "B_M_real_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q1" }} , 
 	{ "name": "B_M_imag_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address0" }} , 
 	{ "name": "B_M_imag_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce0" }} , 
 	{ "name": "B_M_imag_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q0" }} , 
 	{ "name": "B_M_imag_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address1" }} , 
 	{ "name": "B_M_imag_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce1" }} , 
 	{ "name": "B_M_imag_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q1" }} , 
 	{ "name": "B_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address0" }} , 
 	{ "name": "B_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce0" }} , 
 	{ "name": "B_M_imag_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q0" }} , 
 	{ "name": "B_M_imag_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address1" }} , 
 	{ "name": "B_M_imag_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce1" }} , 
 	{ "name": "B_M_imag_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q1" }} , 
 	{ "name": "B_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address0" }} , 
 	{ "name": "B_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce0" }} , 
 	{ "name": "B_M_imag_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q0" }} , 
 	{ "name": "B_M_imag_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address1" }} , 
 	{ "name": "B_M_imag_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce1" }} , 
 	{ "name": "B_M_imag_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q1" }} , 
 	{ "name": "B_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address0" }} , 
 	{ "name": "B_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "ce0" }} , 
 	{ "name": "B_M_imag_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "q0" }} , 
 	{ "name": "B_M_imag_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address1" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64"],
		"CDFG" : "DiagMatMul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "56", "EstimateLatencyMax" : "56",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_M_real_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_real_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag_7", "Type" : "Memory", "Direction" : "I"},
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U76", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U77", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U78", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U79", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U80", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U81", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U82", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U83", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U84", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U85", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U86", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U87", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U88", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U89", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U90", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U91", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U92", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U93", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U94", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U95", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U96", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U97", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U98", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U99", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U100", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U101", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U102", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U103", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U104", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U105", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U106", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U107", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U108", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U109", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U110", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U111", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U112", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U113", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U114", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U115", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U116", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U117", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U118", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U119", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U120", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U121", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U122", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U123", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U124", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U125", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U126", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U127", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U128", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U129", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U130", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U131", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U132", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U133", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U134", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U135", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U136", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U137", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U138", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U139", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	DiagMatMul {
		A_M_real_0 {Type I LastRead 1 FirstWrite -1}
		A_M_real_1 {Type I LastRead 5 FirstWrite -1}
		A_M_real_2 {Type I LastRead 9 FirstWrite -1}
		A_M_real_3 {Type I LastRead 13 FirstWrite -1}
		A_M_real_4 {Type I LastRead 17 FirstWrite -1}
		A_M_real_5 {Type I LastRead 21 FirstWrite -1}
		A_M_real_6 {Type I LastRead 25 FirstWrite -1}
		A_M_real_7 {Type I LastRead 29 FirstWrite -1}
		A_M_imag_0 {Type I LastRead 1 FirstWrite -1}
		A_M_imag_1 {Type I LastRead 5 FirstWrite -1}
		A_M_imag_2 {Type I LastRead 9 FirstWrite -1}
		A_M_imag_3 {Type I LastRead 13 FirstWrite -1}
		A_M_imag_4 {Type I LastRead 17 FirstWrite -1}
		A_M_imag_5 {Type I LastRead 21 FirstWrite -1}
		A_M_imag_6 {Type I LastRead 25 FirstWrite -1}
		A_M_imag_7 {Type I LastRead 29 FirstWrite -1}
		B_M_real_0 {Type I LastRead 17 FirstWrite -1}
		B_M_real_1 {Type I LastRead 21 FirstWrite -1}
		B_M_real_2 {Type I LastRead 25 FirstWrite -1}
		B_M_real_3 {Type I LastRead 29 FirstWrite -1}
		B_M_imag_0 {Type I LastRead 17 FirstWrite -1}
		B_M_imag_1 {Type I LastRead 21 FirstWrite -1}
		B_M_imag_2 {Type I LastRead 25 FirstWrite -1}
		B_M_imag_3 {Type I LastRead 29 FirstWrite -1}
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
		C_M_imag_3_3_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "56", "Max" : "56"}
	, {"Name" : "Interval", "Min" : "56", "Max" : "56"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_M_real_0 { ap_memory {  { A_M_real_0_address0 mem_address 1 4 }  { A_M_real_0_ce0 mem_ce 1 1 }  { A_M_real_0_q0 mem_dout 0 32 } } }
	A_M_real_1 { ap_memory {  { A_M_real_1_address0 mem_address 1 4 }  { A_M_real_1_ce0 mem_ce 1 1 }  { A_M_real_1_q0 mem_dout 0 32 } } }
	A_M_real_2 { ap_memory {  { A_M_real_2_address0 mem_address 1 4 }  { A_M_real_2_ce0 mem_ce 1 1 }  { A_M_real_2_q0 mem_dout 0 32 } } }
	A_M_real_3 { ap_memory {  { A_M_real_3_address0 mem_address 1 4 }  { A_M_real_3_ce0 mem_ce 1 1 }  { A_M_real_3_q0 mem_dout 0 32 } } }
	A_M_real_4 { ap_memory {  { A_M_real_4_address0 mem_address 1 4 }  { A_M_real_4_ce0 mem_ce 1 1 }  { A_M_real_4_q0 mem_dout 0 32 } } }
	A_M_real_5 { ap_memory {  { A_M_real_5_address0 mem_address 1 4 }  { A_M_real_5_ce0 mem_ce 1 1 }  { A_M_real_5_q0 mem_dout 0 32 } } }
	A_M_real_6 { ap_memory {  { A_M_real_6_address0 mem_address 1 4 }  { A_M_real_6_ce0 mem_ce 1 1 }  { A_M_real_6_q0 mem_dout 0 32 } } }
	A_M_real_7 { ap_memory {  { A_M_real_7_address0 mem_address 1 4 }  { A_M_real_7_ce0 mem_ce 1 1 }  { A_M_real_7_q0 mem_dout 0 32 } } }
	A_M_imag_0 { ap_memory {  { A_M_imag_0_address0 mem_address 1 4 }  { A_M_imag_0_ce0 mem_ce 1 1 }  { A_M_imag_0_q0 mem_dout 0 32 } } }
	A_M_imag_1 { ap_memory {  { A_M_imag_1_address0 mem_address 1 4 }  { A_M_imag_1_ce0 mem_ce 1 1 }  { A_M_imag_1_q0 mem_dout 0 32 } } }
	A_M_imag_2 { ap_memory {  { A_M_imag_2_address0 mem_address 1 4 }  { A_M_imag_2_ce0 mem_ce 1 1 }  { A_M_imag_2_q0 mem_dout 0 32 } } }
	A_M_imag_3 { ap_memory {  { A_M_imag_3_address0 mem_address 1 4 }  { A_M_imag_3_ce0 mem_ce 1 1 }  { A_M_imag_3_q0 mem_dout 0 32 } } }
	A_M_imag_4 { ap_memory {  { A_M_imag_4_address0 mem_address 1 4 }  { A_M_imag_4_ce0 mem_ce 1 1 }  { A_M_imag_4_q0 mem_dout 0 32 } } }
	A_M_imag_5 { ap_memory {  { A_M_imag_5_address0 mem_address 1 4 }  { A_M_imag_5_ce0 mem_ce 1 1 }  { A_M_imag_5_q0 mem_dout 0 32 } } }
	A_M_imag_6 { ap_memory {  { A_M_imag_6_address0 mem_address 1 4 }  { A_M_imag_6_ce0 mem_ce 1 1 }  { A_M_imag_6_q0 mem_dout 0 32 } } }
	A_M_imag_7 { ap_memory {  { A_M_imag_7_address0 mem_address 1 4 }  { A_M_imag_7_ce0 mem_ce 1 1 }  { A_M_imag_7_q0 mem_dout 0 32 } } }
	B_M_real_0 { ap_memory {  { B_M_real_0_address0 mem_address 1 5 }  { B_M_real_0_ce0 mem_ce 1 1 }  { B_M_real_0_q0 mem_dout 0 32 }  { B_M_real_0_address1 MemPortADDR2 1 5 }  { B_M_real_0_ce1 MemPortCE2 1 1 }  { B_M_real_0_q1 MemPortDOUT2 0 32 } } }
	B_M_real_1 { ap_memory {  { B_M_real_1_address0 mem_address 1 5 }  { B_M_real_1_ce0 mem_ce 1 1 }  { B_M_real_1_q0 mem_dout 0 32 }  { B_M_real_1_address1 MemPortADDR2 1 5 }  { B_M_real_1_ce1 MemPortCE2 1 1 }  { B_M_real_1_q1 MemPortDOUT2 0 32 } } }
	B_M_real_2 { ap_memory {  { B_M_real_2_address0 mem_address 1 5 }  { B_M_real_2_ce0 mem_ce 1 1 }  { B_M_real_2_q0 mem_dout 0 32 }  { B_M_real_2_address1 MemPortADDR2 1 5 }  { B_M_real_2_ce1 MemPortCE2 1 1 }  { B_M_real_2_q1 MemPortDOUT2 0 32 } } }
	B_M_real_3 { ap_memory {  { B_M_real_3_address0 mem_address 1 5 }  { B_M_real_3_ce0 mem_ce 1 1 }  { B_M_real_3_q0 mem_dout 0 32 }  { B_M_real_3_address1 MemPortADDR2 1 5 }  { B_M_real_3_ce1 MemPortCE2 1 1 }  { B_M_real_3_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_0 { ap_memory {  { B_M_imag_0_address0 mem_address 1 5 }  { B_M_imag_0_ce0 mem_ce 1 1 }  { B_M_imag_0_q0 mem_dout 0 32 }  { B_M_imag_0_address1 MemPortADDR2 1 5 }  { B_M_imag_0_ce1 MemPortCE2 1 1 }  { B_M_imag_0_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_1 { ap_memory {  { B_M_imag_1_address0 mem_address 1 5 }  { B_M_imag_1_ce0 mem_ce 1 1 }  { B_M_imag_1_q0 mem_dout 0 32 }  { B_M_imag_1_address1 MemPortADDR2 1 5 }  { B_M_imag_1_ce1 MemPortCE2 1 1 }  { B_M_imag_1_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_2 { ap_memory {  { B_M_imag_2_address0 mem_address 1 5 }  { B_M_imag_2_ce0 mem_ce 1 1 }  { B_M_imag_2_q0 mem_dout 0 32 }  { B_M_imag_2_address1 MemPortADDR2 1 5 }  { B_M_imag_2_ce1 MemPortCE2 1 1 }  { B_M_imag_2_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_3 { ap_memory {  { B_M_imag_3_address0 mem_address 1 5 }  { B_M_imag_3_ce0 mem_ce 1 1 }  { B_M_imag_3_q0 mem_dout 0 32 }  { B_M_imag_3_address1 MemPortADDR2 1 5 }  { B_M_imag_3_ce1 MemPortCE2 1 1 }  { B_M_imag_3_q1 MemPortDOUT2 0 32 } } }
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

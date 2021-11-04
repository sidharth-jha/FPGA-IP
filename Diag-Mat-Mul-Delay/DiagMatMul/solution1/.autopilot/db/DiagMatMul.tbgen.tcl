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
set C_modelType { void 0 }
set C_modelArgList {
	{ A_M_real float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_real1 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_real2 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_real3 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_imag float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_imag4 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_imag5 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ A_M_imag6 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_real_0 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_real_1 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_real_2 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_real_3 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_imag_0 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_imag_1 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_imag_2 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ B_M_imag_3 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ C_M_real_0 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_real_1 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_real_2 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_real_3 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_imag_0 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_imag_1 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_imag_2 float 32 regular {array 64 { 0 3 } 0 1 }  }
	{ C_M_imag_3 float 32 regular {array 64 { 0 3 } 0 1 }  }
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
 	{ "Name" : "C_M_real_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_real_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_real_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_real_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_imag_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_imag_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_imag_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C_M_imag_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 134
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_M_real_address0 sc_out sc_lv 12 signal 0 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_real_address1 sc_out sc_lv 12 signal 0 } 
	{ A_M_real_ce1 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q1 sc_in sc_lv 32 signal 0 } 
	{ A_M_real1_address0 sc_out sc_lv 12 signal 1 } 
	{ A_M_real1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_real1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_M_real1_address1 sc_out sc_lv 12 signal 1 } 
	{ A_M_real1_ce1 sc_out sc_logic 1 signal 1 } 
	{ A_M_real1_q1 sc_in sc_lv 32 signal 1 } 
	{ A_M_real2_address0 sc_out sc_lv 12 signal 2 } 
	{ A_M_real2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_M_real2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_M_real2_address1 sc_out sc_lv 12 signal 2 } 
	{ A_M_real2_ce1 sc_out sc_logic 1 signal 2 } 
	{ A_M_real2_q1 sc_in sc_lv 32 signal 2 } 
	{ A_M_real3_address0 sc_out sc_lv 12 signal 3 } 
	{ A_M_real3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_M_real3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_M_real3_address1 sc_out sc_lv 12 signal 3 } 
	{ A_M_real3_ce1 sc_out sc_logic 1 signal 3 } 
	{ A_M_real3_q1 sc_in sc_lv 32 signal 3 } 
	{ A_M_imag_address0 sc_out sc_lv 12 signal 4 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 4 } 
	{ A_M_imag_address1 sc_out sc_lv 12 signal 4 } 
	{ A_M_imag_ce1 sc_out sc_logic 1 signal 4 } 
	{ A_M_imag_q1 sc_in sc_lv 32 signal 4 } 
	{ A_M_imag4_address0 sc_out sc_lv 12 signal 5 } 
	{ A_M_imag4_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_M_imag4_q0 sc_in sc_lv 32 signal 5 } 
	{ A_M_imag4_address1 sc_out sc_lv 12 signal 5 } 
	{ A_M_imag4_ce1 sc_out sc_logic 1 signal 5 } 
	{ A_M_imag4_q1 sc_in sc_lv 32 signal 5 } 
	{ A_M_imag5_address0 sc_out sc_lv 12 signal 6 } 
	{ A_M_imag5_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_M_imag5_q0 sc_in sc_lv 32 signal 6 } 
	{ A_M_imag5_address1 sc_out sc_lv 12 signal 6 } 
	{ A_M_imag5_ce1 sc_out sc_logic 1 signal 6 } 
	{ A_M_imag5_q1 sc_in sc_lv 32 signal 6 } 
	{ A_M_imag6_address0 sc_out sc_lv 12 signal 7 } 
	{ A_M_imag6_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_M_imag6_q0 sc_in sc_lv 32 signal 7 } 
	{ A_M_imag6_address1 sc_out sc_lv 12 signal 7 } 
	{ A_M_imag6_ce1 sc_out sc_logic 1 signal 7 } 
	{ A_M_imag6_q1 sc_in sc_lv 32 signal 7 } 
	{ B_M_real_0_address0 sc_out sc_lv 12 signal 8 } 
	{ B_M_real_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ B_M_real_0_q0 sc_in sc_lv 32 signal 8 } 
	{ B_M_real_0_address1 sc_out sc_lv 12 signal 8 } 
	{ B_M_real_0_ce1 sc_out sc_logic 1 signal 8 } 
	{ B_M_real_0_q1 sc_in sc_lv 32 signal 8 } 
	{ B_M_real_1_address0 sc_out sc_lv 12 signal 9 } 
	{ B_M_real_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ B_M_real_1_q0 sc_in sc_lv 32 signal 9 } 
	{ B_M_real_1_address1 sc_out sc_lv 12 signal 9 } 
	{ B_M_real_1_ce1 sc_out sc_logic 1 signal 9 } 
	{ B_M_real_1_q1 sc_in sc_lv 32 signal 9 } 
	{ B_M_real_2_address0 sc_out sc_lv 12 signal 10 } 
	{ B_M_real_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ B_M_real_2_q0 sc_in sc_lv 32 signal 10 } 
	{ B_M_real_2_address1 sc_out sc_lv 12 signal 10 } 
	{ B_M_real_2_ce1 sc_out sc_logic 1 signal 10 } 
	{ B_M_real_2_q1 sc_in sc_lv 32 signal 10 } 
	{ B_M_real_3_address0 sc_out sc_lv 12 signal 11 } 
	{ B_M_real_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ B_M_real_3_q0 sc_in sc_lv 32 signal 11 } 
	{ B_M_real_3_address1 sc_out sc_lv 12 signal 11 } 
	{ B_M_real_3_ce1 sc_out sc_logic 1 signal 11 } 
	{ B_M_real_3_q1 sc_in sc_lv 32 signal 11 } 
	{ B_M_imag_0_address0 sc_out sc_lv 12 signal 12 } 
	{ B_M_imag_0_ce0 sc_out sc_logic 1 signal 12 } 
	{ B_M_imag_0_q0 sc_in sc_lv 32 signal 12 } 
	{ B_M_imag_0_address1 sc_out sc_lv 12 signal 12 } 
	{ B_M_imag_0_ce1 sc_out sc_logic 1 signal 12 } 
	{ B_M_imag_0_q1 sc_in sc_lv 32 signal 12 } 
	{ B_M_imag_1_address0 sc_out sc_lv 12 signal 13 } 
	{ B_M_imag_1_ce0 sc_out sc_logic 1 signal 13 } 
	{ B_M_imag_1_q0 sc_in sc_lv 32 signal 13 } 
	{ B_M_imag_1_address1 sc_out sc_lv 12 signal 13 } 
	{ B_M_imag_1_ce1 sc_out sc_logic 1 signal 13 } 
	{ B_M_imag_1_q1 sc_in sc_lv 32 signal 13 } 
	{ B_M_imag_2_address0 sc_out sc_lv 12 signal 14 } 
	{ B_M_imag_2_ce0 sc_out sc_logic 1 signal 14 } 
	{ B_M_imag_2_q0 sc_in sc_lv 32 signal 14 } 
	{ B_M_imag_2_address1 sc_out sc_lv 12 signal 14 } 
	{ B_M_imag_2_ce1 sc_out sc_logic 1 signal 14 } 
	{ B_M_imag_2_q1 sc_in sc_lv 32 signal 14 } 
	{ B_M_imag_3_address0 sc_out sc_lv 12 signal 15 } 
	{ B_M_imag_3_ce0 sc_out sc_logic 1 signal 15 } 
	{ B_M_imag_3_q0 sc_in sc_lv 32 signal 15 } 
	{ B_M_imag_3_address1 sc_out sc_lv 12 signal 15 } 
	{ B_M_imag_3_ce1 sc_out sc_logic 1 signal 15 } 
	{ B_M_imag_3_q1 sc_in sc_lv 32 signal 15 } 
	{ C_M_real_0_address0 sc_out sc_lv 6 signal 16 } 
	{ C_M_real_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ C_M_real_0_we0 sc_out sc_logic 1 signal 16 } 
	{ C_M_real_0_d0 sc_out sc_lv 32 signal 16 } 
	{ C_M_real_1_address0 sc_out sc_lv 6 signal 17 } 
	{ C_M_real_1_ce0 sc_out sc_logic 1 signal 17 } 
	{ C_M_real_1_we0 sc_out sc_logic 1 signal 17 } 
	{ C_M_real_1_d0 sc_out sc_lv 32 signal 17 } 
	{ C_M_real_2_address0 sc_out sc_lv 6 signal 18 } 
	{ C_M_real_2_ce0 sc_out sc_logic 1 signal 18 } 
	{ C_M_real_2_we0 sc_out sc_logic 1 signal 18 } 
	{ C_M_real_2_d0 sc_out sc_lv 32 signal 18 } 
	{ C_M_real_3_address0 sc_out sc_lv 6 signal 19 } 
	{ C_M_real_3_ce0 sc_out sc_logic 1 signal 19 } 
	{ C_M_real_3_we0 sc_out sc_logic 1 signal 19 } 
	{ C_M_real_3_d0 sc_out sc_lv 32 signal 19 } 
	{ C_M_imag_0_address0 sc_out sc_lv 6 signal 20 } 
	{ C_M_imag_0_ce0 sc_out sc_logic 1 signal 20 } 
	{ C_M_imag_0_we0 sc_out sc_logic 1 signal 20 } 
	{ C_M_imag_0_d0 sc_out sc_lv 32 signal 20 } 
	{ C_M_imag_1_address0 sc_out sc_lv 6 signal 21 } 
	{ C_M_imag_1_ce0 sc_out sc_logic 1 signal 21 } 
	{ C_M_imag_1_we0 sc_out sc_logic 1 signal 21 } 
	{ C_M_imag_1_d0 sc_out sc_lv 32 signal 21 } 
	{ C_M_imag_2_address0 sc_out sc_lv 6 signal 22 } 
	{ C_M_imag_2_ce0 sc_out sc_logic 1 signal 22 } 
	{ C_M_imag_2_we0 sc_out sc_logic 1 signal 22 } 
	{ C_M_imag_2_d0 sc_out sc_lv 32 signal 22 } 
	{ C_M_imag_3_address0 sc_out sc_lv 6 signal 23 } 
	{ C_M_imag_3_ce0 sc_out sc_logic 1 signal 23 } 
	{ C_M_imag_3_we0 sc_out sc_logic 1 signal 23 } 
	{ C_M_imag_3_d0 sc_out sc_lv 32 signal 23 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real", "role": "address1" }} , 
 	{ "name": "A_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce1" }} , 
 	{ "name": "A_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q1" }} , 
 	{ "name": "A_M_real1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real1", "role": "address0" }} , 
 	{ "name": "A_M_real1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real1", "role": "ce0" }} , 
 	{ "name": "A_M_real1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real1", "role": "q0" }} , 
 	{ "name": "A_M_real1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real1", "role": "address1" }} , 
 	{ "name": "A_M_real1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real1", "role": "ce1" }} , 
 	{ "name": "A_M_real1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real1", "role": "q1" }} , 
 	{ "name": "A_M_real2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real2", "role": "address0" }} , 
 	{ "name": "A_M_real2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real2", "role": "ce0" }} , 
 	{ "name": "A_M_real2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real2", "role": "q0" }} , 
 	{ "name": "A_M_real2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real2", "role": "address1" }} , 
 	{ "name": "A_M_real2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real2", "role": "ce1" }} , 
 	{ "name": "A_M_real2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real2", "role": "q1" }} , 
 	{ "name": "A_M_real3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real3", "role": "address0" }} , 
 	{ "name": "A_M_real3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real3", "role": "ce0" }} , 
 	{ "name": "A_M_real3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real3", "role": "q0" }} , 
 	{ "name": "A_M_real3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_real3", "role": "address1" }} , 
 	{ "name": "A_M_real3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real3", "role": "ce1" }} , 
 	{ "name": "A_M_real3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real3", "role": "q1" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }} , 
 	{ "name": "A_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address1" }} , 
 	{ "name": "A_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce1" }} , 
 	{ "name": "A_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q1" }} , 
 	{ "name": "A_M_imag4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "address0" }} , 
 	{ "name": "A_M_imag4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "ce0" }} , 
 	{ "name": "A_M_imag4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "q0" }} , 
 	{ "name": "A_M_imag4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "address1" }} , 
 	{ "name": "A_M_imag4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "ce1" }} , 
 	{ "name": "A_M_imag4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag4", "role": "q1" }} , 
 	{ "name": "A_M_imag5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "address0" }} , 
 	{ "name": "A_M_imag5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "ce0" }} , 
 	{ "name": "A_M_imag5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "q0" }} , 
 	{ "name": "A_M_imag5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "address1" }} , 
 	{ "name": "A_M_imag5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "ce1" }} , 
 	{ "name": "A_M_imag5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag5", "role": "q1" }} , 
 	{ "name": "A_M_imag6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "address0" }} , 
 	{ "name": "A_M_imag6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "ce0" }} , 
 	{ "name": "A_M_imag6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "q0" }} , 
 	{ "name": "A_M_imag6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "address1" }} , 
 	{ "name": "A_M_imag6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "ce1" }} , 
 	{ "name": "A_M_imag6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag6", "role": "q1" }} , 
 	{ "name": "B_M_real_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address0" }} , 
 	{ "name": "B_M_real_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce0" }} , 
 	{ "name": "B_M_real_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q0" }} , 
 	{ "name": "B_M_real_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "address1" }} , 
 	{ "name": "B_M_real_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "ce1" }} , 
 	{ "name": "B_M_real_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_0", "role": "q1" }} , 
 	{ "name": "B_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address0" }} , 
 	{ "name": "B_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce0" }} , 
 	{ "name": "B_M_real_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q0" }} , 
 	{ "name": "B_M_real_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "address1" }} , 
 	{ "name": "B_M_real_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "ce1" }} , 
 	{ "name": "B_M_real_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_1", "role": "q1" }} , 
 	{ "name": "B_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address0" }} , 
 	{ "name": "B_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce0" }} , 
 	{ "name": "B_M_real_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q0" }} , 
 	{ "name": "B_M_real_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "address1" }} , 
 	{ "name": "B_M_real_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "ce1" }} , 
 	{ "name": "B_M_real_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_2", "role": "q1" }} , 
 	{ "name": "B_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address0" }} , 
 	{ "name": "B_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce0" }} , 
 	{ "name": "B_M_real_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q0" }} , 
 	{ "name": "B_M_real_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "address1" }} , 
 	{ "name": "B_M_real_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "ce1" }} , 
 	{ "name": "B_M_real_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_real_3", "role": "q1" }} , 
 	{ "name": "B_M_imag_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address0" }} , 
 	{ "name": "B_M_imag_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce0" }} , 
 	{ "name": "B_M_imag_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q0" }} , 
 	{ "name": "B_M_imag_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "address1" }} , 
 	{ "name": "B_M_imag_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "ce1" }} , 
 	{ "name": "B_M_imag_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_0", "role": "q1" }} , 
 	{ "name": "B_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address0" }} , 
 	{ "name": "B_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce0" }} , 
 	{ "name": "B_M_imag_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q0" }} , 
 	{ "name": "B_M_imag_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "address1" }} , 
 	{ "name": "B_M_imag_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "ce1" }} , 
 	{ "name": "B_M_imag_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_1", "role": "q1" }} , 
 	{ "name": "B_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address0" }} , 
 	{ "name": "B_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce0" }} , 
 	{ "name": "B_M_imag_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q0" }} , 
 	{ "name": "B_M_imag_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "address1" }} , 
 	{ "name": "B_M_imag_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "ce1" }} , 
 	{ "name": "B_M_imag_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_2", "role": "q1" }} , 
 	{ "name": "B_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address0" }} , 
 	{ "name": "B_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "ce0" }} , 
 	{ "name": "B_M_imag_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "q0" }} , 
 	{ "name": "B_M_imag_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "address1" }} , 
 	{ "name": "B_M_imag_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "ce1" }} , 
 	{ "name": "B_M_imag_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_M_imag_3", "role": "q1" }} , 
 	{ "name": "C_M_real_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_real_0", "role": "address0" }} , 
 	{ "name": "C_M_real_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_0", "role": "ce0" }} , 
 	{ "name": "C_M_real_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_0", "role": "we0" }} , 
 	{ "name": "C_M_real_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_0", "role": "d0" }} , 
 	{ "name": "C_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_real_1", "role": "address0" }} , 
 	{ "name": "C_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_1", "role": "ce0" }} , 
 	{ "name": "C_M_real_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_1", "role": "we0" }} , 
 	{ "name": "C_M_real_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_1", "role": "d0" }} , 
 	{ "name": "C_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_real_2", "role": "address0" }} , 
 	{ "name": "C_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_2", "role": "ce0" }} , 
 	{ "name": "C_M_real_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_2", "role": "we0" }} , 
 	{ "name": "C_M_real_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_2", "role": "d0" }} , 
 	{ "name": "C_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_real_3", "role": "address0" }} , 
 	{ "name": "C_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_3", "role": "ce0" }} , 
 	{ "name": "C_M_real_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_real_3", "role": "we0" }} , 
 	{ "name": "C_M_real_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_real_3", "role": "d0" }} , 
 	{ "name": "C_M_imag_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_imag_0", "role": "address0" }} , 
 	{ "name": "C_M_imag_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_0", "role": "ce0" }} , 
 	{ "name": "C_M_imag_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_0", "role": "we0" }} , 
 	{ "name": "C_M_imag_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_0", "role": "d0" }} , 
 	{ "name": "C_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_imag_1", "role": "address0" }} , 
 	{ "name": "C_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_1", "role": "ce0" }} , 
 	{ "name": "C_M_imag_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_1", "role": "we0" }} , 
 	{ "name": "C_M_imag_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_1", "role": "d0" }} , 
 	{ "name": "C_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_imag_2", "role": "address0" }} , 
 	{ "name": "C_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_2", "role": "ce0" }} , 
 	{ "name": "C_M_imag_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_2", "role": "we0" }} , 
 	{ "name": "C_M_imag_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_2", "role": "d0" }} , 
 	{ "name": "C_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "C_M_imag_3", "role": "address0" }} , 
 	{ "name": "C_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_3", "role": "ce0" }} , 
 	{ "name": "C_M_imag_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_M_imag_3", "role": "we0" }} , 
 	{ "name": "C_M_imag_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_M_imag_3", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "15", "22", "29", "36", "43", "50", "57", "60", "63", "66", "69", "72", "75", "78"],
		"CDFG" : "DiagMatMul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2370", "EstimateLatencyMax" : "2370",
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
			{"Name" : "C_M_real_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_real_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_real_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_real_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_imag_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_imag_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_imag_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_M_imag_3", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fsub_32ns_bkb_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fadd_32ns_cud_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14"],
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
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fsub_32ns_bkb_U1", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fadd_32ns_cud_U2", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U3", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U4", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U5", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U6", "Parent" : "8"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20", "21"],
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
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fsub_32ns_bkb_U1", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fadd_32ns_cud_U2", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U3", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U4", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U5", "Parent" : "15"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U6", "Parent" : "15"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486", "Parent" : "0", "Child" : ["23", "24", "25", "26", "27", "28"],
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
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fsub_32ns_bkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fadd_32ns_cud_U2", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U3", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U4", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U5", "Parent" : "22"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U6", "Parent" : "22"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494", "Parent" : "0", "Child" : ["30", "31", "32", "33", "34", "35"],
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
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fsub_32ns_bkb_U1", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fadd_32ns_cud_U2", "Parent" : "29"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U3", "Parent" : "29"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U4", "Parent" : "29"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U5", "Parent" : "29"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U6", "Parent" : "29"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502", "Parent" : "0", "Child" : ["37", "38", "39", "40", "41", "42"],
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
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fsub_32ns_bkb_U1", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fadd_32ns_cud_U2", "Parent" : "36"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U3", "Parent" : "36"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U4", "Parent" : "36"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U5", "Parent" : "36"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U6", "Parent" : "36"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510", "Parent" : "0", "Child" : ["44", "45", "46", "47", "48", "49"],
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
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fsub_32ns_bkb_U1", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fadd_32ns_cud_U2", "Parent" : "43"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U3", "Parent" : "43"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U4", "Parent" : "43"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U5", "Parent" : "43"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U6", "Parent" : "43"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518", "Parent" : "0", "Child" : ["51", "52", "53", "54", "55", "56"],
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
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fsub_32ns_bkb_U1", "Parent" : "50"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fadd_32ns_cud_U2", "Parent" : "50"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U3", "Parent" : "50"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U4", "Parent" : "50"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U5", "Parent" : "50"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U6", "Parent" : "50"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2526", "Parent" : "0", "Child" : ["58", "59"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2526.matmul_fadd_32ns_cud_U14", "Parent" : "57"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2526.matmul_fadd_32ns_cud_U15", "Parent" : "57"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2536", "Parent" : "0", "Child" : ["61", "62"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2536.matmul_fadd_32ns_cud_U14", "Parent" : "60"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2536.matmul_fadd_32ns_cud_U15", "Parent" : "60"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2544", "Parent" : "0", "Child" : ["64", "65"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2544.matmul_fadd_32ns_cud_U14", "Parent" : "63"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2544.matmul_fadd_32ns_cud_U15", "Parent" : "63"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2552", "Parent" : "0", "Child" : ["67", "68"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2552.matmul_fadd_32ns_cud_U14", "Parent" : "66"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2552.matmul_fadd_32ns_cud_U15", "Parent" : "66"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2560", "Parent" : "0", "Child" : ["70", "71"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2560.matmul_fadd_32ns_cud_U14", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2560.matmul_fadd_32ns_cud_U15", "Parent" : "69"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2568", "Parent" : "0", "Child" : ["73", "74"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2568.matmul_fadd_32ns_cud_U14", "Parent" : "72"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2568.matmul_fadd_32ns_cud_U15", "Parent" : "72"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2576", "Parent" : "0", "Child" : ["76", "77"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2576.matmul_fadd_32ns_cud_U14", "Parent" : "75"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2576.matmul_fadd_32ns_cud_U15", "Parent" : "75"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2584", "Parent" : "0", "Child" : ["79", "80"],
		"CDFG" : "operator_add_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_imag_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2584.matmul_fadd_32ns_cud_U14", "Parent" : "78"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_add_assign_float_fu_2584.matmul_fadd_32ns_cud_U15", "Parent" : "78"}]}


set ArgLastReadFirstWriteLatency {
	DiagMatMul {
		A_M_real {Type I LastRead 9 FirstWrite -1}
		A_M_real1 {Type I LastRead 9 FirstWrite -1}
		A_M_real2 {Type I LastRead 9 FirstWrite -1}
		A_M_real3 {Type I LastRead 10 FirstWrite -1}
		A_M_imag {Type I LastRead 9 FirstWrite -1}
		A_M_imag4 {Type I LastRead 9 FirstWrite -1}
		A_M_imag5 {Type I LastRead 9 FirstWrite -1}
		A_M_imag6 {Type I LastRead 10 FirstWrite -1}
		B_M_real_0 {Type I LastRead 9 FirstWrite -1}
		B_M_real_1 {Type I LastRead 9 FirstWrite -1}
		B_M_real_2 {Type I LastRead 9 FirstWrite -1}
		B_M_real_3 {Type I LastRead 9 FirstWrite -1}
		B_M_imag_0 {Type I LastRead 9 FirstWrite -1}
		B_M_imag_1 {Type I LastRead 9 FirstWrite -1}
		B_M_imag_2 {Type I LastRead 9 FirstWrite -1}
		B_M_imag_3 {Type I LastRead 9 FirstWrite -1}
		C_M_real_0 {Type O LastRead -1 FirstWrite 329}
		C_M_real_1 {Type O LastRead -1 FirstWrite 329}
		C_M_real_2 {Type O LastRead -1 FirstWrite 329}
		C_M_real_3 {Type O LastRead -1 FirstWrite 329}
		C_M_imag_0 {Type O LastRead -1 FirstWrite 329}
		C_M_imag_1 {Type O LastRead -1 FirstWrite 329}
		C_M_imag_2 {Type O LastRead -1 FirstWrite 329}
		C_M_imag_3 {Type O LastRead -1 FirstWrite 329}}
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
		p_y_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2370", "Max" : "2370"}
	, {"Name" : "Interval", "Min" : "2370", "Max" : "2370"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 12 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_q0 mem_dout 0 32 }  { A_M_real_address1 MemPortADDR2 1 12 }  { A_M_real_ce1 MemPortCE2 1 1 }  { A_M_real_q1 MemPortDOUT2 0 32 } } }
	A_M_real1 { ap_memory {  { A_M_real1_address0 mem_address 1 12 }  { A_M_real1_ce0 mem_ce 1 1 }  { A_M_real1_q0 mem_dout 0 32 }  { A_M_real1_address1 MemPortADDR2 1 12 }  { A_M_real1_ce1 MemPortCE2 1 1 }  { A_M_real1_q1 MemPortDOUT2 0 32 } } }
	A_M_real2 { ap_memory {  { A_M_real2_address0 mem_address 1 12 }  { A_M_real2_ce0 mem_ce 1 1 }  { A_M_real2_q0 mem_dout 0 32 }  { A_M_real2_address1 MemPortADDR2 1 12 }  { A_M_real2_ce1 MemPortCE2 1 1 }  { A_M_real2_q1 MemPortDOUT2 0 32 } } }
	A_M_real3 { ap_memory {  { A_M_real3_address0 mem_address 1 12 }  { A_M_real3_ce0 mem_ce 1 1 }  { A_M_real3_q0 mem_dout 0 32 }  { A_M_real3_address1 MemPortADDR2 1 12 }  { A_M_real3_ce1 MemPortCE2 1 1 }  { A_M_real3_q1 MemPortDOUT2 0 32 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 12 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_q0 mem_dout 0 32 }  { A_M_imag_address1 MemPortADDR2 1 12 }  { A_M_imag_ce1 MemPortCE2 1 1 }  { A_M_imag_q1 MemPortDOUT2 0 32 } } }
	A_M_imag4 { ap_memory {  { A_M_imag4_address0 mem_address 1 12 }  { A_M_imag4_ce0 mem_ce 1 1 }  { A_M_imag4_q0 mem_dout 0 32 }  { A_M_imag4_address1 MemPortADDR2 1 12 }  { A_M_imag4_ce1 MemPortCE2 1 1 }  { A_M_imag4_q1 MemPortDOUT2 0 32 } } }
	A_M_imag5 { ap_memory {  { A_M_imag5_address0 mem_address 1 12 }  { A_M_imag5_ce0 mem_ce 1 1 }  { A_M_imag5_q0 mem_dout 0 32 }  { A_M_imag5_address1 MemPortADDR2 1 12 }  { A_M_imag5_ce1 MemPortCE2 1 1 }  { A_M_imag5_q1 MemPortDOUT2 0 32 } } }
	A_M_imag6 { ap_memory {  { A_M_imag6_address0 mem_address 1 12 }  { A_M_imag6_ce0 mem_ce 1 1 }  { A_M_imag6_q0 mem_dout 0 32 }  { A_M_imag6_address1 MemPortADDR2 1 12 }  { A_M_imag6_ce1 MemPortCE2 1 1 }  { A_M_imag6_q1 MemPortDOUT2 0 32 } } }
	B_M_real_0 { ap_memory {  { B_M_real_0_address0 mem_address 1 12 }  { B_M_real_0_ce0 mem_ce 1 1 }  { B_M_real_0_q0 mem_dout 0 32 }  { B_M_real_0_address1 MemPortADDR2 1 12 }  { B_M_real_0_ce1 MemPortCE2 1 1 }  { B_M_real_0_q1 MemPortDOUT2 0 32 } } }
	B_M_real_1 { ap_memory {  { B_M_real_1_address0 mem_address 1 12 }  { B_M_real_1_ce0 mem_ce 1 1 }  { B_M_real_1_q0 mem_dout 0 32 }  { B_M_real_1_address1 MemPortADDR2 1 12 }  { B_M_real_1_ce1 MemPortCE2 1 1 }  { B_M_real_1_q1 MemPortDOUT2 0 32 } } }
	B_M_real_2 { ap_memory {  { B_M_real_2_address0 mem_address 1 12 }  { B_M_real_2_ce0 mem_ce 1 1 }  { B_M_real_2_q0 mem_dout 0 32 }  { B_M_real_2_address1 MemPortADDR2 1 12 }  { B_M_real_2_ce1 MemPortCE2 1 1 }  { B_M_real_2_q1 MemPortDOUT2 0 32 } } }
	B_M_real_3 { ap_memory {  { B_M_real_3_address0 mem_address 1 12 }  { B_M_real_3_ce0 mem_ce 1 1 }  { B_M_real_3_q0 mem_dout 0 32 }  { B_M_real_3_address1 MemPortADDR2 1 12 }  { B_M_real_3_ce1 MemPortCE2 1 1 }  { B_M_real_3_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_0 { ap_memory {  { B_M_imag_0_address0 mem_address 1 12 }  { B_M_imag_0_ce0 mem_ce 1 1 }  { B_M_imag_0_q0 mem_dout 0 32 }  { B_M_imag_0_address1 MemPortADDR2 1 12 }  { B_M_imag_0_ce1 MemPortCE2 1 1 }  { B_M_imag_0_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_1 { ap_memory {  { B_M_imag_1_address0 mem_address 1 12 }  { B_M_imag_1_ce0 mem_ce 1 1 }  { B_M_imag_1_q0 mem_dout 0 32 }  { B_M_imag_1_address1 MemPortADDR2 1 12 }  { B_M_imag_1_ce1 MemPortCE2 1 1 }  { B_M_imag_1_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_2 { ap_memory {  { B_M_imag_2_address0 mem_address 1 12 }  { B_M_imag_2_ce0 mem_ce 1 1 }  { B_M_imag_2_q0 mem_dout 0 32 }  { B_M_imag_2_address1 MemPortADDR2 1 12 }  { B_M_imag_2_ce1 MemPortCE2 1 1 }  { B_M_imag_2_q1 MemPortDOUT2 0 32 } } }
	B_M_imag_3 { ap_memory {  { B_M_imag_3_address0 mem_address 1 12 }  { B_M_imag_3_ce0 mem_ce 1 1 }  { B_M_imag_3_q0 mem_dout 0 32 }  { B_M_imag_3_address1 MemPortADDR2 1 12 }  { B_M_imag_3_ce1 MemPortCE2 1 1 }  { B_M_imag_3_q1 MemPortDOUT2 0 32 } } }
	C_M_real_0 { ap_memory {  { C_M_real_0_address0 mem_address 1 6 }  { C_M_real_0_ce0 mem_ce 1 1 }  { C_M_real_0_we0 mem_we 1 1 }  { C_M_real_0_d0 mem_din 1 32 } } }
	C_M_real_1 { ap_memory {  { C_M_real_1_address0 mem_address 1 6 }  { C_M_real_1_ce0 mem_ce 1 1 }  { C_M_real_1_we0 mem_we 1 1 }  { C_M_real_1_d0 mem_din 1 32 } } }
	C_M_real_2 { ap_memory {  { C_M_real_2_address0 mem_address 1 6 }  { C_M_real_2_ce0 mem_ce 1 1 }  { C_M_real_2_we0 mem_we 1 1 }  { C_M_real_2_d0 mem_din 1 32 } } }
	C_M_real_3 { ap_memory {  { C_M_real_3_address0 mem_address 1 6 }  { C_M_real_3_ce0 mem_ce 1 1 }  { C_M_real_3_we0 mem_we 1 1 }  { C_M_real_3_d0 mem_din 1 32 } } }
	C_M_imag_0 { ap_memory {  { C_M_imag_0_address0 mem_address 1 6 }  { C_M_imag_0_ce0 mem_ce 1 1 }  { C_M_imag_0_we0 mem_we 1 1 }  { C_M_imag_0_d0 mem_din 1 32 } } }
	C_M_imag_1 { ap_memory {  { C_M_imag_1_address0 mem_address 1 6 }  { C_M_imag_1_ce0 mem_ce 1 1 }  { C_M_imag_1_we0 mem_we 1 1 }  { C_M_imag_1_d0 mem_din 1 32 } } }
	C_M_imag_2 { ap_memory {  { C_M_imag_2_address0 mem_address 1 6 }  { C_M_imag_2_ce0 mem_ce 1 1 }  { C_M_imag_2_we0 mem_we 1 1 }  { C_M_imag_2_d0 mem_din 1 32 } } }
	C_M_imag_3 { ap_memory {  { C_M_imag_3_address0 mem_address 1 6 }  { C_M_imag_3_ce0 mem_ce 1 1 }  { C_M_imag_3_we0 mem_we 1 1 }  { C_M_imag_3_d0 mem_din 1 32 } } }
}

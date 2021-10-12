set moduleName DopplerDelay
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
set C_modelName {DopplerDelay}
set C_modelType { void 0 }
set C_modelArgList {
	{ rxmat_M_real_2 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_real_21 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_real_22 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_real_23 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_imag_2 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_imag_24 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_imag_25 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_M_imag_26 float 32 regular {array 32 { 1 1 } 1 1 }  }
	{ rxmat_delay_M_real_s float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_s float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_1 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_1 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_2 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_2 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_3 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_3 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_4 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_4 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_5 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_5 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_6 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_6 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_real_7 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
	{ rxmat_delay_M_imag_7 float 32 regular {array 16 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "rxmat_M_real_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_real_21", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_real_22", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_real_23", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_imag_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_imag_24", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_imag_25", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_M_imag_26", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rxmat_delay_M_real_s", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_s", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_4", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_4", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_5", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_5", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_6", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_6", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_real_7", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "rxmat_delay_M_imag_7", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 118
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ rxmat_M_real_2_address0 sc_out sc_lv 5 signal 0 } 
	{ rxmat_M_real_2_ce0 sc_out sc_logic 1 signal 0 } 
	{ rxmat_M_real_2_q0 sc_in sc_lv 32 signal 0 } 
	{ rxmat_M_real_2_address1 sc_out sc_lv 5 signal 0 } 
	{ rxmat_M_real_2_ce1 sc_out sc_logic 1 signal 0 } 
	{ rxmat_M_real_2_q1 sc_in sc_lv 32 signal 0 } 
	{ rxmat_M_real_21_address0 sc_out sc_lv 5 signal 1 } 
	{ rxmat_M_real_21_ce0 sc_out sc_logic 1 signal 1 } 
	{ rxmat_M_real_21_q0 sc_in sc_lv 32 signal 1 } 
	{ rxmat_M_real_21_address1 sc_out sc_lv 5 signal 1 } 
	{ rxmat_M_real_21_ce1 sc_out sc_logic 1 signal 1 } 
	{ rxmat_M_real_21_q1 sc_in sc_lv 32 signal 1 } 
	{ rxmat_M_real_22_address0 sc_out sc_lv 5 signal 2 } 
	{ rxmat_M_real_22_ce0 sc_out sc_logic 1 signal 2 } 
	{ rxmat_M_real_22_q0 sc_in sc_lv 32 signal 2 } 
	{ rxmat_M_real_22_address1 sc_out sc_lv 5 signal 2 } 
	{ rxmat_M_real_22_ce1 sc_out sc_logic 1 signal 2 } 
	{ rxmat_M_real_22_q1 sc_in sc_lv 32 signal 2 } 
	{ rxmat_M_real_23_address0 sc_out sc_lv 5 signal 3 } 
	{ rxmat_M_real_23_ce0 sc_out sc_logic 1 signal 3 } 
	{ rxmat_M_real_23_q0 sc_in sc_lv 32 signal 3 } 
	{ rxmat_M_real_23_address1 sc_out sc_lv 5 signal 3 } 
	{ rxmat_M_real_23_ce1 sc_out sc_logic 1 signal 3 } 
	{ rxmat_M_real_23_q1 sc_in sc_lv 32 signal 3 } 
	{ rxmat_M_imag_2_address0 sc_out sc_lv 5 signal 4 } 
	{ rxmat_M_imag_2_ce0 sc_out sc_logic 1 signal 4 } 
	{ rxmat_M_imag_2_q0 sc_in sc_lv 32 signal 4 } 
	{ rxmat_M_imag_2_address1 sc_out sc_lv 5 signal 4 } 
	{ rxmat_M_imag_2_ce1 sc_out sc_logic 1 signal 4 } 
	{ rxmat_M_imag_2_q1 sc_in sc_lv 32 signal 4 } 
	{ rxmat_M_imag_24_address0 sc_out sc_lv 5 signal 5 } 
	{ rxmat_M_imag_24_ce0 sc_out sc_logic 1 signal 5 } 
	{ rxmat_M_imag_24_q0 sc_in sc_lv 32 signal 5 } 
	{ rxmat_M_imag_24_address1 sc_out sc_lv 5 signal 5 } 
	{ rxmat_M_imag_24_ce1 sc_out sc_logic 1 signal 5 } 
	{ rxmat_M_imag_24_q1 sc_in sc_lv 32 signal 5 } 
	{ rxmat_M_imag_25_address0 sc_out sc_lv 5 signal 6 } 
	{ rxmat_M_imag_25_ce0 sc_out sc_logic 1 signal 6 } 
	{ rxmat_M_imag_25_q0 sc_in sc_lv 32 signal 6 } 
	{ rxmat_M_imag_25_address1 sc_out sc_lv 5 signal 6 } 
	{ rxmat_M_imag_25_ce1 sc_out sc_logic 1 signal 6 } 
	{ rxmat_M_imag_25_q1 sc_in sc_lv 32 signal 6 } 
	{ rxmat_M_imag_26_address0 sc_out sc_lv 5 signal 7 } 
	{ rxmat_M_imag_26_ce0 sc_out sc_logic 1 signal 7 } 
	{ rxmat_M_imag_26_q0 sc_in sc_lv 32 signal 7 } 
	{ rxmat_M_imag_26_address1 sc_out sc_lv 5 signal 7 } 
	{ rxmat_M_imag_26_ce1 sc_out sc_logic 1 signal 7 } 
	{ rxmat_M_imag_26_q1 sc_in sc_lv 32 signal 7 } 
	{ rxmat_delay_M_real_s_address0 sc_out sc_lv 4 signal 8 } 
	{ rxmat_delay_M_real_s_ce0 sc_out sc_logic 1 signal 8 } 
	{ rxmat_delay_M_real_s_we0 sc_out sc_logic 1 signal 8 } 
	{ rxmat_delay_M_real_s_d0 sc_out sc_lv 32 signal 8 } 
	{ rxmat_delay_M_imag_s_address0 sc_out sc_lv 4 signal 9 } 
	{ rxmat_delay_M_imag_s_ce0 sc_out sc_logic 1 signal 9 } 
	{ rxmat_delay_M_imag_s_we0 sc_out sc_logic 1 signal 9 } 
	{ rxmat_delay_M_imag_s_d0 sc_out sc_lv 32 signal 9 } 
	{ rxmat_delay_M_real_1_address0 sc_out sc_lv 4 signal 10 } 
	{ rxmat_delay_M_real_1_ce0 sc_out sc_logic 1 signal 10 } 
	{ rxmat_delay_M_real_1_we0 sc_out sc_logic 1 signal 10 } 
	{ rxmat_delay_M_real_1_d0 sc_out sc_lv 32 signal 10 } 
	{ rxmat_delay_M_imag_1_address0 sc_out sc_lv 4 signal 11 } 
	{ rxmat_delay_M_imag_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ rxmat_delay_M_imag_1_we0 sc_out sc_logic 1 signal 11 } 
	{ rxmat_delay_M_imag_1_d0 sc_out sc_lv 32 signal 11 } 
	{ rxmat_delay_M_real_2_address0 sc_out sc_lv 4 signal 12 } 
	{ rxmat_delay_M_real_2_ce0 sc_out sc_logic 1 signal 12 } 
	{ rxmat_delay_M_real_2_we0 sc_out sc_logic 1 signal 12 } 
	{ rxmat_delay_M_real_2_d0 sc_out sc_lv 32 signal 12 } 
	{ rxmat_delay_M_imag_2_address0 sc_out sc_lv 4 signal 13 } 
	{ rxmat_delay_M_imag_2_ce0 sc_out sc_logic 1 signal 13 } 
	{ rxmat_delay_M_imag_2_we0 sc_out sc_logic 1 signal 13 } 
	{ rxmat_delay_M_imag_2_d0 sc_out sc_lv 32 signal 13 } 
	{ rxmat_delay_M_real_3_address0 sc_out sc_lv 4 signal 14 } 
	{ rxmat_delay_M_real_3_ce0 sc_out sc_logic 1 signal 14 } 
	{ rxmat_delay_M_real_3_we0 sc_out sc_logic 1 signal 14 } 
	{ rxmat_delay_M_real_3_d0 sc_out sc_lv 32 signal 14 } 
	{ rxmat_delay_M_imag_3_address0 sc_out sc_lv 4 signal 15 } 
	{ rxmat_delay_M_imag_3_ce0 sc_out sc_logic 1 signal 15 } 
	{ rxmat_delay_M_imag_3_we0 sc_out sc_logic 1 signal 15 } 
	{ rxmat_delay_M_imag_3_d0 sc_out sc_lv 32 signal 15 } 
	{ rxmat_delay_M_real_4_address0 sc_out sc_lv 4 signal 16 } 
	{ rxmat_delay_M_real_4_ce0 sc_out sc_logic 1 signal 16 } 
	{ rxmat_delay_M_real_4_we0 sc_out sc_logic 1 signal 16 } 
	{ rxmat_delay_M_real_4_d0 sc_out sc_lv 32 signal 16 } 
	{ rxmat_delay_M_imag_4_address0 sc_out sc_lv 4 signal 17 } 
	{ rxmat_delay_M_imag_4_ce0 sc_out sc_logic 1 signal 17 } 
	{ rxmat_delay_M_imag_4_we0 sc_out sc_logic 1 signal 17 } 
	{ rxmat_delay_M_imag_4_d0 sc_out sc_lv 32 signal 17 } 
	{ rxmat_delay_M_real_5_address0 sc_out sc_lv 4 signal 18 } 
	{ rxmat_delay_M_real_5_ce0 sc_out sc_logic 1 signal 18 } 
	{ rxmat_delay_M_real_5_we0 sc_out sc_logic 1 signal 18 } 
	{ rxmat_delay_M_real_5_d0 sc_out sc_lv 32 signal 18 } 
	{ rxmat_delay_M_imag_5_address0 sc_out sc_lv 4 signal 19 } 
	{ rxmat_delay_M_imag_5_ce0 sc_out sc_logic 1 signal 19 } 
	{ rxmat_delay_M_imag_5_we0 sc_out sc_logic 1 signal 19 } 
	{ rxmat_delay_M_imag_5_d0 sc_out sc_lv 32 signal 19 } 
	{ rxmat_delay_M_real_6_address0 sc_out sc_lv 4 signal 20 } 
	{ rxmat_delay_M_real_6_ce0 sc_out sc_logic 1 signal 20 } 
	{ rxmat_delay_M_real_6_we0 sc_out sc_logic 1 signal 20 } 
	{ rxmat_delay_M_real_6_d0 sc_out sc_lv 32 signal 20 } 
	{ rxmat_delay_M_imag_6_address0 sc_out sc_lv 4 signal 21 } 
	{ rxmat_delay_M_imag_6_ce0 sc_out sc_logic 1 signal 21 } 
	{ rxmat_delay_M_imag_6_we0 sc_out sc_logic 1 signal 21 } 
	{ rxmat_delay_M_imag_6_d0 sc_out sc_lv 32 signal 21 } 
	{ rxmat_delay_M_real_7_address0 sc_out sc_lv 4 signal 22 } 
	{ rxmat_delay_M_real_7_ce0 sc_out sc_logic 1 signal 22 } 
	{ rxmat_delay_M_real_7_we0 sc_out sc_logic 1 signal 22 } 
	{ rxmat_delay_M_real_7_d0 sc_out sc_lv 32 signal 22 } 
	{ rxmat_delay_M_imag_7_address0 sc_out sc_lv 4 signal 23 } 
	{ rxmat_delay_M_imag_7_ce0 sc_out sc_logic 1 signal 23 } 
	{ rxmat_delay_M_imag_7_we0 sc_out sc_logic 1 signal 23 } 
	{ rxmat_delay_M_imag_7_d0 sc_out sc_lv 32 signal 23 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "rxmat_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "address0" }} , 
 	{ "name": "rxmat_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "ce0" }} , 
 	{ "name": "rxmat_M_real_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "q0" }} , 
 	{ "name": "rxmat_M_real_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "address1" }} , 
 	{ "name": "rxmat_M_real_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "ce1" }} , 
 	{ "name": "rxmat_M_real_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_2", "role": "q1" }} , 
 	{ "name": "rxmat_M_real_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "address0" }} , 
 	{ "name": "rxmat_M_real_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "ce0" }} , 
 	{ "name": "rxmat_M_real_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "q0" }} , 
 	{ "name": "rxmat_M_real_21_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "address1" }} , 
 	{ "name": "rxmat_M_real_21_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "ce1" }} , 
 	{ "name": "rxmat_M_real_21_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_21", "role": "q1" }} , 
 	{ "name": "rxmat_M_real_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "address0" }} , 
 	{ "name": "rxmat_M_real_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "ce0" }} , 
 	{ "name": "rxmat_M_real_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "q0" }} , 
 	{ "name": "rxmat_M_real_22_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "address1" }} , 
 	{ "name": "rxmat_M_real_22_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "ce1" }} , 
 	{ "name": "rxmat_M_real_22_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_22", "role": "q1" }} , 
 	{ "name": "rxmat_M_real_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "address0" }} , 
 	{ "name": "rxmat_M_real_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "ce0" }} , 
 	{ "name": "rxmat_M_real_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "q0" }} , 
 	{ "name": "rxmat_M_real_23_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "address1" }} , 
 	{ "name": "rxmat_M_real_23_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "ce1" }} , 
 	{ "name": "rxmat_M_real_23_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_real_23", "role": "q1" }} , 
 	{ "name": "rxmat_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "address0" }} , 
 	{ "name": "rxmat_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "ce0" }} , 
 	{ "name": "rxmat_M_imag_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "q0" }} , 
 	{ "name": "rxmat_M_imag_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "address1" }} , 
 	{ "name": "rxmat_M_imag_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "ce1" }} , 
 	{ "name": "rxmat_M_imag_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_2", "role": "q1" }} , 
 	{ "name": "rxmat_M_imag_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "address0" }} , 
 	{ "name": "rxmat_M_imag_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "ce0" }} , 
 	{ "name": "rxmat_M_imag_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "q0" }} , 
 	{ "name": "rxmat_M_imag_24_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "address1" }} , 
 	{ "name": "rxmat_M_imag_24_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "ce1" }} , 
 	{ "name": "rxmat_M_imag_24_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_24", "role": "q1" }} , 
 	{ "name": "rxmat_M_imag_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "address0" }} , 
 	{ "name": "rxmat_M_imag_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "ce0" }} , 
 	{ "name": "rxmat_M_imag_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "q0" }} , 
 	{ "name": "rxmat_M_imag_25_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "address1" }} , 
 	{ "name": "rxmat_M_imag_25_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "ce1" }} , 
 	{ "name": "rxmat_M_imag_25_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_25", "role": "q1" }} , 
 	{ "name": "rxmat_M_imag_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "address0" }} , 
 	{ "name": "rxmat_M_imag_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "ce0" }} , 
 	{ "name": "rxmat_M_imag_26_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "q0" }} , 
 	{ "name": "rxmat_M_imag_26_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "address1" }} , 
 	{ "name": "rxmat_M_imag_26_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "ce1" }} , 
 	{ "name": "rxmat_M_imag_26_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_M_imag_26", "role": "q1" }} , 
 	{ "name": "rxmat_delay_M_real_s_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_s", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_s_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_s", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_s_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_s", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_s_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_s", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_s_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_s", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_s_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_s", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_s_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_s", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_s_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_s", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_1", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_1", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_1", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_1", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_1", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_1", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_1", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_1", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_2", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_2", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_2", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_2", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_2", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_2", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_2", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_2", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_3", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_3", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_3", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_3", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_3", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_3", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_3", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_3", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_4", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_4", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_4", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_4", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_4", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_4", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_4", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_4", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_5", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_5", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_5", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_5", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_5", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_5", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_5", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_5", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_6", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_6", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_6", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_6", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_6", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_6", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_6", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_6", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_real_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_7", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_real_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_7", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_real_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_7", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_real_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_real_7", "role": "d0" }} , 
 	{ "name": "rxmat_delay_M_imag_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_7", "role": "address0" }} , 
 	{ "name": "rxmat_delay_M_imag_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_7", "role": "ce0" }} , 
 	{ "name": "rxmat_delay_M_imag_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_7", "role": "we0" }} , 
 	{ "name": "rxmat_delay_M_imag_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rxmat_delay_M_imag_7", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48"],
		"CDFG" : "DopplerDelay",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "rxmat_M_real_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_real_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_real_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_real_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_imag_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_imag_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_imag_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_M_imag_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rxmat_delay_M_real_s", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_s", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_real_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rxmat_delay_M_imag_7", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U8", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U9", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U10", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U11", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U12", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U13", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U14", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fsub_32ns_bkb_U15", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U16", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U17", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U18", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U19", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U20", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U21", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U22", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U23", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U24", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U25", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U26", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U27", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U28", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U29", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U30", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U31", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U32", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U33", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U34", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U35", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U36", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U37", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U38", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U39", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U40", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U41", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U42", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U43", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U44", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U45", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U46", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U47", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_dEe_U48", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	DopplerDelay {
		rxmat_M_real_2 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_real_21 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_real_22 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_real_23 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_imag_2 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_imag_24 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_imag_25 {Type I LastRead 2 FirstWrite -1}
		rxmat_M_imag_26 {Type I LastRead 2 FirstWrite -1}
		rxmat_delay_M_real_s {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_s {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_1 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_1 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_2 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_2 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_3 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_3 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_4 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_4 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_5 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_5 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_6 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_6 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_7 {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_imag_7 {Type O LastRead -1 FirstWrite 8}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "24", "Max" : "24"}
	, {"Name" : "Interval", "Min" : "24", "Max" : "24"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	rxmat_M_real_2 { ap_memory {  { rxmat_M_real_2_address0 mem_address 1 5 }  { rxmat_M_real_2_ce0 mem_ce 1 1 }  { rxmat_M_real_2_q0 mem_dout 0 32 }  { rxmat_M_real_2_address1 MemPortADDR2 1 5 }  { rxmat_M_real_2_ce1 MemPortCE2 1 1 }  { rxmat_M_real_2_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_real_21 { ap_memory {  { rxmat_M_real_21_address0 mem_address 1 5 }  { rxmat_M_real_21_ce0 mem_ce 1 1 }  { rxmat_M_real_21_q0 mem_dout 0 32 }  { rxmat_M_real_21_address1 MemPortADDR2 1 5 }  { rxmat_M_real_21_ce1 MemPortCE2 1 1 }  { rxmat_M_real_21_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_real_22 { ap_memory {  { rxmat_M_real_22_address0 mem_address 1 5 }  { rxmat_M_real_22_ce0 mem_ce 1 1 }  { rxmat_M_real_22_q0 mem_dout 0 32 }  { rxmat_M_real_22_address1 MemPortADDR2 1 5 }  { rxmat_M_real_22_ce1 MemPortCE2 1 1 }  { rxmat_M_real_22_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_real_23 { ap_memory {  { rxmat_M_real_23_address0 mem_address 1 5 }  { rxmat_M_real_23_ce0 mem_ce 1 1 }  { rxmat_M_real_23_q0 mem_dout 0 32 }  { rxmat_M_real_23_address1 MemPortADDR2 1 5 }  { rxmat_M_real_23_ce1 MemPortCE2 1 1 }  { rxmat_M_real_23_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_imag_2 { ap_memory {  { rxmat_M_imag_2_address0 mem_address 1 5 }  { rxmat_M_imag_2_ce0 mem_ce 1 1 }  { rxmat_M_imag_2_q0 mem_dout 0 32 }  { rxmat_M_imag_2_address1 MemPortADDR2 1 5 }  { rxmat_M_imag_2_ce1 MemPortCE2 1 1 }  { rxmat_M_imag_2_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_imag_24 { ap_memory {  { rxmat_M_imag_24_address0 mem_address 1 5 }  { rxmat_M_imag_24_ce0 mem_ce 1 1 }  { rxmat_M_imag_24_q0 mem_dout 0 32 }  { rxmat_M_imag_24_address1 MemPortADDR2 1 5 }  { rxmat_M_imag_24_ce1 MemPortCE2 1 1 }  { rxmat_M_imag_24_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_imag_25 { ap_memory {  { rxmat_M_imag_25_address0 mem_address 1 5 }  { rxmat_M_imag_25_ce0 mem_ce 1 1 }  { rxmat_M_imag_25_q0 mem_dout 0 32 }  { rxmat_M_imag_25_address1 MemPortADDR2 1 5 }  { rxmat_M_imag_25_ce1 MemPortCE2 1 1 }  { rxmat_M_imag_25_q1 MemPortDOUT2 0 32 } } }
	rxmat_M_imag_26 { ap_memory {  { rxmat_M_imag_26_address0 mem_address 1 5 }  { rxmat_M_imag_26_ce0 mem_ce 1 1 }  { rxmat_M_imag_26_q0 mem_dout 0 32 }  { rxmat_M_imag_26_address1 MemPortADDR2 1 5 }  { rxmat_M_imag_26_ce1 MemPortCE2 1 1 }  { rxmat_M_imag_26_q1 MemPortDOUT2 0 32 } } }
	rxmat_delay_M_real_s { ap_memory {  { rxmat_delay_M_real_s_address0 mem_address 1 4 }  { rxmat_delay_M_real_s_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_s_we0 mem_we 1 1 }  { rxmat_delay_M_real_s_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_s { ap_memory {  { rxmat_delay_M_imag_s_address0 mem_address 1 4 }  { rxmat_delay_M_imag_s_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_s_we0 mem_we 1 1 }  { rxmat_delay_M_imag_s_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_1 { ap_memory {  { rxmat_delay_M_real_1_address0 mem_address 1 4 }  { rxmat_delay_M_real_1_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_1_we0 mem_we 1 1 }  { rxmat_delay_M_real_1_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_1 { ap_memory {  { rxmat_delay_M_imag_1_address0 mem_address 1 4 }  { rxmat_delay_M_imag_1_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_1_we0 mem_we 1 1 }  { rxmat_delay_M_imag_1_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_2 { ap_memory {  { rxmat_delay_M_real_2_address0 mem_address 1 4 }  { rxmat_delay_M_real_2_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_2_we0 mem_we 1 1 }  { rxmat_delay_M_real_2_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_2 { ap_memory {  { rxmat_delay_M_imag_2_address0 mem_address 1 4 }  { rxmat_delay_M_imag_2_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_2_we0 mem_we 1 1 }  { rxmat_delay_M_imag_2_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_3 { ap_memory {  { rxmat_delay_M_real_3_address0 mem_address 1 4 }  { rxmat_delay_M_real_3_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_3_we0 mem_we 1 1 }  { rxmat_delay_M_real_3_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_3 { ap_memory {  { rxmat_delay_M_imag_3_address0 mem_address 1 4 }  { rxmat_delay_M_imag_3_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_3_we0 mem_we 1 1 }  { rxmat_delay_M_imag_3_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_4 { ap_memory {  { rxmat_delay_M_real_4_address0 mem_address 1 4 }  { rxmat_delay_M_real_4_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_4_we0 mem_we 1 1 }  { rxmat_delay_M_real_4_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_4 { ap_memory {  { rxmat_delay_M_imag_4_address0 mem_address 1 4 }  { rxmat_delay_M_imag_4_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_4_we0 mem_we 1 1 }  { rxmat_delay_M_imag_4_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_5 { ap_memory {  { rxmat_delay_M_real_5_address0 mem_address 1 4 }  { rxmat_delay_M_real_5_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_5_we0 mem_we 1 1 }  { rxmat_delay_M_real_5_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_5 { ap_memory {  { rxmat_delay_M_imag_5_address0 mem_address 1 4 }  { rxmat_delay_M_imag_5_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_5_we0 mem_we 1 1 }  { rxmat_delay_M_imag_5_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_6 { ap_memory {  { rxmat_delay_M_real_6_address0 mem_address 1 4 }  { rxmat_delay_M_real_6_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_6_we0 mem_we 1 1 }  { rxmat_delay_M_real_6_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_6 { ap_memory {  { rxmat_delay_M_imag_6_address0 mem_address 1 4 }  { rxmat_delay_M_imag_6_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_6_we0 mem_we 1 1 }  { rxmat_delay_M_imag_6_d0 mem_din 1 32 } } }
	rxmat_delay_M_real_7 { ap_memory {  { rxmat_delay_M_real_7_address0 mem_address 1 4 }  { rxmat_delay_M_real_7_ce0 mem_ce 1 1 }  { rxmat_delay_M_real_7_we0 mem_we 1 1 }  { rxmat_delay_M_real_7_d0 mem_din 1 32 } } }
	rxmat_delay_M_imag_7 { ap_memory {  { rxmat_delay_M_imag_7_address0 mem_address 1 4 }  { rxmat_delay_M_imag_7_ce0 mem_ce 1 1 }  { rxmat_delay_M_imag_7_we0 mem_we 1 1 }  { rxmat_delay_M_imag_7_d0 mem_din 1 32 } } }
}

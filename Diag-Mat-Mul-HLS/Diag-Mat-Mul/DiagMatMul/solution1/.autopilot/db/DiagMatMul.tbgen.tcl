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
	{ A_0 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_1 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_2 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_3 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_4 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_5 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_6 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_7 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_8 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_9 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_10 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_11 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_12 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_13 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_14 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ A_15 float 32 regular {array 16 { 1 1 } 1 1 }  }
	{ B_0 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_1 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_2 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_3 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_4 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_5 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_6 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_7 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_8 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_9 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_10 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_11 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_12 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_13 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_14 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ B_15 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ C float 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "C", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 154
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_0_address0 sc_out sc_lv 4 signal 0 } 
	{ A_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_0_q0 sc_in sc_lv 32 signal 0 } 
	{ A_0_address1 sc_out sc_lv 4 signal 0 } 
	{ A_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ A_0_q1 sc_in sc_lv 32 signal 0 } 
	{ A_1_address0 sc_out sc_lv 4 signal 1 } 
	{ A_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_1_address1 sc_out sc_lv 4 signal 1 } 
	{ A_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ A_1_q1 sc_in sc_lv 32 signal 1 } 
	{ A_2_address0 sc_out sc_lv 4 signal 2 } 
	{ A_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_2_address1 sc_out sc_lv 4 signal 2 } 
	{ A_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ A_2_q1 sc_in sc_lv 32 signal 2 } 
	{ A_3_address0 sc_out sc_lv 4 signal 3 } 
	{ A_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_3_address1 sc_out sc_lv 4 signal 3 } 
	{ A_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ A_3_q1 sc_in sc_lv 32 signal 3 } 
	{ A_4_address0 sc_out sc_lv 4 signal 4 } 
	{ A_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_4_q0 sc_in sc_lv 32 signal 4 } 
	{ A_4_address1 sc_out sc_lv 4 signal 4 } 
	{ A_4_ce1 sc_out sc_logic 1 signal 4 } 
	{ A_4_q1 sc_in sc_lv 32 signal 4 } 
	{ A_5_address0 sc_out sc_lv 4 signal 5 } 
	{ A_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_5_q0 sc_in sc_lv 32 signal 5 } 
	{ A_5_address1 sc_out sc_lv 4 signal 5 } 
	{ A_5_ce1 sc_out sc_logic 1 signal 5 } 
	{ A_5_q1 sc_in sc_lv 32 signal 5 } 
	{ A_6_address0 sc_out sc_lv 4 signal 6 } 
	{ A_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_6_q0 sc_in sc_lv 32 signal 6 } 
	{ A_6_address1 sc_out sc_lv 4 signal 6 } 
	{ A_6_ce1 sc_out sc_logic 1 signal 6 } 
	{ A_6_q1 sc_in sc_lv 32 signal 6 } 
	{ A_7_address0 sc_out sc_lv 4 signal 7 } 
	{ A_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_7_address1 sc_out sc_lv 4 signal 7 } 
	{ A_7_ce1 sc_out sc_logic 1 signal 7 } 
	{ A_7_q1 sc_in sc_lv 32 signal 7 } 
	{ A_8_address0 sc_out sc_lv 4 signal 8 } 
	{ A_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_8_q0 sc_in sc_lv 32 signal 8 } 
	{ A_8_address1 sc_out sc_lv 4 signal 8 } 
	{ A_8_ce1 sc_out sc_logic 1 signal 8 } 
	{ A_8_q1 sc_in sc_lv 32 signal 8 } 
	{ A_9_address0 sc_out sc_lv 4 signal 9 } 
	{ A_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_9_q0 sc_in sc_lv 32 signal 9 } 
	{ A_9_address1 sc_out sc_lv 4 signal 9 } 
	{ A_9_ce1 sc_out sc_logic 1 signal 9 } 
	{ A_9_q1 sc_in sc_lv 32 signal 9 } 
	{ A_10_address0 sc_out sc_lv 4 signal 10 } 
	{ A_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ A_10_q0 sc_in sc_lv 32 signal 10 } 
	{ A_10_address1 sc_out sc_lv 4 signal 10 } 
	{ A_10_ce1 sc_out sc_logic 1 signal 10 } 
	{ A_10_q1 sc_in sc_lv 32 signal 10 } 
	{ A_11_address0 sc_out sc_lv 4 signal 11 } 
	{ A_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ A_11_q0 sc_in sc_lv 32 signal 11 } 
	{ A_11_address1 sc_out sc_lv 4 signal 11 } 
	{ A_11_ce1 sc_out sc_logic 1 signal 11 } 
	{ A_11_q1 sc_in sc_lv 32 signal 11 } 
	{ A_12_address0 sc_out sc_lv 4 signal 12 } 
	{ A_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ A_12_q0 sc_in sc_lv 32 signal 12 } 
	{ A_12_address1 sc_out sc_lv 4 signal 12 } 
	{ A_12_ce1 sc_out sc_logic 1 signal 12 } 
	{ A_12_q1 sc_in sc_lv 32 signal 12 } 
	{ A_13_address0 sc_out sc_lv 4 signal 13 } 
	{ A_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ A_13_q0 sc_in sc_lv 32 signal 13 } 
	{ A_13_address1 sc_out sc_lv 4 signal 13 } 
	{ A_13_ce1 sc_out sc_logic 1 signal 13 } 
	{ A_13_q1 sc_in sc_lv 32 signal 13 } 
	{ A_14_address0 sc_out sc_lv 4 signal 14 } 
	{ A_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ A_14_q0 sc_in sc_lv 32 signal 14 } 
	{ A_14_address1 sc_out sc_lv 4 signal 14 } 
	{ A_14_ce1 sc_out sc_logic 1 signal 14 } 
	{ A_14_q1 sc_in sc_lv 32 signal 14 } 
	{ A_15_address0 sc_out sc_lv 4 signal 15 } 
	{ A_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ A_15_q0 sc_in sc_lv 32 signal 15 } 
	{ A_15_address1 sc_out sc_lv 4 signal 15 } 
	{ A_15_ce1 sc_out sc_logic 1 signal 15 } 
	{ A_15_q1 sc_in sc_lv 32 signal 15 } 
	{ B_0_address0 sc_out sc_lv 4 signal 16 } 
	{ B_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ B_0_q0 sc_in sc_lv 32 signal 16 } 
	{ B_1_address0 sc_out sc_lv 4 signal 17 } 
	{ B_1_ce0 sc_out sc_logic 1 signal 17 } 
	{ B_1_q0 sc_in sc_lv 32 signal 17 } 
	{ B_2_address0 sc_out sc_lv 4 signal 18 } 
	{ B_2_ce0 sc_out sc_logic 1 signal 18 } 
	{ B_2_q0 sc_in sc_lv 32 signal 18 } 
	{ B_3_address0 sc_out sc_lv 4 signal 19 } 
	{ B_3_ce0 sc_out sc_logic 1 signal 19 } 
	{ B_3_q0 sc_in sc_lv 32 signal 19 } 
	{ B_4_address0 sc_out sc_lv 4 signal 20 } 
	{ B_4_ce0 sc_out sc_logic 1 signal 20 } 
	{ B_4_q0 sc_in sc_lv 32 signal 20 } 
	{ B_5_address0 sc_out sc_lv 4 signal 21 } 
	{ B_5_ce0 sc_out sc_logic 1 signal 21 } 
	{ B_5_q0 sc_in sc_lv 32 signal 21 } 
	{ B_6_address0 sc_out sc_lv 4 signal 22 } 
	{ B_6_ce0 sc_out sc_logic 1 signal 22 } 
	{ B_6_q0 sc_in sc_lv 32 signal 22 } 
	{ B_7_address0 sc_out sc_lv 4 signal 23 } 
	{ B_7_ce0 sc_out sc_logic 1 signal 23 } 
	{ B_7_q0 sc_in sc_lv 32 signal 23 } 
	{ B_8_address0 sc_out sc_lv 4 signal 24 } 
	{ B_8_ce0 sc_out sc_logic 1 signal 24 } 
	{ B_8_q0 sc_in sc_lv 32 signal 24 } 
	{ B_9_address0 sc_out sc_lv 4 signal 25 } 
	{ B_9_ce0 sc_out sc_logic 1 signal 25 } 
	{ B_9_q0 sc_in sc_lv 32 signal 25 } 
	{ B_10_address0 sc_out sc_lv 4 signal 26 } 
	{ B_10_ce0 sc_out sc_logic 1 signal 26 } 
	{ B_10_q0 sc_in sc_lv 32 signal 26 } 
	{ B_11_address0 sc_out sc_lv 4 signal 27 } 
	{ B_11_ce0 sc_out sc_logic 1 signal 27 } 
	{ B_11_q0 sc_in sc_lv 32 signal 27 } 
	{ B_12_address0 sc_out sc_lv 4 signal 28 } 
	{ B_12_ce0 sc_out sc_logic 1 signal 28 } 
	{ B_12_q0 sc_in sc_lv 32 signal 28 } 
	{ B_13_address0 sc_out sc_lv 4 signal 29 } 
	{ B_13_ce0 sc_out sc_logic 1 signal 29 } 
	{ B_13_q0 sc_in sc_lv 32 signal 29 } 
	{ B_14_address0 sc_out sc_lv 4 signal 30 } 
	{ B_14_ce0 sc_out sc_logic 1 signal 30 } 
	{ B_14_q0 sc_in sc_lv 32 signal 30 } 
	{ B_15_address0 sc_out sc_lv 4 signal 31 } 
	{ B_15_ce0 sc_out sc_logic 1 signal 31 } 
	{ B_15_q0 sc_in sc_lv 32 signal 31 } 
	{ C_address0 sc_out sc_lv 4 signal 32 } 
	{ C_ce0 sc_out sc_logic 1 signal 32 } 
	{ C_we0 sc_out sc_logic 1 signal 32 } 
	{ C_d0 sc_out sc_lv 32 signal 32 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_0", "role": "address0" }} , 
 	{ "name": "A_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_0", "role": "ce0" }} , 
 	{ "name": "A_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_0", "role": "q0" }} , 
 	{ "name": "A_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_0", "role": "address1" }} , 
 	{ "name": "A_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_0", "role": "ce1" }} , 
 	{ "name": "A_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_0", "role": "q1" }} , 
 	{ "name": "A_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_1", "role": "address0" }} , 
 	{ "name": "A_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_1", "role": "ce0" }} , 
 	{ "name": "A_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_1", "role": "q0" }} , 
 	{ "name": "A_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_1", "role": "address1" }} , 
 	{ "name": "A_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_1", "role": "ce1" }} , 
 	{ "name": "A_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_1", "role": "q1" }} , 
 	{ "name": "A_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_2", "role": "address0" }} , 
 	{ "name": "A_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_2", "role": "ce0" }} , 
 	{ "name": "A_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_2", "role": "q0" }} , 
 	{ "name": "A_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_2", "role": "address1" }} , 
 	{ "name": "A_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_2", "role": "ce1" }} , 
 	{ "name": "A_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_2", "role": "q1" }} , 
 	{ "name": "A_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_3", "role": "address0" }} , 
 	{ "name": "A_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_3", "role": "ce0" }} , 
 	{ "name": "A_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_3", "role": "q0" }} , 
 	{ "name": "A_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_3", "role": "address1" }} , 
 	{ "name": "A_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_3", "role": "ce1" }} , 
 	{ "name": "A_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_3", "role": "q1" }} , 
 	{ "name": "A_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_4", "role": "address0" }} , 
 	{ "name": "A_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_4", "role": "ce0" }} , 
 	{ "name": "A_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_4", "role": "q0" }} , 
 	{ "name": "A_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_4", "role": "address1" }} , 
 	{ "name": "A_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_4", "role": "ce1" }} , 
 	{ "name": "A_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_4", "role": "q1" }} , 
 	{ "name": "A_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_5", "role": "address0" }} , 
 	{ "name": "A_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_5", "role": "ce0" }} , 
 	{ "name": "A_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_5", "role": "q0" }} , 
 	{ "name": "A_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_5", "role": "address1" }} , 
 	{ "name": "A_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_5", "role": "ce1" }} , 
 	{ "name": "A_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_5", "role": "q1" }} , 
 	{ "name": "A_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_6", "role": "address0" }} , 
 	{ "name": "A_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_6", "role": "ce0" }} , 
 	{ "name": "A_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_6", "role": "q0" }} , 
 	{ "name": "A_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_6", "role": "address1" }} , 
 	{ "name": "A_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_6", "role": "ce1" }} , 
 	{ "name": "A_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_6", "role": "q1" }} , 
 	{ "name": "A_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_7", "role": "address0" }} , 
 	{ "name": "A_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_7", "role": "ce0" }} , 
 	{ "name": "A_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_7", "role": "q0" }} , 
 	{ "name": "A_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_7", "role": "address1" }} , 
 	{ "name": "A_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_7", "role": "ce1" }} , 
 	{ "name": "A_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_7", "role": "q1" }} , 
 	{ "name": "A_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_8", "role": "address0" }} , 
 	{ "name": "A_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_8", "role": "ce0" }} , 
 	{ "name": "A_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_8", "role": "q0" }} , 
 	{ "name": "A_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_8", "role": "address1" }} , 
 	{ "name": "A_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_8", "role": "ce1" }} , 
 	{ "name": "A_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_8", "role": "q1" }} , 
 	{ "name": "A_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_9", "role": "address0" }} , 
 	{ "name": "A_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_9", "role": "ce0" }} , 
 	{ "name": "A_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_9", "role": "q0" }} , 
 	{ "name": "A_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_9", "role": "address1" }} , 
 	{ "name": "A_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_9", "role": "ce1" }} , 
 	{ "name": "A_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_9", "role": "q1" }} , 
 	{ "name": "A_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_10", "role": "address0" }} , 
 	{ "name": "A_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_10", "role": "ce0" }} , 
 	{ "name": "A_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_10", "role": "q0" }} , 
 	{ "name": "A_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_10", "role": "address1" }} , 
 	{ "name": "A_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_10", "role": "ce1" }} , 
 	{ "name": "A_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_10", "role": "q1" }} , 
 	{ "name": "A_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_11", "role": "address0" }} , 
 	{ "name": "A_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_11", "role": "ce0" }} , 
 	{ "name": "A_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_11", "role": "q0" }} , 
 	{ "name": "A_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_11", "role": "address1" }} , 
 	{ "name": "A_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_11", "role": "ce1" }} , 
 	{ "name": "A_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_11", "role": "q1" }} , 
 	{ "name": "A_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_12", "role": "address0" }} , 
 	{ "name": "A_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_12", "role": "ce0" }} , 
 	{ "name": "A_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_12", "role": "q0" }} , 
 	{ "name": "A_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_12", "role": "address1" }} , 
 	{ "name": "A_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_12", "role": "ce1" }} , 
 	{ "name": "A_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_12", "role": "q1" }} , 
 	{ "name": "A_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_13", "role": "address0" }} , 
 	{ "name": "A_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_13", "role": "ce0" }} , 
 	{ "name": "A_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_13", "role": "q0" }} , 
 	{ "name": "A_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_13", "role": "address1" }} , 
 	{ "name": "A_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_13", "role": "ce1" }} , 
 	{ "name": "A_13_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_13", "role": "q1" }} , 
 	{ "name": "A_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_14", "role": "address0" }} , 
 	{ "name": "A_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_14", "role": "ce0" }} , 
 	{ "name": "A_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_14", "role": "q0" }} , 
 	{ "name": "A_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_14", "role": "address1" }} , 
 	{ "name": "A_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_14", "role": "ce1" }} , 
 	{ "name": "A_14_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_14", "role": "q1" }} , 
 	{ "name": "A_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_15", "role": "address0" }} , 
 	{ "name": "A_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_15", "role": "ce0" }} , 
 	{ "name": "A_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_15", "role": "q0" }} , 
 	{ "name": "A_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_15", "role": "address1" }} , 
 	{ "name": "A_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_15", "role": "ce1" }} , 
 	{ "name": "A_15_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_15", "role": "q1" }} , 
 	{ "name": "B_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_0", "role": "address0" }} , 
 	{ "name": "B_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_0", "role": "ce0" }} , 
 	{ "name": "B_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_0", "role": "q0" }} , 
 	{ "name": "B_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_1", "role": "address0" }} , 
 	{ "name": "B_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_1", "role": "ce0" }} , 
 	{ "name": "B_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_1", "role": "q0" }} , 
 	{ "name": "B_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_2", "role": "address0" }} , 
 	{ "name": "B_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_2", "role": "ce0" }} , 
 	{ "name": "B_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_2", "role": "q0" }} , 
 	{ "name": "B_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_3", "role": "address0" }} , 
 	{ "name": "B_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_3", "role": "ce0" }} , 
 	{ "name": "B_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_3", "role": "q0" }} , 
 	{ "name": "B_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_4", "role": "address0" }} , 
 	{ "name": "B_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_4", "role": "ce0" }} , 
 	{ "name": "B_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_4", "role": "q0" }} , 
 	{ "name": "B_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_5", "role": "address0" }} , 
 	{ "name": "B_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_5", "role": "ce0" }} , 
 	{ "name": "B_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_5", "role": "q0" }} , 
 	{ "name": "B_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_6", "role": "address0" }} , 
 	{ "name": "B_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_6", "role": "ce0" }} , 
 	{ "name": "B_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_6", "role": "q0" }} , 
 	{ "name": "B_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_7", "role": "address0" }} , 
 	{ "name": "B_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_7", "role": "ce0" }} , 
 	{ "name": "B_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_7", "role": "q0" }} , 
 	{ "name": "B_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_8", "role": "address0" }} , 
 	{ "name": "B_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_8", "role": "ce0" }} , 
 	{ "name": "B_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_8", "role": "q0" }} , 
 	{ "name": "B_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_9", "role": "address0" }} , 
 	{ "name": "B_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_9", "role": "ce0" }} , 
 	{ "name": "B_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_9", "role": "q0" }} , 
 	{ "name": "B_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_10", "role": "address0" }} , 
 	{ "name": "B_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_10", "role": "ce0" }} , 
 	{ "name": "B_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_10", "role": "q0" }} , 
 	{ "name": "B_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_11", "role": "address0" }} , 
 	{ "name": "B_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_11", "role": "ce0" }} , 
 	{ "name": "B_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_11", "role": "q0" }} , 
 	{ "name": "B_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_12", "role": "address0" }} , 
 	{ "name": "B_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_12", "role": "ce0" }} , 
 	{ "name": "B_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_12", "role": "q0" }} , 
 	{ "name": "B_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_13", "role": "address0" }} , 
 	{ "name": "B_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_13", "role": "ce0" }} , 
 	{ "name": "B_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_13", "role": "q0" }} , 
 	{ "name": "B_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_14", "role": "address0" }} , 
 	{ "name": "B_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_14", "role": "ce0" }} , 
 	{ "name": "B_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_14", "role": "q0" }} , 
 	{ "name": "B_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_15", "role": "address0" }} , 
 	{ "name": "B_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_15", "role": "ce0" }} , 
 	{ "name": "B_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_15", "role": "q0" }} , 
 	{ "name": "C_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C", "role": "address0" }} , 
 	{ "name": "C_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "ce0" }} , 
 	{ "name": "C_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "we0" }} , 
 	{ "name": "C_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "DiagMatMul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "192", "EstimateLatencyMax" : "192",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_bkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_cud_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fmul_32ns_cud_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_164_32dEe_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_164_32dEe_U6", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	DiagMatMul {
		A_0 {Type I LastRead 9 FirstWrite -1}
		A_1 {Type I LastRead 9 FirstWrite -1}
		A_2 {Type I LastRead 9 FirstWrite -1}
		A_3 {Type I LastRead 9 FirstWrite -1}
		A_4 {Type I LastRead 9 FirstWrite -1}
		A_5 {Type I LastRead 9 FirstWrite -1}
		A_6 {Type I LastRead 9 FirstWrite -1}
		A_7 {Type I LastRead 9 FirstWrite -1}
		A_8 {Type I LastRead 9 FirstWrite -1}
		A_9 {Type I LastRead 9 FirstWrite -1}
		A_10 {Type I LastRead 9 FirstWrite -1}
		A_11 {Type I LastRead 9 FirstWrite -1}
		A_12 {Type I LastRead 9 FirstWrite -1}
		A_13 {Type I LastRead 9 FirstWrite -1}
		A_14 {Type I LastRead 9 FirstWrite -1}
		A_15 {Type I LastRead 9 FirstWrite -1}
		B_0 {Type I LastRead 1 FirstWrite -1}
		B_1 {Type I LastRead 1 FirstWrite -1}
		B_2 {Type I LastRead 1 FirstWrite -1}
		B_3 {Type I LastRead 1 FirstWrite -1}
		B_4 {Type I LastRead 1 FirstWrite -1}
		B_5 {Type I LastRead 1 FirstWrite -1}
		B_6 {Type I LastRead 1 FirstWrite -1}
		B_7 {Type I LastRead 1 FirstWrite -1}
		B_8 {Type I LastRead 1 FirstWrite -1}
		B_9 {Type I LastRead 1 FirstWrite -1}
		B_10 {Type I LastRead 1 FirstWrite -1}
		B_11 {Type I LastRead 1 FirstWrite -1}
		B_12 {Type I LastRead 1 FirstWrite -1}
		B_13 {Type I LastRead 1 FirstWrite -1}
		B_14 {Type I LastRead 1 FirstWrite -1}
		B_15 {Type I LastRead 1 FirstWrite -1}
		C {Type O LastRead -1 FirstWrite 71}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "192", "Max" : "192"}
	, {"Name" : "Interval", "Min" : "192", "Max" : "192"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_0 { ap_memory {  { A_0_address0 mem_address 1 4 }  { A_0_ce0 mem_ce 1 1 }  { A_0_q0 mem_dout 0 32 }  { A_0_address1 MemPortADDR2 1 4 }  { A_0_ce1 MemPortCE2 1 1 }  { A_0_q1 MemPortDOUT2 0 32 } } }
	A_1 { ap_memory {  { A_1_address0 mem_address 1 4 }  { A_1_ce0 mem_ce 1 1 }  { A_1_q0 mem_dout 0 32 }  { A_1_address1 MemPortADDR2 1 4 }  { A_1_ce1 MemPortCE2 1 1 }  { A_1_q1 MemPortDOUT2 0 32 } } }
	A_2 { ap_memory {  { A_2_address0 mem_address 1 4 }  { A_2_ce0 mem_ce 1 1 }  { A_2_q0 mem_dout 0 32 }  { A_2_address1 MemPortADDR2 1 4 }  { A_2_ce1 MemPortCE2 1 1 }  { A_2_q1 MemPortDOUT2 0 32 } } }
	A_3 { ap_memory {  { A_3_address0 mem_address 1 4 }  { A_3_ce0 mem_ce 1 1 }  { A_3_q0 mem_dout 0 32 }  { A_3_address1 MemPortADDR2 1 4 }  { A_3_ce1 MemPortCE2 1 1 }  { A_3_q1 MemPortDOUT2 0 32 } } }
	A_4 { ap_memory {  { A_4_address0 mem_address 1 4 }  { A_4_ce0 mem_ce 1 1 }  { A_4_q0 mem_dout 0 32 }  { A_4_address1 MemPortADDR2 1 4 }  { A_4_ce1 MemPortCE2 1 1 }  { A_4_q1 MemPortDOUT2 0 32 } } }
	A_5 { ap_memory {  { A_5_address0 mem_address 1 4 }  { A_5_ce0 mem_ce 1 1 }  { A_5_q0 mem_dout 0 32 }  { A_5_address1 MemPortADDR2 1 4 }  { A_5_ce1 MemPortCE2 1 1 }  { A_5_q1 MemPortDOUT2 0 32 } } }
	A_6 { ap_memory {  { A_6_address0 mem_address 1 4 }  { A_6_ce0 mem_ce 1 1 }  { A_6_q0 mem_dout 0 32 }  { A_6_address1 MemPortADDR2 1 4 }  { A_6_ce1 MemPortCE2 1 1 }  { A_6_q1 MemPortDOUT2 0 32 } } }
	A_7 { ap_memory {  { A_7_address0 mem_address 1 4 }  { A_7_ce0 mem_ce 1 1 }  { A_7_q0 mem_dout 0 32 }  { A_7_address1 MemPortADDR2 1 4 }  { A_7_ce1 MemPortCE2 1 1 }  { A_7_q1 MemPortDOUT2 0 32 } } }
	A_8 { ap_memory {  { A_8_address0 mem_address 1 4 }  { A_8_ce0 mem_ce 1 1 }  { A_8_q0 mem_dout 0 32 }  { A_8_address1 MemPortADDR2 1 4 }  { A_8_ce1 MemPortCE2 1 1 }  { A_8_q1 MemPortDOUT2 0 32 } } }
	A_9 { ap_memory {  { A_9_address0 mem_address 1 4 }  { A_9_ce0 mem_ce 1 1 }  { A_9_q0 mem_dout 0 32 }  { A_9_address1 MemPortADDR2 1 4 }  { A_9_ce1 MemPortCE2 1 1 }  { A_9_q1 MemPortDOUT2 0 32 } } }
	A_10 { ap_memory {  { A_10_address0 mem_address 1 4 }  { A_10_ce0 mem_ce 1 1 }  { A_10_q0 mem_dout 0 32 }  { A_10_address1 MemPortADDR2 1 4 }  { A_10_ce1 MemPortCE2 1 1 }  { A_10_q1 MemPortDOUT2 0 32 } } }
	A_11 { ap_memory {  { A_11_address0 mem_address 1 4 }  { A_11_ce0 mem_ce 1 1 }  { A_11_q0 mem_dout 0 32 }  { A_11_address1 MemPortADDR2 1 4 }  { A_11_ce1 MemPortCE2 1 1 }  { A_11_q1 MemPortDOUT2 0 32 } } }
	A_12 { ap_memory {  { A_12_address0 mem_address 1 4 }  { A_12_ce0 mem_ce 1 1 }  { A_12_q0 mem_dout 0 32 }  { A_12_address1 MemPortADDR2 1 4 }  { A_12_ce1 MemPortCE2 1 1 }  { A_12_q1 MemPortDOUT2 0 32 } } }
	A_13 { ap_memory {  { A_13_address0 mem_address 1 4 }  { A_13_ce0 mem_ce 1 1 }  { A_13_q0 mem_dout 0 32 }  { A_13_address1 MemPortADDR2 1 4 }  { A_13_ce1 MemPortCE2 1 1 }  { A_13_q1 MemPortDOUT2 0 32 } } }
	A_14 { ap_memory {  { A_14_address0 mem_address 1 4 }  { A_14_ce0 mem_ce 1 1 }  { A_14_q0 mem_dout 0 32 }  { A_14_address1 MemPortADDR2 1 4 }  { A_14_ce1 MemPortCE2 1 1 }  { A_14_q1 MemPortDOUT2 0 32 } } }
	A_15 { ap_memory {  { A_15_address0 mem_address 1 4 }  { A_15_ce0 mem_ce 1 1 }  { A_15_q0 mem_dout 0 32 }  { A_15_address1 MemPortADDR2 1 4 }  { A_15_ce1 MemPortCE2 1 1 }  { A_15_q1 MemPortDOUT2 0 32 } } }
	B_0 { ap_memory {  { B_0_address0 mem_address 1 4 }  { B_0_ce0 mem_ce 1 1 }  { B_0_q0 mem_dout 0 32 } } }
	B_1 { ap_memory {  { B_1_address0 mem_address 1 4 }  { B_1_ce0 mem_ce 1 1 }  { B_1_q0 mem_dout 0 32 } } }
	B_2 { ap_memory {  { B_2_address0 mem_address 1 4 }  { B_2_ce0 mem_ce 1 1 }  { B_2_q0 mem_dout 0 32 } } }
	B_3 { ap_memory {  { B_3_address0 mem_address 1 4 }  { B_3_ce0 mem_ce 1 1 }  { B_3_q0 mem_dout 0 32 } } }
	B_4 { ap_memory {  { B_4_address0 mem_address 1 4 }  { B_4_ce0 mem_ce 1 1 }  { B_4_q0 mem_dout 0 32 } } }
	B_5 { ap_memory {  { B_5_address0 mem_address 1 4 }  { B_5_ce0 mem_ce 1 1 }  { B_5_q0 mem_dout 0 32 } } }
	B_6 { ap_memory {  { B_6_address0 mem_address 1 4 }  { B_6_ce0 mem_ce 1 1 }  { B_6_q0 mem_dout 0 32 } } }
	B_7 { ap_memory {  { B_7_address0 mem_address 1 4 }  { B_7_ce0 mem_ce 1 1 }  { B_7_q0 mem_dout 0 32 } } }
	B_8 { ap_memory {  { B_8_address0 mem_address 1 4 }  { B_8_ce0 mem_ce 1 1 }  { B_8_q0 mem_dout 0 32 } } }
	B_9 { ap_memory {  { B_9_address0 mem_address 1 4 }  { B_9_ce0 mem_ce 1 1 }  { B_9_q0 mem_dout 0 32 } } }
	B_10 { ap_memory {  { B_10_address0 mem_address 1 4 }  { B_10_ce0 mem_ce 1 1 }  { B_10_q0 mem_dout 0 32 } } }
	B_11 { ap_memory {  { B_11_address0 mem_address 1 4 }  { B_11_ce0 mem_ce 1 1 }  { B_11_q0 mem_dout 0 32 } } }
	B_12 { ap_memory {  { B_12_address0 mem_address 1 4 }  { B_12_ce0 mem_ce 1 1 }  { B_12_q0 mem_dout 0 32 } } }
	B_13 { ap_memory {  { B_13_address0 mem_address 1 4 }  { B_13_ce0 mem_ce 1 1 }  { B_13_q0 mem_dout 0 32 } } }
	B_14 { ap_memory {  { B_14_address0 mem_address 1 4 }  { B_14_ce0 mem_ce 1 1 }  { B_14_q0 mem_dout 0 32 } } }
	B_15 { ap_memory {  { B_15_address0 mem_address 1 4 }  { B_15_ce0 mem_ce 1 1 }  { B_15_q0 mem_dout 0 32 } } }
	C { ap_memory {  { C_address0 mem_address 1 4 }  { C_ce0 mem_ce 1 1 }  { C_we0 mem_we 1 1 }  { C_d0 mem_din 1 32 } } }
}

set moduleName matmul
set isTopModule 1
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
set C_modelName {matmul}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_stream_V_data_V int 64 regular {axi_s 0 volatile  { in_stream Data } }  }
	{ in_stream_V_keep_V int 8 regular {axi_s 0 volatile  { in_stream Keep } }  }
	{ in_stream_V_strb_V int 8 regular {axi_s 0 volatile  { in_stream Strb } }  }
	{ in_stream_V_last_V int 1 regular {axi_s 0 volatile  { in_stream Last } }  }
	{ out_stream_V_data_V int 64 regular {axi_s 1 volatile  { out_stream Data } }  }
	{ out_stream_V_keep_V int 8 regular {axi_s 1 volatile  { out_stream Keep } }  }
	{ out_stream_V_strb_V int 8 regular {axi_s 1 volatile  { out_stream Strb } }  }
	{ out_stream_V_last_V int 1 regular {axi_s 1 volatile  { out_stream Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_stream_V_data_V", "interface" : "axis", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "in_stream.V.data.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_V_keep_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in_stream.V.keep.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_V_strb_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in_stream.V.strb.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in_stream.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_V_data_V", "interface" : "axis", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "out_stream.V.data.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_V_keep_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out_stream.V.keep.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_V_strb_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out_stream.V.strb.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out_stream.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 32
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ in_stream_TDATA sc_in sc_lv 64 signal 0 } 
	{ in_stream_TVALID sc_in sc_logic 1 invld 3 } 
	{ in_stream_TREADY sc_out sc_logic 1 inacc 3 } 
	{ in_stream_TKEEP sc_in sc_lv 8 signal 1 } 
	{ in_stream_TSTRB sc_in sc_lv 8 signal 2 } 
	{ in_stream_TLAST sc_in sc_lv 1 signal 3 } 
	{ out_stream_TDATA sc_out sc_lv 64 signal 4 } 
	{ out_stream_TVALID sc_out sc_logic 1 outvld 7 } 
	{ out_stream_TREADY sc_in sc_logic 1 outacc 7 } 
	{ out_stream_TKEEP sc_out sc_lv 8 signal 5 } 
	{ out_stream_TSTRB sc_out sc_lv 8 signal 6 } 
	{ out_stream_TLAST sc_out sc_lv 1 signal 7 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"matmul","role":"start","value":"0","valid_bit":"0"},{"name":"matmul","role":"continue","value":"0","valid_bit":"4"},{"name":"matmul","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"matmul","role":"start","value":"0","valid_bit":"0"},{"name":"matmul","role":"done","value":"0","valid_bit":"1"},{"name":"matmul","role":"idle","value":"0","valid_bit":"2"},{"name":"matmul","role":"ready","value":"0","valid_bit":"3"},{"name":"matmul","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "in_stream_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_stream_V_data_V", "role": "default" }} , 
 	{ "name": "in_stream_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "in_stream_V_last_V", "role": "default" }} , 
 	{ "name": "in_stream_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "in_stream_V_last_V", "role": "default" }} , 
 	{ "name": "in_stream_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_stream_V_keep_V", "role": "default" }} , 
 	{ "name": "in_stream_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_stream_V_strb_V", "role": "default" }} , 
 	{ "name": "in_stream_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_stream_V_last_V", "role": "default" }} , 
 	{ "name": "out_stream_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "out_stream_V_data_V", "role": "default" }} , 
 	{ "name": "out_stream_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_stream_V_last_V", "role": "default" }} , 
 	{ "name": "out_stream_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_stream_V_last_V", "role": "default" }} , 
 	{ "name": "out_stream_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_stream_V_keep_V", "role": "default" }} , 
 	{ "name": "out_stream_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_stream_V_strb_V", "role": "default" }} , 
 	{ "name": "out_stream_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_stream_V_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "703", "EstimateLatencyMax" : "703",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DiagMatMul_fu_506"}],
		"Port" : [
			{"Name" : "in_stream_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_stream_V_keep_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_V_strb_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "out_stream_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_stream_V_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_V_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "mulOut_M_real_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_0_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_0_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_2_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_2_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_3_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_3_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_real_3_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_0_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_0_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_2_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_2_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_3_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_3_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mulOut_M_imag_3_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "A_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_real"}]},
			{"Name" : "A_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_real1"}]},
			{"Name" : "A_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_real2"}]},
			{"Name" : "A_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_real3"}]},
			{"Name" : "A_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_imag"}]},
			{"Name" : "A_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_imag4"}]},
			{"Name" : "A_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_imag5"}]},
			{"Name" : "A_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "A_M_imag6"}]},
			{"Name" : "B_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_real_0"}]},
			{"Name" : "B_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_real_1"}]},
			{"Name" : "B_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_real_2"}]},
			{"Name" : "B_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_real_3"}]},
			{"Name" : "B_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_imag_0"}]},
			{"Name" : "B_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_imag_1"}]},
			{"Name" : "B_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_imag_2"}]},
			{"Name" : "B_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_DiagMatMul_fu_506", "Port" : "B_M_imag_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_real_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_real_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_real_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_real_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_imag_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_imag_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_imag_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_M_imag_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_real_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_real_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_real_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_real_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_imag_0_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_imag_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_imag_2_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_M_imag_3_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_control_s_axi_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506", "Parent" : "0", "Child" : ["19", "26", "33", "40", "47", "54", "61", "68", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90"],
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
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288", "Parent" : "18", "Child" : ["20", "21", "22", "23", "24", "25"],
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
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fsub_32ns_bkb_U1", "Parent" : "19"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fadd_32ns_cud_U2", "Parent" : "19"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U3", "Parent" : "19"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U4", "Parent" : "19"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U5", "Parent" : "19"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1288.matmul_fmul_32ns_dEe_U6", "Parent" : "19"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296", "Parent" : "18", "Child" : ["27", "28", "29", "30", "31", "32"],
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
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fsub_32ns_bkb_U1", "Parent" : "26"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fadd_32ns_cud_U2", "Parent" : "26"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U3", "Parent" : "26"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U4", "Parent" : "26"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U5", "Parent" : "26"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1296.matmul_fmul_32ns_dEe_U6", "Parent" : "26"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304", "Parent" : "18", "Child" : ["34", "35", "36", "37", "38", "39"],
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
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fsub_32ns_bkb_U1", "Parent" : "33"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fadd_32ns_cud_U2", "Parent" : "33"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U3", "Parent" : "33"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U4", "Parent" : "33"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U5", "Parent" : "33"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1304.matmul_fmul_32ns_dEe_U6", "Parent" : "33"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312", "Parent" : "18", "Child" : ["41", "42", "43", "44", "45", "46"],
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
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fsub_32ns_bkb_U1", "Parent" : "40"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fadd_32ns_cud_U2", "Parent" : "40"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U3", "Parent" : "40"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U4", "Parent" : "40"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U5", "Parent" : "40"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1312.matmul_fmul_32ns_dEe_U6", "Parent" : "40"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320", "Parent" : "18", "Child" : ["48", "49", "50", "51", "52", "53"],
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
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fsub_32ns_bkb_U1", "Parent" : "47"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fadd_32ns_cud_U2", "Parent" : "47"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U3", "Parent" : "47"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U4", "Parent" : "47"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U5", "Parent" : "47"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1320.matmul_fmul_32ns_dEe_U6", "Parent" : "47"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328", "Parent" : "18", "Child" : ["55", "56", "57", "58", "59", "60"],
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
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fsub_32ns_bkb_U1", "Parent" : "54"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fadd_32ns_cud_U2", "Parent" : "54"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U3", "Parent" : "54"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U4", "Parent" : "54"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U5", "Parent" : "54"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1328.matmul_fmul_32ns_dEe_U6", "Parent" : "54"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336", "Parent" : "18", "Child" : ["62", "63", "64", "65", "66", "67"],
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
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fsub_32ns_bkb_U1", "Parent" : "61"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fadd_32ns_cud_U2", "Parent" : "61"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U3", "Parent" : "61"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U4", "Parent" : "61"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U5", "Parent" : "61"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1336.matmul_fmul_32ns_dEe_U6", "Parent" : "61"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344", "Parent" : "18", "Child" : ["69", "70", "71", "72", "73", "74"],
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
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fsub_32ns_bkb_U1", "Parent" : "68"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fadd_32ns_cud_U2", "Parent" : "68"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U3", "Parent" : "68"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U4", "Parent" : "68"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U5", "Parent" : "68"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.grp_operator_mul_float_fu_1344.matmul_fmul_32ns_dEe_U6", "Parent" : "68"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U14", "Parent" : "18"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U15", "Parent" : "18"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U16", "Parent" : "18"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U17", "Parent" : "18"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U18", "Parent" : "18"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U19", "Parent" : "18"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U20", "Parent" : "18"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U21", "Parent" : "18"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U22", "Parent" : "18"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U23", "Parent" : "18"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U24", "Parent" : "18"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U25", "Parent" : "18"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U26", "Parent" : "18"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U27", "Parent" : "18"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U28", "Parent" : "18"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_506.matmul_fadd_32ns_cud_U29", "Parent" : "18"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_165_32eOg_U78", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_165_32eOg_U79", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_last_V_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_last_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	matmul {
		in_stream_V_data_V {Type I LastRead 3 FirstWrite -1}
		in_stream_V_keep_V {Type I LastRead 3 FirstWrite -1}
		in_stream_V_strb_V {Type I LastRead 3 FirstWrite -1}
		in_stream_V_last_V {Type I LastRead 3 FirstWrite -1}
		out_stream_V_data_V {Type O LastRead -1 FirstWrite 5}
		out_stream_V_keep_V {Type O LastRead -1 FirstWrite 5}
		out_stream_V_strb_V {Type O LastRead -1 FirstWrite 5}
		out_stream_V_last_V {Type O LastRead -1 FirstWrite 5}
		mulOut_M_real_0_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_0_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_0_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_0_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_1_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_1_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_1_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_1_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_2_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_2_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_2_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_2_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_3_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_3_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_3_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_3_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_0_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_0_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_0_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_0_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_1_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_1_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_1_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_1_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_2_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_2_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_2_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_2_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_3_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_3_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_3_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_3_3 {Type IO LastRead -1 FirstWrite -1}
		A_M_real_0 {Type IO LastRead -1 FirstWrite -1}
		A_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		A_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		A_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		A_M_imag_0 {Type IO LastRead -1 FirstWrite -1}
		A_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		A_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		A_M_imag_3 {Type IO LastRead -1 FirstWrite -1}
		B_M_real_0 {Type IO LastRead -1 FirstWrite -1}
		B_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		B_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		B_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		B_M_imag_0 {Type IO LastRead -1 FirstWrite -1}
		B_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		B_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		B_M_imag_3 {Type IO LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "703", "Max" : "703"}
	, {"Name" : "Interval", "Min" : "704", "Max" : "704"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_stream_V_data_V { axis {  { in_stream_TDATA in_data 0 64 } } }
	in_stream_V_keep_V { axis {  { in_stream_TKEEP in_data 0 8 } } }
	in_stream_V_strb_V { axis {  { in_stream_TSTRB in_data 0 8 } } }
	in_stream_V_last_V { axis {  { in_stream_TVALID in_vld 0 1 }  { in_stream_TREADY in_acc 1 1 }  { in_stream_TLAST in_data 0 1 } } }
	out_stream_V_data_V { axis {  { out_stream_TDATA out_data 1 64 } } }
	out_stream_V_keep_V { axis {  { out_stream_TKEEP out_data 1 8 } } }
	out_stream_V_strb_V { axis {  { out_stream_TSTRB out_data 1 8 } } }
	out_stream_V_last_V { axis {  { out_stream_TVALID out_vld 1 1 }  { out_stream_TREADY out_acc 0 1 }  { out_stream_TLAST out_data 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}

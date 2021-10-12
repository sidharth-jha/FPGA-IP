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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "99", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "424", "EstimateLatencyMax" : "424",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DiagMatMul_fu_625"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DopplerDelay_fu_709"}],
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
			{"Name" : "rxmat_delay_M_real_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_s"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_0"}]},
			{"Name" : "rxmat_delay_M_imag_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_s"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_0"}]},
			{"Name" : "rxmat_delay_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_1"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_1"}]},
			{"Name" : "rxmat_delay_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_1"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_1"}]},
			{"Name" : "rxmat_delay_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_2"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_2"}]},
			{"Name" : "rxmat_delay_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_2"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_2"}]},
			{"Name" : "rxmat_delay_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_3"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_3"}]},
			{"Name" : "rxmat_delay_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_3"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_3"}]},
			{"Name" : "rxmat_delay_M_real_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_4"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_4"}]},
			{"Name" : "rxmat_delay_M_imag_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_4"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_4"}]},
			{"Name" : "rxmat_delay_M_real_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_5"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_5"}]},
			{"Name" : "rxmat_delay_M_imag_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_5"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_5"}]},
			{"Name" : "rxmat_delay_M_real_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_6"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_6"}]},
			{"Name" : "rxmat_delay_M_imag_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_6"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_6"}]},
			{"Name" : "rxmat_delay_M_real_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_real_7"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_real_7"}]},
			{"Name" : "rxmat_delay_M_imag_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_delay_M_imag_7"},
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "A_M_imag_7"}]},
			{"Name" : "rxmat_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_real_2"}]},
			{"Name" : "rxmat_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_real_21"}]},
			{"Name" : "rxmat_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_real_22"}]},
			{"Name" : "rxmat_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_real_23"}]},
			{"Name" : "rxmat_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_imag_2"}]},
			{"Name" : "rxmat_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_imag_24"}]},
			{"Name" : "rxmat_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_imag_25"}]},
			{"Name" : "rxmat_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_DopplerDelay_fu_709", "Port" : "rxmat_M_imag_26"}]},
			{"Name" : "xmat_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_real_0"}]},
			{"Name" : "xmat_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_real_1"}]},
			{"Name" : "xmat_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_real_2"}]},
			{"Name" : "xmat_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_real_3"}]},
			{"Name" : "xmat_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_imag_0"}]},
			{"Name" : "xmat_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_imag_1"}]},
			{"Name" : "xmat_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_imag_2"}]},
			{"Name" : "xmat_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_DiagMatMul_fu_625", "Port" : "B_M_imag_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_s_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_s_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_3_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_4_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_5_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_5_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_6_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_6_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_real_7_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_delay_M_imag_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_0_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_1_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_2_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_3_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_0_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_1_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_2_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_3_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_0_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_1_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_2_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_3_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_control_s_axi_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625", "Parent" : "0", "Child" : ["35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98"],
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
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U76", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U77", "Parent" : "34"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U78", "Parent" : "34"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U79", "Parent" : "34"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U80", "Parent" : "34"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U81", "Parent" : "34"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U82", "Parent" : "34"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U83", "Parent" : "34"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U84", "Parent" : "34"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U85", "Parent" : "34"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U86", "Parent" : "34"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U87", "Parent" : "34"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U88", "Parent" : "34"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U89", "Parent" : "34"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U90", "Parent" : "34"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U91", "Parent" : "34"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U92", "Parent" : "34"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U93", "Parent" : "34"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U94", "Parent" : "34"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U95", "Parent" : "34"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U96", "Parent" : "34"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U97", "Parent" : "34"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U98", "Parent" : "34"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U99", "Parent" : "34"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U100", "Parent" : "34"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U101", "Parent" : "34"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U102", "Parent" : "34"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U103", "Parent" : "34"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fsub_32ns_bkb_U104", "Parent" : "34"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U105", "Parent" : "34"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U106", "Parent" : "34"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fadd_32ns_cud_U107", "Parent" : "34"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U108", "Parent" : "34"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U109", "Parent" : "34"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U110", "Parent" : "34"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U111", "Parent" : "34"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U112", "Parent" : "34"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U113", "Parent" : "34"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U114", "Parent" : "34"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U115", "Parent" : "34"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U116", "Parent" : "34"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U117", "Parent" : "34"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U118", "Parent" : "34"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U119", "Parent" : "34"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U120", "Parent" : "34"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U121", "Parent" : "34"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U122", "Parent" : "34"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U123", "Parent" : "34"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U124", "Parent" : "34"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U125", "Parent" : "34"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U126", "Parent" : "34"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U127", "Parent" : "34"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U128", "Parent" : "34"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U129", "Parent" : "34"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U130", "Parent" : "34"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U131", "Parent" : "34"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U132", "Parent" : "34"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U133", "Parent" : "34"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U134", "Parent" : "34"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U135", "Parent" : "34"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U136", "Parent" : "34"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U137", "Parent" : "34"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U138", "Parent" : "34"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_625.matmul_fmul_32ns_dEe_U139", "Parent" : "34"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709", "Parent" : "0", "Child" : ["100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147"],
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
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U1", "Parent" : "99"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U2", "Parent" : "99"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U3", "Parent" : "99"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U4", "Parent" : "99"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U5", "Parent" : "99"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U6", "Parent" : "99"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U7", "Parent" : "99"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U8", "Parent" : "99"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U9", "Parent" : "99"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U10", "Parent" : "99"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U11", "Parent" : "99"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U12", "Parent" : "99"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U13", "Parent" : "99"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U14", "Parent" : "99"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fsub_32ns_bkb_U15", "Parent" : "99"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fadd_32ns_cud_U16", "Parent" : "99"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U17", "Parent" : "99"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U18", "Parent" : "99"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U19", "Parent" : "99"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U20", "Parent" : "99"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U21", "Parent" : "99"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U22", "Parent" : "99"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U23", "Parent" : "99"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U24", "Parent" : "99"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U25", "Parent" : "99"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U26", "Parent" : "99"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U27", "Parent" : "99"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U28", "Parent" : "99"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U29", "Parent" : "99"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U30", "Parent" : "99"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U31", "Parent" : "99"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U32", "Parent" : "99"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U33", "Parent" : "99"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U34", "Parent" : "99"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U35", "Parent" : "99"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U36", "Parent" : "99"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U37", "Parent" : "99"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U38", "Parent" : "99"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U39", "Parent" : "99"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U40", "Parent" : "99"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U41", "Parent" : "99"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U42", "Parent" : "99"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U43", "Parent" : "99"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U44", "Parent" : "99"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U45", "Parent" : "99"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U46", "Parent" : "99"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U47", "Parent" : "99"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DopplerDelay_fu_709.matmul_fmul_32ns_dEe_U48", "Parent" : "99"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_165_32KfY_U196", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_165_32KfY_U197", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_last_V_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_last_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	matmul {
		in_stream_V_data_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_keep_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_strb_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_last_V {Type I LastRead 4 FirstWrite -1}
		out_stream_V_data_V {Type O LastRead -1 FirstWrite 8}
		out_stream_V_keep_V {Type O LastRead -1 FirstWrite 8}
		out_stream_V_strb_V {Type O LastRead -1 FirstWrite 8}
		out_stream_V_last_V {Type O LastRead -1 FirstWrite 8}
		rxmat_delay_M_real_s {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_s {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_3 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_4 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_4 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_5 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_5 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_6 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_6 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_real_7 {Type IO LastRead -1 FirstWrite -1}
		rxmat_delay_M_imag_7 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_real_0 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_imag_0 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		rxmat_M_imag_3 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_real_0 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_imag_0 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		xmat_M_imag_3 {Type IO LastRead -1 FirstWrite -1}}
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
		C_M_imag_3_3_read {Type I LastRead 0 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "424", "Max" : "424"}
	, {"Name" : "Interval", "Min" : "425", "Max" : "425"}
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

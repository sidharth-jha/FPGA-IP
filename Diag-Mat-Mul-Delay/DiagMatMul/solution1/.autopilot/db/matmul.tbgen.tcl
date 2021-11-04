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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116"],
		"CDFG" : "matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "36296", "EstimateLatencyMax" : "36296",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DiagMatMul_fu_589"}],
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
			{"Name" : "rxmat_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_real"}]},
			{"Name" : "rxmat_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_real1"}]},
			{"Name" : "rxmat_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_real2"}]},
			{"Name" : "rxmat_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_real3"}]},
			{"Name" : "rxmat_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_imag"}]},
			{"Name" : "rxmat_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_imag4"}]},
			{"Name" : "rxmat_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_imag5"}]},
			{"Name" : "rxmat_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "A_M_imag6"}]},
			{"Name" : "xmat_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_real_0"}]},
			{"Name" : "xmat_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_real_1"}]},
			{"Name" : "xmat_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_real_2"}]},
			{"Name" : "xmat_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_real_3"}]},
			{"Name" : "xmat_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_imag_0"}]},
			{"Name" : "xmat_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_imag_1"}]},
			{"Name" : "xmat_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_imag_2"}]},
			{"Name" : "xmat_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "B_M_imag_3"}]},
			{"Name" : "mulOut_M_real_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_real_0"}]},
			{"Name" : "mulOut_M_real_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_real_1"}]},
			{"Name" : "mulOut_M_real_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_real_2"}]},
			{"Name" : "mulOut_M_real_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_real_3"}]},
			{"Name" : "mulOut_M_imag_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_imag_0"}]},
			{"Name" : "mulOut_M_imag_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_imag_1"}]},
			{"Name" : "mulOut_M_imag_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_imag_2"}]},
			{"Name" : "mulOut_M_imag_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_DiagMatMul_fu_589", "Port" : "C_M_imag_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_real_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rxmat_M_imag_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_real_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_0_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_2_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.xmat_M_imag_3_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_real_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_real_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_real_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_real_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_imag_0_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_imag_1_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_imag_2_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mulOut_M_imag_3_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_control_s_axi_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589", "Parent" : "0", "Child" : ["27", "34", "41", "48", "55", "62", "69", "76", "83", "86", "89", "92", "95", "98", "101", "104"],
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
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462", "Parent" : "26", "Child" : ["28", "29", "30", "31", "32", "33"],
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
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fsub_32ns_bkb_U1", "Parent" : "27"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fadd_32ns_cud_U2", "Parent" : "27"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U3", "Parent" : "27"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U4", "Parent" : "27"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U5", "Parent" : "27"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2462.matmul_fmul_32ns_dEe_U6", "Parent" : "27"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470", "Parent" : "26", "Child" : ["35", "36", "37", "38", "39", "40"],
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
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fsub_32ns_bkb_U1", "Parent" : "34"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fadd_32ns_cud_U2", "Parent" : "34"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U3", "Parent" : "34"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U4", "Parent" : "34"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U5", "Parent" : "34"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2470.matmul_fmul_32ns_dEe_U6", "Parent" : "34"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478", "Parent" : "26", "Child" : ["42", "43", "44", "45", "46", "47"],
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
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fsub_32ns_bkb_U1", "Parent" : "41"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fadd_32ns_cud_U2", "Parent" : "41"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U3", "Parent" : "41"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U4", "Parent" : "41"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U5", "Parent" : "41"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2478.matmul_fmul_32ns_dEe_U6", "Parent" : "41"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486", "Parent" : "26", "Child" : ["49", "50", "51", "52", "53", "54"],
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
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fsub_32ns_bkb_U1", "Parent" : "48"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fadd_32ns_cud_U2", "Parent" : "48"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U3", "Parent" : "48"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U4", "Parent" : "48"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U5", "Parent" : "48"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2486.matmul_fmul_32ns_dEe_U6", "Parent" : "48"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494", "Parent" : "26", "Child" : ["56", "57", "58", "59", "60", "61"],
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
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fsub_32ns_bkb_U1", "Parent" : "55"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fadd_32ns_cud_U2", "Parent" : "55"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U3", "Parent" : "55"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U4", "Parent" : "55"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U5", "Parent" : "55"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2494.matmul_fmul_32ns_dEe_U6", "Parent" : "55"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502", "Parent" : "26", "Child" : ["63", "64", "65", "66", "67", "68"],
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
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fsub_32ns_bkb_U1", "Parent" : "62"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fadd_32ns_cud_U2", "Parent" : "62"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U3", "Parent" : "62"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U4", "Parent" : "62"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U5", "Parent" : "62"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2502.matmul_fmul_32ns_dEe_U6", "Parent" : "62"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510", "Parent" : "26", "Child" : ["70", "71", "72", "73", "74", "75"],
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
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fsub_32ns_bkb_U1", "Parent" : "69"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fadd_32ns_cud_U2", "Parent" : "69"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U3", "Parent" : "69"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U4", "Parent" : "69"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U5", "Parent" : "69"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2510.matmul_fmul_32ns_dEe_U6", "Parent" : "69"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518", "Parent" : "26", "Child" : ["77", "78", "79", "80", "81", "82"],
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
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fsub_32ns_bkb_U1", "Parent" : "76"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fadd_32ns_cud_U2", "Parent" : "76"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U3", "Parent" : "76"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U4", "Parent" : "76"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U5", "Parent" : "76"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_mul_float_fu_2518.matmul_fmul_32ns_dEe_U6", "Parent" : "76"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2526", "Parent" : "26", "Child" : ["84", "85"],
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
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2526.matmul_fadd_32ns_cud_U14", "Parent" : "83"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2526.matmul_fadd_32ns_cud_U15", "Parent" : "83"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2536", "Parent" : "26", "Child" : ["87", "88"],
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
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2536.matmul_fadd_32ns_cud_U14", "Parent" : "86"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2536.matmul_fadd_32ns_cud_U15", "Parent" : "86"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2544", "Parent" : "26", "Child" : ["90", "91"],
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
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2544.matmul_fadd_32ns_cud_U14", "Parent" : "89"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2544.matmul_fadd_32ns_cud_U15", "Parent" : "89"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2552", "Parent" : "26", "Child" : ["93", "94"],
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
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2552.matmul_fadd_32ns_cud_U14", "Parent" : "92"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2552.matmul_fadd_32ns_cud_U15", "Parent" : "92"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2560", "Parent" : "26", "Child" : ["96", "97"],
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
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2560.matmul_fadd_32ns_cud_U14", "Parent" : "95"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2560.matmul_fadd_32ns_cud_U15", "Parent" : "95"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2568", "Parent" : "26", "Child" : ["99", "100"],
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
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2568.matmul_fadd_32ns_cud_U14", "Parent" : "98"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2568.matmul_fadd_32ns_cud_U15", "Parent" : "98"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2576", "Parent" : "26", "Child" : ["102", "103"],
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
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2576.matmul_fadd_32ns_cud_U14", "Parent" : "101"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2576.matmul_fadd_32ns_cud_U15", "Parent" : "101"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2584", "Parent" : "26", "Child" : ["105", "106"],
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
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2584.matmul_fadd_32ns_cud_U14", "Parent" : "104"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DiagMatMul_fu_589.grp_operator_add_assign_float_fu_2584.matmul_fadd_32ns_cud_U15", "Parent" : "104"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_432_32CeG_U44", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_mux_432_32CeG_U45", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_stream_V_last_V_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_data_V_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_keep_V_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_strb_V_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_stream_V_last_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	matmul {
		in_stream_V_data_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_keep_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_strb_V {Type I LastRead 4 FirstWrite -1}
		in_stream_V_last_V {Type I LastRead 4 FirstWrite -1}
		out_stream_V_data_V {Type O LastRead -1 FirstWrite 6}
		out_stream_V_keep_V {Type O LastRead -1 FirstWrite 6}
		out_stream_V_strb_V {Type O LastRead -1 FirstWrite 6}
		out_stream_V_last_V {Type O LastRead -1 FirstWrite 6}
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
		xmat_M_imag_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_real_3 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_0 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_1 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_2 {Type IO LastRead -1 FirstWrite -1}
		mulOut_M_imag_3 {Type IO LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "36296", "Max" : "36296"}
	, {"Name" : "Interval", "Min" : "36297", "Max" : "36297"}
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

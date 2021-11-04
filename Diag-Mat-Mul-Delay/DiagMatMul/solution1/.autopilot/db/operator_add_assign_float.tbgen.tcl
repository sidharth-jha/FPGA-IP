set moduleName operator_add_assign_float
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {operator+=<float>}
set C_modelType { int 64 }
set C_modelArgList {
	{ complex_float_M_real_read float 32 regular  }
	{ complex_float_M_imag_read float 32 regular  }
	{ p_z_M_real_read float 32 regular  }
	{ p_z_M_imag_read float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "complex_float_M_real_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "complex_float_M_imag_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_z_M_real_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_z_M_imag_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ complex_float_M_real_read sc_in sc_lv 32 signal 0 } 
	{ complex_float_M_imag_read sc_in sc_lv 32 signal 1 } 
	{ p_z_M_real_read sc_in sc_lv 32 signal 2 } 
	{ p_z_M_imag_read sc_in sc_lv 32 signal 3 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "complex_float_M_real_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "complex_float_M_real_read", "role": "default" }} , 
 	{ "name": "complex_float_M_imag_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "complex_float_M_imag_read", "role": "default" }} , 
 	{ "name": "p_z_M_real_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_z_M_real_read", "role": "default" }} , 
 	{ "name": "p_z_M_imag_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_z_M_imag_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U14", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matmul_fadd_32ns_cud_U15", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	operator_add_assign_float {
		complex_float_M_real_read {Type I LastRead 0 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_real_read {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	complex_float_M_real_read { ap_none {  { complex_float_M_real_read in_data 0 32 } } }
	complex_float_M_imag_read { ap_none {  { complex_float_M_imag_read in_data 0 32 } } }
	p_z_M_real_read { ap_none {  { p_z_M_real_read in_data 0 32 } } }
	p_z_M_imag_read { ap_none {  { p_z_M_imag_read in_data 0 32 } } }
}

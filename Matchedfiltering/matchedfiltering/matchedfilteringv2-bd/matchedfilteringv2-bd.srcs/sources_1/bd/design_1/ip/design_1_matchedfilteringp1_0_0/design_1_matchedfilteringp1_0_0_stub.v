// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.1 (lin64) Build 2902540 Wed May 27 19:54:35 MDT 2020
// Date        : Thu Jan 13 13:04:22 2022
// Host        : iiitd-B560M-DS3H-AC running 64-bit Ubuntu 18.04.6 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/iiitd/Documents/Sidharth_BTP/matchedfiltering/v2/matchedfiltering/matchedfilteringv2-bd/matchedfilteringv2-bd.srcs/sources_1/bd/design_1/ip/design_1_matchedfilteringp1_0_0/design_1_matchedfilteringp1_0_0_stub.v
// Design      : design_1_matchedfilteringp1_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xczu28dr-ffvg1517-2-e
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "matchedfilteringp1,Vivado 2020.1" *)
module design_1_matchedfilteringp1_0_0(s_axi_control_AWADDR, 
  s_axi_control_AWVALID, s_axi_control_AWREADY, s_axi_control_WDATA, s_axi_control_WSTRB, 
  s_axi_control_WVALID, s_axi_control_WREADY, s_axi_control_BRESP, s_axi_control_BVALID, 
  s_axi_control_BREADY, s_axi_control_ARADDR, s_axi_control_ARVALID, 
  s_axi_control_ARREADY, s_axi_control_RDATA, s_axi_control_RRESP, s_axi_control_RVALID, 
  s_axi_control_RREADY, ap_clk, ap_rst_n, interrupt, rxmat_stream_TVALID, 
  rxmat_stream_TREADY, rxmat_stream_TDATA, rxmat_stream_TLAST, rxmat_stream_TKEEP, 
  rxmat_stream_TSTRB, xmat_stream_TVALID, xmat_stream_TREADY, xmat_stream_TDATA, 
  xmat_stream_TLAST, xmat_stream_TKEEP, xmat_stream_TSTRB, out_stream_TVALID, 
  out_stream_TREADY, out_stream_TDATA, out_stream_TLAST, out_stream_TKEEP, 
  out_stream_TSTRB)
/* synthesis syn_black_box black_box_pad_pin="s_axi_control_AWADDR[4:0],s_axi_control_AWVALID,s_axi_control_AWREADY,s_axi_control_WDATA[31:0],s_axi_control_WSTRB[3:0],s_axi_control_WVALID,s_axi_control_WREADY,s_axi_control_BRESP[1:0],s_axi_control_BVALID,s_axi_control_BREADY,s_axi_control_ARADDR[4:0],s_axi_control_ARVALID,s_axi_control_ARREADY,s_axi_control_RDATA[31:0],s_axi_control_RRESP[1:0],s_axi_control_RVALID,s_axi_control_RREADY,ap_clk,ap_rst_n,interrupt,rxmat_stream_TVALID,rxmat_stream_TREADY,rxmat_stream_TDATA[31:0],rxmat_stream_TLAST[0:0],rxmat_stream_TKEEP[3:0],rxmat_stream_TSTRB[3:0],xmat_stream_TVALID,xmat_stream_TREADY,xmat_stream_TDATA[31:0],xmat_stream_TLAST[0:0],xmat_stream_TKEEP[3:0],xmat_stream_TSTRB[3:0],out_stream_TVALID,out_stream_TREADY,out_stream_TDATA[63:0],out_stream_TLAST[0:0],out_stream_TKEEP[7:0],out_stream_TSTRB[7:0]" */;
  input [4:0]s_axi_control_AWADDR;
  input s_axi_control_AWVALID;
  output s_axi_control_AWREADY;
  input [31:0]s_axi_control_WDATA;
  input [3:0]s_axi_control_WSTRB;
  input s_axi_control_WVALID;
  output s_axi_control_WREADY;
  output [1:0]s_axi_control_BRESP;
  output s_axi_control_BVALID;
  input s_axi_control_BREADY;
  input [4:0]s_axi_control_ARADDR;
  input s_axi_control_ARVALID;
  output s_axi_control_ARREADY;
  output [31:0]s_axi_control_RDATA;
  output [1:0]s_axi_control_RRESP;
  output s_axi_control_RVALID;
  input s_axi_control_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  input rxmat_stream_TVALID;
  output rxmat_stream_TREADY;
  input [31:0]rxmat_stream_TDATA;
  input [0:0]rxmat_stream_TLAST;
  input [3:0]rxmat_stream_TKEEP;
  input [3:0]rxmat_stream_TSTRB;
  input xmat_stream_TVALID;
  output xmat_stream_TREADY;
  input [31:0]xmat_stream_TDATA;
  input [0:0]xmat_stream_TLAST;
  input [3:0]xmat_stream_TKEEP;
  input [3:0]xmat_stream_TSTRB;
  output out_stream_TVALID;
  input out_stream_TREADY;
  output [63:0]out_stream_TDATA;
  output [0:0]out_stream_TLAST;
  output [7:0]out_stream_TKEEP;
  output [7:0]out_stream_TSTRB;
endmodule

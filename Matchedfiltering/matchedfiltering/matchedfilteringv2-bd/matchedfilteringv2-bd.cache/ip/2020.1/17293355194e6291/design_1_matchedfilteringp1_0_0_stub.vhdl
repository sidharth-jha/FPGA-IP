-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.1 (lin64) Build 2902540 Wed May 27 19:54:35 MDT 2020
-- Date        : Thu Jan 13 13:04:18 2022
-- Host        : iiitd-B560M-DS3H-AC running 64-bit Ubuntu 18.04.6 LTS
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_matchedfilteringp1_0_0_stub.vhdl
-- Design      : design_1_matchedfilteringp1_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xczu28dr-ffvg1517-2-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_control_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_control_AWVALID : in STD_LOGIC;
    s_axi_control_AWREADY : out STD_LOGIC;
    s_axi_control_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_control_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_control_WVALID : in STD_LOGIC;
    s_axi_control_WREADY : out STD_LOGIC;
    s_axi_control_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_control_BVALID : out STD_LOGIC;
    s_axi_control_BREADY : in STD_LOGIC;
    s_axi_control_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_control_ARVALID : in STD_LOGIC;
    s_axi_control_ARREADY : out STD_LOGIC;
    s_axi_control_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_control_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_control_RVALID : out STD_LOGIC;
    s_axi_control_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    rxmat_stream_TVALID : in STD_LOGIC;
    rxmat_stream_TREADY : out STD_LOGIC;
    rxmat_stream_TDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    rxmat_stream_TLAST : in STD_LOGIC_VECTOR ( 0 to 0 );
    rxmat_stream_TKEEP : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rxmat_stream_TSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    xmat_stream_TVALID : in STD_LOGIC;
    xmat_stream_TREADY : out STD_LOGIC;
    xmat_stream_TDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    xmat_stream_TLAST : in STD_LOGIC_VECTOR ( 0 to 0 );
    xmat_stream_TKEEP : in STD_LOGIC_VECTOR ( 3 downto 0 );
    xmat_stream_TSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    out_stream_TVALID : out STD_LOGIC;
    out_stream_TREADY : in STD_LOGIC;
    out_stream_TDATA : out STD_LOGIC_VECTOR ( 63 downto 0 );
    out_stream_TLAST : out STD_LOGIC_VECTOR ( 0 to 0 );
    out_stream_TKEEP : out STD_LOGIC_VECTOR ( 7 downto 0 );
    out_stream_TSTRB : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_control_AWADDR[4:0],s_axi_control_AWVALID,s_axi_control_AWREADY,s_axi_control_WDATA[31:0],s_axi_control_WSTRB[3:0],s_axi_control_WVALID,s_axi_control_WREADY,s_axi_control_BRESP[1:0],s_axi_control_BVALID,s_axi_control_BREADY,s_axi_control_ARADDR[4:0],s_axi_control_ARVALID,s_axi_control_ARREADY,s_axi_control_RDATA[31:0],s_axi_control_RRESP[1:0],s_axi_control_RVALID,s_axi_control_RREADY,ap_clk,ap_rst_n,interrupt,rxmat_stream_TVALID,rxmat_stream_TREADY,rxmat_stream_TDATA[31:0],rxmat_stream_TLAST[0:0],rxmat_stream_TKEEP[3:0],rxmat_stream_TSTRB[3:0],xmat_stream_TVALID,xmat_stream_TREADY,xmat_stream_TDATA[31:0],xmat_stream_TLAST[0:0],xmat_stream_TKEEP[3:0],xmat_stream_TSTRB[3:0],out_stream_TVALID,out_stream_TREADY,out_stream_TDATA[63:0],out_stream_TLAST[0:0],out_stream_TKEEP[7:0],out_stream_TSTRB[7:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "matchedfilteringp1,Vivado 2020.1";
begin
end;

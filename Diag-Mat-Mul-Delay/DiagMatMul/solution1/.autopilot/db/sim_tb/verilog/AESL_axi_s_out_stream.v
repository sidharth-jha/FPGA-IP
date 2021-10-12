// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

`define TV_OUT_out_stream_TDATA "./impl_rtl.matmul.autotvout_out_stream_V_data_V.dat"
`define EGRESS_STATUS_out_stream_TDATA "./stream_egress_status_out_stream_V_data_V.dat"
`define TV_OUT_out_stream_TKEEP "./impl_rtl.matmul.autotvout_out_stream_V_keep_V.dat"
`define EGRESS_STATUS_out_stream_TKEEP "./stream_egress_status_out_stream_V_keep_V.dat"
`define TV_OUT_out_stream_TSTRB "./impl_rtl.matmul.autotvout_out_stream_V_strb_V.dat"
`define EGRESS_STATUS_out_stream_TSTRB "./stream_egress_status_out_stream_V_strb_V.dat"
`define TV_OUT_out_stream_TLAST "./impl_rtl.matmul.autotvout_out_stream_V_last_V.dat"
`define EGRESS_STATUS_out_stream_TLAST "./stream_egress_status_out_stream_V_last_V.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_out_stream (
    input clk,
    input reset,
    input [64 - 1:0] TRAN_out_stream_TDATA,
    input [8 - 1:0] TRAN_out_stream_TKEEP,
    input [8 - 1:0] TRAN_out_stream_TSTRB,
    input TRAN_out_stream_TLAST,
    input TRAN_out_stream_TVALID,
    output TRAN_out_stream_TREADY,
    input ready,
    input done,
    output [31:0] transaction);

    wire TRAN_out_stream_TVALID_temp;
    wire out_stream_TDATA_full;
    wire out_stream_TDATA_empty;
    reg out_stream_TDATA_write_en;
    reg [64 - 1:0] out_stream_TDATA_write_data;
    reg out_stream_TDATA_read_en;
    wire [64 - 1:0] out_stream_TDATA_read_data;
    
    fifo #(16, 64) fifo_out_stream_TDATA (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(out_stream_TDATA_write_en),
        .write_data(out_stream_TDATA_write_data),
        .read_clock(clk),
        .read_en(out_stream_TDATA_read_en),
        .read_data(out_stream_TDATA_read_data),
        .full(out_stream_TDATA_full),
        .empty(out_stream_TDATA_empty));
    
    always @ (*) begin
        out_stream_TDATA_write_en <= TRAN_out_stream_TVALID;
        out_stream_TDATA_write_data <= TRAN_out_stream_TDATA;
        out_stream_TDATA_read_en <= 0;
    end
    wire out_stream_TKEEP_full;
    wire out_stream_TKEEP_empty;
    reg out_stream_TKEEP_write_en;
    reg [8 - 1:0] out_stream_TKEEP_write_data;
    reg out_stream_TKEEP_read_en;
    wire [8 - 1:0] out_stream_TKEEP_read_data;
    
    fifo #(16, 8) fifo_out_stream_TKEEP (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(out_stream_TKEEP_write_en),
        .write_data(out_stream_TKEEP_write_data),
        .read_clock(clk),
        .read_en(out_stream_TKEEP_read_en),
        .read_data(out_stream_TKEEP_read_data),
        .full(out_stream_TKEEP_full),
        .empty(out_stream_TKEEP_empty));
    
    always @ (*) begin
        out_stream_TKEEP_write_en <= TRAN_out_stream_TVALID;
        out_stream_TKEEP_write_data <= TRAN_out_stream_TKEEP;
        out_stream_TKEEP_read_en <= 0;
    end
    wire out_stream_TSTRB_full;
    wire out_stream_TSTRB_empty;
    reg out_stream_TSTRB_write_en;
    reg [8 - 1:0] out_stream_TSTRB_write_data;
    reg out_stream_TSTRB_read_en;
    wire [8 - 1:0] out_stream_TSTRB_read_data;
    
    fifo #(16, 8) fifo_out_stream_TSTRB (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(out_stream_TSTRB_write_en),
        .write_data(out_stream_TSTRB_write_data),
        .read_clock(clk),
        .read_en(out_stream_TSTRB_read_en),
        .read_data(out_stream_TSTRB_read_data),
        .full(out_stream_TSTRB_full),
        .empty(out_stream_TSTRB_empty));
    
    always @ (*) begin
        out_stream_TSTRB_write_en <= TRAN_out_stream_TVALID;
        out_stream_TSTRB_write_data <= TRAN_out_stream_TSTRB;
        out_stream_TSTRB_read_en <= 0;
    end
    wire out_stream_TLAST_full;
    wire out_stream_TLAST_empty;
    reg out_stream_TLAST_write_en;
    reg [1 - 1:0] out_stream_TLAST_write_data;
    reg out_stream_TLAST_read_en;
    wire [1 - 1:0] out_stream_TLAST_read_data;
    
    fifo #(16, 1) fifo_out_stream_TLAST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(out_stream_TLAST_write_en),
        .write_data(out_stream_TLAST_write_data),
        .read_clock(clk),
        .read_en(out_stream_TLAST_read_en),
        .read_data(out_stream_TLAST_read_data),
        .full(out_stream_TLAST_full),
        .empty(out_stream_TLAST_empty));
    
    always @ (*) begin
        out_stream_TLAST_write_en <= TRAN_out_stream_TVALID;
        out_stream_TLAST_write_data <= TRAN_out_stream_TLAST;
        out_stream_TLAST_read_en <= 0;
    end
    assign TRAN_out_stream_TVALID = TRAN_out_stream_TVALID_temp;

    
    assign TRAN_out_stream_TREADY = ~(out_stream_TDATA_full || out_stream_TKEEP_full || out_stream_TSTRB_full || out_stream_TLAST_full);
    
    function is_blank_char(input [7:0] in_char);
        if (in_char == " " || in_char == "\011" || in_char == "\012" || in_char == "\015") begin
            is_blank_char = 1;
        end else begin
            is_blank_char = 0;
        end
    endfunction
    
    function [191:0] read_token(input integer fp);
        integer ret;
        begin
            read_token = "";
                    ret = 0;
                    ret = $fscanf(fp,"%s",read_token);
        end
    endfunction
    
    function [191:0] rm_0x(input [191:0] token);
        reg [191:0] token_tmp;
        integer i;
        begin
            token_tmp = "";
            for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
                token_tmp = (token[7:0] << (8 * i)) | token_tmp;
                i = i + 1;
            end
            rm_0x = token_tmp;
        end
    endfunction
    
    reg done_1;
    
    always @ (posedge clk or reset) begin
        if (~reset) begin
            done_1 <= 0;
        end else begin
            done_1 <= done;
        end
    end
    
    reg [31:0] transaction_save_out_stream_TDATA;
    
    assign transaction = transaction_save_out_stream_TDATA;
    
    initial begin : AXI_stream_receiver_out_stream_TDATA
        integer fp;
        reg [64 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_out_stream_TDATA = 0;
        fifo_out_stream_TDATA.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_out_stream_TDATA, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_out_stream_TDATA);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_out_stream_TDATA);
                while (~fifo_out_stream_TDATA.empty) begin
                    fifo_out_stream_TDATA.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_out_stream_TDATA = transaction_save_out_stream_TDATA + 1;
                fifo_out_stream_TDATA.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_out_stream_TKEEP;
    
    initial begin : AXI_stream_receiver_out_stream_TKEEP
        integer fp;
        reg [8 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_out_stream_TKEEP = 0;
        fifo_out_stream_TKEEP.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_out_stream_TKEEP, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_out_stream_TKEEP);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_out_stream_TKEEP);
                while (~fifo_out_stream_TKEEP.empty) begin
                    fifo_out_stream_TKEEP.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_out_stream_TKEEP = transaction_save_out_stream_TKEEP + 1;
                fifo_out_stream_TKEEP.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_out_stream_TSTRB;
    
    initial begin : AXI_stream_receiver_out_stream_TSTRB
        integer fp;
        reg [8 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_out_stream_TSTRB = 0;
        fifo_out_stream_TSTRB.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_out_stream_TSTRB, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_out_stream_TSTRB);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_out_stream_TSTRB);
                while (~fifo_out_stream_TSTRB.empty) begin
                    fifo_out_stream_TSTRB.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_out_stream_TSTRB = transaction_save_out_stream_TSTRB + 1;
                fifo_out_stream_TSTRB.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_out_stream_TLAST;
    
    initial begin : AXI_stream_receiver_out_stream_TLAST
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_out_stream_TLAST = 0;
        fifo_out_stream_TLAST.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_out_stream_TLAST, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_out_stream_TLAST);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_out_stream_TLAST);
                while (~fifo_out_stream_TLAST.empty) begin
                    fifo_out_stream_TLAST.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_out_stream_TLAST = transaction_save_out_stream_TLAST + 1;
                fifo_out_stream_TLAST.clear();
                $fclose(fp);
            end
        end
    end

endmodule
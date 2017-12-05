// out_fifo.v

// Generated using ACDS version 17.1 590

`timescale 1 ps / 1 ps
module out_fifo (
		input  wire [7:0]  data,  //  fifo_input.datain
		input  wire        wrreq, //            .wrreq
		input  wire        rdreq, //            .rdreq
		input  wire        clock, //            .clk
		input  wire        sclr,  //            .sclr
		output wire [7:0]  q,     // fifo_output.dataout
		output wire [16:0] usedw, //            .usedw
		output wire        full,  //            .full
		output wire        empty  //            .empty
	);

	out_fifo_fifo_171_onw3uty fifo_0 (
		.data  (data),  //  fifo_input.datain
		.wrreq (wrreq), //            .wrreq
		.rdreq (rdreq), //            .rdreq
		.clock (clock), //            .clk
		.sclr  (sclr),  //            .sclr
		.q     (q),     // fifo_output.dataout
		.usedw (usedw), //            .usedw
		.full  (full),  //            .full
		.empty (empty)  //            .empty
	);

endmodule

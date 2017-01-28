module varint_encoder_top (
	input wire [31:0]	data,
	input wire			valid,
	output wire			ready
);

	in_fifo u0 (
		.data  (<connected-to-data>),  //  fifo_input.datain
		.wrreq (<connected-to-wrreq>), //            .wrreq
		.rdreq (<connected-to-rdreq>), //            .rdreq
		.clock (<connected-to-clock>), //            .clk
		.sclr  (<connected-to-sclr>),  //            .sclr
		.q     (<connected-to-q>),     // fifo_output.dataout
		.usedw (<connected-to-usedw>), //            .usedw
		.full  (<connected-to-full>),  //            .full
		.empty (<connected-to-empty>)  //            .empty
	);

endmodule

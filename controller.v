// controller.v

module controller (
		// clock, reset inputs
		input  wire        clk,
		input  wire        reset,
		
		// AMBA AXI4 slave interface signals
		input  wire [3:0]  axs_s0_awid,    // axs_s0.awid
		input  wire [31:0] axs_s0_awaddr,  //       .awaddr
		input  wire [7:0]  axs_s0_awlen,   //       .awlen
		input  wire [2:0]  axs_s0_awsize,  //       .awsize
		input  wire [1:0]  axs_s0_awburst, //       .awburst
		input  wire        axs_s0_awvalid, //       .awvalid
		output wire        axs_s0_awready, //       .awready

		input  wire [3:0]  axs_s0_wstrb,   //       .wstrb
		input  wire        axs_s0_wvalid,  //       .wvalid
		output wire        axs_s0_wready,  //       .wready
		
		input  wire        axs_s0_bready,  //       .bready
		output wire [3:0]  axs_s0_bid,     //       .bid
		output wire        axs_s0_bvalid,  //       .bvalid

		input  wire [3:0]  axs_s0_arid,    //       .arid
		input  wire [31:0] axs_s0_araddr,  //       .araddr
		input  wire [7:0]  axs_s0_arlen,   //       .arlen
		input  wire [2:0]  axs_s0_arsize,  //       .arsize
		input  wire [1:0]  axs_s0_arburst, //       .arburst
		input  wire        axs_s0_arvalid, //       .arvalid
		output wire        axs_s0_arready, //       .arready

		input  wire        axs_s0_rready,  //       .rready
		output wire [3:0]  axs_s0_rid,     //       .rid
		output wire        axs_s0_rlast,   //       .rlast
		output wire        axs_s0_rvalid,  //       .rvalid

		// Datapath control signals
		input  wire        in_empty,
		input  wire        in_full,
		output wire        in_pop,
		output wire        in_push,
		
		output wire        varint_in_sel,
		output wire        varint_clr,
		output wire        varint_ld,
		output wire        varint_out_sel,
		input  wire        gt_eq_128,
		
		output wire        raw_data_clr,
		output wire        raw_data_ld,
		output wire [1:0]  raw_data_sel,
		
		output wire        byte_sel,
		
		input  wire        out_empty,
		input  wire        out_full,
		output wire        out_pop,
		output wire        out_push
	);
	
	// TODO: implement controller FSM

endmodule
	
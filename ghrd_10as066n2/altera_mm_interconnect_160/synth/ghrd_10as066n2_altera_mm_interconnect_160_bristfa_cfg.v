config ghrd_10as066n2_altera_mm_interconnect_160_bristfa_cfg;
		design ghrd_10as066n2_altera_mm_interconnect_160_bristfa;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.f2sdram_only_master1_master_translator use ghrd_10as066n2_altera_merlin_master_translator_160.altera_merlin_master_translator;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.f2sdram_only_master1_master_agent use ghrd_10as066n2_altera_merlin_master_agent_160.altera_merlin_master_agent;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.arria10_hps_0_f2sdram0_data_agent use ghrd_10as066n2_altera_merlin_axi_slave_ni_160.altera_merlin_axi_slave_ni;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.router use ghrd_10as066n2_altera_merlin_router_160.ghrd_10as066n2_altera_merlin_router_160_g2elu7i;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.router_001 use ghrd_10as066n2_altera_merlin_router_160.ghrd_10as066n2_altera_merlin_router_160_bgxvkbq;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.router_002 use ghrd_10as066n2_altera_merlin_router_160.ghrd_10as066n2_altera_merlin_router_160_bgxvkbq;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.f2sdram_only_master1_master_limiter use ghrd_10as066n2_altera_merlin_traffic_limiter_160.altera_merlin_traffic_limiter;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.cmd_demux use ghrd_10as066n2_altera_merlin_demultiplexer_160.ghrd_10as066n2_altera_merlin_demultiplexer_160_xoo7gzq;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.cmd_mux use ghrd_10as066n2_altera_merlin_multiplexer_160.ghrd_10as066n2_altera_merlin_multiplexer_160_2ifxjhq;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.cmd_mux_001 use ghrd_10as066n2_altera_merlin_multiplexer_160.ghrd_10as066n2_altera_merlin_multiplexer_160_2ifxjhq;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.rsp_demux use ghrd_10as066n2_altera_merlin_demultiplexer_160.ghrd_10as066n2_altera_merlin_demultiplexer_160_t3q7f5q;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.rsp_demux_001 use ghrd_10as066n2_altera_merlin_demultiplexer_160.ghrd_10as066n2_altera_merlin_demultiplexer_160_t3q7f5q;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.rsp_mux use ghrd_10as066n2_altera_merlin_multiplexer_160.ghrd_10as066n2_altera_merlin_multiplexer_160_4nlhdya;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.arria10_hps_0_f2sdram0_data_wr_cmd_width_adapter use ghrd_10as066n2_altera_merlin_width_adapter_160.altera_merlin_width_adapter;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.arria10_hps_0_f2sdram0_data_rd_cmd_width_adapter use ghrd_10as066n2_altera_merlin_width_adapter_160.altera_merlin_width_adapter;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.arria10_hps_0_f2sdram0_data_wr_rsp_width_adapter use ghrd_10as066n2_altera_merlin_width_adapter_160.altera_merlin_width_adapter;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.arria10_hps_0_f2sdram0_data_rd_rsp_width_adapter use ghrd_10as066n2_altera_merlin_width_adapter_160.altera_merlin_width_adapter;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.limiter_pipeline use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.limiter_pipeline_001 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.agent_pipeline use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.agent_pipeline_001 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.agent_pipeline_002 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.agent_pipeline_003 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.mux_pipeline use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.mux_pipeline_001 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.mux_pipeline_002 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
		instance ghrd_10as066n2_altera_mm_interconnect_160_bristfa.mux_pipeline_003 use ghrd_10as066n2_altera_avalon_st_pipeline_stage_160.altera_avalon_st_pipeline_stage;
endconfig


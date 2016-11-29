# TCL File Generated by Component Editor 11.1
# Mon Nov 28 09:29:54 CET 2011
# DO NOT MODIFY


# +-----------------------------------
# | 
# | vesa_tpg "vesa_tpg" v1.0
# | null 2011.11.28.09:29:54
# | 
# | 
# | C:/ti/MyProjects/altera/Mezzanine/displayPort/dp_ref_designs_marb_v11p1/sivgx_multi_cts_sink/ip/vesa_tpg/vesa_tpg.v
# | 
# |    ./vesa_tpg.v syn, sim
# | 
# +-----------------------------------

# +-----------------------------------
# | request TCL package from ACDS 11.0
# | 
package require -exact sopc 11.0
# | 
# +-----------------------------------

# +-----------------------------------
# | module vesa_tpg
# | 
set_module_property NAME vesa_tpg
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property GROUP Bitec
set_module_property DISPLAY_NAME vesa_tpg
set_module_property TOP_LEVEL_HDL_FILE vesa_tpg.v
set_module_property TOP_LEVEL_HDL_MODULE vesa_tpg
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL TRUE
set_module_property STATIC_TOP_LEVEL_MODULE_NAME vesa_tpg
set_module_property FIX_110_VIP_PATH false
# | 
# +-----------------------------------

# +-----------------------------------
# | files
# | 
add_file vesa_tpg.v {SYNTHESIS SIMULATION}
# | 
# +-----------------------------------

# +-----------------------------------
# | parameters
# | 
add_parameter MAX_BPC INTEGER 8
set_parameter_property MAX_BPC DEFAULT_VALUE 8
set_parameter_property MAX_BPC DISPLAY_NAME MAX_BPC
set_parameter_property MAX_BPC TYPE INTEGER
set_parameter_property MAX_BPC UNITS None
set_parameter_property MAX_BPC AFFECTS_GENERATION false
set_parameter_property MAX_BPC HDL_PARAMETER true
add_parameter WIDTH INTEGER 640
set_parameter_property WIDTH DEFAULT_VALUE 640
set_parameter_property WIDTH DISPLAY_NAME WIDTH
set_parameter_property WIDTH TYPE INTEGER
set_parameter_property WIDTH UNITS None
set_parameter_property WIDTH AFFECTS_GENERATION false
set_parameter_property WIDTH HDL_PARAMETER true
add_parameter HEIGHT INTEGER 480
set_parameter_property HEIGHT DEFAULT_VALUE 480
set_parameter_property HEIGHT DISPLAY_NAME HEIGHT
set_parameter_property HEIGHT TYPE INTEGER
set_parameter_property HEIGHT UNITS None
set_parameter_property HEIGHT AFFECTS_GENERATION false
set_parameter_property HEIGHT HDL_PARAMETER true
# | 
# +-----------------------------------

# +-----------------------------------
# | display items
# | 
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point avalon_streaming_source
# | 
add_interface avalon_streaming_source avalon_streaming start
set_interface_property avalon_streaming_source associatedClock clock_sink
set_interface_property avalon_streaming_source associatedReset reset_sink
set_interface_property avalon_streaming_source dataBitsPerSymbol 8
set_interface_property avalon_streaming_source errorDescriptor ""
set_interface_property avalon_streaming_source firstSymbolInHighOrderBits true
set_interface_property avalon_streaming_source maxChannel 0
set_interface_property avalon_streaming_source readyLatency 1

set_interface_property avalon_streaming_source ENABLED true

add_interface_port avalon_streaming_source dout_valid valid Output 1
add_interface_port avalon_streaming_source dout_data data Output MAX_BPC*3
add_interface_port avalon_streaming_source dout_ready ready Input 1
add_interface_port avalon_streaming_source dout_sop startofpacket Output 1
add_interface_port avalon_streaming_source dout_eop endofpacket Output 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point conduit_end
# | 
add_interface conduit_end conduit end

set_interface_property conduit_end ENABLED true

add_interface_port conduit_end bpp export Input 3
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point clock_sink
# | 
add_interface clock_sink clock end
set_interface_property clock_sink clockRate 0

set_interface_property clock_sink ENABLED true

add_interface_port clock_sink clock clk Input 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point reset_sink
# | 
add_interface reset_sink reset end
set_interface_property reset_sink associatedClock clock_sink
set_interface_property reset_sink synchronousEdges DEASSERT

set_interface_property reset_sink ENABLED true

add_interface_port reset_sink reset reset Input 1
# | 
# +-----------------------------------

#ifndef _ALTERA_ARRIA10_HPS_0_ARM_A9_1_H_
#define _ALTERA_ARRIA10_HPS_0_ARM_A9_1_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'ghrd_10as066n2' in
 * file '../../ghrd_10as066n2.sopcinfo'.
 */

/*
 * This file contains macros for module 'arria10_hps_0_arm_a9_1' and devices
 * connected to the following master:
 *   altera_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'onchip_memory2_0', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'ONCHIP_MEMORY2_0_'.
 * The prefix is the slave descriptor.
 */
#define ONCHIP_MEMORY2_0_COMPONENT_TYPE altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_COMPONENT_NAME onchip_memory2_0
#define ONCHIP_MEMORY2_0_BASE 0xc0000000
#define ONCHIP_MEMORY2_0_SPAN 262144
#define ONCHIP_MEMORY2_0_END 0xc003ffff
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE ghrd_10as066n2_onchip_memory2_0
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID NONE
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE DONT_CARE
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 1
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 262144
#define ONCHIP_MEMORY2_0_WRITABLE 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_DAT_SYM 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_HEX 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HAS_BYTE_LANE 0
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_DATA_WIDTH 8
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_FILENAME ghrd_10as066n2_onchip_memory2_0

/*
 * Macros for device 'protobuf_serializer_0', class 'protobuf_serializer'
 * The macros are prefixed with 'PROTOBUF_SERIALIZER_0_'.
 * The prefix is the slave descriptor.
 */
#define PROTOBUF_SERIALIZER_0_COMPONENT_TYPE protobuf_serializer
#define PROTOBUF_SERIALIZER_0_COMPONENT_NAME protobuf_serializer_0
#define PROTOBUF_SERIALIZER_0_BASE 0xc0050000
#define PROTOBUF_SERIALIZER_0_SPAN 65536
#define PROTOBUF_SERIALIZER_0_END 0xc005ffff

/*
 * Macros for device 'sysid_qsys_0', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_0_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_0_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_0_COMPONENT_NAME sysid_qsys_0
#define SYSID_QSYS_0_BASE 0xff200000
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_END 0xff200007
#define SYSID_QSYS_0_ID 3221755904
#define SYSID_QSYS_0_TIMESTAMP 1493857771

/*
 * Macros for device 'led_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'LED_PIO_'.
 * The prefix is the slave descriptor.
 */
#define LED_PIO_COMPONENT_TYPE altera_avalon_pio
#define LED_PIO_COMPONENT_NAME led_pio
#define LED_PIO_BASE 0xff200010
#define LED_PIO_SPAN 16
#define LED_PIO_END 0xff20001f
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 4
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE NONE
#define LED_PIO_FREQ 100000000
#define LED_PIO_HAS_IN 1
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ_TYPE NONE
#define LED_PIO_RESET_VALUE 0

/*
 * Macros for device 'button_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'BUTTON_PIO_'.
 * The prefix is the slave descriptor.
 */
#define BUTTON_PIO_COMPONENT_TYPE altera_avalon_pio
#define BUTTON_PIO_COMPONENT_NAME button_pio
#define BUTTON_PIO_BASE 0xff200020
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_END 0xff20002f
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_EDGE_TYPE FALLING
#define BUTTON_PIO_FREQ 100000000
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_IRQ_TYPE EDGE
#define BUTTON_PIO_RESET_VALUE 0

/*
 * Macros for device 'dipsw_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'DIPSW_PIO_'.
 * The prefix is the slave descriptor.
 */
#define DIPSW_PIO_COMPONENT_TYPE altera_avalon_pio
#define DIPSW_PIO_COMPONENT_NAME dipsw_pio
#define DIPSW_PIO_BASE 0xff200030
#define DIPSW_PIO_SPAN 16
#define DIPSW_PIO_END 0xff20003f
#define DIPSW_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define DIPSW_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIPSW_PIO_CAPTURE 1
#define DIPSW_PIO_DATA_WIDTH 4
#define DIPSW_PIO_DO_TEST_BENCH_WIRING 0
#define DIPSW_PIO_DRIVEN_SIM_VALUE 0
#define DIPSW_PIO_EDGE_TYPE ANY
#define DIPSW_PIO_FREQ 100000000
#define DIPSW_PIO_HAS_IN 1
#define DIPSW_PIO_HAS_OUT 0
#define DIPSW_PIO_HAS_TRI 0
#define DIPSW_PIO_IRQ_TYPE EDGE
#define DIPSW_PIO_RESET_VALUE 0

/*
 * Macros for device 'ILC', class 'interrupt_latency_counter'
 * The macros are prefixed with 'ILC_'.
 * The prefix is the slave descriptor.
 */
#define ILC_COMPONENT_TYPE interrupt_latency_counter
#define ILC_COMPONENT_NAME ILC
#define ILC_BASE 0xff200100
#define ILC_SPAN 256
#define ILC_END 0xff2001ff

/*
 * Macros for device 'arria10_hps_0_i_emac_emac0', class 'stmmac'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_EMAC_EMAC0_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_EMAC_EMAC0_COMPONENT_TYPE stmmac
#define ARRIA10_HPS_0_I_EMAC_EMAC0_COMPONENT_NAME arria10_hps_0_i_emac_emac0
#define ARRIA10_HPS_0_I_EMAC_EMAC0_BASE 0xff800000
#define ARRIA10_HPS_0_I_EMAC_EMAC0_SPAN 8192
#define ARRIA10_HPS_0_I_EMAC_EMAC0_END 0xff801fff

/*
 * Macros for device 'arria10_hps_0_i_emac_emac1', class 'stmmac'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_EMAC_EMAC1_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_EMAC_EMAC1_COMPONENT_TYPE stmmac
#define ARRIA10_HPS_0_I_EMAC_EMAC1_COMPONENT_NAME arria10_hps_0_i_emac_emac1
#define ARRIA10_HPS_0_I_EMAC_EMAC1_BASE 0xff802000
#define ARRIA10_HPS_0_I_EMAC_EMAC1_SPAN 8192
#define ARRIA10_HPS_0_I_EMAC_EMAC1_END 0xff803fff

/*
 * Macros for device 'arria10_hps_0_i_emac_emac2', class 'stmmac'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_EMAC_EMAC2_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_EMAC_EMAC2_COMPONENT_TYPE stmmac
#define ARRIA10_HPS_0_I_EMAC_EMAC2_COMPONENT_NAME arria10_hps_0_i_emac_emac2
#define ARRIA10_HPS_0_I_EMAC_EMAC2_BASE 0xff804000
#define ARRIA10_HPS_0_I_EMAC_EMAC2_SPAN 8192
#define ARRIA10_HPS_0_I_EMAC_EMAC2_END 0xff805fff

/*
 * Macros for device 'arria10_hps_0_i_sdmmc_sdmmc', class 'sdmmc'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SDMMC_SDMMC_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SDMMC_SDMMC_COMPONENT_TYPE sdmmc
#define ARRIA10_HPS_0_I_SDMMC_SDMMC_COMPONENT_NAME arria10_hps_0_i_sdmmc_sdmmc
#define ARRIA10_HPS_0_I_SDMMC_SDMMC_BASE 0xff808000
#define ARRIA10_HPS_0_I_SDMMC_SDMMC_SPAN 4096
#define ARRIA10_HPS_0_I_SDMMC_SDMMC_END 0xff808fff

/*
 * Macros for device 'arria10_hps_0_i_qspi_QSPIDATA', class 'qspi'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_QSPI_QSPIDATA_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_QSPI_QSPIDATA_COMPONENT_TYPE qspi
#define ARRIA10_HPS_0_I_QSPI_QSPIDATA_COMPONENT_NAME arria10_hps_0_i_qspi_QSPIDATA
#define ARRIA10_HPS_0_I_QSPI_QSPIDATA_BASE 0xff809000
#define ARRIA10_HPS_0_I_QSPI_QSPIDATA_SPAN 256
#define ARRIA10_HPS_0_I_QSPI_QSPIDATA_END 0xff8090ff

/*
 * Macros for device 'arria10_hps_0_i_usbotg_0_globgrp', class 'usb'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_COMPONENT_TYPE usb
#define ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_COMPONENT_NAME arria10_hps_0_i_usbotg_0_globgrp
#define ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_BASE 0xffb00000
#define ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_SPAN 262144
#define ARRIA10_HPS_0_I_USBOTG_0_GLOBGRP_END 0xffb3ffff

/*
 * Macros for device 'arria10_hps_0_i_usbotg_1_globgrp', class 'usb'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_COMPONENT_TYPE usb
#define ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_COMPONENT_NAME arria10_hps_0_i_usbotg_1_globgrp
#define ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_BASE 0xffb40000
#define ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_SPAN 262144
#define ARRIA10_HPS_0_I_USBOTG_1_GLOBGRP_END 0xffb7ffff

/*
 * Macros for device 'arria10_hps_0_i_nand_NANDDATA', class 'denali_nand'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_NAND_NANDDATA_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_NAND_NANDDATA_COMPONENT_TYPE denali_nand
#define ARRIA10_HPS_0_I_NAND_NANDDATA_COMPONENT_NAME arria10_hps_0_i_nand_NANDDATA
#define ARRIA10_HPS_0_I_NAND_NANDDATA_BASE 0xffb90000
#define ARRIA10_HPS_0_I_NAND_NANDDATA_SPAN 65536
#define ARRIA10_HPS_0_I_NAND_NANDDATA_END 0xffb9ffff

/*
 * Macros for device 'arria10_hps_0_i_uart_0_uart', class 'snps_uart'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_UART_0_UART_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_UART_0_UART_COMPONENT_TYPE snps_uart
#define ARRIA10_HPS_0_I_UART_0_UART_COMPONENT_NAME arria10_hps_0_i_uart_0_uart
#define ARRIA10_HPS_0_I_UART_0_UART_BASE 0xffc02000
#define ARRIA10_HPS_0_I_UART_0_UART_SPAN 256
#define ARRIA10_HPS_0_I_UART_0_UART_END 0xffc020ff
#define ARRIA10_HPS_0_I_UART_0_UART_FIFO_DEPTH 128
#define ARRIA10_HPS_0_I_UART_0_UART_FIFO_HWFC 0
#define ARRIA10_HPS_0_I_UART_0_UART_FIFO_MODE 1
#define ARRIA10_HPS_0_I_UART_0_UART_FIFO_SWFC 0
#define ARRIA10_HPS_0_I_UART_0_UART_FREQ 0

/*
 * Macros for device 'arria10_hps_0_i_uart_1_uart', class 'snps_uart'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_UART_1_UART_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_UART_1_UART_COMPONENT_TYPE snps_uart
#define ARRIA10_HPS_0_I_UART_1_UART_COMPONENT_NAME arria10_hps_0_i_uart_1_uart
#define ARRIA10_HPS_0_I_UART_1_UART_BASE 0xffc02100
#define ARRIA10_HPS_0_I_UART_1_UART_SPAN 256
#define ARRIA10_HPS_0_I_UART_1_UART_END 0xffc021ff
#define ARRIA10_HPS_0_I_UART_1_UART_FIFO_DEPTH 128
#define ARRIA10_HPS_0_I_UART_1_UART_FIFO_HWFC 0
#define ARRIA10_HPS_0_I_UART_1_UART_FIFO_MODE 1
#define ARRIA10_HPS_0_I_UART_1_UART_FIFO_SWFC 0
#define ARRIA10_HPS_0_I_UART_1_UART_FREQ 0

/*
 * Macros for device 'arria10_hps_0_i_i2c_0_i2c', class 'designware_i2c'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_I2C_0_I2C_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_I2C_0_I2C_COMPONENT_TYPE designware_i2c
#define ARRIA10_HPS_0_I_I2C_0_I2C_COMPONENT_NAME arria10_hps_0_i_i2c_0_i2c
#define ARRIA10_HPS_0_I_I2C_0_I2C_BASE 0xffc02200
#define ARRIA10_HPS_0_I_I2C_0_I2C_SPAN 256
#define ARRIA10_HPS_0_I_I2C_0_I2C_END 0xffc022ff

/*
 * Macros for device 'arria10_hps_0_i_i2c_1_i2c', class 'designware_i2c'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_I2C_1_I2C_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_I2C_1_I2C_COMPONENT_TYPE designware_i2c
#define ARRIA10_HPS_0_I_I2C_1_I2C_COMPONENT_NAME arria10_hps_0_i_i2c_1_i2c
#define ARRIA10_HPS_0_I_I2C_1_I2C_BASE 0xffc02300
#define ARRIA10_HPS_0_I_I2C_1_I2C_SPAN 256
#define ARRIA10_HPS_0_I_I2C_1_I2C_END 0xffc023ff

/*
 * Macros for device 'arria10_hps_0_i_i2c_emac_0_i2c', class 'designware_i2c'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_COMPONENT_TYPE designware_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_COMPONENT_NAME arria10_hps_0_i_i2c_emac_0_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_BASE 0xffc02400
#define ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_SPAN 256
#define ARRIA10_HPS_0_I_I2C_EMAC_0_I2C_END 0xffc024ff

/*
 * Macros for device 'arria10_hps_0_i_i2c_emac_1_i2c', class 'designware_i2c'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_COMPONENT_TYPE designware_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_COMPONENT_NAME arria10_hps_0_i_i2c_emac_1_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_BASE 0xffc02500
#define ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_SPAN 256
#define ARRIA10_HPS_0_I_I2C_EMAC_1_I2C_END 0xffc025ff

/*
 * Macros for device 'arria10_hps_0_i_i2c_emac_2_i2c', class 'designware_i2c'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_COMPONENT_TYPE designware_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_COMPONENT_NAME arria10_hps_0_i_i2c_emac_2_i2c
#define ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_BASE 0xffc02600
#define ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_SPAN 256
#define ARRIA10_HPS_0_I_I2C_EMAC_2_I2C_END 0xffc026ff

/*
 * Macros for device 'arria10_hps_0_i_timer_sp_0_timer', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_COMPONENT_TYPE dw_apb_timer_sp
#define ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_COMPONENT_NAME arria10_hps_0_i_timer_sp_0_timer
#define ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_BASE 0xffc02700
#define ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_SPAN 256
#define ARRIA10_HPS_0_I_TIMER_SP_0_TIMER_END 0xffc027ff

/*
 * Macros for device 'arria10_hps_0_i_timer_sp_1_timer', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_COMPONENT_TYPE dw_apb_timer_sp
#define ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_COMPONENT_NAME arria10_hps_0_i_timer_sp_1_timer
#define ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_BASE 0xffc02800
#define ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_SPAN 256
#define ARRIA10_HPS_0_I_TIMER_SP_1_TIMER_END 0xffc028ff

/*
 * Macros for device 'arria10_hps_0_i_gpio_0_gpio', class 'dw_gpio'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_GPIO_0_GPIO_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_GPIO_0_GPIO_COMPONENT_TYPE dw_gpio
#define ARRIA10_HPS_0_I_GPIO_0_GPIO_COMPONENT_NAME arria10_hps_0_i_gpio_0_gpio
#define ARRIA10_HPS_0_I_GPIO_0_GPIO_BASE 0xffc02900
#define ARRIA10_HPS_0_I_GPIO_0_GPIO_SPAN 256
#define ARRIA10_HPS_0_I_GPIO_0_GPIO_END 0xffc029ff

/*
 * Macros for device 'arria10_hps_0_i_gpio_1_gpio', class 'dw_gpio'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_GPIO_1_GPIO_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_GPIO_1_GPIO_COMPONENT_TYPE dw_gpio
#define ARRIA10_HPS_0_I_GPIO_1_GPIO_COMPONENT_NAME arria10_hps_0_i_gpio_1_gpio
#define ARRIA10_HPS_0_I_GPIO_1_GPIO_BASE 0xffc02a00
#define ARRIA10_HPS_0_I_GPIO_1_GPIO_SPAN 256
#define ARRIA10_HPS_0_I_GPIO_1_GPIO_END 0xffc02aff

/*
 * Macros for device 'arria10_hps_0_i_gpio_2_gpio', class 'dw_gpio'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_GPIO_2_GPIO_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_GPIO_2_GPIO_COMPONENT_TYPE dw_gpio
#define ARRIA10_HPS_0_I_GPIO_2_GPIO_COMPONENT_NAME arria10_hps_0_i_gpio_2_gpio
#define ARRIA10_HPS_0_I_GPIO_2_GPIO_BASE 0xffc02b00
#define ARRIA10_HPS_0_I_GPIO_2_GPIO_SPAN 256
#define ARRIA10_HPS_0_I_GPIO_2_GPIO_END 0xffc02bff

/*
 * Macros for device 'arria10_hps_0_i_timer_sys_0_timer', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_COMPONENT_TYPE dw_apb_timer_osc
#define ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_COMPONENT_NAME arria10_hps_0_i_timer_sys_0_timer
#define ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_BASE 0xffd00000
#define ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_SPAN 256
#define ARRIA10_HPS_0_I_TIMER_SYS_0_TIMER_END 0xffd000ff

/*
 * Macros for device 'arria10_hps_0_i_timer_sys_1_timer', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_COMPONENT_TYPE dw_apb_timer_osc
#define ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_COMPONENT_NAME arria10_hps_0_i_timer_sys_1_timer
#define ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_BASE 0xffd00100
#define ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_SPAN 256
#define ARRIA10_HPS_0_I_TIMER_SYS_1_TIMER_END 0xffd001ff

/*
 * Macros for device 'arria10_hps_0_i_watchdog_0_l4wd', class 'dw_wd_timer'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_COMPONENT_TYPE dw_wd_timer
#define ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_COMPONENT_NAME arria10_hps_0_i_watchdog_0_l4wd
#define ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_BASE 0xffd00200
#define ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_SPAN 256
#define ARRIA10_HPS_0_I_WATCHDOG_0_L4WD_END 0xffd002ff

/*
 * Macros for device 'arria10_hps_0_i_watchdog_1_l4wd', class 'dw_wd_timer'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_COMPONENT_TYPE dw_wd_timer
#define ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_COMPONENT_NAME arria10_hps_0_i_watchdog_1_l4wd
#define ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_BASE 0xffd00300
#define ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_SPAN 256
#define ARRIA10_HPS_0_I_WATCHDOG_1_L4WD_END 0xffd003ff

/*
 * Macros for device 'arria10_hps_0_i_fpga_mgr_fpgamgrregs', class 'fpgamgr'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_COMPONENT_TYPE fpgamgr
#define ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_COMPONENT_NAME arria10_hps_0_i_fpga_mgr_fpgamgrregs
#define ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_BASE 0xffd03000
#define ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_SPAN 4096
#define ARRIA10_HPS_0_I_FPGA_MGR_FPGAMGRREGS_END 0xffd03fff

/*
 * Macros for device 'arria10_hps_0_baum_clkmgr', class 'baum_clkmgr'
 * The macros are prefixed with 'ARRIA10_HPS_0_BAUM_CLKMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_BAUM_CLKMGR_COMPONENT_TYPE baum_clkmgr
#define ARRIA10_HPS_0_BAUM_CLKMGR_COMPONENT_NAME arria10_hps_0_baum_clkmgr
#define ARRIA10_HPS_0_BAUM_CLKMGR_BASE 0xffd04000
#define ARRIA10_HPS_0_BAUM_CLKMGR_SPAN 4096
#define ARRIA10_HPS_0_BAUM_CLKMGR_END 0xffd04fff

/*
 * Macros for device 'arria10_hps_0_i_rst_mgr_rstmgr', class 'rstmgr'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_RST_MGR_RSTMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_RST_MGR_RSTMGR_COMPONENT_TYPE rstmgr
#define ARRIA10_HPS_0_I_RST_MGR_RSTMGR_COMPONENT_NAME arria10_hps_0_i_rst_mgr_rstmgr
#define ARRIA10_HPS_0_I_RST_MGR_RSTMGR_BASE 0xffd05000
#define ARRIA10_HPS_0_I_RST_MGR_RSTMGR_SPAN 256
#define ARRIA10_HPS_0_I_RST_MGR_RSTMGR_END 0xffd050ff

/*
 * Macros for device 'arria10_hps_0_i_sys_mgr_core', class 'sysmgr'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SYS_MGR_CORE_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SYS_MGR_CORE_COMPONENT_TYPE sysmgr
#define ARRIA10_HPS_0_I_SYS_MGR_CORE_COMPONENT_NAME arria10_hps_0_i_sys_mgr_core
#define ARRIA10_HPS_0_I_SYS_MGR_CORE_BASE 0xffd06000
#define ARRIA10_HPS_0_I_SYS_MGR_CORE_SPAN 1024
#define ARRIA10_HPS_0_I_SYS_MGR_CORE_END 0xffd063ff

/*
 * Macros for device 'arria10_hps_0_i_dma_DMASECURE', class 'dma'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_DMA_DMASECURE_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_DMA_DMASECURE_COMPONENT_TYPE dma
#define ARRIA10_HPS_0_I_DMA_DMASECURE_COMPONENT_NAME arria10_hps_0_i_dma_DMASECURE
#define ARRIA10_HPS_0_I_DMA_DMASECURE_BASE 0xffda1000
#define ARRIA10_HPS_0_I_DMA_DMASECURE_SPAN 4096
#define ARRIA10_HPS_0_I_DMA_DMASECURE_END 0xffda1fff

/*
 * Macros for device 'arria10_hps_0_i_spis_0_spis', class 'spi'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SPIS_0_SPIS_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SPIS_0_SPIS_COMPONENT_TYPE spi
#define ARRIA10_HPS_0_I_SPIS_0_SPIS_COMPONENT_NAME arria10_hps_0_i_spis_0_spis
#define ARRIA10_HPS_0_I_SPIS_0_SPIS_BASE 0xffda2000
#define ARRIA10_HPS_0_I_SPIS_0_SPIS_SPAN 256
#define ARRIA10_HPS_0_I_SPIS_0_SPIS_END 0xffda20ff

/*
 * Macros for device 'arria10_hps_0_i_spis_1_spis', class 'spi'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SPIS_1_SPIS_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SPIS_1_SPIS_COMPONENT_TYPE spi
#define ARRIA10_HPS_0_I_SPIS_1_SPIS_COMPONENT_NAME arria10_hps_0_i_spis_1_spis
#define ARRIA10_HPS_0_I_SPIS_1_SPIS_BASE 0xffda3000
#define ARRIA10_HPS_0_I_SPIS_1_SPIS_SPAN 256
#define ARRIA10_HPS_0_I_SPIS_1_SPIS_END 0xffda30ff

/*
 * Macros for device 'arria10_hps_0_i_spim_0_spim', class 'spi'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SPIM_0_SPIM_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SPIM_0_SPIM_COMPONENT_TYPE spi
#define ARRIA10_HPS_0_I_SPIM_0_SPIM_COMPONENT_NAME arria10_hps_0_i_spim_0_spim
#define ARRIA10_HPS_0_I_SPIM_0_SPIM_BASE 0xffda4000
#define ARRIA10_HPS_0_I_SPIM_0_SPIM_SPAN 256
#define ARRIA10_HPS_0_I_SPIM_0_SPIM_END 0xffda40ff

/*
 * Macros for device 'arria10_hps_0_i_spim_1_spim', class 'spi'
 * The macros are prefixed with 'ARRIA10_HPS_0_I_SPIM_1_SPIM_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_I_SPIM_1_SPIM_COMPONENT_TYPE spi
#define ARRIA10_HPS_0_I_SPIM_1_SPIM_COMPONENT_NAME arria10_hps_0_i_spim_1_spim
#define ARRIA10_HPS_0_I_SPIM_1_SPIM_BASE 0xffda5000
#define ARRIA10_HPS_0_I_SPIM_1_SPIM_SPAN 256
#define ARRIA10_HPS_0_I_SPIM_1_SPIM_END 0xffda50ff

/*
 * Macros for device 'arria10_hps_0_scu', class 'scu'
 * The macros are prefixed with 'ARRIA10_HPS_0_SCU_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_SCU_COMPONENT_TYPE scu
#define ARRIA10_HPS_0_SCU_COMPONENT_NAME arria10_hps_0_scu
#define ARRIA10_HPS_0_SCU_BASE 0xffffc000
#define ARRIA10_HPS_0_SCU_SPAN 256
#define ARRIA10_HPS_0_SCU_END 0xffffc0ff

/*
 * Macros for device 'arria10_hps_0_timer', class 'timer'
 * The macros are prefixed with 'ARRIA10_HPS_0_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_TIMER_COMPONENT_TYPE timer
#define ARRIA10_HPS_0_TIMER_COMPONENT_NAME arria10_hps_0_timer
#define ARRIA10_HPS_0_TIMER_BASE 0xffffc600
#define ARRIA10_HPS_0_TIMER_SPAN 256
#define ARRIA10_HPS_0_TIMER_END 0xffffc6ff

/*
 * Macros for device 'arria10_hps_0_arm_gic_0', class 'arria10_arm_gic'
 * The macros are prefixed with 'ARRIA10_HPS_0_ARM_GIC_0_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_ARM_GIC_0_COMPONENT_TYPE arria10_arm_gic
#define ARRIA10_HPS_0_ARM_GIC_0_COMPONENT_NAME arria10_hps_0_arm_gic_0
#define ARRIA10_HPS_0_ARM_GIC_0_BASE 0xffffd000
#define ARRIA10_HPS_0_ARM_GIC_0_SPAN 4096
#define ARRIA10_HPS_0_ARM_GIC_0_END 0xffffdfff

/*
 * Macros for device 'arria10_hps_0_mpu_reg_l2_MPUL2', class 'L2'
 * The macros are prefixed with 'ARRIA10_HPS_0_MPU_REG_L2_MPUL2_'.
 * The prefix is the slave descriptor.
 */
#define ARRIA10_HPS_0_MPU_REG_L2_MPUL2_COMPONENT_TYPE L2
#define ARRIA10_HPS_0_MPU_REG_L2_MPUL2_COMPONENT_NAME arria10_hps_0_mpu_reg_l2_MPUL2
#define ARRIA10_HPS_0_MPU_REG_L2_MPUL2_BASE 0xfffff000
#define ARRIA10_HPS_0_MPU_REG_L2_MPUL2_SPAN 4096
#define ARRIA10_HPS_0_MPU_REG_L2_MPUL2_END 0xffffffff


#endif /* _ALTERA_ARRIA10_HPS_0_ARM_A9_1_H_ */

/*
 * (C) Copyright 2002
 * Rich Ireland, Enterasys Networks, rireland@enterasys.com.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <fpga.h>

#ifndef _ALTERA_H_
#define _ALTERA_H_

enum altera_iface {
	/* insert all new types after this */
	min_altera_iface_type,
	/* serial data and external clock */
	passive_serial,
	/* parallel data */
	passive_parallel_synchronous,
	/* parallel data */
	passive_parallel_asynchronous,
	/* serial data w/ internal clock (not used) */
	passive_serial_asynchronous,
	/* jtag/tap serial (not used ) */
	altera_jtag_mode,
	/* fast passive parallel (FPP) */
	fast_passive_parallel,
	/* fast passive parallel with security (FPPS) */
	fast_passive_parallel_security,
	/* insert all new types before this */
	max_altera_iface_type,
};

enum altera_family {
	/* insert all new types after this */
	min_altera_type,
	/* ACEX1K Family */
	Altera_ACEX1K,
	/* CYCLONII Family */
	Altera_CYC2,
	/* StratixII Family */
	Altera_StratixII,
	/* SoCFPGA Family */
	Altera_SoCFPGA,

	/* Add new models here */

	/* insert all new types before this */
	max_altera_type,
};

typedef struct {
	/* part type */
	enum altera_family	family;
	/* interface type */
	enum altera_iface	iface;
	/* bytes of data part can accept */
	size_t			size;
	/* interface function table */
	void			*iface_fns;
	/* base interface address */
	void			*base;
	/* implementation specific cookie */
	int			cookie;
} Altera_desc;

/* Generic Altera Functions
 *********************************************************************/
extern int altera_load(Altera_desc *desc, const void *image, size_t size);
extern int altera_dump(Altera_desc *desc, const void *buf, size_t bsize);
extern int altera_info(Altera_desc *desc);
extern int altera_loadfs(Altera_desc *desc, const void *buf, size_t bsize,
			fpga_fs_info *fpga_fsinfo);

/* Board specific implementation specific function types
 *********************************************************************/
typedef int (*Altera_pre_fn)( int cookie );
typedef int (*Altera_config_fn)( int assert_config, int flush, int cookie );
typedef int (*Altera_status_fn)( int cookie );
typedef int (*Altera_done_fn)( int cookie );
typedef int (*Altera_clk_fn)( int assert_clk, int flush, int cookie );
typedef int (*Altera_data_fn)( int assert_data, int flush, int cookie );
typedef int(*Altera_write_fn)(const void *buf, size_t len, int flush, int cookie);
typedef int (*Altera_abort_fn)( int cookie );
typedef int (*Altera_post_fn)( int cookie );

typedef struct {
	Altera_pre_fn pre;
	Altera_config_fn config;
	Altera_status_fn status;
	Altera_done_fn done;
	Altera_clk_fn clk;
	Altera_data_fn data;
	Altera_abort_fn abort;
	Altera_post_fn post;
} altera_board_specific_func;

int socfpga_load(Altera_desc *desc, const void *rbf_data, size_t rbf_size);

#if defined(CONFIG_CMD_FPGA_LOADFS)
int socfpga_loadfs(Altera_desc *desc, const void *buf, size_t bsize,
		fpga_fs_info *fsinfo);
#endif

#endif /* _ALTERA_H_ */

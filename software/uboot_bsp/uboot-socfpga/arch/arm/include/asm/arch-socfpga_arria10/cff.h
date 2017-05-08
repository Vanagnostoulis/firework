/*
 * Copyright (C) 2014-2016 Altera Corporation <www.altera.com>
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef	_SOCFPGA_CFF_H_
#define	_SOCFPGA_CFF_H_

#ifndef __ASSEMBLY__
int cff_from_qspi_env(void);
int cff_from_qspi(unsigned long flash_offset, int do_init, int wait_early);
int cff_from_nand_env(void);
int cff_from_nand(unsigned long flash_offset);
const char *get_cff_filename(const void *fdt, int *len);
int cff_from_mmc_fat(char *dev_part, const char *filename, int len,
	int do_init, int wait_early);
#endif /* __ASSEMBLY__ */

#endif /* _SOCFPGA_CFF_H_ */

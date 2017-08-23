/*
 * Copyright (C) 2014 Altera Corporation <www.altera.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/io.h>
#include <watchdog.h>
#include <asm/arch/fpga_manager.h>
#include <asm/arch/reset_manager.h>
#include <asm/arch/system_manager.h>
#include <asm/arch/clock_manager.h>
#include <asm/arch/ecc_ram.h>
#include <asm/arch/misc.h>
#include <asm/arch/sdram.h>
#include <asm/sections.h>
#include <fdtdec.h>

DECLARE_GLOBAL_DATA_PTR;
static int __do_pinctr_pins(const void *blob, int child, const char *node_name)
{
	int len;
	fdt_addr_t base_addr;
	fdt_size_t size;
	const u32 *cell;
	u32 offset, value;

	base_addr = fdtdec_get_addr_size(blob, child, "reg", &size);
	if (base_addr != FDT_ADDR_T_NONE) {
		debug("subnode %s %x:%x\n",
			node_name, base_addr, size);

		cell = fdt_getprop(blob, child, "pinctrl-single,pins",
			&len);
		if (cell != NULL) {
			debug("%p %d\n", cell, len);
			for (;len > 0; len -= (2*sizeof(u32))) {
				offset = fdt32_to_cpu(*cell++);
				value = fdt32_to_cpu(*cell++);
				debug("<0x%x 0x%x>\n", offset, value);
				writel(value, base_addr + offset);
			}
			return 0;
		}
	}
	return 1;
}
int do_pinctrl_pins(const void *blob, int node, char *child_name)
{
	int child, len;
	const char *node_name;

	child = fdt_first_subnode(blob, node);

	if (child < 0)
		return 2;

	node_name = fdt_get_name(blob, child, &len);

	while (node_name) {
		if (!strcmp(child_name, node_name)) {
			__do_pinctr_pins(blob, child, node_name);
			return(0);
		}
		child = fdt_next_subnode(blob, child);

		if (child < 0)
			break;

		node_name = fdt_get_name(blob, child, &len);
	}

	return 1;
}

int config_dedicated_pins(const void *blob)
{
	int node;

	node = fdtdec_next_compatible(blob, 0, COMPAT_PINCTRL_SINGLE);

	if (node < 0)
		return 1;

	if (do_pinctrl_pins(blob, node, "dedicated_cfg"))
		return 2;

	if (do_pinctrl_pins(blob, node, "dedicated"))
		return 3;

	return 0;
}

int config_shared_fpga_pins(const void *blob)
{
	int node;

	node = fdtdec_next_compatible(blob, 0, COMPAT_PINCTRL_SINGLE);

	if (node < 0)
		return 1;

	if (do_pinctrl_pins(blob, node, "shared"))
		return 4;

	if (do_pinctrl_pins(blob, node, "fpga"))
		return 5;

	return 0;
}

/* This function initializes security policies to be consistent across
 * all logic units in the Arria 10.
 *
 * The idea is to set all security policies to be normal, nonsecure
 * for all units.
 *
 * Reality is, we're just hacking stuff in here so things will *work*
 * and we'll fix it as we go.
 */
void
arria10_initialize_security_policies(void)
{

	/* Temp HACK to put OCRAM in non-secure */
	writel(0x003f0000, 0xffd1320c);
	writel(0x1, 0xffd13200);

	/* Temp HACK to put DDR in non-secure */
	writel(0xffff0000, 0xffd1340c);
	writel(0x1, 0xffd13400);
}

/* This function masks all the ECC errors. The next stage
 * (Linux or a different OS) will unmask the appropriate
 * module in the ECC enable routine.
 */
void
arria10_mask_ecc_errors(void)
{
	const struct socfpga_system_manager *system_manager_base =
		(void *)SOCFPGA_SYSMGR_ADDRESS;

	writel(0x0007FFFF, &system_manager_base->ecc_intmask_set);
}

/*
 * First C function to initialize the critical hardware early
 */
void s_init(void)
{
	/*
	 * Configure Clock Manager to use intosc clock instead external osc to
	 * ensure success watchdog operation. We do it as early as possible.
	 */
	cm_use_intosc();

	watchdog_disable();

	arria10_initialize_security_policies();

	arria10_mask_ecc_errors();

	/* Clear fake OCRAM ECC first as might triggered during power on */
	clear_ecc_ocram_ecc_status();

	/* Configure the L2 controller to make SDRAM start at 0	*/
	writel(0x1, SOCFPGA_MPUL2_ADRFLTR_START);

#ifdef CONFIG_HW_WATCHDOG
	/* release osc1 watchdog timer 0 from reset */
	reset_deassert_osc1wd0();

	/* reconfigure and enable the watchdog */
	hw_watchdog_init();
	WATCHDOG_RESET();
#endif /* CONFIG_HW_WATCHDOG */

#ifdef CONFIG_OF_CONTROL
	/* We need to access to FDT as this stage */
	memset((void *)gd, 0, sizeof(gd_t));
	/* FDT is at end of image */
	gd->fdt_blob = (void *)(_end);
	/* Check whether we have a valid FDT or not. */
	if (fdtdec_prepare_fdt()) {
		panic("** CONFIG_OF_CONTROL defined but no FDT - please see "
			"doc/README.fdt-control");
	}
#endif /* CONFIG_OF_CONTROL */

	/* assert reset to all except L4WD0 and L4TIMER0 */
	reset_assert_all_peripherals_except_l4wd0_l4timer0();

	/* Initialize the timer */
	timer_init();

	/* configuring the clock based on handoff */
	cm_basic_init(gd->fdt_blob);
	WATCHDOG_RESET();

	config_dedicated_pins(gd->fdt_blob);
	WATCHDOG_RESET();

	/* configure the Reset Manager */
	reset_deassert_dedicated_peripherals();

	if (is_external_fpga_config(gd->fdt_blob)) {
		while (!is_fpgamgr_user_mode())
			;

		config_shared_fpga_pins(gd->fdt_blob);
		reset_deassert_shared_connected_peripherals();
		reset_deassert_fpga_connected_peripherals();
	}
}

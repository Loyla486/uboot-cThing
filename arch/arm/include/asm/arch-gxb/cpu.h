
/*
 * arch/arm/include/asm/arch-gxb/cpu.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef _CPU_H
#define _CPU_H
//#include <config.h>
//#include <asm/plat-cpu.h>
//#include <asm/arch/ddr.h>

#define CONFIG_AML_MESON 1
#define CONFIG_AML_MESON_GX 1

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN		(8*1024*1024)

/* dram */
#define PHYS_SDRAM_1_BASE			0x00000000UL
#define PHYS_SDRAM_1_SIZE			(CONFIG_DDR_SIZE << 20)
#define CONFIG_SYS_SDRAM_BASE		PHYS_SDRAM_1_BASE
#define CONFIG_SYS_INIT_SP_ADDR		(0x20000000)

#define CONFIG_SYS_TEXT_BASE		0x01000000 /*16MB*/
#define CONFIG_SYS_LOAD_ADDR		(PHYS_SDRAM_1_BASE + CONFIG_SYS_TEXT_BASE)

#if (CONFIG_PXP_EMULATOR)
#warning "pxpxppxpxpppppppppppppppppppppppppppppppppppppppppppppppp"
#endif

#define PXP_EMULATOR				CONFIG_PXP_EMULATOR

/* ? */
#define CONFIG_SYS_CBSIZE		512
#define CONFIG_SYS_PROMPT		SYS_PROMPT
#define CONFIG_SYS_PBSIZE		(CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)

/* Generic Timer Definitions */
#define COUNTER_FREQUENCY		(0x1800000)	/* 24MHz */

#endif /* _CPU_H */
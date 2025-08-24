// include/configs/genesys2.h
#ifndef __CONFIG_GENESYS2_H
#define __CONFIG_GENESYS2_H

/* Timer configuration - matches device tree timebase-frequency */
#define RISCV_SMODE_TIMER_FREQ         50000

/* U-Boot base & load addr */
#define CONFIG_SYS_TEXT_BASE        0x80200000
#define CONFIG_SYS_LOAD_ADDR        0x80400000

/* Initial RAM (fake SRAM in DDR) */
#define CONFIG_SYS_INIT_RAM_ADDR    0x80000000
#define CONFIG_SYS_INIT_RAM_SIZE    0x00020000

// 修正 stack 地址，確保不會與 U-Boot 本身衝突
// U-Boot 載入在 0x80200000，往下保留空間給 early malloc 和 stack
#define CONFIG_SYS_INIT_SP_ADDR     (CONFIG_SYS_INIT_RAM_ADDR + CONFIG_SYS_INIT_RAM_SIZE - 0x1000)

/* DDR memory */
#define CONFIG_SYS_SDRAM_BASE       0x80000000
#define CONFIG_SYS_SDRAM_SIZE       0x40000000   /* 1GB DDR */

/* UART */
#define CONFIG_BAUDRATE             115200

#endif /* __CONFIG_GENESYS2_H */

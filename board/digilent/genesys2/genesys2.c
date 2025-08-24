// board/genesys2/genesys2.c

#include <init.h>
#include <asm/global_data.h>
DECLARE_GLOBAL_DATA_PTR;

/*
 * Initialize DRAM size.
 * Replace 0x40000000 with the actual DDR size from your FPGA SoC.
 * (e.g., 1 GiB = 0x40000000, 512 MiB = 0x20000000)
 */

/*
 * Early board-specific init.
 * Add peripheral init (GPIO, clocks, etc.) here if needed.
 */
int board_init(void)
{
    return 0;
}

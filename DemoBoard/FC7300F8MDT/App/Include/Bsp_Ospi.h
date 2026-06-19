#ifndef _BSP_OSPI_H_
#define _BSP_OSPI_H_

#include "Bsp_McalHeader.h"

#define WRITE_LUT_IDX  1
#define READ_LUT_IDX   2

#define WRITE_OPCODE   0x20
#define READ_OPCODE    0xA0
#define ADDR_BIT_NUM   0x18
#define CADDR_BIT_NUM  0x10

#define DUMMY_CYCLE    0xB

#define CMD_SIZE       0x40

#define OSPI0_MEMMAP_BASE_ADDR 0x68000000
#define OSPI0_MEMMAP_TOP_ADDR 0x6A000000

void Bsp_Ospi_Init(void);
void Bsp_HyperRam_CmdSet(void);
void Bsp_HyperRam_Test(void);
void Bsp_HyperRam_Dma_Test(void);

#endif /* _BSP_OSPI_H_ */

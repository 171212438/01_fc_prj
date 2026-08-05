#include "Bsp_InterruptManager.h"

void BSP_SetInterrupt(uint8 u8Core, uint32 u32IrqNum)
{
  if (0U == u8Core) {
    // core 0 interrupt
    *((uint32 *)(0x40072200 + u32IrqNum * 4)) = 1U << 24;
  } else if (1U == u8Core) {
    // core 1 interrupt
    *((uint32 *)(0x40072200 + u32IrqNum * 4)) = 1U << 25;
  }
  if (2U == u8Core) {
    // core 2 interrupt
    *((uint32 *)(0x40072200 + u32IrqNum * 4)) = 1U << 26;
  } else {
  }
}

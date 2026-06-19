#ifndef INCLUDE_EVB_MB_H_
#define INCLUDE_EVB_MB_H_
#include "flexcore_system.h"
#include "fc7xxx_driver_mb.h"

void Bsp_MB_Init(void);
void Bsp_MB_Receive(uint32_t *pData0, uint32_t *pData1);
void Bsp_MB_Done(void);
void Bsp_MB_Send(uint32_t u32Data0, uint32_t u32Data1);
void Bsp_MB_WaitDone(void);
#endif /* INCLUDE_EVB_MB_H */

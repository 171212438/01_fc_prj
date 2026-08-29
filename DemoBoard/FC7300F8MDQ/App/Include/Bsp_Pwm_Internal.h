#ifndef BSP_PWM_INTERNAL_H
#define BSP_PWM_INTERNAL_H

#include "Bsp_Dwt.h"
#include "Bsp_Pwm.h"

typedef struct {
  boolean bInitOk;
  uint32 u32OverheadCycles;
  uint32 u32RawCycles;
  uint32 u32NetCycles;
  uint32 u32MaxNetCycles;
  uint64 u64ElapsedNanoseconds;
  uint32 u32SampleCount;
} Bsp_PwmWave_IrqDwtResultType;

/* Module-private lifecycle latch shared by the BSP integration and hardware
 * engine. It is set before Emergency hardware access and is never cleared. */
extern volatile boolean Bsp_PwmWave_gbEmergencyLatched;

/* Temporary DWT test instrumentation. The measured caller resets this value,
 * and every IRQ172 handler entry increments it before inspecting the source. */
extern volatile uint32 Bsp_PwmWave_gu32Irq172MeasureCount;
extern volatile Bsp_PwmWave_IrqDwtResultType g_tDwtIrq172Result;

Bsp_PwmWave_ResultType Bsp_PwmWave_InitInternal(void);
Bsp_PwmWave_ResultType Bsp_PwmWave_ConfirmArmedLowInternal(void);

/* EB PWM notification target. It must remain externally visible even though
 * it is not part of the application-facing BSP API. */
void Bsp_PwmWave_CarrierBoundaryNotification(void);

#endif /* BSP_PWM_INTERNAL_H */

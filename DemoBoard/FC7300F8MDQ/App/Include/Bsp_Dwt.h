#ifndef BSP_DWT_H
#define BSP_DWT_H

#include "StdRegMacros.h"
#include "Std_Types.h"

#define BSP_DWT_CYCCNT_ADDRESS (0xE0001004U)

#if defined(_GCC_C_FC7XXX_) || defined(_LLVM_C_FC7XXX_)
  #define BSP_DWT_COMPILER_BARRIER()    __asm volatile("" : : : "memory")
  #define BSP_DWT_MEASUREMENT_BARRIER() __asm volatile("dsb\n\tisb" : : : "memory")
#else
  #define BSP_DWT_COMPILER_BARRIER()    __asm volatile("dsb")
  #define BSP_DWT_MEASUREMENT_BARRIER() \
    do {                                \
      __asm volatile("dsb");            \
      __asm volatile("isb");            \
    } while (0)
#endif

/* Call after the current core clock is initialized. The counter is private to each core. */
boolean Bsp_Dwt_Init(void);
/* Call before a debug reset when CYCCNT has been enabled. */
void Bsp_Dwt_DeInit(void);
uint32 Bsp_Dwt_CalibrateOverheadCycles(void);
uint64 Bsp_Dwt_CyclesToNanoseconds(uint32 u32Cycles, uint32 u32CoreClockHz);

LOCAL_INLINE uint32 Bsp_Dwt_MeasureStart(void)
{
  uint32 u32StartCycles;

  BSP_DWT_MEASUREMENT_BARRIER();
  u32StartCycles = REG_READ32(BSP_DWT_CYCCNT_ADDRESS);
  BSP_DWT_COMPILER_BARRIER();

  return u32StartCycles;
}

LOCAL_INLINE uint32 Bsp_Dwt_MeasureElapsedCycles(uint32 u32StartCycles)
{
  uint32 u32EndCycles;

  BSP_DWT_COMPILER_BARRIER();
  BSP_DWT_MEASUREMENT_BARRIER();
  u32EndCycles = REG_READ32(BSP_DWT_CYCCNT_ADDRESS);
  BSP_DWT_COMPILER_BARRIER();

  return (uint32)(u32EndCycles - u32StartCycles);
}

#endif /* BSP_DWT_H */

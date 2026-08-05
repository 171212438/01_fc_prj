#include "Bsp_Dwt.h"

#define BSP_DWT_CTRL_ADDRESS        (0xE0001000U)
#define BSP_DWT_DEMCR_ADDRESS       (0xE000EDFCU)
#define BSP_DWT_DEMCR_TRCENA_MASK   (1UL << 24U)
#define BSP_DWT_CTRL_NOCYCCNT_MASK  (1UL << 25U)
#define BSP_DWT_CTRL_CYCCNTENA_MASK (1UL << 0U)
#define BSP_DWT_OVERHEAD_SAMPLES    (16U)

boolean Bsp_Dwt_Init(void)
{
  uint32 u32DwtCtrl;
  uint32 u32StartCycles;

  REG_BIT_SET32(BSP_DWT_DEMCR_ADDRESS, BSP_DWT_DEMCR_TRCENA_MASK);

  u32DwtCtrl = REG_READ32(BSP_DWT_CTRL_ADDRESS);
  REG_WRITE32(BSP_DWT_CTRL_ADDRESS, u32DwtCtrl & (~BSP_DWT_CTRL_CYCCNTENA_MASK));
  if (0U != (u32DwtCtrl & BSP_DWT_CTRL_NOCYCCNT_MASK)) {
    return FALSE;
  }

  REG_WRITE32(BSP_DWT_CYCCNT_ADDRESS, 0U);
  REG_BIT_SET32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);
  if (0U == (REG_READ32(BSP_DWT_CTRL_ADDRESS) & BSP_DWT_CTRL_CYCCNTENA_MASK)) {
    return FALSE;
  }

  u32StartCycles = Bsp_Dwt_MeasureStart();
  if (0U == Bsp_Dwt_MeasureElapsedCycles(u32StartCycles)) {
    REG_BIT_CLEAR32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);
    return FALSE;
  }

  return TRUE;
}

void Bsp_Dwt_DeInit(void)
{
  if (0U != (REG_READ32(BSP_DWT_DEMCR_ADDRESS) & BSP_DWT_DEMCR_TRCENA_MASK)) {
    REG_BIT_CLEAR32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);
  }
}

uint32 Bsp_Dwt_CalibrateOverheadCycles(void)
{
  uint32 u32MinimumCycles = 0xFFFFFFFFU;
  uint32 u32StartCycles;
  uint32 u32ElapsedCycles;
  uint8 u8Sample;

  for (u8Sample = 0U; u8Sample < BSP_DWT_OVERHEAD_SAMPLES; u8Sample++) {
    u32StartCycles = Bsp_Dwt_MeasureStart();
    u32ElapsedCycles = Bsp_Dwt_MeasureElapsedCycles(u32StartCycles);
    if (u32ElapsedCycles < u32MinimumCycles) {
      u32MinimumCycles = u32ElapsedCycles;
    }
  }

  return u32MinimumCycles;
}

uint64 Bsp_Dwt_CyclesToNanoseconds(uint32 u32Cycles, uint32 u32CoreClockHz)
{
  uint64 u64Nanoseconds;

  if (0U == u32CoreClockHz) {
    return 0ULL;
  }

  u64Nanoseconds = (((uint64)u32Cycles * 1000000000ULL) + ((uint64)u32CoreClockHz / 2ULL)) / (uint64)u32CoreClockHz;
  return u64Nanoseconds;
}

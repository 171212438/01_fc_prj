/**
*   @file    system_init.c
*   @version 1.2.0
*
*   @brief   System initialization file
*   @details This file does some basic initialization when system starts
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : N/A
*   AUTOSAR REVISION     : N/A
*   SOFTWARE VERSION     : 1.2.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Platform_Types.h"
#include "StdRegMacros.h"
#include "Cpm_Reg.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* Core related addresses and offsets */
#define DWT_CYCCNT_ADDR                             0xE0001004U
#define DEMCR_ADDR                                  0xE000EDFCU
#define CPACR_ADDR                                  0xE000ED88U
#define SCB_VTOR_ADDR                               0xE000ED08U

#define DEMCR_TRCENA                                (1 << 24)  /* Bit 24: Global enable for all DWT and ITM features */

#define CPACR_CP10_FULL_ACCESS                      (0x3 << 20)
#define CPACR_CP11_FULL_ACCESS                      (0x3 << 22)

/* WDOG addresses and offsets */
#define WDOG0_BASE_ADDR                             0x40022000U
#define WDOG1_BASE_ADDR                             0x40433000U
#define WDOG2_BASE_ADDR                             0x40434000U
#define WDOG3_BASE_ADDR                             0x40435000U

#define WDOG_CS_OFFSET                              0x0000  /* Watchdog Control and Status Register */
#define WDOG_COUNTER_OFFSET                         0x0004  /* Watchdog Counter Register */
#define WDOG_TIMEOUT_OFFSET                         0x0008  /* Watchdog Timeout Value Register */
#define WDOG_WINDOW_OFFSET                          0x000c  /* Watchdog Window Register */

#define WDOG_CS_UPDATE                              (1 << 5)  /* Bit 5:  Allow updates */
#define WDOG_CS_CLK_SEL_SHIFT                       (8)       /* Bits 8-9: Watchdog Clock */
#define WDOG_CS_CLK_SEL_MASK                        (3 << WDOG_CS_CLK_SEL_SHIFT)
#define WDOG_CS_CLK_SEL_BUS_CLK                     (0 << WDOG_CS_CLK_SEL_SHIFT) /* Bus clock */
#define WDOG_CS_CLK_SEL_AON_CLK                     (1 << WDOG_CS_CLK_SEL_SHIFT) /* AON clock */
#define WDOG_CS_CLK_SEL_SOSC_CLK                    (2 << WDOG_CS_CLK_SEL_SHIFT) /* SOSC clock */
#define WDOG_CS_CLK_SEL_SIRC_CLK                    (3 << WDOG_CS_CLK_SEL_SHIFT) /* SIRC clock */
#define WDOG_CS_RECFG_STAT                          (1 << 10) /* Bit 10: Reconfiguration Success */
#define WDOG_CS_ULK_STAT                            (1 << 11) /* Bit 11: Unlock status */
#define WDOG_CS_PRESCALER_SHIFT                     (12)      /* Bit 12: Watchdog 256 prescale enable/disable */
#define WDOG_CS_PRESCALER_MASK                      (1 << WDOG_CS_PRESCALER_SHIFT)
#define WDOG_CS_PRESCALER_ENABLE                    (1 << WDOG_CS_PRESCALER_SHIFT) /* Bit 12: Watchdog prescalr */

#define WDOG_COUNTER_UNLOCK                         0x08181982  /* Value to unlock the watchdog registers */

#define WDOG_CS_DISABLE_WDOG                        (WDOG_CS_UPDATE           | WDOG_CS_CLK_SEL_AON_CLK | \
                                                     WDOG_CS_PRESCALER_ENABLE | WDOG_CS_ULK_STAT)

/* Compiler related FPU macros */
#define __FPU_PRESENT           1U

/* KEIL with armcc or armclang */
#if defined(__CC_ARM) || (defined(__ARMCC_VERSION) && __ARMCC_VERSION >= 6000000)
  #if defined(__ARM_PCS_VFP)
    #define __FPU_USED          1U
  #else
    #define __FPU_USED          0U
  #endif
/* IAR */
#elif defined(__ICCARM__)
  #if defined(__ARMVFP__)
    #define __FPU_USED          1U
  #else
    #define __FPU_USED          0U
  #endif
/* Greenhills */
#elif defined(__ghs__)
  #if defined(__VFP__)
    #define __FPU_USED          1U
  #else
    #define __FPU_USED          0U
  #endif
/* Tasking */
#elif defined(__TASKING__)
  #if defined(__FPU_VFP__)
    #define __FPU_USED          1U
  #else
    #define __FPU_USED          0U
  #endif
/* Gcc or LLVM */
#elif defined(__GNUC__)
  #if defined(__ARM_FP)
    #define __FPU_USED          1U
  #else
    #define __FPU_USED          0U
  #endif
#else
  #error "The compiler is not supported"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#if defined(__GNUC__) || defined(__ghs__)
    extern uint32 __ram_intvec_start[];
    extern uint32 __ram_intvec_end[];
    extern uint32 __rom_intvec_start[];
    extern uint32 __ram_itcm_func_start[];
    extern uint32 __ram_itcm_func_end[];
    extern uint32 __rom_itcm_func_start[];
    extern uint32 __ram_data_start[];
    extern uint32 __ram_data_end[];
    extern uint32 __rom_data_start[];
    extern uint32 __ram_seperated_data_start[];
    extern uint32 __ram_seperated_data_end[];
    extern uint32 __rom_seperated_data_start[];
    extern uint32 __ram_nocachable_data_start[];
    extern uint32 __ram_nocachable_data_end[];
    extern uint32 __rom_nocachable_data_start[];
    extern uint32 __ram_shareable_data_start[];
    extern uint32 __ram_shareable_data_end[];
    extern uint32 __rom_shareable_data_start[];
    extern uint32 __bss_start[];
    extern uint32 __bss_end[];
    extern uint32 __seperated_bss_start[];
    extern uint32 __seperated_bss_end[];
    extern uint32 __nocachable_bss_start[];
    extern uint32 __nocachable_bss_end[];
    extern uint32 __rtt_buffer_bss_start[];
    extern uint32 __rtt_buffer_bss_end[];
    extern uint32 __shareable_bss_start[];
    extern uint32 __shareable_bss_end[];
#elif defined(__ICCARM__)
    #pragma section = "RAM_VECTOR"
    #pragma section = "ISR_VECTOR"
    #pragma section = "ITCM_FUNC"
    #pragma section = "ITCM_FUNC_INIT"
    #pragma section = "DATA"
    #pragma section = "DATA_INIT"
    #pragma section = "DATA_SEPERATED"
    #pragma section = "DATA_SEPERATED_INIT"
    #pragma section = "DATA_NOCACHEABLE"
    #pragma section = "DATA_NOCACHEABLE_INIT"
    #pragma section = "DATA_SHAREABLE"
    #pragma section = "DATA_SHAREABLE_INIT"
    #pragma section = "BSS"
    #pragma section = "BSS_SEPERATED"
    #pragma section = "BSS_NOCACHEABLE"
    #pragma section = "BSS_RTT_BUFFER"
    #pragma section = "BSS_SHAREABLE"

    #define __ram_intvec_start           (__section_begin("RAM_VECTOR"))
    #define __ram_intvec_end             (__section_end("RAM_VECTOR"))
    #define __rom_intvec_start           (__section_begin("ISR_VECTOR"))
    #define __ram_itcm_func_start        (__section_begin("ITCM_FUNC"))
    #define __ram_itcm_func_end          (__section_end("ITCM_FUNC"))
    #define __rom_itcm_func_start        (__section_begin("ITCM_FUNC_INIT"))
    #define __ram_data_start             (__section_begin("DATA"))
    #define __ram_data_end               (__section_end("DATA"))
    #define __rom_data_start             (__section_begin("DATA_INIT"))
    #define __ram_seperated_data_start   (__section_begin("DATA_SEPERATED"))
    #define __ram_seperated_data_end     (__section_end("DATA_SEPERATED"))
    #define __rom_seperated_data_start   (__section_begin("DATA_SEPERATED_INIT"))
    #define __ram_nocachable_data_start  (__section_begin("DATA_NOCACHEABLE"))
    #define __ram_nocachable_data_end    (__section_end("DATA_NOCACHEABLE"))
    #define __rom_nocachable_data_start  (__section_begin("DATA_NOCACHEABLE_INIT"))
    #define __ram_shareable_data_start   (__section_begin("DATA_SHAREABLE"))
    #define __ram_shareable_data_end     (__section_end("DATA_SHAREABLE"))
    #define __rom_shareable_data_start   (__section_begin("DATA_SHAREABLE_INIT"))
    #define __bss_start                  (__section_begin("BSS"))
    #define __bss_end                    (__section_end("BSS"))
    #define __seperated_bss_start        (__section_begin("BSS_SEPERATED"))
    #define __seperated_bss_end          (__section_end("BSS_SEPERATED"))
    #define __nocachable_bss_start       (__section_begin("BSS_NOCACHEABLE"))
    #define __nocachable_bss_end         (__section_end("BSS_NOCACHEABLE"))
    #define __rtt_buffer_bss_start       (__section_begin("BSS_RTT_BUFFER"))
    #define __rtt_buffer_bss_end         (__section_end("BSS_RTT_BUFFER"))
    #define __shareable_bss_start        (__section_begin("BSS_SHAREABLE"))
    #define __shareable_bss_end          (__section_end("BSS_SHAREABLE"))
#endif

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
extern void data_init(void);
extern void system_init(void);
extern int main(void);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
static void data_clear(uint32 *pHead, uint32 *pTail)
{
    while (pHead < pTail)
    {
        *pHead = 0U;
        pHead++;
    }
}

static void data_copy(uint32 *pHead, uint32 *pTail, uint32 *pSrc)
{
  while (pHead < pTail) {
    *pHead = *pSrc;
    pHead++;
    pSrc++;
  }
}

static void wdog_disable(uint32 wdog_base)
{
    uint32 try_cnt = 128u;

    /* If it is not the first time to configure wdog, unlock status will only
       persist for 128 bus clocks. */
    while (try_cnt != 0)
    {
        if ((REG_READ32(wdog_base + WDOG_CS_OFFSET) & WDOG_CS_ULK_STAT) == 0)
        {
            break;
        }
        try_cnt--;
    }

    /* If ULK_STAT turns into 0 in 128 try counts, it means this is not the
       first time to configure the wdog. */
    if (try_cnt != 0)
    {
        /* When ULK_STAT = 0, the wdog can only be unlocked when RECFG_STAT
           becomes 1. */
        while ((REG_READ32(wdog_base + WDOG_CS_OFFSET) & WDOG_CS_RECFG_STAT) == 0);

        /* Unlock the wdog.
           Note: The unlock status only persist for 128 bus clocks, you shall
           not use single-step or break points in the following few lines.  */
        REG_WRITE32(wdog_base + WDOG_COUNTER_OFFSET, WDOG_COUNTER_UNLOCK);

        /* Wait until the unlock take effect. */
        while ((REG_READ32(wdog_base + WDOG_CS_OFFSET) & WDOG_CS_ULK_STAT) == 0);
    }

    /* Disable Watchdog */
    REG_WRITE32(wdog_base + WDOG_CS_OFFSET, WDOG_CS_DISABLE_WDOG);

    /* Configure timeout to the maximum. */
    REG_WRITE32(wdog_base + WDOG_TIMEOUT_OFFSET, 0xFFFFu);

    /* Wait the RECFG_STAT to become 1. */
    while ((REG_READ32(wdog_base + WDOG_CS_OFFSET) & WDOG_CS_RECFG_STAT) == 0);
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
void data_init(void)
{
  /* core 0 */
  if (0U == Cpm_HWA_GetCoreId()) {
    /* bss */
    data_clear(__bss_start, __bss_end);
    /* non-cached bss */
    data_clear(__nocachable_bss_start, __nocachable_bss_end);
    /* rtt buffer */
    data_clear(__rtt_buffer_bss_start, __rtt_buffer_bss_end);
    /* shared bss */
    data_clear(__shareable_bss_start, __shareable_bss_end);
    /* data */
    data_copy(__ram_data_start, __ram_data_end, __rom_data_start);
    /* non-cached data */
    data_copy(__ram_nocachable_data_start, __ram_nocachable_data_end, __rom_nocachable_data_start);
    /* shared data */
    data_copy(__ram_shareable_data_start, __ram_shareable_data_end, __rom_shareable_data_start);
  }
  /* core 1 */
  else if (1U == Cpm_HWA_GetCoreId()) {
#if defined DATA_IN_DTCM
    /* bss */
    data_clear(__bss_start, __bss_end);
    /* data */
    data_copy(__ram_data_start, __ram_data_end, __rom_data_start);
#endif
  }
  /* core 2 */
  else if (2U == Cpm_HWA_GetCoreId()) {
#if defined DATA_IN_DTCM
    /* bss */
    data_clear(__bss_start, __bss_end);
    /* data */
    data_copy(__ram_data_start, __ram_data_end, __rom_data_start);
#endif
  }

  data_clear(__seperated_bss_start, __seperated_bss_end);

  data_copy(__ram_seperated_data_start, __ram_seperated_data_end, __rom_seperated_data_start);

  /* RAM function */
  data_copy(__ram_itcm_func_start, __ram_itcm_func_end, __rom_itcm_func_start);

  /* RAM vector table */
  data_copy(__ram_intvec_start, __ram_intvec_end, __rom_intvec_start);

  /* Set VTOR */
  REG_WRITE32(SCB_VTOR_ADDR, (uint32)__ram_intvec_start);
}

__attribute__((noreturn)) void system_init(void)
{
  uint32 u32CoreId;

  /* Workaround for erratum ERR_Debug_001 */
  /* clear dwt counter to handle cpu0 lockstep error under debug */
  REG_WRITE32(DEMCR_ADDR, DEMCR_TRCENA); /* Enable DWT and ITM features */
  REG_WRITE32(DWT_CYCCNT_ADDR, 0U);      /* Clear DWT_CYCCNT */

  /* Enable FPU when FPU is used in compiler */
#if ((__FPU_PRESENT == 1) && (__FPU_USED == 1))
  /* set CP10, CP11 Full Access */
  REG_WRITE32(CPACR_ADDR, CPACR_CP10_FULL_ACCESS | CPACR_CP11_FULL_ACCESS);
#endif /* ((__FPU_PRESENT == 1) && (__FPU_USED == 1)) */

  u32CoreId = Cpm_HWA_GetCoreId();
  if (0U == u32CoreId) {
    /* Core0 RAM initialization and ECC enable are handled in Reset_Handler before the C stack is used. */

    /* disable wdog 0 */
    wdog_disable(WDOG0_BASE_ADDR);
  } else if (1U == u32CoreId) {
    /* disable wdog 1 */
    wdog_disable(WDOG1_BASE_ADDR);
  } else if (2U == u32CoreId) {
    /* disable wdog 2 */
    wdog_disable(WDOG2_BASE_ADDR);
  } else if (3U == u32CoreId) {
    /* disable wdog 3 */
    wdog_disable(WDOG3_BASE_ADDR);
  } else {
    /* This shall never be reached */
  }

  /* Initialize data */
  data_init();

  /* Enable global interrupt */
  __asm volatile("cpsie i");

  /* Call main function */
  main();

  /* Infinite loop */
  for (;;) {
  }
}

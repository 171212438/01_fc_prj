/**
*   @file    Mcu_Cm7_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Cm7 header file.
*   @details Mcu Cm7 low level driver API.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
/* PRQA S 3440 EOF #Misra-C:2012 Rule-13.3 This in-line assembler construct is a language extension. The code has been ignored.
 * REASON: CMSIS Level 1 Cache API for Armv7-M. */
#ifndef MCU_CM7_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CM7_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_CM7_Regs.h"
#include "Mcal.h"

#define FC7XXX_SCB_CCSIDR_WAYS(x)         (((x) & FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_MASK) >> FC7XXX_SCB_CCSIDR_ASSOCIATIVITY_SHIFT)
#define FC7XXX_SCB_CCSIDR_SETS(x)         (((x) & FC7XXX_SCB_CCSIDR_NUMSETS_MASK) >> FC7XXX_SCB_CCSIDR_NUMSETS_SHIFT)

/**
 * @brief Enable deepsleep mode
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void CM7_HWA_EnableDeepSleep(FC7XXX_SCB_Type *pScbReg)
{
    pScbReg->SCR |= (uint32)FC7XXX_SCB_SCR_SLEEPDEEP_MASK;
}

/**
 * @brief Disable deepsleep mode
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void CM7_HWA_DisableDeepSleep(FC7XXX_SCB_Type *pScbReg)
{
    pScbReg->SCR &= ~(uint32)FC7XXX_SCB_SCR_SLEEPDEEP_MASK;
}

/**
 * @brief Perform system reset.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void CM7_HWA_SystemReset(FC7XXX_SCB_Type *pScbReg)
{
    uint32 u32Temp;

    MCAL_DATA_SYNC_BARRIER();
    u32Temp = pScbReg->AIRCR;
    u32Temp &= ~(uint32)(FC7XXX_SCB_AIRCR_VECTKEY_MASK);
    u32Temp |= (uint32)(FC7XXX_SCB_AIRCR_VECTKEY(0x5FAU) | FC7XXX_SCB_AIRCR_SYSRESETREQ_MASK | FC7XXX_SCB_AIRCR_PRIGROUP_MASK);
    pScbReg->AIRCR = u32Temp;
    MCAL_DATA_SYNC_BARRIER();
}

/**
 * @brief Get whether the Instruction Cache is enabled.
 *
 * @param[in] pScbReg SCB handler
 * @return TRUE Instruction Cache is enabled,FALSE Instruction Cache is not enabled.
 */
LOCAL_INLINE boolean SCB_HWA_ICacheEnabled (const FC7XXX_SCB_Type *pScbReg)
{
    return ((pScbReg->CCR & FC7XXX_SCB_CCR_IC_MASK) == FC7XXX_SCB_CCR_IC_MASK) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Enable the Instruction Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_EnableICache (FC7XXX_SCB_Type *pScbReg)
{
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
    pScbReg->ICIALLU = 0UL;                     /* invalidate I-Cache */
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
    pScbReg->CCR |=  (uint32)FC7XXX_SCB_CCR_IC_MASK;  /* enable I-Cache */
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Disable the Instruction Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_DisableICache (FC7XXX_SCB_Type *pScbReg)
{
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
    pScbReg->CCR &= ~(uint32)FC7XXX_SCB_CCR_IC_MASK;  /* disable I-Cache */
    pScbReg->ICIALLU = 0UL;                     /* invalidate I-Cache */
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Invalidate the Instruction Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_InvalidateICache (FC7XXX_SCB_Type *pScbReg)
{
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
    pScbReg->ICIALLU = 0UL;
    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Get whether the Data Cache is enabled.
 *
 * @param[in] pScbReg SCB handler
 * @return TRUE Data Cache is enabled,FALSE Data Cache is not enabled.
 */
LOCAL_INLINE boolean SCB_HWA_DCacheEnabled (const FC7XXX_SCB_Type *pScbReg)
{
    return ((pScbReg->CCR & FC7XXX_SCB_CCR_DC_MASK) == FC7XXX_SCB_CCR_DC_MASK) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Enable the Data Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_EnableDCache (FC7XXX_SCB_Type *pScbReg)
{
    uint32 ccsidr;
    uint32 sets;
    uint32 ways;

    pScbReg->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    MCAL_DATA_SYNC_BARRIER();

    ccsidr = pScbReg->CCSIDR;

    /* invalidate D-Cache */
    sets = (uint32)(FC7XXX_SCB_CCSIDR_SETS(ccsidr));
    do {
        ways = (uint32)(FC7XXX_SCB_CCSIDR_WAYS(ccsidr));
        do {
            pScbReg->DCISW = (FC7XXX_SCB_DCISW_SET(sets) |
                                 FC7XXX_SCB_DCISW_WAY(ways));
#if defined ( __CC_ARM )
            __schedule_barrier();
#endif
        } while (ways-- != 0U);
    } while(sets-- != 0U);
    MCAL_DATA_SYNC_BARRIER();

    pScbReg->CCR |=  (uint32)FC7XXX_SCB_CCR_DC_MASK;  /* enable D-Cache */

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Disable the Data Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_DisableDCache (FC7XXX_SCB_Type *pScbReg)
{
    uint32 ccsidr;
    uint32 sets;
    uint32 ways;

    pScbReg->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    MCAL_DATA_SYNC_BARRIER();

    pScbReg->CCR &= ~(uint32)FC7XXX_SCB_CCR_DC_MASK;  /* disable D-Cache */
    MCAL_DATA_SYNC_BARRIER();

    ccsidr = pScbReg->CCSIDR;

    /* clean & invalidate D-Cache */
    sets = (uint32)(FC7XXX_SCB_CCSIDR_SETS(ccsidr));
    do {
        ways = (uint32)(FC7XXX_SCB_CCSIDR_WAYS(ccsidr));
        do {
            pScbReg->DCCISW = (FC7XXX_SCB_DCCISW_SET(sets) |
                                  FC7XXX_SCB_DCCISW_WAY(ways));
#if defined ( __CC_ARM )
            __schedule_barrier();
#endif
        } while (ways-- != 0U);
    } while(sets-- != 0U);

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Invalidate the Data Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_InvalidateDCache (FC7XXX_SCB_Type *pScbReg)
{
    uint32 ccsidr;
    uint32 sets;
    uint32 ways;

    pScbReg->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    MCAL_DATA_SYNC_BARRIER();

    ccsidr = pScbReg->CCSIDR;

    /* invalidate D-Cache */
    sets = (uint32)(FC7XXX_SCB_CCSIDR_SETS(ccsidr));
    do {
        ways = (uint32)(FC7XXX_SCB_CCSIDR_WAYS(ccsidr));
        do {
            pScbReg->DCISW = (FC7XXX_SCB_DCISW_SET(sets) |
                                 FC7XXX_SCB_DCISW_WAY(ways));
#if defined ( __CC_ARM )
            __schedule_barrier();
#endif
        } while (ways-- != 0U);
    } while(sets-- != 0U);

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Clean the Data Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_CleanDCache (FC7XXX_SCB_Type *pScbReg)
{
    uint32 ccsidr;
    uint32 sets;
    uint32 ways;

    pScbReg->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    MCAL_DATA_SYNC_BARRIER();

    ccsidr = pScbReg->CCSIDR;

    /* clean D-Cache */
    sets = (uint32)(FC7XXX_SCB_CCSIDR_SETS(ccsidr));
    do {
        ways = (uint32)(FC7XXX_SCB_CCSIDR_WAYS(ccsidr));
      do {
          pScbReg->DCCSW = (FC7XXX_SCB_DCCSW_SET(sets) |
                               FC7XXX_SCB_DCCSW_WAY(ways));
#if defined ( __CC_ARM )
            __schedule_barrier();
#endif
        } while (ways-- != 0U);
    } while(sets-- != 0U);

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Clean and invalidate the Data Cache.
 *
 * @param[in] pScbReg SCB handler
 */
LOCAL_INLINE void SCB_HWA_CleanInvalidateDCache (FC7XXX_SCB_Type *pScbReg)
{
    uint32 ccsidr;
    uint32 sets;
    uint32 ways;

    pScbReg->CSSELR = 0U; /*(0U << 1U) | 0U;*/  /* Level 1 data cache */
    MCAL_DATA_SYNC_BARRIER();

    ccsidr = pScbReg->CCSIDR;

    /* clean & invalidate D-Cache */
    sets = (uint32)(FC7XXX_SCB_CCSIDR_SETS(ccsidr));
    do {
        ways = (uint32)(FC7XXX_SCB_CCSIDR_WAYS(ccsidr));
        do {
            pScbReg->DCCISW = (FC7XXX_SCB_DCCISW_SET(sets) |
                                  FC7XXX_SCB_DCCISW_WAY(ways));
#if defined ( __CC_ARM )
          __schedule_barrier();
#endif
        } while (ways-- != 0U);
    } while(sets-- != 0U);

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Invalidate the Data Cache by address.
 *
 * @param[in] pScbReg SCB handler
 * @param[in] addr The address that to invalidate the data cache.
 * @param[in] dsize The size of memory that to invalidate the data cache.
 */
LOCAL_INLINE void SCB_HWA_InvalidateDCache_by_Addr (FC7XXX_SCB_Type *pScbReg, const uint32 *addr, sint32 dsize)
{
    sint32 op_size = dsize;
    uint32 op_addr = (uint32)addr;
    sint32 linesize = 32; /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

    MCAL_DATA_SYNC_BARRIER();

    while (op_size > 0) {
        pScbReg->DCIMVAC = op_addr;
        op_addr += (uint32)linesize;
        op_size -= linesize;
    }

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Clean the Data Cache by address.
 *
 * @param[in] pScbReg SCB handler
 * @param[in] addr The address that to clean the data cache.
 * @param[in] dsize The size of memory that to clean the data cache.
 */
LOCAL_INLINE void SCB_HWA_CleanDCache_by_Addr (FC7XXX_SCB_Type *pScbReg, const uint32 *addr, sint32 dsize)
{
    sint32 op_size = dsize;
    uint32 op_addr = (uint32) addr;
    sint32 linesize = 32; /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

    MCAL_DATA_SYNC_BARRIER();

    while (op_size > 0) {
        pScbReg->DCCMVAC = op_addr;
        op_addr += (uint32)linesize;
        op_size -= linesize;
    }

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}

/**
 * @brief Clean and invalidate the Data Cache by address.
 *
 * @param[in] pScbReg SCB handler
 * @param[in] addr The address that to clean and invalidate the data cache.
 * @param[in] dsize The size of memory that to clean and invalidate the data cache.
 */
LOCAL_INLINE void SCB_HWA_CleanInvalidateDCache_by_Addr (FC7XXX_SCB_Type *pScbReg, const uint32 *addr, sint32 dsize)
{
    sint32 op_size = dsize;
    uint32 op_addr = (uint32) addr;
    sint32 linesize = 32; /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

     MCAL_DATA_SYNC_BARRIER();

    while (op_size > 0) {
        pScbReg->DCCIMVAC = op_addr;
        op_addr += (uint32)linesize;
        op_size -= linesize;
    }

    MCAL_DATA_SYNC_BARRIER();
    MCAL_INSTRUCTION_SYNC_BARRIER();
}


#if defined(__cplusplus)
}
#endif

#endif /* #ifndef MCU_CM4_REGOPS_H */

/** @}*/


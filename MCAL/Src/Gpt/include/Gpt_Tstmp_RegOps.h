/**
*   @file    Gpt_Tstmp_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Tstmp -  Gpt header file.
*   @details GPT low level driver API.
*
*   @addtogroup GPT_Tstmp
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_Tstmp
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.5.0       30/1/2024     QXW0074       N/A          Gpt_Tstmp Initial version
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_TSTMP_REGOPS_H
#define GPT_TSTMP_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/*=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Tstmp_Reg.h"
#include "Gpt_Tstmp_Types.h"
/*=================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define SMC_TSTMP0_CLK_CFG_ADDRESS (uint32)0x40045090U
/*=================================================================================================
*                                             ENUMS
==================================================================================================*/
/** @brief Tstmp running mode */
typedef enum
{
    TSTMP_MODE_ALWAYS_RUNNING = 0U,
    TSTMP_MODE_PERIOD_RUNNING = 1U
} TSTMP_ModeCounterRunningMode;
/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief Read TSTMP value
 *
 * @param pTstmp TSTMP instance
 * @return TSTMP value
 */
LOCAL_INLINE uint64 TSTMP_HWA_ReadTstmpValue(const TSTMP_Type *pTstmp)
{
    uint32 u32TstmpL, u32TstmpH;
    uint64 u64TempValue;
    u32TstmpL = pTstmp->VALL;
    u32TstmpH = pTstmp->VALH;

    /* PRQA S 2790 ++ #Misra-C:2012 Rule-12.2 The right hand operand of a shift operator shall lie in the range zero
                       to one less than the width in bits of the essential type of the left hand operand
     * Reason: The value of the right hand operand of shift operator is legal guaranteed by actual register value*/
    u64TempValue = u32TstmpH;
    u64TempValue = (u64TempValue << 32U) + u32TstmpL;
    /* PRQA S 2790 -- */
    return u64TempValue;
}

/**
 * @brief Check TSTMP channel interrupt flag and interrupt enable
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 * @return If channel interrupt flag exist and interrupt enable ,return TRUE, else return FALSE
 */
LOCAL_INLINE boolean TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(const TSTMP_Type *pTstmp, uint8 u8Mod)
{
    return (boolean)((((((uint32)pTstmp->MOD_INTEN) & (((uint32)0x1U << u8Mod))) == (((uint32)0x1U << u8Mod))) &&
                ((((uint32)pTstmp->MOD_STATUS) & (((uint32)0x1U << u8Mod))) == (((uint32)0x1U << u8Mod)))) ? TRUE : FALSE);
}

/**
 * @brief Enable TSTMP MOD(n) match interrupt
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 */
LOCAL_INLINE void TSTMP_HWA_EnableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)
{
    pTstmp->MOD_INTEN |= ((uint32)0x1U << (uint32)u8Mod);
}

/**
 * @brief Disable TSTMP MOD(n) match interrupt
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 */
LOCAL_INLINE void TSTMP_HWA_DisableModMatchInterrupt(TSTMP_Type *pTstmp, uint8 u8Mod)
{
    pTstmp->MOD_INTEN &= ~((uint32)0x1U << (uint32)u8Mod);
}

/**
 * @brief Set the counting modes of TSTMP MOD(n)
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 * @param eCounterMode Counting mode set
 */
LOCAL_INLINE void TSTMP_HWA_SetModCounterMode(TSTMP_Type *pTstmp, uint8 u8Mod, TSTMP_ModeCounterRunningMode eCounterMode)
{
    pTstmp->MOD_INTEN = (pTstmp->MOD_INTEN & ~((uint32)0x100U << (uint32)u8Mod)) |
            (((uint32)eCounterMode << TSTMP_MOD_INTEN_MOD0_MODE_SHIFT) << (uint32)u8Mod);
}

/**
 * @brief Enable TSTMP MOD(n) counter
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 */
LOCAL_INLINE void TSTMP_HWA_EnableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)
{
    pTstmp->MOD_INTEN |= ((uint32)0x10000U << (uint32)u8Mod);
}

/**
 * @brief Disable TSTMP MOD(n) counter
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 */
LOCAL_INLINE void TSTMP_HWA_DisableModCounter(TSTMP_Type *pTstmp, uint8 u8Mod)
{
    pTstmp->MOD_INTEN &= ~((uint32)0x10000U << (uint32)u8Mod);
}

#if (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_ON)
/**
 * @brief Set Mod clock source
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 * @param eModClkSrc Clock source
 */
LOCAL_INLINE void TSTMP_HWA_SetModCounterClockSource(TSTMP_Type *pTstmp, uint8 u8Mod, Gpt_TstmpModClkType eModClkSrc)
{
    if(eModClkSrc == AON_CLK)
    {
        pTstmp->MOD_INTEN |= ((uint32)0x1000000U << (uint32)u8Mod);
    }
    else
    {
        pTstmp->MOD_INTEN &= ~((uint32)0x1000000U << (uint32)u8Mod);
    }
}
#endif /* (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_ON) */

/**
 * @brief Read TSTMP all MOD match flag
 *
 * @param pTstmp TSTMP instance
 * @return TSTMP all MOD match flag
 */
LOCAL_INLINE uint32 TSTMP_HWA_ReadModMatchFlag(const TSTMP_Type *pTstmp)
{
    return ((uint32)(pTstmp->MOD_STATUS) & (uint32)(TSTMP_MOD_STATUS_MOD0_MATCH_MASK | TSTMP_MOD_STATUS_MOD1_MATCH_MASK
                                                        | TSTMP_MOD_STATUS_MOD2_MATCH_MASK | TSTMP_MOD_STATUS_MOD3_MATCH_MASK));
}

/**
 * @brief Clear TSTMP single MOD match flag
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 */
LOCAL_INLINE void TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_Type *pTstmp, uint8 u8Mod)
{
    pTstmp->MOD_STATUS = ((uint32)0x1U << (uint32)u8Mod);
}

/**
 * @brief Set MOD match value
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 * @param u32ModValue MOD value
 */
LOCAL_INLINE void TSTMP_HWA_SetModMatchValue(TSTMP_Type *pTstmp, uint8 u8Mod, uint32 u32ModValue)
{
    pTstmp->MODn_SETVAL[u8Mod] = u32ModValue;
}

/**
 * @brief Get MOD match value
 *
 * @param pTstmp TSTMP instance
 * @param u8Mod MOD number
 * @return MOD match value
 */
LOCAL_INLINE uint32 TSTMP_HWA_GetModMatchValue(const TSTMP_Type *pTstmp, uint8 u8Mod)
{
    uint32 u32ModValue;
    u32ModValue = pTstmp->MODn_SETVAL[u8Mod];
    return u32ModValue;
}

LOCAL_INLINE uint32 TSTMP_HWA_GetSmcTstmp0CLkCfgReg(void)
{
    return *((volatile uint32*)SMC_TSTMP0_CLK_CFG_ADDRESS);
}

LOCAL_INLINE void TSTMP_HWA_SetSmcTstmp0CLkCfgReg(uint32 u32Data)
{
    *((volatile uint32*)SMC_TSTMP0_CLK_CFG_ADDRESS) = u32Data;
}

LOCAL_INLINE void TSTMP_HWA_DisableTstmp0Clk(void)
{
    *((volatile uint32*)SMC_TSTMP0_CLK_CFG_ADDRESS) &= ~(uint32)SMC_TSTMP0_CLK_CFG_EN_MASK;
}

LOCAL_INLINE void TSTMP_HWA_EnableTstmp0Clk(void)
{
    *((volatile uint32*)SMC_TSTMP0_CLK_CFG_ADDRESS) |= (uint32)SMC_TSTMP0_CLK_CFG_EN_MASK;
}

#ifdef __cplusplus
}
#endif


#endif /* #ifndef GPT_TSTMP_REGOPS_H */
/**  @}*/

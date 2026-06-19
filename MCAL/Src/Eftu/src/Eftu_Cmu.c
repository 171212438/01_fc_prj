/**
 *   @file    Eftu_Cmu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TBU driver source file.
 *   @details CMU source file, containing the variables and functions that are exported by the
 *            CMU driver.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CMU
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
*   1.0.0       15/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Cmu_Types.h"
#include "Eftu_Cmu.h"
#include "Eftu_Cmu_Reg.h"
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
LOCAL_INLINE void EFTU_CMU_HWA_SetClockEnDis(EFTU_CMU_Type *const pCmu, uint32 u32Value);
LOCAL_INLINE void EFTU_CMU_HWA_SetGclkNum(EFTU_CMU_Type *const pCmu, uint8 u8Num);
LOCAL_INLINE void EFTU_CMU_HWA_SetGclkDen(EFTU_CMU_Type *const pCmu, uint8 u8Den);
LOCAL_INLINE void EFTU_CMU_HWA_SetCmuClkSrc(EFTU_CMU_Type *const pCmu, uint32 u32Value);
LOCAL_INLINE void EFTU_CMU_HWA_SetEclkNum(EFTU_CMU_Type *const pCmu, uint8 u8EclkIdx, uint32 u32Num);
LOCAL_INLINE void EFTU_CMU_HWA_SetEclkDen(EFTU_CMU_Type *const pCmu, uint8 u8EclkIdx, uint32 u32Den);
LOCAL_INLINE void EFTU_CMU_HWA_SetCmuClkCnt(EFTU_CMU_Type *const pCmu, uint8 u8Channel, uint8 u8Cnt);
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * Set or clear the clock enable signal.
 *
 * @param pCmu Pointer to the EFTU_CMU module to access its registers.
 * @param u32Value Value to write to the CLK_EN register. Non-zero to enable, zero to disable.
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetClockEnDis(EFTU_CMU_Type *const pCmu, uint32 u32Value)
{
    /* Write the value to the CLK_EN register to enable or disable the clock */
    pCmu->CLK_EN = u32Value;
}

/**
 * Set the GCLK number for the CMU.
 *
 * @param pCmu Pointer to the CMU module base address
 * @param u8Num The GCLK number to set
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetGclkNum(EFTU_CMU_Type *const pCmu, uint8 u8Num)
{
    /* Write the GCLK number to the GCLK_NUM register */
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:  The or operation of EFTU_CMU_GCLK_NUM_GCLK_NUM(u8Num) is to configure the global
     * divide Numerator  */
    pCmu->GCLK_NUM = EFTU_CMU_GCLK_NUM_GCLK_NUM(u8Num);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set the Gclk denominator for CMU.
 *
 * @param pCmu Pointer to the CMU module base address.
 * @param u8Den The Gclk denominator value to set.
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetGclkDen(EFTU_CMU_Type *const pCmu, uint8 u8Den)
{
    /* Write the denominator value to the GCLK_DEN register */
    /* Write the GCLK number to the GCLK_NUM register */
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason:  The or operation of EFTU_CMU_GCLK_DEN_GCLK_DEN(u8Den) is to configure the global
     * divide Denominator */
    pCmu->GCLK_DEN = EFTU_CMU_GCLK_DEN_GCLK_DEN(u8Den);
    /* PRQA S 2985 -- */
}

/**
 * Set the CMU clock source.
 *
 * @param pCmu Pointer to the CMU module base address
 * @param u32Value 32-bit unsigned integer containing the clock source selection
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetCmuClkSrc(EFTU_CMU_Type *const pCmu, uint32 u32Value)
{
    /* Write the clock source selection value to the CLK_CTRL register */
    pCmu->CLK_CTRL = u32Value;
}

/**
 * Set the NUM value for a specific ECLK.
 *
 * @param pCmu Pointer to the CMU module base address.
 * @param u8EclkIdx Index of the ECLK source.
 * @param u32Num Value to be written to the NUM register.
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetEclkNum(EFTU_CMU_Type *const pCmu, uint8 u8EclkIdx, uint32 u32Num)
{
    /* Write the specified value to the NUM register of the selected ECLK source */
    pCmu->ECLK[u8EclkIdx].NUM = u32Num;
}

/**
 * Set the ECLK denominator value.
 *
 * @param pCmu Pointer to the CMU module base address
 * @param u8EclkIdx Index of the ECLK to configure
 * @param u32Den denominator value for the ECLK
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetEclkDen(EFTU_CMU_Type *const pCmu, uint8 u8EclkIdx, uint32 u32Den)
{
    /* Set the denominator value for the specified ECLK */
    pCmu->ECLK[u8EclkIdx].DEN = u32Den;
}

/**
 * Set the CMU clock count for a specific channel.
 *
 * @param pCmu Pointer to the CMU module base address
 * @param u8Channel Channel number to configure
 * @param u8Cnt Clock count value to set
 */
LOCAL_INLINE void EFTU_CMU_HWA_SetCmuClkCnt(EFTU_CMU_Type *const pCmu, uint8 u8Channel, uint8 u8Cnt)
{
    /* Write the clock count value to the specified channel's CMU control register */
    pCmu->CLK_n_CTRL[u8Channel] = (uint32)u8Cnt;
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize the global clock configuration.
 *
 * @param pCmuConfig Pointer to the CMU configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Cmu_Init(const Eftu_CmuConfigType *pCmuConfig)
{
    uint32 u32Loop, u32Endis = 0U, u32ClkCtrl = 0U;

    /* Numerator must be greater or equal to Denominator */
    EFTU_CMU_HWA_SetGclkDen(EFTU_CMU, 1U);

    /* Set the numerator of the global clock */
    EFTU_CMU_HWA_SetGclkNum(EFTU_CMU, pCmuConfig->tGlobalClock.u8Numerator);
    /* Set the denominator of the global clock */
    EFTU_CMU_HWA_SetGclkDen(EFTU_CMU, pCmuConfig->tGlobalClock.u8Denominator);

    /* Iterate through all CMU clock configurations */
    for (u32Loop = 0U; u32Loop < EFTU_CMU_CLK_COUNT; u32Loop++)
    {
        /* If the current clock is enabled */
        if (TRUE == pCmuConfig->aCmuClock[u32Loop].bEnable)
        {
            /* Set the enable and control registers for the clock */
            u32Endis |= ((uint32)0x2U << ((uint32)u32Loop << 1U));
            u32ClkCtrl |= ((uint32)pCmuConfig->aCmuClock[u32Loop].eClockSource) << u32Loop;
            /* Set the divider for the CMU clock */
            EFTU_CMU_HWA_SetCmuClkCnt(EFTU_CMU,
                                      (uint8)u32Loop,
                                      pCmuConfig->aCmuClock[u32Loop].u8Divider);
        }
        else
        {
            /* If the current clock is not enabled, set the corresponding bit to disable state */
            u32Endis |= ((uint32)0x1U << ((uint32)u32Loop << 1U));
        }
    }

    /* Iterate through all external clock configurations */
    for (u32Loop = 0U; u32Loop < EFTU_EXT_CLK_COUNT; u32Loop++)
    {
        /* If the current external clock is enabled */
        if (TRUE == pCmuConfig->aExtClock[u32Loop].bEnable)
        {
            /* Set the enable and control registers for the external clock */
            u32Endis |= ((uint32)0x2U << ((uint32)(u32Loop + EFTU_CMU_CLK_COUNT) << 1U));

            /* Numerator must be greater or equal to Denominator */
            EFTU_CMU_HWA_SetEclkDen(EFTU_CMU, (uint8)u32Loop, 1U);

            EFTU_CMU_HWA_SetEclkNum(EFTU_CMU,
                                    (uint8)u32Loop,
                                    (uint32)pCmuConfig->aExtClock[u32Loop].u8Numerator);
            EFTU_CMU_HWA_SetEclkDen(EFTU_CMU,
                                    (uint8)u32Loop,
                                    (uint32)pCmuConfig->aExtClock[u32Loop].u8Denominator);
        }
        else
        {
            /* If the current external clock is not enabled, set the corresponding bit to disable state */
            u32Endis |= ((uint32)0x1U << ((uint32)(u32Loop + EFTU_CMU_CLK_COUNT) << 1U));
        }
    }

    /* Set the CLK8 clock source */
    u32ClkCtrl |= (((uint32)pCmuConfig->eClk8Source) << 8U);
    /* Set the CMU clock source configuration */
    EFTU_CMU_HWA_SetCmuClkSrc(EFTU_CMU, u32ClkCtrl);
    /* Set the clock enable and disable configuration */
    EFTU_CMU_HWA_SetClockEnDis(EFTU_CMU, u32Endis);
}
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize the CMU (Clock Management Unit).
 *
 */
EFTU_TEXT_SECTION void Eftu_Cmu_DeInit(void)
{
    uint32 u32Loop;

    /* The clock must be disabled first */
    EFTU_CMU_HWA_SetClockEnDis(EFTU_CMU, 0x55555U);

    for (u32Loop = 0U; u32Loop < EFTU_CMU_CLK_COUNT; u32Loop++)
    {
        EFTU_CMU_HWA_SetCmuClkCnt(EFTU_CMU, (uint8)u32Loop, 0U);
    }

    for (u32Loop = 0U; u32Loop < EFTU_EXT_CLK_COUNT; u32Loop++)
    {
        EFTU_CMU_HWA_SetEclkDen(EFTU_CMU, (uint8)u32Loop, 1U);
        EFTU_CMU_HWA_SetEclkNum(EFTU_CMU, (uint8)u32Loop, 1U);
    }

    EFTU_CMU_HWA_SetGclkDen(EFTU_CMU, 1U);
    EFTU_CMU_HWA_SetGclkNum(EFTU_CMU, 1U);

    EFTU_CMU_HWA_SetCmuClkSrc(EFTU_CMU, 0U);
}
#endif /* (EFTU_DEINIT_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"

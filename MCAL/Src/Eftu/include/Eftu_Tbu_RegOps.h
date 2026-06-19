/**
 *   @file    Eftu_Tbu_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - hardware specific type definition
 *   @details This file contains the Eftu Autosar hardware specific type definition
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EFTU
*   PLATFORM             : Flagchip FC7xxx
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
*   1.4.1       12/8/2025    QXW0099       N/A           Add TBU HWA support
==================================================================================================*/
/* PRQA S 3469 EOF
   This usage of a function-like macro looks like it could be replaced by an equivalent function
   call. REASON: Macros have higher execution efficiency
*/
/* PRQA S 2071,5087 EOF
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3673 EOF #Misra-C:2012: Rule-8.13 A pointer should point to a const-qualified type
   whenever possible. Reason: This usage is legal */
#ifndef EFTU_TBU_REGOPS_H
#define EFTU_TBU_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eftu_Tbu_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @defgroup HwA_eftu_tom HwA_eftu_tom
 * @ingroup module_driver_eftu_tom
 * @{
 */

/**
 * @brief Selection of Time Base Used for Comparison
 *
 */
typedef enum
{
    EFTU_TBU_CLK_RES0 = 0u,
    EFTU_TBU_CLK_RES1 = 1u,
    EFTU_TBU_CLK_RES2 = 2u,
    EFTU_TBU_CLK_RES3 = 3u,
    EFTU_TBU_CLK_RES4 = 4u,
    EFTU_TBU_CLK_RES5 = 5u,
    EFTU_TBU_CLK_RES6 = 6u,
    EFTU_TBU_CLK_RES7 = 7u
} EFTU_TBU_CntClkRes;

/**
 * Set the counter enable status.
 *
 * @param pTbu Pointer to the EFTU_TBU_Type structure, representing the base address of the EFTU TBU
 * module.
 * @param u32Value Value to be written to the CHEN register. Non-zero to enable, zero to disable the
 * counter.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetCounterEnDis(EFTU_TBU_Type *const pTbu, uint32 u32Value)
{
    /* Write the value to the CHEN register to enable or disable the counter */
    pTbu->CHEN = u32Value;
}

/**
 * Set the control register for Counter 0 of the EFTU TBU module.
 *
 * @param pTbu Pointer to the EFTU TBU module base address.
 * @param u32Value Value to be written to the Counter 0 control register.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetCnt0Ctrl(EFTU_TBU_Type *const pTbu, uint32 u32Value)
{
    /* Write the value to the Counter 0 control register */
    pTbu->CH0_CTRL = u32Value;
}

/**
 * @brief Set the TS1 clock source.
 *
 * @param pTbu Pointer to the EFTU_TBU module.
 * @param eClkSrc The new clock source to set.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetTs1Src(EFTU_TBU_Type *const pTbu, uint8 eClkSrc)
{
    /* Set the clock source in the CH1_CTRL register without affecting other settings */
    pTbu->CH1_CTRL |= EFTU_TBU_CH1_CTRL_CH_CLK_SRC(eClkSrc);
}

/**
 * @brief Set TS2 clock source
 *
 * This function sets the clock source for the TS2 counter by modifying the CH2_CTRL register.
 *
 * @param pTbu Pointer to the EFTU_TBU module base address.
 * @param eClkSrc Clock source to be set.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetTs2Src(EFTU_TBU_Type *const pTbu, uint8 eClkSrc)
{
    /* Update the CH2_CTRL register with the new clock source */
    pTbu->CH2_CTRL |= EFTU_TBU_CH2_CTRL_CH_CLK_SRC(eClkSrc);
}

/**
 * @brief Enables a specific counter channel in the EFTU TBU module.
 *
 * This function sets the CHEN register to enable the counter specified by `u8ch`.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param u8ch The channel number (0-7) to enable.
 */
LOCAL_INLINE void OCU_EFTU_TBU_HWA_EN_CNTn(EFTU_TBU_Type *const pTBU, uint8 u8ch)
{
    pTBU->CHEN = (uint32)(2u << u8ch);
}

/**
 * @brief Disables a specific counter channel in the EFTU TBU module.
 *
 * This function sets the CHEN register to disable the counter specified by `u8ch`.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param u8ch The channel number (0-7) to disable.
 */
LOCAL_INLINE void OCU_EFTU_TBU_HWA_DIS_CNTn(EFTU_TBU_Type *const pTBU, uint8 u8ch)
{
    pTBU->CHEN = (uint32)(1 << u8ch);
}

/**
 * @brief Selects the clock resolution for Counter 0 of the EFTU TBU module.
 *
 * This function configures the clock source for Counter 0 by modifying the CH0_CTRL register.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param eClkRes The desired clock resolution to be set.
 */
LOCAL_INLINE void OCU_EFTU_TBU_Sel0ClkRes(EFTU_TBU_Type *const pTBU, EFTU_TBU_CntClkRes eClkRes)
{
    pTBU->CH0_CTRL |= (uint8)((uint8)eClkRes << EFTU_TBU_CH0_CTRL_CH_CLK_SRC_SHIFT);
}

/**
 * @brief Retrieves the current count value of Counter 0 from the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @return The current 32-bit count value of Counter 0.
 */
LOCAL_INLINE uint32 OCU_EFTU_TBU_GetCNT0(EFTU_TBU_Type *const pTBU)
{
    return (uint32)pTBU->CH0_BASE;
}

/**
 * @brief Sets the count value for Counter 0 in the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param u32Cnt The 32-bit count value to set for Counter 0.
 */
LOCAL_INLINE void OCU_EFTU_TBU_SetCNT0(EFTU_TBU_Type *const pTBU, uint32 u32Cnt)
{
    pTBU->CH0_BASE = u32Cnt;
}

/**
 * @brief Selects the clock resolution for Counter 1 of the EFTU TBU module.
 *
 * This function configures the clock source for Counter 1 by modifying the CH1_CTRL register.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param eClkRes The desired clock resolution to be set.
 */
LOCAL_INLINE void OCU_EFTU_TBU_Sel1ClkRes(EFTU_TBU_Type *const pTBU, EFTU_TBU_CntClkRes eClkRes)
{
    pTBU->CH1_CTRL |= (uint8)((uint8)eClkRes << EFTU_TBU_CH1_CTRL_CH_CLK_SRC_SHIFT);
}

/**
 * @brief Retrieves the current count value of Counter 1 from the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @return The current 32-bit count value of Counter 1.
 */
LOCAL_INLINE uint32 OCU_EFTU_TBU_GetCNT1(EFTU_TBU_Type *const pTBU)
{
    return (uint32)pTBU->CH1_BASE;
}

/**
 * @brief Sets the count value for Counter 1 in the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param u32Cnt The 32-bit count value to set for Counter 1.
 */
LOCAL_INLINE void OCU_EFTU_TBU_SetCNT1(EFTU_TBU_Type *const pTBU, uint32 u32Cnt)
{
    pTBU->CH1_BASE = u32Cnt;
}

/**
 * @brief Selects the clock resolution for Counter 2 of the EFTU TBU module.
 *
 * This function configures the clock source for Counter 2 by modifying the CH2_CTRL register.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param eClkRes The desired clock resolution to be set.
 */
LOCAL_INLINE void OCU_EFTU_TBU_Sel2ClkRes(EFTU_TBU_Type *const pTBU, EFTU_TBU_CntClkRes eClkRes)
{
    pTBU->CH2_CTRL |= (uint8)((uint8)eClkRes << EFTU_TBU_CH2_CTRL_CH_CLK_SRC_SHIFT);
}

/**
 * @brief Retrieves the current count value of Counter 2 from the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @return The current 32-bit count value of Counter 2.
 */
LOCAL_INLINE uint32 OCU_EFTU_TBU_GetCNT2(EFTU_TBU_Type *const pTBU)
{
    return (uint32)pTBU->CH2_BASE;
}

/**
 * @brief Sets the count value for Counter 2 in the EFTU TBU module.
 *
 * @param pTBU Pointer to the base address of the EFTU_TBU module.
 * @param u32Cnt The 32-bit count value to set for Counter 2.
 */
LOCAL_INLINE void OCU_EFTU_TBU_SetCNT2(EFTU_TBU_Type *const pTBU, uint32 u32Cnt)
{
    pTBU->CH2_BASE = u32Cnt;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef EFTU_TBU_REGOPS_H */
/** @} */

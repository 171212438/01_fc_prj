/**
*   @file    Icu_Eftu_Tim_RegOps.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Eftu_Tim hardware access layer header file.
*   @details Eftu_Tim source file, containing the low lever driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Eftu_Tim
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
*   1.0.0       19/11/2024    QXW0076       N/A          Icu Initial Version
==================================================================================================*/
#ifndef ICU_EFTU_TIM_REGOPS_H
#define ICU_EFTU_TIM_REGOPS_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Eftu_Tim.h"
#include "Icu_Eftu_Tim_Reg.h"

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Enable the Input filtering functionality for EFTU_TIM
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableFlt(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_EN_MASK;
}

/**
 * @brief Select the Input filtering function clock for EFTU_TIM
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetChFltSrc(EFTU_TIM_Type *const  eTim,
                                               ICU_EftuTimFltSrcType eFltClkSrc,
                                               uint8                 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_CNT_FRQ(eFltClkSrc);
}

/**
 * @brief Enable the Filter mode for rising edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltRe(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_MODE_RE_MASK;
}

/**
 * @brief Disale the Filter mode for rising edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltRe(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_FLT_MODE_RE_MASK;
}

/**
 * @brief Enable the Filter mode for falling edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltFe(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_MODE_FE_MASK;
}

/**
 * @brief Disale the Filter mode for falling edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltFe(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_FLT_MODE_FE_MASK;
}

/**
 * @brief Enable the Filter counter mode for rising edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltReCounter(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_CTR_RE_MASK;
}

/**
 * @brief Disable the Filter counter mode for rising edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltReCounter(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_FLT_CTR_RE_MASK;
}

/**
 * @brief Enable the Filter counter mode for falling edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltFeCounter(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_FLT_CTR_FE_MASK;
}

/**
 * @brief Disable the Filter counter mode for falling edge
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltFeCounter(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_FLT_CTR_FE_MASK;
}

/**
 * @brief set extension of bit field FLT_CTR_RE
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltReExbit(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_ECTRL |= EFTU_TIM_CHn_ECTRL_EFLT_CTR_RE_MASK;
}

/**
 * @brief Disable extension of bit field FLT_CTR_RE
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltReExbit(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_ECTRL &= ~EFTU_TIM_CHn_ECTRL_EFLT_CTR_RE_MASK;
}

/**
 * @brief set extension of bit field FLT_CTR_FE
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChFltFeExbit(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_ECTRL |= EFTU_TIM_CHn_ECTRL_EFLT_CTR_FE_MASK;
}

/**
 * @brief Disable extension of bit field FLT_CTR_FE
 *
 * @param eTim Pointer to the EFTU_TIM Instance
 *
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChFltFeExbit(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_ECTRL &= ~EFTU_TIM_CHn_ECTRL_EFLT_CTR_FE_MASK;
}

/**
 * @brief  Set channel rising edge number
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8Recount Rising filter counter value
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetChFltReValue(EFTU_TIM_Type *const eTim,
                                                   uint8                u8Recount,
                                                   uint8                u8channel)
{
    eTim->CONTROL[u8channel].CH_FLT_RE = u8Recount;
}

/**
 * @brief  Set channel falling edge number
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param  u8Fecount Falling filter counter value
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetChFltFeValue(EFTU_TIM_Type *const eTim,
                                                   uint8                u8Fecount,
                                                   uint8                u8channel)
{
    eTim->CONTROL[u8channel].CH_FLT_FE = u8Fecount;
}

/**
 * @brief  Set channel input is AUX_IN
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetVal(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    uint8 u8shift = (uint8)(u8channel * 4U);

    eTim->IN_SRC = (uint32)((uint32)0x2U << u8shift);
}

/**
 * @brief  Clear channel input is AUX_IN
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ClearVal(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    uint8 u8shift = (uint8)(u8channel * 4U);
    eTim->IN_SRC  = (uint32)((uint32)0x1U << u8shift);
}

/**
 * @brief  Unlock The register control
 * @param eTim Pointer to the EFTU_TIM Instance
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_UnLock(EFTU_TIM_Type *const pTim)
{
    pTim->TIM_SPEC_LOCK = 0xBEEFCAFEu;
}

/**
 * @brief  Lock The register control
 * @param eTim Pointer to the EFTU_TIM Instance
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_Lock(EFTU_TIM_Type *const pTim)
{
    pTim->TIM_SPEC_LOCK = 0x5AFECAFE;
}

/**
 * @brief  Reset the channel configuration
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ResetChannel(EFTU_TIM_Type *const pTim, uint8 u8channel)
{
    pTim->RST |= (uint32)((uint32)0x1U << u8channel);
}

/**
 * @brief  Channel Input Control Use signal TIM_IN(x-1) as input for channel x
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetchCicrl(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_CICTRL_MASK;
}

/**
 * @brief  Channel Input Control Use signal TIM_IN(x) as input for channel x
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ClearchCicrl(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_CICTRL_MASK;
}

/**
 * @brief  Configure the channel mode
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param eTimMode Channel mode
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetChannelMode(EFTU_TIM_Type *const       eTim,
                                                  ICU_EftuTimChannelModeType eTimMode,
                                                  uint8                      u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_TIM_MODE(eTimMode);
}

/**
 * @brief  Configure the channel function clock source
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param eTimSrc   Channel clock source
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetChannelClockSrc(EFTU_TIM_Type *const    eTim,
                                                      ICU_EftuTimClockSrcType eTimSrc,
                                                      uint8                   u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_CLK_SEL(eTimSrc);
}

/**
 * @brief  Configure the channel active edge to both edge.
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnIngnoreEdge(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_ISL_MASK;
}

/**
 * @brief  clear the channel Ignore Signal Level .
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ClearIngnoreEdge(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_ISL_MASK;
}

/**
 * @brief  Configure the channel active edge to falling edge only.
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ConfigFallingActiveEdge(EFTU_TIM_Type *const eTim, uint8 u8channel)
{

    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_DSL_MASK;
}

/**
 * @brief  Configure the channel active edge to rising edge only.
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ConfigRisingActiveEdge(EFTU_TIM_Type *const eTim, uint8 u8channel)
{

    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_DSL_MASK;
}

/**
 * @brief  Enable channel
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnableChannel(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_TIM_EN_MASK;
}

/**
 * @brief  Disable channel
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisableChannel(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL &= ~EFTU_TIM_CHn_CTRL_TIM_EN_MASK;
}

/**
 * @brief  Configure the channel GPR0 source
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param eTimGprSel   Channel GPR0  source
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetGPR0Sel(EFTU_TIM_Type *const  eTim,
                                              ICU_EftuTimGprSrcType eTimGprSel,
                                              uint8                 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_GPR0_SEL(eTimGprSel);
}

/**
 * @brief  Configure the channel GPR1 source
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param eTimGprSel   Channel GPR1  source
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetGPR1Sel(EFTU_TIM_Type *const  eTim,
                                              ICU_EftuTimGprSrcType eTimGprSel,
                                              uint8                 u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_GPR1_SEL(eTimGprSel);
}

/**
 * @brief  Configure the channel CNTS source
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param eTimCntsSel   Channel CNTS source
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_SetCntsSel(EFTU_TIM_Type *const   eTim,
                                              ICU_EftuTimCntsSrcType eTimCntsSel,
                                              uint8                  u8channel)
{
    eTim->CONTROL[u8channel].CH_CTRL |= EFTU_TIM_CHn_CTRL_CNTS_SEL(eTimCntsSel);
}

/**
 * @brief  Enable new value interrupt
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_EnNewValueIrq(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_IRQ_EN |= EFTU_TIM_CHn_IRQ_EN_NEWVAL_IRQ_EN_MASK;
}

/**
 * @brief  Get new value interrupt enable status
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetNewValueIrqEnable(const EFTU_TIM_Type *eTim, uint8 u8channel)
{
    return (eTim->CONTROL[u8channel].CH_IRQ_EN & EFTU_TIM_CHn_IRQ_EN_NEWVAL_IRQ_EN_MASK);
}

/**
 * @brief  Disable new value interrupt
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_DisNewValueIrq(EFTU_TIM_Type *const eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_IRQ_EN &= ~EFTU_TIM_CHn_IRQ_EN_NEWVAL_IRQ_EN_MASK;
}

/**
 * @brief  Clear new value interrupt flag
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE void ICU_EFTU_TIM_HWA_ClearNewValFlag(EFTU_TIM_Type *eTim, uint8 u8channel)
{
    eTim->CONTROL[u8channel].CH_IRQ_ST = EFTU_TIM_CHn_IRQ_ST_NEWVAL_MASK;
}

/**
 * @brief  Get new value interrupt flag
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetNewValueFlag(const EFTU_TIM_Type *eTim, uint8 u8channel)
{
    return (eTim->CONTROL[u8channel].CH_IRQ_ST & EFTU_TIM_CHn_IRQ_ST_NEWVAL_MASK);
}

/**
 * @brief  Get Tim Input Level
 * @param eTim Pointer to the EFTU_TIM Instance
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetInputLevel(const EFTU_TIM_Type *pTim)
{
    return (uint32)(pTim->INP_VAL);
}

/**
 * @brief  Get channel GPR0 value
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetChGPR0(const EFTU_TIM_Type *pTim, uint8 u8channel)
{
    return (uint32)(pTim->CONTROL[u8channel].CH_GPR0 & EFTU_TIM_CHn_GPR0_GPR0_MASK);
}

/**
 * @brief  Get channel GPR0 register all value
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetChGPR0Full(const EFTU_TIM_Type *pTim, uint8 u8channel)
{
    return (uint32)(pTim->CONTROL[u8channel].CH_GPR0);
}

/**
 * @brief  Get channel GPR1 value
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param u8channel Tim channel Index
 */
LOCAL_INLINE uint32 ICU_EFTU_TIM_HWA_GetChGPR1(const EFTU_TIM_Type *pTim, uint8 u8channel)
{
    return (uint32)(pTim->CONTROL[u8channel].CH_GPR1 & EFTU_TIM_CHn_GPR1_GPR1_MASK);
}

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ICU_EFTU_TIM_REGOPS_H */
/** @} */

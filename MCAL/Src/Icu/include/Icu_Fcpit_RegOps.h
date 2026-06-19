/**
 *   @file    Icu_Fcpit_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - FCPIT hardware access layer header file.
 *   @details FCPIT source file, containing the low lever driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FCPIT
*   PLATFORM             : Flagchip FC73000
*   AUTOSAR VERSION      : 4.3.1
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
*   0.1.0       09/05/2023    QXW0076       N/A          Icu Initial Version
*   0.9.0       05/12/2024    QXW0076       N/A          Safety version
==================================================================================================*/
#ifndef ICU_FCPIT_REGOPS_H
#define ICU_FCPIT_REGOPS_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Fcpit.h"
#include "Fcpit_Reg.h"

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/**
 * @brief Enable FCPIT module
 *
 *  @param pFcpit the Fcpit instance
 */
LOCAL_INLINE void ICU_FCPIT_HWA_EnableModule(FCPIT_Type *const pFcpit)
{
    pFcpit->MCR |= FCPIT_MCR_M_CEN_MASK;
}

/**
 * @brief Disable FCPIT module
 *
 *  @param pFcpit the Fcpit instance
 */
LOCAL_INLINE void ICU_FCPIT_HWA_DisableModule(FCPIT_Type *const pFcpit)
{
    pFcpit->MCR &= ~(uint32)FCPIT_MCR_M_CEN_MASK;
}

/**
 * @brief Set FCPIT channel running on debug mode
 *
 *  @param pFcpit the Fcpit instance
 */
LOCAL_INLINE void ICU_FCPIT_HWA_SetChannelRunOnDebug(FCPIT_Type *const pFcpit)
{
    pFcpit->MCR |= FCPIT_MCR_DBG_EN_MASK;
}

/**
 * @brief Set FCPIT channel stop on debug mode
 *
 *  @param pFcpit the Fcpit instance
 */
LOCAL_INLINE void ICU_FCPIT_HWA_SetChannelStopOnDebug(FCPIT_Type *const pFcpit)
{
    pFcpit->MCR &= ~(uint32)FCPIT_MCR_DBG_EN_MASK;
}

/**
 * @brief Enable FCPIT channel
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_EnableChannel(FCPIT_Type *const pFcpit, uint8 eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL |= FCPIT_TCTRL_T_EN_MASK;
}

/**
 * @brief Disable FCPIT channel
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_DisableChannel(FCPIT_Type *const pFcpit, uint8 eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL &= ~(uint32)FCPIT_TCTRL_T_EN_MASK;
}

/**
 * @brief Enable FCPIT channel(n) interrupt
 *
 * @param pFcpit the Fcpit instance
 * @param u32RegValue u32RegValue 0-3 bit indicate TIE0-TIE3
 */
LOCAL_INLINE void ICU_FCPIT_HWA_EnableChannelsInterrupt(FCPIT_Type *const pFcpit, uint32 u32RegValue)
{
    pFcpit->MIER |= u32RegValue;
}

/**
 * @brief Disable FCPIT channel(n) interrupt
 *
 * @param pFcpit the Fcpit instance
 * @param u32RegValue u32RegValue 0-3 bit indicate TIE0-TIE3
 */
LOCAL_INLINE void ICU_FCPIT_HWA_DisableChannelsInterrupt(FCPIT_Type *const pFcpit, uint32 u32RegValue)
{
    pFcpit->MIER &= ~u32RegValue;
}

/**
 * @brief Configure FCPIT channel operation mode
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 * @param eMode FCPIT operation mode
 */
LOCAL_INLINE void ICU_FCPIT_HWA_ConfigChannelMode(FCPIT_Type *const      pFcpit,
                                                  uint8                  eChannel,
                                                  Icu_FcpitTimerModeType eMode)
{
    uint32 u32RegValue               = pFcpit->CONTROLS[eChannel].TCTRL;
    pFcpit->CONTROLS[eChannel].TCTRL = (u32RegValue & ~(uint32)FCPIT_TCTRL_MODE_MASK) |
                                       FCPIT_TCTRL_MODE(eMode);
}

/**
 * @brief Clear FCPIT channel operation mode
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_ClearChannelMode(FCPIT_Type *const pFcpit, uint8 eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL &= ~(uint32)FCPIT_TCTRL_MODE_MASK;
}

/**
 * @brief Select FCPIT channel trigger
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 * @param u8SelChannel Select channel, range is 0-3
 */
LOCAL_INLINE void ICU_FCPIT_HWA_SelectChannelTriggerSelect(FCPIT_Type *const pFcpit,
                                                           uint8             eChannel,
                                                           uint8             u8SelChannel)
{
    uint32 u32RegValue               = pFcpit->CONTROLS[eChannel].TCTRL;
    pFcpit->CONTROLS[eChannel].TCTRL = (u32RegValue & ~(uint32)FCPIT_TCTRL_TRG_SEL_MASK) |
                                       FCPIT_TCTRL_TRG_SEL(u8SelChannel);
}

/**
 * @brief Clear FCPIT channel trigger select
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_ClearChannelTriggerSelect(FCPIT_Type *const pFcpit, uint8 eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL &= ~(uint32)FCPIT_TCTRL_TRG_SEL_MASK;
}

/**
 * @brief Set FCPIT channel trigger source
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_SetChannelInternalTriggerSrc(FCPIT_Type *const pFcpit, uint8 eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL |= FCPIT_TCTRL_TRG_SRC_MASK;
}

/**
 * @brief Clear FCPIT channel trigger source
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE void ICU_FCPIT_HWA_ClearChannelInternalTriggerSrc(FCPIT_Type *const pFcpit,
                                                               uint8             eChannel)
{
    pFcpit->CONTROLS[eChannel].TCTRL &= ~(uint32)FCPIT_TCTRL_TRG_SRC_MASK;
}

/**
 * @brief Get the FCPIT channel  value
 *
 * @param pFcpit the Fcpit instance
 * @param eChannel FCPIT channel number
 */
LOCAL_INLINE uint32 ICU_FCPIT_HWA_ReadChannelValue(const FCPIT_Type *pFcpit, uint8 eChannel)
{
    return (uint32)(pFcpit->CONTROLS[eChannel].TVAL);
}

/**
 * @brief Read FCPIT active interrupt flag
 *
 * @param pFcpit the Fcpit instance
 * @return FCPIT active interrupt flag
 */
LOCAL_INLINE uint32 ICU_FCPIT_HWA_ReadChannelsInterruptFlag(const FCPIT_Type *pFcpit)
{
    return (uint32)(pFcpit->MSR);
}

/**
 * @brief Read FCPIT enable interrupt flag
 *
 * @param pFcpit the Fcpit instance
 * @return FCPIT enable interrupt flag
 */
LOCAL_INLINE uint32 ICU_FCPIT_HWA_ReadEnableInterruptFlag(const FCPIT_Type *pFcpit)
{
    return (uint32)(pFcpit->MIER);
}

/**
 * @brief Clear FCPIT channel(n) interrupt flag
 *
 * @param pFcpit the Fcpit instance
 * @param u32RegValue 0-3 bit indicate TIF0-TIF3
 */
LOCAL_INLINE void ICU_FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_Type *const pFcpit,
                                                           uint32            u32RegValue)
{
    pFcpit->MSR = u32RegValue;
}
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ICU_FCPIT_REGOPS_H */
/** @} */

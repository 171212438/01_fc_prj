/**
 *   @file    Adc_Tmu_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ADC Tmu header file.
 *   @details ADC Tmu low level driver API.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TMU
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.8.0       07/18/2024    QXW0030       N/A          TMU Initial Version
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
==================================================================================================*/

#ifndef ADC_TMU_REGOPS_H
#define ADC_TMU_REGOPS_H

#include "Adc_CfgDefines.h"
#include "Adc_Tmu_Reg.h"
#include "Std_Types.h"

/**
 * @brief Select the Flag-based temperature sensor hysteresis control
 *
 */
typedef enum
{
    TMU_TF_HYSOFF_ON  = 0U, /*!< Flag-based temperature sensor hysteresis is on*/
    TMU_TF_HYSOFF_OFF = 1U  /*!< Flag-based temperature sensor hysteresis is off*/
} TMU_HysteresisType;

/**
 * @brief Get the status of whether the temperature sensor register is locked
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature register is locked(CTRL)
 * @return FALSE Temperature register is unlocked(CTRL)
 */
LOCAL_INLINE boolean TMU_HWA_GetLockStatus(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->UNLOCK & TMU_UNLOCK_UNLOCK_MASK) >> TMU_UNLOCK_UNLOCK_SHIFT;
    return (boolean)((u32TmpVal == 0U) ? TRUE : FALSE);
}

/**
 * @brief Lock the TMU TF_CTRL and TV_CTRL registers
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature over 150 Celsius interrupt
 */
LOCAL_INLINE void TMU_HWA_Lock(TMU_Type *const pTmu)
{
    pTmu->UNLOCK = 0U;
}

/**
 * @brief Unlock the TMU TF_CTRL and TV_CTRL registers
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature over 150 Celsius interrupt
 */
LOCAL_INLINE void TMU_HWA_Unlock(TMU_Type *const pTmu)
{
    pTmu->UNLOCK = TMU_UNLOCK_KEY | TMU_UNLOCK_UNLOCK(1U);
}

#if (ADC_TMU_SUPPORT_TF == STD_ON)
/**
 * @brief Get the TMU_TF_CTRL config
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TMU_TF_CTRL config
 */
LOCAL_INLINE uint32 TMU_HWA_GetFlagTempCtrl(const TMU_Type *const pTmu)
{
    return pTmu->TF_CTRL;
}

/**
 * @brief Set the TMU_TF_CTRL config
 *
 * @param pTmu the base address of the TMU instance
 * @param u32Config the TMU_TF_CTRL config
 */
LOCAL_INLINE void TMU_HWA_SetFlagTempCtrl(TMU_Type *const pTmu, uint32 u32Config)
{
    pTmu->TF_CTRL = u32Config;
}

/**
 * @brief Get the Flag-based temperature sensor over 150 Celsius interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature over 150 Celsius interrupt is enabled
 * @return FALSE Temperature over 150 Celsius interrupt is disabled
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperature150InterruptFlag(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_150F_IE_MASK) >> TMU_TF_CTRL_TF_150F_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor over 150 Celsius interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature over 150 Celsius interrupt
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperature150InterruptFlag(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_150F_IE_MASK) | TMU_TF_CTRL_TF_150F_IE(bEnable);
}

/**
 * @brief Get the Flag-based temperature sensor over 125 Celsius interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature over 125 Celsius interrupt is enabled
 * @return FALSE Temperature over 125 Celsius interrupt is disabled
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperature125InterruptFlag(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_125F_IE_MASK) >> TMU_TF_CTRL_TF_125F_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor over 125 Celsius interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature over 125 Celsius interrupt
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperature125InterruptFlag(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_125F_IE_MASK) | TMU_TF_CTRL_TF_125F_IE(bEnable);
}

/**
 * @brief Get the Flag-based temperature sensor ready interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor ready interrupt is enabled
 * @return FALSE Temperature sensor ready interrupt is disabled
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperatureReadyInterruptFlag(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_RDYF_IE_MASK) >> TMU_TF_CTRL_TF_RDYF_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor over ready interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature sensor ready interrupt
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperatureReadyInterruptFlag(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_RDYF_IE_MASK) | TMU_TF_CTRL_TF_RDYF_IE(bEnable);
}

/**
 * @brief Get the Flag-based temperature sensor hysteresis control status
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor Hysteresis is off
 * @return FALSE Temperature sensor Hysteresis is on
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperatureHysteresisStatus(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_HYSOFF_MASK) >> TMU_TF_CTRL_TF_HYSOFF_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor hysteresis control status
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to off(1)/on(0) the temperature sensor hysteresis
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperatureHysteresisStatus(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_HYSOFF_MASK) | TMU_TF_CTRL_TF_HYSOFF(bEnable);
}

/**
 * @brief Get the Flag-based temperature sensor startup counter
 *
 * @param pTmu the base address of the TMU instance
 * @return u32TmpVal count of the startup
 */
LOCAL_INLINE uint8 TMU_HWA_GetFlagTemperatureCounter(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_START_CNT_MASK) >>
                       TMU_TF_CTRL_TF_START_CNT_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the Flag-based temperature sensor startup counter
 *
 * @param pTmu the base address of the TMU instance
 * @param u8Counter the startup counter
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperatureCounter(TMU_Type *const pTmu, uint8 u8Counter)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_START_CNT_MASK) |
                    TMU_TF_CTRL_TF_START_CNT(u8Counter);
}

/**
 * @brief Get the Flag-based temperature sensor filter bypass control status
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor Filter is enabled
 * @return FALSE Temperature sensor Filter is bypassed
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperatureFilterBypassStatus(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_FILT_BYP_MASK) >>
                       TMU_TF_CTRL_TF_FILT_BYP_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor filter bypass control status
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether the temperature sensor filter is enabled(1) or bypassed(0)
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperatureFilterBypassStatus(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_FILT_BYP_MASK) |
                    TMU_TF_CTRL_TF_FILT_BYP(bEnable);
}

/**
 * @brief Get the Flag-based temperature sensor enable status
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor is on
 * @return FALSE Temperature sensor is off
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperatureEnableStatus(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TF_CTRL & TMU_TF_CTRL_TF_EN_MASK) >> TMU_TF_CTRL_TF_EN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Flag-based temperature sensor enable status
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether the temperature sensor is on(1) or off(0)
 */
LOCAL_INLINE void TMU_HWA_SetFlagTemperatureEnableStatus(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TF_CTRL = (pTmu->TF_CTRL & ~TMU_TF_CTRL_TF_EN_MASK) | TMU_TF_CTRL_TF_EN(bEnable);
}

/**
 * @brief Check whether the temperature is over 150 Celsius
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the temperature is over 150 Celsius
 * @return FALSE the temperature is not over 150 Celsius
 */
LOCAL_INLINE boolean TMU_HWA_Get150Status(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TF_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TF_STATUS_TF_150_MASK) >> TMU_TF_STATUS_TF_150_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the temperature is over 125 Celsius
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the temperature is over 125 Celsius
 * @return FALSE the temperature is not over 125 Celsius
 */
LOCAL_INLINE boolean TMU_HWA_Get125Status(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TF_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TF_STATUS_TF_125_MASK) >> TMU_TF_STATUS_TF_125_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Check whether the flag for temperature over 150 Celsius is set
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the temperature has exceeded 150 Celsius since last time W1C
 * @return FALSE the temperature has not exceeded 150 Celsius since TF is ready
 */
LOCAL_INLINE boolean TMU_HWA_Get150Flag(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TF_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TF_STATUS_TF_150F_MASK) >> TMU_TF_STATUS_TF_150F_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the temperature over 150 Celsius flag
 *
 * @param pTmu the base address of the TMU instance
 */
LOCAL_INLINE void TMU_HWA_Clear150Flag(TMU_Type *const pTmu)
{
    pTmu->TF_STATUS |= TMU_TF_STATUS_TF_150F(1U);
}

/**
 * @brief Check whether the flag for temperature over 125 Celsius is set
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the temperature has exceeded 125 Celsius since last time W1C
 * @return FALSE the temperature has not exceeded 125 Celsius since TF is ready
 */
LOCAL_INLINE boolean TMU_HWA_Get125Flag(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TF_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TF_STATUS_TF_125F_MASK) >> TMU_TF_STATUS_TF_125F_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the temperature over 125 Celsius flag
 *
 * @param pTmu the base address of the TMU instance
 */
LOCAL_INLINE void TMU_HWA_Clear125Flag(TMU_Type *const pTmu)
{
    pTmu->TF_STATUS |= TMU_TF_STATUS_TF_125F(1U);
}

/**
 * @brief Check whether the Flag-based temperature sensor is ready
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the Flag-based temperature sensor is ready
 * @return FALSE the Flag-based temperature sensor is not ready
 */
LOCAL_INLINE boolean TMU_HWA_GetFlagTemperatureReady(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TF_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TF_STATUS_TF_RDYF_MASK) >> TMU_TF_STATUS_TF_RDYF_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the Flag-based temperature sensor ready flag
 *
 * @param pTmu the base address of the TMU instance
 */
LOCAL_INLINE void TMU_HWA_ClearFlagTemperatureReady(TMU_Type *const pTmu)
{
    pTmu->TF_STATUS |= TMU_TF_STATUS_TF_RDYF(1U);
}

#endif /* ADC_TMU_SUPPORT_TF == STD_ON */

#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
/**
 * @brief Get the Vlotage-based temperature sensor ready interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor ready interrupt is enabled
 * @return FALSE Temperature sensor ready interrupt is disabled
 */
LOCAL_INLINE boolean TMU_HWA_GetVoltageTemperatureReadyInterruptFlag(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TV_CTRL & TMU_TV_CTRL_TV_RDYF_IE_MASK) >> TMU_TV_CTRL_TV_RDYF_IE_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Voltage-based temperature sensor over ready interrupt flag
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether to enable the temperature sensor ready interrupt
 */
LOCAL_INLINE void TMU_HWA_SetVoltageTemperatureReadyInterruptFlag(TMU_Type *const pTmu,
                                                                  boolean         bEnable)
{
    pTmu->TV_CTRL = (pTmu->TV_CTRL & ~TMU_TV_CTRL_TV_RDYF_IE_MASK) | TMU_TV_CTRL_TV_RDYF_IE(bEnable);
}

/**
 * @brief Get the Voltage-based temperature sensor startup counter
 *
 * @param pTmu the base address of the TMU instance
 * @return u32TmpVal count of the startup
 */
LOCAL_INLINE uint8 TMU_HWA_GetVoltageTemperatureCounter(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TV_CTRL & TMU_TV_CTRL_TV_START_CNT_MASK) >>
                       TMU_TV_CTRL_TV_START_CNT_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Set the Voltage-based temperature sensor startup counter
 *
 * @param pTmu the base address of the TMU instance
 * @param u8Counter the startup counter
 */
LOCAL_INLINE void TMU_HWA_SetVoltageTemperatureCounter(TMU_Type *const pTmu, uint8 u8Counter)
{
    pTmu->TV_CTRL = (pTmu->TV_CTRL & ~TMU_TV_CTRL_TV_START_CNT_MASK) |
                    TMU_TV_CTRL_TV_START_CNT(u8Counter);
}
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */

/**
 * @brief Get the Voltage-based temperature sensor enable status
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE Temperature sensor is on
 * @return FALSE Temperature sensor is off
 */
LOCAL_INLINE boolean TMU_HWA_GetVoltageTemperatureEnableStatus(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = (pTmu->TV_CTRL & TMU_TV_CTRL_TV_EN_MASK) >> TMU_TV_CTRL_TV_EN_SHIFT;
    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Set the Voltage-based temperature sensor enable status
 *
 * @param pTmu the base address of the TMU instance
 * @param bEnable whether the temperature sensor is on(1) or off(0)
 */
LOCAL_INLINE void TMU_HWA_SetVoltageTemperatureEnableStatus(TMU_Type *const pTmu, boolean bEnable)
{
    pTmu->TV_CTRL = (pTmu->TV_CTRL & ~TMU_TV_CTRL_TV_EN_MASK) | TMU_TV_CTRL_TV_EN(bEnable);
}

/**
 * @brief Check whether the Voltage-based temperature sensor is ready
 *
 * @param pTmu the base address of the TMU instance
 * @return TRUE the Voltage-based temperature sensor is ready
 * @return FALSE the Voltage-based temperature sensor is not ready
 */
LOCAL_INLINE boolean TMU_HWA_GetVoltageTemperatureReady(TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TV_STATUS;
    u32TmpVal        = (u32TmpVal & TMU_TV_STATUS_TV_RDYF_MASK) >> TMU_TV_STATUS_TV_RDYF_SHIFT;

    return (boolean)((u32TmpVal != 0U) ? TRUE : FALSE);
}

/**
 * @brief Clear the Voltage-based temperature sensor ready flag
 *
 * @param pTmu the base address of the TMU instance
 */
LOCAL_INLINE void TMU_HWA_ClearVoltageTemperatureReady(TMU_Type *const pTmu)
{
    pTmu->TV_STATUS |= TMU_TV_STATUS_TV_RDYF(1U);
}

/**
 * @brief Get the TMU_TV_CTRL config
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TMU_TV_CTRL config
 */
LOCAL_INLINE uint32 TMU_HWA_GetVoltageTempCtrl(const TMU_Type *const pTmu)
{
    return pTmu->TV_CTRL;
}

/**
 * @brief Set the TMU_TV_CTRL config
 *
 * @param pTmu the base address of the TMU instance
 * @param u32Config the TMU_TV_CTRL config
 */
LOCAL_INLINE void TMU_HWA_SetVoltageTempCtrl(TMU_Type *const pTmu, uint32 u32Config)
{
    pTmu->TV_CTRL = u32Config;
}

#if (ADC_TMU_SUPPORT_SELF_TRIM == STD_ON)
/**
 * @brief Get the TV_TRIM_TV_TCODE value
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TV_TRIM_TV_TCODE value
 */
LOCAL_INLINE uint32 TMU_HWA_GetTemperatureCode(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TV_TRIM;
    u32TmpVal        = (u32TmpVal & TMU_TV_TRIM_TV_TCODE_MASK) >> TMU_TV_TRIM_TV_TCODE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the TV_TRIM_TV_SLOPE value
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TV_TRIM_TV_SLOPE value
 */
LOCAL_INLINE uint32 TMU_HWA_GetSlopeFactor(const TMU_Type *const pTmu)
{
    uint32 u32TmpVal = pTmu->TV_TRIM;
    u32TmpVal        = (u32TmpVal & TMU_TV_TRIM_TV_SLOPE_MASK) >> TMU_TV_TRIM_TV_SLOPE_SHIFT;
    return u32TmpVal;
}

#else
/**
 * @brief Get the TOFFSET value
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TOFFSET value
 */
LOCAL_INLINE uint32 TMU_HWA_GetTemperatureOffset(void)
{
    uint32 u32TmpVal = *(uint32 *)TMU_TOFFSET_TRIM_ADDR;
    u32TmpVal = (u32TmpVal & TMU_TOFFSET_TRIM_TOFFSET_MASK) >> TMU_TOFFSET_TRIM_TOFFSET_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the TSLOPE value
 *
 * @param pTmu the base address of the TMU instance
 * @return uint32 the TSLOPE value
 */
LOCAL_INLINE uint32 TMU_HWA_GetTemperatureSlope(void)
{
    uint32 u32TmpVal = *(uint32 *)TMU_TSLOPE_TRIM_ADDR;
    u32TmpVal        = (u32TmpVal & TMU_TSLOPE_TRIM_TSLOPE_MASK) >> TMU_TSLOPE_TRIM_TSLOPE_SHIFT;
    return u32TmpVal;
}

#endif /* ADC_TMU_SUPPORT_SELF_TRIM == STD_ON */

#endif /* ADC_TMU_REGOPS_H */

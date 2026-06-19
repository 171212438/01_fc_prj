/**
 *   @file    Ftu_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pwm - hardware specific type definition
 *   @details This file contains the Pwm Autosar hardware specific type definition
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       22/5/2023     QXW0076       N/A          PWM Initial Version
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
#ifndef FTU_REGOPS_H
#define FTU_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ftu_Reg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/* [FMR_Pwm_0003] */
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This is types will be used by generate code */
/** @brief Ftu debug mode */
typedef enum
{
    FTU_DBG_COUNTER_STOP_CHN_WORKS = 0U, /**< FTU counter stopped, channel works as function mode. */
    FTU_DBG_COUNTER_STOP_CHN_FORCE_SAFE = 1U, /**< FTU counter stopped, channel output force to safe
                                                 state. */
    FTU_DBG_COUNTER_STOP_CHN_FROZEN = 2U,     /**< FTU counter stopped, channel output is frozen. */
    FTU_DBG_COUNTER_WORKS_CHN_WORKS = 3U /**< FTU counter works as function mode, channel works as
                                            function mode. */
} FTU_DebugModeType;

/** @brief Ftu counter prescaler */
typedef enum
{
    FTU_DIV_1 = 0U,
    FTU_DIV_2,
    FTU_DIV_4,
    FTU_DIV_8,
    FTU_DIV_16,
    FTU_DIV_32,
    FTU_DIV_64,
    FTU_DIV_128
} FTU_PrescalerType;

/** @brief Ftu module clock source */
typedef enum
{
    FTU_MDOULE_NO_CLK       = 0U,
    FTU_MDOULE_INTERNAL_CLK = 1U,
    FTU_MDOULE_EXTERNAL_CLK = 3U,
} FTU_ModuleClkSrcType;

/** @brief fault mode enumeration */
typedef enum
{
    FTU_FAULT_MODE_DISABLED     = 0x00U, /**< Fault control is disabled for all channels */
    FTU_FAULT_MODE_EVEN_CHANNEL = 0x01U, /**< Fault control is enabled for even channels only
                                            (channels 0, 2, 4, and 6), and the selected mode is the
                                            manual fault clearing */
    FTU_FAULT_MODE_CHANNEL_ALL = 0x02U,  /**< Fault control is enabled for all channels, and the
                                            selected mode is the manual fault clearing */
    FTU_FAULT_MODE_AUTO = 0x03U /**< Fault control is enabled for all channels, and the selected
                                   mode is the automatic fault clearing */
} FTU_FaultModeType;

/**
 * @brief Input Capture Measurement Mode ,only used in chips with FTU Icm mode
 *
 */
typedef enum
{
    FTU_MEASURE_MODE_OFF           = 0u, /*!< Do not use measurement mode */
    FTU_MEASURE_MODE_DUTY_CYCLE    = 1u, /*!< Duty-cycle Measure */
    FTU_MEASURE_MODE_PERIOD        = 2u, /*!< Period Measure */
    FTU_MEASURE_EDGE_NUMBER        = 3u, /*!< Edge Number Measure */
    FTU_MEASURE_EXPECT_EDGE_NUMBER = 4u, /*!< Expect Edge Number Measure */
    FTU_MEASURE_ICENM_WIND_WRITE   = 7u, /*!< Configure ICENM Window */
} FTU_MeasurementModeType;

/* PRQA S 1535 -- */
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Configure FTU module status and control configuration
 *
 * @param pFtu FTU instance
 * @param u32RegValue SC register value
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleScConfiguration(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->SC = u32RegValue;
}

/**
 * @brief Configure FTU module common configuration
 *
 * @param pFtu FTU instance
 * @param u32RegValue CONF register value
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleCommonConfiguration(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CONF = u32RegValue;
}

/**
 * @brief Configure FTU module fault control
 *
 * @param pFtu FTU instance
 * @param u32RegValue FLTCTRL register value
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleFaultCtrl(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->FLTCTRL = u32RegValue;
}

/**
 * @brief Set FTU module SYNC register
 *
 * @param pFtu FTU instance
 * @param u32RegValue SYNC register value
 */
LOCAL_INLINE void FTU_HWA_SetModuleSYNCReg(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->SYNC = u32RegValue;
}

/**
 * @brief Configure FTU module fault polarity
 *
 * @param pFtu FTU instance
 * @param u32Input Fault input number, 0-3 bit indicate fault 0-3
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleFaultPolarity(FTU_Type *pFtu, uint32 u32Input)
{
    pFtu->FLTPOL = u32Input & (uint32)0xFU;
}

/**
 * @brief Set channel polarity
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel, bit 0-7 indicate channel 0-7
 */
LOCAL_INLINE void FTU_HWA_SetChannelPolarity(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->POL |= FTU_POL_POLN(u8Channel);
}

/**
 * @brief Clear channel polarity
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel, bit 0-7 indicate channel 0-7
 */
LOCAL_INLINE void FTU_HWA_ClearChannelPolarity(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->POL &= ~FTU_POL_POLN(u8Channel);
}

/**
 * @brief De-init module configuration
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DeinitModuleCommon(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)(FTU_SC_FLTPS_MASK | FTU_SC_TOF_MASK | FTU_SC_TOIE_MASK | FTU_SC_RF_MASK |
                          FTU_SC_RIE_MASK | FTU_SC_CPWMS_MASK | FTU_SC_CLKS_MASK);
}

/**
 * @brief Read channel polarity
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel, bit 0-7 indicate channel 0-7
 * @return Channel polarity value
 */
LOCAL_INLINE uint32 FTU_HWA_ReadChannelPolarity(FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)(pFtu->POL & FTU_POL_POLN(u8Channel));
}

/**
 * @brief Read software output control
 *
 * @param pFtu FTU instance
 * @return Software output control value
 */
LOCAL_INLINE uint32 FTU_HWA_ReadOutputCtrl(FTU_Type *pFtu)
{
    return (uint32)(pFtu->SWOCTRL);
}

/**
 * @brief Configure module software output control
 *
 * @param pFtu FTU instance
 * @param u32RegVal SWOCTRL register value
 */
LOCAL_INLINE void FTU_HWA_ConfigSoftwareOutputControl(FTU_Type *pFtu, uint32 u32RegVal)
{
    pFtu->SWOCTRL = u32RegVal;
}

/**
 * @brief Clear module software output control
 *
 * @param pFtu FTU instance
 * @param u32RegVal SWOCTRL register value
 */
LOCAL_INLINE void FTU_HWA_ClearSoftwareOutputControl(FTU_Type *pFtu, uint32 u32RegVal)
{
    pFtu->SWOCTRL &= ~u32RegVal;
}

/**
 * @brief Configure FTU module channel control
 *
 * @param pFtu FTU instance
 * @param u32RegValue CHCTRL register value
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleChannelCtrl(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CHCTRL = u32RegValue;
}

/**
 * @brief Configure FTU module PWMLOAD
 *
 * @param pFtu FTU instance
 * @param u32RegValue PWMLOAD register value
 */
LOCAL_INLINE void FTU_HWA_ConfigPWMLoad(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->PWMLOAD = u32RegValue;
}

/**
 * @brief Set fault mode status
 *
 * @param pFtu FTU instance
 * @param u32RegValue FMS register value
 */
LOCAL_INLINE void FTU_HWA_SetFMSVal(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->FMS = u32RegValue;
}

/**
 * @brief Generate reload point
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_GenerateReloadPoint(FTU_Type *pFtu)
{
    pFtu->PWMLOAD |= FTU_PWMLOAD_LDOK_MASK;
}

/**
 * @brief Configure FTU module deadtime
 *
 * @param pFtu FTU instance
 * @param u32RegValue DEADTIME register value
 */
LOCAL_INLINE void FTU_HWA_ConfigModuleDeadtime(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->DEADTIME = u32RegValue;
}

/**
 * @brief Disable FTU module invert control
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableModuleInvertCtrl(FTU_Type *pFtu)
{
    pFtu->INVCTRL = (uint32)0U;
}

/**
 * @brief Configure FTU module sync point
 *
 * @param pFtu FTU instance
 * @param u32RegValue SYNC register value
 */
LOCAL_INLINE void FTU_HWA_ConfigureSyncPoint(FTU_Type *pFtu, uint32 u32RegValue)
{
    uint32 u32RegVal = pFtu->SYNC;
    pFtu->SYNC = ((u32RegVal & ~(uint32)(FTU_SYNC_CNTMIN_MASK | FTU_SYNC_CNTMAX_MASK)) | u32RegValue);
}

/**
 * @brief Configure fault operation mode and channel initialization status
 *
 * @param pFtu FTU instance
 * @param u32RegValue MODE register value
 */
LOCAL_INLINE void FTU_HWA_ConfigFaultModeAndInitStatus(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->MODE |= u32RegValue;
}

/**
 * @brief Configure Module trigger control
 *
 * @param pFtu FTU instance
 * @param u32RegValue TRIGCONF register value
 */
LOCAL_INLINE void FTU_HWA_ConfigTriggerControl(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->TRIGCONF = u32RegValue;
}

/**
 * @brief Configure channel trigger out
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel, bit 0-7 indicate channel 0-7
 */
LOCAL_INLINE void FTU_HWA_ConfigChannelTriggerOut(FTU_Type *pFtu, uint8 u8Channel)
{
    uint32 u32TempRegValue = FTU_TRIGCONF_CH7TRIG(((uint32)u8Channel >> 7u) & 1u) |
                             FTU_TRIGCONF_CH6TRIG(((uint32)u8Channel >> 6u) & 1u) |
                             FTU_TRIGCONF_CH5TRIG(((uint32)u8Channel >> 5u) & 1u) |
                             FTU_TRIGCONF_CH4TRIG(((uint32)u8Channel >> 4u) & 1u) |
                             FTU_TRIGCONF_CH3TRIG(((uint32)u8Channel >> 3u) & 1u) |
                             FTU_TRIGCONF_CH2TRIG(((uint32)u8Channel >> 2u) & 1u) |
                             FTU_TRIGCONF_CH1TRIG(((uint32)u8Channel >> 1u) & 1u) |
                             FTU_TRIGCONF_CH0TRIG((uint32)u8Channel & 1u);
    pFtu->TRIGCONF |= u32TempRegValue;
}

/**
 * @brief Enable channel initialization trigger out
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_EnableChannelInitTriggerOut(FTU_Type *pFtu)
{
    pFtu->TRIGCONF |= (uint32)FTU_TRIGCONF_RELOADTRIGEN_MASK;
}

/**
 * @brief Disable channel initialization trigger out
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableChannelInitTriggerOut(FTU_Type *pFtu)
{
    pFtu->TRIGCONF &= ~(uint32)FTU_TRIGCONF_RELOADTRIGEN_MASK;
}

/**
 * @brief Disable channel trigger out
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel, bit 0-7 indicate channel 0-7
 */
LOCAL_INLINE void FTU_HWA_DisableChannelTriggerOut(FTU_Type *pFtu, uint8 u8Channel)
{
    uint32 u32TempRegValue = FTU_TRIGCONF_CH7TRIG(((uint32)u8Channel >> 7u) & 1u) |
                             FTU_TRIGCONF_CH6TRIG(((uint32)u8Channel >> 6u) & 1u) |
                             FTU_TRIGCONF_CH5TRIG(((uint32)u8Channel >> 5u) & 1u) |
                             FTU_TRIGCONF_CH4TRIG(((uint32)u8Channel >> 4u) & 1u) |
                             FTU_TRIGCONF_CH3TRIG(((uint32)u8Channel >> 3u) & 1u) |
                             FTU_TRIGCONF_CH2TRIG(((uint32)u8Channel >> 2u) & 1u) |
                             FTU_TRIGCONF_CH1TRIG(((uint32)u8Channel >> 1u) & 1u) |
                             FTU_TRIGCONF_CH0TRIG((uint32)u8Channel & 1u);
    pFtu->TRIGCONF &= ~u32TempRegValue;
}

/**
 * @brief Clear FTU module channel outmask
 *
 * @param pFtu FTU instance
 * @param u8Channel Bit of channel indicate channel number, range: 0~7 bit
 */
LOCAL_INLINE void FTU_HWA_ClearModuleOutmask(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->OUTMASK = (pFtu->OUTMASK & ~((uint32)u8Channel & (uint32)0xFFU));
}

/**
 * @brief Set FTU module channel outmask
 *
 * @param pFtu FTU instance
 * @param u8Channel Bit of channel indicate channel number, range: 0~7 bit
 */
LOCAL_INLINE void FTU_HWA_SetModuleOutmask(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->OUTMASK |= ((uint32)u8Channel & (uint32)0xFFU);
}

/**
 * @brief Clear FTU counter
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNT register value
 */
LOCAL_INLINE void FTU_HWA_ClearModuleCounter(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNT = u32RegValue;
}

/**
 * @brief Read FTU module counter value
 *
 * @param pFtu FTU instance
 * @return FTU module counter value
 */
LOCAL_INLINE uint32 FTU_HWA_ReadModuleCounter(FTU_Type *pFtu)
{
    return (uint32)pFtu->CNT;
}

/**
 * @brief Read FTU instance channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel
 * @return FTU channel value
 */
LOCAL_INLINE uint32 FTU_HWA_ReadChannelValue(FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)pFtu->CONTROLS[u8Channel].CnV;
}

/**
 * @brief Set FTU channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel channel number, range is 0-7
 * @param u32RegValue CnV register value
 */
LOCAL_INLINE void FTU_HWA_SetChannelValue(FTU_Type *pFtu, uint8 u8Channel, uint32 u32RegValue)
{
    pFtu->CONTROLS[u8Channel].CnV = u32RegValue;
}

/**
 * @brief Set FTU channel configuration
 *
 * @param pFtu FTU instance
 * @param u8Channel channel number, range is 0-7
 * @param u32RegValue CnV register value
 */
LOCAL_INLINE void FTU_HWA_SetChannelConfig(FTU_Type *pFtu, uint8 u8Channel, uint32 u32RegValue)
{
    pFtu->CONTROLS[u8Channel].CnSC = u32RegValue;
}

/**
 * @brief Set FTU counter compare val
 *
 * @param pFtu FTU instance
 * @param u32RegValue MOD register value
 */
LOCAL_INLINE void FTU_HWA_SetModuleCompareValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->MOD = u32RegValue;
}

/**
 * @brief Read FTU module overflow flag and overflow interrupt enable bit
 *
 * @param pFtu FTU instance
 * @return FTU overflow flag and overflow interrupt enable bit
 */
LOCAL_INLINE boolean FTU_HWA_ReadModuleOverflowFlagAndEnable(FTU_Type *pFtu)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)((uint32)(FTU_SC_TOF_MASK | FTU_SC_TOIE_MASK) ==
                     (uint32)(pFtu->SC & ((uint32)FTU_SC_TOF_MASK | FTU_SC_TOIE_MASK)));
    /* PRQA S 4304 -- */
}

/**
 * @brief Clear FTU counter initial value
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNTIN register value
 */
LOCAL_INLINE void FTU_HWA_ClearModuleCounterInitialValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNTIN = u32RegValue;
}

/**
 * @brief Get FTU counter initial value
 *
 * @param pFtu FTU instance
 * @return Initial value of the FTU instance
 */
LOCAL_INLINE uint32 FTU_HWA_GetModuleInitialValue(FTU_Type *pFtu)
{
    return pFtu->CNTIN & ((uint32)FTU_CNTIN_INIT_MASK);
}

/**
 * @brief Get Ftu CVn register address;
 * @param pFtu FTU instance
 * @param u8Channel    FTU channel index
 *
 *@return The address of the CVn register.
 * */
LOCAL_INLINE uint32 FTU_HWA_GetCVnaddr(FTU_Type *pFtu, uint8 u8channel)
{
    return (uint32)(&(pFtu->CONTROLS[u8channel].CnV));
}

/**
 * @brief Set FTU module prescale
 *
 * @param pFtu FTU instance
 * @param ePs FTU clock prescaler enumeration
 */
LOCAL_INLINE void FTU_HWA_SetModulePrescale(FTU_Type *pFtu, FTU_PrescalerType ePs)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC           = (u32RegValue & ~(uint32)FTU_SC_PS_MASK) | FTU_SC_PS(ePs);
}

/**
 * @brief Enable FTU module output mask synchronization
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_EnableOutputMaskBySync(FTU_Type *pFtu)
{
    pFtu->SYNC |= (uint32)FTU_SYNC_SYNCHOM_MASK;
}

/**
 * @brief Check FTU channel interrupt flag and interrupt enable
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number
 * @return If channel interrupt flag exist and interrupt enable ,return TRUE, else return FALSE
 */
LOCAL_INLINE boolean FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) ==
                     (uint32)(pFtu->CONTROLS[u8Channel].CnSC &
                              (uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK)));
    /* PRQA S 4304 -- */
}

/**
 * @brief Read FTU module all fault detection flag
 *
 * @param pFtu FTU instance
 * @return FTU all fault detection flag
 */
LOCAL_INLINE uint32 FTU_HWA_ReadModuleAllFaultDetectionFlag(FTU_Type *pFtu)
{
    return (uint32)(pFtu->FMS &
                    (uint32)(FTU_FMS_FAULTF_MASK | FTU_FMS_FAULTF1_MASK | FTU_FMS_FAULTF0_MASK));
}

/**
 * @brief Clear FTU module channel OUTINIT
 *
 * @param pFtu FTU instance
 * @param u8Channel Bit of channel indicate channel number, range: 0~7 bit
 */
LOCAL_INLINE void FTU_HWA_ClearModuleOutinit(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->OUTINIT &= ~((uint32)u8Channel & (uint32)0xFFU);
}

/**
 * @brief Set FTU module channel OUTINIT
 *
 * @param pFtu FTU instance
 * @param u8Channel Bit of channel indicate channel number, range: 0~7 bit
 */
LOCAL_INLINE void FTU_HWA_SetrModuleOutinit(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->OUTINIT = ((uint32)u8Channel & (uint32)0xFFU);
}

/**
 * @brief Enable FTU channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_EnableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_CHIE_MASK;
}

/**
 * @brief Set FTU module clock source
 *
 * @param pFtu FTU instance
 * @param u8ClkSrc FTU module clock source type
 */
LOCAL_INLINE void FTU_HWA_SetModuleClkSrc(FTU_Type *pFtu, uint8 u8ClkSrc)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC           = (u32RegValue & ~(uint32)FTU_SC_CLKS_MASK) | FTU_SC_CLKS(u8ClkSrc);
}

/**
 * @brief Disable FTU module overflow interrupt
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableOverflowInterrupt(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_TOIE_MASK;
}

/**
 * @brief Initialize the channel output
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_InitializeChannelOutput(FTU_Type *pFtu)
{
    pFtu->MODE |= (uint32)FTU_MODE_INIT_MASK;
}

/**
 * @brief Enable FTU module interrupt
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_EnableModuleInterrupt(FTU_Type *pFtu)
{
    pFtu->SC |= (uint32)FTU_SC_TOIE_MASK;
}

/**
 * @brief Clear FTU module overflow interrupt flag
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_ClearOverflowInterruptFlag(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_TOF_MASK;
}

/**
 * @brief Read channel flag of the FTU instance
 *
 * @param pFtu FTU instance
 * @return Channel flag of the FTU instance
 */
LOCAL_INLINE uint32 FTU_HWA_GetChannelFlag(FTU_Type *pFtu)
{
    return pFtu->STATUS & (uint32)FTU_STATUS_MASK;
}

/**
 * @brief Clear FTU channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_ClearChannelInterruptFlag(FTU_Type *pFtu, uint8 u8Channel)
{

#ifdef FTU_STATUS_CHNICOF_MASK
    pFtu->STATUS &= ~((uint32)FTU_STATUS_CHNICOF(u8Channel) | (uint32)FTU_STATUS_CHNF(u8Channel));
#else
    pFtu->STATUS &= ~(uint32)FTU_STATUS_CHNF(u8Channel);
#endif
}

/**
 * @brief Configure channel to PWM mode
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_SetChannelPwmMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Configure channel to PWM combine mode
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_SetChannelPwmCombineMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Disable channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_DisableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_CHIE_MASK;
}

/**
 * @brief Enable the channel Dma mode
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_EnableChannelDma(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_DMA_MASK;
}

/**
 * @brief Disable the channel Dma mode
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_DisableChannelDma(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_DMA_MASK;
}

/**
 * @brief Read final value of channel output
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return Channel final output value
 */
LOCAL_INLINE uint32 FTU_HWA_ReadChannelOutputValue(FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)(pFtu->CONTROLS[u8Channel].CnSC & FTU_CSC_CHOV_MASK);
}

/**
 * @brief Clear MODE[FTUEN], this field define different free running counter and synchronization
 * behavior.
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_ClearModuleUpdateRegBySync(FTU_Type *pFtu)
{
    pFtu->MODE &= ~(uint32)FTU_MODE_FTUEN_MASK;
}

/**
 * @brief Set MODE[FTUEN], this field define different free running counter and synchronization
 * behavior.
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_SetModuleUpdateRegBySync(FTU_Type *pFtu)
{
    pFtu->MODE |= (uint32)FTU_MODE_FTUEN_MASK;
}

/**
 * @brief Disable generate FTU software trigger
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableGenerateSwSync(FTU_Type *pFtu)
{
    pFtu->SYNC &= ~(uint32)FTU_SYNC_SWSYNC_MASK;
}

/**
 * @brief Disable FTU module fault interrupt
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableModuleFaultInterrupt(FTU_Type *pFtu)
{
    pFtu->MODE &= ~(uint32)FTU_MODE_FAULTIE_MASK;
}

/**
 * @brief Disable write protection
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableWriteProtection(FTU_Type *pFtu)
{
    if (0u != (pFtu->FMS & FTU_FMS_WPEN_MASK))
    {
        pFtu->MODE |= (uint32)FTU_MODE_WPDIS_MASK;
    }
}

/**
 * @brief Generate FTU software trigger
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_GenerateSwSync(FTU_Type *pFtu)
{
    pFtu->SYNC |= (uint32)FTU_SYNC_SWSYNC_MASK;
}

/**
 * @brief Clear FTU module all fault flag
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_ClearModuleAllFaultFlag(FTU_Type *pFtu)
{
    pFtu->FMS &= ~(uint32)(FTU_FMS_FAULTF_MASK | FTU_FMS_FAULTF1_MASK | FTU_FMS_FAULTF0_MASK);
}

/**
 * @brief Read FTU module fault detection flag
 *
 * @param pFtu FTU instance
 * @return FTU fault detection flag
 */
LOCAL_INLINE uint32 FTU_HWA_ReadModuleFaultDetectionFlag(FTU_Type *pFtu)
{
    return (uint32)(pFtu->FMS & (uint32)FTU_FMS_FAULTF_MASK);
}

/**
 * @brief Enable FTU module channel(n) output
 *
 * @param pFtu FTU instance
 * @param u8Channel 0-7 bit indicate 0-7 channel
 */
LOCAL_INLINE void FTU_HWA_EnableChannelsOutput(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->SC |= (uint32)FTU_SC_CHNOUTEN(u8Channel);
}

/**
 * @brief Enable FTU module cpwm mode
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_EnableModuleCpwmMode(FTU_Type *pFtu)
{
    pFtu->SC |= (uint32)FTU_SC_CPWMS_MASK;
}

/**
 * @brief Disable FTU module cpwm mode
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableModuleCpwmMode(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_CPWMS_MASK;
}

/**
 * @brief Selects the external clock as the FTU function clock
 *
 * @param pFtu the base address of the FTU instance
 * @param eTclk FTU external clock  enumeration
 */
LOCAL_INLINE void FTU_HWA_SetExternalClkSrc(FTU_Type *pFtu, uint32 eTclk)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC           = (u32RegValue & ~(uint32)FTU_SC_TCKSEL_MASK) | FTU_SC_TCKSEL(eTclk);
}

/**
 * @brief Clear FTU module overflow flag
 *
 * @param pFtu      -FTU instance
 */
LOCAL_INLINE void FTU_HWA_ClearReloadFlag(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_RF_MASK;
}

/**
 * @brief Clear FTU module overflow flag
 *
 * @param pFtu      -FTU instance
 */
LOCAL_INLINE void FTU_HWA_ClearOverflowFlag(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_TOF_MASK;
}

LOCAL_INLINE uint32 FTU_HWA_ReadModuleOverflowFlag(FTU_Type *pFtu)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (uint32)((pFtu->SC) & (uint32)(FTU_SC_TOF_MASK));
    /* PRQA S 4304 -- */
}

LOCAL_INLINE uint32 FTU_HWA_ReadModuleOverflowIntrEnable(FTU_Type *pFtu)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (uint32)((pFtu->SC) & (uint32)(FTU_SC_TOIE_MASK));
    /* PRQA S 4304 -- */
}

/**
 * @brief Read FTU module fault interrupt enable
 *
 * @param pFtu the base address of the FTU instance
 * @return FTU fault interrupt enable
 */
LOCAL_INLINE uint32 FTU_HWA_ReadFaultIntrEnable(FTU_Type *pFtu)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (uint32)((pFtu->MODE) & (uint32)(FTU_MODE_FAULTIE_MASK));
    /* PRQA S 4304 -- */
}

/**
 * @brief Read FTU module fault(n) flag
 *
 * @param pFtu the base address of the FTU instance
 * @return FTU fault flag
 */
LOCAL_INLINE uint32 FTU_HWA_ReadModuleFaultFlag(FTU_Type *pFtu)
{
    return (uint32)(pFtu->FMS & (uint32)0xFU);
}

/**
 * @brief Read FTU channel interrupt flag
 *
 * @param pFtu the base address of the FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return FTU channel interrupt flag
 */
LOCAL_INLINE uint32 FTU_HWA_ReadChannelInterruptFlag(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (uint32)((pFtu->CONTROLS[u8Channel].CnSC) & (uint32)FTU_CSC_CHF_MASK);
    /* PRQA S 4342 -- */
}

/**
 * @brief Read FTU channel interrupt enable flag
 *
 * @param pFtu the base address of the FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return FTU channel interrupt flag
 */
LOCAL_INLINE uint32 FTU_HWA_ReadChannelInterruptEnable(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The conversion from _bool to unsigned char is safety */
    return (uint32)((pFtu->CONTROLS[u8Channel].CnSC) & (uint32)FTU_CSC_CHIE_MASK);
    /* PRQA S 4304 -- */
}

/**
 * @brief Disable FTU module output mask synchronization
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void FTU_HWA_DisableOutputMaskBySync(FTU_Type *pFtu)
{
    pFtu->SYNC &= ~(uint32)FTU_SYNC_SYNCHOM_MASK;
}

/**
 * @brief Set FTU module filter prescale
 *
 * @param pFtu          -FTU instance
 * @param u8FilterPs     -FTU clock filter prescaler enumeration
 */
LOCAL_INLINE void FTU_HWA_SetModuleFilterPrescale(FTU_Type *pFtu, uint8 u8FilterPs)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC           = (u32RegValue & ~(uint32)FTU_SC_FLTPS_MASK) | FTU_SC_FLTPS(u8FilterPs);
}

/**
 * @brief Configure input capture filter
 *
 * @param pFtu          -FTU instance
 * @param u32RegValue   -Filter register value
 */
LOCAL_INLINE void FTU_HWA_ConfigInputCaptureFilter(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->FILTER = u32RegValue;
}

/**
 * @brief Configure debug mode
 * @param pFtu          -FTU instance
 * @param eDebugmode   -FTU Debug mode
 */
LOCAL_INLINE void FTU_HWA_ConfigDebugMode(FTU_Type *pFtu, uint8 u8Debugmode)
{
    pFtu->CONF &= ~(uint32)FTU_CONF_DBG_MASK;
    pFtu->CONF |= FTU_CONF_DBG(u8Debugmode);
}

/**
 * @brief Configure gtb mode
 * @param pFtu          -FTU instance
 * @param eDebugmode   -FTU gtb mode
 */
LOCAL_INLINE void FTU_HWA_ConfigGTBMode(FTU_Type *pFtu, uint8 u8GtbMode)
{
    pFtu->CONF &= ~(uint32)FTU_CONF_GTBEEN_MASK;
    pFtu->CONF |= FTU_CONF_GTBEEN(u8GtbMode);
}

/**
 * @brief Configure input capture mode channel to capture on rising edge only
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_SetChannelInputCaptureOnRising(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Configure input capture mode channel to capture on falling edge only
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_SetChannelInputCaptureOnFalling(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Configure input capture mode channel to capture on both edge
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_SetChannelInputCaptureOnBoth(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Channel (n) Edge and Level Select
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void FTU_HWA_ClearChannelEdgeConfig(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Read maximum count of the FTU instance
 *
 * @param pFtu          -FTU instance
 * @return              FTU maximum count
 */
LOCAL_INLINE uint32 FTU_HWA_ReadMaxCount(FTU_Type *pFtu)
{
    return ((uint32)(pFtu->MOD)) & ((uint32)FTU_MOD_MOD_MASK);
}

/**
 * @brief Read input state of a FTU channel
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel
 * @return              FTU input state
 */
LOCAL_INLINE uint32 FTU_HWA_ReadInputState(FTU_Type *pFtu, uint8 u8Channel)
{
    return ((uint32)pFtu->CONTROLS[u8Channel].CnSC) & ((uint32)FTU_CSC_CHIS_MASK);
}

/**
 * @brief Config the channel icm mode
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel
 * @param eMode         -Icm mode
 */
LOCAL_INLINE void FTU_HWA_ConfigIcmMode(FTU_Type *pFtu, uint8 u8Channel, FTU_MeasurementModeType eMode)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ICM_MODE(eMode);
}

LOCAL_INLINE void FTU_HWA_ClearIcmMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ICM_MODE_MASK;
}

LOCAL_INLINE uint32 FTU_HWA_GetIcmMode(FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)(pFtu->CONTROLS[u8Channel].CnSC & FTU_CSC_ICM_MODE_MASK);
}

LOCAL_INLINE void FTU_HWA_SetIcmContinuonsMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= FTU_CSC_ICM_CONT_MASK;
}

LOCAL_INLINE void FTU_HWA_DisableMeasureStartImmd(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ICM_START_MASK;
}

LOCAL_INLINE void FTU_HWA_DisableChannelMatchTriggerAndInterrupt(FTU_Type *pFtu, uint8 u8DisTrigValue)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_UPDOWN_DIS_MASK) | FTU_SC_UPDOWN_DIS(u8DisTrigValue);
}

#ifdef __cplusplus
}
#endif

#endif /* FTU_REGOPS_H */

/** @} */

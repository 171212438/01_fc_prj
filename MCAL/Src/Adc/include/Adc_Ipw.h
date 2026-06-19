/**
 *   @file    Adc_Ipw.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - IP bridge layer.
 *   @details This is the IP bridge layer driver header file for ADC.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ADC
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
*   1.0.0       05/11/2024    QXW0030       N/A          Initial Commit
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifndef ADC_IPW_H
#define ADC_IPW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_Types.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define Adc_Ipw_InitUnitHardware(Type, Unit, pUnitCfg, CoreId) \
    g_Adc_InitUnitHardwareFunc[(Type)](Unit, pUnitCfg, CoreId)

#if (ADC_DEINIT_API == STD_ON)
#define Adc_Ipw_DeInitUnitHardware(Type, Unit, pUnitCfg, CoreId) \
    g_Adc_DeInitUnitHardwareFunc[(Type)](Unit, pUnitCfg, CoreId)
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
#define Adc_Ipw_EnableHardwareTrigger(Type, Unit, pGroupPtr, CoreId) \
    g_Adc_EnableHardwareTriggerFunc[(Type)](Unit, pGroupPtr, CoreId)
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
#define Adc_Ipw_StartGroupConversion(Type, Unit, pGroupPtr, CoreId) \
    g_Adc_StartGroupConversionFunc[(Type)](Unit, pGroupPtr, CoreId)
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

#define Adc_Ipw_DropConvResults(Type, Unit, u8NumReg) \
    g_Adc_DropConvResultsFunc[(Type)](Unit, u8NumReg)

#define Adc_Ipw_ConfigurePartialConversion(Type, Unit, pGroupPtr, CoreId, eTrigger, u8NumChannel) \
    g_Adc_ConfigurePartialConversionFunc[(Type)](Unit, pGroupPtr, CoreId, eTrigger, u8NumChannel)

#if (ADC_DMA_SUPPORT == STD_ON)
#define Adc_Ipw_ConfigureDmaChannel(Type, Unit, pGroupPtr, CoreId) \
    g_Adc_ConfigureDmaChannelFunc[(Type)](Unit, pGroupPtr, CoreId)
#endif /* ADC_DMA_SUPPORT == STD_ON */

#define Adc_Ipw_StopGroupConversion(Type, Unit, pGroupPtr, CoreId) \
    g_Adc_StopGroupConversionFunc[(Type)](Unit, pGroupPtr, CoreId)

#define Adc_Ipw_WaitConversionStopped(Type, Unit) g_Adc_WaitConversionStoppedFunc[(Type)](Unit)

#define Adc_Ipw_RestartContinuousConversion(Type, Unit, pGroupPtr, CoreId) \
    g_Adc_RestartContinuousConversionFunc[(Type)](Unit, pGroupPtr, CoreId)

#define Adc_Ipw_CheckSequenceStatusWoInterrupt(Type, Unit, pGroupPtr) \
    g_Adc_CheckSequenceStatusWoInterruptFunc[(Type)](Unit, pGroupPtr)

#define Adc_Ipw_GetSequenceResults(Type, Unit, pGroupPtr, CoreId, pDataPtr) \
    g_Adc_GetSequenceResultsFunc[(Type)](Unit, pGroupPtr, CoreId, pDataPtr)
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef Std_ReturnType (*Adc_InitUnitHardwareFuncType)(const Adc_HwUnitType               Unit,
                                                       const Adc_HwUnitConfigurationType *pUnitCfg,
                                                       const uint8                        CoreId);

typedef void (*Adc_DeInitUnitHardwareFuncType)(const Adc_HwUnitType               Unit,
                                               const Adc_HwUnitConfigurationType *pUnitCfg,
                                               const uint8                        CoreId);

typedef void (*Adc_EnableHardwareTriggerFuncType)(const Adc_HwUnitType              Unit,
                                                  const Adc_GroupConfigurationType *pGroupPtr,
                                                  const uint8                       CoreId);

typedef void (*Adc_StartGroupConversionFuncType)(const Adc_HwUnitType              Unit,
                                                 const Adc_GroupConfigurationType *pGroupPtr,
                                                 const uint8                       CoreId);

typedef void (*Adc_DropConvResultsFuncType)(const Adc_HwUnitType Unit, const uint8 u8NumReg);

typedef void (*Adc_ConfigurePartialConversionFuncType)(const Adc_HwUnitType              Unit,
                                                       const Adc_GroupConfigurationType *pGroupPtr,
                                                       const uint8                       CoreId,
                                                       const Adc_TriggerSourceType       eTrigger);

typedef void (*Adc_ConfigureDmaChannelFuncType)(const Adc_HwUnitType              Unit,
                                                const Adc_GroupConfigurationType *pGroupPtr,
                                                const uint8                       CoreId);

typedef void (*Adc_StopGroupConversionFuncType)(const Adc_HwUnitType              Unit,
                                                const Adc_GroupConfigurationType *pGroupPtr,
                                                const uint8                       CoreId);

typedef Std_ReturnType (*Adc_WaitConversionStoppedFuncType)(const Adc_HwUnitType Unit);

typedef void (*Adc_RestartContinuousConversionFuncType)(const Adc_HwUnitType              Unit,
                                                        const Adc_GroupConfigurationType *pGroupPtr,
                                                        const uint8                       CoreId);

typedef Std_ReturnType (*Adc_CheckSequenceStatusWoInterruptFuncType)(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr);

typedef Std_ReturnType (*Adc_GetSequenceResultsFuncType)(const Adc_HwUnitType Unit,
                                                         const Adc_GroupConfigurationType *pGroupPtr,
                                                         const uint8         CoreId,
                                                         Adc_ValueGroupType *pDataPtr);

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define ADC_START_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"

ADC_DATA_SECTION extern const Adc_InitUnitHardwareFuncType g_Adc_InitUnitHardwareFunc[];

#if (ADC_DEINIT_API == STD_ON)
ADC_DATA_SECTION extern const Adc_DeInitUnitHardwareFuncType g_Adc_DeInitUnitHardwareFunc[];
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_DATA_SECTION extern const Adc_EnableHardwareTriggerFuncType g_Adc_EnableHardwareTriggerFunc[];
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
ADC_DATA_SECTION extern const Adc_StartGroupConversionFuncType g_Adc_StartGroupConversionFunc[];
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

ADC_DATA_SECTION extern const Adc_DropConvResultsFuncType g_Adc_DropConvResultsFunc[];

ADC_DATA_SECTION extern const Adc_ConfigurePartialConversionFuncType
    g_Adc_ConfigurePartialConversionFunc[];

#if (ADC_DMA_SUPPORT == STD_ON)
ADC_DATA_SECTION extern const Adc_ConfigureDmaChannelFuncType g_Adc_ConfigureDmaChannelFunc[];
#endif /* ADC_DMA_SUPPORT == STD_ON */

ADC_DATA_SECTION extern const Adc_StopGroupConversionFuncType g_Adc_StopGroupConversionFunc[];

ADC_DATA_SECTION extern const Adc_WaitConversionStoppedFuncType g_Adc_WaitConversionStoppedFunc[];

ADC_DATA_SECTION extern const Adc_RestartContinuousConversionFuncType
    g_Adc_RestartContinuousConversionFunc[];

ADC_DATA_SECTION extern const Adc_CheckSequenceStatusWoInterruptFuncType
    g_Adc_CheckSequenceStatusWoInterruptFunc[];

ADC_DATA_SECTION extern const Adc_GetSequenceResultsFuncType g_Adc_GetSequenceResultsFunc[];

#define ADC_STOP_SEC_CONST_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if (ADC_MULTICORE_SUPPORT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_GetSpinLock(void);

ADC_TEXT_SECTION void Adc_ReleaseSpinLock(void);
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */

#if ((ADC_ENABLE_HSADC_SUPPORT == STD_ON) && (HSADC_INIT_CALIBRATION == STD_ON))
ADC_TEXT_SECTION Std_ReturnType Adc_Ipw_WaitCalibrationDone(
    const Adc_HwUnitConfigurationType *const *pConfigPtr,
    const uint8                               u8UsedUnits,
    uint8                                     u8CoreId);
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON && HSADC_INIT_CALIBRATION == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_IPW_H */

/** @} */

/**
 *   @file    Adc_HsAdc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver header file.
 *   @details ADC hardware driver API.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : HSADC
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
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/
#ifndef ADC_HSADC_H
#define ADC_HSADC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_HsAdc_Reg.h"
#include "Adc_Types.h"
#ifdef ADC_DMA_SUPPORTED
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_InitUnitHardware(const Adc_HwUnitType Unit,
                                                           const Adc_HwUnitConfigurationType *pUnitCfg,
                                                           const uint8 CoreId);

#if (HSADC_INIT_CALIBRATION == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_GetCalibrationStatus(
    const Adc_HwUnitType               Unit,
    const Adc_HwUnitConfigurationType *pUnitCfg,
    const uint8                        CoreId);
#endif /* HSADC_INIT_CALIBRATION == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_HsAdc_DeInitUnitHardware(const Adc_HwUnitType               Unit,
                                                   const Adc_HwUnitConfigurationType *pUnitCfg,
                                                   const uint8                        CoreId);
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION void Adc_HsAdc_EnableHardwareTrigger(const Adc_HwUnitType              Unit,
                                                      const Adc_GroupConfigurationType *pGroupPtr,
                                                      const uint8                       CoreId);
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
ADC_TEXT_SECTION void Adc_HsAdc_StartGroupConversion(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId);
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

ADC_TEXT_SECTION void Adc_HsAdc_DropConvResults(const Adc_HwUnitType Unit, const uint8 u8NumReg);

ADC_TEXT_SECTION void Adc_HsAdc_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                           const Adc_GroupConfigurationType *pGroupPtr,
                                                           const uint8                 CoreId,
                                                           const Adc_TriggerSourceType eTrigger);

#if (ADC_DMA_SUPPORT == STD_ON)
ADC_TEXT_SECTION void Adc_HsAdc_ConfigureDmaChannel(const Adc_HwUnitType              Unit,
                                                    const Adc_GroupConfigurationType *pGroupPtr,
                                                    const uint8                       CoreId);
#endif /* ADC_DMA_SUPPORT == STD_ON */

ADC_TEXT_SECTION void Adc_HsAdc_StopGroupConversion(const Adc_HwUnitType              Unit,
                                                    const Adc_GroupConfigurationType *pGroupPtr,
                                                    const uint8                       CoreId);

ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_WaitConversionStopped(const Adc_HwUnitType Unit);

ADC_TEXT_SECTION void Adc_HsAdc_RestartContinuousConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const uint8 CoreId);

#if ((defined(HSADC_UNIT_0_ISR_USED)) || (defined(HSADC_UNIT_1_ISR_USED)) || \
     (defined(HSADC_UNIT_2_ISR_USED)) || (defined(HSADC_UNIT_3_ISR_USED)))
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckHwGroupStatus(const Adc_HwUnitType Unit,
                                                             const uint8          HwGroupId);
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckSequenceStatus(const Adc_HwUnitType Unit,
                                                              const Adc_GroupType  Group,
                                                              const uint8          CoreId);
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
#endif /* (defined(HSADC_UNIT_0_ISR_USED)) || (defined(HSADC_UNIT_1_ISR_USED)) ... */

ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckSequenceStatusWoInterrupt(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr);

ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_GetSequenceResults(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId,
    Adc_ValueGroupType               *pDataPtr);

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_HsAdc_CheckOverrun(const Adc_HwUnitType              Unit,
                                                       const Adc_GroupConfigurationType *pGroupPtr);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_HSADC_H */

/** @} */

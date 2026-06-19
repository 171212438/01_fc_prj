/**
 *   @file    Adc_SarAdc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - low level driver header file.
 *   @details ADC hardware driver API.
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       11/10/2024    QXW0030       N/A          Clear FIFO when overrun occurs
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
==================================================================================================*/
#ifndef ADC_SARADC_H
#define ADC_SARADC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_SarAdc_Reg.h"
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
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_InitUnitHardware(const Adc_HwUnitType Unit,
                                                            const Adc_HwUnitConfigurationType *pUnitCfg,
                                                            const uint8 CoreId);

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_SarAdc_DeInitUnitHardware(const Adc_HwUnitType               Unit,
                                                    const Adc_HwUnitConfigurationType *pUnitCfg,
                                                    const uint8                        CoreId);
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION void Adc_SarAdc_EnableHardwareTrigger(const Adc_HwUnitType              Unit,
                                                       const Adc_GroupConfigurationType *pGroupPtr,
                                                       const uint8                       CoreId);
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if ((ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON))
ADC_TEXT_SECTION void Adc_SarAdc_StartGroupConversion(const Adc_HwUnitType              Unit,
                                                      const Adc_GroupConfigurationType *pGroupPtr,
                                                      const uint8                       CoreId);
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) || (ADC_ENABLE_QUEUING == STD_ON) */

ADC_TEXT_SECTION void Adc_SarAdc_DropConvResults(const Adc_HwUnitType Unit, const uint8 u8NumReg);

ADC_TEXT_SECTION void Adc_SarAdc_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const uint8                 CoreId,
                                                            const Adc_TriggerSourceType eTrigger);

#if (ADC_DMA_SUPPORT == STD_ON)
ADC_TEXT_SECTION void Adc_SarAdc_ConfigureDmaChannel(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId);
#endif /* ADC_DMA_SUPPORT == STD_ON */

ADC_TEXT_SECTION void Adc_SarAdc_StopGroupConversion(const Adc_HwUnitType              Unit,
                                                     const Adc_GroupConfigurationType *pGroupPtr,
                                                     const uint8                       CoreId);

ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_WaitConversionStopped(const Adc_HwUnitType Unit);

ADC_TEXT_SECTION void Adc_SarAdc_RestartContinuousConversion(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId);

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_UNIT_2_ISR_USED)) || (defined(ADC_UNIT_3_ISR_USED)) || \
     (defined(ADC_UNIT_4_ISR_USED)) || (defined(ADC_UNIT_5_ISR_USED)))
#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckHwGroupStatus(const Adc_HwUnitType Unit,
                                                              const uint8          HwGroupId);
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#if (ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckSequenceStatus(const Adc_HwUnitType Unit,
                                                               const Adc_GroupType  Group,
                                                               const uint8          CoreId);
#endif /* ADC_ISR_SPURIOUS_CHECK_SUPPORT == STD_ON */
#endif /* (defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) ... */

ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckSequenceStatusWoInterrupt(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr);

ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_GetSequenceResults(
    const Adc_HwUnitType              Unit,
    const Adc_GroupConfigurationType *pGroupPtr,
    const uint8                       CoreId,
    Adc_ValueGroupType               *pDataPtr);

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_SarAdc_CheckOverrun(const Adc_HwUnitType Unit,
                                                        const Adc_GroupConfigurationType *pGroupPtr);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
#if (ADC_DMA_SUPPORT == STD_ON)
ADC_TEXT_SECTION void Adc_SarAdc_ReConfigureDma(const Adc_HwUnitType              Unit,
                                                const Adc_GroupConfigurationType *pGroupPtr,
                                                const uint8                       CoreId);
#endif /* ADC_DMA_SUPPORT == STD_ON */
#endif /* defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_SARADC_H */

/** @} */

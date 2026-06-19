/**
 *   @file    Adc_Ptimer.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ADC Ptimer header file.
 *   @details ADC Ptimer low level driver API.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PTIMER
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
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.4.0       12/09/2025    QXW0030       N/A          Add Ptimer trigger Hw group support
==================================================================================================*/

#ifndef ADC_PTIMER_H
#define ADC_PTIMER_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Cfg.h"
#include "Adc_Ptimer_Types.h"
#include "Adc_Ptimer_Reg.h"
#include "Adc_SarAdc_Reg.h"
#ifdef ADC_DMA_SUPPORTED
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define ADC_PTIMER_CHANNELS_USED(x) ((((x) % 8U) != 0U) ? (((x) / 8U) + 1U) : ((x) / 8U))
#define ADC_NUM_CHANNELS_USED(x)    ((((x) >> 3U) != 0U) ? 8U : (x))
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
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

ADC_TEXT_SECTION void Adc_Ptimer_InitUnitHardware(const Adc_HwUnitType Unit,
                                                  const uint32         u32PtimerClockConfig);

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_Ptimer_DeInitUnitHardware(const Adc_HwUnitType Unit);
#endif

ADC_TEXT_SECTION void Adc_Ptimer_ConfigurePartialConversion(const Adc_HwUnitType Unit,
                                                            const Adc_GroupConfigurationType *pGroupPtr,
                                                            const Adc_TriggerSourceType eTrigger);

ADC_TEXT_SECTION void Adc_Ptimer_StartSoftwareConversion(const Adc_HwUnitType Unit);

ADC_TEXT_SECTION void Adc_Ptimer_StopConversion(const Adc_HwUnitType Unit);

#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
ADC_TEXT_SECTION void Adc_Ptimer_ChannelSeqErr(const Adc_HwUnitType Unit);
#endif /* (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... ) */

#if (ADC_ENABLE_HWGROUP_SUPPORT == STD_ON)
ADC_TEXT_SECTION void Adc_Ptimer_StartHwGroupConversion(const Adc_HwUnitType Unit, uint8 u8Channel);
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_PTIMER_H */

/** @} */

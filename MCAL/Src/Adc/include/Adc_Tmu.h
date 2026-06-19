/**
 *   @file    Adc_Tmu.h
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

#ifndef ADC_TMU_H
#define ADC_TMU_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Cfg.h"
#include "Adc_Types.h"

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
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
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

ADC_TEXT_SECTION void Adc_Tmu_InitUnitHardware(const uint8                         Unit,
                                               const Adc_TmuUnitConfigurationType *pConfig);

#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_Tmu_WaitReady(const uint8                         Unit,
                                                  const Adc_TmuUnitConfigurationType *pConfig);
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_Tmu_DeInitUnitHardware(const uint8 Unit);
#endif

#if (STD_ON == ADC_CALC_TEMPERATURE_API)
ADC_TEXT_SECTION float32 Adc_Tmu_CalcTemperature(const uint8 Unit, float32 Voltage);
#endif /* STD_ON == ADC_CALC_TEMPERATURE_API */

#if (STD_ON == ADC_GET_TEMPERATURE_STATUS_API)
ADC_TEXT_SECTION AdcTemperatureStatusType Adc_Tmu_GetTemperatureStatus(const uint8 Unit);
#endif /* STD_ON == ADC_GET_TEMPERATURE_STATUS_API */

#if defined(ADC_TMU_UNIT_0_ISR_USED)
ADC_TEXT_SECTION void Adc_Tmu_ProcessInterrupt(const uint8 Unit);
#endif /* defined(ADC_TMU_UNIT_0_ISR_USED) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#ifdef __cplusplus
}
#endif

#endif /* ADC_TMU_H */

/** @} */

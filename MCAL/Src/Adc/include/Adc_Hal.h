/**
 *   @file    Adc_Hal.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ADC hardware abstraction layer header file.
 *   @details ADC hardware abstraction layer driver API.
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
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
==================================================================================================*/

#ifndef ADC_HAL_H
#define ADC_HAL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_CfgDefines.h"
#include "Adc_SarAdc_Reg.h"
#include "Adc_Types.h"
#ifdef ADC_DMA_SUPPORTED
#include "CDD_Dma.h"
#endif
#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
#include "Adc_Tmu.h"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* Get current ECU core ID */
#if (ADC_MULTICORE_SUPPORT == STD_ON)
#define Adc_GetCoreID() GET_CPU_ID()
#else
#define Adc_GetCoreID() (0U)
#endif /* ADC_MULTICORE_SUPPORT == STD_ON */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"
/**
 * @brief          Used for group status.
 */
ADC_DATA_SECTION extern Adc_GroupStatusType Adc_aGroupStatus[ADC_MAX_GROUPS];

/**
 * @brief          Used for unit status.
 */
ADC_DATA_SECTION extern Adc_UnitStatusType Adc_aUnitStatus[ADC_USED_HW_UNITS];

#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/**
 * @brief          Used to point the configuration structure.
 */
ADC_DATA_SECTION extern const Adc_ConfigType *Adc_Cfg_Ptr[ADC_MAX_PARTITIONS];

#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

ADC_TEXT_SECTION void Adc_Hal_Init(const Adc_ConfigType *pCfgPtr);

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_Hal_DeInit(const uint8 CoreId);
#endif /* (ADC_DEINIT_API == STD_ON) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
ADC_TEXT_SECTION void Adc_Hal_StartConversion(const Adc_HwUnitType Unit,
                                              const Adc_GroupType  Group,
                                              const uint8          CoreId);

ADC_TEXT_SECTION void Adc_Hal_StopConversion(const Adc_HwUnitType Unit,
                                             const Adc_GroupType  Group,
                                             const uint8          CoreId);
#endif /* ADC_ENABLE_START_STOP_GROUP_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION void Adc_Hal_EnableHardwareTrigger(const Adc_HwUnitType Unit,
                                                    const Adc_GroupType  Group,
                                                    const uint8          CoreId);

ADC_TEXT_SECTION void Adc_Hal_DisableHardwareTrigger(const Adc_HwUnitType Unit,
                                                     const Adc_GroupType  Group,
                                                     const uint8          CoreId);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

ADC_TEXT_SECTION void Adc_Hal_UpdateStatusGetData(const Adc_HwUnitType Unit,
                                                  const Adc_GroupType  Group,
                                                  const uint8          CoreId);

ADC_TEXT_SECTION void Adc_Hal_UpdateGroupStatusWithoutInterrupt(const Adc_GroupType Group,
                                                                const uint8         CoreId);

#if (ADC_READ_GROUP_API == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_Hal_ReadGroup(const Adc_GroupType Group,
                                                  const uint8         CoreId,
                                                  Adc_ValueGroupType *pDataPtr);
#endif /* ADC_READ_GROUP_API == STD_ON */

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
#if (ADC_CALC_TEMPERATURE_API == STD_ON)
#define Adc_Hal_CalcTemperature(Voltage) Adc_Tmu_CalcTemperature(0U, Voltage)
#endif /* ADC_CALC_TEMPERATURE_API == STD_ON */

#if (ADC_GET_TEMPERATURE_STATUS_API == STD_ON)
#define Adc_Hal_GetTemperatureStatus() Adc_Tmu_GetTemperatureStatus(0U);
#endif /* ADC_GET_TEMPERATURE_STATUS_API == STD_ON */
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_HW_H */

/** @} */

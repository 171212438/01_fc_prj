/**
*   @file    Mcu.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - driver API and development errors implementation.
*   @details  This file contains the MCU Autosar driver API and development errors implementation.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/

#ifndef MCU_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mcu_Cfg.h"

/*==================================================================================================
*                                            MACROS
==================================================================================================*/

/** @brief Default error values. [SWS_MCU_00012] */
#define MCU_E_PARAM_CONFIG              ((uint8)0x0AU)
#define MCU_E_PARAM_CLOCK               ((uint8)0x0BU)
#define MCU_E_PARAM_MODE                ((uint8)0x0CU)
#define MCU_E_PARAM_RAMSECTION          ((uint8)0x0DU)
#define MCU_E_PLL_NOT_LOCKED            ((uint8)0x0EU)
#define MCU_E_UNINIT                    ((uint8)0x0FU)
#define MCU_E_PARAM_POINTER             ((uint8)0x10U)
#define MCU_E_INIT_FAILED               ((uint8)0x11U)
#define MCU_E_ALREADY_INITIALIZED       ((uint8)0x12U)

#define MCU_E_CORE_MISMATCH             ((uint8)0x20U)

/** @brief Specifies the InstanceId of this module instance */
#define MCU_INSTANCE_ID                 ((uint8)0x0U)

/** @brief Service IDs for MCU APIs */
#define MCU_INIT_ID                     ((uint8)0x00U)
#define MCU_INITRAMSECTION_ID           ((uint8)0x01U)
#define MCU_INITCLOCK_ID                ((uint8)0x02U)
#define MCU_DISTRIBUTEPLLCLOCK_ID       ((uint8)0x03U)
#define MCU_GETPLLSTATUS_ID             ((uint8)0x04U)
#define MCU_GETRESETREASON_ID           ((uint8)0x05U)
#define MCU_GETRESETRAWVALUE_ID         ((uint8)0x06U)
#define MCU_PERFORMRESET_ID             ((uint8)0x07U)
#define MCU_SETMODE_ID                  ((uint8)0x08U)
#define MCU_GETVERSIONINFO_ID           ((uint8)0x09U)
#define MCU_GETRAMSTATE_ID              ((uint8)0x0AU)
#define MCU_ENABLECMU_ID                ((uint8)0x0BU)
#define MCU_DISABLECMU_ID               ((uint8)0x0CU)
#define MCU_DISABLEPMC_ID               ((uint8)0x0DU)
#define MCU_DISABLERGM_ID               ((uint8)0x0EU)
#define MCU_GETSOSCVALIDSTATUS_ID       ((uint8)0x0FU)

#define MCU_INITIALIZED                 ((boolean)0x01U)
#define MCU_UNINITIALIZED               ((boolean)0x00U)
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief Mcu_ConfigType_struct, used for Mcu_init API. [SWS_MCU_00249/00131] */
typedef struct
{
#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /**<   DEM error reporting configuration. [SWS_MCU_00054] */
    Mcu_DemConfigType* Mcu_pDemConfig;
#endif
#if (MCU_INIT_CLOCK == STD_ON)
    /**< @brief Total number of MCU clock configurations. */
    Mcu_ClockType Mcu_u8NoClkConfigs;
    /**<   Clock data configuration. [SWS_MCU_00031/00035] */
    const Mcu_ClockConfigType *Mcu_apClockConfig;
#endif /* (MCU_INIT_CLOCK == STD_ON) */
    /**<   MCU related  generic configuration. */
    const Mcu_ModuleConfigType *Mcu_pModuleConfig;
    /**<   Total number of RAM sections. */
    Mcu_RamSectionType Mcu_NoRamConfigs;
#ifndef MCU_MAX_NORAMCONFIGS
    /**<   RAM data configuration. [SWS_MCU_00030] */
    const Mcu_RamConfigType (*const Mcu_apRamConfig)[MCU_MAX_RAMCONFIGS];
#endif
    /**<   Total number of    MCU modes. */
    Mcu_ModeType Mcu_NoModeConfigs;
    /**<   Power Modes data configuration. */
    const Mcu_ModeConfigType *Mcu_apModeConfig;
} Mcu_ConfigType;


/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
extern const Mcu_ConfigType Mcu_Config;

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

void Mcu_Init(const Mcu_ConfigType* ConfigPtr);

Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection);

#if (MCU_INIT_CLOCK == STD_ON)
Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting);
#endif /* (MCU_INIT_CLOCK == STD_ON) */

void Mcu_SetMode(Mcu_ModeType McuMode);

#if (MCU_ENABLE_CMU == STD_ON)
void Mcu_EnableCmu(void);

void Mcu_DisableCmu(void);
#endif /* (MCU_ENABLE_CMU == STD_ON) */

#if (MCU_NO_PLL == STD_OFF)
Std_ReturnType Mcu_DistributePllClock(void);
#endif /* (MCU_NO_PLL == STD_OFF) */

Mcu_PllStatusType Mcu_GetPllStatus(void);

Mcu_ResetType Mcu_GetResetReason(void);

Mcu_RawResetType Mcu_GetResetRawValue(void);

#if MCU_PERFORM_RESET_API == STD_ON
void Mcu_PerformReset(void);
#endif /* (MCU_PERFORM_RESET_API == STD_ON) */

#if (MCU_VERSION_INFO_API == STD_ON)
void Mcu_GetVersionInfo(Std_VersionInfoType * pVersionInfo);
#endif /* (MCU_VERSION_INFO_API == STD_ON) */

#if (MCU_GET_RAM_STATE_API == STD_ON)
Mcu_RamStateType Mcu_GetRamState(void);
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

#if (MCU_ENABLE_PMC == STD_ON)
void Mcu_DisablePmc(void);
#endif /* (MCU_ENABLE_PMC == STD_ON) */

#if (MCU_ENABLE_RGM == STD_ON)
void Mcu_DisableRgm(void);
#endif /* (MCU_ENABLE_RGM == STD_ON) */

#if (MCU_SOSC_VALID_NO_WAIT == STD_ON)
Std_ReturnType Mcu_GetSoscValidStatus(void);
#endif /* (MCU_SOSC_VALID_NO_WAIT == STD_ON) */

#ifdef __cplusplus
}
#endif

/** @} */


#endif /* _MCU_H_ */


/**
 *   @file    Mcu.c
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       15/07/2024    QXW0055       N/A          Fix Misra-C warning
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/* Mcu.c shall include Mcu.h [FUNC_MCU_0033] */
#include "Mcu.h"
#include "Mcu_Hw.h"
#include "Mcu_Version.h"
#include "SchM_Mcu.h"

#if (MCU_DEV_ERROR_DETECT == STD_ON)
/* [SWS_MCU_00163/00017] */
#include "Det.h"
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */

#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MCU configuration header file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION != MCU_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION != MCU_CFG_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION != MCU_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Mcu_Version.h and Mcu_Cfg.h are different"
#endif

/* Check if current file and MCU configuration header file are of the same software version */
#if ((MCU_SW_MAJOR_VERSION != MCU_CFG_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION != MCU_CFG_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION != MCU_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Mcu_Version.h and Mcu_Cfg.h are different"
#endif

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/**
 *              Array for saving the Ram sectors configuration Ids.
 */
#define MCU_START_SEC_VAR_NO_INIT_8
#include "Mcu_MemMap.h"

#ifndef MCU_MAX_NORAMCONFIGS
MCU_DATA_SECTION static uint8 Mcu_au8RamConfigIds[MCU_MAX_RAMCONFIGS];
#endif /* (0 != MCU_MAX_RAMCONFIGS) */

#define MCU_STOP_SEC_VAR_NO_INIT_8
#include "Mcu_MemMap.h"

#if (MCU_DEV_ERROR_DETECT == STD_ON)
#define MCU_START_SEC_VAR_INIT_BOOLEAN
#include "Mcu_MemMap.h"

/* clang-format off */
/* Mcu initial status, must give initial value */
MCU_DATA_SECTION static boolean Mcu_bInitApiStatus[MCU_MAX_COREID_FORMAT] = MCU_DRIVER_STATUS_UNINIT_ARRAY;
/* clang-format on */

#define MCU_STOP_SEC_VAR_INIT_BOOLEAN
#include "Mcu_MemMap.h"
#endif

#if ((MCU_INIT_CLOCK == STD_ON) && (MCU_ENABLE_CMU == STD_ON))
#define MCU_START_SEC_VAR_INIT_8
#include "Mcu_MemMap.h"

/* clang-format off */
/* Store the clock setting number which called by Mcu_InitClock,
 * note: if Mcu_SetMode called before Mcu_InitClock, Mcu_u8ClockSetting use default 0 */
MCU_DATA_SECTION static Mcu_ClockType Mcu_u8ClockSetting[MCU_MAX_COREID_FORMAT] = MCU_DRIVER_CLOCK_SETTING_ARRAY;
/* clang-format on */

#define MCU_STOP_SEC_VAR_INIT_8
#include "Mcu_MemMap.h"
#endif

/**
 *              Local copy of the pointer to the configuration data
 */
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static const Mcu_ConfigType *Mcu_pConfigPtr = NULL_PTR;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTIONS PROTOTYPES
==================================================================================================*/

#if (MCU_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief Check Mcu_Init function input parameter
 *
 * @param pConfigPtr Mcu_Init input parameter pointer
 * @return Function status
 */
static Std_ReturnType Mcu_Init_CheckParameterValid(const Mcu_ConfigType *pConfigPtr);
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"
#if (MCU_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief Check Mcu_Init function input parameter
 *
 * @param pConfigPtr Mcu_Init input parameter pointer
 * @return Function status
 */
MCU_TEXT_SECTION static Std_ReturnType Mcu_Init_CheckParameterValid(const Mcu_ConfigType *pConfigPtr)
{
    Std_ReturnType CheckStatus = E_OK;

    /* PRQA S 2996 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: This paramter need to check for best */
    if ((NULL_PTR == pConfigPtr->Mcu_pModuleConfig) ||
#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        (NULL_PTR == pConfigPtr->Mcu_pDemConfig) ||
#endif
#ifndef MCU_MAX_NORAMCONFIGS
        (NULL_PTR == pConfigPtr->Mcu_apRamConfig) ||
#endif
#if (MCU_INIT_CLOCK == STD_ON)
        (NULL_PTR == pConfigPtr->Mcu_apClockConfig) ||
#endif
        (NULL_PTR == pConfigPtr->Mcu_apModeConfig))
    /* PRQA S 2996 -- */
    {
        CheckStatus = E_NOT_OK;
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_INIT_ID, MCU_E_PARAM_POINTER);
    }

    return CheckStatus;
}
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief MCU driver initialization function.
 *
 * @param ConfigPtr MCU configuration struct pointer
 * @note  [SWS_MCU_00153/00116/00026/00244-00247/FUNC_MCU_0005/FUNC_MCU_0031]
 */
MCU_TEXT_SECTION void Mcu_Init(const Mcu_ConfigType *ConfigPtr)
{
    uint8 u8CoreId = GET_CPU_ID();

#ifndef MCU_MAX_NORAMCONFIGS
    /* Temporary variable for looping all the configurations. */
    uint32 u32NoConfigs;
#endif
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */

#if (MCU_PRECOMPILE_SUPPORT == STD_ON)
    /* [SWS_MCU_00126] */
    (void)ConfigPtr;
    Mcu_pConfigPtr = &Mcu_Config;
#else
    Mcu_pConfigPtr = ConfigPtr;
#endif

    if (0U == u8CoreId)
    {
#if (MCU_DEV_ERROR_DETECT == STD_ON)
        if (MCU_UNINITIALIZED != Mcu_bInitApiStatus[u8CoreId])
        {
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_INIT_ID,
                                  MCU_E_ALREADY_INITIALIZED);
            CheckStatus = E_NOT_OK;
        }
        else
        {
#if (MCU_PRECOMPILE_SUPPORT == STD_OFF)
            /* If pre-compile do not support, check the input pointer is NULL_PTR or not */
            if (NULL_PTR == Mcu_pConfigPtr)
            {
                CheckStatus = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                      MCU_INSTANCE_ID,
                                      MCU_INIT_ID,
                                      MCU_E_PARAM_POINTER);
            }
            else
#endif /* (MCU_PRECOMPILE_SUPPORT == STD_OFF) */
            {
                CheckStatus = Mcu_Init_CheckParameterValid(Mcu_pConfigPtr);
            }
        }
        if ((Std_ReturnType)E_OK == CheckStatus)
        {
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */

            /* clang-format off */
#ifndef MCU_MAX_NORAMCONFIGS
            /* Save the Mcu Ram Sector IDs configurations. */
            for (u32NoConfigs = (uint32)0U; u32NoConfigs < Mcu_pConfigPtr->Mcu_NoRamConfigs; u32NoConfigs++)
            {
                Mcu_au8RamConfigIds[(*Mcu_pConfigPtr->Mcu_apRamConfig)[u32NoConfigs].Mcu_RamSectorId] = (uint8)u32NoConfigs;
            }
#endif
            /* clang-format on */

#if (MCU_ENABLE_RGM == STD_ON)
            /* Init the RGM module. [FUNC_MCU_0044] */
            Mcu_Hw_RgmInit(Mcu_pConfigPtr->Mcu_pModuleConfig->RGM_pResetConfig);
#endif

#if (MCU_ENABLE_PMC == STD_ON)
            /* Configure the Power Management Unit. [FUNC_MCU_0004/0042] */
            Mcu_Hw_PmcPowerInit(Mcu_pConfigPtr->Mcu_pModuleConfig->PMC_pConfig);
#endif

#if (MCU_DEV_ERROR_DETECT == STD_ON)
            Mcu_bInitApiStatus[u8CoreId] = MCU_INITIALIZED;
        }
        else
        {
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_INIT_ID,
                                  MCU_E_INIT_FAILED);
        }
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
#if (MCU_DEV_ERROR_DETECT == STD_ON)
        /* PRQA S 2841 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
         * Reason: GET_CPU_ID will not overflow */
        Mcu_bInitApiStatus[u8CoreId] = MCU_INITIALIZED;
        /* PRQA S 2841 -- */
#endif
    }
}

/**
 * @brief  MCU driver initialization of Ram sections.
 *
 * @param  RamSection Definition(IDs) for a RAM section, configure via the configuration structure
 * @return Function status
 * @note   [SWS_MCU_00154/00011/00136]
 */
MCU_TEXT_SECTION Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection)
{
    /* Result of the operation. */
    Std_ReturnType bRamStatus = (Std_ReturnType)E_NOT_OK;
#ifndef MCU_MAX_NORAMCONFIGS

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    /* Variable for index in RAM sections. */
    Mcu_RamIndexType RamCounter;
    /* Pointer to RAM configuration: base addr, size, default value. */
    const Mcu_RamConfigType *pRamConfigPtr;
    uint32                   u32TempValue;

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();

    /* PRQA S 2841 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
     * Reason: GET_CPU_ID will not overflow */
    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    /* PRQA S 2841 -- */
    {
        /* Report to DET */
        (void)Det_ReportError((uint16)MCU_MODULE_ID,
                              MCU_INSTANCE_ID,
                              MCU_INITRAMSECTION_ID,
                              MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    if ((Std_ReturnType)E_OK == CheckStatus)
    {
        /* Check if Ram memory configuration is valid. [SWS_MCU_00021] */
        if (RamSection >= (Mcu_pConfigPtr->Mcu_NoRamConfigs))
        {
            CheckStatus = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_INITRAMSECTION_ID,
                                  MCU_E_PARAM_RAMSECTION);
        }
        else
        {
            /* Check if Ram memory configuration is valid. */
            if (&(*Mcu_pConfigPtr->Mcu_apRamConfig)[Mcu_au8RamConfigIds[RamSection]] == NULL_PTR)
            {
                CheckStatus = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                      MCU_INSTANCE_ID,
                                      MCU_INITRAMSECTION_ID,
                                      MCU_E_PARAM_RAMSECTION);
            }
        }
    }

    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        /* Get Ram settings from the configuration structure. */
        pRamConfigPtr = &(*Mcu_pConfigPtr->Mcu_apRamConfig)[Mcu_au8RamConfigIds[RamSection]];

        u32TempValue = ((uint32)(pRamConfigPtr->Mcu_u8RamDefaultValue) << 8U) |
                       (pRamConfigPtr->Mcu_u8RamDefaultValue);
        u32TempValue = (u32TempValue << 16U) | u32TempValue;

        /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 Pointer cast to stricter alignment.
         * Reason: A different pointer cast and arithmetic should be performed Here Unavoidably. */
        /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 Casting to different object pointer type.
         * Reason: A different pointer cast and arithmetic should be performed Here Unavoidably. */
        /* ram size is multiple of 4 which is limit by configuration */
        for (RamCounter = (Mcu_RamIndexType)0UL;
             RamCounter < ((Mcu_RamSizeType)(pRamConfigPtr->Mcu_RamSize / 4U));
             RamCounter++)
        {
            (*((uint32(*)[1U])(pRamConfigPtr->Mcu_pu8RamBaseAddr)))[RamCounter] = u32TempValue;
        }

        bRamStatus = (Std_ReturnType)E_OK;

        /* Check if RAM was initialized correctly. */
        for (RamCounter = (Mcu_RamIndexType)0UL;
             RamCounter < ((Mcu_RamSizeType)(pRamConfigPtr->Mcu_RamSize / 4U));
             RamCounter++)
        {
            if (((*((uint32(*)[1U])(pRamConfigPtr->Mcu_pu8RamBaseAddr)))[RamCounter]) != u32TempValue)
            {
                bRamStatus = (Std_ReturnType)E_NOT_OK;
                break;
            }
        }
        /* PRQA S 3305 -- */
        /* PRQA S 0310 -- */
    }
#else
    (void)RamSection;
#endif /* #ifndef MCU_MAX_NORAMCONFIGS */

    return (Std_ReturnType)bRamStatus;
}

#if (MCU_INIT_CLOCK == STD_ON)
/* SWS_Mcu_00210: The function Mcu_InitClock shall be disabled if the
   parameter McuInitClock is set to FALSE. */
/**
 * @brief  This service initializes the PLL and other MCU specific clock options
 * @param[in]        ClockSetting   Clock setting ID from config structure to be used.
 * @return           Command has or has not been accepted.
 * @implements       SWS_Mcu_00137: The function Mcu_InitClock shall initialize the PLL
 *                   and other MCU specific clock options.
 *                   The clock configuration parameters are provided via the configuration structure.
 * @note             [SWS_MCU_00152/00248/00226/00155/00137/00139/00210]
 */
MCU_TEXT_SECTION Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)
{
    Std_ReturnType CheckStatus;
    uint8          u8CoreId = GET_CPU_ID();

    if (0U != u8CoreId)
    {
#if (MCU_DEV_ERROR_DETECT == STD_ON)
        /* PRQA S 2841 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
         * Reason: GET_CPU_ID will not overflow */
        if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
        /* PRQA S 2841 -- */
        {
            /* Report to DET */
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_INITCLOCK_ID,
                                  MCU_E_UNINIT);
            CheckStatus = E_NOT_OK;
        }
        else
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
        {
            CheckStatus = (Std_ReturnType)E_OK;
        }
    }
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    else
    {
        CheckStatus = E_OK;
        if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
        {
            /* Report to DET */
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_INITCLOCK_ID,
                                  MCU_E_UNINIT);
            CheckStatus = E_NOT_OK;
        }
        else
        {
            /* ClockSetting shall be within the settings defined in the configuration data structure
             * [SWS_Mcu_00019] */
            if (ClockSetting >= Mcu_pConfigPtr->Mcu_u8NoClkConfigs)
            {
                /* Error: function parameter out of range */
                (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                      MCU_INSTANCE_ID,
                                      MCU_INITCLOCK_ID,
                                      MCU_E_PARAM_CLOCK);
                CheckStatus = (Std_ReturnType)E_NOT_OK;
            }
        }
    }

    if ((CheckStatus == E_OK) && (0U == u8CoreId))
#else
    if (0U == u8CoreId)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        CheckStatus = Mcu_Hw_InitClock(&(Mcu_pConfigPtr->Mcu_apClockConfig[ClockSetting]));

#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if ((uint32)STD_ON == Mcu_pConfigPtr->Mcu_pDemConfig->Mcu_E_Clock_FailureCfg.state)
        {
            /* [SWS_MCU_00053/00257/00258/00166] */
            if (E_OK == CheckStatus)
            {
                Dem_SetEventStatus(
                    (Dem_EventIdType)Mcu_pConfigPtr->Mcu_pDemConfig->Mcu_E_Clock_FailureCfg.id,
                    DEM_EVENT_STATUS_PASSED);
            }
            else
            {
                Dem_SetEventStatus(
                    (Dem_EventIdType)Mcu_pConfigPtr->Mcu_pDemConfig->Mcu_E_Clock_FailureCfg.id,
                    DEM_EVENT_STATUS_FAILED);
            }
        }
#endif /* (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
    }

    if (E_OK == CheckStatus)
    {
#if ((MCU_INIT_CLOCK == STD_ON) && (MCU_ENABLE_CMU == STD_ON))
        /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
         * Reason: GET_CPU_ID will not overflow */
        Mcu_u8ClockSetting[u8CoreId] = ClockSetting;
        /* PRQA S 2842 -- */
#endif
    }

    return CheckStatus;
}
#endif /* (MCU_INIT_CLOCK == STD_ON) */

/**
 * @brief This function sets the MCU power mode.
 *
 * @param McuMode MCU mode which configured in configuration tool
 *
 * @note  [SWS_MCU_00164/00161/00147/00148/FUNC_MCU_0003]
 */
MCU_TEXT_SECTION void Mcu_SetMode(Mcu_ModeType McuMode)
{
    uint8 u8CoreId = GET_CPU_ID();

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_SETMODE_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }
    else
    {
        /* [SWS_MCU_00020] */
        if (McuMode >= (Mcu_pConfigPtr->Mcu_NoModeConfigs))
        {
            CheckStatus = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_SETMODE_ID,
                                  MCU_E_PARAM_MODE);
        }
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        /* [FUNC_MCU_0040] */
#if (MCU_ENABLE_SMC == STD_ON)

#if ((MCU_ENABLE_WKU == STD_ON) || (MCU_ENABLE_CMU == STD_ON))
        if (((Mcu_PowerModeType)SMC_MODE_STANDBY_0 ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
            ((Mcu_PowerModeType)SMC_MODE_STANDBY_1 ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
            ((Mcu_PowerModeType)SMC_MODE_STANDBY_2 ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
            ((Mcu_PowerModeType)SMC_MODE_STANDBY_3 ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode))
        {
#if (MCU_ENABLE_WKU == STD_ON)
            /* Enable WKU before enter standby mode. [FUNC_MCU_0036] */
            Mcu_Hw_WkuEnable(Mcu_pConfigPtr->Mcu_pModuleConfig->WKU_pConfig);
#endif /* (MCU_ENABLE_WKU == STD_ON) */

#if (MCU_ENABLE_CMU == STD_ON)
            /* clang-format off */
            /* Disable CMU which not enable low power mode. [FUNC_MCU_0038/0045] */
            Mcu_Hw_CmuDisableNoLp(Mcu_pConfigPtr->Mcu_apClockConfig[Mcu_u8ClockSetting[u8CoreId]].CLOCK_CMU_Config);
            /* clang-format on */
#endif /* (MCU_ENABLE_CMU == STD_ON) */

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
            Mcu_Hw_GateOffPLLxClk1BeforeStandby(u8CoreId);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
        }
#if (MCU_ENABLE_CMU == STD_ON)
        /* Disable CMU first to avoid an CMU error generated */
        else if (
#if (MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)
            ((Mcu_PowerModeType)SMC_MODE_CORELP_SLEEP ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
            ((Mcu_PowerModeType)SMC_MODE_CORELP_DEEPSLEEP ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
#else
            ((Mcu_PowerModeType)SMC_MODE_WAIT ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode) ||
#endif /*(MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)*/
            ((Mcu_PowerModeType)SMC_MODE_STOP ==
             Mcu_pConfigPtr->Mcu_apModeConfig[McuMode].u32PowerMode))
        {
            /* clang-format off */
            /* Disable CMU which not enable stop mode. [FUNC_MCU_0045] */
            Mcu_Hw_CmuDisableNoStop(Mcu_pConfigPtr->Mcu_apClockConfig[Mcu_u8ClockSetting[u8CoreId]].CLOCK_CMU_Config);
            /* clang-format on */
        }
#endif /* (MCU_ENABLE_CMU == STD_ON) */
        else
        {
            /* do nothing*/
        }
#endif /* ((MCU_ENABLE_WKU == STD_ON) || (MCU_ENABLE_CMU == STD_ON)) */

        Mcu_Hw_SmcModeConfig(&(Mcu_pConfigPtr->Mcu_apModeConfig)[McuMode]);

#endif /* (MCU_ENABLE_SMC == STD_ON) */
    }
    /* Avoid compile warning */
#if ((MCU_DEV_ERROR_DETECT == STD_OFF) && (MCU_ENABLE_SMC == STD_OFF))
    (void)McuMode;
#endif /* ((MCU_DEV_ERROR_DETECT == STD_OFF) && (MCU_ENABLE_SMC == STD_OFF)) */
#if ((MCU_DEV_ERROR_DETECT == STD_OFF) && (MCU_ENABLE_CMU == STD_OFF))
    (void)u8CoreId;
#endif /* ((MCU_DEV_ERROR_DETECT == STD_OFF) && (MCU_ENABLE_CMU == STD_OFF)) */
}

#if (MCU_ENABLE_CMU == STD_ON)
/**
 * @brief Enable CMU
 *
 * @note [FMR_MCU_0002]
 */
MCU_TEXT_SECTION void Mcu_EnableCmu(void)
{
    uint8 u8CoreId = GET_CPU_ID();

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_ENABLECMU_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01();
        /* clang-format off */
        Mcu_Hw_CmuEnable(Mcu_pConfigPtr->Mcu_apClockConfig[Mcu_u8ClockSetting[u8CoreId]].CLOCK_CMU_Config);
        /* clang-format on*/
        SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01();
    }
}

/**
 * @brief Disable CMU
 *
 * @note [FUNC_MCU_0010]
 */
MCU_TEXT_SECTION void Mcu_DisableCmu(void)
{
    uint8 u8CoreId = GET_CPU_ID();

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_DISABLECMU_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        /* clang-format off */
        Mcu_Hw_CmuDisable(Mcu_pConfigPtr->Mcu_apClockConfig[Mcu_u8ClockSetting[u8CoreId]].CLOCK_CMU_Config);
        /* clang-format on */
    }
}
#endif /* (MCU_ENABLE_CMU == STD_ON) */

#if (MCU_NO_PLL == STD_OFF)
/**
 * @brief  This function activates the PLL clock to the MCU clock distribution
 *
 * @return Function status
 * @note   [SWS_MCU_00156/00142/00205]
 *         PLL is actived when MCU_InitClock is called actually.
 */
MCU_TEXT_SECTION Std_ReturnType Mcu_DistributePllClock(void)
{
    /* Return variable */
    Std_ReturnType CheckStatus = E_OK;
    uint8          u8CoreId    = GET_CPU_ID();

    if (0U != u8CoreId)
    {
        CheckStatus = (Std_ReturnType)E_NOT_OK;
        /* Report to DET */
#if (MCU_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError((uint16)MCU_MODULE_ID,
                              MCU_INSTANCE_ID,
                              MCU_DISTRIBUTEPLLCLOCK_ID,
                              MCU_E_CORE_MISMATCH);
#endif /* MCU_DEV_ERROR_DETECT == STD_ON */
    }
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    else
    {
        if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
        {
            (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                  MCU_INSTANCE_ID,
                                  MCU_DISTRIBUTEPLLCLOCK_ID,
                                  MCU_E_UNINIT);
            CheckStatus = E_NOT_OK;
        }
        else
#endif
        {
            /* [SWS_MCU_00122] */
            if (Mcu_GetPllStatus() != MCU_PLL_LOCKED)
            {
                CheckStatus = E_NOT_OK;
#if (MCU_DEV_ERROR_DETECT == STD_ON)
                (void)Det_ReportError((uint16)MCU_MODULE_ID,
                                      MCU_INSTANCE_ID,
                                      MCU_DISTRIBUTEPLLCLOCK_ID,
                                      MCU_E_PLL_NOT_LOCKED);
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
            }
        }
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    return CheckStatus;
}
#endif /* (MCU_NO_PLL == STD_OFF) */

/**
 * @brief            This service provides the lock status of the PLL.
 * @details          The user takes care that the PLL is locked by executing Mcu_GetPllStatus.
 * @return           Mcu_PllStatusType PLL Status
 * @note             [SWS_MCU_00230/00157/00008/00132/00206]
 */
MCU_TEXT_SECTION Mcu_PllStatusType Mcu_GetPllStatus(void)
{
    /* The function Mcu_GetPllStatus shall also return
       MCU_PLL_STATUS_UNDEFINED if McuNoPll is set to TRUE  */
    Mcu_PllStatusType ePllStatus = MCU_PLL_STATUS_UNDEFINED;

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();

    /* Mcu_GetPllStatus shall return MCU_PLL_STATUS_UNDEFINED
       if this function is called prior to calling of the functionMcu_Init. */
    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_GETPLLSTATUS_ID, MCU_E_UNINIT);
    }
    else
#endif
    {
#if (MCU_NO_PLL == STD_OFF)
        /* get pll lock status from SCG */
        ePllStatus = Mcu_Hw_ScgGetPLLStatus();
#endif /* (MCU_NO_PLL == STD_OFF) */
    }

    return ePllStatus;
}

/**
 * @brief  This function returns the Reset reason.
 *
 * @return AUTOSAR reset reason
 *
 * @note   [SWS_MCU_00052/00158/0005/00133/FUNC_MCU_0013]
 */
MCU_TEXT_SECTION Mcu_ResetType Mcu_GetResetReason(void)
{
    /* Return value of the function. */
    Mcu_ResetType eResetReason;

    /* Report to DET */
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();

    eResetReason = MCU_RESET_UNDEFINED;
    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        (void)Det_ReportError((uint16)MCU_MODULE_ID,
                              MCU_INSTANCE_ID,
                              MCU_GETRESETREASON_ID,
                              MCU_E_UNINIT);
    }
    else
#endif
    {
        /* Get the reset reason. */
        eResetReason = (Mcu_ResetType)Mcu_Hw_RgmGetResetReason();
    }

    return (Mcu_ResetType)eResetReason;
}

/**
 * @brief This function returns the Raw Reset value.
 *
 * @return Raw reset reason
 *
 * @note   [SWS_MCU_00159/00135/00006/FUNC_MCU_0013]
 */
MCU_TEXT_SECTION Mcu_RawResetType Mcu_GetResetRawValue(void)
{

    /* Return value of the function. */
    Mcu_RawResetType RawResetValue;

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();
    /* Report to DET */
    RawResetValue = MCU_RAW_RESET_DEFAULT;
    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        (void)Det_ReportError((uint16)MCU_MODULE_ID,
                              MCU_INSTANCE_ID,
                              MCU_GETRESETRAWVALUE_ID,
                              MCU_E_UNINIT);
    }
    else
#endif
    {
        RawResetValue = (Mcu_RawResetType)Mcu_Hw_RgmGetResetRawValue();
    }

    return (Mcu_RawResetType)RawResetValue;
}

#if (MCU_PERFORM_RESET_API == STD_ON)
/**
 * @brief Generate software reset
 *
 * @note [SWS_MCU_00055/00160/00143-00146]
 */
MCU_TEXT_SECTION void Mcu_PerformReset(void)
{
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();

    /* Report to DET */
    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_PERFORMRESET_ID, MCU_E_UNINIT);
    }
    else
#endif
    {
#if (MCU_RESET_CALLOUT_USED == STD_ON)
        /* User callout. [FUNC_MCU_0001] */
        MCU_RESET_CALLOUT();
#endif /* (MCU_RESET_CALLOUT_USED == STD_ON) */
        Mcu_Hw_Reset();
    }
}
#endif

#if (MCU_VERSION_INFO_API == STD_ON)
/**
 * @brief This function returns the Version Information for the MCU module.
 *
 * @param pVersionInfo Version infomation struct pointer
 *
 * @note  [SWS_MCU_00162]
 */
MCU_TEXT_SECTION void Mcu_GetVersionInfo(Std_VersionInfoType *pVersionInfo)
{
    /* [SWS_MCU_00125] */
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == pVersionInfo)
    {
        (void)Det_ReportError((uint16)MCU_MODULE_ID,
                              MCU_INSTANCE_ID,
                              MCU_GETVERSIONINFO_ID,
                              MCU_E_PARAM_POINTER);
    }
    else
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        (pVersionInfo)->vendorID         = (uint16)MCU_VENDOR_ID;
        (pVersionInfo)->moduleID         = (uint16)MCU_MODULE_ID;
        (pVersionInfo)->sw_major_version = (uint8)MCU_SW_MAJOR_VERSION;
        (pVersionInfo)->sw_minor_version = (uint8)MCU_SW_MINOR_VERSION;
        (pVersionInfo)->sw_patch_version = (uint8)MCU_SW_PATCH_VERSION;
    }
}
#endif /* (MCU_VERSION_INFO_API == STD_ON) */

#if (MCU_GET_RAM_STATE_API == STD_ON)
/**
 * @brief  This function returns the actual state of the RAM.
 *
 * @return RAM actual state
 *
 * @note   [SWS_MCU_00207-00209]
 */
MCU_TEXT_SECTION Mcu_RamStateType Mcu_GetRamState(void)
{
    /* Return value of this function. */
    Mcu_RamStateType eRamState = MCU_RAM_STATE_INVALID;

#if (MCU_DEV_ERROR_DETECT == STD_ON)
    /* Report to DET */
    uint8 u8CoreId = GET_CPU_ID();

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        (void)Det_ReportError((uint16)MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_GETRAMSTATE_ID, MCU_E_UNINIT);
    }
    else
#endif
    {
        eRamState = MCU_RAM_STATE_VALID;
    }
    return (Mcu_RamStateType)eRamState;
}

#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

#if (MCU_ENABLE_PMC == STD_ON)
/**
 * @brief Disable PMC function
 *
 * @note  [FUNC_MCU_0009/0052]
 */
MCU_TEXT_SECTION void Mcu_DisablePmc(void)
{
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
    uint8          u8CoreId    = GET_CPU_ID();

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_DISABLEPMC_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        Mcu_Hw_PmcDisable();
    }
}
#endif /* (MCU_ENABLE_PMC == STD_ON) */

#if (MCU_ENABLE_RGM == STD_ON)
/**
 * @brief Disable RGM function
 *
 * @note  [FUNC_MCU_0009/0053]
 */
MCU_TEXT_SECTION void Mcu_DisableRgm(void)
{
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
    uint8          u8CoreId    = GET_CPU_ID();

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_DISABLERGM_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        Mcu_Hw_RgmDisable();
    }
}
#endif /* (MCU_ENABLE_RGM == STD_ON) */

#if (MCU_SOSC_VALID_NO_WAIT == STD_ON)
/**
 * @brief This function returns SOSC clock valid or not.
 *        It is Non-AUTOSAR Api which used for getting SOSC clock status
 *
 *        E_OK     -- SOSC clock valid
 *        E_NOT_OK -- SOSC clock not valid / API call Failed
 *
 * @note  [FUNC_MCU_0009/0054]
 */
MCU_TEXT_SECTION Std_ReturnType Mcu_GetSoscValidStatus(void)
{
    Std_ReturnType CheckStatus = (Std_ReturnType)E_OK;
#if (MCU_DEV_ERROR_DETECT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();

    if (Mcu_bInitApiStatus[u8CoreId] == MCU_UNINITIALIZED)
    {
        /* Report to DET */
        (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_GETSOSCVALIDSTATUS_ID, MCU_E_UNINIT);
        CheckStatus = E_NOT_OK;
    }

    /* Check if Mode configuration is valid. */
    if ((Std_ReturnType)E_OK == CheckStatus)
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */
    {
        if (SCG_SOSC_REG_VLD_MASK == ((*(volatile uint32 *)SCG_SOSC_REG_ADDR) & SCG_SOSC_REG_VLD_MASK))
        {
            CheckStatus = (Std_ReturnType)E_OK;
        }
        else
        {
            CheckStatus = (Std_ReturnType)E_NOT_OK;
        }
    }

    return CheckStatus;
}
#endif /* (MCU_SOSC_VALID_NO_WAIT == STD_ON) */

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

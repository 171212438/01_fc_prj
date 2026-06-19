/**
*   @file    Mcu_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Post Build configuration Mcu source file.
*   @details Post Build configuration file for Mcu driver.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : FlagchipFC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
#ifndef MCU_CFG_H
#define MCU_CFG_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "Mcu_Hw_Types.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define MCU_CFG_VENDOR_ID                        174U
#define MCU_CFG_AR_RELEASE_MAJOR_VERSION         4U
#define MCU_CFG_AR_RELEASE_MINOR_VERSION         6U
#define MCU_CFG_AR_RELEASE_REVISION_VERSION      0U
#define MCU_CFG_SW_MAJOR_VERSION                 1U
#define MCU_CFG_SW_MINOR_VERSION                 5U
#define MCU_CFG_SW_PATCH_VERSION                 1U


/*==================================================================================================
                                           GLOBAL DECLARATION
==================================================================================================*/






/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief    MCU related partition number
 */
#define MCU_MAX_PARTITIONS                  2U




/**
 * @brief    MCU max core id format
 */
#define MCU_MAX_COREID_FORMAT                 2U


/**
 * @brief    Init variable of driver initialize status
 */
#define MCU_DRIVER_STATUS_UNINIT_ARRAY  {MCU_UNINITIALIZED, MCU_UNINITIALIZED}

/**
 * @brief    Init variable of  driver clocksetting status
 */
#define MCU_DRIVER_CLOCK_SETTING_ARRAY  {0U, 0U}

/**
 * @brief    Init pointer of  driver initialize status
 */
#define MCU_DRIVER_INIT_PTR_ARRAY  {NULL_PTR, NULL_PTR}

/**
*       Switches the development error detection and notification on or off.
*/
#define MCU_DEV_ERROR_DETECT   (STD_ON)

/**
*       Pre-processor switch to enable/disable the API Mcu_GetRamState.
*/
#define MCU_GET_RAM_STATE_API   (STD_OFF)

/**
*       If this parameter is set to FALSE, the clock initialization has to be disabled
*       from the MCU driver. This concept applies when there are some write once
*       clock registers and a bootloader is present.
*/
#define MCU_INIT_CLOCK   (STD_ON)

/**
*       Shall be set True, if the H/W does not have a PLL or the PLL circuitry is enabled after the power on without S/W intervention.
*/
#define MCU_NO_PLL   (STD_OFF)

/**
*        Pre-processor switch to enable / disable the use of the function Mcu_PerformReset.
*/
#define MCU_PERFORM_RESET_API   (STD_ON)

/**
*       Pre-processor switch to enable/disable the API to read out the modules version information.
*/
#define MCU_VERSION_INFO_API   (STD_ON)

/**
*       If this parameter is set to TRUE, the Reset Control Module (RGM) initialization has to be enable from the MCU driver.
*/
#define MCU_ENABLE_RGM   (STD_ON)

/**
*       If this parameter is set to TRUE, the Power Management Controller (PMC) initialization has to be enable from the MCU driver.
*/
#define MCU_ENABLE_PMC   (STD_OFF)

/**
*       If this parameter is set to TRUE, the System Mode Controller (SMC) initialization has to be enable from the MCU driver.
*/
#define MCU_ENABLE_SMC   (STD_ON)

/**
*       If this parameter is set to TRUE, the Wakeup Unit (WKU) initialization has to be enable from the MCU driver.
*/
#define MCU_ENABLE_WKU   (STD_ON)

/**
*       If this parameter is set to TRUE, the Clock Monitor Unit (CMU) initialization has to be enable from the MCU driver.
*/
#define MCU_ENABLE_CMU   (STD_OFF)

/**
*       The user callout reset is/isn't available (STD_ON/STD_OFF) - called by MCU right before Mcu_PerformReset().
*/
#define MCU_RESET_CALLOUT_USED   (STD_OFF)




/**
*       If this parameter is set to TRUE, SOSC valid flag will be not check and wait when  Mcu init clock state.
*/
#define MCU_SOSC_VALID_NO_WAIT  (STD_OFF)




/**
* @brief    The callout configured by the user for PMC voltage error notifications.
*/

#define MCU_PMC_ISR_NOTIFICATION_USED (STD_OFF)


/**
* @brief    The callout configured by the user for Reset delay notifications.
*/

#define MCU_RGM_ISR_NOTIFICATION_USED (STD_OFF)


/**
*       Enable/Disable the API for reporting the Dem Error. [FUNC_MCU_0046]
*/
#define MCU_DISABLE_DEM_REPORT_ERROR_STATUS     (STD_ON)

/**
*       Maximum number of MCU Mode configurations.
*/
#define MCU_MAX_MODECONFIGS   ((uint32)8U)


/**
*       Maximum number of MCU Ram configurations.
*/
#define MCU_MAX_RAMCONFIGS   ((uint32)0U)
#define MCU_MAX_NORAMCONFIGS


/**
*       Pre-compile Support.
*/
#define MCU_PRECOMPILE_SUPPORT   (STD_OFF)




/**
*       Support for User mode.
*            If this parameter has been configured to 'TRUE' the Mcu driver can be executed from both supervisor and user mode.
*/
#define MCU_ENABLE_USER_MODE_SUPPORT  (STD_OFF)

/** check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == MCU_ENABLE_USER_MODE_SUPPORT)
#error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Mcu in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
#endif /* (STD_ON == MCU_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/**
*    The function Mcu_GetResetRawValue shall return an implementation specific value which does
*         not correspond to a valid value of the reset status register and is not equal to 0 if this
*         function is called prior to calling of the function Mcu_Init, and if supported by the
*         hardware.
*
*/

#define MCU_RAW_RESET_DEFAULT      ((uint32)0xFFFFFFFFU)
#define MCU_RAW_RESET_ALLBIT       (((uint32)0xE01FE9FFU))

/**   This is the corresponding bit of System Reset Request Timeout Reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_SYSRST_TOUT  ((uint32)0x80000000U)
/**   This is the corresponding bit of Pin Reset Request Timeout Reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_PINRST_TOUT  ((uint32)0x40000000U)
/**   This is the corresponding bit of FSM Error Reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_FSM_ERR      ((uint32)0x20000000U)
/**   This is the corresponding bit of Logic BIST Reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_LBIST        ((uint32)0x00008000U)
/**   This is the corresponding bit of CMU Reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_CMU          ((uint32)0x00004000U)
/**   This is the corresponding bit of Stop Acknowledge Error reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_SACKERR      ((uint32)0x00002000U)

/**   This is the corresponding bit of SYSAP System Reset Request in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_SYSAP        ((uint32)0x00000800U)
/**   This is the corresponding bit of JTAG generated reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_JTAG         ((uint32)0x00000100U)
/**   This is the corresponding bit of Power-on reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_POR          ((uint32)0x00000080U)
/**   This is the corresponding bit of external pin reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_PIN          ((uint32)0x00000040U)
/**   This is the corresponding bit of hsm watchdog reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_HSM_WDOG     ((uint32)0x00000020U)
/**   This is the corresponding bit of fcsmu reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_FCSMU        ((uint32)0x00000010U)
/**   This is the corresponding bit of Clock error 0 reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_CLKERR0      ((uint32)0x00000008U)
/**   This is the corresponding bit of Clock error 1 reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_CLKERR1      ((uint32)0x00000004U)
/**   This is the corresponding bit of Low-Voltage reset or Power On Reset reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_LVR          ((uint32)0x00000002U)
/**   This is the corresponding bit of wake-up reset in the returned value of Mcu_GetResetRawReason */
#define MCU_RAW_RESET_WAKEUP       ((uint32)0x00000001U)

/**
*    Macros defined below used by driver to enable wake-up source
*/
#define WKU_INPUT_GPIOA           ((uint32)0x00080000U)
#define WKU_INPUT_GPIOC           ((uint32)0x00100000U)
#define WKU_INPUT_GPIOE           ((uint32)0x00200000U)

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations 
 * Reason: This type may not used by user */
/**
 * @brief          The Mcu_ModeType specifies the identification (ID) for a MCU mode, configured via configuration structure.
*  @details        The type shall be uint8, uint16 or uint32.
*  @note           [SWS_MCU_00254/00237/00238]
*/
typedef uint16 Mcu_ModeType;

/** @brief Definition(IDs) for a RAM section, configure via the configuration structure [SWS_MCU_00255/00239/00240]*/
typedef uint32 Mcu_RamSectionType;

/**
* @brief        The Mcu_RamIndexType specifies the variable for indexinf RAM sections.
*               The type shall be uint8, uint16 or uint32, based on best performance.
*
*/
typedef uint32 Mcu_RamIndexType;

/**
* @brief        The Mcu_RamSizeType specifies the RAM section size.
*               The type shall be uint8, uint16 or uint32, based on best performance.
*/
typedef uint32 Mcu_RamSizeType;

#if (MCU_INIT_CLOCK == STD_ON)
/** @brief the identification (ID) for clock setting configured via the configuration structure. [SWS_MCU_00232/00233/00251] */
typedef uint8 Mcu_ClockType;
#endif /* (MCU_INIT_CLOCK == STD_ON) */

/**
* @brief         Definition of a MCU mode section in the configuration structure.
* @details           Specifies the system behaviour during the selected target mode.
*                   Data set and configured by Mcu_SetMode call.
*/
typedef struct
{
    /**<   The ID for Power Mode configuration. */
    Mcu_ModeType Mcu_ModeConfigId;
    /**<   Power modes control configuration */
    Mcu_PowerModeType u32PowerMode;
} Mcu_ModeConfigType;

/**
*  @brief             Definition of a RAM section within the configuration structure.
*  @details          The definitions for each RAM section within the structure Mcu_ConfigType shall contain:
*                   - RAM section base address
*                   - Section size
*                   - Data pre-setting to be initialized
*/
typedef struct
{
    Mcu_RamSectionType Mcu_RamSectorId;   /**<   The ID for Ram Sector configuration. */
    uint8 (*Mcu_pu8RamBaseAddr)[1U];   /**<   RAM section base address. */
    Mcu_RamSizeType Mcu_RamSize;   /**<   RAM section size. */
    uint8 Mcu_u8RamDefaultValue;   /**<   RAM default value for initialization. */

} Mcu_RamConfigType;


/**
 * @brief     The type Mcu_RawResetType specifies the reset reason in raw register format, read from a reset status register.
*  @details   The type shall be uint8, uint16 or uint32 based on best performance.
*  @note      [SWS_MCU_00253/00235/00236]
*/
typedef uint32 Mcu_RawResetType;   /**<   Destructive and Functional Reset Events Log. */

/**
 * @brief        DEM error reporting configuration.
*  @details      This structure contains information DEM error reporting
*/
typedef struct
{
    Mcal_DemErrorType Mcu_E_Clock_FailureCfg;
} Mcu_DemConfigType;
/* PRQA S 1535 -- */
/*==================================================================================================
                                       CONSTANTS
==================================================================================================*/
/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: There are some marcos generated by configuration tool which used by user, so, this macros may not distinct */
/**
*              Create defines with the IDs assigned to Mcu Clock configurations.
*                   These IDs will be transmitted as input parameters for Mcu_InitClock() API.
*/

#define MCU_Demo_FOSC24M   ((Mcu_ClockType)0U)
#define McuConf_McuClockSettingConfig_MCU_Demo_FOSC24M   ((Mcu_ClockType)0U)


/**
*              Create defines with the IDs assigned to Mcu Mode configurations.
*                   These IDs will be transmitted as input parameters for Mcu_SetMode() API.
*/

#define McuModeSettingConf_3   ((Mcu_ModeType)3U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_3   ((Mcu_ModeType)3U)

#define McuModeSettingConf_4   ((Mcu_ModeType)4U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_4   ((Mcu_ModeType)4U)

#define McuModeSettingConf_5   ((Mcu_ModeType)5U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_5   ((Mcu_ModeType)5U)

#define McuModeSettingConf_6   ((Mcu_ModeType)6U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_6   ((Mcu_ModeType)6U)

#define McuModeSettingConf_7   ((Mcu_ModeType)7U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_7   ((Mcu_ModeType)7U)

#define McuModeSettingConf_0   ((Mcu_ModeType)0U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_0   ((Mcu_ModeType)0U)

#define McuModeSettingConf_1   ((Mcu_ModeType)1U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_1   ((Mcu_ModeType)1U)

#define McuModeSettingConf_2   ((Mcu_ModeType)2U)
#define McuConf_McuModeSettingConf_McuModeSettingConf_2   ((Mcu_ModeType)2U)


/**
*              Create defines with the IDs assigned to Mcu RAM Section configurations.
*                   These IDs will be transmitted as input parameters for Mcu_InitRamSection() API.
*/

/**
*              Create defines with the values assigned to Mcu Reset Reason configurations.
*                   These values can be  retrieved from Mcu_GetResetReason Api.
*/
#define McuConf_McuResetReasonConf_MCU_PINRST_TOUT_RESET   ((uint8)30U)
#define McuConf_McuResetReasonConf_MCU_FSM_ERR_RESET   ((uint8)29U)
#define McuConf_McuResetReasonConf_MCU_LBIST_RESET   ((uint8)15U)
#define McuConf_McuResetReasonConf_MCU_CMU_RESET   ((uint8)14U)
#define McuConf_McuResetReasonConf_MCU_STOP_ACKNOWLEDGE_ERROR_RESET   ((uint8)13U)
#define McuConf_McuResetReasonConf_MCU_SYSAP_RESET   ((uint8)11U)
#define McuConf_McuResetReasonConf_MCU_JTAG_RESET   ((uint8)8U)
#define McuConf_McuResetReasonConf_MCU_POWER_ON_RESET   ((uint8)7U)
#define McuConf_McuResetReasonConf_MCU_PIN_RESET   ((uint8)6U)
#define McuConf_McuResetReasonConf_MCU_HSMDOG_RESET   ((uint8)5U)
#define McuConf_McuResetReasonConf_MCU_FCSMU_RESET   ((uint8)4U)
#define McuConf_McuResetReasonConf_MCU_CLOCK_ERROR0_RESET   ((uint8)3U)
#define McuConf_McuResetReasonConf_MCU_CLOCK_ERROR1_RESET   ((uint8)2U)
#define McuConf_McuResetReasonConf_MCU_LOW_VOLTAGE_DETECT_RESET   ((uint8)1U)
#define McuConf_McuResetReasonConf_MCU_WAKEUP_RESET   ((uint8)0U)
#define McuConf_McuResetReasonConf_MCU_NO_RESET_REASON   ((uint8)32U)
#define McuConf_McuResetReasonConf_MCU_MULTIPLE_RESET_REASON   ((uint8)33U)
#define McuConf_McuResetReasonConf_MCU_RESET_UNDEFINED   ((uint8)34U)
#define McuConf_McuResetReasonConf_MCU_SW_RESET   ((uint8)20U)
#define McuConf_McuResetReasonConf_MCU_INTM_RESET   ((uint8)19U)
#define McuConf_McuResetReasonConf_MCU_WATCHDOG_RESET   ((uint8)18U)
#define McuConf_McuResetReasonConf_MCU_SYSRST_RESET   ((uint8)17U)
#define McuConf_McuResetReasonConf_MCU_LOCKUP_RESET   ((uint8)16U)
#define McuConf_McuResetReasonConf_MCU_SYSRST_TOUT_RESET   ((uint8)31U)

/**
*              MCU register reset reason map to AUTOSAR reset reason
*/
#define McuConf_McuResetReason2Reg_Default (uint8)0xFFU
#define McuConf_McuResetReason2Reg_Max 32U
#define McuConf_McuResetReason2Reg_Map {\
                                   McuConf_McuResetReasonConf_MCU_WAKEUP_RESET,\
                                   McuConf_McuResetReasonConf_MCU_LOW_VOLTAGE_DETECT_RESET,\
                                   McuConf_McuResetReasonConf_MCU_CLOCK_ERROR1_RESET,\
                                   McuConf_McuResetReasonConf_MCU_CLOCK_ERROR0_RESET,\
                                   McuConf_McuResetReasonConf_MCU_FCSMU_RESET,\
                                   McuConf_McuResetReasonConf_MCU_HSMDOG_RESET,\
                                   McuConf_McuResetReasonConf_MCU_PIN_RESET,\
                                   McuConf_McuResetReasonConf_MCU_POWER_ON_RESET,\
                                   McuConf_McuResetReasonConf_MCU_JTAG_RESET,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReasonConf_MCU_SYSAP_RESET,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReasonConf_MCU_STOP_ACKNOWLEDGE_ERROR_RESET,\
                                   McuConf_McuResetReasonConf_MCU_CMU_RESET,\
                                   McuConf_McuResetReasonConf_MCU_LBIST_RESET,\
                                   McuConf_McuResetReasonConf_MCU_LOCKUP_RESET,\
                                   McuConf_McuResetReasonConf_MCU_SYSRST_RESET,\
                                   McuConf_McuResetReasonConf_MCU_WATCHDOG_RESET,\
                                   McuConf_McuResetReasonConf_MCU_INTM_RESET,\
                                   McuConf_McuResetReasonConf_MCU_SW_RESET,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReason2Reg_Default,\
                                   McuConf_McuResetReasonConf_MCU_FSM_ERR_RESET,\
                                   McuConf_McuResetReasonConf_MCU_PINRST_TOUT_RESET,\
                                   McuConf_McuResetReasonConf_MCU_SYSRST_TOUT_RESET,\
                                   }

/* PRQA S 0791 -- */
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/** @brief The type Mcu_ResetType, represents the different reset that a specified MCU can have. [SWS_MCU_00134/00234/00252] */
typedef enum
{
    MCU_WAKEUP_RESET                 = McuConf_McuResetReasonConf_MCU_WAKEUP_RESET,                   /**<   WAKEUP Reset. RGM_SRS[WAKEUP]. */
    MCU_LOW_VOLTAGE_OR_POR_RESET     = McuConf_McuResetReasonConf_MCU_LOW_VOLTAGE_DETECT_RESET,       /**<   Low-Voltage Detect Reset or Power On Reset Reset. RGM_SRS[LVD]. */
    MCU_LOSS_OF_CLOCK_RESET          = McuConf_McuResetReasonConf_MCU_CLOCK_ERROR1_RESET,             /**<   Loss-of-Clock Reset. RGM_SRS[LOC]. */
    MCU_LOSS_OF_LOCK_RESET           = McuConf_McuResetReasonConf_MCU_CLOCK_ERROR0_RESET,             /**<   Loss-of-Lock Reset. RGM_SRS[LOL]. */
    MCU_FCSMU_RESET                  = McuConf_McuResetReasonConf_MCU_FCSMU_RESET,                    /**<   FCSMU Reset. RGM_SRS[FCSMU]. */
    MCU_HSMDOG_RESET                 = McuConf_McuResetReasonConf_MCU_HSMDOG_RESET,                   /**<   HSM WDOG Reset. RGM_SRS[HSM_WDOG]. */
    MCU_PIN_RESET                    = McuConf_McuResetReasonConf_MCU_PIN_RESET,                      /**<   External Reset Pin. RGM_SRS[PIN]. */
    MCU_POWER_ON_RESET               = McuConf_McuResetReasonConf_MCU_POWER_ON_RESET,                 /**<   Power-on reset. RGM_SRS[POR]. */
    MCU_JTAG_RESET                   = McuConf_McuResetReasonConf_MCU_JTAG_RESET,                     /**<   JTAG generated reset . RGM_SRS[JTAG]. */

    MCU_MDMAP_SYSTEM_RESET           = McuConf_McuResetReasonConf_MCU_SYSAP_RESET,                    /**<   MDM-AP System Reset Request . RGM_SRS[MDM_AP]. */
    MCU_STOP_ACKNOWLEDGE_ERROR_RESET = McuConf_McuResetReasonConf_MCU_STOP_ACKNOWLEDGE_ERROR_RESET,   /**<   Stop Acknowledge Error reset . RGM_SRS[SACKERR]. */
    MCU_CMU_RESET                    = McuConf_McuResetReasonConf_MCU_CMU_RESET,                      /**<   CMU Reset . RGM_SRS[CMU]. */
    MCU_LBIST_RESET                  = McuConf_McuResetReasonConf_MCU_LBIST_RESET,                    /**<   Logic BIST Reset . RGM_SRS[LBIST]. */
    MCU_LOCKUP_RESET                 = McuConf_McuResetReasonConf_MCU_LOCKUP_RESET,                   /**<   CPUx LOCKUP Reset . RGM_Cx_SRS[Cx_LOCKUP]. */
    MCU_SYSRST_RESET                 = McuConf_McuResetReasonConf_MCU_SYSRST_RESET,                   /**<   CPUx SYSRST Reset . RGM_Cx_SRS[Cx_SYSRST]. */
    MCU_WATCHDOG_RESET               = McuConf_McuResetReasonConf_MCU_WATCHDOG_RESET,                 /**<   CPUx WDOG Reset . RGM_Cx_SRS[Cx_WDOG]. */
    MCU_INTM_RESET                   = McuConf_McuResetReasonConf_MCU_INTM_RESET,                     /**<   CPUx INTM Reset . RGM_Cx_SRS[Cx_INTM]. */
    MCU_SW_RESET                     = McuConf_McuResetReasonConf_MCU_SW_RESET,                       /**<   CPUx SW Reset . RGM_Cx_SRS[Cx_SWRST]. */
    MCU_FSM_ERR_RESET                = McuConf_McuResetReasonConf_MCU_FSM_ERR_RESET,                  /**<   FSM Error Reset . RGM_Cx_SRS[FSM_ERR]. */
    MCU_PINRST_TOUT_RESET            = McuConf_McuResetReasonConf_MCU_PINRST_TOUT_RESET,              /**<   Pin Reset Request Timeout Reset . RGM_SRS[PINRST_TOUT]. */    
    MCU_SYSRST_TOUT_RESET            = McuConf_McuResetReasonConf_MCU_SYSRST_TOUT_RESET,              /**<   System Reset Request Timeout Reset . RGM_SRS[SYSRST_TOUT]. */
    MCU_NO_RESET_REASON              = McuConf_McuResetReasonConf_MCU_NO_RESET_REASON,                /**<   No reset reason found */
    MCU_MULTIPLE_RESET_REASON        = McuConf_McuResetReasonConf_MCU_MULTIPLE_RESET_REASON,          /**<   More than one reset events are logged except "Power on event" */
    MCU_RESET_UNDEFINED              = McuConf_McuResetReasonConf_MCU_RESET_UNDEFINED,                /**<   Undefined reset source. */
    MCU_RESET_MAX                    = McuConf_McuResetReason2Reg_Default                             /**<   Default reset source. */ 
} Mcu_ResetType;

#if (MCU_GET_RAM_STATE_API == STD_ON)
/** @brief Ram State of the micro controller. [SWS_MCU_00256] */
typedef enum
{
    MCU_RAM_STATE_INVALID = 0U,   /**<   RAM content is not valid or unknown (default). */
    MCU_RAM_STATE_VALID   /**<   RAM content is valid. */
} Mcu_RamStateType;
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"
/**
*              Local copy of the pointer to the configuration data
*/

extern Mcu_DemConfigType* Mcu_pDemCfgPtr;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"
#endif

extern Mcu_DemConfigType Mcu_Dem_Config;



/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef MCU_CFG_H */

/** @} */


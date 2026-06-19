/**
*   @file    Wdg_HLD.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - high level layer header file.
*   @details watchdog high layer header file.
*
*   @addtogroup WDG
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
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
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by user without hardware timer and optimization code
==================================================================================================*/

#ifndef WDG_HLD_H
#define WDG_HLD_H


#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/* [SWS_Wdg_00079] [SWS_Wdg_00105] [SWDESG_WDG_009] */
#include "Mcal.h"
#include "Wdg_Cfg.h"
#if (WDG_TYPE == WDG_EXTERNAL_MODULE_SPI)
    #include "Spi.h"
#elif(WDG_TYPE == WDG_EXTERNAL_MODULE_DIO)
    #include "Dio.h"
#endif

#include "Gpt.h"

#include "Wdg_LLD_Types.h"
#include "WdgIf_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief API service used in wrong context (e.g. driver not initialized) [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_DRIVER_STATE          ((uint8)0x10U)

/**
* @brief API service called with wrong/inconsistent parameter(s) [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_PARAM_MODE            ((uint8)0x11U)

/**
* @brief API service called with wrong/inconsistent parameter(s) [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_PARAM_CONFIG          ((uint8)0x12U)

/**
* @brief API service called with wrong/inconsistent parameter(s) [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_PARAM_TIMEOUT         ((uint8)0x13U)

/**
* @brief API is called with wrong pointer value (e.g. NULL pointer) [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_PARAM_POINTER         ((uint8)0x14U)

/**
* @brief Invalid configuration set selection [SWS_Wdg_00010]
* @details Errors and exceptions that will be detected by the WDG driver
*/
#define WDG_E_INIT_FAILED           ((uint8)0x15U)

/**
* @brief API service ID for Wdg_174_Instancex_Init function (x=0,1) [SWS_Wdg_00106]
* @details Parameters used when raising an error/exception
*/
#define WDG_INIT_ID                 ((uint8)0x00U)

/**
* @brief API service ID for Wdg_174_Instancex_SetMode function (x=0,1) [SWS_Wdg_00107]
* @details Parameters used when raising an error/exception
*/
#define WDG_SETMODE_ID              ((uint8)0x01U)

/**
* @brief API service ID for Wdg_Cbk_GptNotification0 function
* @details Parameters used when raising an error/exception
*/
#define WDG_TRIGGER_ID              ((uint8)0x02U)

/**
* @brief API service ID for Wdg_174_Instancex_SetTriggerCondition function (x=0,1)  [SWS_Wdg_00155]
* @details Parameters used when raising an error/exception
*/
#define WDG_SETTRIGGERCONDITION_ID  ((uint8)0x03U)

#if (WDG_VERSION_INFO_API == STD_ON)
/**
* @brief API service ID for Wdg_174_Instancex_GetVersionInfo function (x=0,1) [SWS_Wdg_00109]
* @details Parameters used when raising an error/exception
*/
#define WDG_GETVERSION_ID           ((uint8)0x04U)
#endif

#if (WDG_DIRECT_SERVICE == STD_ON)
/**
* @brief API service ID for Wdg_Instancex_Service function (x=0,1) [FUNC_WDG_0027]
* @details Parameters used when raising an error/exception
*/
#define WDG_SERVICE_ID              ((uint8)0x05U)
#endif

/**
* @brief          Wdg_HWL_ConfigType.
* @details        Contains the information related to the hardware setup for WDOG
*/
#define Wdg_HWL_ConfigType Wdg_LLDConfigType
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief  Hardware WDG instance.
 */
typedef enum
{
    WDG_HWL_INSTANCE0 = 0x0U,
    WDG_HWL_INSTANCE1,
    WDG_HWL_INSTANCE2,
    WDG_HWL_INSTANCE3
} Wdg_HWL_InstanceType;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief Pointer to callback notification in the Wdg_Irq routine.
 */
typedef void (* Wdg_CallbackPtrType)  ( void );


/**
* @brief  Defines the watchdog configuration structure [SWS_Wdg_00171] [SRS_BSW_00414]
*/
typedef struct
{
    /**
    @brief The default setting mode of configured
    */
    const WdgIf_ModeType eWdgDefaultSetMode;
    /**
    @brief The instance id
    */
    const Wdg_HWL_InstanceType eWdgInstance;
#if (WDG_DIRECT_SERVICE == STD_OFF)
    /**
    @brief Gpt Channel configured
    */
    const Gpt_ChannelType u8WdgTimerChannel;
    /**
    @brief The frequency of the configured timer channel
    */
    const uint32 u32WdgTriggerChannelFrequency;
#endif
    /**
    @brief Pointer to Watchdog Specific implementation details [SWS_Wdg_00051]
    */
    const Wdg_HWL_ConfigType* pWdgModeSettings[3];
    /**
    @brief Pointer to callback notification
    */
    Wdg_CallbackPtrType pWdgCallbackNotification;
} Wdg_ConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Wdg_MemMap.h"

#if (WDG_PRECOMPILE_SUPPORT == STD_OFF)
    WDG_CONF_PB
#endif /* (WDG_PRECOMPILE_SUPPORT == STD_OFF) */

#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Wdg_MemMap.h"

#define WDG_START_SEC_CONST_8
#include "Wdg_MemMap.h"

#if (WDG_DEV_ERROR_DETECT == STD_ON)
WDG_DATA_SECTION extern const uint8 g_WdgIndex[WDG_NO_OF_INSTANCES];
#endif /* (WDG_DEV_ERROR_DETECT == STD_ON */

#define WDG_STOP_SEC_CONST_8
#include "Wdg_MemMap.h"

#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
#define WDG_START_SEC_CONFIG_DATA_32
#include "Wdg_MemMap.h"

extern const uint32 Wdg_au32InstanceCoreUsed[WDG_NO_OF_INSTANCES];

#define WDG_STOP_SEC_CONFIG_DATA_32
#include "Wdg_MemMap.h"
#endif

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Wdg_MemMap.h"

#if (WDG_PRECOMPILE_SUPPORT == STD_ON)
WDG_DATA_SECTION extern const Wdg_ConfigType* const Wdg_apPBCfgVariantPredefined[WDG_NO_OF_INSTANCES];
#endif

#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Wdg_MemMap.h"


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else 
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"


/* This function initializes the WDG module.*/
WDG_TEXT_SECTION void Wdg_HLD_Init(const Wdg_ConfigType* pConfigPtr, const Wdg_HWL_InstanceType eInstance);

/* Switches the watchdog into the mode Mode.*/
WDG_TEXT_SECTION Std_ReturnType Wdg_HLD_SetMode(WdgIf_ModeType Mode, const Wdg_HWL_InstanceType eInstance);

#if (WDG_DIRECT_SERVICE == STD_OFF)
/*Reset the watchdog timeout counter according to the parameter timeout.*/
WDG_TEXT_SECTION void Wdg_HLD_SetTriggerCondition(uint16 u16Timeout, const Wdg_HWL_InstanceType eInstance);
#endif

/*Returns the version information of the module.*/
#if (WDG_VERSION_INFO_API == STD_ON)
WDG_TEXT_SECTION void Wdg_HLD_GetVersionInfo(Std_VersionInfoType* pVersioninfoPtr, const Wdg_HWL_InstanceType eInstance);
#endif /* WDG_VERSION_INFO_API == STD_ON */

#if (WDG_DIRECT_SERVICE == STD_ON)
WDG_TEXT_SECTION void Wdg_HLD_Service(const Wdg_HWL_InstanceType eInstance);
#endif

#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else 
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* WDG_HLD_H */
/** @} */

/**
*   @file    Wdg_Cfg.h
*   @version 1.5.1
*
*   @brief    AUTOSAR Wdg - Contains the implementation of the Watchdog API
*   @details  It contains the layer requested by autosar. The functions are independent of
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

#ifndef WDG_CFG_H
#define WDG_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "WdgIf_Types.h"
#include "Mcal.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define WDG_VENDOR_ID_CFG                    174
#define WDG_MODULE_ID_CFG                    102
#define WDG_CFG_AR_RELEASE_MAJOR_VERSION     4
#define WDG_CFG_AR_RELEASE_MINOR_VERSION     6
#define WDG_CFG_AR_RELEASE_REVISION_VERSION  0
#define WDG_CFG_SW_MAJOR_VERSION             1
#define WDG_CFG_SW_MINOR_VERSION             5
#define WDG_CFG_SW_PATCH_VERSION             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/















/**
* @brief  This constant specifies if the instance of the WDG is selected or not
*/
#define WDG_INSTANCE0 (STD_ON)




/**
* @brief  This constant specifies if the instance of the WDG is selected or not
*/
#define WDG_INSTANCE1 (STD_OFF)




/**
* @brief  This constant specifies if the instance of the WDG is selected or not
*/
#define WDG_INSTANCE2 (STD_OFF)




/**
* @brief  This constant specifies if the instance of the WDG is selected or not
*/
#define WDG_INSTANCE3 (STD_OFF)



/**
* @brief  This define indicate that the watchdog is internal
*/
#define WDG_INTERNAL_MODULE         (0U)

/**
* @brief  This define indicate that the watchdog is external connected on SPI
*/
#define WDG_EXTERNAL_MODULE_SPI     (1U)

/**
* @brief  This define indicate that the watchdog is external connected on DIO
*/
#define WDG_EXTERNAL_MODULE_DIO     (2U)

 /**
 * @brief  This define indicate the number of HW IPs available on the Platform
 */
#define WDG_NO_OF_INSTANCES            (2U)

/**
* @brief  This variable will indicate which type of driver is in use
*/
#define WDG_TYPE (          WDG_INTERNAL_MODULE)

/**
* @brief  Compile switch to enable/disable DEM for this module
*/
#define WDG_DISABLE_DEM_REPORT_ERROR_STATUS   (STD_ON)

/**
* @brief  Compile switch to enable/disable development error detection for this module
*/
#define WDG_DEV_ERROR_DETECT   (STD_ON)

/**
* @brief  Compile switch to allow/forbid Direct Service feature for WDG module
*/
#define WDG_DIRECT_SERVICE    (STD_OFF)

/**
* @brief  Compile switch to allow/forbid disabling the watchdog driver during runtime
*/
#define WDG_DISABLE_ALLOWED    (STD_OFF)

/**
* @brief  Compile switch to enable/disable the version information
*/
#define WDG_VERSION_INFO_API   (STD_ON)

/**
* @brief  This variable will indicate the index of instance 0
*/
#define WdgConf_WdgGeneral_WdgIndex_U8 ((uint8)0U)





/**
* @brief  The initial value of s_WdgStatus
*/
#define WDG_VARIABLE_STATUS_VALUE      {WDG_UNINIT,WDG_UNINIT}

/**
* @brief  The initial value of s_WdgTimeout
*/
#define WDG_VARIABLE_TIMEOUT_VALUE      {(uint32)0U,(uint32)0U}

/**
* @brief  The initial value of s_WdgGptPeriod
*/
#define WDG_VARIABLE_PERIOD_VALUE      {(uint32)0U,(uint32)0U}

/**
* @brief  These variables will indicate the Wdg Initial Timeout parameters in miliseconds for Wdg module 0
*/
#define WDG_INSTANCE0_INITIAL_TIMEOUT_U32 ((uint32)30U)

/**
* @brief  Wdg Initial Timeout parameters of s_WdgInitialTimeout
*/
#define WDG_INTIAL_TIMEOUT      {WDG_INSTANCE0_INITIAL_TIMEOUT_U32,(uint32)0U}

/**
* @brief  These variables will indicate the Wdg Max Timeout parameters in miliseconds for Wdg module 0
*/
#define WDG_INSTANCE0_MAX_TIMEOUT_VALUE ((uint16)100U)

/**
* @brief  Wdg max Timeout parameters of s_WdgMaxTimeout
*/
#define WDG_MAX_TIMEOUT      {WDG_INSTANCE0_MAX_TIMEOUT_VALUE,(uint16)0U}

/**
* @brief  These variables will indicate the number of executions of the loop waiting for the unlock or reconfigure flag for Wdg module 0
*/
#define WDG_INSTANCE0_FLAG_LOOP_VALUE ((uint32)0xffffffU)

/**
* @brief  Wdg flag loop times parameters of s_WdgunlockAndReconfigLoopTimes
*/
#define WDG_FLAG_LOOP_TIMES      {WDG_INSTANCE0_FLAG_LOOP_VALUE,(uint32)0U}

/**
* @brief  This macro will indicate max value of 16bits integer type
*/
#define WDG_MAX_VALUE_TYPE16      ((uint16)65535U)

/**
* @brief  This macro will indicate min value of timeout
*/
#define WDOG_MIN_VALUE_TIMEOUT_U32 (0U)

/**
* @brief  This macro indicate if enable the multi-core
*/
#define WDG_MULTICORE_ENABLED   (STD_OFF)

/**
* @brief  This macro indicate if use the fast configuration way to configure wdg.
*/
#define WDG_FAST_CONFIGURATION_ENABLED   (STD_ON)











/** 
* @brief  This variable will indicate RAM/ROM execution
*/
#define WDG_ROM


 

/**
* @brief Defines the use of Pre compile (PC) support
*/
              


#define WDG_PRECOMPILE_SUPPORT  (STD_ON)



 
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
*                                   FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* WDG_CFG_H */
/** @} */

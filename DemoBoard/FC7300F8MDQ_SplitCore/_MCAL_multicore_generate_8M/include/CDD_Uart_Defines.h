/**
*   @file    CDD_Uart_Defines.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - Module configuration interface for Uart driver.
*   @details Contains the module configuration interface for Uart driver.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifndef UART_CFG_DEFINES_H
#define UART_CFG_DEFINES_H


#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* @brief Enables / Disables multicore support */
#define UART_MULTICORE_SUPPORT          (STD_ON)

/* @brief Enables / Disables PreCompile support when there is a single configuration */
#define UART_PRECOMPILE_SUPPORT         (STD_OFF)

/* @brief Enables / Disables DET development errors detection and reporting */
#define UART_DEV_ERROR_DETECT           (STD_ON)

/* @brief Enables / Disables Runtime errors detection and reporting */
#define UART_DET_RUNTIME_REPORT_ERROR_STATUS       (STD_ON)

/* @brief Number of Channels configured. */
#define UART_CH_MAX_CONFIG              (1U)

/* @brief Number of loops before returning Timeout status */
#define UART_TIMEOUT_VALUE           (1000U)

/* @brief Switches the Uart_GetVersionInfo() API ON or OFF. Support for version info API. */
#define UART_VERSION_INFO_API           (STD_ON)

/* @brief Uart has feature DMA enable. */
#define UART_HAS_DMA_ENABLED            (STD_ON)

/* @brief Number of available hardware instances */
#define UART_NUMBER_OF_INSTANCES             (14U)

/* @brief UART Hardware instances mapping initialize value */
#define UART_HW_CHANNELS_MAPPING_FOR_INIT       {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}

/* @brief Declare callback parameters if any */
#define UART_CALLBACK_DECLARED            (STD_ON)

#define UART_RERECIVE_ENABLED             (STD_OFF)

/* @brief Internal Buffer Size */




#define UART_INTERNAL_BUFFER_SIZE_0            (64U)

#define UART_TO_USER_BUFFER_SIZE_0             (32U)



/**
* @brief        All CoreIDs are supported by Uart driver.
*/

#define UART_MAX_PARTITIONS             (4U)

/* Api to retrieve the core id */
#if (STD_ON == UART_MULTICORE_SUPPORT)
    #define Uart_GetCoreID() (GET_CPU_ID())
#else
    #define Uart_GetCoreID() ((uint32)0x0U)
#endif /* (STD_ON == UART_MULTICORE_SUPPORT) */

/* @brief Support for User mode. If this parameter has been configured to TRUE, the Uart driver can be executed from both supervisor and user mode. */
#define UART_ENABLE_USER_MODE_SUPPORT     (STD_OFF)



/* @brief Support for Internal Loopback. If this parameter has been configured to TRUE, the Uart driver will be executed in Loopback mode. */
#define UART_ENABLE_INTERNAL_LOOPBACK  (STD_OFF)

#if (STD_ON == UART_ENABLE_INTERNAL_LOOPBACK)
    /* @brief Array of instances that have loopback mode enabled. */
    #define UART_ENABLE_INTERNAL_LOOPBACK_PER_INSTANCE  {(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE }
#endif

/* @brief Support for hardware flow control. If this parameter has been configured to TRUE, the Uart driver will enable hardware flow control. */
#define UART_ENABLE_FLOWCONTROL  (STD_OFF)

#if (STD_ON == UART_ENABLE_FLOWCONTROL)
    /* @brief Array of instances that have the hardware flow control enabled. */
    #define UART_ENABLE_FLOWCONTROL_PER_INSTANCE  {(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE }
#endif

/* @brief Support for Uart Timeout Interrupt. If this parameter has been configured to TRUE, the Uart driver will enable Timeout Interrupt. */
#define UART_ENABLE_TIMEOUT_INTERRUPT  (STD_ON)

#if (STD_ON == UART_ENABLE_TIMEOUT_INTERRUPT)
    /* @brief Array of instances that have timeout interrupt enabled. */
    #define UART_ENABLE_TIMEOUT_INTERRUPT_PER_INSTANCE  {(boolean) FALSE,(boolean) TRUE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE,(boolean) FALSE }
#endif


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

/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */
#endif /* UART_CFG_DEFINES_H */

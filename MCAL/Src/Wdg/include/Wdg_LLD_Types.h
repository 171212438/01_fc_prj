/**
*   @file    Wdg_LLD_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - low level type layer header file.
*   @details watchdog type header file.
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

#ifndef WDG_LLD_TYPES_H
#define WDG_LLD_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

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
/**
* @brief          Wdg_LLDConfigType. [SWS_Wdg_00171] [SRS_BSW_00414]
* @details        Contains the information related to the hardware setup for WDOG
*/
typedef struct
{
    uint32              u32WdgLLDConfig;       /**< @brief WDOG configuration */
    uint32              u32WdgLLDTimeout;      /**< @brief WDOG timeout */
    uint32              u32WdgLLDWindow;       /**< @brief WDOG window */
    boolean             bWdgLLDPrescalerEn;    /**< @brief WDOG prescaler enabled */
    uint32              u32WdgLLDInternalTimerClock; /**< @brief WDOG internal clock frequency */
}Wdg_LLDConfigType;


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/



/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/



#ifdef __cplusplus
}
#endif

#endif /*WDG_WDOG_TYPES_H*/

/** @} */

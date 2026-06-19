/**
*   @file    CDD_Uart_Cfg.h
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

#ifndef UART_CFG_H
#define UART_CFG_H

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
#include "Mcal.h"
#include "CDD_Uart_PBcfg.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define UART_CFG_VENDOR_ID                    174
#define UART_CFG_AR_RELEASE_MAJOR_VERSION     4
#define UART_CFG_AR_RELEASE_MINOR_VERSION     6
#define UART_CFG_AR_RELEASE_REVISION_VERSION  0
#define UART_CFG_SW_MAJOR_VERSION             1
#define UART_CFG_SW_MINOR_VERSION             5
#define UART_CFG_SW_PATCH_VERSION             1
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against CDD_Uart_PBcfg.h */
#if (UART_CFG_VENDOR_ID != UART_PBCFG_VENDOR_ID)
    #error "CDD_Uart_Cfg.h and CDD_Uart_PBcfg.h have different vendor ids"
#endif
#if ((UART_CFG_AR_RELEASE_MAJOR_VERSION    != UART_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
    (UART_CFG_AR_RELEASE_MINOR_VERSION    != UART_PBCFG_AR_RELEASE_MINOR_VERSION) || \
    (UART_CFG_AR_RELEASE_REVISION_VERSION != UART_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of CDD_Uart_Cfg.h and CDD_Uart_PBcfg.h are different"
#endif
#if ((UART_CFG_SW_MAJOR_VERSION != UART_PBCFG_SW_MAJOR_VERSION) || \
    (UART_CFG_SW_MINOR_VERSION != UART_PBCFG_SW_MINOR_VERSION) || \
    (UART_CFG_SW_PATCH_VERSION != UART_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of CDD_Uart_Cfg.h and CDD_Uart_PBcfg.h are different"
#endif


#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((UART_CFG_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
        (UART_CFG_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of CDD_Uart_Cfg.h and Mcal.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#define UART_CONFIG_EXT \
    UART_CONFIG_PB



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



/**
* @brief    Declare callback functions if any
*/

#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

/* Define User Receive callback function */
extern void Uart_Callback(const uint8 HwInstance,const uint16 size,const uint8 *DataBuffer, const Uart_EventType Event);

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

            

/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */
#endif /* UART_CFG_H */

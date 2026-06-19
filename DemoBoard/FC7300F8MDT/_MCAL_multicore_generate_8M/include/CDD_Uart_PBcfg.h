/**
*   @file    CDD_Uart_PBcfg.h
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


#ifndef UART_PBCFG_H
#define UART_PBCFG_H

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
#include "Uart_Version.h"
#include "Uart_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_PBCFG_VENDOR_ID                     174
#define UART_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define UART_PBCFG_AR_RELEASE_MINOR_VERSION      6
#define UART_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define UART_PBCFG_SW_MAJOR_VERSION              1
#define UART_PBCFG_SW_MINOR_VERSION              5
#define UART_PBCFG_SW_PATCH_VERSION              1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Uart_Version.h */
#if (UART_PBCFG_VENDOR_ID != UART_VENDOR_ID)
    #error "Uart_PBcfg.h and Uart_Version.h have different vendor ids"
#endif
#if ((UART_PBCFG_AR_RELEASE_MAJOR_VERSION   != UART_AR_RELEASE_MAJOR_VERSION) || \
    (UART_PBCFG_AR_RELEASE_MINOR_VERSION   != UART_AR_RELEASE_MINOR_VERSION) || \
    (UART_PBCFG_AR_RELEASE_REVISION_VERSION!= UART_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Uart_PBcfg.h and Uart_Version.h are different"
#endif
#if ((UART_PBCFG_SW_MAJOR_VERSION!= UART_SW_MAJOR_VERSION) || \
    (UART_PBCFG_SW_MINOR_VERSION!= UART_SW_MINOR_VERSION) || \
    (UART_PBCFG_SW_PATCH_VERSION!= UART_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Uart_PBcfg.h and Uart_Version.h are different"
#endif

/*==================================================================================================
                                        GLOBAL MACROS
==================================================================================================*/
/**
* @brief          Symbolic names for configured channels.
* @details        Symbolic names for configured channels.
*/
#define UartConf_UartChannel_UartChannel_0         0

/**
* @brief          Link Uart channels symbolic names with Uart hardware channel IDs.
* @details        Link Uart channels symbolic names with Uart hardware channel IDs.
*
* @api
*/


            
#ifndef UART_INSTANCE_USING_1
    #define UART_INSTANCE_USING_1    1U
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#define UART_CONFIG_PB \
extern const Uart_ConfigType Uart_Config_EcucPartition_0;\

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
                                        GLOBAL VARIABLES
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

#endif /* UART_PBCFG_H */

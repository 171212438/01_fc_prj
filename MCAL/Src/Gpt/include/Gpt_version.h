/**
*   @file    Gpt_Version.h
*   @version 1.5.1

*   @brief   AUTOSAR Gpt - version definition.
*   @details This file contains the CAN version definition.
*
*   @addtogroup GPT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.4.0       14/11/2023    QXW0076       N/A          clear some misra warning
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_VERSION_H
#define GPT_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

/* [SWS_Gpt_00380] [SWDESG_GPT_245] [FUNC_Gpt_0022] [SWDESG_GPT_114] */
/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

/*=================================================================================================
*                               SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define GPT_AR_RELEASE_MAJOR_VERSION        4
#define GPT_AR_RELEASE_MINOR_VERSION        6
#define GPT_AR_RELEASE_REVISION_VERSION     0
#define GPT_SW_MAJOR_VERSION                1
#define GPT_SW_MINOR_VERSION                5
#define GPT_SW_PATCH_VERSION                1
#define GPT_VENDOR_ID                       174
#define GPT_MODULE_ID                       100

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/*=================================================================================================
*                                          CONSTANT-LIKE DEFINES
=================================================================================================*/

/*=================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
=================================================================================================*/

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/



#ifdef __cplusplus
}
#endif

#endif /*GPT_VERSION_H*/

/** @} */

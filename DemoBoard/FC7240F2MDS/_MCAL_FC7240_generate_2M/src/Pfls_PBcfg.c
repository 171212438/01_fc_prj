/**
*   @file    Pfls_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Pfls - AUTOSAR Module Flash Driver
*   @details Definitions of all post-build configuration structures
*
*   @addtogroup Pfls
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Pfls
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       20/06/2023    QXW0054       N/A          Pfls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Pfls increases hardware operation mutex
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Pfls.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

#define PFLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pfls_MemMap.h"




/**
* @brief        Structure used to set function pointers notification, working mode
*/
/* Pfls module initialization data (PflsConfigSet)*/

PFLS_DATA_SECTION const Pfls_ConfigType Pfls_Config =
{
    NULL_PTR, /* PflsJobEndNotification */
    NULL_PTR, /* PflsJobErrorNotification */  
    MEMIF_MODE_SLOW, /* PflsDefaultMode */
    1048576U, /* PflsMaxReadFastMode */
    1024U, /* PflsMaxReadNormalMode */
    128U, /* PflsMaxWriteFastMode */
    16U, /* PflsMaxWriteNormalMode */
    2097152U, /* PflsSumSize */
};
#define PFLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/

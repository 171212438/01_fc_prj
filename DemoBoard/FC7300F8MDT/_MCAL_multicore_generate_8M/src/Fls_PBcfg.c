/**
*   @file    Fls_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver
*   @details Definitions of all post-build configuration structures
*
*   @addtogroup Fls
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Fls.h"

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
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"
/* Declaration of Fls notification function (Fee_JobEndNotification())*/
extern void Fee_JobEndNotification( void );
/* Declaration of Fls notification function (Fee_JobErrorNotification())*/
extern void Fee_JobErrorNotification( void );

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"




/**
* @brief        Structure used to set function pointers notification, working mode
*/
/* Fls module initialization data (FlsConfigSet)*/

FLS_DATA_SECTION const Fls_ConfigType Fls_Config =
{
    &Fee_JobEndNotification, /* FlsJobEndNotification */
    &Fee_JobErrorNotification, /* FlsJobErrorNotification */  
    MEMIF_MODE_SLOW, /* FlsDefaultMode */
    1048576U, /* FlsMaxReadFastMode */
    1024U, /* FlsMaxReadNormalMode */
    128U, /* FlsMaxWriteFastMode */
    16U, /* FlsMaxWriteNormalMode */
    57344U, /* FlsSumSize */
};
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/

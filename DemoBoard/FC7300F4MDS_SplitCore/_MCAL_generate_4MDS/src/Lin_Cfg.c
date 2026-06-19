/**
*   @file    Lin_Cfg.c
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Lin.h"


#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONST_8
#include "Lin_MemMap.h"

LIN_DATA_SECTION const uint8 Lin_HwToChannel[LIN_INSTANCE_COUNT] =
{
    0xFF,
    0xFF,
    (uint8)1U,
    0xFF,
    0xFF,
    0xFF,
    (uint8)0U,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
};

#define LIN_STOP_SEC_CONST_8
#include "Lin_MemMap.h"

#define LIN_START_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"

LIN_DATA_SECTION const Lin_ChannelType Lin_LinChannel_0_PC=
{
    (uint8)0U,    /* Lin Channel ID */
    FCUART_6,     /* Lin Hardware channel*/
    (uint8)STD_OFF,    /* Wakeup support disabled */
    LIN_NONE_ECUM_WAKEUP_SOURCE_REF,    /* None Wakeup Source was referred */
    LIN_FCUART_ECUCPARTITION_0_CORE_ID,                /* Core id of channel*/
};
LIN_DATA_SECTION const Lin_ChannelType Lin_LinChannel_1_PC=
{
    (uint8)1U,    /* Lin Channel ID */
    FCUART_2,     /* Lin Hardware channel*/
    (uint8)STD_OFF,    /* Wakeup support disabled */
    LIN_NONE_ECUM_WAKEUP_SOURCE_REF,    /* None Wakeup Source was referred */
    LIN_FCUART_ECUCPARTITION_1_CORE_ID,                /* Core id of channel*/
};
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/**
 * @brief   DEM error parameters
 */
LIN_DATA_SECTION const Mcal_DemErrorType Lin_E_TimeoutCfg =
{
    (uint32)STD_OFF,
    0U
};
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

#define LIN_STOP_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

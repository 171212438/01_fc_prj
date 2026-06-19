/**
*   @file    Lin_PBcfg.c
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
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
#include "Lin_Cfg.h"
#include "Lin_GeneralTypes.h"

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
*                                      LOCAL VARIABLES
==================================================================================================*/
#define LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

LIN_DATA_SECTION extern Lin_StateStructType Lin_StateConfig[];

#define LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Lin_MemMap.h"
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

/* Lin Transfer State Notification */


LIN_TEXT_SECTION extern void Lin_Callback_Handle(uint8 u8Channel, Lin_StateStructType *LinStateStruct);  /* Transfer Notification for Device 'LinChannel_1' */



#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined
                  #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: The object will be referenced in other modules and declared where it is used */


/**
* @brief          Configuration for Lin Channel 0 - Configuration:
*                 LinGlobalConfig.
*/
/* [SWS_Lin_00013] [SWS_Lin_00039] */
LIN_DATA_SECTION const Lin_CoreConfigType Lin_LinChannel_0_C=
{
    &Lin_LinChannel_0_PC,
    LEN_DELIMITER_1BIT,      /* LIN Break delimiter length*/
    9600U,      /* [SWS_Lin_00011] Baud rate in hertz */
    50U,     /* Baud clock divisor*/
    25U,     /* Over sampling ratio*/
    25U,       /* Used for baudrate change */
    (boolean)LIN_MASTER_NODE,   /* Node function as Master or Slave */
    NULL_PTR,
    &Lin_StateConfig[0U],
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    4584U,           /* HeaderTimeoutValue in microseconds */
    1459U,         /* ResponseTimeoutValue in microseconds for 1 byte */
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
};


/**
* @brief          Configuration for Lin Channel 1 - Configuration:
*                 LinGlobalConfig.
*/
/* [SWS_Lin_00013] [SWS_Lin_00039] */
LIN_DATA_SECTION const Lin_CoreConfigType Lin_LinChannel_1_C=
{
    &Lin_LinChannel_1_PC,
    LEN_DELIMITER_1BIT,      /* LIN Break delimiter length*/
    9600U,      /* [SWS_Lin_00011] Baud rate in hertz */
    50U,     /* Baud clock divisor*/
    25U,     /* Over sampling ratio*/
    25U,       /* Used for baudrate change */
    (boolean)LIN_SLAVE_NODE,    /* Node function as Master or Slave */
    Lin_Callback_Handle,
    &Lin_StateConfig[1U],
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    4584U,           /* HeaderTimeoutValue in microseconds */
    1459U,         /* ResponseTimeoutValue in microseconds for 1 byte */
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
};


/**
* @brief          Configuration for Lin Channel 2 - Configuration:
*                 LinGlobalConfig.
*/
/* [SWS_Lin_00013] [SWS_Lin_00039] */
LIN_DATA_SECTION const Lin_CoreConfigType Lin_LinChannel_2_C=
{
    &Lin_LinChannel_2_PC,
    LEN_DELIMITER_1BIT,      /* LIN Break delimiter length*/
    9600U,      /* [SWS_Lin_00011] Baud rate in hertz */
    50U,     /* Baud clock divisor*/
    25U,     /* Over sampling ratio*/
    25U,       /* Used for baudrate change */
    (boolean)LIN_MASTER_NODE,   /* Node function as Master or Slave */
    NULL_PTR,
    &Lin_StateConfig[2U],
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    4584U,           /* HeaderTimeoutValue in microseconds */
    1459U,         /* ResponseTimeoutValue in microseconds for 1 byte */
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
};


/**
* @brief          Configuration for Lin Channel 3 - Configuration:
*                 LinGlobalConfig.
*/
/* [SWS_Lin_00013] [SWS_Lin_00039] */
LIN_DATA_SECTION const Lin_CoreConfigType Lin_LinChannel_3_C=
{
    &Lin_LinChannel_3_PC,
    LEN_DELIMITER_1BIT,      /* LIN Break delimiter length*/
    9600U,      /* [SWS_Lin_00011] Baud rate in hertz */
    50U,     /* Baud clock divisor*/
    25U,     /* Over sampling ratio*/
    25U,       /* Used for baudrate change */
    (boolean)LIN_MASTER_NODE,   /* Node function as Master or Slave */
    NULL_PTR,
    &Lin_StateConfig[3U],
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    4584U,           /* HeaderTimeoutValue in microseconds */
    1459U,         /* ResponseTimeoutValue in microseconds for 1 byte */
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
};

/* PRQA S 3408 -- */

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined
 * Reason: The object will be referenced in other modules and declared where it is used */
/* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile qualification from the type pointed to by a pointer
 * Reason: A point const should be performed Here Unavoidably.*/
/**
* @brief          Lin Configuration data for LinGlobalConfig.
*
* @api
*/

 /**
 * @brief   Configuration for Lin Channel .
 */
LIN_DATA_SECTION const Lin_ConfigType Lin_Config_EcucPartition_0 =
{
	LIN_FCUART_ECUCPARTITION_0_CORE_ID,

    {
        (Lin_CoreConfigType*)&Lin_LinChannel_0_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_1_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_2_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_3_C
    }
};
 /**
 * @brief   Configuration for Lin Channel .
 */
LIN_DATA_SECTION const Lin_ConfigType Lin_Config_EcucPartition_1 =
{
	LIN_FCUART_ECUCPARTITION_1_CORE_ID,

    {
        (Lin_CoreConfigType*)&Lin_LinChannel_0_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_1_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_2_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_3_C
    }
};
 /**
 * @brief   Configuration for Lin Channel .
 */
LIN_DATA_SECTION const Lin_ConfigType Lin_Config_EcucPartition_2 =
{
	LIN_FCUART_ECUCPARTITION_2_CORE_ID,

    {
        (Lin_CoreConfigType*)&Lin_LinChannel_0_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_1_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_2_C,

        (Lin_CoreConfigType*)&Lin_LinChannel_3_C
    }
};



 /**
 * @brief   Lin Configuration data for Lin.
 */
LIN_DATA_SECTION const Lin_ConfigType* const Lin_Config[LIN_PARTIONS_NB] =
{
    &Lin_Config_EcucPartition_0,
    &Lin_Config_EcucPartition_1,
    &Lin_Config_EcucPartition_2,
};

/* PRQA S 311 -- */
/* PRQA S 3408 -- */
#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
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

#ifdef __cplusplus
}
#endif

/** @} */

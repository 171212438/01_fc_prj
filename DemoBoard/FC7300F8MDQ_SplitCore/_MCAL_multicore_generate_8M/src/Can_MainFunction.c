/**
*   @file    Can_MainFunction.c
*   @version 1.5.1
*
*   @brief   AUTOSAR CAN Read & Write Main funtion
*   @details Contains the CAN Read & Write Main funtion definitions
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.6.0       2024-03-31    QXW0112       N/A           Add FC7240 platform support
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can.h"
#include "Can_PBcfg.h"
#include "Can_Cfg.h"
#include "Can_Reg.h"
#include "Can_Hal.h"

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
*                                      EXTERN VARIABLES
==================================================================================================*/
#if (CAN_DEV_ERROR_DETECT == STD_ON)
extern Can_StatusType s_aCan_eInitStatus[CAN_ECUC_CORES_NUM];
#endif

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"

#if (CAN_TXPOLL_SUPPORTED == STD_ON)
#ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE
#if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON)

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
/**
 * @brief This function performs the polling of TX confirmation when CAN_TX_PROCESSING is set to POLLING in process( Different MainRwmainFunction set in EB )
 *
 */
CAN_TEXT_SECTION static void Can_Multiple_MainFunction_Write(uint8 u8Index)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
    #if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if(can_currentCore >= CAN_ECUC_CORES_NUM)
    {
    	Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WRITE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WRITE, (uint8)CAN_E_UNINIT);
        }
        else
        {
            #endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Poll all controllers for Tx MB statuses. */
            Can_Hal_MainFunctionMultipleWritePoll(u8Index, can_currentCore);
            #if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
        #endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/
#endif/*CAN_MAINFUNCTION_MULTIPLE_WRITE*/
#endif/* CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON */
#endif /*(CAN_TXPOLL_SUPPORTED == STD_ON)   */

#if (CAN_RXPOLL_SUPPORTED  == STD_ON)
#ifdef CAN_MAINFUNCTION_MULTIPLE_READ
#if (CAN_MAINFUNCTION_MULTIPLE_READ == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
/**
 * @brief This function performs the polling of RX indications when CAN_RX_PROCESSING is set to POLLING in process( Different MainRwmainFunction set in EB )
 *
 */
CAN_TEXT_SECTION static void Can_Multiple_MainFunction_Read(uint8 u8Index)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
    #if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if(can_currentCore >= CAN_ECUC_CORES_NUM)
    {
         Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_UNINIT);
        }
        else
        {
        #endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Poll all controllers for Rx MB statuses. */
            Can_Hal_MainFunctionMultipleReadPoll(u8Index, can_currentCore);
        #if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
        #endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/
#endif /*(CAN_MAINFUNCTION_MULTIPLE_READ == STD_ON)*/
#endif /* ifdef (CAN_MAINFUNCTION_MULTIPLE_READ)*/
#endif /* (CAN_RXPOLL_SUPPORTED == STD_ON) */

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/


#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

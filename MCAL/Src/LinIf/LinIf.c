/**
 *   @file    Linif.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR LinIf - AUTOSAR LinIf module interface.
 *   @details AUTOSAR LinIf module interface.
 *            This file contains sample code only. It is not part of the production code deliverables.
 *
 *   @addtogroup LINIF
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
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Lin.h"
#include "LinIf.h"
#include "LinIf_Cbk.h"
#if (LIN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
 * @file           LinIf.c
 */
#define LIN_IF_VENDOR_ID_C                   174
#define LIN_IF_AR_RELEASE_MAJOR_VERSION_C    4
#define LIN_IF_AR_RELEASE_MINOR_VERSION_C    6
#define LIN_IF_AR_RELEASE_REVISION_VERSION_C 0
#define LIN_IF_SW_MAJOR_VERSION_C            1
#define LIN_IF_SW_MINOR_VERSION_C            5
#define LIN_IF_SW_PATCH_VERSION_C            1

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#if (LINIF_WAKEUP_SUPPORT == STD_ON)
/**
* @brief   The LIN Driver or LIN Transceiver Driver will call this function to report the wake up
*          source after the successful wakeup detection during CheckWakeup or after power on by bus.
* @details This is a function stub only.
*
* @param[in]  WakeupSource - Source device which initiated the wakeup event: LIN controller
*                            or LIN transceiver.
*

*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
void LinIf_WakeupConfirmation(EcuM_WakeupSourceType WakeupSource)
{
    (void)WakeupSource;
}
/*PRQA S 1503 --*/

/**
* @brief   Will be called when the EcuM has been notified about a wakeup on a specific LIN channel.
*
* @details This is a function stub only.
*
* @param[in]  WakeupSource - Source device which initiated the wakeup event: LIN controller
*                            or LIN transceiver.
*

*/
/* PRQA S 1503 ++
 * #Misra-C:2012 Rule-2.1 The function is defined but is not used within this project.
 * */
Std_ReturnType LinIf_CheckWakeup(EcuM_WakeupSourceType WakeupSource)
{
    (void)WakeupSource;
    Std_ReturnType Std_Return = 0;
    return Std_Return;
}

#endif
#ifdef __cplusplus
}
#endif

/* End of File */

/** @}*/

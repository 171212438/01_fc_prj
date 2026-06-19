/**
*   @file    Can_MainFunction.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Can Post-Build configuration - API
*   @details Contains the module configuration interface for Can driver.
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
*   1.2.0       2025-05-06    QXW0038       N/A          First version for FC7300
==================================================================================================*/
#ifndef CAN_MAINFUNCTION_H
#define CAN_MAINFUNCTION_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can_Cfg.h"

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
 * Reason: Some macro length are more than 31 */



 /**
  * @brief This function performs the polling of TX confirmation when CAN_TX_PROCESSING is set to
  *        POLLING
  *
  */
 extern void Can_MainFunction_Write(void);

 /**
  * @brief This function performs the polling of RX indications when CAN_RX_PROCESSING is set to
  *        POLLING.
  *
  */
 extern void Can_MainFunction_Read(void);

 /**
  * @brief This function performs the polling of bus-off events that are configured statically as
  *        'to be polled'.
  *
  */
 extern void Can_MainFunction_BusOff(void);

 /**
 * @brief This function performs the polling of error events that are configured statically as
 *        'to be polled'.
 *
 */
 extern void Can_MainFunction_Error(void);

 #define Can_MainFunction_Wakeup()

 /**
  * @brief This function performs the polling of CAN controller mode transitions.
  *
  */
 extern void Can_MainFunction_Mode(void);

/* PRQA S 0779 -- */

#ifdef __cplusplus
}
#endif


#endif /* CAN_MAINFUNCTION_H */

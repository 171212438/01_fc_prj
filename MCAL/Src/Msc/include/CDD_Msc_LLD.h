/**
*   @file    CDD_Msc_LLD.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Msc - Isolation level header file for MSC driver.
*   @details Header file for function definition on isolation level betwen high and low level driver.
*
*   @addtogroup MSC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MSC
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
*   0.6.0       09/11/2023    QXW0084       N/A          MSC Initial Version
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef CDD_MSC_LLD_H
#define CDD_MSC_LLD_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "CDD_Msc.h"
#include "CDD_Msc_Reg.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/** @brief    Maximum value of bit transfer (without data bit) */
#if (MSC_DEV_ERROR_DETECT == STD_ON)
#define MSC_DOWNSTREAM_DATA_MAX     32U
#endif /* (MSC_DEV_ERROR_DETECT == STD_OFF) */

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define CDD_MSC_START_SEC_VAR_NO_INIT_8
#include "Msc_MemMap.h"

/**
* @brief          MSC channel Rx state variable.
* @details        MSC channel Rx state machine.
*/
CDD_MSC_DATA_SECTION extern volatile Msc_StatusType Msc_ChStatusRx[MSC_HW_MAX_MODULES];

/**
 * @brief          MSC channel Rx data register x status.
 * @details        MSC channel Rx data register status.
 */
CDD_MSC_DATA_SECTION extern volatile Msc_StatusType Msc_RDRxStatus[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];

/**
 * @brief          MSC channel Rx data register x logic addr.
 * @details        MSC channel Rx data register logic addr.
 */
CDD_MSC_DATA_SECTION extern volatile uint8 Msc_RDRxLogicAddr[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];

/**
 * @brief          MSC channel status.
 * @details        MSC channel status.
 */
CDD_MSC_DATA_SECTION extern uint8 Msc_ChStatus[MSC_HW_MAX_MODULES];

#define CDD_MSC_STOP_SEC_VAR_NO_INIT_8
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_NO_INIT_16
#include "Msc_MemMap.h"

/**
 * @brief          MSC channel Rx data register x data buffer.
 * @details        MSC channel Rx data register data buffer.
 */
CDD_MSC_DATA_SECTION extern uint16 Msc_RDRxDataBuffer[MSC_HW_MAX_MODULES][MSC_RDRx_COUNT];

#define CDD_MSC_STOP_SEC_VAR_NO_INIT_16
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Msc_MemMap.h"

/**
* @brief          Global configuration pointer.
* @details        Pointer to the configuration structure.
*/
CDD_MSC_DATA_SECTION extern const Msc_ConfigType *Msc_CfgPtr[MSC_MAX_PARTITIONS];

#define CDD_MSC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_VAR_INIT_8
#include "Msc_MemMap.h"
/* PRQA S 3684 ++ #Misra-C:2012 Rule-8.11 When an array with external linkage is declared, its size should be explicitly specified.
 * This rule applies to non-defining declarations only. It is possible to define an array and specify its size implicitly by means of initialization.
 * Reason: The size of the object "Msc_DrvStatus" was implicitly specified when defining it*/
CDD_MSC_DATA_SECTION extern uint8 Msc_DrvStatus[];
/* PRQA S 3684 -- */
#define CDD_MSC_STOP_SEC_VAR_INIT_8
#include "Msc_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

CDD_MSC_TEXT_SECTION void Msc_LLD_InitChannel(const Msc_ChannelConfigType * pChannelConfig);
CDD_MSC_TEXT_SECTION void Msc_LLD_DeInitChannel(uint8 u8Channel);
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_StartChannel(uint8 u8Channel);
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel);
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel);
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn);
CDD_MSC_TEXT_SECTION void Msc_LLD_SetData(uint8 u8Channel, const uint32 *DataBufferPtr);
CDD_MSC_TEXT_SECTION void Msc_LLD_SendData(uint8 u8Channel, const uint32 *DataBufferPtr);
CDD_MSC_TEXT_SECTION void Msc_LLD_SendCommand(uint8 u8Channel, const uint32 *CommandBufferPtr,
                            uint8 CommandBufferBitLength);
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel);
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetRxErrorStatus(uint8 u8Channel, uint8 u8Rxindex);
#if (MSC_POLLING_USED == STD_ON)
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetRxStatus(uint8 u8Channel, MSC_RDRxIndexType eRxindex, uint16 *pRxDataBufferPtr, uint8 *pLogicAddr);

#endif /* (MSC_POLLING_USED == STD_ON) */
CDD_MSC_TEXT_SECTION void Msc_LLD_InterruptHandler(uint8 u8Channel);


#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_MSC_LLD_H */

/** @} */

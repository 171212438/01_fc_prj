/**
 *   @file    Ssi_Hal.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ssi - Ssi driver Hal layer header file.
 *   @details SSI driver hardware layer header file.
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifndef SSI_HAL_H
#define SSI_HAL_H

#include "CDD_Ssi.h"

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief SSI hardware status
 */
typedef struct
{
    boolean bInsEnable;                         /**< Instance enable flag            */
    boolean bSubinsEnable[SSI_MAX_SUBINSTANCE]; /**< Sub-instance enable flags array */
} SsiHw_Status;

#define SSI_START_SEC_CODE
#include "Ssi_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/*================================================================================================*/
/**
 * @brief Initialize the ssi.
 *
 * @param[in]    pConfig          The pointer of ssi configuration structure
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void Ssi_Hal_Init(const Ssi_ConfigType *pConfig, uint8 u8CurrentCore);

#if (SSI_DEINIT_API == STD_ON)
/**
 * @brief De-Initialize the ssi.
 *
 * @param[in]    u8CurrentCore    The core ID for serving core
 *
 * @return void
 */
void Ssi_Hal_DeInit(uint8 u8CurrentCore);
#endif

/**
 * @brief Main function for polling the fast message.
 *
 * @param[in]    u8CurrentCore          The core ID for serving core
 *
 * @return void
 */
void Ssi_Hal_MainFunctionMsgRead(uint8 u8CurrentCore);

#define SSI_STOP_SEC_CODE
#include "Ssi_MemMap.h"

/** @}*/

#endif /* _SSI_HAL_H_ */

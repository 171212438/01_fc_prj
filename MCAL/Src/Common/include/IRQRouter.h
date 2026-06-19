/**
 *   @file    IRQRouter.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR IRQRouter - common header file.
 *   @details Multicore interrupt router common header file.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : IRQRouter
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
*   0.3.0       30/09/2023    QXW0055       N/A          IRQRouter Initial Version
==================================================================================================*/

#ifndef IRQROUTER_H
#define IRQROUTER_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Scm_RegOps.h"
#include "Std_Types.h"

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
typedef enum
{
    IRQROUTER_CPU0           = 1U,
    IRQROUTER_CPU1           = 2U,
    IRQROUTER_CPU0_CPU1      = 3U,
    IRQROUTER_CPU2           = 4U,
    IRQROUTER_CPU0_CPU2      = 5U,
    IRQROUTER_CPU1_CPU2      = 6U,
    IRQROUTER_CPU0_CPU1_CPU2 = 7U
} IRQRouter_CpuSel;

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define COMMON_START_SEC_CODE
#include "Common_MemMap.h"

COMMON_TEXT_SECTION void           IRQRouter_SetNMI(IRQRouter_CpuSel eCpuSel, boolean bStatus);
COMMON_TEXT_SECTION Std_ReturnType IRQRouter_SetNVIC(IRQRouter_CpuSel eCpuSel,
                                                     uint8            u8IrqNum,
                                                     boolean          bStatus);

#define COMMON_STOP_SEC_CODE
#include "Common_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* IRQROUTER_H */

/** @} */

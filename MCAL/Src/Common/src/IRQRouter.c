/**
 *   @file    IRQRouter.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR IRQRouter - common source file.
 *   @details Multicore interrupt router common source file.
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
*   0.2.0       30/09/2023    QXW0055       N/A          IRQRouter Initial Version
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

#include "IRQRouter.h"

#define COMMON_START_SEC_CODE
#include "Common_MemMap.h"

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
/**
 * @brief Set CPU0/1/2 NMI interrupt router enable/disable
 *
 * @param IRQRouter_CpuSel eCpuSel  CPU selection
 * @param boolean bStatus  enable/diasble
 */
COMMON_TEXT_SECTION void IRQRouter_SetNMI(IRQRouter_CpuSel eCpuSel, boolean bStatus)
{
    if ((boolean)TRUE == bStatus)
    {
        SCM_HWA_EnableNMIIrqRouter((uint8)eCpuSel);
    }
    else
    {
        SCM_HWA_DisableNMIIrqRouter((uint8)eCpuSel);
    }
}

/**
 * @brief Set CPU0/1/2 NVIC interrupt router enable/disable
 *
 * @param IRQRouter_CpuSel eCpuSel  CPU selection
 * @param uint8 u8IrqNum interrupt number
 * @param boolean bStatus  enable/diasble
 *
 * @return Std_ReturnType E_OK     -- success
 *                        E_NOT_OK -- failed
 */
COMMON_TEXT_SECTION Std_ReturnType IRQRouter_SetNVIC(IRQRouter_CpuSel eCpuSel,
                                                     uint8            u8IrqNum,
                                                     boolean          bStatus)
{
    Std_ReturnType Std_RetStatus = E_OK;

    if (u8IrqNum < SCM_INT_ROUTER_COUNT)
    {
        if ((boolean)TRUE == bStatus)
        {
            SCM_HWA_EnableNVICIrqRouter(u8IrqNum, (uint8)eCpuSel);
        }
        else
        {
            SCM_HWA_DisableNVICIrqRouter(u8IrqNum, (uint8)eCpuSel);
        }
    }
    else
    {
        Std_RetStatus = E_NOT_OK;
    }
    return Std_RetStatus;
}
#endif /* (DEVICE_SERIES == FC7300F8MDQxxxxT1B) ... */


#define COMMON_STOP_SEC_CODE
#include "Common_MemMap.h"

#ifdef __cplusplus
}
#endif

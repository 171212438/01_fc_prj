/**
 *   @file    Scm_RegOps.h
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Scm module lower level driver header.
 *   @details Scm module lower level drivers.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Common
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
#ifndef SCM_REGOPS_H
#define SCM_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Scm_Reg.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set NMI interrupt router enable
 *
 * @param u8Data the cores to enable NMI
 */
LOCAL_INLINE void SCM_HWA_EnableNMIIrqRouter(uint8 u8Data)
{
    SCM->INT_ROUTER_NMI |= (((uint32)u8Data) << SCM_INT_ROUTER_NMI_C0_EN_SHIFT);
}

/**
 * @brief Set NMI interrupt router disable
 *
 * @param u8Data the cores to disable NMI
 */
LOCAL_INLINE void SCM_HWA_DisableNMIIrqRouter(uint8 u8Data)
{
    SCM->INT_ROUTER_NMI &= ~(((uint32)u8Data) << SCM_INT_ROUTER_NMI_C0_EN_SHIFT);
}

/**
 * @brief Lock SCM_INT_ROUTER_NMI register
 *
 */
LOCAL_INLINE void SCM_HWA_LockINT_ROUTER_NMI(void)
{
    SCM->INT_ROUTER_NMI |= (uint32)SCM_INT_ROUTER_NMI_LOCK_MASK;
}

/**
 * @brief Get SCM_INT_ROUTER_NMI register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32 SCM_HWA_INT_ROUTER_NMI_GetLockStatus(void)
{
    return (SCM->INT_ROUTER_NMI & (uint32)SCM_INT_ROUTER_NMI_LOCK_MASK);
}

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
/**
 * @brief Set NVIC interrupt router enable
 *
 * @param u8IrqNum interrupt number
 * @param u8Data the cores to enable IRQ router
 */
LOCAL_INLINE void SCM_HWA_EnableNVICIrqRouter(uint8 u8IrqNum, uint8 u8Data)
{
    SCM->INT_ROUTER[u8IrqNum] |= (((uint32)u8Data) << SCM_INT_ROUTER_C0_EN_SHIFT);
}

/**
 * @brief Set NVIC interrupt router disable
 *
 * @param u8IrqNum interrupt number
 * @param u8Data the cores to disable IRQ router
 */
LOCAL_INLINE void SCM_HWA_DisableNVICIrqRouter(uint8 u8IrqNum, uint8 u8Data)
{
    SCM->INT_ROUTER[u8IrqNum] &= ~(((uint32)u8Data) << SCM_INT_ROUTER_C0_EN_SHIFT);
}

/**
 * @brief Lock SCM_INT_ROUTERn register
 *
 * @param u8IrqNum interrupt number
 */
LOCAL_INLINE void SCM_HWA_LockINT_ROUTERn(uint8 u8IrqNum)
{
    if (u8IrqNum < (uint8)SCM_INT_ROUTER_COUNT)
    {
        SCM->INT_ROUTER[u8IrqNum] |= (uint32)SCM_INT_ROUTER_NMI_LOCK_MASK;
    }
}

/**
 * @brief Get SCM_INT_ROUTERn register lock status
 *
 * @param u8IrqNum interrupt number
 * @return Lock status
 */
LOCAL_INLINE uint32 SCM_HWA_INT_ROUTERn_GetLockStatus(uint8 u8IrqNum)
{
    uint32 u32RegVal;
    if (u8IrqNum < (uint8)SCM_INT_ROUTER_COUNT)
    {
        u32RegVal = (SCM->INT_ROUTER[u8IrqNum] & (uint32)SCM_INT_ROUTER_NMI_LOCK_MASK);
    }
    else
    {
        u32RegVal = 0U;
    }
    return u32RegVal;
}
#endif /* (DEVICE_SERIES == FC7300F8MDQxxxxT1B) ... */

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/**
 *  @brief Enable FTU GTB
 *  @param u32Mask the FTU units mask to enable GTB
 */
LOCAL_INLINE void SCM_HWA_EnableGTBC(uint32 u32Mask)
{
    SCM->FTU_GTBC &= ~(uint32)SCM_FTU_GTBC_LOCK_MASK;
    SCM->FTU_GTBC |= u32Mask;
}

/**
 *  @brief Disable FTU GTB
 *  @param u32Mask the FTU units mask to disable GTB
 */
LOCAL_INLINE void SCM_HWA_DisableGTBC(uint32 u32Mask)
{
    SCM->FTU_GTBC &= ~(uint32)SCM_FTU_GTBC_LOCK_MASK;
    SCM->FTU_GTBC &= ~u32Mask;
}
#elif ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
       (DEVICE_SERIES == FC7300F4MDSxxxxT1B))
/**
 *  @brief Enable FTU GTB
 */
LOCAL_INLINE void SCM_HWA_EnableGTBC(uint32 u32Mask)
{
    (void)u32Mask;
    SCM->FTU_GTBC &= ~(uint32)SCM_FTU_GTBC_LOCK_MASK;
    SCM->FTU_GTBC |= (uint32)SCM_FTU_GTBC_GTBC_MASK;
}
/**
 *  @brief Disable FTU GTB
 */
LOCAL_INLINE void SCM_HWA_DisableGTBC(uint32 u32Mask)
{
    (void)u32Mask;
    SCM->FTU_GTBC &= ~(uint32)SCM_FTU_GTBC_LOCK_MASK;
    SCM->FTU_GTBC &= ~(uint32)SCM_FTU_GTBC_GTBC_MASK;
}
#endif /* (DEVICE_SERIES == FC7300F8MDQxxxxT1B) ... */

#ifdef __cplusplus
}
#endif

#endif /* SCM_REGOPS_H */

/** @} */

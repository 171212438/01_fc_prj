/**
 *   @file    CPM_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - Mcu General header file.
 *   @details Mcu General low level driver API.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CPM
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
*   0.1.0       15/07/2023    QXW0055       N/A          CPM_Reg Initial Version
==================================================================================================*/

#ifndef _CPM_REG_H_
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: It is common definition in h files */
#define _CPM_REG_H_
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C"
{
#endif

#include "Std_Types.h"
#include "Common_Cfg.h"

/* clang-format off */
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B))
#if defined(_TASKING_C_FC7XXX_)
/**
 * @brief Get Core ID
 *
 * @return Core ID
 */
LOCAL_INLINE uint8 Cpm_HWA_GetCoreId(void)
{
    register uint32 CoreId;

    ASM_KEYWORD volatile (
            "CPM_MISCR_BASE_L           .SET 0x0004                          \n"
            "CPM_MISCR_BASE_H           .SET 0xE008                          \n"
            "CPM_LOCK_BASE_OFFSET       .SET 0x1C                            \n"
            "CPM_MISCR_CPU_ID_SHIFT     .SET 17                              \n"
            "CPM_MISCR_CPU_ID_LENGTH    .SET 3                               \n"
            " movw  r0, #CPM_MISCR_BASE_L                                    \n"
            " movt  r0, #CPM_MISCR_BASE_H                                    \n"
            " ldr   %[core_id], [r0]                                         \n"
            " ldr   r0, [r0, #CPM_LOCK_BASE_OFFSET]                          \n"
            " ubfx  %[core_id], %[core_id], #CPM_MISCR_CPU_ID_SHIFT, #CPM_MISCR_CPU_ID_LENGTH    \n"
            : [core_id]"=r"(CoreId)
            :
            : "r0"
    );

    return (uint8)CoreId;
}
#else
#define CPM_MISCR_BASE          0xE0080004UL
#define CPM_MISCR_BASE_H        0xE008U
#define CPM_MISCR_BASE_L        0x0004U
#define CPM_LOCK_BASE           0xE0080020UL
#define CPM_LOCK_BASE_OFFSET    0x1CU
#define CPM_MISCR_CPU_ID_MASK   0x000E0000UL
#define CPM_MISCR_CPU_ID_LENGTH 3U
#define CPM_MISCR_CPU_ID_SHIFT  17U

/**
 * @brief Get Core ID
 *
 * @return Core ID
 */
LOCAL_INLINE uint8 Cpm_HWA_GetCoreId(void)
{
    register uint32 CoreId;

    ASM_KEYWORD volatile (
        "movw  r0, %[miscr_base_l]                                       \n"
        "movt  r0, %[miscr_base_h]                                       \n"
        "ldr   %[core_id], [r0]                                          \n"
        "ldr   r0, [r0, %[lock_base_offset]]                             \n"
        "ubfx  %[core_id], %[core_id], %[cpu_id_shift], %[cpu_id_len]    \n"
        : [core_id]"=r"(CoreId)
        : [miscr_base_l]"i"(CPM_MISCR_BASE_L),       [miscr_base_h]"i"(CPM_MISCR_BASE_H),
          [lock_base_offset]"i"(CPM_LOCK_BASE_OFFSET),
          [cpu_id_shift]"i"(CPM_MISCR_CPU_ID_SHIFT), [cpu_id_len]"i"(CPM_MISCR_CPU_ID_LENGTH)
        : "r0"
    );

    return (uint8)CoreId;
}
#endif /* _TASKING_C_FC7XXX_ */
/* clang-format on */

#elif ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
       (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
#define CPM_MISCR_BASE          0xE0080004UL
#define CPM_MISCR_CPU_ID_MASK   0x000E0000UL
#define CPM_MISCR_CPU_ID_LENGTH 3U
#define CPM_MISCR_CPU_ID_SHIFT  17U
/**
 * @brief Get Core ID
 *
 * @return Core ID
 */
LOCAL_INLINE uint8 Cpm_HWA_GetCoreId(void)
{
    uint32 CoreId = (*(volatile uint32 *)CPM_MISCR_BASE & CPM_MISCR_CPU_ID_MASK) >>
                    CPM_MISCR_CPU_ID_SHIFT;
    return (uint8)CoreId;
}

#elif ((DEVICE_SERIES == FC7300F4MDSxxxxT1B) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/**
 * @brief Get Core ID
 *
 * @return Core ID
 */
LOCAL_INLINE uint8 Cpm_HWA_GetCoreId(void)
{
    return 0U;
}

#else
#error "The selected platform is not supported."
#endif /* (DEVICE_SERIES == ...) */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef _CPM_REG_H_ */

/**
 *   @file    Can_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CAN - driver API and development errors implemention.
 *   @details AUTOSAR CAN - driver API and development errors implemention.
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
                                                          -support for CANFD baud rate expansion
register -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
                                                          -move function to inline
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Can_Hw.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define CAN_START_SEC_VAR_NO_INIT_32
#include "Can_MemMap.h"

#define CAN_STOP_SEC_VAR_NO_INIT_32
#include "Can_MemMap.h"

#define CAN_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Can_MemMap.h"

CAN_DATA_SECTION CanHw_MbOffsetWithHoh g_aCanHwUsedHohTable[CAN_MAXMBCOUNT_0];
CAN_DATA_SECTION CanHw_CanInfoWithHoh  g_aCanHwUserdControllerTable[CAN_MAXCONTROLLERCOUNT_0];

#define CAN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_START_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

/* define number of bytes of MBs */
#if (CAN_FD_MODE_ENABLE == STD_ON)

/**
 * @brief maximum and minimum threshold values for DLC
 *
 */
CAN_DATA_SECTION const Can_MBDlcMaxMinType g_kaCanHwDataLengthMaxMin[CAN_HW_NUM_VAL_DLC_U8] = {
    { CAN_HW_MAX_PAYLOAD8_U8, CAN_HW_MIN_PAYLOAD0_U8 },
    { CAN_HW_MAX_PAYLOAD12_U8, CAN_HW_MIN_PAYLOAD9_U8 },
    { CAN_HW_MAX_PAYLOAD16_U8, CAN_HW_MIN_PAYLOAD13_U8 },
    { CAN_HW_MAX_PAYLOAD20_U8, CAN_HW_MIN_PAYLOAD17_U8 },
    { CAN_HW_MAX_PAYLOAD24_U8, CAN_HW_MIN_PAYLOAD21_U8 },
    { CAN_HW_MAX_PAYLOAD32_U8, CAN_HW_MIN_PAYLOAD25_U8 },
    { CAN_HW_MAX_PAYLOAD48_U8, CAN_HW_MIN_PAYLOAD33_U8 },
    { CAN_HW_MAX_PAYLOAD64_U8, CAN_HW_MIN_PAYLOAD49_U8 }
};

/**
 * @brief Enhanced Rx FIFO filter element number list
 *
 */
CAN_DATA_SECTION const uint8 g_kaCanEnRxFifoFilterList[CAN_ENHANCED_RXFIFO_ERFFEL_LIST_LEN] =
    CAN_ENHANCED_RXFIFO_ERFFEL_LIST;
/**
 * @brief Enhanced Rx FIFO depth list
 *
 */
CAN_DATA_SECTION const uint8 g_kaCanEnRxFifoDepthList[CAN_ENHANCED_RXFIFO_DEPTH_LIST_LEN] =
    CAN_ENHANCED_RXFIFO_DEPTH_LIST;

#endif

/**
 * @brief Per-controller RAM init word-count table generated from resource properties.
 *
 */
CAN_DATA_SECTION const CanHw_RamInitWordConfigType
    g_kaCanHwRamInitWordConfig[CAN_HW_RAM_INIT_WORD_CONFIG_LEN] = CAN_HW_RAM_INIT_WORD_CONFIG_LIST;

/**
 * @brief can mb data index for 8bits
 *
 */
/* clang-format off */
CAN_DATA_SECTION const uint8 g_kaCanHwDataInMbIndex
#if CAN_FD_MODE_ENABLE == STD_ON
    [64]
#else
    [8]
#endif
    =
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
        { 3,  2,  1,  0,
          7,  6,  5,  4
#if CAN_FD_MODE_ENABLE == STD_ON
          ,
          11, 10, 9,  8,
          15, 14, 13, 12,
          19, 18, 17, 16,
          23, 22, 21, 20,
          27, 26, 25, 24,
          31, 30, 29, 28,
          35, 34, 33, 32,
          39, 38, 37, 36,
          43, 42, 41, 40,
          47, 46, 45, 44,
          51, 50, 49, 48,
          55, 54, 53, 52,
          59, 58, 57, 56,
          63, 62, 61, 60
#endif
        };
#elif (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
        { 0,  1,  2,  3,
          4,  5,  6,  7
#if CAN_FD_MODE_ENABLE == STD_ON
          ,
          8,  9,  10, 11,
          12, 13, 14, 15,
          16, 17, 18, 19,
          20, 21, 22, 23,
          24, 25, 26, 27,
          28, 29, 30, 31,
          32, 33, 34, 35,
          36, 37, 38, 39,
          40, 41, 42, 43,
          44, 45, 46, 47,
          48, 49, 50, 51,
          52, 53, 54, 55,
          56, 57, 58, 59,
          60, 61, 62, 63
#endif
        }
#endif
/* clang-format on */

#define CAN_STOP_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_START_SEC_CONST_32
#include "Can_MemMap.h"

/* CAN base address array */
/* PRQA S 1504 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: The object
 * "g_kaCanHwBaseAddressTable" is also used in the can_hal.c file, but it is hidden by the macro  */
CAN_DATA_SECTION const uint32 g_kaCanHwBaseAddressTable[] = {
#if CAN_MAXCTRL_SUPPORTED > 0
    FLEXCAN0_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 1
    ,
    FLEXCAN1_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 2
    ,
    FLEXCAN2_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 3
    ,
    FLEXCAN3_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 4
    ,
    FLEXCAN4_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 5
    ,
    FLEXCAN5_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 6
    ,
    FLEXCAN6_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 7
    ,
    FLEXCAN7_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 8
    ,
    FLEXCAN8_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 9
    ,
    FLEXCAN9_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 10
    ,
    FLEXCAN10_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 11
    ,
    FLEXCAN11_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 12
    ,
    FLEXCAN12_BASEADDR
#if CAN_MAXCTRL_SUPPORTED > 13
    ,
    FLEXCAN13_BASEADDR
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
};
/* PRQA S 1504 -- */

#define CAN_STOP_SEC_CONST_32
#include "Can_MemMap.h"

#define CAN_START_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_STOP_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define CAN_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Can_MemMap.h"

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined Reason: The object "g_u32CanHwTicksDelayDuration" has
 * defined in can_hal.c file */
CAN_DATA_SECTION uint32 g_u32CanHwTicksDelayDuration;
/* PRQA S 3408 -- */

#define CAN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

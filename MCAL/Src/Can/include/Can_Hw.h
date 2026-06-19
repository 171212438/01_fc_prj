/**
 *   @file    Can_Hw.h
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for
FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version
to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo
feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init
bug -support for CANFD baud rate expansion register -Increase support for the
second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for
FC7240 -Update hardware and mid-value process function to run faster
*   0.7.1       2024-06-26     QXW0038       N/A          Fix MB CODE Tx Read
Mask issue, ignore last bit
*   0.8.2       2024-10-29     QXW0038       N/A          Update Tx and Rx mask
check strategy
*   1.2.0       2025-05-06     QXW0038       N/A          Split legacy fifo mb
address to run fast
==================================================================================================*/
#ifndef CAN_HW_H
#define CAN_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "StdRegMacros.h"

#include "Can.h"
#include "CanIf_Cbk.h"
#include "Can_GeneralTypes.h"
#include "Can_Hal.h"
#include "Can_HwType.h"
#include "Can_Reg.h"
#include "ComStack_Types.h" /*[SWS_Can_00222]*/
#include "Mcal.h"
#include "SchM_Can.h"
#if (CAN_TIMEOUT_AS_LOOP == STD_OFF)
#include "Os.h"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#ifndef PROCESS_UNUSED_VAR
#if (defined(__ICCARM__))
#define PROCESS_UNUSED_VAR(var) (var) = (var);
#elif defined __GNUC__
#define PROCESS_UNUSED_VAR(var) (void)(var);
#else
#define PROCESS_UNUSED_VAR(var)
#endif /* #if (defined(__ICCARM__)) */
#endif /* #ifndef PROCESS_UNUSED_VAR */

#ifndef REV_BYTES_32
/** @brief  Reverse byte order in a word.
 */
#if defined(__GNUC__) || defined(__ICCARM__) || defined(__ghs__) || defined(__ARMCC_VERSION)
#define REV_BYTES_32(a, b) ASM_KEYWORD volatile("rev %0, %1" : "=r"(b) : "r"(a))
#else
#define REV_BYTES_32(a, b)                                                              \
    (b = ((a & 0xFF000000U) >> 24U) | ((a & 0xFF0000U) >> 8U) | ((a & 0xFF00U) << 8U) | \
         ((a & 0xFFU) << 24U))
#endif
#endif

/* read register with offset */
#define CAN_REGISTER_ADDR_WITHOFFSET(reg, offset1, offset2) \
    ((uint32 *)((uint32)(reg) + (uint32)(offset1) + (uint32)(offset2)))

#define FLEXCAN_HW_MB_OFFSET(hoh) \
    (g_aCanHwUsedHohTable[(hoh)].u32MbOffset) /* only for MB, fifo is not in this */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused
 * type declarations Reason: Enumeration content has been used */
/**
 * @brief Can Legacy FIFO Filter Format
 *
 */
typedef enum
{
    CAN_LEGACY_FIFO_FILTER_FORMAT_A_ONE_FULLID_PER_ELEMENT =
        0U, /**< CAN_LEGACY_FIFO_FILTER_FORMAT_A_ONE_FULLID_PER_ELEMENT   Format A
             */
    CAN_LEGACY_FIFO_FILTER_FORMAT_B_TWO_FULLID_PER_ELEMENT =
        1U, /**< CAN_LEGACY_FIFO_FILTER_FORMAT_B_TWO_FULLID_PER_ELEMENT   Format B
             */
    CAN_LEGACY_FIFO_FILTER_FORMAT_C_FOUR_FULLID_PER_ELEMENT =
        2U, /**< CAN_LEGACY_FIFO_FILTER_FORMAT_C_FOUR_FULLID_PER_ELEMENT  Format C
             */
    CAN_LEGACY_FIFO_FILTER_FORMAT_D_REJECT_ALL = 4U, /**< CAN_LEGACY_FIFO_FILTER_FORMAT_D_REJECT_ALL
                                                      * Format D
                                                      */
} CanHw_LegacyFifoFilterType;
/* PRQA S 1535 -- */
#endif /* #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief CAN hardware message type
 */
typedef struct
{
    Can_IdType mbMessageId;  /**< Can Message Id                   */
    uint16     u16HitIndex;  /**< Only for fifo element hit number */
    uint8      u8DataLength; /**< Can Data Length                  */
    uint8      u8pad;        /**< Padding to align the struct size */
    uint8      aData[64];    /**< Can Data Array                   */
} CanHw_Message;

/**
 * @brief Can Interrupt Status
 *
 */
typedef enum
{
    CAN_INTERRUPT_DISABLED = 0U, /**< CAN_INTERRUPT_DISABLED disabled */
    CAN_INTERRUPT_ENABLED        /**< CAN_INTERRUPT_ENABLED  enabled  */

} CanHal_InterruptStateType;

/**
 * @brief Store One MB Logical ID in EB and Physical Index in MBs and Offset in
 * Controller
 *
 */
typedef struct
{
    uint8 u8HwMbIndex;    /**< MB Index in current Controller     */
    uint8 u8ControllerId; /**< Controller ID configured in EB     */
    uint8 bTxGuard;       /**< Can MB Tx In Processing            */
    uint8 bInterruptEn;   /**< MB Interrupt Enable                */
#if (CAN_FD_MODE_ENABLE == STD_ON)
    uint8 u8FdPaddingValue; /**< Can FD padding value               */
#endif
    PduIdType u16TxHandler;    /**< if this hoh is tx, store write hth */
    uint32    u32HohId;        /**< Object Id configured in EB  */
    uint32    u32HwObjMbIndex; /**< Index configured in EB, if configured fifo, this
                                  must reduced */
    uint32 u32MbOffset;        /**< MB Offset in Current Controller    */
} CanHw_MbOffsetWithHoh;

/**
 * @brief Store One Can Instance Logical ID in EB and Physical Index & Address
 *
 */
typedef struct
{
    uint8  u8CanIndex;                     /**< Can Index in current Controller    */
    uint8  u8MbLength;                     /**< Can One MB Length                  */
    uint8  u8MbNums;                       /**< Can One MB nums                   */
    uint8  u8CoreIndex;                    /**< Can is below to which core         */
    uint8  bEnFd;                          /**< Enable CANFD                       */
    uint16 aHohIndex[CAN_MAXMB_SUPPORTED]; /**< Can Logic HOH in EB for each MB */
    uint32 u32CanAddr;                     /**< Can Address in Current Controller */
    uint32 u32HwOptions;                   /**< Hw Options */
    uint32 u32InsOptions;                  /**< ControllerId Options */

    uint32 u32MBInterruptMask[CAN_IFLAG_IMASK_NUM];   /**< Can Controller Interrupt
                                                         Mask value, current can
                                                         only contains mask1 */
    uint32 u32MBInterruptTxMask[CAN_IFLAG_IMASK_NUM]; /**< Can Controller Tx MB
                                                         interrupt mask        */
    uint32 u32MBInterruptRxMask[CAN_IFLAG_IMASK_NUM]; /**< Can Controller Rx MB
                                                         interrupt mask        */
    uint32 u32MBPollingTxMask[CAN_IFLAG_IMASK_NUM];   /**< Can Controller Tx MB
                                                         polling mask        */
    uint32 u32MBPollingRxMask[CAN_IFLAG_IMASK_NUM];   /**< Can Controller Rx MB
                                                         polling mask        */

    Can_PCallBackType Can_ErrorNotification; /**< Pointer to Error interrupt notification
                                                function (ESR[ERR_INT]). */
#if (CAN_FD_MODE_ENABLE == STD_ON)
    Can_PCallBackType Can_ErrorFDNotification; /**< Pointer to Error interrupt notification
                                                  function (ESR[ERRFAST_INT]). */
#endif                                         /* CAN_FD_MODE_ENABLE == STD_ON */

    volatile sint8 s8IntDisableLevel; /**< Interrupt Disable Counter */
    /* volatile uint16         u16CancelMBIndex;*/
    CanHal_InterruptStateType eInterruptMode;   /**< Interrupt Enabled  Or Disabled             */
    Can_ControllerStateType   eControllerState; /**< Controller State */
    uint8                     u8CurrentBaudRateIndex; /**< Baudrate Configuration Index in EB */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    boolean bEnhancedFifoInterruptEn; /**< Enable or disable fifo interrupt. */
#endif                                /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
    boolean bLegacyFifoInterruptEn; /**< Enable or disable fifo interrupt. */
#endif                              /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
} CanHw_CanInfoWithHoh;

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief CAN Message Buffer Data Length Range
 *
 */
typedef struct
{
    const uint8 u8DlcMax; /**< Max Data Length */
    const uint8 u8DlcMin; /**< Min Data Length */
} Can_MBDlcMaxMinType;

#endif

#ifndef CAN_HW_RAM_INIT_REGION_COUNT
#define CAN_HW_RAM_INIT_REGION_COUNT 12U
#endif

/**
 * @brief Pre-generated RAM init word-count table for one controller.
 *
 */
typedef struct
{
    uint16 au16RegionWordCount[CAN_HW_RAM_INIT_REGION_COUNT];
} CanHw_RamInitWordConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
extern CanHw_MbOffsetWithHoh g_aCanHwUsedHohTable[CAN_MAXMBCOUNT_0];
extern CanHw_CanInfoWithHoh  g_aCanHwUserdControllerTable[CAN_MAXCONTROLLERCOUNT_0];
extern const uint32          g_kaCanHwBaseAddressTable[];
extern uint32                g_u32CanHwTicksDelayDuration;

#if CAN_FD_MODE_ENABLE == STD_ON
extern const Can_MBDlcMaxMinType g_kaCanHwDataLengthMaxMin[CAN_HW_NUM_VAL_DLC_U8];
extern const uint8               g_kaCanEnRxFifoFilterList[CAN_ENHANCED_RXFIFO_ERFFEL_LIST_LEN];
extern const uint8               g_kaCanEnRxFifoDepthList[CAN_ENHANCED_RXFIFO_DEPTH_LIST_LEN];
extern const uint8               g_kaCanHwDataInMbIndex[64];
#else
extern const uint8 g_kaCanHwDataInMbIndex[8];
#endif

extern const CanHw_RamInitWordConfigType g_kaCanHwRamInitWordConfig[CAN_HW_RAM_INIT_WORD_CONFIG_LEN];
/*==================================================================================================
*                                           MACROS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/*================================================================================================*/
/**
 * @brief get controller physical index from control id in EB
 *
 * @param u8ControllerId Can Controller Id set in EB
 * @return Can Index
 */
LOCAL_INLINE uint8 Can_Hw_GetCanIndexFromControllerId(uint8 u8ControllerId)
{
    return g_aCanHwUserdControllerTable[u8ControllerId].u8CanIndex;
}

/**
 * @brief Get Error Notification Function Point
 *
 * @param u8ControllerId Controller ID
 * @return Function Point
 */
LOCAL_INLINE Can_PCallBackType Can_Hal_GetErrorNofify(uint8 u8ControllerId)
{
    return g_aCanHwUserdControllerTable[u8ControllerId].Can_ErrorNotification;
}

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief Get Can Fd Error Notification Function Point
 *
 * @param u8ControllerId Controller ID
 * @return Function Point
 */
LOCAL_INLINE Can_PCallBackType Can_Hal_GetFdErrorNofify(uint8 u8ControllerId)
{
    return g_aCanHwUserdControllerTable[u8ControllerId].Can_ErrorFDNotification;
}
#endif

/*================================================================================================*/
/**
 * @brief Check Controller Transmit Interrupt Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means tx interrupt enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckTxInterrupt(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue;
    if ((0U == (CAN_CONTROLLER_CFG_TXINT_EN_U32 &
                g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions)))
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}

/*================================================================================================*/
/**
 * @brief Check Controller Receive Interrupt Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means rx interrupt enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckRxInterrupt(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue;
    if ((0U == (CAN_CONTROLLER_CFG_RXINT_EN_U32 &
                g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions)))
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}

#if (CAN_TXPOLL_SUPPORTED == STD_ON)
/*================================================================================================*/
/**
 * @brief Check Controller Transmit Polling Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means tx polling enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckTxPolling(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue;
    if ((0U == (CAN_CONTROLLER_CFG_TXPOL_EN_U32 &
                g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions)))
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}
#endif /* CAN_TXPOLL_SUPPORTED == STD_ON */

#if (CAN_RXPOLL_SUPPORTED == STD_ON)
/*================================================================================================*/
/**
 * @brief Check Controller Receive Polling Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means rx polling enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckRxPolling(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue;
    if ((0U == (CAN_CONTROLLER_CFG_RXPOL_EN_U32 &
                g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions)))
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}
#endif /* CAN_RXPOLL_SUPPORTED == STD_ON */
/*================================================================================================*/
/**
 * @brief Check Controller MB Interrupt Enable
 *
 * @param u16HohIndex The MB logic Index
 * @return E_OK means MB interrupt enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckMBInterrupt(uint16 u16HohIndex)
{
    Std_ReturnType eReturnValue;
    if (FALSE == g_aCanHwUsedHohTable[u16HohIndex].bInterruptEn)
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}

/*================================================================================================*/
/**
 * @brief Set local TX interrupt variable
 *
 * @param u8ControllerId The can controller ID
 * @param u8MbIndex the polling mb index
 */
LOCAL_INLINE void Can_Hw_SetTxLocalInterrupt(uint8 u8ControllerId, uint8 u8MbIndex)
{
#if CAN_IFLAG_IMASK_NUM > 1U
    if (u8MbIndex < 32U)
    {
#endif
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[0] |=
            (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[0] |=
            (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
#if CAN_IFLAG_IMASK_NUM > 1U
    }
    else if (u8MbIndex < 64U)
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[1] |=
            (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[1] |=
            (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
    }
    else
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[2] |=
            (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[2] |=
            (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
    }
#endif
}

/**
 * @brief Set local TX interrupt variable
 *
 * @param u8ControllerId The can controller ID
 * @param u8IsFifo if it is fifo
 * @param u8MbIndex the polling mb index
 */
LOCAL_INLINE void Can_Hw_SetRxLocalInterrupt(uint8 u8ControllerId, uint8 u8IsFifo, uint8 u8MbIndex)
{
#if CAN_IFLAG_IMASK_NUM > 1U
    if (u8MbIndex < 32U)
    {
#endif
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[0] |=
            (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
        if (u8IsFifo == 0U)
        {
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[0] |=
                (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
        }
#if CAN_IFLAG_IMASK_NUM > 1U
    }
    else if (u8MbIndex < 64U)
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[1] |=
            (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
        if (u8IsFifo == 0U)
        {
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[1] |=
                (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
        }
    }
    else
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[2] |=
            (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
        if (u8IsFifo == 0U)
        {
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[2] |=
                (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
        }
    }
#endif
}

/**
 * @brief Set local TX polling variable
 *
 * @param u8ControllerId The can controller ID
 * @param u8MbIndex the polling mb index
 */
LOCAL_INLINE void Can_Hw_SetTxLocalPolling(uint8 u8ControllerId, uint8 u8MbIndex)
{
#if CAN_IFLAG_IMASK_NUM > 1U
    if (u8MbIndex < 32U)
    {
#endif
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[0] |=
            (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
#if CAN_IFLAG_IMASK_NUM > 1U
    }
    else if (u8MbIndex < 64U)
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[1] |=
            (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
    }
    else
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[2] |=
            (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
    }
#endif
}

/**
 * @brief Set local TX polling variable
 *
 * @param u8ControllerId The can controller ID
 * @param u8MbIndex the polling mb index
 */
LOCAL_INLINE void Can_Hw_SetRxLocalPolling(uint8 u8ControllerId, uint8 u8MbIndex)
{
#if CAN_IFLAG_IMASK_NUM > 1U
    if (u8MbIndex < 32U)
    {
#endif
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[0] |=
            (uint32)1U << (uint32)(u8MbIndex & FLEXCAN_MASK_32BITS_U32);
#if CAN_IFLAG_IMASK_NUM > 1U
    }
    else if (u8MbIndex < 64U)
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[1] |=
            (uint32)1U << (uint32)((u8MbIndex - 32U) & FLEXCAN_MASK_32BITS_U32);
    }
    else
    {
        g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[2] |=
            (uint32)1U << (uint32)((u8MbIndex - 64U) & FLEXCAN_MASK_32BITS_U32);
    }
#endif
}

/**
 * @brief Clear special ram
 * @param u32CanAddr Can base address
 * @param offset ram offset
 * @param count clear count
 */
LOCAL_INLINE void Can_Hw_LocalRam(uint32 u32CanAddr, uint32 offset, uint32 count)
{

    /* Pointer to the Embedded RAM address. */
    uint32 *pCanEmRam = NULL_PTR;
    /* Variable for indexing all the RAM */
    uint32 u32EmRamIndex = 0U;

    for (u32EmRamIndex = 0u; u32EmRamIndex < count; u32EmRamIndex++)
    {
        pCanEmRam =
            CAN_REGISTER_ADDR_WITHOFFSET(u32CanAddr, offset, u32EmRamIndex * CAN_HW_REG_WORD_LEN);
        CAN_WRITE_REG32(pCanEmRam, 0u);
    }
}

/*================================================================================================*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Check Controller Fifo Interrupt Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means rx fifo interrupt enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckLegacyFifoInterrupt(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue = E_NOT_OK;

    /* check the legacy fifo interrupt status */
    if (TRUE == g_aCanHwUserdControllerTable[u8ControllerId].bLegacyFifoInterruptEn)
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}
#endif

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Check Controller Fifo Interrupt Enable
 *
 * @param u8ControllerId Controller ID set in EB
 * @return E_OK means rx fifo interrupt enable
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckEnhancedFifoInterrupt(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue = E_NOT_OK;

    /* check the enhanced fifo interrupt status */
    if (TRUE == g_aCanHwUserdControllerTable[u8ControllerId].bEnhancedFifoInterruptEn)
    {
        eReturnValue = E_OK;
    }

    return eReturnValue;
}
#endif

/**
 * @brief Initial Can Hw variables
 *
 */
LOCAL_INLINE void Can_Hw_TimeInit(void)
{
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    float32 f32TempFloat;
#endif

#if CAN_TIMEOUT_AS_LOOP == STD_ON
    g_u32CanHwTicksDelayDuration = (uint32)CAN_TIMEOUT_DURATION;
#else
    f32TempFloat = (float32)(CAN_TIMEOUT_DURATION / (float32)CAN_TIMEOUT_COUNTER_TICK2NS());
    if ((f32TempFloat - (float32)((uint32)f32TempFloat)) > (float32)0)
    {
        g_u32CanHwTicksDelayDuration = (uint32)((uint32)f32TempFloat + (uint32)1);
    }
    else
    {
        g_u32CanHwTicksDelayDuration = (uint32)((uint32)f32TempFloat);
    }
#endif
}

/** @brief Get Can Base Address
 *
 *  @param u8CanIndex Can Index
 *  @return Can Base Address
 */
LOCAL_INLINE uint32 Can_Hw_GetCanBaseAddr(uint8 u8CanIndex)
{
    return CAN_GET_BASE_ADDRESS(u8CanIndex);
}

/**
 * @brief Initial Can Controller Embedded Memory, Avoid CAN ECC appearing
 *
 * @param u8CanIndex Can index in current controller
 * @param u32CanAddr  Can base address
 * @param bEnCanFD  specific if the CANFD feature is used
 */
LOCAL_INLINE void Can_Hw_InitEmbeddedRam(uint8 u8CanIndex, uint32 u32CanAddr, boolean bEnCanFD)
{
    const CanHw_RamInitWordConfigType *pCanRamInitWordConfig = &g_kaCanHwRamInitWordConfig[u8CanIndex];

    /* Initial all MBs RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_MB_RAM_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[0]);

    /* Initial all RXIMR RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_RXIMR_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[1]);

    /* Initial all RXFIR TEST RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_RXFIR_TEST_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[2]);

    /* Initial all MSAK RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_MASK_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[3]);

    /* Initial all SMBTX RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_SMBTX_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[4]);

    /* Initial all SMBRX0 RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_SMBRX0_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[5]);

    /* Initial all SMBRX1 RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_SMBRX1_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[6]);

    if (TRUE == bEnCanFD)
    {
        /* Initial all FD SMBTX RAM for current controller. */
        Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                        CAN_HW_FD_SMBTX_OFFSET,
                        pCanRamInitWordConfig->au16RegionWordCount[7]);

        /* Initial all FD SMBRX0 RAM for current controller. */
        Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                        CAN_HW_FD_SMBRX0_OFFSET,
                        pCanRamInitWordConfig->au16RegionWordCount[8]);

        /* Initial all FD SMBRX1 RAM for current controller. */
        Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                        CAN_HW_FD_SMBRX1_OFFSET,
                        pCanRamInitWordConfig->au16RegionWordCount[9]);
    }

    /* Initial all FD ERX FIFO RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_ERX_FIFO_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[10]);

    /* Initial all FD ERFFEL RAM for current controller. */
    Can_Hw_LocalRam(FLEXCAN_MCR(u32CanAddr),
                    CAN_HW_ERFFEL_OFFSET,
                    pCanRamInitWordConfig->au16RegionWordCount[11]);

    (void)u8CanIndex;
    (void)bEnCanFD;
}

/**
 * @brief reset the register to default value
 *
 * @param  u32CanAddr  Can base address
 * @param bEnCanFD  specific if the CANFD feature is used
 */
LOCAL_INLINE void Can_Hw_SetDefaultRegs(uint32 u32CanAddr, boolean bEnCanFD)
{
    /* Clear Control 1 register */
    CAN_WRITE_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_DEFAULT_VALUE_U32);
    /* Clear Control 2 register */
    CAN_WRITE_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_CTRL2_DEFAULT_VALUE_U32);
    /* Clear Bit Timing register */
    CAN_WRITE_REG32(FLEXCAN_CBT(u32CanAddr), FLEXCAN_CBT_DEFAULT_VALUE_U32);
    if (TRUE == bEnCanFD)
    {
        /* Clear FD Control register */
        CAN_WRITE_REG32(FLEXCAN_FDCTRL(u32CanAddr), FLEXCAN_FDCTRL_DEFAULT_VALUE_U32);
        /* Clear FD Bit Timing register */
        CAN_WRITE_REG32(FLEXCAN_FDCBT(u32CanAddr), FLEXCAN_FDCBT_DEFAULT_VALUE_U32);
    }
}

/* ---------------------------- MCR Register ----------------------------- */
/**
 * @brief GET the MCR register value
 *
 * @param u32CanAddr  Can base address
 * @return uint32 The MCR register value
 */
LOCAL_INLINE uint32 Can_Hw_GetMCRValue(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr));
}

/**
 * @brief Check if the can module is in disable mode or freeze mode
 *
 * @param u32CanAddr  Can base address
 * @return E_OK means The can module is not in disable or freeze mode
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckReadyMode(uint32 u32CanAddr)
{
    return (FLEXCAN_MCR_NOTRDY_U32 !=
            ((uint32)(CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr))) & FLEXCAN_MCR_NOTRDY_U32)) ?
               E_OK :
               E_NOT_OK;
}

/**
 * @brief Check if the can module is in disable mode
 *
 * @param u32CanAddr  Can base address
 * @return E_OK means The can module is in disable mode
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckModuleDisable(uint32 u32CanAddr)
{
    /* Check whether the controller is in Low power mode (CAN_MCR[MDIS] = 1 -
     * Module Disable). If it is, clear it to 0 to enable the module*/
    return (FLEXCAN_MCR_MDIS_U32 ==
            ((uint32)(CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr))) & FLEXCAN_MCR_MDIS_U32)) ?
               E_OK :
               E_NOT_OK;
}

/**
 * @brief Check if the can module is in freeze mode
 *
 * @param u32CanAddr  Can base address
 * @return E_OK means The can module is in freeze mode
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckFreezeMode(uint32 u32CanAddr)
{
    return (FLEXCAN_MCR_FRZACK_U32 ==
            ((uint32)(CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr))) & FLEXCAN_MCR_FRZACK_U32)) ?
               E_OK :
               E_NOT_OK;
}

/**
 * @brief Check if the can module is in reset done status
 *
 * @param u32CanAddr  Can base address
 * @return E_OK means The can module is in reset done status
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckResetDone(uint32 u32CanAddr)
{
    return (0U == ((uint32)(CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr))) & FLEXCAN_MCR_SOFTRST_U32)) ?
               E_OK :
               E_NOT_OK;
}

/**
 * @brief Check if the can module is in low power mode
 *
 * @param u32CanAddr  Can base address
 * @return E_OK means The can module is in low power mode
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckLowPowerMode(uint32 u32CanAddr)
{
    return (FLEXCAN_MCR_LPMACK_U32 ==
            ((uint32)(CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr))) & FLEXCAN_MCR_LPMACK_U32)) ?
               E_OK :
               E_NOT_OK;
}

/**
 * @brief Enable CAN module
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableModule(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_MDIS_U32);
}

/**
 * @brief Disable CAN module
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableModule(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_MDIS_U32);
}

/**
 * @brief clear freeze request
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrFreezeRequest(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_FRZ_U32);
    CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_HALT_U32);
}

/**
 * @brief set freeze request
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SetFreezeRequest(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_FRZ_U32);
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_HALT_U32);
}

/**
 * @brief Disable Self Reception mode
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableSelfReceptionMode(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_SRXDIS_U32);
}

/**
 * @brief Enable Self Reception mode
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableSelfReceptionMode(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_SRXDIS_U32);
}

/**
 * @brief request soft reset
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_RequestSoftReset(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_SOFTRST_U32);
}

/**
 * @brief Enable Individual Rx Masking
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableIndividualMask(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_IRMQ_U32);
}

/**
 * @brief Enable Local Priority
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableLocalPriority(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_LPRIOEN_U32);
}

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * @brief enable abort can transmit
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableAbortTransmit(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_AEN_U32);
}

/**
 * @brief Abort can transmit
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_AbortTransmit(uint32 u32MbAddr)
{
    CAN_WRITE_REG32(u32MbAddr, (FLEXCAN_MBCS_CODETX_U32 | FLEXCAN_MBCS_CODETXABORT_U32));
}

#endif

/**
 * @brief Set MAX MB number
 *
 * @param  u32CanAddr  Can base address
 * @param u8MBNumber the number of the used MB
 */
LOCAL_INLINE void Can_Hw_SetMAXMBNumber(uint32 u32CanAddr, uint8 u8MBNumber)
{
    CAN_RMW_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_MAXMB_U32, ((uint32)u8MBNumber));
}

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

/**
 * @brief Enable Legacy Rx FIFO
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableLegacyFifo(uint32 u32CanAddr)
{
    /*CAN_BIT_CLR_REG32(FLEXCAN_ERFCR(u32CanAddr), FLEXCAN_ERFEN_MASK_U32);*/
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_FEN_U32);
}

/**
 * @brief Set Legacy Rx FIFO Filter Format
 *
 * @param  u32CanAddr  Can base address
 * @param u32FilterType the fifo filter type
 */
LOCAL_INLINE void Can_Hw_SetLegacyFifoFilterFormat(uint32 u32CanAddr, uint32 u32FilterType)
{
    switch (u32FilterType)
    {
        case (uint32)CAN_LEGACY_FIFO_FILTER_FORMAT_A_ONE_FULLID_PER_ELEMENT:
            /* One full ID per filter element - clear IDAM bits. */
            CAN_RMW_REG32(FLEXCAN_MCR(u32CanAddr),
                          FLEXCAN_MCR_IDAM_U32,
                          ((uint32)(FLEXCAN_MCR_IDAM32_U32)));
            break;

        case (uint32)CAN_LEGACY_FIFO_FILTER_FORMAT_B_TWO_FULLID_PER_ELEMENT:
            /* Two full standard IDs or two partial 14-bit exteneded IDs per filter
             * element. */
            CAN_RMW_REG32(FLEXCAN_MCR(u32CanAddr),
                          FLEXCAN_MCR_IDAM_U32,
                          ((uint32)(FLEXCAN_MCR_IDAM16_U32)));
            break;

        case (uint32)CAN_LEGACY_FIFO_FILTER_FORMAT_C_FOUR_FULLID_PER_ELEMENT:
            /* Four partial 8-bit IDs (standard or extended) per filter element. */
            CAN_RMW_REG32(FLEXCAN_MCR(u32CanAddr),
                          FLEXCAN_MCR_IDAM_U32,
                          ((uint32)(FLEXCAN_MCR_IDAM08_U32)));
            break;

        case (uint32)CAN_LEGACY_FIFO_FILTER_FORMAT_D_REJECT_ALL:
            /* RX Fifo is enabled, but all frames will be rejected. */
            CAN_RMW_REG32(FLEXCAN_MCR(u32CanAddr),
                          FLEXCAN_MCR_IDAM_U32,
                          ((uint32)(FLEXCAN_MCR_IDAM_U32)));
            break;
        default:
            /* do nothing. */
            break;
    } /* end switch. */
}

#endif

/* ---------------------------- ESR Register ----------------------------- */
/**
 * @brief Clear ESR Register
 *
 * @param  u32CanAddr  Can base address
 * @param u32value register value
 */
LOCAL_INLINE void Can_Hw_ClearErrorStatus(uint32 u32CanAddr, uint32 u32value)
{
    CAN_WRITE_REG32(FLEXCAN_ESR(u32CanAddr), (uint32)(u32value & FLEXCAN_ESR_CONFIG_MASK_U32));
}

/**
 * @brief Get Error Status ESR Register
 *
 * @param  u32CanAddr  Can base address
 * @return ESR register value
 */
LOCAL_INLINE uint32 Can_Hw_GetErrorStatus(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_ESR(u32CanAddr));
}

/**
 * @brief Get Interrupt Flag In ESR Register
 *
 * @param  u32CanAddr  Can base address
 * @return Error Interrupt Flag bit without shift
 */
LOCAL_INLINE uint32 Can_Hw_GetErrorInterruptFlag(uint32 u32CanAddr)
{
    return (uint32)(((uint32)CAN_READ_REG32(FLEXCAN_ESR(u32CanAddr)) & FLEXCAN_ESR_ERRINT_U32) >>
                    FLEXCAN_ESR_ERRINT_SHIFT_U32);
}

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
/**
 * @brief Get Bus Off Error Interrupt Flag In ESR Register
 *
 * @param u32CanAddr
 * @return Bus Off Interrupt Flag bit without shift
 */
LOCAL_INLINE uint32 Can_Hw_GetBusoffInterruptFlag(uint32 u32CanAddr)
{
    return (uint32)(((uint32)CAN_READ_REG32(FLEXCAN_ESR(u32CanAddr)) & FLEXCAN_ESR_BOFFINT_U32) >>
                    FLEXCAN_ESR_BOFFINT_SHIFT_U32);
}

/**
 * @brief Clear Bus Off Error Interrupt Flag in ESR Register
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrBusoffInterruptFlag(uint32 u32CanAddr)
{
    CAN_WRITE_REG32(FLEXCAN_ESR(u32CanAddr), (FLEXCAN_ESR_BOFFINT_U32 & FLEXCAN_ESR_CONFIG_MASK_U32));
}

#endif

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief Get Can FD Error Flag In ESR Register
 *
 * @param  u32CanAddr  Can base address
 * @return Can FD Error Flag bit without shift
 */
LOCAL_INLINE uint32 Can_Hw_GetFdErrorInterruptFlag(uint32 u32CanAddr)
{
    return (CAN_READ_REG32(FLEXCAN_ESR(u32CanAddr)) & FLEXCAN_ESR_ERRINT_FAST_U32) >>
           FLEXCAN_ESR_ERRINT_FAST_SHIFT_U32;
}

/**
 * @brief Clear Can FD Error Interrupt in ESR Register
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrFdErrorInterruptFlag(uint32 u32CanAddr)
{
    CAN_WRITE_REG32(FLEXCAN_ESR(u32CanAddr),
                    (FLEXCAN_ESR_ERRINT_FAST_U32 & FLEXCAN_ESR_CONFIG_MASK_U32));
}

#endif

/**
 * @brief Check Bus off status
 *
 * @param  u32CanAddr  Can base address
 * @return E_OK means Bus off
 */
LOCAL_INLINE Std_ReturnType Can_Hw_ChkBusOffStatus(uint32 u32CanAddr)
{
    Std_ReturnType eReturnValue;

    /* Check Busoff flag if it's set. */
    if (FLEXCAN_ESR_BOFFINT_U32 ==
        (FLEXCAN_ESR_BOFFINT_U32 & (uint32)CAN_READ_REG32(FLEXCAN_ESR(u32CanAddr))))
    {
        /* controller is in BusOff state. */
        eReturnValue = (uint8)E_OK;
    }
    else
    {
        eReturnValue = (uint8)E_NOT_OK;
    }

    return (eReturnValue);
}

/**
 * @brief Clear Error Interrupt Flag In ESR Register
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrErrorInterruptFlag(uint32 u32CanAddr)
{
    CAN_WRITE_REG32(FLEXCAN_ESR(u32CanAddr), (FLEXCAN_ESR_ERRINT_U32 & FLEXCAN_ESR_CONFIG_MASK_U32));
}

/* ---------------------------- CRTL Register ----------------------------- */
/**
 * @brief Set CTRL Register Value
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value the value for ctrl register
 */
LOCAL_INLINE void Can_Hw_SetCtrl(uint32 u32CanAddr, uint32 u32Value)
{
    CAN_WRITE_REG32(FLEXCAN_CTRL(u32CanAddr), u32Value & FLEXCAN_CTRL_CONFIG_MASK_U32);
}

#if 0
/**
 * @brief Get CTRL Register Value
 *
 * @param  u32CanAddr  Can base address
 * @return CTRL register value
 */
LOCAL_INLINE uint32 Can_Hw_GetCtrl(uint32 u32CanAddr)
{
    return ((uint32)CAN_READ_REG32(FLEXCAN_CTRL(u32CanAddr)));
}
#endif

/**
 * @brief Get ErrMask bit in CTRL register
 *
 * @param  u32CanAddr  Can base address
 * @return ErrMask bit value without shift
 */
LOCAL_INLINE uint32 Can_Hw_GetErrorInterruptMask(uint32 u32CanAddr)
{
    return (uint32)(((uint32)CAN_READ_REG32(FLEXCAN_CTRL(u32CanAddr)) & FLEXCAN_CTRL_ERRMSK_U32) >>
                    FLEXCAN_CTRL_ERRMSK_SHIFT_U32);
}

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
/**
 * @brief Get Bus Off Interrupt Mask in CTRL Register
 *
 * @param  u32CanAddr  Can base address
 * @return BusOff Interrupt Mask bitout with shift
 */
LOCAL_INLINE uint32 Can_Hw_GetBusoffInterruptMask(uint32 u32CanAddr)
{
    return (uint32)(((uint32)CAN_READ_REG32(FLEXCAN_CTRL(u32CanAddr)) & FLEXCAN_CTRL_BOFFMSK_U32) >>
                    FLEXCAN_CTRL_BOFFMSK_SHIFT_U32);
}
#endif

/**
 * @brief Attach Bus Off Interrupt Bit Mask
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SetBusoffInterrupt(uint32 u32CanAddr)
{
    /* BusOff - enable the interrupt. */
    CAN_BIT_SET_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_BOFFMSK_U32);
}

/**
 * @brief Attach Error Interrupt bit mask
 *
 * @param  u32CanAddr  Can base address
 * @param bEnCanFD  specific if the CANFD feature is used
 */
LOCAL_INLINE void Can_Hw_SetErrorInterrupt(uint32 u32CanAddr, boolean bEnCanFD)
{
    CAN_BIT_SET_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_ERRMSK_U32);
    if (TRUE == bEnCanFD)
    {
        /* Enable FAST error interrupt */
        CAN_BIT_SET_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_FD_CTRL2_ERRMSK_FAST_U32);
    }
}

/**
 * @brief Remove Bus Off Interrupt Bit mask
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrBusoffInterrupt(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_BOFFMSK_U32);
}

/**
 * @brief Remove Error Interrupt Bit Mask
 *
 * @param  u32CanAddr  Can base address
 * @param bEnCanFD  specific if the CANFD feature is used
 */
LOCAL_INLINE void Can_Hw_ClrErrorInterrupt(uint32 u32CanAddr, boolean bEnCanFD)
{
    CAN_BIT_CLR_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_ERRMSK_U32);
    if (TRUE == bEnCanFD)
    {
        /* Disable FAST error interrupt */
        CAN_BIT_CLR_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_FD_CTRL2_ERRMSK_FAST_U32);
    }
}

/**
 * @brief select can engine clock source to interface clock
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SelectInterfaceClock(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_CLKSRC_MASK_U32);
}

/**
 * @brief select can engine clock source to function clock
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SelectFunctionClock(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_CLKSRC_MASK_U32);
}

/**
 * @brief software recovers from bus off state
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SWRecoverFromBOFF(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_BOFFREC_U32);
    CAN_BIT_SET_REG32(FLEXCAN_CTRL(u32CanAddr), FLEXCAN_CTRL_BOFFREC_U32);
}

/* ---------------------------- CRTL2 Register ----------------------------- */

/**
 * @brief Get Error Interrupt Mask bit In CTRL Register
 *
 * @param  u32CanAddr  Can base address
 * @return
 */
LOCAL_INLINE uint32 Can_Hw_GetFdErrorInterruptMask(uint32 u32CanAddr)
{
    return (uint32)((CAN_READ_REG32(FLEXCAN_CTRL2(u32CanAddr)) & FLEXCAN_FD_CTRL2_ERRMSK_FAST_U32) >>
                    FLEXCAN_FD_CTRL2_ERRMSK_FAST_SHIFT_U32);
}

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Set RFFN in CTRL2 Register
 *
 * @param  u32CanAddr  Can base address
 * @param u32Num RFFN value
 */
LOCAL_INLINE void Can_Hw_SetLegacyFifoNum(uint32 u32CanAddr, uint32 u32Num)
{
    CAN_RMW_REG32(FLEXCAN_CTRL2(u32CanAddr),
                  (FLEXCAN_CTRL2_RFFN_U32),
                  (uint32)(u32Num << FLEXCAN_CTRL2_RFFN_SHIFT_U32));
}
#endif

/**
 * @brief  Enable unrestricted write access to FLEXCAN memory.
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableWRMFRZ(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_CTRL2_WRMFRZ_U32);
}

/**
 * @brief Set Tx Arbitration Start Delay
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value Tx Arbitration Start Delay value
 */
LOCAL_INLINE void Can_Hw_SetTASD(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the CTRL2[TASD]] bit field */
    CAN_RMW_REG32(FLEXCAN_CTRL2(u32CanAddr),
                  FLEXCAN_CTRL2_TASD_U32,
                  (uint32)(u32Value << FLEXCAN_CTRL2_TASD_SHIFT_U32));
}

/**
 * @brief Set BTE enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_SetBTE(uint32 u32CanAddr)
{
    /* Update the value of the CTRL2[BTE] bit field */
    CAN_BIT_SET_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_CTRL2_BTE_U32);
}

/* ---------------------------- EPRS  Register ----------------------------- */
/**
 * @brief Set EPRS enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The value of the EPRS register value
 */
LOCAL_INLINE void Can_Hw_SetEPRS(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the EPRS[ENPRESDIV] bit field */
    CAN_BIT_SET_REG32(FLEXCAN_EPRS(u32CanAddr), u32Value & FLEXCAN_EPRS_ENPRESDIV_MASK_U32);
}

/**
 * @brief Set FDEPRS enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The value of the FDEPRS register value
 */
LOCAL_INLINE void Can_Hw_SetFDEPRS(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the EPRS[EDPRESDIV] bit field */
    CAN_BIT_SET_REG32(FLEXCAN_EPRS(u32CanAddr), u32Value & FLEXCAN_EPRS_EDPRESDIV_MASK_U32);
}

/* ---------------------------- ENCBT  Register ----------------------------- */
/**
 * @brief Set ENCBT enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The value of the ENCBT register value
 */
LOCAL_INLINE void Can_Hw_SetENCBT(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the ENCBT bit field */
    CAN_BIT_SET_REG32(FLEXCAN_ENCBT(u32CanAddr), u32Value & FLEXCAN_ENCBT_CONFIG_MASK_U32);
}

/* ---------------------------- EDCBT  Register ----------------------------- */
/**
 * @brief Set EDCBT enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The value of the EDCBT register value
 */
LOCAL_INLINE void Can_Hw_SetEDCBT(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the EDCBT bit field */
    CAN_BIT_SET_REG32(FLEXCAN_EDCBT(u32CanAddr), u32Value & FLEXCAN_EDCBT_CONFIG_MASK_U32);
}

/* ---------------------------- ETDC  Register ----------------------------- */
/**
 * @brief Set ETDC enable extension parameters
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The value of the EDCBT register value
 */
LOCAL_INLINE void Can_Hw_SetETDC(uint32 u32CanAddr, uint32 u32Value)
{
    /* Update the value of the ETDC bit field */
    CAN_RMW_REG32(FLEXCAN_ETDC(u32CanAddr), FLEXCAN_ETDC_ETDCOFF_U32, u32Value);
}

/**
 * @brief Disable Transceiver Delay Compensation
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableETDC(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_ETDC(u32CanAddr), (uint32)(FLEXCAN_ETDC_ETDCEN_U32));
}

/**
 * @brief Enable Transceiver Delay Compensation
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableETDC(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_ETDC(u32CanAddr), (uint32)(FLEXCAN_ETDC_ETDCEN_U32));
}

/* ---------------------------- IFLAG1 Register ----------------------------- */
/**
 * @brief Get IFLAG1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IFLAG1 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIFlag1(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IFLAG1(u32CanAddr));
}

#if (CAN_IFLAG_IMASK_NUM > 1U)

/**
 * @brief Get IFLAG2 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IFLAG2 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIFlag2(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IFLAG2(u32CanAddr));
}

#endif

#if (CAN_IFLAG_IMASK_NUM > 2U)

/**
 * @brief Get IFLAG3 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IFLAG3 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIFlag3(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IFLAG3(u32CanAddr));
}

#endif

/**
 * @brief Get each MB IFLAG value
 *
 * @param  u32CanAddr  Can base address
 * @param u8MbIndex the MB index
 * @return E_OK: the MB flag is set.
 */
LOCAL_INLINE Std_ReturnType Can_Hw_GetMBIFlag(uint32 u32CanAddr, uint8 u8MbIndex)
{
    Std_ReturnType eRet = E_NOT_OK;
    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        eRet = (0U != ((1UL << u8MbIndex) & CAN_READ_REG32(FLEXCAN_IFLAG1(u32CanAddr)))) ? E_OK :
                                                                                           E_NOT_OK;
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        eRet = (0U != ((1UL << (u8MbIndex % 32)) & CAN_READ_REG32(FLEXCAN_IFLAG2(u32CanAddr)))) ?
                   E_OK :
                   E_NOT_OK;
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        eRet = (0U != ((1UL << (u8MbIndex % 32)) & CAN_READ_REG32(FLEXCAN_IFLAG3(u32CanAddr)))) ?
                   E_OK :
                   E_NOT_OK;
    }
#endif

    return eRet;
}

/**
 * @brief Get MB interrupt status value
 *
 * @param  u32CanAddr  Can base address
 * @return interrupt status value
 */
LOCAL_INLINE uint32 Can_Hw_GetMBInterruptStatus(uint32 u32CanAddr, uint8 u8MbIndex)
{
    uint32 u32IntStatus = 0U;

    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        u32IntStatus = CAN_READ_REG32(FLEXCAN_IFLAG1(u32CanAddr));
        u32IntStatus &= CAN_READ_REG32(FLEXCAN_IMASK1(u32CanAddr));
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        u32IntStatus = CAN_READ_REG32(FLEXCAN_IFLAG2(u32CanAddr));
        u32IntStatus &= CAN_READ_REG32(FLEXCAN_IMASK2(u32CanAddr));
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        u32IntStatus = CAN_READ_REG32(FLEXCAN_IFLAG3(u32CanAddr));
        u32IntStatus &= CAN_READ_REG32(FLEXCAN_IMASK3(u32CanAddr));
    }
#endif

    return u32IntStatus;
}

/**
 * @brief Set MB IFLAG to W1C
 *
 * @param  u32CanAddr  Can base address
 * @param u8MbIndex the MB index
 */
LOCAL_INLINE void Can_Hw_SetMBIFlag(uint32 u32CanAddr, uint8 u8MbIndex)
{
    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr), (1UL << u8MbIndex));
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        CAN_WRITE_REG32(FLEXCAN_IFLAG2(u32CanAddr), (1UL << (u8MbIndex % 32)));
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        CAN_WRITE_REG32(FLEXCAN_IFLAG3(u32CanAddr), (1UL << (u8MbIndex % 32)));
    }
#endif
}

/**
 * @brief Set IFLAG1 with value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IFlag flag value
 */
LOCAL_INLINE void Can_Hw_SetIFlag1(uint32 u32CanAddr, uint32 u32IFlag)
{
    CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr), u32IFlag);
}

#if (CAN_IFLAG_IMASK_NUM > 1U)

/**
 * @brief Set IFLAG2 with value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IFlag flag value
 */
LOCAL_INLINE void Can_Hw_SetIFlag2(uint32 u32CanAddr, uint32 u32IFlag)
{
    CAN_WRITE_REG32(FLEXCAN_IFLAG2(u32CanAddr), u32IFlag);
}

#endif

#if (CAN_IFLAG_IMASK_NUM > 2U)

/**
 * @brief Set IFLAG3 with value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IFlag flag value
 */
LOCAL_INLINE void Can_Hw_SetIFlag3(uint32 u32CanAddr, uint32 u32IFlag)
{
    CAN_WRITE_REG32(FLEXCAN_IFLAG3(u32CanAddr), u32IFlag);
}

#endif

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Clear Legacy Rx FIFO overflow status
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrLegacyFifoOverFlowIFlag(uint32 u32CanAddr)
{
    CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr), (uint32)FLEXCAN_FIFOOVERFLOW_INT_MASK_U32);
}

/**
 * @brief Clear Legacy Rx FIFO warning status
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClrLegacyFifoWarningIFlag(uint32 u32CanAddr)
{
    CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr), (uint32)FLEXCAN_FIFOWARNING_INT_MASK_U32);
}

/**
 * @brief trigger the clear FIFO operation
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_ClearFifoOperation(uint32 u32CanAddr)
{
    /*Clear flags for FIFO before delete content of FIFO*/
    CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr),
                    (FLEXCAN_FIFOOVERFLOW_INT_MASK_U32 | FLEXCAN_FIFOWARNING_INT_MASK_U32 |
                     FLEXCAN_FIFOAVAILABLE_INT_MASK_U32));
    /*When this bit was trigged, the FIFO content was cleared*/
    CAN_WRITE_REG32(FLEXCAN_IFLAG1(u32CanAddr), FLEXCAN_IFLAG1_BUF0I_U32);
}
#endif
/**
 * @brief Check Message buffer status
 *
 * @param  u32CanAddr  Can base address
 * @param u16MbIndex Message Buffer Index
 * @return E_OK means Flag active
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckMbFlag(uint32 u32CanAddr, uint8 u8MbIndex)
{
    Std_ReturnType eReturnValue = E_NOT_OK;

    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        if (((CAN_READ_REG32(FLEXCAN_IFLAG1(u32CanAddr)) >> u8MbIndex) & 0x01U) == 1U)
        {
            eReturnValue = E_OK;
        }
        else
        {
            eReturnValue = E_NOT_OK;
        }
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        if (((CAN_READ_REG32(FLEXCAN_IFLAG2(u32CanAddr)) >> (u8MbIndex % 32)) & 0x01U) == 1U)
        {
            eReturnValue = E_OK;
        }
        else
        {
            eReturnValue = E_NOT_OK;
        }
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        if (((CAN_READ_REG32(FLEXCAN_IFLAG3(u32CanAddr)) >> (u8MbIndex % 32)) & 0x01U) == 1U)
        {
            eReturnValue = E_OK;
        }
        else
        {
            eReturnValue = E_NOT_OK;
        }
    }
#endif

    return eReturnValue;
}
/* ---------------------------- IMASK1 Register ----------------------------- */

/**
 * @brief Get IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IMASK1 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIMask1(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IMASK1(u32CanAddr));
}

/**
 * @brief Set IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetIMask1(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_IMASK1(u32CanAddr), u32IMask);
}

#if (CAN_IFLAG_IMASK_NUM > 1U)

/**
 * @brief Get IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IMASK1 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIMask2(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IMASK2(u32CanAddr));
}

/**
 * @brief Set IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetIMask2(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_IMASK2(u32CanAddr), u32IMask);
}

#endif

#if (CAN_IFLAG_IMASK_NUM > 2U)

/**
 * @brief Get IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @return IMASK1 value
 */
LOCAL_INLINE uint32 Can_Hw_GetIMask3(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_IMASK3(u32CanAddr));
}

/**
 * @brief Set IMASK1 Register value
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetIMask3(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_IMASK3(u32CanAddr), u32IMask);
}

#endif

/* ---------------------------- RXGMASK Register -----------------------------
 */
#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
/**
 * @brief Set Global Message Buffer ID Mask except MB14 and MB15
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetGlobalMask(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_RXMGMASK(u32CanAddr), (u32IMask & FLEXCAN_RXGMASK_CONFIG_MASK_U32));
}

/**
 * @brief Set MB14 ID Mask
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetRx14Mask(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_RX14MASK(u32CanAddr), (u32IMask & FLEXCAN_RX14MASK_CONFIG_MASK_U32));
}

/**
 * @brief Set MB15 ID Mask
 *
 * @param  u32CanAddr  Can base address
 * @param u32IMask mask value
 */
LOCAL_INLINE void Can_Hw_SetRx15Mask(uint32 u32CanAddr, uint32 u32IMask)
{
    CAN_WRITE_REG32(FLEXCAN_RX15MASK(u32CanAddr), (u32IMask & FLEXCAN_RX15MASK_CONFIG_MASK_U32));
}
#endif

/* ---------------------------- RXIMR Register ----------------------------- */
/**
 * @brief Set Individual MB ID Mask for each MB
 *
 * @param  u32CanAddr  Can base address
 * @param u16MbIndex MB Index
 * @param u32Mask mask value
 */
LOCAL_INLINE void Can_Hw_InitRxInvidualMask(uint32 u32CanAddr, uint16 u16MbIndex, uint32 u32Mask)
{
    CAN_WRITE_REG32(FLEXCAN_RXIMR(u32CanAddr, u16MbIndex), u32Mask);
}

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Set Individual ID Mask for Rx Legacy FIFO
 *
 * @param  u32CanAddr  Can base address
 * @param u8RxFifoTableIdIndex Rx FIFO ID index in Table
 * @param u32TableFilterMask mask value
 */
LOCAL_INLINE void Can_Hw_WriteFilterMask(uint32 u32CanAddr,
                                         uint8  u8RxFifoTableIdIndex,
                                         uint32 u32TableFilterMask)
{
    CAN_WRITE_REG32(FLEXCAN_RXIMR(u32CanAddr, u8RxFifoTableIdIndex), u32TableFilterMask);
}

/* ---------------------------- RXFGMASK Register -----------------------------
 */

/**
 * @brief Set Legacy Rx FIFO Global Mask
 *
 * @param  u32CanAddr  Can base address
 * @param u32Mask Mask value
 */
LOCAL_INLINE void Can_Hw_SetGlobalRxMask(uint32 u32CanAddr, uint32 u32Mask)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The
     * value of the result is always that of the left-hand operand. Reason:
     * FLEXCAN_RXFGMASK_CONFIG_MASK_U32 is all 0xF in this ECU, but for platform,
     * it should be here  */
    CAN_WRITE_REG32(FLEXCAN_RXFGMASK(u32CanAddr), (u32Mask & FLEXCAN_RXFGMASK_CONFIG_MASK_U32));
    /* PRQA S 2985 -- */
}
#endif

#if (CAN_RXPOLL_SUPPORTED == STD_ON)
/**
 * @brief Polling rx flag without interrupt mask
 *
 * @param u8ControllerId controller id in EB
 * @param u32CanAddr  Can base address
 * @param u8MbIndex mailbox index
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckRxMaskPolling(uint8  u8ControllerId,
                                                      uint32 u32CanAddr,
                                                      uint8  u8MbIndex)
{
    Std_ReturnType eRet = E_NOT_OK;
    uint32         u32TempFlag, u32IflagReg, u32ImaskReg;

    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)u8MbIndex & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask1(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[0];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)(u8MbIndex % 32) & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag2(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask2(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[1];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)(u8MbIndex % 32) & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag3(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask3(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[2];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#endif

    return eRet;
}
#endif

#if (CAN_TXPOLL_SUPPORTED == STD_ON)
/**
 * @brief Polling tx flag without interrupt mask
 *
 * @param u8ControllerId controller id in EB
 * @param u32CanAddr  Can base address
 * @param u8MbIndex mailbox index
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckTxMaskPolling(uint8  u8ControllerId,
                                                      uint32 u32CanAddr,
                                                      uint8  u8MbIndex)
{
    Std_ReturnType eRet = E_NOT_OK;
    uint32         u32TempFlag, u32IflagReg, u32ImaskReg;

    if (u8MbIndex < FLEXCAN_MB_32_U8)
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)u8MbIndex & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask1(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[0];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#if (CAN_IFLAG_IMASK_NUM > 1U)
    else if (u8MbIndex < FLEXCAN_MB_64_U8)
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)(u8MbIndex % 32) & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag2(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask2(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[1];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#endif
#if (CAN_IFLAG_IMASK_NUM > 2U)
    else
    {
        /* Calculate the bit in the IFLAG/IMASK register allocated to a MB */
        u32TempFlag = ((uint32)0x01U) << ((uint32)(u8MbIndex % 32) & FLEXCAN_MASK_32BITS_U32);

        /* Get the content of IFLAG and IMASK register for which corresponds this
         * MB. */
        u32IflagReg = Can_Hw_GetIFlag3(u32CanAddr);
        u32ImaskReg = Can_Hw_GetIMask3(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[2];
        if ((uint32)0x0U != (u32IflagReg & u32TempFlag & (~u32ImaskReg)))
        {
            eRet = E_OK;
        }
    }
#endif

    return eRet;
}
#endif

/* ---------------------------- CBT Register ----------------------------- */
/**
 * @brief Set CBT register value
 *
 * @param  u32CanAddr  Can base address
 * @param u32value register value
 */
LOCAL_INLINE void Can_Hw_SetCBTValue(uint32 u32CanAddr, uint32 u32value)
{
    CAN_WRITE_REG32(FLEXCAN_CBT(u32CanAddr), u32value);
}

/* ---------------------------- MB Register ----------------------------- */
/**
 * @brief clear MB ram value to all zero
 *
 * @param u32CanAddr  Can base address
 * @param u32MbLen MB length
 * @param u8MBIndex the MB hardware index
 */
LOCAL_INLINE void Can_Hw_ClrMB(uint32 u32CanAddr, uint32 u32MbLen, uint8 u8MBIndex)
{
    uint8  u8Index;
    uint32 u32MbAddr;

    u32MbAddr = u32CanAddr + FLEXCAN_MB_OFFSET_U32 + ((uint32)u8MBIndex * u32MbLen);
    for (u8Index = 0U; u8Index < (uint8)u32MbLen; u8Index = (uint8)(u8Index + 4U))
    {
        CAN_WRITE_REG32(u32MbAddr + u8Index, 0U);
    }
}

/**
 * @brief Get Message Buffer Index from Hoh Index in EB
 *
 * @param u16HohArrayIndex Hoh Array Index
 * @return Message Buffer Index
 */
LOCAL_INLINE uint8 Can_Hw_GetMbIndexFromHoh(uint16 u16HohArrayIndex)
{
    return (uint8)(g_aCanHwUsedHohTable[u16HohArrayIndex].u8HwMbIndex);
}

/**
 * @brief Get MB address
 *
 * @param  u32CanAddr  Can base address
 * @param u16HohIndex the MB index
 * @return mb address
 */
LOCAL_INLINE uint32 Can_Hw_GetMbAddr(uint32 u32CanAddr, uint16 u16HohIndex)
{
    return FLEXCAN_HW_MB(u32CanAddr, u16HohIndex);
}

/**
 * @brief Get MB ID address
 *
 * @param  u32CanAddr  Can base address
 * @return mb id address
 */
LOCAL_INLINE uint32 Can_Hw_GetMbIdAddr(uint32 u32MbAddr)
{
    return u32MbAddr + 0x04U;
}

/**
 * @brief Get MB Data address
 *
 * @param  u32CanAddr  Can base address
 * @return mb data address
 */
LOCAL_INLINE uint32 Can_Hw_GetMbDataAddr(uint32 u32MbAddr)
{
    return u32MbAddr + 0x08U;
}

/**
 * @brief Set MB configure
 *
 * @param u32MbAddr MB address
 * @param u32Value the register value
 */
LOCAL_INLINE void Can_Hw_SetMBConfig(uint32 u32MbAddr, uint32 u32Value)
{
    CAN_WRITE_REG32(u32MbAddr, (u32Value));
}

/**
 * @brief Get MB configure
 *
 * @param u32MbAddr MB address
 * @return uint32 the the register value
 */
LOCAL_INLINE uint32 Can_Hw_GetMBConfig(uint32 u32MbAddr)
{
    return CAN_READ_REG32(u32MbAddr);
}

/**
 * @brief Start Receive Message with Special ID in Special MB
 *
 * @param u32MbAddr MB address
 * @param u32MsgId CAN ID
 */
LOCAL_INLINE void Can_Hw_InitReceiveMBs(uint32 u32MbAddr, uint32 u32MsgId)
{
    uint32 u32MbIdAddr = Can_Hw_GetMbIdAddr(u32MbAddr);
    /* Copy the Message ID (serves as acceptance filter for Rx MBs). */
    CAN_WRITE_REG32(u32MbIdAddr, u32MsgId | ((CAN_READ_REG32(u32MbIdAddr)) & 0xE0000000U));
}

/**
 * @brief Start Transmit Message in Special MB
 *
 * @param u32MbAddr MB address
 */
LOCAL_INLINE void Can_Hw_EnableTransmit(uint32 u32MbAddr)
{
    /* Enable the MB as an TX object. MB is used for Tx & SRR must be set for Tx
     * buffers. */
    CAN_WRITE_REG32(u32MbAddr, (uint32)(FLEXCAN_MBCS_CODETX_U32));
}

/**
 * @brief Set MB DLC and Transmit with configuration value
 *
 * @param u32MbAddr MB address
 * @param u32MbConfig Configuration value for MB 1th word
 */
LOCAL_INLINE void Can_Hw_SetDlcAndTransmitWithConfig(uint32 u32MbAddr, uint32 u32MbConfig)
{
    CAN_WRITE_REG32(u32MbAddr, u32MbConfig);
}
/**
 * @brief Set Transmit ID in Special MB with Local Priority
 *
 * @param u32MbAddr MB address
 * @param mbMessageId CAN message ID
 */
LOCAL_INLINE void Can_Hw_SetTxId(uint32 u32MbAddr, Can_IdType mbMessageId)
{
    uint32 u32MbIdAddr = Can_Hw_GetMbIdAddr(u32MbAddr);
    CAN_WRITE_REG32(u32MbIdAddr,
                    (uint32)((mbMessageId) | ((CAN_READ_REG32(u32MbIdAddr)) & 0xE0000000U)));
}

/**
 * @brief Check Transmit MB If it is empty
 *
 * @param u32MbAddr MB address
 * @return E_OK means Tx MB is empty
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckTxMbEmpty(uint32 u32MbAddr)
{
    Std_ReturnType eReturnValue;

    if (FLEXCAN_MBCS_CODETX_U32 ==
        (uint32)(CAN_READ_REG32(u32MbAddr) & (uint32)(FLEXCAN_MBCS_CODE_TXRMASK_U32)))
    {
        eReturnValue = E_OK;
    }
    else
    {
        eReturnValue = E_NOT_OK;
    }

    return eReturnValue;
}

/**
 * @brief Check Transmit MB If it is busy
 *
 * @param u32MbAddr MB address
 * @return E_OK means Tx MB is busy
 */
LOCAL_INLINE Std_ReturnType Can_Hw_CheckTxMbBusy(uint32 u32MbAddr)
{
    Std_ReturnType eReturnValue;

    if ((FLEXCAN_MBCS_CODETX_U32 | FLEXCAN_MBCS_CODETXEN_U32) ==
        (uint32)(CAN_READ_REG32(u32MbAddr) & (uint32)(FLEXCAN_MBCS_CODE_TXRMASK_U32)))
    {
        eReturnValue = E_OK;
    }
    else
    {
        eReturnValue = E_NOT_OK;
    }

    return eReturnValue;
}

/**
 * @brief Wait MB exit Rx Busy status
 *
 * @param u32MbAddr MB Address
 */
LOCAL_INLINE void Can_Hw_WaitMbOutBusy(uint32 u32MbAddr)
{
    uint32 u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue, u32ElapsedTime;
#endif

    uint32 u32MbConfig;

#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif

    /*Check and wait if the BUSY code is set during the move-in process*/
    do
    {
        u32MbConfig = (uint32)CAN_READ_REG32(u32MbAddr);
#if CAN_TIMEOUT_AS_LOOP == STD_ON
        u32TotalElapsedTime++;
#else

        (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue, &u32ElapsedTime);
        u32TotalElapsedTime += u32ElapsedTime;
#endif
    }
    while ((FLEXCAN_MBCS_CODERXBUSY_U32 == (u32MbConfig & FLEXCAN_MBCS_CODERXBUSY_U32)) &&
           (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration));
}

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief Get Mailbox maximum data length
 *
 * @param u8Offset Mailbox type offset
 * @return data length
 */
LOCAL_INLINE uint8 Can_Hw_GetMbDataMax(uint8 u8Offset)
{
    return g_kaCanHwDataLengthMaxMin[u8Offset].u8DlcMax;
}

/**
 * @brief Get Mailbox minimum data length
 *
 * @param u8Offset Mailbox type offset
 * @return data length
 */
LOCAL_INLINE uint8 Can_Hw_GetMbDataMin(uint8 u8Offset)
{
    return g_kaCanHwDataLengthMaxMin[u8Offset].u8DlcMin;
}
#endif

/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a
 * language extension. The code has been ignored. Reason: use assembly to run
 * faster */
/**
 * @brief Get Can MB Message
 *
 * @param u32CanAddr Can index
 * @param u32MbAddr MB Address
 * @param pRxData Point to data structure
 * @return E_OK means Read Correctly
 */
LOCAL_INLINE Std_ReturnType Can_Hw_GetMbMsg(uint32 u32CanAddr, uint32 u32MbAddr, CanHw_Message *pRxData)
{
    Std_ReturnType eReturnValue = E_OK;

    uint8   u8WordIdx;
    uint8   u8NumOfWord;
    uint32  u32MbConfig;
    uint32  u32MbDataAddr;
    uint32  u32MbIdAddr;
    uint32 *pDest;

    /*Check and wait if the BUSY code is set during the move-in process*/
    u32MbConfig = (uint32)CAN_READ_REG32(u32MbAddr);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    /* : If the development error detection for the Can module is enabled, the Can
       module shall raise the error CAN_E_DATALOST in case of OVERWRITE or OVERRUN
       event detection. [SWS_Can_00395]*/
    /* Check if a MBs used to receive data was overwrite */
    if (FLEXCAN_MBCS_CODERXOVRR_U32 == (u32MbConfig & FLEXCAN_MBCS_CODE_U32))
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_DATALOST);
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    /* Create a local copy of the MB to ensure that it is locked out for minimum
       amount of time. Read the DLC; this read access also locks the MB. */
    pRxData->u8DataLength = (uint8)((u32MbConfig & FLEXCAN_MBCS_LENGTH_U32) >>
                                    FLEXCAN_MBCS_LENGTH_SHIFT_U32);

#if (CAN_FD_MODE_ENABLE == STD_ON)
    if (((uint8)pRxData->u8DataLength) >= (uint8)FLEXCAN_DATA_LENGTH_MIN_U8)
    {
        pRxData->u8DataLength = (uint8)(Can_Hw_GetMbDataMax(
            (uint8)(pRxData->u8DataLength - FLEXCAN_DATA_LENGTH_OFFSET_U8)));
    }
#endif
    u32MbIdAddr = Can_Hw_GetMbIdAddr(u32MbAddr);
    /* Get the ID of the message. For extended IDs the most significant bit mus
     * tbe set - according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
    if ((uint32)0x0U == (u32MbConfig & (uint32)FLEXCAN_MBCS_IDE_U32))
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)((CAN_READ_REG32(u32MbIdAddr) &
                                                      (uint32)(FLEXCAN_MBID_ID_STANDARD_U32)) >>
                                                     (uint32)(18U)));
    }
    else
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)(CAN_READ_REG32(u32MbIdAddr) &
                                                     (uint32)(FLEXCAN_MBID_ID_EXTENDED_U32)) |
                                            FLEXCAN_MBC_ID_IDE_U32);
    }

    /* Get the ID of the message. For FD the most significant bit mus tbe set -
     * according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
#if (CAN_FD_MODE_ENABLE == STD_ON)
    if ((uint32)0x0U != ((uint32)(u32MbConfig & (uint32)(FLEXCAN_FD_MB_MESSAGE_U32))))
    {
        pRxData->mbMessageId = pRxData->mbMessageId | CAN_FD_ID_DESCRIPTOR;
    }
#endif
    /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 1860 ++ #Misra-C:2012 Rule-10.4 Both operands of an operator in
     * which the usual arithmetic conversions are performed shall have the same
     * essential type category Reason: point update must be used */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: cast must be used */
    /* First: Read number of words (multiple of 4) */
    u8NumOfWord = (uint8)(pRxData->u8DataLength / 4);
    /* remainder by 4 */
    if ((uint8)0U != (pRxData->u8DataLength & FLEXCAN_MASK_2BITS_U8))
    {
        u8NumOfWord++;
    }

    u32MbDataAddr = Can_Hw_GetMbDataAddr(u32MbAddr);
    pDest         = (uint32 *)pRxData->aData;
    /* Copy the data into the MB memory. The driver will not read from a null
     * pointer SDU. */
    for (u8WordIdx = 0; u8WordIdx < u8NumOfWord; u8WordIdx++)
    {
        pDest[u8WordIdx] = (uint32)CAN_READ_REG32((uint32)(u32MbDataAddr + (uint32)(u8WordIdx * 4)));
        REV_BYTES_32(pDest[u8WordIdx], pDest[u8WordIdx]);
    }
    /* PRQA S 4393 -- */
    /* PRQA S 1860 -- */
    /* PRQA S 0310 -- */
    /* PRQA S 3305 -- */
    /* Release the internal lock. Reading the Free Running Timer is not mandatory.
       If not executed the MB remains locked, unless the CPU reads the C/S word of
       another MB.*/
    (void)CAN_READ_REG32(FLEXCAN_TIMER(u32CanAddr));

    return eReturnValue;
}

/**
 * @brief Get Can Legacy FIFO MB0 Message
 *
 * @param u32CanAddr Can index
 * @param u32MbAddr MB Address
 * @param pRxData Point to data structure
 * @return E_OK means Read Correctly
 */
LOCAL_INLINE Std_ReturnType Can_Hw_GetLegacyMbMsg(uint32         u32CanAddr,
                                                  uint32         u32MbAddr,
                                                  CanHw_Message *pRxData)
{
    Std_ReturnType eReturnValue = E_OK;

    uint8   u8WordIdx;
    uint8   u8NumOfWord;
    uint32  u32MbConfig;
    uint32  u32MbDataAddr;
    uint32  u32MbIdAddr;
    uint32 *pDest;

    /*Check and wait if the BUSY code is set during the move-in process*/
    u32MbConfig = (uint32)CAN_READ_REG32(u32MbAddr);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    /* : If the development error detection for the Can module is enabled, the Can
       module shall raise the error CAN_E_DATALOST in case of OVERWRITE or OVERRUN
       event detection. [SWS_Can_00395]*/
    /* Check if a MBs used to receive data was overwrite */
    if (FLEXCAN_MBCS_CODERXOVRR_U32 == (u32MbConfig & FLEXCAN_MBCS_CODE_U32))
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_DATALOST);
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    /* Create a local copy of the MB to ensure that it is locked out for minimum
        amount of time. Read the DLC; this read access also locks the MB. */
    pRxData->u8DataLength = (uint8)((u32MbConfig & FLEXCAN_MBCS_LENGTH_U32) >>
                                    FLEXCAN_MBCS_LENGTH_SHIFT_U32);

    /* Get raw hit index from MB config */
    uint16 u16RawHitIndex = (uint16)((u32MbConfig & FLEXCAN_LEGACY_FIFO_IDHIT_MASK) >>
                                     FLEXCAN_LEGACY_FIFO_IDHIT_SHIFT);

    /* Get filter format from MCR register to map hit index correctly */
    uint32 u32McrValue     = CAN_READ_REG32(FLEXCAN_MCR(u32CanAddr));
    uint32 u32FilterFormat = u32McrValue & FLEXCAN_MCR_IDAM_U32;

    /* Map hit index according to filter format to be consistent with Format A */
    if (u32FilterFormat == (uint32)FLEXCAN_MCR_IDAM16_U32)
    {
        /* Format B: 2 filters per element
         * IDHIT indicates the element index, divide by 2 to get filter index
         */
        pRxData->u16HitIndex = u16RawHitIndex >> 1U;
    }
    else if (u32FilterFormat == (uint32)FLEXCAN_MCR_IDAM08_U32)
    {
        /* Format C: 4 filters per element
         * IDHIT indicates the element index, divide by 4 to get filter index
         */
        pRxData->u16HitIndex = u16RawHitIndex >> 2U;
    }
    else
    {
        /* Format A (IDAM32): 1 filter per element
         * Hit index directly corresponds to filter index
         * Or Format D (reject all): use raw hit index
         */
        pRxData->u16HitIndex = u16RawHitIndex;
    }
#if (CAN_FD_MODE_ENABLE == STD_ON)
    if (((uint8)pRxData->u8DataLength) >= (uint8)FLEXCAN_DATA_LENGTH_MIN_U8)
    {
        pRxData->u8DataLength = (uint8)(Can_Hw_GetMbDataMax(
            (uint8)(pRxData->u8DataLength - FLEXCAN_DATA_LENGTH_OFFSET_U8)));
    }
#endif
    u32MbIdAddr = Can_Hw_GetMbIdAddr(u32MbAddr);
    /* Get the ID of the message. For extended IDs the most significant bit mus
     * tbe set - according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
    if ((uint32)0x0U == (u32MbConfig & (uint32)FLEXCAN_MBCS_IDE_U32))
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)((CAN_READ_REG32(u32MbIdAddr) &
                                                      (uint32)(FLEXCAN_MBID_ID_STANDARD_U32)) >>
                                                     (uint32)(18U)));
    }
    else
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)(CAN_READ_REG32(u32MbIdAddr) &
                                                     (uint32)(FLEXCAN_MBID_ID_EXTENDED_U32)) |
                                            FLEXCAN_MBC_ID_IDE_U32);
    }

    /* Get the ID of the message. For FD the most significant bit mus tbe set -
     * according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
#if (CAN_FD_MODE_ENABLE == STD_ON)
    if ((uint32)0x0U != ((uint32)(u32MbConfig & (uint32)(FLEXCAN_FD_MB_MESSAGE_U32))))
    {
        pRxData->mbMessageId = pRxData->mbMessageId | CAN_FD_ID_DESCRIPTOR;
    }
#endif
    /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 1860 ++ #Misra-C:2012 Rule-10.4 Both operands of an operator in
     * which the usual arithmetic conversions are performed shall have the same
     * essential type category Reason: point update must be used */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: cast must be used */
    /* First: Read number of words (multiple of 4) */
    u8NumOfWord = (uint8)(pRxData->u8DataLength / 4);
    /* remainder by 4 */
    if ((uint8)0U != (pRxData->u8DataLength & FLEXCAN_MASK_2BITS_U8))
    {
        u8NumOfWord++;
    }

    u32MbDataAddr = Can_Hw_GetMbDataAddr(u32MbAddr);
    pDest         = (uint32 *)pRxData->aData;
    /* Copy the data into the MB memory. The driver will not read from a null
     * pointer SDU. */
    for (u8WordIdx = 0; u8WordIdx < u8NumOfWord; u8WordIdx++)
    {
        pDest[u8WordIdx] = (uint32)CAN_READ_REG32((uint32)(u32MbDataAddr + (uint32)(u8WordIdx * 4)));
        REV_BYTES_32(pDest[u8WordIdx], pDest[u8WordIdx]);
    }
    /* PRQA S 4393 -- */
    /* PRQA S 1860 -- */
    /* PRQA S 0310 -- */
    /* PRQA S 3305 -- */
    /* Release the internal lock. Reading the Free Running Timer is not mandatory.
       If not executed the MB remains locked, unless the CPU reads the C/S word of
       another MB.*/
    (void)CAN_READ_REG32(FLEXCAN_TIMER(u32CanAddr));

    return eReturnValue;
}

/**
 * @brief Read free running timer
 *
 * @param u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_GetFreeTimer(uint32 u32CanAddr)
{
    (void)CAN_READ_REG32(FLEXCAN_TIMER(u32CanAddr));
}

/**
 * @brief Fill Message Buffer Data by bytes
 *
 * @param u32MbAddr MB Address
 * @param pData Point to Data Buffer
 * @param u8DataStart Data Start Index
 * @param u8DataLength Data Total Length
 */
LOCAL_INLINE void Can_Hw_FillMbData(uint32 u32MbAddr, const uint8 *pData, uint8 u8DataLength)
{
    uint8         u8WordIdx;
    uint8         u8NumOfWord;
    const uint32 *pSrc;
    uint32       *pDest;
    uint32        u32MbDataAddr = Can_Hw_GetMbDataAddr(u32MbAddr);
    /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 1860 ++ #Misra-C:2012 Rule-10.4 Both operands of an operator in
     * which the usual arithmetic conversions are performed shall have the same
     * essential type category Reason: point update must be used */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: cast must be used */
    /* First: Read number of words (multiple of 4) */
    u8NumOfWord = (uint8)(u8DataLength / 4);
    /* remainder by 4 */
    if ((uint8)0U != (u8DataLength & FLEXCAN_MASK_2BITS_U8))
    {
        u8NumOfWord++;
    }

    pSrc = (const uint32 *)pData;
    /* Copy the data into the MB memory. The driver will not read from a null
     * pointer SDU. */
    for (u8WordIdx = 0; u8WordIdx < u8NumOfWord; u8WordIdx++)
    {
        pDest = (uint32 *)((uint32)(u32MbDataAddr + (uint32)(u8WordIdx * 4)));
        CAN_WRITE_REG32(pDest, pSrc[u8WordIdx]);
        REV_BYTES_32(*pDest, *pDest);
    }
    /* PRQA S 4393 -- */
    /* PRQA S 1860 -- */
    /* PRQA S 0310 -- */
    /* PRQA S 3305 -- */
}

/* PRQA S 1006 -- */

#if (CAN_FD_MODE_ENABLE == STD_ON)
/**
 * @brief Fill Message Buffer Data by bytes
 *
 * @param u32MbAddr MB Address
 * @param u8DataStart Data Start Index
 * @param u8DataLength Data Total Length
 */
LOCAL_INLINE void Can_Hw_FillMbDataWithPad(uint32 u32MbAddr,
                                           uint8  u8PadData,
                                           uint8  u8DataStart,
                                           uint8  u8DataLength)
{
    uint8  u8MbDataIndex;
    uint32 u32MbIdAddr = Can_Hw_GetMbDataAddr(u32MbAddr);
    for (u8MbDataIndex = u8DataStart; u8MbDataIndex < u8DataLength; u8MbDataIndex++)
    {
        CAN_WRITE_REG8(u32MbIdAddr + g_kaCanHwDataInMbIndex[u8MbDataIndex], u8PadData);
    }
}
#endif

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/**
 * @brief Write Received ID in Rx FIFO Table
 *
 * @param  u32CanAddr  Can base address
 * @param u8RxFifoTableIdIndex Rx FIFO index in Table
 * @param u32TableId CAN ID
 */
LOCAL_INLINE void Can_Hw_WriteIdToLegacyFifoTable(uint32 u32CanAddr,
                                                  uint8  u8RxFifoTableIdIndex,
                                                  uint32 u32TableId)
{
    /* Calculate the physical address for each table to write the Table ID and
     * FilterMask. */
    CAN_WRITE_REG32(FLEXCAN_RXFIFO_ID(u32CanAddr, u8RxFifoTableIdIndex), u32TableId);
}

#endif

/* ---------------------------- MECR Register ----------------------------- */

#if (CAN_MEMORY_ECC_SUPPORT == STD_ON)
/**
 * @brief Disables completely the memory detection and correction mechanism.
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableEcc(uint32 u32CanAddr)
{
    /* Enable that the MECR register is updated */
    CAN_BIT_SET_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_CTRL2_ECRWRE_U32);
    /* Enables writes on MECR register */
    CAN_BIT_CLR_REG32(FLEXCAN_MECR(u32CanAddr), FLEXCAN_MECR_ECRWRDIS_U32);
    /*Disable Error Correction  */
    CAN_BIT_SET_REG32(FLEXCAN_MECR(u32CanAddr), FLEXCAN_MECR_ECCDIS_U32);
    /* Disables writes on MECR register */
    CAN_BIT_SET_REG32(FLEXCAN_MECR(u32CanAddr), FLEXCAN_MECR_ECRWRDIS_U32);
    /* Disable update on MECR register */
    CAN_BIT_CLR_REG32(FLEXCAN_CTRL2(u32CanAddr), FLEXCAN_CTRL2_ECRWRE_U32);
}
#endif

/* ---------------------------- FDCBT Register ----------------------------- */
#if (CAN_FD_MODE_ENABLE == STD_ON)

/**
 * @brief Enable CANFD mode
 *
 * @param u32CanAddr
 */
LOCAL_INLINE void Can_Hw_EnableFDMode(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_FDEN_U32);
}

/**
 * @brief Set FDCBT register value
 *
 * @param  u32CanAddr  Can base address
 * @param u32value register value
 */
LOCAL_INLINE void Can_Hw_SetFDCBTValue(uint32 u32CanAddr, uint32 u32value)
{
    CAN_WRITE_REG32(FLEXCAN_FDCBT(u32CanAddr), u32value);
}

/* ---------------------------- FDCTRL Register ----------------------------- */
/**
 * @brief Disable Transceiver Delay Compensation
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableTDC(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_FDCTRL(u32CanAddr), (uint32)(FLEXCAN_FDCTRL_TDCEN_U32));
}

/**
 * @brief Enable Transceiver Delay Compensation
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableTDC(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_FDCTRL(u32CanAddr), (uint32)(FLEXCAN_FDCTRL_TDCEN_U32));
}

/**
 * @brief Disable Bit Rate Switch
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_DisableBRS(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_FDCTRL(u32CanAddr), (uint32)(FLEXCAN_FDCTRL_FDRATE_U32));
}

/**
 * @brief Enable Bit Rate Switch
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableBRS(uint32 u32CanAddr)
{
    CAN_BIT_SET_REG32(FLEXCAN_FDCTRL(u32CanAddr), (uint32)(FLEXCAN_FDCTRL_FDRATE_U32));
}

/**
 * @brief Set MB length in CANFD mode
 *
 * @param  u32CanAddr  Can base address
 * @param u32Length The MB length
 */
LOCAL_INLINE void Can_Hw_SetFDMBLength(uint8 u8ControllerId, uint32 u32CanAddr, uint32 u32Length)
{
    CAN_RMW_REG32(FLEXCAN_FDCTRL(u32CanAddr),
                  FLEXCAN_FDCTRL_MBDSR0_U32 | FLEXCAN_FDCTRL_MBDSR1_U32 | FLEXCAN_FDCTRL_MBDSR2_U32,
                  u32Length);
    (void)u8ControllerId;
}

/**
 * @brief Set Transceiver Delay Compensation Value in CANFD mode
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The Transceiver Delay Compensation Value
 */
LOCAL_INLINE void Can_Hw_SetTDCValue(uint32 u32CanAddr, uint32 u32Value)
{
    CAN_RMW_REG32(FLEXCAN_FDCTRL(u32CanAddr), FLEXCAN_FDCTRL_TDCOFF_U32, u32Value);
}

/**
 * @brief Set CTRL2 register for CANFD
 *
 * @param  u32CanAddr  Can base address
 * @param u32Value The register value
 */
LOCAL_INLINE void Can_Hw_SetFDCTRL2(uint32 u32CanAddr, uint32 u32Value)
{
    CAN_RMW_REG32(FLEXCAN_CTRL2(u32CanAddr),
                  (FLEXCAN_FD_CTRL2_STFCNTEN_U32) | (FLEXCAN_FD_CTRL2_EDFLTDIS_U32) |
                      (FLEXCAN_FD_CTRL2_PREXCEN_U32),
                  u32Value);
}
#endif

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
/* ---------------------------- Enhanced fifo ----------------------------- */

/* ---------------------------- ERFSR Register ----------------------------- */
/**
 * @brief Get ERFSR with value
 *
 * @param  u32CanAddr  Can base address
 * @return uint32 Status value
 */
LOCAL_INLINE uint32 Can_Hw_GetERFSR(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_ERFSR(u32CanAddr));
}

/**
 * @brief Set ERFSR with value
 *
 * @param  u32CanAddr  Can base address
 * @param u32Status Status value
 */
LOCAL_INLINE void Can_Hw_SetERFSR(uint32 u32CanAddr, uint32 u32Status)
{
    CAN_WRITE_REG32(FLEXCAN_ERFSR(u32CanAddr), u32Status);
}

/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a
 * language extension. The code has been ignored. Reason: use assembly to run
 * faster */
/**
 * @brief Get Can enhanced fifo Message
 *
 * @param u32CanAddr  Can base address
 * @param pRxData Point to data structure
 * @return E_OK means Read Correctly
 */
LOCAL_INLINE Std_ReturnType Can_Hw_GetEnhancedFifoMsg(uint32 u32CanAddr, CanHw_Message *pRxData)
{
    Std_ReturnType eReturnValue;
    uint8          u8NumOfWord;
    uint8          u8WordIdx;
    uint32         u32FifoConfig;
    uint32         u32FifoDataAddr;
    uint32        *pDest;

    eReturnValue = E_OK;

    /*Check and wait if the BUSY code is set during the move-in process*/
    u32FifoConfig = (uint32)CAN_READ_REG32(FLEXCAN_ERX(u32CanAddr));

    /* Create a local copy of the MB to ensure that it is locked out for minimum
       amount of time. Read the DLC; this read access also locks the MB. */
    pRxData->u8DataLength = (uint8)((u32FifoConfig & FLEXCAN_RXCS_LENGTH_U32) >>
                                    FLEXCAN_RXCS_LENGTH_SHIFT_U32);

#if (CAN_FD_MODE_ENABLE == STD_ON)
    if (((uint8)pRxData->u8DataLength) >= (uint8)FLEXCAN_DATA_LENGTH_MIN_U8)
    {
        pRxData->u8DataLength = (uint8)(Can_Hw_GetMbDataMax(
            (uint8)(pRxData->u8DataLength - FLEXCAN_DATA_LENGTH_OFFSET_U8)));
    }
#endif

    /* Get the ID of the message. For extended IDs the most significant bit mus
     * tbe set - according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
    if ((uint32)0x0U == (u32FifoConfig & (uint32)FLEXCAN_RXCS_IDE_U32))
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)((CAN_READ_REG32(FLEXCAN_ERX_ID(u32CanAddr)) &
                                                      (uint32)(FLEXCAN_RXID_ID_STANDARD_U32)) >>
                                                     FLEXCAN_RXID_ID_STANDARD_SHIFT_U32));
    }
    else
    {
        pRxData->mbMessageId = (Can_IdType)((uint32)(CAN_READ_REG32(FLEXCAN_ERX_ID(u32CanAddr)) &
                                                     (uint32)(FLEXCAN_RXID_ID_EXTENDED_U32)) |
                                            FLEXCAN_RXC_ID_IDE_U32);
    }

    /* Get the ID of the message. For FD the most significant bit mus tbe set -
     * according to Can_IdType requirement - chapter8.2.4 of SWS CAN.*/
#if (CAN_FD_MODE_ENABLE == STD_ON)
    if ((uint32)0x0U != ((uint32)(u32FifoConfig & (uint32)(FLEXCAN_RXCS_EDL_U32))))
    {
        pRxData->mbMessageId = pRxData->mbMessageId | CAN_FD_ID_DESCRIPTOR;
    }
#endif

    /* Copy the data into the MB memory. The driver will not read from a null
     * pointer SDU. */
    u32FifoDataAddr = FLEXCAN_ERX_DATA(u32CanAddr, 0U);
    /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
     * between a pointer to object type and a pointer to a different object type
     * Reason: cast must be used */
    /* PRQA S 1860 ++ #Misra-C:2012 Rule-10.4 Both operands of an operator in
     * which the usual arithmetic conversions are performed shall have the same
     * essential type category Reason: point update must be used */
    /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression
     * shall not be cast to a different essential type category or a wider
     * essential type Reason: cast must be used */
    /* First: Read number of words (multiple of 4) */
    u8NumOfWord = (uint8)(pRxData->u8DataLength / 4);
    /* remainder by 4 */
    if ((uint8)0U != (pRxData->u8DataLength & FLEXCAN_MASK_2BITS_U8))
    {
        u8NumOfWord++;
    }

    if ((uint32)0x0U == (u32FifoConfig & (uint32)FLEXCAN_RXCS_IDE_U32))
    {
        pRxData->u16HitIndex =
            (uint16)((CAN_READ_REG32(FLEXCAN_ERX(u32CanAddr) + (uint32)((u8NumOfWord + 2) * 4)) &
                      FLEXCAN_ENHANCED_FIFO_IDHIT_MASK));
        pRxData->u16HitIndex += ((CAN_READ_REG32(FLEXCAN_ERFCR(u32CanAddr)) & FLEXCAN_NEXIF_MASK_U32) >>
                                 FLEXCAN_NEXIF_SHIFT_U32);
    }
    else
    {
        pRxData->u16HitIndex =
            (uint16)(CAN_READ_REG32(FLEXCAN_ERX(u32CanAddr) + (uint32)((u8NumOfWord + 2) * 4)) &
                     FLEXCAN_ENHANCED_FIFO_IDHIT_MASK);
    }

    pDest = (uint32 *)pRxData->aData;
    /* Copy the data into the MB memory. The driver will not read from a null
     * pointer SDU. */
    for (u8WordIdx = 0; u8WordIdx < u8NumOfWord; u8WordIdx++)
    {
        pDest[u8WordIdx] = CAN_READ_REG32((uint32)(u32FifoDataAddr + (uint32)(u8WordIdx * 4)));
        REV_BYTES_32(pDest[u8WordIdx], pDest[u8WordIdx]);
    }
    /* PRQA S 4393 -- */
    /* PRQA S 1860 -- */
    /* PRQA S 0310 -- */
    /* PRQA S 3305 -- */
    /* Clear the interrupt flag - w1c. */
    Can_Hw_SetERFSR(u32CanAddr, FLEXCAN_ERFDA_MASK_U32);

    /* Release the internal lock. Reading the Free Running Timer is not mandatory.
       If not executed the MB remains locked, unless the CPU reads the C/S word of
       another MB.*/
    (void)CAN_READ_REG32(FLEXCAN_TIMER(u32CanAddr));

    return eReturnValue;
}

/* PRQA S 1006 -- */

/**
 * @brief Get ERFIER with value
 *
 * @param  u32CanAddr  Can base address
 * @return uint32 Status value
 */
LOCAL_INLINE uint32 Can_Hw_GetERFIER(uint32 u32CanAddr)
{
    return CAN_READ_REG32(FLEXCAN_ERFIER(u32CanAddr));
}

/**
 * @brief Enable Enhanced Rx FIFO
 *
 * @param  u32CanAddr  Can base address
 */
LOCAL_INLINE void Can_Hw_EnableEnhancedFifo(uint32 u32CanAddr)
{
    CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_FEN_U32);
    CAN_BIT_SET_REG32(FLEXCAN_ERFCR(u32CanAddr), FLEXCAN_ERFEN_MASK_U32);
}

/**
 * @brief Set the enhanced fifo filter number
 *
 * @param  u32CanAddr  Can base address
 * @param u8NEXIF    NEXIF value
 * @param u8NFE      NFE value
 */
LOCAL_INLINE void Can_Hw_SetEnhancedFifoFilterNumber(uint32 u32CanAddr, uint8 u8NEXIF, uint8 u8NFE)
{
    CAN_RMW_REG32(FLEXCAN_ERFCR(u32CanAddr),
                  FLEXCAN_NEXIF_MASK_U32,
                  ((uint32)u8NEXIF) << FLEXCAN_NEXIF_SHIFT_U32);
    CAN_RMW_REG32(FLEXCAN_ERFCR(u32CanAddr),
                  FLEXCAN_NFE_MASK_U32,
                  ((uint32)u8NFE) << FLEXCAN_NFE_SHIFT_U32);
}

/**
 * @brief Set the enhanced fifo watermark
 *
 * @param  u32CanAddr  Can base address
 * @param u8Watermark   watermark value
 */
LOCAL_INLINE void Can_Hw_SetEnhancedFifoWatermark(uint32 u32CanAddr, uint8 u8Watermark)
{
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The
     * value of the result is always that of the left-hand operand. Reason:
     * FLEXCAN_ERFWM_SHIFT_U32 is 0U in this ECU, but for platform, it should be
     * here  */
    CAN_RMW_REG32(FLEXCAN_ERFCR(u32CanAddr),
                  FLEXCAN_ERFWM_MASK_U32,
                  (uint32)u8Watermark << FLEXCAN_ERFWM_SHIFT_U32);
    /* PRQA S 2985 -- */
}

/**
 * @brief Write filter table in Rx FIFO filter register
 *
 * @param  u32CanAddr  Can base address
 * @param u8TableIndex Rx FIFO index in Table
 * @param u32Filter CAN ID
 */
LOCAL_INLINE void Can_Hw_WriteEnhancedFifoFilterTable(uint32 u32CanAddr,
                                                      uint8  u8TableIndex,
                                                      uint32 u32Filter)
{
    CAN_WRITE_REG32(FLEXCAN_ERFFEL(u32CanAddr, ((uint32)u8TableIndex << 2U)), u32Filter);
}

/**
 * @brief Enable enhanced Rx FIFO interrupt
 *
 * @param  u32CanAddr  Can base address
 * @param u32Mask
 */
LOCAL_INLINE void Can_Hw_EnableEnhancedFifoInterrupt(uint32 u32CanAddr, uint32 u32Mask)
{
    CAN_BIT_SET_REG32(FLEXCAN_ERFIER(u32CanAddr), u32Mask);
}

/**
 * @brief Disable enhanced Rx FIFO interrupt
 *
 * @param  u32CanAddr  Can base address
 * @param u32Mask
 */
LOCAL_INLINE void Can_Hw_DisableEnhancedFifoInterrupt(uint32 u32CanAddr, uint32 u32Mask)
{
    CAN_BIT_CLR_REG32(FLEXCAN_ERFIER(u32CanAddr), u32Mask);
}

/**
 * @brief Get the enhanced fifo Interrupt status
 *
 * @param  u32CanAddr  Can base address
 * @return uint32  enhanced fifo interrupt status
 */
LOCAL_INLINE uint32 Can_Hw_GetEnhancedFifoInterruptStatus(uint32 u32CanAddr)
{
    uint32 u32Status;

    u32Status = CAN_READ_REG32(FLEXCAN_ERFSR(u32CanAddr));
    u32Status &= CAN_READ_REG32(FLEXCAN_ERFIER(u32CanAddr));

    return u32Status;
}

#endif

/**
 * @brief Get the rx error counter
 *
 * @param  u32CanAddr  Can base address
 * @return uint8         rx error counter
 */
LOCAL_INLINE uint8 Can_Hw_GetRxErrorCounter(uint32 u32CanAddr)
{
    return (uint8)((CAN_READ_REG32(FLEXCAN_ECR(u32CanAddr)) & FLEXCAN_ECR_RXERRCNT_U32) >>
                   FLEXCAN_ECR_RXERRCNT_SHIFT_U32);
}

/**
 * @brief Get the tx error counter
 *
 * @param  u32CanAddr  Can base address
 * @return uint8         tx error counter
 */
LOCAL_INLINE uint8 Can_Hw_GetTxErrorCounter(uint32 u32CanAddr)
{
    return (uint8)((CAN_READ_REG32(FLEXCAN_ECR(u32CanAddr)) & FLEXCAN_ECR_TXERRCNT_U32) >>
                   FLEXCAN_ECR_TXERRCNT_SHIFT_U32);
}

#ifdef __cplusplus
}
#endif

#endif /* CAN_HW_H */
/** @} */

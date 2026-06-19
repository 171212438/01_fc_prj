/**
 *   @file    Can_Irq.c
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
                                                          -Update Interrupt process flow to run
faster
*   0.7.1       2024-07-06    QXW0038       N/A           Fix QAC warnings
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Can_Irq.c
 */
#include "Can.h"
#include "Can_Hw.h"
#include "Can_Hal.h"
#include "CanIf_Cbk.h"
#include "Mcal.h"
#if (CAN_TIMEOUT_AS_LOOP == STD_OFF)
#include "Os.h"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. Reason: this must call asm */
/**
 * @brief Process Special Message Buffer. [SWS_Can_00420]
 *
 * @param u8ControllerId Controller Id
 * @param u32CanAddr Can Address
 */
LOCAL_INLINE void Can_FlexCan_Mb(const uint8 u8ControllerId, const uint32 u32CanAddr)
{
    uint32 can_status = 0U;
    if (E_NOT_OK == Can_Hal_CheckControllerStarted(u8ControllerId))
    {
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
        Can_Hw_SetIFlag1(u32CanAddr, can_status);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status = Can_Hw_GetIFlag2(u32CanAddr);
            Can_Hw_SetIFlag2(u32CanAddr, can_status);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status = Can_Hw_GetIFlag3(u32CanAddr);
            Can_Hw_SetIFlag3(u32CanAddr, can_status);
        }
#endif
    }
    else
    {
        Can_Hal_ProcessTx(u8ControllerId, u32CanAddr);
        Can_Hal_ProcessRx(u8ControllerId, u32CanAddr);
    }

    EXIT_INTERRUPT();
}

/* PRQA S 1006 -- */
/* PRQA S 3006 -- */
#endif

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. Reason: this must call asm */
/**
 * @brief Process Bus Off Issue
 *
 * @param u8ControllerId Controller Id
 * @param u32CanAddr Can Address
 */
CAN_TEXT_SECTION static void Can_FlexCan_BusOff(const uint8 u8ControllerId, const uint32 u32CanAddr)
{
    uint32 can_status = 0U;
    uint32 can_mask   = 0U;
    uint8  can_currentCore;

    can_currentCore = GET_CPU_ID();
    if (E_NOT_OK == Can_Hal_CheckControllerStarted(u8ControllerId))
    {
        Can_Hw_ClrBusoffInterruptFlag(u32CanAddr);
    }
    else
    {
        can_mask   = Can_Hw_GetBusoffInterruptMask(u32CanAddr);
        can_status = (Can_Hw_GetBusoffInterruptFlag(u32CanAddr));
        if (0U != can_status)
        {
            if (0U != can_mask)
            {
                if (CAN_OK == (Can_ReturnType)Can_Hal_SetControllerMode(u8ControllerId,
                                                                        CAN_CS_STOPPED,
                                                                        (boolean)FALSE,
                                                                        can_currentCore))
                {
                    Can_Hal_ProcessBusOff(u8ControllerId);
                    CanIf_ControllerBusOff(u8ControllerId);
                }
            }
            else
            {
                /* Clear the ESR[BOFF_INT] bus off interrupt flag (w1c). */
                Can_Hw_ClrBusoffInterruptFlag(u32CanAddr);
            }
        }
    }

    EXIT_INTERRUPT();
}
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */
#endif /* CAN_BUSOFFINT_SUPPORTED = STD_ON */
/*================================================================================================*/

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. Reason: this must call asm */
/**
 * @brief Process Error Issue
 *
 * @param u8ControllerId Controller Id
 * @param u32CanAddr Can Address
 */
CAN_TEXT_SECTION static void Can_FlexCan_Err(const uint8 u8ControllerId, const uint32 u32CanAddr)
{
    uint32 u32ErrFlag = 0U;
    uint32 u32ErrMask = 0U;
    if (E_NOT_OK == Can_Hal_CheckControllerStarted(u8ControllerId))
    {
        Can_Hw_ClrErrorInterruptFlag(u32CanAddr);
#if (CAN_FD_MODE_ENABLE == STD_ON)
        if (TRUE == Can_Hal_CheckCanFdSupport(u8ControllerId))
        {
            Can_Hw_ClrFdErrorInterruptFlag(u32CanAddr);
        }
#endif
    }
    else
    {
#if (CAN_FD_MODE_ENABLE == STD_ON)
        if (TRUE == Can_Hal_CheckCanFdSupport(u8ControllerId))
        {
            u32ErrMask = Can_Hw_GetFdErrorInterruptMask(u32CanAddr);
            u32ErrFlag = Can_Hw_GetFdErrorInterruptFlag(u32CanAddr);
            if ((uint32)0U != (u32ErrMask & u32ErrFlag))
            {
                if (NULL_PTR != Can_Hal_GetFdErrorNofify(u8ControllerId))
                {
                    Can_Hal_GetFdErrorNofify(u8ControllerId)();
                }
            }
        }
#endif
        u32ErrMask = Can_Hw_GetErrorInterruptMask(u32CanAddr);
        u32ErrFlag = Can_Hw_GetErrorInterruptFlag(u32CanAddr);

        if ((uint32)0U != (u32ErrMask & u32ErrFlag))
        {
            if (NULL_PTR != Can_Hal_GetErrorNofify(u8ControllerId))
            {
                Can_Hal_GetErrorNofify(u8ControllerId)();
            }
        }
        Can_Hw_ClrErrorInterruptFlag(u32CanAddr);
#if (CAN_FD_MODE_ENABLE == STD_ON)
        if (TRUE == Can_Hal_CheckCanFdSupport(u8ControllerId))
        {
            Can_Hw_ClrFdErrorInterruptFlag(u32CanAddr);
        }
#endif
    }

    EXIT_INTERRUPT();
}
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */
#endif


   
       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 0
==================================================================================================*/
#ifdef CAN_CAN0_CONTROLLER_ID

/**
 * @brief CAN 0 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN0_All)
{
/* Controller hardware offset on chip. */
#if (CAN_0_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_0_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_0_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN0_CONTROLLER_ID;
#endif

#if ((FLEXCAN0_ERROR_ISR == STD_OFF) &&              \
     ((CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_0_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_0_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_0_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_0_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN0_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_0_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN0_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_0_RXINT_SUPPORTED == STD_ON) || \
     (CAN_0_TXINT_SUPPORTED == STD_ON))

#if (CAN_0_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_0_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_0_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_0_RXINT_SUPPORTED == STD_ON) || \
          (CAN_0_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN0_ERROR_ISR == STD_ON
/**
 * @brief CAN 0 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN0_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_0_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN0_CONTROLLER_ID;
#endif

#if (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_0_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_0_INDEX);
#endif /* #if (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_0_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_0_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_0_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN0_ERROR_ISR == STD_ON */

#endif /* CAN_CAN0_CONTROLLER_ID */

       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 1
==================================================================================================*/
#ifdef CAN_CAN1_CONTROLLER_ID

/**
 * @brief CAN 1 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN1_All)
{
/* Controller hardware offset on chip. */
#if (CAN_1_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_1_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_1_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN1_CONTROLLER_ID;
#endif

#if ((FLEXCAN1_ERROR_ISR == STD_OFF) &&              \
     ((CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_1_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_1_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_1_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_1_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN1_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_1_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN1_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_1_RXINT_SUPPORTED == STD_ON) || \
     (CAN_1_TXINT_SUPPORTED == STD_ON))

#if (CAN_1_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_1_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_1_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_1_RXINT_SUPPORTED == STD_ON) || \
          (CAN_1_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN1_ERROR_ISR == STD_ON
/**
 * @brief CAN 1 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN1_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_1_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN1_CONTROLLER_ID;
#endif

#if (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_1_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_1_INDEX);
#endif /* #if (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_1_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_1_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_1_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN1_ERROR_ISR == STD_ON */

#endif /* CAN_CAN1_CONTROLLER_ID */

       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 2
==================================================================================================*/
#ifdef CAN_CAN2_CONTROLLER_ID

/**
 * @brief CAN 2 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN2_All)
{
/* Controller hardware offset on chip. */
#if (CAN_2_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_2_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_2_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN2_CONTROLLER_ID;
#endif

#if ((FLEXCAN2_ERROR_ISR == STD_OFF) &&              \
     ((CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_2_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_2_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_2_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_2_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN2_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_2_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN2_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_2_RXINT_SUPPORTED == STD_ON) || \
     (CAN_2_TXINT_SUPPORTED == STD_ON))

#if (CAN_2_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_2_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_2_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_2_RXINT_SUPPORTED == STD_ON) || \
          (CAN_2_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN2_ERROR_ISR == STD_ON
/**
 * @brief CAN 2 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN2_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_2_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN2_CONTROLLER_ID;
#endif

#if (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_2_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_2_INDEX);
#endif /* #if (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_2_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_2_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_2_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN2_ERROR_ISR == STD_ON */

#endif /* CAN_CAN2_CONTROLLER_ID */

       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 3
==================================================================================================*/
#ifdef CAN_CAN3_CONTROLLER_ID

/**
 * @brief CAN 3 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN3_All)
{
/* Controller hardware offset on chip. */
#if (CAN_3_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_3_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_3_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN3_CONTROLLER_ID;
#endif

#if ((FLEXCAN3_ERROR_ISR == STD_OFF) &&              \
     ((CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_3_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_3_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_3_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_3_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN3_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_3_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN3_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_3_RXINT_SUPPORTED == STD_ON) || \
     (CAN_3_TXINT_SUPPORTED == STD_ON))

#if (CAN_3_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_3_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_3_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_3_RXINT_SUPPORTED == STD_ON) || \
          (CAN_3_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN3_ERROR_ISR == STD_ON
/**
 * @brief CAN 3 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN3_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_3_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN3_CONTROLLER_ID;
#endif

#if (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_3_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_3_INDEX);
#endif /* #if (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_3_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_3_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_3_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN3_ERROR_ISR == STD_ON */

#endif /* CAN_CAN3_CONTROLLER_ID */

       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 4
==================================================================================================*/
#ifdef CAN_CAN4_CONTROLLER_ID

/**
 * @brief CAN 4 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN4_All)
{
/* Controller hardware offset on chip. */
#if (CAN_4_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_4_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_4_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN4_CONTROLLER_ID;
#endif

#if ((FLEXCAN4_ERROR_ISR == STD_OFF) &&              \
     ((CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_4_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_4_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_4_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_4_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN4_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_4_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN4_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_4_RXINT_SUPPORTED == STD_ON) || \
     (CAN_4_TXINT_SUPPORTED == STD_ON))

#if (CAN_4_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_4_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_4_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_4_RXINT_SUPPORTED == STD_ON) || \
          (CAN_4_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN4_ERROR_ISR == STD_ON
/**
 * @brief CAN 4 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN4_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_4_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN4_CONTROLLER_ID;
#endif

#if (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_4_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_4_INDEX);
#endif /* #if (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_4_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_4_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_4_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN4_ERROR_ISR == STD_ON */

#endif /* CAN_CAN4_CONTROLLER_ID */

       
       
/*==================================================================================================
                               INTERRUPT SERVICE ROUTINES FOR FLEXCAN 5
==================================================================================================*/
#ifdef CAN_CAN5_CONTROLLER_ID

/**
 * @brief CAN 5 Interrupt Routine Service. [SWS_Can_00033]
 * [SWDESG_CAN_179][SWDESG_CAN_180][SWDESG_CAN_182]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
    * Reason: The function is not used in this project but it must be applied for user*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language
    * extension. The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
    * statements and C statements. Reason: this must call asm */
CAN_TEXT_SECTION ISR(Can_IsrCAN5_All)
{
/* Controller hardware offset on chip. */
#if (CAN_5_RXINT_SUPPORTED == STD_ON) ||                                      \
    (CAN_5_TXINT_SUPPORTED == STD_ON) || (CAN_SUPPORT_MULTICORE == STD_ON) || \
    (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON) ||                            \
    (CAN_5_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN5_CONTROLLER_ID;
#endif

#if ((FLEXCAN5_ERROR_ISR == STD_OFF) &&              \
     ((CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
      (CAN_5_BUSOFFINT_SUPPORTED == STD_ON))) ||     \
    ((CAN_5_RXINT_SUPPORTED == STD_ON) ||            \
     (CAN_5_TXINT_SUPPORTED == STD_ON))

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_5_INDEX);
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if FLEXCAN5_ERROR_ISR == STD_OFF
#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_5_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#endif /* FLEXCAN5_ERROR_ISR == STD_OFF */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
#if ((CAN_5_RXINT_SUPPORTED == STD_ON) || \
     (CAN_5_TXINT_SUPPORTED == STD_ON))

#if (CAN_5_LEGACY_FIFO_EN == STD_OFF)

        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

#if (CAN_5_ENHANCED_FIFO_EN == STD_ON)
        can_status |= Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
#endif

        if (can_status != 0u)
        {
            Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
        }

#else
        can_status = Can_Hw_GetIFlag1(u32CanAddr);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            can_status |= Can_Hw_GetIFlag2(u32CanAddr);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            can_status |= Can_Hw_GetIFlag3(u32CanAddr);
        }
#endif

        if (can_status != 0u)
        {
            /* if legacy fifo enabled, only show in MB 0 */
            if (can_status != 0u)
            {
                Can_FlexCan_Mb(u8ControllerId, u32CanAddr);
            }
        }
#endif /* #if (CAN_5_LEGACY_FIFO_EN == STD_OFF) */

#endif /* #if ((CAN_5_RXINT_SUPPORTED == STD_ON) || \
          (CAN_5_TXINT_SUPPORTED == STD_ON)) */

#endif /* #if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
    EXIT_INTERRUPT();
}
/* PRQA S 1503 --*/
/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#if FLEXCAN5_ERROR_ISR == STD_ON
/**
 * @brief CAN 5 Error Interrupt Routine Service
 *
 */
CAN_TEXT_SECTION ISR(Can_IsrErrorCAN5_All)
{
    /* Controller hardware offset on chip. */
#if (CAN_SUPPORT_MULTICORE == STD_ON) ||                                \
    (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_5_BUSOFFINT_SUPPORTED == STD_ON)
    uint8 u8ControllerId = CAN_CAN5_CONTROLLER_ID;
#endif

#if (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
    (CAN_5_BUSOFFINT_SUPPORTED == STD_ON)

    uint32 can_status = 0U;
    uint32 u32CanAddr;
    u32CanAddr = Can_Hw_GetCanBaseAddr(FLEXCAN_5_INDEX);
#endif /* #if (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON) || \
          (CAN_5_BUSOFFINT_SUPPORTED == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    uint8 u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
    {
#endif

#if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON)
/* read err status and process error */
#if (CAN_5_ERROR_NOTIFICATION_ENABLE == STD_ON)
        can_status = Can_Hw_GetErrorStatus(u32CanAddr);

        if (can_status != 0u)
        {
            Can_FlexCan_Err(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */

#if (CAN_BUSOFFINT_SUPPORTED == STD_ON)
#if (CAN_5_BUSOFFINT_SUPPORTED == STD_ON)
        if (E_OK == Can_Hw_ChkBusOffStatus(u32CanAddr))
        {
            Can_FlexCan_BusOff(u8ControllerId, u32CanAddr);
        }
#endif
#endif /* #if (CAN_BUSOFFINT_SUPPORTED == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ISR, (uint8)CAN_E_INV_PARTITION);
    }
#endif /* CAN_DEV_ERROR_DETECT == STD_ON */
#endif
}
#endif /* FLEXCAN5_ERROR_ISR == STD_ON */

#endif /* CAN_CAN5_CONTROLLER_ID */


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */

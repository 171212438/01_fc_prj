/**
 *   @file    Can_Hal.c
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
                                                          -Update interrupt process function to run
faster -Add Split FIFO
*   0.7.1       2024-06-26    QXW0038       N/A           Fix MB CODE Tx Read Mask issue, ignore
last bit
*   0.7.2       2024-07-06    QXW0038       N/A          -- Change initial function from inline type
to static
                                                         -- Add support for Can_DeInit of
SWS_CAN_91012
*   0.7.3       2024-07-16    QXW0038       N/A          Fix Multi Initial Issue
*   0.8.0       2024-07-19    QXW0038       N/A          add transmit abort function
*   0.8.1       2024-08-16    QXW0038       N/A          add enable acknowledge check
*   0.8.2       2024-10-29    QXW0038       N/A          update tx and rx data get type
*   0.8.3       2024-11-25    QXW0038       N/A          Add user mode support
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can.h"
#if (CAN_DEM_SUPPORT == STD_ON)
#include "Dem.h"
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#include "SchM_Can.h"
#include "Can_Hal.h"
#include "Can_Hw.h"
#include "CanIf_Cbk.h"
#include "Can_Reg.h"
#include "SchM_Can.h"
#include "Mcal.h"
#if (CAN_TIMEOUT_AS_LOOP == STD_OFF)
#include "Os.h"
#endif
#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
#include "EcuM.h"
#endif /* (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON) */
#endif
/*==================================================================================================
*
 * LOCAL TYPEDEFS (STRUCTURES, UNIONS,
 * ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
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

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define CAN_START_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_STOP_SEC_CONST_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_START_SEC_CONST_8
#include "Can_MemMap.h"

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

/**
 * @brief define number of filter's payload
 *
 */
CAN_DATA_SECTION static const uint8 s_aCanHal_aNumOfFilterForLegacyRxFIFO[CAN_HW_NUM_FILT_PAYLOAD_U8] = {
    CAN_HW_FILTER_NUM_7_LEGACYRXFIFO_U8,  CAN_HW_FILTER_NUM_9_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_11_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_13_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_15_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_17_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_19_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_21_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_23_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_25_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_27_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_29_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_31_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_33_LEGACYRXFIFO_U8,
    CAN_HW_FILTER_NUM_35_LEGACYRXFIFO_U8, CAN_HW_FILTER_NUM_37_LEGACYRXFIFO_U8
};
#endif

#define CAN_STOP_SEC_CONST_8
#include "Can_MemMap.h"

#define CAN_START_SEC_CONST_32
#include "Can_MemMap.h"

#define CAN_STOP_SEC_CONST_32
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
 * function with external linkage is defined Reason: don't need to declare it */
/* PRQA S 1504 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: don't need to declare it */
CAN_DATA_SECTION const Can_ConfigType *s_pCanHal_pConfigCurrent;
CAN_DATA_SECTION uint8                 s_u8CanGlobalInited;
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
CAN_DATA_SECTION uint8 s_aCanHal_TxAbortFlag[CAN_HTH_CNT];
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */
/* PRQA S 3408 -- */
/* PRQA S 1504 -- */

#define CAN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_START_SEC_VAR_INIT_UNSPECIFIED
#include "Can_MemMap.h"

#define CAN_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
extern boolean CanLPduReceiveCalloutFunction(uint8        Hrh,
                                             Can_IdType   CanId,
                                             uint8        CanDlc,
                                             const uint8 *CanSduPtr);
#endif

#define CAN_START_SEC_CODE
#include "Can_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/* ============================================================================================== */
/* ======================================= abstract Driver ====================================== */
/* ============================================================================================== */

/*================================================================================================*/
LOCAL_INLINE void Can_AB_CanIf_RxIndication(uint8         u8ControllerId,
                                            uint32        u32HohId,
                                            CanHw_Message tMessage)
{
    Can_HwType  Mailbox;
    PduInfoType PduInfoPtr;

    /* ID of the corresponding Hardware Object Range */
    Mailbox.Hoh = (Can_HwHandleType)u32HohId;
    /* ControllerId provided by CanIf clearly identify the corresponding controller */
    Mailbox.ControllerId = u8ControllerId;
    /* Standard/Extended CAN ID of CAN L-PDU */
    Mailbox.CanId = tMessage.mbMessageId;
    /* length of the SDU in bytes */
    PduInfoPtr.SduLength = tMessage.u8DataLength;
    /* pointer to the SDU (i.e. payload data) of the PDU */
    PduInfoPtr.SduDataPtr = tMessage.aData;
    /* pointer to the SDU (i.e. meta data) of the PDU */
#if (CAN_USE_LEGACY_PDUINFOTYPE == STD_OFF)
    PduInfoPtr.MetaDataPtr = NULL_PTR;
#endif
    CanIf_RxIndication(&Mailbox,
                       &PduInfoPtr); /*[SWS_Can_00279][SWS_Can_00234][SWS_Can_00235][SWDESG_CAN_150]*/
}

/* ============================================================================================== */
/* ======================================= Low Level Driver ===================================== */
/* ============================================================================================== */

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_InitTransmitMBs(uint8 u8ControllerId, uint32 u32CanAddr)
{
    /* Pointer to the MB container structure. [SWDESG_CAN_151]*/
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;
    /* Variable for indexing all the MBs fron hardware unit chain (all controllers). */
    uint16 u16HohIndex = 0U;
    /* ID of current MB. */
    Can_IdType mbMessageId = 0U;
    /* Variable for indexing the MBs inside a single controller. */
    uint8 u8MbIndex = 0U;

    uint32 u32MbAddr;

    pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);

    /* Parse all MBs that are of type TRANSMIT from the chain list, but process only the MBs for
     * controller transmitted as parameter in this function. */
    for (u16HohIndex = (uint16)s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex;
         u16HohIndex < CAN_MAXMBCOUNT_0;
         u16HohIndex++)
    {
        /* u16HohIndex variable is incrementing based of existing HOH for MBs. */
        if (u8ControllerId == ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8ControllerId))
        {

            if (CAN_TRANSMIT == (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].eMBType)
            {
                u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                /* Enable the MB as an TX object. MB is used for Tx & SRR must be set for Tx buffers. */
                Can_Hw_EnableTransmit(u32MbAddr);

                /* Configure only PRIO field of MBCS register of every Tx MB. */
                if (CAN_CONTROLLER_CFG_LPRIO_EN_U32 ==
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_LPRIO_EN_U32))
                {
                    mbMessageId =
                        (Can_IdType)((uint32)((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8LocalPriority)
                                     << FLEXCAN_MB_ID_PRIO_SHIFT_U32);

                    Can_Hw_SetTxId(u32MbAddr, mbMessageId);
                }
#if (CAN_TXINT_SUPPORTED == STD_ON)
                if (E_OK == Can_Hw_CheckTxInterrupt(u8ControllerId))
                {
                    if (E_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                    {
                        u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
                        Can_Hw_SetTxLocalInterrupt(u8ControllerId, u8MbIndex);
                    }
                }
#endif
#if (CAN_TXPOLL_SUPPORTED == STD_ON)
                if (E_OK == Can_Hw_CheckTxPolling(u8ControllerId))
                {
                    if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                    {
                        u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
                        Can_Hw_SetTxLocalPolling(u8ControllerId, u8MbIndex);
                    }
                }
#endif
            }
        }
    }
}

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_DisableInterrupts(uint8 u8ControllerId)
{
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr = 0U;

    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07();

    /* Disable all MB interrupts and legacy fifo interrupts. [SWDESG_CAN_152]*/
    Can_Hw_SetIMask1(u32CanAddr, (uint32)(0U));

#if CAN_IFLAG_IMASK_NUM > 1U
    if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
        (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
    {
        Can_Hw_SetIMask2(u32CanAddr, (uint32)(0U));
    }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
    if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
    {
        Can_Hw_SetIMask3(u32CanAddr, (uint32)(0U));
    }
#endif
    /* Disable BusOff, Error, TxW, RxW interrupts. */
    Can_Hw_ClrBusoffInterrupt(u32CanAddr);

    Can_Hw_ClrErrorInterrupt(u32CanAddr, Can_Hal_CheckCanFdSupport(u8ControllerId));

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    if ((CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
         (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
          CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32)))
    {
        Can_Hw_DisableEnhancedFifoInterrupt(u32CanAddr, FLEXCAN_ENHANCED_INT_MASK_U32);
    }
#endif

    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07();
}

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_EnableInterrupts(uint8 u8ControllerId)
{
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr = 0U;
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    uint32 u32EnhancedIntMask = 0U;
#endif

    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    if ((E_OK == Can_Hw_CheckTxInterrupt(u8ControllerId)) ||
        (E_OK == Can_Hw_CheckRxInterrupt(u8ControllerId)))
    {
        /* Enable INTs from MBs. [SWDESG_CAN_153]*/
        Can_Hw_SetIMask1(u32CanAddr,
                         g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[0]);
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            Can_Hw_SetIMask2(u32CanAddr,
                             g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[1]);
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            Can_Hw_SetIMask3(u32CanAddr,
                             g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[2]);
        }
#endif
/* Mark flag that tells if at least one INT is enabled. */
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        if (CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
            (CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 &
             g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions))
        {
            if (E_OK == Can_Hw_CheckEnhancedFifoInterrupt(u8ControllerId))
            {
                u32EnhancedIntMask = FLEXCAN_ERFDAIE_MASK_U32;
                /* Check if Overflow RxFifo interrupt is enabled and set the IMASK bit if yes. */
                if (CAN_CONTROLLER_CFG_OVER_EN_U32 ==
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_OVER_EN_U32))
                {
                    u32EnhancedIntMask |= FLEXCAN_ERFOVFIE_MASK_U32;
                }
                /* Check if Warning RxFifo interrupt is enabled and set the IMASK bit if yes. */
                if (CAN_CONTROLLER_CFG_WARN_EN_U32 ==
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_WARN_EN_U32))
                {
                    u32EnhancedIntMask |= FLEXCAN_ERFWMIIE_MASK_U32;
                }
                Can_Hw_EnableEnhancedFifoInterrupt(u32CanAddr, u32EnhancedIntMask);
            }
        }
#endif
    }

    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08();

    if (CAN_CONTROLLER_CFG_BOPOL_EN_U32 !=
        (CAN_CONTROLLER_CFG_BOPOL_EN_U32 & g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions))
    {
        /* BusOff - enable the interrupt. */
        Can_Hw_SetBusoffInterrupt(u32CanAddr);

        /* Mark flag that tells if at least one INT is enabled. */
    }
    if (CAN_CONTROLLER_CFG_ERR_EN_U32 ==
        (CAN_CONTROLLER_CFG_ERR_EN_U32 & g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions))
    {
        Can_Hw_SetErrorInterrupt(u32CanAddr, Can_Hal_CheckCanFdSupport(u8ControllerId));
    }
    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08();
}

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_InitRxLegacyFiFo(uint8 u8ControllerId, uint32 u32CanAddr)
{
    /* Local copy of pointer to the controller descriptor. [SWDESG_CAN_154]*/
    const Can_ControlerInstanceType *pCanControlerDescriptor = NULL_PTR;
    /* controller hardware offset on chip. */

    /* Used to save the the index pointing to the table id connfiguration for current controller id. */
    uint16 u16IndexInRxFifoFilterTable = 0U;
    /* Used to index the Table ID for RxFifo. */
    uint8 u8RxFifoTableIdIndex = 0U;
    /* Used to access configured table id and filtermask. */
    uint16 u16TempIndex = 0U;
    /* Used to filter FIFO number */
    uint8 u8FilterIndex = 0U;
    /* Fill the local pointer copy with address of the controller Descriptor.  */

    if (u8ControllerId < CAN_MAXCTRL_CONFIGURED)
    {
        pCanControlerDescriptor = &(
            s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

        /* If RX FIFO is used, then configure the controller's registers for Rx Fifo. */
        if (CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 ==
            (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
             CAN_CONTROLLER_CFG_LEGACY_FIFO_U32))
        {
            Can_Hw_EnableLegacyFifo(u32CanAddr);

            Can_Hw_SetLegacyFifoNum(u32CanAddr,
                                    ((uint32)pCanControlerDescriptor->u8RxFiFoUsedMb - (uint32)8U) /
                                        (uint32)2U);

            Can_Hw_SetGlobalRxMask(u32CanAddr,
                                   ((uint32)(pCanControlerDescriptor->u32RxFifoGlobalMask)));

            /* Processing MB must start after the last MB used by the Rx Fifo filters */
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11();
            /* set legacy rx fifo filter format */
            Can_Hw_SetLegacyFifoFilterFormat(
                u32CanAddr,
                (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                 CAN_CONTROLLER_CFG_IDAM_MASK_U32) >>
                    4U);

            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_11();
            /*Initialize the index used to acces the fifo Rx fifo filter list for all controllers*/
            u16IndexInRxFifoFilterTable = 0U;
            /* PRQA S 2877 ++ #Misra-C:2012 Dir-4.1 Run-time failures shall be minimized
             * Reason: loop is necessary */
            /* Calculate the index pointing to table id configuration. */
            for (u16TempIndex = 0U; u16TempIndex < ((uint16)u8ControllerId); u16TempIndex++)
            {
                if (CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 ==
                    (g_aCanHwUserdControllerTable[u16TempIndex].u32InsOptions &
                     CAN_CONTROLLER_CFG_LEGACY_FIFO_U32))
                {
                    u16IndexInRxFifoFilterTable =
                        (uint16)(u16IndexInRxFifoFilterTable +
                                 (4U * (((uint16)(s_pCanHal_pConfigCurrent->tControllerContainer
                                                      .pInstanceCfgsPtr[u16TempIndex]
                                                      .u8RxFiFoUsedMb)) -
                                        6U)));
                }
            }
            /* PRQA S 2877-- */

            u8FilterIndex = (uint8)((pCanControlerDescriptor->u8RxFiFoUsedMb - 8U) / 2U);

            /* Init the IDTable and RXIMR registers of RxFifo, every group contain 4 pattern */
            for (u16TempIndex = u16IndexInRxFifoFilterTable;
                 u16TempIndex < (u16IndexInRxFifoFilterTable +
                                 (4U * (((uint16)(pCanControlerDescriptor->u8RxFiFoUsedMb)) - 6U)));
                 u16TempIndex++)
            {
                /* Calculate the physical address for each table to write the Table ID and FilterMask. */
                Can_Hw_WriteIdToLegacyFifoTable(
                    u32CanAddr,
                    u8RxFifoTableIdIndex,
                    (s_pCanHal_pConfigCurrent->pRxLegacyFiFoTableIdConfig)[u16TempIndex].u32TableId);

#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
                /* Check if BCC support is enabled in configuration */
                if (CAN_CONTROLLER_CFG_BCC_EN_U32 !=
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_BCC_EN_U32))
                {
#endif
                    if (u8RxFifoTableIdIndex <= s_aCanHal_aNumOfFilterForLegacyRxFIFO[u8FilterIndex])
                    {
                        Can_Hw_WriteFilterMask(
                            u32CanAddr,
                            u8RxFifoTableIdIndex,
                            (s_pCanHal_pConfigCurrent->pRxLegacyFiFoTableIdConfig)[u16TempIndex]
                                .u32TableFilterMask);
                    }
#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
                }
#endif
                /* Increment the Table Id index for RxFifo configuration. */
                u8RxFifoTableIdIndex++;
            }

            /* Configure Interrupt Mask Bits in case handling of RX is implemented by interrupts
             * (not by polling). */

            if (E_OK == Can_Hw_CheckRxInterrupt(u8ControllerId))
            {
                if (E_OK == Can_Hw_CheckLegacyFifoInterrupt(u8ControllerId))
                {
                    /* Check if Overflow RxFifo interrupt is enabled and set the IMASK bit if yes. */
                    if (CAN_CONTROLLER_CFG_OVER_EN_U32 ==
                        (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                         CAN_CONTROLLER_CFG_OVER_EN_U32))
                    {
                        Can_Hw_SetRxLocalInterrupt(u8ControllerId,
                                                   1U,
                                                   FLEXCAN_FIFOOVERFLOW_INT_INDEX_U8);
                    }
                    /* Check if Warning RxFifo interrupt is enabled and set the IMASK bit if yes. */
                    if (CAN_CONTROLLER_CFG_WARN_EN_U32 ==
                        (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                         CAN_CONTROLLER_CFG_WARN_EN_U32))
                    {
                        Can_Hw_SetRxLocalInterrupt(u8ControllerId,
                                                   1U,
                                                   FLEXCAN_FIFOWARNING_INT_INDEX_U8);
                    }
                    /* If RxFifo is enabled, then frames are implicitly enabled. IDAM bits can
                     * filter the messages or can block at all. */
                    Can_Hw_SetRxLocalInterrupt(u8ControllerId, 1U, FLEXCAN_FIFOFRAME_INT_INDEX_U8);
                }
            }
        }
    }
}

#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_InitRxEnhancedFiFo(uint8 u8ControllerId, uint32 u32CanAddr)
{
    /* Local copy of pointer to the controller descriptor. [SWDESG_CAN_155]*/
    const Can_ControlerInstanceType *pCanControlerDescriptor = NULL_PTR;
    /* controller hardware offset on chip. */

    /* Used to save the the index pointing to the table id configuration for current controller id. */
    uint16 u16IndexInRxFifoFilterTable = 0U;
    /* Used to index the Table ID for RxFifo. */
    uint8 u8RxFifoTableIdIndex = 0U;
    /* Used to access configured table id and filter mask. */
    uint16 u16TempIndex = 0U;

    /* Fill the local pointer copy with address of the controller Descriptor.  */

    pCanControlerDescriptor = &(
        s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

    /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 A pointer resulting from arithmetic on a pointer
     * operand shall address an element of the same array as that pointer operand Reason: point and
     * array compare is needed */
    /* If RX FIFO is used, then configure the controller's registers for Rx Fifo. */
    if (CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
        (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
         CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32))
    {
        Can_Hw_EnableEnhancedFifo(u32CanAddr);

        Can_Hw_SetEnhancedFifoFilterNumber(
            u32CanAddr,
            pCanControlerDescriptor->u8ExtendedFilterNum,
            (uint8)(pCanControlerDescriptor->u8ExtendedFilterNum +
                    (pCanControlerDescriptor->u8StandardFilterNum / 2U) - 1U));

        Can_Hw_SetEnhancedFifoWatermark(u32CanAddr, pCanControlerDescriptor->u8Watermark);

        /*Initialize the index used to acces the fifo Rx fifo filter list for all controllers*/
        for (u16TempIndex = 0U; u16TempIndex < ((uint16)u8ControllerId); u16TempIndex++)
        {
            if (CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
                (g_aCanHwUserdControllerTable[u16TempIndex].u32InsOptions &
                 CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32))
            {
                u16IndexInRxFifoFilterTable =
                    (uint16)(u16IndexInRxFifoFilterTable +
                             ((uint16)2U * (uint16)s_pCanHal_pConfigCurrent->tControllerContainer
                                               .pInstanceCfgsPtr[u16TempIndex]
                                               .u8ExtendedFilterNum) +
                             s_pCanHal_pConfigCurrent->tControllerContainer
                                 .pInstanceCfgsPtr[u16TempIndex]
                                 .u8StandardFilterNum);
            }
        }

        /* Init the IDTable and RXIMR registers of RxFifo, every group contain 4 pattern */
        for (u16TempIndex = u16IndexInRxFifoFilterTable;
             u16TempIndex < (u16IndexInRxFifoFilterTable +
                             ((uint16)2U * (uint16)pCanControlerDescriptor->u8ExtendedFilterNum) +
                             pCanControlerDescriptor->u8StandardFilterNum);
             u16TempIndex++)
        {
            /* Calculate the physical address for each table to write the Table ID and FilterMask. */
            Can_Hw_WriteEnhancedFifoFilterTable(
                u32CanAddr,
                u8RxFifoTableIdIndex,
                (s_pCanHal_pConfigCurrent->pRxEnhancedFiFoTableIdConfig)[u16TempIndex]);

            /* Increment the Table Id index for RxFifo configuration. */
            u8RxFifoTableIdIndex++;
        }
    }
    /* PRQA S 2842 -- */
}

#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)

/*================================================================================================*/
/* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 Performing pointer arithmetic.
 * Reason: The buffer address must increased with offset */
CAN_TEXT_SECTION static void Can_LL_InitRxGlobalMask(uint16 u16HohIndex,
                                                     uint32 u32CanAddr,
                                                     uint8  u8RxglobalMskFlag)
{
    /* Pointer to the MB container structure. */
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;
    /* Variable for indexing the MBs inside a single controller. */
    uint8 u8MbIndex = 0U;

    /* Pointer to the MB container structure. */
    pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);
    /* Get the index of Hardware Message Buffer */

    u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
/* Check if BCC support is enabled in configuration */
#if (CAN_EXTENDEDID == STD_ON)

    if (CAN_STANDARD == (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->eIdType))
    {
#endif /* (CAN_EXTENDEDID == STD_ON) */

        if ((u8MbIndex != FLEXCAN_MB_14_U8) && (u8MbIndex != FLEXCAN_MB_15_U8) &&
            (u8RxglobalMskFlag == 0U))
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetGlobalMask(
                    u32CanAddr,
                    ((uint32)((uint32)(s_pCanHal_pConfigCurrent->pFilterMasks)
                                  [((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex]
                              << 18U)));
            }
            else
            {
                Can_Hw_SetGlobalMask(u32CanAddr, (uint32)(FLEXCAN_NO_MASK_U32));
            }
        }
        else if (u8MbIndex == FLEXCAN_MB_14_U8)
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetRx14Mask(
                    u32CanAddr,
                    ((uint32)((uint32)(s_pCanHal_pConfigCurrent->pFilterMasks)
                                  [((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex]
                              << 18U)));
            }
            else
            {
                Can_Hw_SetRx14Mask(u32CanAddr, FLEXCAN_NO_MASK_U32);
            }
        }
        else if (u8MbIndex == FLEXCAN_MB_15_U8)
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetRx15Mask(
                    u32CanAddr,
                    ((uint32)((uint32)(s_pCanHal_pConfigCurrent->pFilterMasks)
                                  [((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex]
                              << 18U)));
            }
            else
            {
                Can_Hw_SetRx15Mask(u32CanAddr, FLEXCAN_NO_MASK_U32);
            }
        }
        else
        {
            /* Already the  RX Global MASK register is updated, its used as acceptance mask for all
             * Rx MBs except for 14 and 15 MB's*/
        }
#if (CAN_EXTENDEDID == STD_ON)
    }
    else
    {
        if ((u8MbIndex != FLEXCAN_MB_14_U8) && (u8MbIndex != FLEXCAN_MB_15_U8) &&
            (u8RxglobalMskFlag == 0U))
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetGlobalMask(
                    u32CanAddr,
                    ((uint32)((s_pCanHal_pConfigCurrent
                                   ->pFilterMasks)[((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)
                                                       ->u16IdMaskIndex])));
            }
            else
            {
                Can_Hw_SetGlobalMask(u32CanAddr, ((uint32)(FLEXCAN_NO_MASK_U32)));
            }
        }
        else if (u8MbIndex == FLEXCAN_MB_14_U8)
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetRx14Mask(
                    u32CanAddr,
                    ((uint32)((s_pCanHal_pConfigCurrent
                                   ->pFilterMasks)[((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)
                                                       ->u16IdMaskIndex])));
            }
            else
            {
                Can_Hw_SetRx14Mask(u32CanAddr, FLEXCAN_NO_MASK_U32);
            }
        }
        else if (u8MbIndex == FLEXCAN_MB_15_U8)
        {

            if (CAN_MAXMASKCOUNT !=
                (((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u16IdMaskIndex))
            {
                Can_Hw_SetRx15Mask(
                    u32CanAddr,
                    ((uint32)((s_pCanHal_pConfigCurrent
                                   ->pFilterMasks)[((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)
                                                       ->u16IdMaskIndex])));
            }
            else
            {
                Can_Hw_SetRx15Mask(u32CanAddr, FLEXCAN_NO_MASK_U32);
            }
        }
        else
        {
            /* Already the  RX Global MASK register is updated, its used as acceptance mask for all
             * Rx MBs except for 14 and 15 MB's*/
        }
    }
#endif /* (CAN_EXTENDEDID == STD_ON) */
}
/* PRQA S 488 --*/
#endif /* CAN_BCC_SUPPORT_ENABLE == STD_ON */

/*================================================================================================*/
LOCAL_INLINE Can_ReturnType Can_LL_UpdateTransmitMB(uint8              u8ControllerId,
                                                    uint16             u16HohIndex,
                                                    const Can_PduType *PduInfo,
                                                    boolean            bEnabledFD)
{
    /* Variable for return status. [SWDESG_CAN_156]*/
    Can_ReturnType eReturnValue = CAN_BUSY;
    /* Variable for storing the value of IFLAG register. */
    Std_ReturnType eCheckFlag;
    /* Variable for storing the ID of the MB from MB structure. */
    Can_IdType mbMessageId = 0U;
#if (CAN_FD_MODE_ENABLE == STD_ON)
    /*Can_Flexcan_aDataLengthMax, Can_Flexcan_aDataLengthMin, Can_Flexcan_aDataLengthMax index counter*/
    uint8 u8DataLengthCount = 0U;
    /* The length of data which will be filled in MB */
    uint8 u8RealDataLength = (uint8)8U;
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */
    /* Variable for storing the ConfigReg of the MB. */
    uint32 u32MbConfig = 0U;
    /* DLC offset value is 16*/
    uint8  u8DataLength = 0U;
    uint8  u8MbIndex;
    uint32 u32CanAddr;
    uint32 u32MbAddr;

#if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
    PduInfoType PduInfoPtr;
    PduIdType   TxPduId;
#endif
    /* controller hardware offset on chip. */
    uint8 u8CanIndex = 0U;

    /* Get the hardware offset for this controller. Note that hardware offset may not be the same
     * with the controller index from the 'Can_ControlerInstanceType' structure. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);

    u8MbIndex  = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    /* Get the content of IFLAG register for which corresponds this MB. */
    eCheckFlag = Can_Hw_CheckMbFlag(u32CanAddr, u8MbIndex);

    /* This MB is not signaled as used by another message. */
    if (E_NOT_OK == eCheckFlag)
    {
        u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
        /* Is the MB still empty? */
        if (E_OK == Can_Hw_CheckTxMbEmpty(u32MbAddr))
        {
            /*[SWS_CAN_00486]*/
            mbMessageId = (Can_IdType)PduInfo->id;
            u32MbConfig = (FLEXCAN_MBCS_CODETX_U32 | FLEXCAN_MBCS_CODETXEN_U32);

            /* Get data length for normal tranmist */
            u8DataLength = (uint8)PduInfo->length;

            /* Set-up the MB content for Tx. Remember the PduId for reporting when the frame is
             * transmitted. */
            g_aCanHwUsedHohTable[u16HohIndex].u16TxHandler = PduInfo->swPduHandle;

#if (CAN_EXTENDEDID == STD_ON)
            if ((mbMessageId & FLEXCAN_MBC_ID_IDE_U32) != (uint32)0U)
            {
                /* Set the IDE & SRR bit in the MBCS register of the MB */
                u32MbConfig |= (FLEXCAN_MBCS_IDE_U32 | FLEXCAN_MBCS_SRR_U32);
                /* Clear the MSB bit of the id - this is used for sending embedded information by
                 * CanIf to Can to say if it is an extended or standard message type. */
                mbMessageId &= (~FLEXCAN_MBC_ID_IDE_U32);
            }
            else
            {
#endif /* (CAN_EXTENDEDID == STD_ON) */
                /* Standard ID - need to shift left 18 bits. */
                mbMessageId <<= FLEXCAN_STANDARD_ID_SHIFT_U32;
#if (CAN_EXTENDEDID == STD_ON)
            }
#endif /* (CAN_EXTENDEDID == STD_ON) */

            Can_Hw_SetTxId(u32MbAddr, mbMessageId);

#if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
            if ((NULL_PTR == PduInfo->sdu))
            {

                if ((boolean)TRUE ==
                    (s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr)[u16HohIndex]
                        .CanTriggerTransmitEnable)
                {
                    /*  If the trigger transmit API is enabled for the hardware object, Can_Write()
                       shall interpret a null pointer as SDU (Can_PduType.Can_SduPtrType = NULL) as
                       request for using the trigger transmit interface. If so and the hardware
                       object is free, Can_Write() shall call CanIf_TriggerTransmit() to acquire the
                       PDU;s data. */
                    /*[SWS_Can_00276][SWS_CAN_00502][SWDESG_CAN_081][SWDESG_CAN_082][SWDESG_CAN_083]*/
                    TxPduId = PduInfo->swPduHandle;

                    PduInfoPtr.SduLength =
                        (s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr)[u16HohIndex]
                            .u8MBPayloadLength;

                    PduInfoPtr.SduDataPtr = (uint8 *)(Can_Hw_GetMbDataAddr(u32MbAddr));

#if (CAN_USE_LEGACY_PDUINFOTYPE == STD_OFF)
                    PduInfoPtr.MetaDataPtr = NULL_PTR;
#endif

                    if (E_OK == CanIf_TriggerTransmit(TxPduId, &PduInfoPtr))
                    {
                        /* return value is OK */
                        if ((s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr)[u16HohIndex]
                                .u8MBPayloadLength >= (uint32)PduInfoPtr.SduLength)
                        {
                            /* get data length for trigger transmit */
                            u8DataLength = (uint8)PduInfoPtr.SduLength;
                            /* Copy the data into the MB memory. The driver will not read from a
                             * null pointer SDU. */
                            Can_Hw_FillMbData(u32MbAddr, PduInfoPtr.SduDataPtr, u8DataLength);
                            eReturnValue = CAN_OK;
                        }
                        else
                        {
                            eReturnValue = CAN_NOT_OK;
                        }
                    }
                    else /* return value is NOT_OK */
                    {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
                        Can_ReportDetError((uint8)CAN_DET_SID_WRITE, CAN_E_PARAM_POINTER);
#endif
                        eReturnValue = CAN_NOT_OK;
                    }
                }
                else /* this MB do not enabel the trigger transmit feature */
                {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
                    Can_ReportDetError((uint8)CAN_DET_SID_WRITE, CAN_E_PARAM_POINTER);
#endif
                    eReturnValue = CAN_NOT_OK;
                }
            }
            else /* sdu pointer is not null */
            {
#endif
                /* Copy the data into the MB memory. The driver will not read from a null pointer
                 * SDU.  [SWDESG_CAN_078]*/
                Can_Hw_FillMbData(u32MbAddr, PduInfo->sdu, u8DataLength);

#if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
            }
#endif

#if (CAN_DEV_ERROR_DETECT == STD_ON)
            if (CAN_NOT_OK != eReturnValue)
            {
#endif
/* Calculate real data length to add padding value */
#if (CAN_FD_MODE_ENABLE == STD_ON)
                if (u8DataLength <= (uint8)Can_Hw_GetMbDataMax(0))
                {
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */
                    u32MbConfig |= ((uint32)u8DataLength << FLEXCAN_MBCS_LENGTH_SHIFT_U32);
#if (CAN_FD_MODE_ENABLE == STD_ON)
                    u8RealDataLength = u8DataLength;
                }
                else
                {
                    if ((((uint32)PduInfo->id) & (uint32)CAN_FD_ID_DESCRIPTOR) == CAN_FD_ID_DESCRIPTOR)
                    {
                        for (u8DataLengthCount = 1U; u8DataLengthCount < CAN_HW_NUM_VAL_DLC_U8;
                             u8DataLengthCount++)
                        {
                            uint8 u8Min, u8Max;

                            u8Min = Can_Hw_GetMbDataMin(u8DataLengthCount);
                            u8Max = Can_Hw_GetMbDataMax(u8DataLengthCount);
                            if ((u8DataLength <= u8Max) && (u8DataLength >= u8Min))
                            {
                                u32MbConfig |=
                                    ((uint32)((uint32)CAN_HW_MAX_PAYLOAD8_U8 + (uint32)u8DataLengthCount)
                                     << FLEXCAN_MBCS_LENGTH_SHIFT_U32);
                                u8RealDataLength = (uint8)Can_Hw_GetMbDataMax(u8DataLengthCount);
                            }
                        }
                    }
                    /* else{ Development error detection from upper layer} */
                }
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */

#if (CAN_FD_MODE_ENABLE == STD_ON)
                if ((boolean)TRUE == bEnabledFD)
                {
                    /* check to see if CanIf bit send from the user enables FD */
                    if ((((uint32)PduInfo->id) & (uint32)CAN_FD_ID_DESCRIPTOR) == CAN_FD_ID_DESCRIPTOR)
                    {
                        u32MbConfig |= FLEXCAN_MB_EDL_BRS_U32;
                    }

                    if (u8DataLength < u8RealDataLength)
                    {
                        Can_Hw_FillMbDataWithPad(u32MbAddr,
                                                 g_aCanHwUsedHohTable[u16HohIndex].u8FdPaddingValue,
                                                 u8DataLength,
                                                 u8RealDataLength);
                    }
                }
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */
                /* Transmit the Data - now the data should be on Can Bus. Configure the DLC. */
                Can_Hw_SetDlcAndTransmitWithConfig(u32MbAddr, u32MbConfig);
                eReturnValue = CAN_OK;
#if (CAN_DEV_ERROR_DETECT == STD_ON)
            }
#endif
        }
        else
        /* MB not empty anymore, preempting code has grabbed it before we managed to set the guard
         * bit. Clear the guard bit. */
        {
            /* MB not TX empty anymore, preempting code has grabbed it before we managed to set the
             * guard bit. Clear the guard, end of critical section. */
            eReturnValue = CAN_BUSY;
        }
    }
    else /* MB is locked because it has the IFLAG bit set. */
    {
        eReturnValue = CAN_BUSY;
    }

    PROCESS_UNUSED_VAR(bEnabledFD); /* Prevent compiler warning when CAN_FD is disabled */
    return eReturnValue;
}

#if ((CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) || (CAN_TXPOLL_SUPPORTED == STD_ON))

/*================================================================================================*/
LOCAL_INLINE uint8 Can_LL_ProcessTx(const uint32 u32CanAddr, const uint8 u8MbIndex, uint32 u32MbAddr)
{

    uint8 u8Result = FALSE;

    if (E_OK == Can_Hw_CheckTxMbEmpty(u32MbAddr))
    {
        /* Clear the interrupt flag - w1c. [SWDESG_CAN_157]*/
        Can_Hw_SetMBIFlag(u32CanAddr, u8MbIndex);

        u8Result = TRUE;
    }

    return u8Result;

} /*Can_LL_ProcessTx*/
#endif

/*================================================================================================*/
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. Reason: this must call asm */
LOCAL_INLINE void Can_LL_ProcessRxNormal(const uint8  u8ControllerId,
                                         uint32       u32CanAddr,
                                         const uint16 u16HohIndex)
{
    /*[SWS_Can_00299][SWS_Can_00300][SWDESG_CAN_158]*/
    CanHw_Message tRxData;
    uint32        u32MbAddr;
    /* Pointer to the MB container structure. */
    const Can_MBConfigContainerType *pCanMbConfigContainer;

    uint8 u8MbIndex;

    u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);

    pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);

    u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);

    Can_Hw_WaitMbOutBusy(u32MbAddr);

    if (E_OK == Can_Hw_GetMbMsg(u32CanAddr, u32MbAddr, &tRxData))
    {
        /* Clear the MB flag - w1c. */
        Can_Hw_SetMBIFlag(u32CanAddr, u8MbIndex);
    }

    /* Prevents that a buffer overflow to be generated by a CAN bus error affecting length field */
    if (tRxData.u8DataLength > (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8MBPayloadLength)
    {
        tRxData.u8DataLength = (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8MBPayloadLength;
    }

#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
    /* If the L-PDU callout returns FALSE, the L-PDU shall not be processed any further.
     * [SWS_Can_00443][SWS_Can_00444]*/

    if ((boolean)TRUE ==
        CanLPduReceiveCalloutFunction((uint8)g_aCanHwUsedHohTable[u16HohIndex].u32HohId,
                                      tRxData.mbMessageId,
                                      tRxData.u8DataLength,
                                      tRxData.aData))
    {
#endif
        Can_AB_CanIf_RxIndication(u8ControllerId, g_aCanHwUsedHohTable[u16HohIndex].u32HohId, tRxData);

#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
    }
#endif
}

/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

/*================================================================================================*/
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)

LOCAL_INLINE void Can_LL_ProcessRxEnhancedFifo(const uint8  u8ControllerId,
                                               uint32       u32CanAddr,
                                               const uint32 u32TempFlag)
{
    CanHw_Message tRxData;
    uint8         u8HrhListLen;
    const uint16 *pHrhList;

    const Can_ControlerInstanceType *pCanControlerDescriptor;
    /* Index for browsing the available Rx MBs in FIFO's memory. [SWDESG_CAN_159]*/
    uint8 u8BrwMbIndex = 0U;

    pCanControlerDescriptor = &(
        s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

    /* Determine Hrh of the message. */
    pHrhList     = pCanControlerDescriptor->pFifoHrhList;
    u8HrhListLen = pCanControlerDescriptor->u8FifoHrhListLen;

    if (FLEXCAN_ERFDA_MASK_U32 == (FLEXCAN_ERFDA_MASK_U32 & u32TempFlag))
    {
        do
        {
            (void)Can_Hw_GetEnhancedFifoMsg(u32CanAddr, &tRxData);
            if (u8HrhListLen == 1U)
            {
                tRxData.u16HitIndex = 0U;
            }
            if ((pHrhList != NULL_PTR) && (tRxData.u16HitIndex < u8HrhListLen))
            {

#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
                /* If the L-PDU callout returns FALSE, the L-PDU shall not be processed any further.
                 * [SWS_Can_00443][SWS_Can_00444]*/

                if ((boolean)TRUE ==
                    CanLPduReceiveCalloutFunction((uint8)pHrhList[tRxData.u16HitIndex],
                                                  tRxData.mbMessageId,
                                                  tRxData.u8DataLength,
                                                  tRxData.aData))
                {
#endif
                    Can_AB_CanIf_RxIndication(u8ControllerId, pHrhList[tRxData.u16HitIndex], tRxData);
#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
                }
#endif
            }
            u8BrwMbIndex++;
            /* Processing all available received MBs in FIFO until FIFO is empty or the number of
             * while loop reaches to the FLEXCAN_FIFO_LOOP_TIMES times of the FIFO's depth */
            /* Get the content of IFLAG register for which corresponds this MB. */
        }
        while (((Can_Hw_GetERFSR(u32CanAddr) & FLEXCAN_ERFDA_MASK_U32) != 0U) &&
               (u8BrwMbIndex < (FLEXCAN_FIFO_LOOP_TIMES * FLEXCAN_ENHANCED_FIFO_DEPTH)));
    }
    if (FLEXCAN_ERFOVF_MASK_U32 == (FLEXCAN_ERFOVF_MASK_U32 & u32TempFlag))
    {
        /* Call the handling routine for Overflow fifo event. */
        if (NULL_PTR != pCanControlerDescriptor->Can_EnhancedRxFifoOverflowNotification)
        {
            pCanControlerDescriptor->Can_EnhancedRxFifoOverflowNotification();
        }
        /* Clear the interrupt flag - w1c. */
        Can_Hw_SetERFSR(u32CanAddr, FLEXCAN_ERFOVF_MASK_U32);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_DATALOST);
#endif
    }

    if (FLEXCAN_ERFWMI_MASK_U32 == (FLEXCAN_ERFWMI_MASK_U32 & u32TempFlag))
    {
        /* Call Rx FIFO warning Notification. */

        if (NULL_PTR != pCanControlerDescriptor->Can_EnhancedRxFifoWarningNotification)
        {
            pCanControlerDescriptor->Can_EnhancedRxFifoWarningNotification();
        }
        /* Clear the interrupt flag - w1c. */
        Can_Hw_SetERFSR(u32CanAddr, FLEXCAN_ERFWMI_MASK_U32);
    }
}
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

/*================================================================================================*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

LOCAL_INLINE void Can_LL_ProcessRxLegacyFifo(const uint8 u8ControllerId, uint32 u32CanAddr)
{
    CanHw_Message tRxData;

    const Can_ControlerInstanceType *pCanControlerDescriptor;
    /* Index for browsing the available Rx MBs in FIFO's memory. [SWDESG_CAN_160]*/
    uint8         u8BrwMbIndex = 0U;
    uint8         u8HrhListLen;
    const uint16 *pHrhList;
    uint32        u32MbAddr;
    uint32        u32IflagReg;

    pCanControlerDescriptor = &(
        s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

    u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);

    /* ********************* Phase1 ********************* */
    /* Check if "mbindex" corresponds to flags for Int Fifo status: Overflow or Warning.
                If Fifo is disabled, then current flags are normal MB interrupt bits. */
    if (FLEXCAN_FIFOOVERFLOW_INT_MASK_U32 == (FLEXCAN_FIFOOVERFLOW_INT_MASK_U32 & u32IflagReg))
    {
        /* Call the handling routine for Overflow fifo event. */
        if (NULL_PTR != pCanControlerDescriptor->Can_LegacyRxFifoOverflowNotification)
        {
            pCanControlerDescriptor->Can_LegacyRxFifoOverflowNotification();
        }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_DATALOST);
#endif

        /*Clear the interrupt status flag for FIFO Overflow*/
        Can_Hw_ClrLegacyFifoOverFlowIFlag(u32CanAddr);
    }

    if (FLEXCAN_FIFOWARNING_INT_MASK_U32 == (FLEXCAN_FIFOWARNING_INT_MASK_U32 & u32IflagReg))
    {
        /* Call Rx FIFO warning Notification. */

        if (NULL_PTR != pCanControlerDescriptor->Can_LegacyRxFifoWarningNotification)
        {
            pCanControlerDescriptor->Can_LegacyRxFifoWarningNotification();
        }

        /*Clear the interrupt status flag for FIFO warning */
        Can_Hw_ClrLegacyFifoWarningIFlag(u32CanAddr);
    }

    if (FLEXCAN_FIFOAVAILABLE_INT_MASK_U32 == (FLEXCAN_FIFOAVAILABLE_INT_MASK_U32 & u32IflagReg))
    {
        u32MbAddr = (uint32)(u32CanAddr + FLEXCAN_LEGACY_FIFO_OFFSET_U32);

        pHrhList     = pCanControlerDescriptor->pFifoHrhList;
        u8HrhListLen = pCanControlerDescriptor->u8FifoHrhListLen;
        do
        {
            MCAL_FAULT_INJECTION_POINT(CAN_FIP_3_CHANGE_LENGTH_FIELD);
            /* ********************* Phase2 ********************* */

            if (E_OK == Can_Hw_GetLegacyMbMsg(u32CanAddr, u32MbAddr, &tRxData))
            {
                /* Clear the MB flag - w1c. */
                Can_Hw_SetMBIFlag(u32CanAddr, FLEXCAN_FIFOFRAME_INT_INDEX_U8);
            }
            if (u8HrhListLen == 1U)
            {
                tRxData.u16HitIndex = 0U;
            }
            if ((pHrhList != NULL_PTR) && (tRxData.u16HitIndex < u8HrhListLen))
            {
#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
                /* If the L-PDU callout returns FALSE, the L-PDU shall not be processed any further.
                 * [SWS_Can_00443][SWS_Can_00444]*/

                if ((boolean)TRUE ==
                    CanLPduReceiveCalloutFunction((uint8)pHrhList[tRxData.u16HitIndex],
                                                  tRxData.mbMessageId,
                                                  tRxData.u8DataLength,
                                                  tRxData.aData))
                {
#endif

                    Can_AB_CanIf_RxIndication(u8ControllerId, pHrhList[tRxData.u16HitIndex], tRxData);

#if (CAN_LPDU_NOTIFICATION_ENABLE == STD_ON)
                }
#endif
            }
            u8BrwMbIndex++;

            /* Processing all available received MBs in FIFO until FIFO is empty or the number of
             * while loop reaches to the FLEXCAN_FIFO_LOOP_TIMES times of the FIFO's depth */
            /* Get the content of IFLAG register for which corresponds this MB. */

            u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);
        }
        while ((FLEXCAN_FIFOAVAILABLE_INT_MASK_U32 ==
                (FLEXCAN_FIFOAVAILABLE_INT_MASK_U32 & u32IflagReg)) &&
               ((FLEXCAN_FIFO_LOOP_TIMES * FLEXCAN_LEGACY_FIFO_DEPTH) > u8BrwMbIndex));
    }
}
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/*================================================================================================*/
CAN_TEXT_SECTION static Std_ReturnType Can_LL_GotoFreezeMode(uint32 u32CanAddr)
{

    /* Variable for return status. [SWDESG_CAN_161]*/
    Std_ReturnType eReturnValue = (Std_ReturnType)E_NOT_OK;
    /* Timeout counter. */
    uint32 u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue, u32ElapsedTime;
#endif
    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03();
    /* Go to Freeze mode through setting both CAN_MCR[FRZ] and CAN_MCR[HALT] to 1 */
    Can_Hw_SetFreezeRequest(u32CanAddr);

    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03();

    /* Check whether the controller is in Low power mode (CAN_MCR[MDIS] = 1 - Module Disable).
     * If it is, clear it to 0 to enable the module*/
    if (E_OK == Can_Hw_CheckModuleDisable(u32CanAddr))
    {
        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03();
        /* Clear CAN_MCR[MDIS] to enable Can module. */

        Can_Hw_EnableModule(u32CanAddr);

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03();
    }

    /* Poll the MCR register until CAN_MCR[FRZACK] (Freeze Mode Acknowledge) is set to 1 or timeout
     * is reached */
    u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

    (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif

    while ((E_NOT_OK == Can_Hw_CheckFreezeMode(u32CanAddr)) &&
           (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
    {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
        u32TotalElapsedTime++;
#else

        (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue, &u32ElapsedTime);
        u32TotalElapsedTime += u32ElapsedTime;
#endif
    }

    /* If the timeout is reached, then request a Soft Reset */
    if (u32TotalElapsedTime >= g_u32CanHwTicksDelayDuration)
    {
        /* Set CAN_MCR[SOFTRST] to 1 for a Soft Reset request */
        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03();
        /* Execute controller Reset. */
        Can_Hw_RequestSoftReset(u32CanAddr);
        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03();

        u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

        (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
        while ((E_NOT_OK == Can_Hw_CheckResetDone(u32CanAddr)) &&
               (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
        {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
            u32TotalElapsedTime++;
#else

            (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                  &u32CurrentValue,
                                  &u32ElapsedTime);
            u32TotalElapsedTime += u32ElapsedTime;
#endif
        }

        if (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration)
        {
            /* Re-configure MCR_SUPV bit because this bis is reset by Soft reset */
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03();

            CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_SUPV_U32);
            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_03();

            eReturnValue = (Std_ReturnType)E_OK;
        }
        else
        {
            eReturnValue = (Std_ReturnType)E_NOT_OK;
        }
        /* Else if the timeout is reached -> return E_NOT_OK */
        /* else {eReturnValue = (Std_ReturnType)E_NOT_OK;} */
    }
    else
    {
        eReturnValue = (Std_ReturnType)E_OK;
    }

    return (eReturnValue);
}

/*================================================================================================*/
CAN_TEXT_SECTION static uint8 Can_LL_GetRxErrorCounter(uint32 u32CanAddr)
{
    return Can_Hw_GetRxErrorCounter(u32CanAddr); /*[SWDESG_CAN_162]*/
}

/*================================================================================================*/
CAN_TEXT_SECTION static uint8 Can_LL_GetTxErrorCounter(uint32 u32CanAddr)
{
    return Can_Hw_GetTxErrorCounter(u32CanAddr); /*[SWDESG_CAN_163]*/
}

/*================================================================================================*/
CAN_TEXT_SECTION static Std_ReturnType Can_LL_SellectClockSource(uint8  u8ControllerId,
                                                                 uint32 u32CanAddr)
{
    /* Variable for return status. [SWDESG_CAN_164]*/
    Std_ReturnType eReturnValue            = (Std_ReturnType)E_NOT_OK;
    uint32         u32ValueControlRegister = 0U;
    uint32         u32TotalElapsedTime     = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue, u32ElapsedTime;
#endif

    /* Disable module to configure clock source (if it is supported)*/
    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09();

    Can_Hw_DisableModule(u32CanAddr);

    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09();
    /* Load local time-out variable with configured time-out value*/
    u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
    /* After controller disable, wait until low power mode acknowledgment bit to set*/
    while ((E_NOT_OK == Can_Hw_CheckLowPowerMode(u32CanAddr)) &&
           (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
    {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
        u32TotalElapsedTime++;
#else

        (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue, &u32ElapsedTime);
        u32TotalElapsedTime += u32ElapsedTime;
#endif
    }

    if (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration)
    {

        u32ValueControlRegister =
            s_pCanHal_pConfigCurrent->tHwCfgContainer.pControllerInstances[u8ControllerId].u32ControlReg;

        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09();

        if (0U == (u32ValueControlRegister & FLEXCAN_CTRL_CLKSRC_MASK_U32))
        {
            Can_Hw_SelectFunctionClock(u32CanAddr);
        }
        else
        {
            Can_Hw_SelectInterfaceClock(u32CanAddr);
        }

        Can_Hw_EnableModule(u32CanAddr);

        /* Load local time-out variable with configured time-out value*/
        u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
        (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
        /* After controller enable, wait until low power mode acknowledgment bit to clear */
        while ((E_OK == Can_Hw_CheckLowPowerMode(u32CanAddr)) &&
               (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
        {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
            u32TotalElapsedTime++;
#else

            (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                  &u32CurrentValue,
                                  &u32ElapsedTime);
            u32TotalElapsedTime += u32ElapsedTime;
#endif
        }

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09();

        eReturnValue = (Std_ReturnType)E_OK;
    }

    return (eReturnValue);
}

/*================================================================================================*/
CAN_TEXT_SECTION static Std_ReturnType Can_LL_ResetController(uint8 u8ControllerId, uint32 u32CanAddr)
{

    /* Variable for return status. [SWDESG_CAN_165]*/
    Std_ReturnType eReturnValue = (Std_ReturnType)E_NOT_OK;
    /* Timeout counter. */
    uint32 u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue, u32ElapsedTime;
#endif

    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04();
    /* Execute controller Reset. */
    Can_Hw_RequestSoftReset(u32CanAddr);
    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_04();

    /* Wait the Reset end off. */
    u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

    (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif

    while ((E_NOT_OK == Can_Hw_CheckResetDone(u32CanAddr)) &&
           (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
    {
/* MCR[SOFT_RST] still set -> reset in progress. */
#if CAN_TIMEOUT_AS_LOOP == STD_ON
        u32TotalElapsedTime++;
#else

        (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue, &u32ElapsedTime);
        u32TotalElapsedTime += u32ElapsedTime;
#endif
    }

    if (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration)
    {
        Can_Hw_SetDefaultRegs(u32CanAddr, Can_Hal_CheckCanFdSupport(u8ControllerId));
        eReturnValue = (Std_ReturnType)E_OK;
    }

    return (eReturnValue);
}

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_LL_InitBaudrate(const uint32 u32CanAddr,
                                                 const uint8  u8ControllerId,
                                                 const uint8  u8BaudrateIndex)
{
    /* Local copy of pointer to the controller descriptor. [SWDESG_CAN_166]*/
    const Can_ControlerInstanceType *pCanControlerDescriptor = NULL_PTR;
    uint16                           u16Prescaler            = 0U;
    uint32                           u32ValueControlRegister = 0U;

    uint32 u32ValueEprsRegister  = 0U;
    uint32 u32ValueEncbtRegister = 0U;

    /* Local copy of pointer to the controller descriptor. */
    pCanControlerDescriptor = &(
        s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

    u16Prescaler = pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].u16CtrlPrescaler;

    u32ValueControlRegister =
        s_pCanHal_pConfigCurrent->tHwCfgContainer.pControllerInstances[u8ControllerId].u32ControlReg;
    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

    Can_Hw_SetBTE(u32CanAddr);
    Can_Hw_SetCtrl(u32CanAddr, u32ValueControlRegister);

    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();

#if (CAN_FD_MODE_ENABLE == STD_ON)
    /* The configuration for Message Buffer Data Size (MBDS)*/
    uint16 u16FdPrescaler         = 0U;
    uint32 u32ValueFdEprsRegister = 0U;
    uint32 u32ValueEdcbtRegister  = 0U;
    u16FdPrescaler = (uint16)(pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex]
                                  .ControllerFD.u32CanFdPreSeg);
    if ((uint32)(FLEXCAN_MCR_FDEN_U32) ==
        (pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].ControllerFD.u32CanFdEN))
    {
        /* Init ENCBT register */
        u32ValueEncbtRegister =
            pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].u32EncbtReg;
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: shift is revert */
        u32ValueEprsRegister = ((uint32)u16Prescaler << FLEXCAN_EPRS_ENPRESDIV_OFFSET_U8);
        /* PRQA S 2985 -- */

        Can_Hw_SetCBTValue(u32CanAddr, 1UL << 31);
        Can_Hw_SetEPRS(u32CanAddr, u32ValueEprsRegister);
        Can_Hw_SetENCBT(u32CanAddr, u32ValueEncbtRegister);

        Can_Hw_SetFDMBLength(u8ControllerId, u32CanAddr, pCanControlerDescriptor->u32MBBlockSize);
        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();
        /* Enable FD mode */
        Can_Hw_EnableFDMode(u32CanAddr);

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();

        if (FLEXCAN_FDCTRL_FDRATE_U32 ==
            (pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex]
                 .ControllerFD.u32CanControllerTxBRS))
        {
            Can_Hw_EnableBRS(u32CanAddr);

            u32ValueEdcbtRegister = pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex]
                                        .ControllerFD.u32CanFdEDCbtReg;
            u32ValueFdEprsRegister = ((uint32)u16FdPrescaler << FLEXCAN_EPRS_EDPRESDIV_OFFSET_U8);

            Can_Hw_SetFDEPRS(u32CanAddr, u32ValueFdEprsRegister);
            Can_Hw_SetEDCBT(u32CanAddr, u32ValueEdcbtRegister);

            u32ValueControlRegister = (pCanControlerDescriptor
                                           ->pControllerBaudCfgsPtr[u8BaudrateIndex]
                                           .ControllerFD.u32CanControllerTDCOFF)
                                      << FLEXCAN_ETDC_ETDCOFF_OFFSET_U8;

            if ((uint32)0U != u32ValueControlRegister)
            {
                Can_Hw_EnableETDC(u32CanAddr);

                Can_Hw_SetETDC(u32CanAddr, u32ValueControlRegister);
            }
            else
            {
                Can_Hw_DisableETDC(u32CanAddr);
            }
        }
        else
        {
            Can_Hw_DisableBRS(u32CanAddr);
        }

#if ((CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || \
     (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON))
        Can_Hw_SetFDCTRL2(u32CanAddr,
                          pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex]
                              .ControllerFD.u32CanFdCTRL2Reg);

#endif
    }
    else
    {
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */

        u32ValueEncbtRegister =
            pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].u32EncbtReg;
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: shift is revert */
        u32ValueEprsRegister = (uint32)(((uint32)u16Prescaler) << FLEXCAN_EPRS_ENPRESDIV_OFFSET_U8);
        /* PRQA S 2985 -- */

        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

        Can_Hw_SetEPRS(u32CanAddr, u32ValueEprsRegister);
        Can_Hw_SetENCBT(u32CanAddr, u32ValueEncbtRegister);

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();
#if (CAN_FD_MODE_ENABLE == STD_ON)
    }
#endif
}

#if (CAN_BUSOFFPOLL_SUPPORTED == STD_ON)
/**
 * @brief Check Bus off status
 *
 * @param u8ControllerId Controller id
 * @return E_OK means bus off appeared
 */
CAN_TEXT_SECTION static Std_ReturnType Can_LL_CheckBusOff(uint8 u8ControllerId)
{
    /* Return value. [SWDESG_CAN_167]*/
    uint8 eReturnValue = (uint8)E_NOT_OK;
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    eReturnValue = Can_Hw_ChkBusOffStatus(u32CanAddr);

    return (eReturnValue);
}
#endif /* #if (CAN_BUSOFFPOLL_SUPPORTED == STD_ON) */
/* ============================================================================================== */
/* ======================================= Middle Level Driver ================================== */
/* ============================================================================================== */

/*================================================================================================*/

#if (CAN_DEV_ERROR_DETECT == STD_ON)

/*================================================================================================*/
/* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 Performing pointer arithmetic.
 * Reason: The buffer address must increased with offset */
LOCAL_INLINE Can_ReturnType Can_ML_HardwareTransmitHandleCheck(const Can_PduType *PduInfo,
                                                               uint16             u16HohIndex,
                                                               boolean            bEnabledFD)
{
    Can_ReturnType eReturnValue = CAN_OK;
#if (CAN_FD_MODE_ENABLE == STD_ON)
    /* Pointer to the MB container structure. [SWDESG_CAN_168]*/
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;

    pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);

    /* Report error if length > 8 bytes. [SWS_Can_00218][SWDESG_CAN_077]*/

    if (((PduInfo->length) >
         ((pCanMbConfigContainer->pMsgBufCfgsPtr) + u16HohIndex)->u8MBPayloadLength) ||
        (((boolean)FALSE == bEnabledFD) && ((PduInfo->length) > (uint8)8U)) ||
        (((((uint32)PduInfo->id) & (uint32)CAN_FD_ID_DESCRIPTOR) != CAN_FD_ID_DESCRIPTOR) &&
         ((PduInfo->length) > (uint8)8U)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_WRITE, (uint8)CAN_E_PARAM_DATA_LENGTH);
        eReturnValue = CAN_NOT_OK;
    }
#else  /* if(CAN_FD_MODE_ENABLE == STD_OFF) */
    if ((PduInfo->length) > 8U)
    {
        Can_ReportDetError((uint8)CAN_DET_SID_WRITE, (uint8)CAN_E_PARAM_DATA_LENGTH);
        eReturnValue = CAN_NOT_OK;
    }
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */

    (void)bEnabledFD;  /* Prevent compiler warning when CAN_FD is disabled */
    (void)u16HohIndex; /* Prevent compiler warning when CAN_FD is disabled */
    return eReturnValue;
}
/* PRQA S 488 -- */
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

/*================================================================================================*/
CAN_TEXT_SECTION static void Can_ML_InitReceiveMBs(uint8 u8ControllerId, uint32 u32CanAddr)
{

    /* Pointer to the MB container structure. [SWDESG_CAN_169]*/
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;
    /* Variable for indexing all the MBs fron hardware unit chain (all controllers). */
    uint16 u16HohIndex = 0U;
    /* ID of current MB. */
    uint32 mbMessageId = 0U;
    /* Temporary register value. */
    uint32 u32MbConfig = 0U;
    /* Variable for indexing the MBs inside a single controller. */
    uint8 u8MbIndex = 0U;

    uint32 u32TempValue = 0U;
    uint32 u32MbAddr;

#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
    /* The Flag prevent to set value to Global Mask many time */
    uint8 u8RxglobalMskFlag = 0U;
#endif

    pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);

    /* Parse all MBs that are of type RECEIVE from the chain list, but process only the MBs for
     * controller transmitted as parameter in this function. */
    for (u16HohIndex = 0U; u16HohIndex < (uint16)s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex;
         u16HohIndex++)
    {
        /* u16HohIndex variable is incrementing based of existing HOH for MBs. */
        if (u8ControllerId == ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8ControllerId))
        {
            u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
            /* Skip the MB configuration if FIFO is enabled and this is the FIRST RX MB configured . */
            if ((CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 !=
                 (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                  CAN_CONTROLLER_CFG_LEGACY_FIFO_U32)) ||
                (u8MbIndex != (uint8)0U))
            {
#endif /* CAN_LEGACY_RXFIFO_ENABLE == STD_ON */
#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
                /* Check if BCC support is enabled in configuration */
                if (CAN_CONTROLLER_CFG_BCC_EN_U32 ==
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_BCC_EN_U32))
                {
                    Can_LL_InitRxGlobalMask(u16HohIndex, u32CanAddr, u8RxglobalMskFlag);
                    u8RxglobalMskFlag++;
                }
                else
                {
#endif /* CAN_BCC_SUPPORT_ENABLE == STD_ON */

#if (CAN_EXTENDEDID == STD_ON)
                    if (CAN_STANDARD == ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].eIdType))
                    {
#endif /* (CAN_EXTENDEDID == STD_ON) */

                        if (CAN_MAXMASKCOUNT !=
                            ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u16IdMaskIndex))
                        {
                            u32TempValue =
                                (uint32)((uint32)(s_pCanHal_pConfigCurrent->pFilterMasks)
                                             [(pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u16IdMaskIndex]
                                         << 18U);
                        }
                        else
                        {
                            u32TempValue = (uint32)(FLEXCAN_NO_MASK_U32);
                        }
#if (CAN_EXTENDEDID == STD_ON)
                    }
                    else
                    {
                        if (CAN_MAXMASKCOUNT !=
                            ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u16IdMaskIndex))
                        {
                            u32TempValue = (uint32)((
                                s_pCanHal_pConfigCurrent
                                    ->pFilterMasks)[(pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex]
                                                        .u16IdMaskIndex]);
                        }
                        else
                        {
                            u32TempValue = (uint32)(FLEXCAN_NO_MASK_U32);
                        }
                    }
#endif /* (CAN_EXTENDEDID == STD_ON) */

                    Can_Hw_InitRxInvidualMask(u32CanAddr, u8MbIndex, u32TempValue);

#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
                }
#endif /* CAN_BCC_SUPPORT_ENABLE == STD_ON */

                /* Get the ID of the current MB. */
                mbMessageId =
                    (uint32)((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].mbMessageId);

                /* Clear variable for every MB. */
                u32MbConfig = (uint32)0U;

#if (CAN_EXTENDEDID == STD_ON)

                if (CAN_STANDARD == ((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].eIdType))
                {
#endif /* (CAN_EXTENDEDID == STD_ON) */
                    /* Copy the Message ID (serves as acceptance filter for Rx MBs). For Standard
                     * type, ID is placed on bits 28:18 on ID Reg of the MB structure. */
                    mbMessageId <<= FLEXCAN_STANDARD_ID_SHIFT_U32;
#if (CAN_EXTENDEDID == STD_ON)
                }
                else
                {
                    /* Set the IDE bit if the ID type is EXTENDED or MIXED. */
                    u32MbConfig |= (FLEXCAN_MBCS_IDE_U32 | FLEXCAN_MBCS_SRR_U32);
                    /* For EXTENDED MB type the ID is placed starting from bits 0 ( unlike STANDARD
                     * type when is placed starting to bit 18). */
                }
#endif /* (CAN_EXTENDEDID == STD_ON) */

                /* Enable the MB as a Rx object. MB is used for Rx & Mark the buffer as empty. */
                u32MbConfig |= (FLEXCAN_MBCS_CODERXEMPTY_U32);
                u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                Can_Hw_SetMBConfig(u32MbAddr, u32MbConfig);
                /* Copy the Message ID (serves as acceptance filter for Rx MBs). */
                Can_Hw_InitReceiveMBs(u32MbAddr, mbMessageId);

#if (CAN_RXINT_SUPPORTED == STD_ON)
                /* Save the mask bit from IMASK register for this MB used by
                 * Can_EnableControllerInterrupts() API. */
                if (E_OK == Can_Hw_CheckRxInterrupt(u8ControllerId))
                {
                    if (E_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                    {
                        Can_Hw_SetRxLocalInterrupt(u8ControllerId, 0U, u8MbIndex);
                    }
                }
#endif
#if (CAN_RXPOLL_SUPPORTED == STD_ON)
                if (E_OK == Can_Hw_CheckRxPolling(u8ControllerId))
                {
                    if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                    {
                        Can_Hw_SetRxLocalPolling(u8ControllerId, u8MbIndex);
                    }
                }
#endif
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
            }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        }
    }
}

#if ((CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) || (CAN_TXPOLL_SUPPORTED == STD_ON))

/**
 * @brief Can Middle level for Transmit
 *
 * @param u32CanAddr  CAN Address
 * @param u16HohIndex Logical hoh in EB
 * @param u8MbIndex Physical MB index
 * @param u32MbAddr MB address
 */
LOCAL_INLINE void Can_ML_ProcessTx(uint32       u32CanAddr,
                                   const uint16 u16HohIndex,
                                   const uint8  u8MbIndex,
                                   uint32       u32MbAddr)
{
    if (Can_LL_ProcessTx(u32CanAddr, u8MbIndex, u32MbAddr) == TRUE)
    {
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        /* check if it is abort flag [SWDESG_CAN_170]*/
        if (0U == s_aCanHal_TxAbortFlag[g_aCanHwUsedHohTable[u16HohIndex].u32HohId - CAN_HTH_START_ID])
        {
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */
            CanIf_TxConfirmation(g_aCanHwUsedHohTable[u16HohIndex].u16TxHandler); /*[SWS_Can_00016]*/
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        }
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */
    }
} /* Can_ML_ProcessTx */
#endif

/*================================================================================================*/
CAN_TEXT_SECTION static Can_ReturnType Can_ML_SetControllerToStopMode(
    uint8   u8ControllerId,
    boolean canif_notification_required)
{
    /* Variable for return status. [SWDESG_CAN_171]*/
    Can_ReturnType eReturnValue = CAN_NOT_OK;
    uint16         u16HohIndex  = 0U;
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;
    /* Temporary variable for MB config register. */
    uint32 u32MbConfig = 0U;
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
    /*Temporary variable verify Rx FIFO is enabled or no*/
    boolean bFifoMB = (boolean)FALSE;
#endif
    /* Timeout counter. */
    uint32 u32TotalElapsedTime = 0U;
    uint32 u32MbAddr;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue = 0U;
    TickType u32ElapsedTime  = 0U;
#endif

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    /* The Can driver shall not create a development error if the CanIf requests a transision to a
     * state that was already reached. */
    if (CAN_CS_STOPPED == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
    {
        /* If the controller is already in STOP state, return CAN_OK. */
        eReturnValue = CAN_OK;
    }
    else
    {
        /* Valid transitions to Stop are only from Start and Wakeup.  [SWDESG_CAN_037]*/
        if (CAN_CS_STARTED == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
        {
            /*
             * The function Can_SetControllerMode(CAN_T_STOP) shall set the bits inside the CAN
             * hardware such that the CAN controller stops participating on the network.
             */
            if ((Std_ReturnType)E_OK == Can_LL_GotoFreezeMode(u32CanAddr))
            {
                /* Check if Software BusOff Recovery is enabled. [SWS_Can_00274]*/
                if (CAN_CONTROLLER_CFG_BUSOFFSWREC_U32 ==
                    (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
                     CAN_CONTROLLER_CFG_BUSOFFSWREC_U32))
                {
                    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06();

                    Can_Hw_SWRecoverFromBOFF(u32CanAddr);

                    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06();
                }
/*if Rx FIFO is enabled.*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

                if (CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 ==
                    ((g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions) &
                     CAN_CONTROLLER_CFG_LEGACY_FIFO_U32))
                {
                    SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06();

                    Can_Hw_ClearFifoOperation(u32CanAddr);

                    SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06();
                    bFifoMB = (boolean)TRUE;
                }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
                /* Loop through all MBs. -> Cancel pending messages. */
                for (u16HohIndex = 0U; u16HohIndex < CAN_MAXMBCOUNT_0; u16HohIndex++)
                {

                    if (u8ControllerId ==
                        ((s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr)[u16HohIndex]
                             .u8ControllerId))
                    {
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
                        if ((boolean)FALSE == bFifoMB)
                        {
#endif
                            /*
                             * The function Can_SetControllerMode(CAN_T_STOP) shall cancel pending
                             * messages. After bus-off detection, the Can module shall cancel still
                             * pending messages without raising a cancellation notification.
                             * [SWS_Can_00282]
                             */
                            u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                            u32MbConfig = ((Can_Hw_GetMBConfig(u32MbAddr) & ~FLEXCAN_MBCS_CODE_U32) |
                                           FLEXCAN_MBCS_CODETX_U32);
                            Can_Hw_SetMBConfig(u32MbAddr, u32MbConfig);
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
                        }
                        else
                        {
                            bFifoMB = (boolean)FALSE;
                        }
#endif
                    }
                }
                /*
                 * The Can module shall track all individual enabling and disabling of  interrupts
                 * in other functions (i.e. Can_SetControllerMode), so that the correct interrupt
                 * enable state can be restored. When Freeze mode (or Autosar equiv Stop mode) need
                 * to not participate on network -> no interrupt is required to be enabled.
                 */
                /* Check if Ints are enabled by Can_EnableControllerInterrupts. */
                if (CAN_INTERRUPT_ENABLED ==
                    g_aCanHwUserdControllerTable[u8ControllerId].eInterruptMode)
                {
                    Can_LL_DisableInterrupts(u8ControllerId);
                }

                /* Disable module */
                SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06();

                /*[SWS_Can_00263]*/
                Can_Hw_DisableModule(u32CanAddr);

                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_06();
                /* Load local time-out variable with configured time-out value*/
                u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

                (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
                /* After controller disable, wait until low power mode acknowledgement bit to set.
                 * [SWDESG_CAN_038]*/
                while ((E_NOT_OK == Can_Hw_CheckLowPowerMode(u32CanAddr)) &&
                       (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
                {
/*[SWS_Can_00398][SWS_Can_00372][SWS_Can_00264][SWS_Can_00268]*/
#if CAN_TIMEOUT_AS_LOOP == STD_ON
                    u32TotalElapsedTime++;
#else
                    (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                          &u32CurrentValue,
                                          &u32ElapsedTime);
                    u32TotalElapsedTime += u32ElapsedTime;
#endif
                }
                /* Timeout is not reached -> controller has entered to Disable Mode */
                if (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration)
                {
                    eReturnValue = CAN_OK;
                }
            }
        }
        else
        {
            /* Transit Controller state SLEEP to STOPPED*/
            if (CAN_CS_SLEEP == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
            {
                /* When Wakeup is not supported the driver should do nothing and return E_OK. */
                eReturnValue = CAN_OK;
            }
            else
            {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
                Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE, (uint8)CAN_E_TRANSITION);
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            }
        }
    }

    if (CAN_OK == eReturnValue)
    {
        /* Set the Stop state to the controller. */
        g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STOPPED;
        /*Do not notify CanIf for bus off events*/
        if ((boolean)TRUE == canif_notification_required)
        {
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
            CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_STOPPED);
#else
            CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_STOPPED);
#endif
        }
    }

    return eReturnValue;
}

/*================================================================================================*/
CAN_TEXT_SECTION static Can_ReturnType Can_ML_SetControllerToSleepMode(uint8 u8ControllerId)
{
    /* Variable for return status. [SWDESG_CAN_172]*/
    Can_ReturnType eReturnValue = CAN_NOT_OK;

    /* The Can driver shall not create a development error if the CanIf requests a transision to a
     * state that was already reached. [SWS_Can_00411]*/
    if (CAN_CS_SLEEP == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
    {
        /* If the controller is already in SLEEP state, return CAN_OK. */
        eReturnValue = CAN_OK;
    }
    else
    {
        /* Valid transitions to Sleep state are only from Stop state. */
        if (CAN_CS_STOPPED == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
        {
            /*If the CAN HW does not support a sleep mode, the function
             * Can_SetControllerMode(CAN_T_SLEEP) shall set the CAN controller to the logical sleep
             * mode*/
            /* This logical sleep mode shall left only, if function
             * Can_SetControllerMode(CAN_T_WAKEUP) is called.*/
            /*[SWS_Can_00258][SWS_Can_00257][SWS_Can_00404][SWS_Can_00267][SWS_Can_00265][SWS_Can_00290][SWS_Can_00405]*/
            eReturnValue                                                  = CAN_OK;
            g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_SLEEP;
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
            CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_SLEEP);
#else
            CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_SLEEP);
#endif
        }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        else
        {
            Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE, (uint8)CAN_E_TRANSITION);
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    }
    return eReturnValue;
}

#if 0
/*================================================================================================*/
CAN_TEXT_SECTION static Can_ReturnType Can_ML_SetControllerToWakeupMode(uint8 u8ControllerId)
{
    /* Variable for return status. */
    Can_ReturnType  eReturnValue = CAN_NOT_OK;
    /* Controllers option for wakeup support(CAN_CONTROLLER_CFG_WAKSUP_EN_U32) is not necessarly to be checked because if this is not supported,
    the controller cannot be in state CAN_CS_SLEEP, so the Det_ReportError will be raised*/
    if (CAN_CS_STOPPED == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
    {
        /*CanIf shall be notified only for transitions.
         The function Can_Mainfunction_Mode shall call the function CanIf_ControllerModeIndication to
        notify the upper layer about a successful state transition of the CAN controller, in case the state transition
        was triggered by function Can_SetControllerMode
        */
        eReturnValue = CAN_OK;
    }
    else
    {
        /* Valid transitions to Wakeup state are only from Sleep state. */
        if (CAN_CS_SLEEP == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
        {
            /* When Wakeup is not supported the driver should do nothing and return CAN_OK. */
            eReturnValue = CAN_OK;
            g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STOPPED;
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
            CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_STOPPED);
#else
            CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_STOPPED);
#endif
        }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        else
        {
            Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE, (uint8)CAN_E_TRANSITION);
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    }

    return eReturnValue;
}
#endif

/* ============================================================================================== */
/* ======================================= High Level Driver ==================================== */
/* ============================================================================================== */

/*================================================================================================*/
CAN_TEXT_SECTION static Std_ReturnType Can_HL_InitController(uint8 u8ControllerId)
{
    /* Local copy of pointer to the controller descriptor. [SWDESG_CAN_173]*/
    const Can_ControlerInstanceType *pCanControlerDescriptor = NULL_PTR;
    /* controller hardware offset on chip. */
    uint8 u8CanIndex = 0U;
    /* Variable for return status. */
    Std_ReturnType eReturnValue = (Std_ReturnType)E_OK;
    /* Variable to hold the index of the current baudrate */
    uint8  u8BaudrateIndex         = 0U;
    uint32 u32ValueControlRegister = 0U;
    /* Max number of mb */
    uint8 u8MbMax = 0U;
    /* Timeout counter. */
    uint32 u32TotalElapsedTime = 0U;
    /* CANFD support. */
    boolean bEnCanFD = FALSE;
    uint32  u32CanAddr;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue = 0U;
    TickType u32ElapsedTime  = 0U;
#endif

    /* Fill the local pointer copy with address of the controller Descriptor.  */
    pCanControlerDescriptor = &(
        s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
    /* Get the index of the current baudrate */
    u8BaudrateIndex = g_aCanHwUserdControllerTable[u8ControllerId].u8CurrentBaudRateIndex;

    /* Go to Freeze mode to be able to enter Module Disable mode */
    eReturnValue = Can_LL_GotoFreezeMode(u32CanAddr);

    if ((Std_ReturnType)E_OK == eReturnValue)
    {
        /* Reset controller*/
        eReturnValue = Can_LL_ResetController(u8ControllerId, u32CanAddr);
    }

    if ((Std_ReturnType)E_OK == eReturnValue)
    {
        /* Selects the clock source to the CAN Protocol Engine (PE) to be either the peripheral
         * clock or the oscillator clock */
        eReturnValue = Can_LL_SellectClockSource(u8ControllerId, u32CanAddr);
    }

    if ((Std_ReturnType)E_OK == eReturnValue)
    {
        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

        Can_Hw_DisableSelfReceptionMode(u32CanAddr);

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();

        Can_LL_InitBaudrate(u32CanAddr, u8ControllerId, u8BaudrateIndex);

        /* Update the value of the CTRL2[TASD]] bit field */
        Can_Hw_SetTASD(u32CanAddr,
                       pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].u8TASD);

        /* Allow Write-Access To Memory, Write bit28 WRMFRZ in CTRL2 */
        Can_Hw_EnableWRMFRZ(u32CanAddr);

/* Initial all current CAN embedded RAM */
#if (CAN_FD_MODE_ENABLE == STD_ON)
        bEnCanFD =
            (FLEXCAN_MCR_FDEN_U32 ==
             pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex].ControllerFD.u32CanFdEN) ?
                TRUE :
                FALSE;
#endif
        Can_Hw_InitEmbeddedRam(u8CanIndex, u32CanAddr, bEnCanFD);

#if (CAN_MEMORY_ECC_SUPPORT == STD_ON)

        Can_Hw_DisableEcc(u32CanAddr);

#endif
        /* Init the Cancelled MB index with a precalculated value - out of range for every controller. */
        /* g_aCanHwUserdControllerTable[u8ControllerId].u16CancelMBIndex =
         * (Can_HwHandleType)CAN_MAXMB_SUPPORTED; */

#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
        /* Check if BCC support is enabled in configuration */
        if (CAN_CONTROLLER_CFG_BCC_EN_U32 !=
            (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
             CAN_CONTROLLER_CFG_BCC_EN_U32))
        {
#endif /* (CAN_BCC_SUPPORT_ENABLE == STD_ON) */
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();
            /* Enable individual MB filter masking. */
            Can_Hw_EnableIndividualMask(u32CanAddr);
            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();
#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)
        }
#endif /* (CAN_BCC_SUPPORT_ENABLE == STD_ON) */

        /* FlexCan uses local priority feature - extend the ID during the arbitration process with
         * PRIO field from MB reg. */
        if (CAN_CONTROLLER_CFG_LPRIO_EN_U32 ==
            (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions &
             CAN_CONTROLLER_CFG_LPRIO_EN_U32))
        {
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

            Can_Hw_EnableLocalPriority(u32CanAddr);

            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();
        }

        /* Loop Back Mode configuration. Clear also the MCR[SRCXDIS] to allow receiving frames
         * transmitted by itself. */
        u32ValueControlRegister =
            s_pCanHal_pConfigCurrent->tHwCfgContainer.pControllerInstances[u8ControllerId].u32ControlReg;
        if (FLEXCAN_CTRL_LPB_U32 == (u32ValueControlRegister & FLEXCAN_CTRL_LPB_U32))
        {
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

            Can_Hw_EnableSelfReceptionMode(u32CanAddr);

            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();
        }

        /* Stage1: init RxFifo ****************************************************************** */

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        Can_LL_InitRxLegacyFiFo(u8ControllerId, u32CanAddr);
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        Can_LL_InitRxEnhancedFiFo(u8ControllerId, u32CanAddr);
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

        /* Stage2: Init Rx and Tx MBs *********************************************************** */
        Can_ML_InitReceiveMBs(u8ControllerId, u32CanAddr);

        Can_LL_InitTransmitMBs(u8ControllerId, u32CanAddr);

        if (s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId].u8MaxMBCnt >
            0U)
        {

            u8MbMax = (uint8)(s_pCanHal_pConfigCurrent->tControllerContainer
                                  .pInstanceCfgsPtr[u8ControllerId]
                                  .u8MaxMBCnt -
                              1U);
        }
        else
        {
            u8MbMax = 0U;
        }
        /* Set the number of MBs configured for this controller (Rx + Tx MBs). */
        Can_Hw_SetMAXMBNumber(u32CanAddr, u8MbMax);

        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

        CAN_BIT_CLR_REG32(FLEXCAN_MCR(u32CanAddr), FLEXCAN_MCR_SUPV_U32);
        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        /* Abort Enable: Tx Cancelation supported and used for this controller. */
        Can_Hw_EnableAbortTransmit(u32CanAddr);
#endif /* (ERR_IPV_0015==STD_ON) */

        /* Pre-calculated MB INT masks (used in Can_EnableControllerInterrupts) - If events are set
           for polling mode these bits are not set. Clear all INTs flags  .. for MBs (w1c bits). */

        Can_Hw_SetIFlag1(u32CanAddr, (uint32)(FLEXCAN_32BITMASK_U32));

#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            Can_Hw_SetIFlag2(u32CanAddr, (uint32)(FLEXCAN_32BITMASK_U32));
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            Can_Hw_SetIFlag3(u32CanAddr, (uint32)(FLEXCAN_32BITMASK_U32));
        }
#endif

        /* Clear bits for Tx/Rx/BusOff/Err/(w1c bits). */
        Can_Hw_ClearErrorStatus(u32CanAddr, FLEXCAN_ESR_W1C_MASK_U32);

        /* Release the internal lock. Reading the Free Running Timer is not mandatory. If not
           executed the MB remains locked, unless the CPU reads the C/S word of another MB.*/

        /* read timestamp to clear buffer */
        Can_Hw_GetFreeTimer(u32CanAddr);

        /* Disable module to configure clock source (if it is supported)*/
        SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05();

        Can_Hw_DisableModule(u32CanAddr);

        SchM_Exit_Can_CAN_EXCLUSIVE_AREA_05();
        /* Load local time-out variable with configured time-out value*/
        u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

        (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
        /* After controller disable, wait until low power mode acknowledgment bit to set*/
        while ((E_NOT_OK == Can_Hw_CheckLowPowerMode(u32CanAddr)) &&
               (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration))
        {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
            u32TotalElapsedTime++;
#else
            (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                  &u32CurrentValue,
                                  &u32ElapsedTime);
            u32TotalElapsedTime += u32ElapsedTime;
#endif
        }

        if (u32TotalElapsedTime >= g_u32CanHwTicksDelayDuration)
        {
            eReturnValue = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            g_aCanHwUserdControllerTable[u8ControllerId].eControllerState =
                CAN_CS_STOPPED; /*[SWS_Can_00259][SWDESG_CAN_004]*/
        }
    } /* (eReturnValue == E_OK) */

    return eReturnValue;
}

CAN_TEXT_SECTION static Std_ReturnType Can_HL_DeInitController(uint8 u8ControllerId)
{
    /* controller hardware offset on chip. [SWDESG_CAN_174]*/
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;

    Std_ReturnType eReturnValue = E_NOT_OK;
#if (CAN_DEV_ERROR_DETECT == STD_ON)

    if (E_OK == Can_Hal_CheckControllerStarted(u8ControllerId))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_DEINIT, (uint8)CAN_E_TRANSITION); /*[SWDESG_CAN_020]*/
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        /* Get the hardware offset for this controller. */
        u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
        u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

        /* Go to Freeze mode to be able to enter Module Disable mode */
        eReturnValue = Can_LL_GotoFreezeMode(u32CanAddr);

        if ((Std_ReturnType)E_OK == eReturnValue)
        {
            /* Reset controller*/
            eReturnValue = Can_LL_ResetController(u8ControllerId, u32CanAddr);
        }

        if ((Std_ReturnType)E_OK == eReturnValue)
        {
            /* Set Controller state UNINIT [SWDESG_CAN_021][SWDESG_CAN_022]*/
            g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_UNINIT;
        }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    return eReturnValue;
}
/*================================================================================================*/
#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)

CAN_TEXT_SECTION static Std_ReturnType Can_LL_CheckWakeup(uint8 Controller)
{
    /* This function is created for compilation purposes */
    Can_ReturnType eReturnValue = (Can_ReturnType)CAN_NOT_OK;
    (void)Controller;
    return (eReturnValue);
}

CAN_TEXT_SECTION static Can_ReturnType Can_HL_CheckWakeup(uint8 Controller)
{
    /* E_NOT_OK is defined as (uint8)0x01 */
    Can_ReturnType eReturnValue = (Can_ReturnType)CAN_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if ((Controller >= CAN_MAXCONTROLLERCOUNT_0) ||
        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(Controller)))
    {

        Can_ReportDetError((uint8)CAN_DET_SID_CBK_CHECK_WAKEUP, (uint8)CAN_E_PARAM_CONTROLLER);
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
        if (CAN_CS_SLEEP == g_aCanHwUserdControllerTable[Controller].eControllerState)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This is a stub function,
            serving only as a placeholder */
            if ((Std_ReturnType)E_OK == Can_LL_CheckWakeup(Controller))
            {

                EcuM_SetWakeupEvent(s_pCanHal_pConfigCurrent->tHwCfgContainer
                                        .pControllerInstances[Controller]
                                        .u32ECUMWakeupSourceId);
                /* Controller is in WakeUp state. */
                eReturnValue = (Can_ReturnType)CAN_OK;
            }
            /* PRQA S 2985 -- */
        }
        else
        {
            eReturnValue = (Can_ReturnType)CAN_NOT_OK;
        }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eReturnValue);
}
#endif /* (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON) */
#endif

/*================================================================================================*/
CAN_TEXT_SECTION static Can_ReturnType Can_HL_SetControllerToStartMode(uint8 u8ControllerId)
{
    /* Variable for return status. [SWDESG_CAN_175]*/
    Can_ReturnType eReturnValue = CAN_NOT_OK;
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;
    /* Timeout counter. */
    uint32 u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF
    TickType u32CurrentValue, u32ElapsedTime;
#endif
    Std_ReturnType eRet;

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    /* Valid transitions to Start mode are only from Stop state. */
    if (CAN_CS_STOPPED == g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
    {
        /* Each time the CAN controller state machine is triggered with the state transition value
        CAN_T_START, the function Can_SetControllerMode shall re-initialize the CAN controller with
        the same controller configuration set previously used by functions Can_ChangeBaudrate or
        Can_Init. [SWS_Can_00261][SWS_Can_00384][SWDESG_CAN_034][SWDESG_CAN_035]*/
        if ((Std_ReturnType)E_OK == Can_HL_InitController(u8ControllerId))
        {
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13();

            Can_Hw_EnableModule(u32CanAddr);

            SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13();

            u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

            (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
            do
            {
#if CAN_TIMEOUT_AS_LOOP == STD_ON
                u32TotalElapsedTime++;
#else

                (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                      &u32CurrentValue,
                                      &u32ElapsedTime);
                u32TotalElapsedTime += u32ElapsedTime;
#endif
                eRet = Can_Hw_CheckLowPowerMode(u32CanAddr);
            }
            while ((u32TotalElapsedTime < g_u32CanHwTicksDelayDuration) && (E_OK == eRet));
            /* Exited from Disable Mode  (LPMACK = 0) */
            if (u32TotalElapsedTime < g_u32CanHwTicksDelayDuration)
            {
                uint32 u32TempVar;

                /* The function Can_SetControllerMode(CAN_T_START) shall set the hardware registers
                 * in a way that makes the CAN controller participating on the network. */
                SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13();

                Can_Hw_ClrFreezeRequest(u32CanAddr);

                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_13();

                /*
                The function Can_SetControllerMode shall enable interrupts that are needed in the
                new state. Enabling of CAN interrupts shall not be executed, when CAN interrupts
                have been disabled by function CAN_DisableControllerInterrupts.
                [SWS_Can_00196][SWS_Can_00197]
                 */

                if (CAN_INTERRUPT_ENABLED ==
                    g_aCanHwUserdControllerTable[u8ControllerId].eInterruptMode)
                {
                    Can_LL_EnableInterrupts(u8ControllerId);
                }
                /* The function Can_SetControllerMode(CAN_T_START) shall wait for limited time until
                 * the CAN controller is fully operational. Compare to . */
                u32TotalElapsedTime = 0U;
#if CAN_TIMEOUT_AS_LOOP == STD_OFF

                (void)GetCounterValue((CounterType)CAN_TIMEOUT_COUNTER_NAME, &u32CurrentValue);
#endif
                do
                {
/*[SWS_Can_00398][SWS_Can_00372][SWS_Can_00262][SWDESG_CAN_038] */
#if CAN_TIMEOUT_AS_LOOP == STD_ON
                    u32TotalElapsedTime++;
#else
                    (void)GetElapsedValue((CounterType)CAN_TIMEOUT_COUNTER_NAME,
                                          &u32CurrentValue,
                                          &u32ElapsedTime);
                    u32TotalElapsedTime += u32ElapsedTime;
#endif
                    u32TempVar = Can_Hw_GetMCRValue(u32CanAddr) &
                                 (FLEXCAN_MCR_FRZ_U32 | FLEXCAN_MCR_HALT_U32 | FLEXCAN_MCR_NOTRDY_U32);
                }
                while ((u32TotalElapsedTime < g_u32CanHwTicksDelayDuration) && (0x0U != u32TempVar));

                if ((uint32)0x0U == u32TempVar)
                {
                    /* Set the Start State. */
                    g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STARTED;
                    eReturnValue                                                  = CAN_OK;
                }
                else
                /* software timeout */
                {
                    eReturnValue = CAN_NOT_OK;
                }
            }
        }
    }
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    else
    {
        /*[SWS_Can_00409]*/
        Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE, (uint8)CAN_E_TRANSITION);
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    if (CAN_OK == eReturnValue)
    {
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
        CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_STARTED);
#else
        CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_STARTED);
#endif
    }

    return eReturnValue;
}

/*================================================================================================*/
CAN_TEXT_SECTION static Can_ReturnType Can_HL_SetControllerMode(uint8 u8ControllerId,
                                                                Can_ControllerStateType Transition,
                                                                boolean canif_notification_required)
{

    /* Variable for return status. [SWDESG_CAN_176]*/
    Can_ReturnType eReturnValue = CAN_NOT_OK;

    /*
      The function Can_SetControllerMode shall perform software triggered state transitions of the
      CAN controller State machine.
    */
    switch (Transition)
    {
        /* CAN_CS_STARTED -> CAN_CS_STOPPED. [SWDESG_CAN_042]*/
        /*
           The function Can_SetControllerMode(CAN_T_STOP) shall not call a cancellation notification.
        */
        case (CAN_CS_STOPPED):
            eReturnValue = Can_ML_SetControllerToStopMode(u8ControllerId,
                                                          canif_notification_required);
            break;

        /* CAN_CS_STOPPED -> CAN_CS_STARTED. */
        case (CAN_CS_STARTED):
            eReturnValue = Can_HL_SetControllerToStartMode(u8ControllerId);
            break;

        /* CAN_CS_STOPPED -> CAN_CS_SLEEP. [SWDESG_CAN_036][SWDESG_CAN_041]*/
        case (CAN_CS_SLEEP):
            eReturnValue = Can_ML_SetControllerToSleepMode(u8ControllerId);
            break;
        /* Unknown transition requested. */
        default:
/*
   If development error detection for the Can module is enabled: if an invalid transition has been
   requested, the function Can_SetControllerMode shall raise the error CAN_E_TRANSITION and return
   CAN_NOT_OK.
*/
#if (CAN_DEV_ERROR_DETECT == STD_ON)

            Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE,
                               (uint8)CAN_E_TRANSITION); /*[SWS_Can_00200]*/
#endif                                                   /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            break;

    } /* end switch */

    return (eReturnValue);
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/* ============================================================================================== */
/* ======================================= Global Api =========================================== */
/* ============================================================================================== */

/*================================================================================================*/

/* PRQA S 2877 ++ #Misra-C:2012 Dir-4.1 This loop will never be executed more than once.
 * Reason: this macro is changed when EB configured with more than one */
/**
 * @brief Initial All Can Controller and Message Buffer with current configuration. [SWDESG_CAN_125]
 *
 * @param pConfigCurrent Current Configuration generated by EB
 */
CAN_TEXT_SECTION void Can_Hal_Init(const Can_ConfigType *pConfigCurrent, uint8 u8CurrentCore)
{
    /* Index CAN controllers from configuration. */
    uint8 u8ControllerId = 0U;

    uint8  u8MBIndex   = 0U;
    uint16 u16HohIndex = 0U;

    /* Pointer to the MB container structure. */
    const Can_MBConfigContainerType         *pCanMbConfigContainer;
    const Can_ControllerConfigContainerType *pCanCtrlConfigContainer;
    const CanHal_ConfigType                 *pCanHwConfigContainer;

    /* Copy pointer to current Can Driver configuration. */
    s_pCanHal_pConfigCurrent = pConfigCurrent;

    pCanMbConfigContainer   = &(pConfigCurrent->tMBCfgContainer);
    pCanCtrlConfigContainer = &(pConfigCurrent->tControllerContainer);
    pCanHwConfigContainer   = &(pConfigCurrent->tHwCfgContainer);

    /* global variables are only initialed once
     * [SWS_Can_00250][SWS_Can_00053][SWS_Can_00407][SWS_Can_00056]*/
    if (0U == s_u8CanGlobalInited)
    {
        /* initial logic mb index */
        for (u16HohIndex = 0U; u16HohIndex < CAN_MAXMBCOUNT_0; u16HohIndex++)
        {
            g_aCanHwUsedHohTable[u16HohIndex].u8HwMbIndex =
                pCanMbConfigContainer->pMsgBufCfgsPtr[u16HohIndex].u8HWMBIndex;
            g_aCanHwUsedHohTable[u16HohIndex].u8ControllerId =
                pCanMbConfigContainer->pMsgBufCfgsPtr[u16HohIndex].u8ControllerId;
            g_aCanHwUsedHohTable[u16HohIndex].bTxGuard = FALSE;
            g_aCanHwUsedHohTable[u16HohIndex].u32MbOffset =
                (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u16MBOffsetAddr;
            g_aCanHwUsedHohTable[u16HohIndex].u32HohId =
                (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u32HWObjID;
            g_aCanHwUsedHohTable[u16HohIndex].u32HwObjMbIndex =
                (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u32HWObjIDArrayIndex;
            g_aCanHwUsedHohTable[u16HohIndex].bInterruptEn =
                pCanMbConfigContainer->pMsgBufCfgsPtr[u16HohIndex].bInterruptEn;
#if (CAN_FD_MODE_ENABLE == STD_ON)
            g_aCanHwUsedHohTable[u16HohIndex].u8FdPaddingValue =
                pCanMbConfigContainer->pMsgBufCfgsPtr[u16HohIndex].u8FdPaddingValue;
#endif
        }

        /* Init all global varibales/statuses for all controllers. */
        for (u8ControllerId = 0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
        {
            uint8 u8CanIndex = pCanHwConfigContainer->pControllerInstances[u8ControllerId].u8CanIndex;
            uint32 u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
            g_aCanHwUserdControllerTable[u8ControllerId].u8CanIndex = u8CanIndex;
            g_aCanHwUserdControllerTable[u8ControllerId].u32CanAddr = u32CanAddr;
            g_aCanHwUserdControllerTable[u8ControllerId].u8MbLength =
                (uint8)(pCanCtrlConfigContainer->pInstanceCfgsPtr[u8ControllerId].u32MBLentgh);
            g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums =
                pCanHwConfigContainer->pControllerInstances[u8ControllerId].u8NumberOfMB;
            /* Check if Can_CtrlCoresMappingPtr is valid to avoid null pointer dereference */
            if (NULL_PTR != pConfigCurrent->Can_CtrlCoresMappingPtr)
            {
                g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex =
                    (uint8)(pConfigCurrent->Can_CtrlCoresMappingPtr[u8ControllerId]);
            }
            else
            {
                /* Default to core 0 if Can_CtrlCoresMappingPtr is NULL */
                g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex = 0U;
            }
            g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions =
                pCanHwConfigContainer->pControllerInstances[u8ControllerId].u32Options;
            g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions =
                pCanCtrlConfigContainer->pInstanceCfgsPtr[u8ControllerId].u32Options;
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptMask[0]   = 0U;
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[0] = 0U;
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[0] = 0U;
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingRxMask[0]   = 0U;
            g_aCanHwUserdControllerTable[u8ControllerId].u32MBPollingTxMask[0]   = 0U;

            g_aCanHwUserdControllerTable[u8ControllerId].Can_ErrorNotification =
                pCanHwConfigContainer->pControllerInstances[u8ControllerId].Can_ErrorNotification;
#if (CAN_FD_MODE_ENABLE == STD_ON)
            g_aCanHwUserdControllerTable[u8ControllerId].Can_ErrorFDNotification =
                pCanHwConfigContainer->pControllerInstances[u8ControllerId].Can_ErrorFDNotification;
#endif /* CAN_FD_MODE_ENABLE == STD_ON */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
            g_aCanHwUserdControllerTable[u8ControllerId].bEnhancedFifoInterruptEn =
                pCanCtrlConfigContainer->pInstanceCfgsPtr[u8ControllerId].bEnhancedFifoInterruptEn;
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
            g_aCanHwUserdControllerTable[u8ControllerId].bLegacyFifoInterruptEn =
                pCanCtrlConfigContainer->pInstanceCfgsPtr[u8ControllerId].bLegacyFifoInterruptEn;
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        }
        s_u8CanGlobalInited = 1U;
    }

    Can_Hw_TimeInit();

    /* Init all global varibales/statuses for all controllers. */
    for (u8ControllerId = 0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif /* CAN_SUPPORT_MULTICORE */

            /* Init INT Disable nesting indicator. It is incremented after every call of
               Can_DisableControllerInterrupts(). The function Can_EnableControllerInterrupts() shall
               perform no action when Can_DisableControllerInterrupts() has not been called before. */
            g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel = (sint8)0;

            /* Set  interrupt mode status to interrupt enabled mode.
               This is needed in order to support the implementation of requirements and into
               Can_SetControllerMode API. */
            g_aCanHwUserdControllerTable[u8ControllerId].eInterruptMode = CAN_INTERRUPT_ENABLED;

            /* Set the controller state to STOP after power-up */
            g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STOPPED;

            /* Set the controller current baudrate index as default */
            g_aCanHwUserdControllerTable[u8ControllerId].u8CurrentBaudRateIndex =
                (uint8)(pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]
                            .u8DefaultBaudIndex);

#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* CAN_SUPPORT_MULTICORE */
    }
#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)
    /* Map tu16MBGlobalIndex (the index of HOH in the HOW array) into the u16MBMapping array*/
    for (u16HohIndex = 0U; u16HohIndex < CAN_MAXMBCOUNT_0; u16HohIndex++)
    {
        u8MBIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);

        u8ControllerId = (pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u8ControllerId;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif /* CAN_SUPPORT_MULTICORE */

            g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex[u8MBIndex] =
                (uint16)((pCanMbConfigContainer->pMsgBufCfgsPtr)[u16HohIndex].u32HWObjIDArrayIndex);

#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* CAN_SUPPORT_MULTICORE */
    }
#endif /* (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

    /* Loop through all Can controllers configured based CanControllerId parameter. */
    for (u8ControllerId = 0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition [SWDESG_CAN_006][SWDESG_CAN_007]*/
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif /* CAN_SUPPORT_MULTICORE */
            /* The initialization is skipped for the controllers that are not enabled.
             * [SWS_Can_00245][SWDESG_CAN_005]*/
            if (FLEXCAN_NULL_INDEX_U8 != Can_Hw_GetCanIndexFromControllerId(u8ControllerId))
            {
                (void)Can_HL_InitController(u8ControllerId);
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif /* CAN_SUPPORT_MULTICORE */
    }
}

/**
 * @brief This function de-initializes the module. [SWDESG_CAN_126]
 *
 */
CAN_TEXT_SECTION void Can_Hal_DeInit(uint8 u8CurrentCore)
{
    uint8 u8ControllerId;

    if (s_pCanHal_pConfigCurrent != NULL_PTR)
    {
        if (s_pCanHal_pConfigCurrent->tHwCfgContainer.pControllerInstances != NULL_PTR)
        {
            /* Loop through all Can controllers configured based CanControllerId parameter. */
            for (u8ControllerId = 0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
            {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                /* Check if the controller is mapped on current partition */
                if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
                {
#else
                (void)u8CurrentCore;
#endif
                    /* The initialization is skipped for the controllers that are not enabled. */
                    if (FLEXCAN_NULL_INDEX_U8 != Can_Hw_GetCanIndexFromControllerId(u8ControllerId))
                    {
                        (void)Can_HL_DeInitController(u8ControllerId);
                    }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                }
#endif
            }
        }
    }
}
/* PRQA S 2877 -- */

/**
 * @brief Check controller if it is started. [SWDESG_CAN_127]
 *
 * @param u8ControllerId Controller ID
 * @return E_OK means started
 */
CAN_TEXT_SECTION Std_ReturnType Can_Hal_CheckControllerStarted(uint8 u8ControllerId)
{
    Std_ReturnType eReturnValue;

    if (CAN_CS_STARTED != g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
    {
        eReturnValue = E_NOT_OK;
    }
    else
    {
        eReturnValue = E_OK;
    }
    return eReturnValue;
}

/**
 * @brief Set Controller Mode. [SWDESG_CAN_128]
 *
 * @param u8ControllerId Controller Id
 * @param Transition Transition value to request new CAN controller state
 * @param canif_notification_required if notify to CanIf
 * @return E_OK means set correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_SetControllerMode(uint8                   u8ControllerId,
                                                          Can_ControllerStateType Transition,
                                                          boolean canif_notification_required,
                                                          uint8   u8CurrentCore)
{
    /* Variable for return status. [SWDESG_CAN_040]*/
    Can_ReturnType eReturnValue = CAN_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    /* Controller ID must be within range and the selected Controller must be configured for use in
     * the config tool. */
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_Can_00199]*/
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            eReturnValue =
                Can_HL_SetControllerMode(u8ControllerId, Transition, canif_notification_required);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT==STD_ON)  */

    return (eReturnValue);
}

/**
 * @brief Disable Can Controller Interrupt. [SWDESG_CAN_129]
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_DisableControllerInterrupts(uint8 u8ControllerId, uint8 u8CurrentCore)
{

#if (CAN_DEV_ERROR_DETECT == STD_ON)

    /* The Controller ID must be within range and the selected Controller must be configured for use
     * in the config tool. */
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_DISABLE_CONTROLLER_INTERRUPTS,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_Can_00206][SWDESG_CAN_047]*/
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00();
            /*
               When Can_DisableControllerInterrupts has been called several times,
               Can_EnableControllerInterrupts must be called as many times before the interrupts are
               re-enabled. [SWDESG_CAN_048]
            */
            (g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel) =
                (sint8)(g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel + 1);

            /* If nesting level is zero or below zero; <0 needed for reentrancy. */
            /*
               The function Can_DisableControllerInterrupts shall disable all interrupts for this
               CAN controller only at the first call of this function.
            */
            if ((sint8)1 == g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel)
            {
                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00();
                /* Switch to disabled mode. [SWS_Can_00426][SWS_Can_00049]*/
                g_aCanHwUserdControllerTable[u8ControllerId].eInterruptMode = CAN_INTERRUPT_DISABLED;
                Can_LL_DisableInterrupts(u8ControllerId);
            }
            else
            {
                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00();
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}

/**
 * @brief Enable Can Controller Interrupt. [SWDESG_CAN_130]
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_EnableControllerInterrupts(uint8 u8ControllerId, uint8 u8CurrentCore)
{
    /* Variable that tells if disable ints was called at least once before. */
    uint8 u8DisCalledBefore = 0U;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    /* Controller ID must be within range and the selected Controller must be configured for use in
     * the config tool. */
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_ENABLE_CONTROLLER_INTERRUPTS,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_Can_00210][SWDESG_CAN_055]*/
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            /*
               When Can_DisableControllerInterrupts has been called several times,
               Can_EnableControllerInterrupts must be called as many times before the interrupts are
               re-enabled.
            */
            SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01();

            if (g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel > (sint8)0)
            {
                /* When s8IntDisableLevel is greater than 0  means Can_DisableControllerInterrupts
                 * was called at least once before this call of current function. */

                /* Decrement the nesting level. */
                (g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel) =
                    (sint8)(g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel - 1);

                u8DisCalledBefore = (uint8)0x1U;
            }

            /* Can_DisableControllerInterrupts and Can_EnableControllerInterrupts do not modify the
             * software flags. */

            /*
               The function Can_EnableControllerInterrupts shall perform no action when
               Can_DisableControllerInterrupts has not been called before. [SWS_Can_00208]
            */
            if (((sint8)0 == g_aCanHwUserdControllerTable[u8ControllerId].s8IntDisableLevel) &&
                ((uint8)0x1U == u8DisCalledBefore))
            {
                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01();
                /* Switch to enabled mode. [SWS_Can_00050]*/
                g_aCanHwUserdControllerTable[u8ControllerId].eInterruptMode = CAN_INTERRUPT_ENABLED;
                Can_LL_EnableInterrupts(u8ControllerId);
            }
            else
            {
                SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01();
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}

#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief This function checks if a wakeup has occurred for the given controller
 *
 * @param Controller Controller to be checked for a wakeup.
 * @return E_OK: API call has been accepted; E_NOT_OK: API call has not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_CheckWakeup(uint8 u8ControllerId, uint8 u8CurrentCore)
{
    Std_ReturnType eReturnValue = CAN_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_CBK_CHECK_WAKEUP, (uint8)CAN_E_PARAM_CONTROLLER);
    }
    else
    {
#endif
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            Can_HL_CheckWakeup(u8ControllerId);

#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return eReturnValue;
}
#endif
#endif

/**
 * @brief This service obtains the error state of the CAN controller. [SWDESG_CAN_132]
 *
 * @param u8ControllerId Controller to be checked for a wakeup.
 * @param ErrorStatePtr Pointer to a memory location, where the error state of the CAN controller
 * will be stored.
 * @return E_OK: Error state request has been accepted; E_NOT_OK: Error state request has not been
 * accepted.
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_GetControllerErrorState(uint8               u8ControllerId,
                                                               Can_ErrorStateType *ErrorStatePtr,
                                                               uint8               u8CurrentCore)
{
    uint8          u8CanIndex;
    uint32         u32CanAddr;
    Std_ReturnType eReturnValue = E_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_ERROR_STATE,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_Can_91006][SWDESG_CAN_063]*/
    }
    else
    {
#endif
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            /* Get the hardware offset for this controller. */
            u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
            u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

            if (FLEXCAN_ESR_FLTCONF_ACTIVE ==
                ((Can_Hw_GetErrorStatus(u32CanAddr) & FLEXCAN_ESR_FLTCONF_U32) >>
                 FLEXCAN_ESR_FLTCONF_SHIFT_U32))
            {
                *ErrorStatePtr = CAN_ERRORSTATE_ACTIVE;
            }
            else if (FLEXCAN_ESR_FLTCONF_PASSIVE ==
                     ((Can_Hw_GetErrorStatus(u32CanAddr) & FLEXCAN_ESR_FLTCONF_U32) >>
                      FLEXCAN_ESR_FLTCONF_SHIFT_U32))
            {
                *ErrorStatePtr = CAN_ERRORSTATE_PASSIVE;
            }
            else
            {
                *ErrorStatePtr = CAN_ERRORSTATE_BUSOFF;
            }
            eReturnValue = E_OK;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif

    return eReturnValue;
}

/**
 * @brief This service reports about the current status of the requested CAN controller.
 * [SWDESG_CAN_133]
 *
 * @param u8ControllerId CAN controller for which the status shall be requested.
 * @param ControllerModePtr Pointer to a memory location, where the current mode of the CAN
 * controller will be stored.
 * @return E_OK: Controller mode request has been accepted; E_NOT_OK: Controller mode request has
 * not been accepted
 */
CAN_TEXT_SECTION Std_ReturnType CanHal_GetControllerMode(uint8                    u8ControllerId,
                                                         Can_ControllerStateType *ControllerModePtr,
                                                         uint8                    u8CurrentCore)
{
    Std_ReturnType eReturnValue = E_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_MODE,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_Can_91017][SWDESG_CAN_069]*/
    }
    else
    {
#endif
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif
            *ControllerModePtr = g_aCanHwUserdControllerTable[u8ControllerId].eControllerState;
            eReturnValue       = E_OK;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif

    return eReturnValue;
}

/**
 * @brief Write Can Message to Hardware object. [SWDESG_CAN_134]
 *
 * @param hth Hardware object id
 * @param PduInfo point to write message
 * @return E_OK means write correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_Write(Can_HwHandleType   hth,
                                              const Can_PduType *PduInfo,
                                              uint8              u8CurrentCore)
{
    /* Variable for return status. [SWDESG_CAN_079]*/
    Can_ReturnType eReturnValue = CAN_BUSY;
    /* Variable for keeping the controller Id. */
    uint8 u8ControllerId = 0U;
    /* General purpose variable */
    /* controller hardware offset on chip. */
    uint8  u8CanIndex;
    uint32 u32CanAddr;
    uint16 u16HohIndex;
    uint32 u32MbAddr;

    /* Pointer to the MB container structure. */
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;
    const Can_MBConfigObjectType    *pMsgBufCfgsPtr;
#if (CAN_DEV_ERROR_DETECT == STD_ON)

    /* hth must be below u16MsgBufCfgCnt and should be a Tx MB type. */

    if ((hth < (s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex +
                s_pCanHal_pConfigCurrent->u16CanFifoHrhCount)) ||
        (hth >= (Can_HwHandleType)CAN_MAX_OBJECT_ID))
    {

        Can_ReportDetError((uint8)CAN_DET_SID_WRITE,
                           (uint8)CAN_E_PARAM_HANDLE); /*[SWS_Can_00217][SWDESG_CAN_075]*/
        eReturnValue = CAN_NOT_OK;                     /*[SWS_Can_00089]*/
    }
    else
    {
#if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* Report Error if Protocol Data Unit information pointer is NULL.
         * [SWS_CAN_00503][SWS_CAN_00504][SWDESG_CAN_080]*/
        if ((NULL_PTR == PduInfo))
#else
        if ((NULL_PTR == PduInfo) || (NULL_PTR == PduInfo->sdu))
#endif
        {
            Can_ReportDetError(
                (uint8)CAN_DET_SID_WRITE,
                CAN_E_PARAM_POINTER); /*[SWS_CAN_00219][SWS_CAN_00506][SWDESG_CAN_076][SWDESG_CAN_084]*/
            eReturnValue = CAN_NOT_OK;
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

#if (CAN_FD_MODE_ENABLE == STD_ON)
            /*variable for current baudrate index*/
            uint8                            u8BaudrateIndex = 0U;
            const Can_ControlerInstanceType *pCanControlerDescriptor;
            boolean                          bEnabledFD;
#endif
            pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);
            pMsgBufCfgsPtr = (const Can_MBConfigObjectType *)(pCanMbConfigContainer->pMsgBufCfgsPtr);

            u16HohIndex = (uint16)(hth - s_pCanHal_pConfigCurrent->u16CanFifoHrhCount);

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
            s_aCanHal_TxAbortFlag[hth - CAN_HTH_START_ID] = 0U; /* clear abort flag */
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */

#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)
            /* Calculate the MB index. When transmit multiplex is enabled search any MB to be free,
            MBs that have the same ObjectID When Multiplex is disabled ,you can have more than one
            controller, everyone having MBs configured. In this case the index of the MB is
            different from the one in the plugin */

            while ((u16HohIndex < CAN_MAXMBCOUNT_0) &&
                   (g_aCanHwUsedHohTable[u16HohIndex].u32HohId != hth))
            {
                u16HohIndex++;
            }
#endif

            u8ControllerId = (pMsgBufCfgsPtr)[u16HohIndex].u8ControllerId;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            /* Check if the controller is mapped on current partition */
            if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
            {
#else
    (void)u8CurrentCore;
#endif
#if (CAN_FD_MODE_ENABLE == STD_ON)

                pCanControlerDescriptor = &(
                    s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]);
                /* Get the index of the current baudrate */
                u8BaudrateIndex = g_aCanHwUserdControllerTable[u8ControllerId].u8CurrentBaudRateIndex;

                if (((uint32)FLEXCAN_MCR_FDEN_U32) ==
                    (pCanControlerDescriptor->pControllerBaudCfgsPtr[u8BaudrateIndex]
                         .ControllerFD.u32CanFdEN))
                {
                    bEnabledFD = (boolean)TRUE;
                }
                else
                {
                    bEnabledFD = (boolean)FALSE;
                }
#endif

                /* Get the hardware offset for this controller. Note that hardware offset may not be
                 * the same with the controller index from the 'Can_ControlerInstanceType' structure. */

                u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);

                u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
#if (CAN_DEV_ERROR_DETECT == STD_ON)

#if (CAN_FD_MODE_ENABLE == STD_ON)
                eReturnValue = Can_ML_HardwareTransmitHandleCheck(PduInfo, u16HohIndex, bEnabledFD);
#else
                eReturnValue =
                    Can_ML_HardwareTransmitHandleCheck(PduInfo, u16HohIndex, (boolean)FALSE);
#endif /* (CAN_FD_MODE_ENABLE == STD_ON)   */
                if (CAN_OK == eReturnValue)
                {

#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)
                    /* Need to find a free MB for transmission. This do-while block is executed only
                       when multiplex transmission is ON because the data can be stored in any MB
                       that has the same ObjectID. [SWS_Can_00401][SWS_Can_00402][SWS_Can_00403]*/
                    do
                    {
#endif /* (CAN_MULTIPLEXED_TRANSMISSION == STD_ON) */

                        u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);

                        /* Is the MB empty?
                             This test is a bit early; the bTxGuard is not set yet and someone else
                           can grab this MB before we reserve it but it saves setting the guard on
                           full or cancelled MBs only to discover they are not empty and clearing
                           the guard again. */
                        if (E_OK == Can_Hw_CheckTxMbEmpty(u32MbAddr))
                        {
                            /*
                               The function Can_Write shall perform following actions if the
                               hardware transmit object is free: The mutex for that HTH is set to
                               'signaled'; the ID, DLC and SDU are put in a format appropriate for
                               the hardware; All necessary control operations to initiate the
                               transmit are done; The mutex for that HTH is released; The function
                               returns with CAN_OK.
                            */
                            /* Test the GUARD MASK and the INTERRUPT FLAG.
                                 Cannot operate on locked out MBs (re-entry).. also cannot operate
                               on MBs for which the Tx confirmation has not been sent yet.*/
                            if ((boolean)FALSE == g_aCanHwUsedHohTable[u16HohIndex].bTxGuard)
                            {
                                /* Interrupt flag is not set for this MB this meaning MB is not in
                                 * progress. */
                                /* The mutex for that HTH is set to 'signaled': The guard is 0, the
                                 * MB is not locked out at the moment -> lock it out. */
                                g_aCanHwUsedHohTable[u16HohIndex].bTxGuard = (boolean)TRUE;

/* Write data into the Message buffer for transition*/
#if (CAN_FD_MODE_ENABLE == STD_ON)
                                eReturnValue = Can_LL_UpdateTransmitMB(u8ControllerId,
                                                                       u16HohIndex,
                                                                       PduInfo,
                                                                       bEnabledFD);
#else
            eReturnValue =
                Can_LL_UpdateTransmitMB(u8ControllerId, u16HohIndex, PduInfo, (boolean)FALSE);
#endif /* (CAN_FD_MODE_ENABLE == STD_ON) */

                                g_aCanHwUsedHohTable[u16HohIndex].bTxGuard = (boolean)FALSE;
                            }
                            else
                            {
                                /* MB is locked out because software flag (Guart bit) is set.
                                 * [SWS_Can_00214][SWDESG_CAN_073]*/
                                eReturnValue = CAN_BUSY;
                            }
                        }
                        else
                        {
                            /* MB is not empty. [SWS_Can_00214][SWDESG_CAN_073]*/
                            eReturnValue = CAN_BUSY;
                        }

#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)

                        u16HohIndex++;
                    }
                    while ((u16HohIndex < CAN_MAXMBCOUNT_0) &&

                           (g_aCanHwUsedHohTable[u16HohIndex].u32HohId == hth) &&
                           (CAN_BUSY == eReturnValue));

#endif /* (CAN_MULTIPLEXED_TRANSMISSION == STD_ON) */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
                }
                else
                {
                    eReturnValue = CAN_NOT_OK;
                }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    return (eReturnValue);
}

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * @brief Abort Written Can Message in Hardware object. [SWDESG_CAN_135]
 *
 * @param hth Hardware object id
 * @return E_OK means write correctly
 */
CAN_TEXT_SECTION Can_ReturnType Can_Hal_TransmitAbort(Can_HwHandleType hth, uint8 u8CurrentCore)
{
    /* Variable for return status. */
    Can_ReturnType eReturnValue = CAN_OK;
    /* Variable for keeping the controller Id. */
    uint8 u8ControllerId = 0U;
    /* General purpose variable */
    /* controller hardware offset on chip. */
    uint8  u8CanIndex;
    uint32 u32CanAddr;
    uint16 u16HohIndex;
    uint32 u32MbAddr;

    /* Pointer to the MB container structure. */
    const Can_MBConfigContainerType *pCanMbConfigContainer = NULL_PTR;
    const Can_MBConfigObjectType    *pMsgBufCfgsPtr;
#if (CAN_DEV_ERROR_DETECT == STD_ON)

    /* hth must be below u16MsgBufCfgCnt and should be a Tx MB type. */

    if ((hth < s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex) ||
        (hth >= (Can_HwHandleType)CAN_MAX_OBJECT_ID))
    {

        Can_ReportDetError((uint8)CAN_DET_SID_WRITE, (uint8)CAN_E_PARAM_HANDLE);
        eReturnValue = CAN_NOT_OK;
    }
    else
    {

#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        pCanMbConfigContainer = &(s_pCanHal_pConfigCurrent->tMBCfgContainer);
        pMsgBufCfgsPtr = (const Can_MBConfigObjectType *)(pCanMbConfigContainer->pMsgBufCfgsPtr);

        u16HohIndex = (uint16)(hth - s_pCanHal_pConfigCurrent->u16CanFifoHrhCount);

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        s_aCanHal_TxAbortFlag[hth - CAN_HTH_START_ID] = 1U; /* set abort flag */
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */

#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)
        /* Calculate the MB index. When transmit multiplex is enabled search any MB to be free, MBs
        that have the same ObjectID When Multiplex is disabled ,you can have more than one
        controller, everyone having MBs configured. In this case the index of the MB is different
        from the one in the plugin */

        while ((u16HohIndex < CAN_MAXMBCOUNT_0) && (g_aCanHwUsedHohTable[u16HohIndex].u32HohId != hth))
        {
            u16HohIndex++;
        }
#endif

        u8ControllerId = (pMsgBufCfgsPtr)[u16HohIndex].u8ControllerId;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
    (void)u8CurrentCore;
#endif

            /* Get the hardware offset for this controller. Note that hardware offset may not be the
             * same with the controller index from the 'Can_ControlerInstanceType' structure. */

            u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);

            u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

            /* MB is not busy. */
            eReturnValue = CAN_NOT_OK;
#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)
            /* Need to find a free MB for transmission. This do-while block is executed only when
               multiplex transmission is ON because the data can be stored in any MB that has the
               same ObjectID. */
            do
            {
#endif /* (CAN_MULTIPLEXED_TRANSMISSION == STD_ON) */

                u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);

                /* Is the MB busy */
                if (E_OK == Can_Hw_CheckTxMbBusy(u32MbAddr))
                {
                    Can_Hw_AbortTransmit(u32MbAddr);
                    eReturnValue = CAN_OK;
                }
                else
                {
                }

#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)

                u16HohIndex++;
            }
            while ((u16HohIndex < CAN_MAXMBCOUNT_0) &&

                   (g_aCanHwUsedHohTable[u16HohIndex].u32HohId == hth));

#endif /* (CAN_MULTIPLEXED_TRANSMISSION == STD_ON) */

#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    return (eReturnValue);
}
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */

#if (CAN_SET_BAUDRATE_API == STD_ON)
/**
 * @brief Set can baudrate with controller id and baudrate configuration id in EB. [SWDESG_CAN_136]
 *
 * @param u8ControllerId controller id
 * @param BaudrateConfigID baudrate configuration in EB
 * @return E_OK means set correctly
 */
CAN_TEXT_SECTION Std_ReturnType Can_Hal_SetBaudrate(uint8        u8ControllerId,
                                                    const uint16 BaudrateConfigID,
                                                    uint8        u8CurrentCore)
{

    /* Returns the result of CAN set baudrate  [SWDESG_CAN_030]*/
    Std_ReturnType eReturnValue    = (uint8)E_NOT_OK;
    uint8          u8BaudrateIndex = 0U;

#if (CAN_DEV_ERROR_DETECT == STD_ON)

    if ((u8ControllerId >= CAN_MAXCONTROLLERCOUNT_0) ||

        (FLEXCAN_NULL_INDEX_U8 == Can_Hw_GetCanIndexFromControllerId(u8ControllerId)))
    {
        Can_ReportDetError((uint8)CAN_DET_SID_SET_BAUDRATE,
                           (uint8)CAN_E_PARAM_CONTROLLER); /*[SWS_CAN_00494][SWDESG_CAN_029]*/
    }
    else
    {
        /*[SWS_Can_00256]*/
        if (CAN_CS_STOPPED != g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
        {
            Can_ReportDetError((uint8)CAN_DET_SID_SET_BAUDRATE, (uint8)CAN_E_TRANSITION);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

            /* Check the Baudrate [SWS_Can_00255]*/

            for (u8BaudrateIndex = 0U;
                 u8BaudrateIndex <
                 s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId].u8MaxBaudCnt;
                 u8BaudrateIndex++)
            {
                /* Check the Baudrate */

                if (BaudrateConfigID == (uint16)(s_pCanHal_pConfigCurrent->tControllerContainer
                                                     .pInstanceCfgsPtr[u8ControllerId]
                                                     .pControllerBaudCfgsPtr[u8BaudrateIndex]
                                                     .u16ControllerBaudRateConfigID))
                {
                    /* Baudrate is Valid */
                    /* Copy the index of Valid Baudrate into the g_aCanHwUserdControllerTable as
                     * u8CurrentBaudRateIndex */
                    g_aCanHwUserdControllerTable[u8ControllerId].u8CurrentBaudRateIndex =
                        u8BaudrateIndex;

                    eReturnValue = (uint8)E_OK;
                    break;
                }
            }

            if ((uint8)E_OK != eReturnValue)
            {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
                Can_ReportDetError((uint8)CAN_DET_SID_SET_BAUDRATE,
                                   (uint8)CAN_E_PARAM_BAUDRATE); /*[SWS_CAN_00493][SWDESG_CAN_028]*/
#endif
            }
            else
            {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                /* Check if the controller is mapped on current partition */
                if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
                {
#else
        (void)u8CurrentCore;
#endif
                    /*[SWS_Can_00256][SWS_Can_00260][SWS_Can_00422][SWS_Can_00062][SWS_CAN_00500]*/
                    eReturnValue = (Std_ReturnType)Can_HL_InitController(u8ControllerId);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                }
#endif
            }

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eReturnValue);
}
#endif /* (CAN_SET_BAUDRATE_API == STD_ON) */

/**
 * @brief clear bus off error status. [SWDESG_CAN_137]
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION void Can_Hal_ProcessBusOff(const uint8 u8ControllerId)
{
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

    /* Clear the ESR[BOFF_INT] bus off interrupt flag (w1c). */
    Can_Hw_ClearErrorStatus(u32CanAddr, FLEXCAN_ESR_BOFFINT_U32);
}

#if (CAN_BUSOFFPOLL_SUPPORTED == STD_ON)

/**
 * @brief Polling All Controller Bus off status. [SWDESG_CAN_138]
 *
 */
CAN_TEXT_SECTION void Can_Hal_BusOffPoll(uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers */
    uint8 u8ControllerId = 0U;

    /* Loop through all Can controllers configured based CanControllerId parameter. */
    for (u8ControllerId = (uint8)0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            /*
               The function Can_MainFunction_BusOff shall perform the polling of bus-off events that
               are configured statically as 'to be polled'. [SWS_Can_00109]
            */

            if ((FLEXCAN_NULL_INDEX_U8 != Can_Hw_GetCanIndexFromControllerId(u8ControllerId)) &&
                ((CAN_CONTROLLER_CFG_BOPOL_EN_U32 &
                  (uint32)(g_aCanHwUserdControllerTable[u8ControllerId].u32HwOptions)) !=
                 (uint32)0x0U))
            {
                /* Check for BusOff status. */
                if ((uint8)E_OK == Can_LL_CheckBusOff(u8ControllerId))
                {
                    /* Process BusOff event. [SWS_Can_00020][SWS_Can_00272][SWS_Can_00273][SWDESG_CAN_104]*/
                    if (CAN_OK == (Can_ReturnType)Can_HL_SetControllerMode(u8ControllerId,
                                                                           CAN_CS_STOPPED,
                                                                           (boolean)FALSE))
                    {
                        Can_Hal_ProcessBusOff(u8ControllerId);
                        CanIf_ControllerBusOff(u8ControllerId);
                    }
                }
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
}

#endif /* (CAN_BUSOFFPOLL_SUPPORTED == STD_ON) */

#if (CAN_ERROR_POLLING_ENABLE == STD_ON)

/**
 * @brief clear error status. [SWDESG_CAN_203]
 *
 * @param u8ControllerId Controller id
 */
CAN_TEXT_SECTION static void Can_LL_ProcessError(const uint8 u8ControllerId)
{
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;
    uint32 u32ErrFlag = 0U;
    uint32 u32ErrMask = 0U;

    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);

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

/**
 * @brief Polling All Controller error status. [SWDESG_CAN_204]
 *
 */
CAN_TEXT_SECTION void Can_Hal_ErrorPoll(uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers */
    uint8 u8ControllerId = 0U;

    /* Loop through all Can controllers configured based CanControllerId parameter. */
    for (u8ControllerId = (uint8)0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif

            Can_LL_ProcessError(u8ControllerId);

#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
}

#endif /* #if (CAN_ERROR_POLLING_ENABLE == STD_ON) */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)

/**
 * @brief Process transmit interrupt. [SWDESG_CAN_139]
 *
 * @param u8ControllerId Controller id
 * @param u32CanAddr  Can Address
 */
CAN_TEXT_SECTION void Can_Hal_ProcessTx(const uint8 u8ControllerId, uint32 u32CanAddr)
{
    uint16 u16HohIndex;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex = 0U;
    /* Variable for storing the value of IFLAG register. */
    uint32        u32IflagReg;
    uint32        u32MbAddr;
    const uint16 *pHohList;

    /* Get the hardware offset for this controller. */
    if (E_OK == Can_Hw_CheckTxInterrupt(u8ControllerId))
    {

        u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);
        u32IflagReg &= Can_Hw_GetIMask1(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[0];
        pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
        u8MbIndex = 0U;
        /* check for MBs that are Tx Interrupt and has flag set and inside the range of this ISR */
        while ((u32IflagReg != 0U))
        {
            if ((u32IflagReg & 0x01U) == 0x01U)
            {
                u16HohIndex = pHohList[u8MbIndex];
                u32MbAddr   = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                Can_ML_ProcessTx(u32CanAddr, u16HohIndex, u8MbIndex, u32MbAddr);
            }

            u8MbIndex++;
            u32IflagReg = u32IflagReg >> 1;
        }
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            u32IflagReg = Can_Hw_GetIFlag2(u32CanAddr);
            u32IflagReg &= Can_Hw_GetIMask2(u32CanAddr);
            u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[1];
            pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
            u8MbIndex = 32U;
            /* check for MBs that are Tx Interrupt and has flag set and inside the range of this ISR */
            while ((u32IflagReg != 0U))
            {
                if ((u32IflagReg & 0x01U) == 0x01U)
                {
                    u16HohIndex = pHohList[u8MbIndex];
                    u32MbAddr   = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                    Can_ML_ProcessTx(u32CanAddr, u16HohIndex, u8MbIndex, u32MbAddr);
                }

                u8MbIndex++;
                u32IflagReg = u32IflagReg >> 1;
            }
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            u32IflagReg = Can_Hw_GetIFlag3(u32CanAddr);
            u32IflagReg &= Can_Hw_GetIMask3(u32CanAddr);
            u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptTxMask[2];
            pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
            u8MbIndex = 64U;
            /* check for MBs that are Tx Interrupt and has flag set and inside the range of this ISR */
            while ((u32IflagReg != 0U))
            {
                if ((u32IflagReg & 0x01U) == 0x01U)
                {
                    u16HohIndex = pHohList[u8MbIndex];
                    u32MbAddr   = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                    Can_ML_ProcessTx(u32CanAddr, u16HohIndex, u8MbIndex, u32MbAddr);
                }

                u8MbIndex++;
                u32IflagReg = u32IflagReg >> 1;
            }
        }
#endif
    }
}
#endif /* (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_TXPOLL_SUPPORTED == STD_ON)

/**
 * @brief Polling check if write successfully and indicate to CanIf. [SWDESG_CAN_140]
 *
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionWritePoll(uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers. */
    uint8  u8ControllerId = 0U;
    uint16 u16HohIndex;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex = 0U;

    uint8  u8CanIndex;
    uint32 u32CanAddr;
    uint32 u32MbAddr;

    /* Loop through all configured controller descriptors. */
    for (u16HohIndex = s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex; u16HohIndex < CAN_MAXMBCOUNT_0;
         u16HohIndex++)
    {
        u8ControllerId = g_aCanHwUsedHohTable[u16HohIndex].u8ControllerId;
        u8CanIndex     = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
        u32CanAddr     = Can_Hw_GetCanBaseAddr(u8CanIndex);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            /* Check whether the controller is enabled and whether Tx polling is used for this
             * controller. [SWS_Can_00031][SWDESG_CAN_092][SWDESG_CAN_093] l*/
            if ((FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                (E_OK == Can_Hw_CheckTxPolling(u8ControllerId)))
            {
                if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                {
                    u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
                    u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                    if (E_OK == Can_Hw_CheckTxMaskPolling(u8ControllerId, u32CanAddr, u8MbIndex))
                    {
                        /* Enabled & TxPoll used. Process Tx interrupt flags. */
                        Can_ML_ProcessTx(u32CanAddr, u16HohIndex, u8MbIndex, u32MbAddr);
                    }
                }
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
}

#ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE
#if (CAN_MAINFUNCTION_MULTIPLE_WRITE == STD_ON)

/**
 * @brief Multi-Polling for diffreent thread with thread id, used in multi-core process( Different
 * MainRwmainFunction set in EB ). [SWDESG_CAN_141]
 *
 * @param writepoll thread id
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionMultipleWritePoll(uint8 writepoll, uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers. */
    uint8  u8ControllerId = 0U;
    uint16 u16HohIndex;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex = 0U;

    uint8  u8CanIndex;
    uint32 u32CanAddr;
    uint32 u32MbAddr;

    if (NULL_PTR != s_pCanHal_pConfigCurrent)
    {
        /* Parse through all TX configured message buffer */
        for (u16HohIndex = s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex;
             u16HohIndex < CAN_MAXMBCOUNT_0;
             u16HohIndex++)
        {
            u8ControllerId = g_aCanHwUsedHohTable[u16HohIndex].u8ControllerId;
            u8CanIndex     = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
            u32CanAddr     = Can_Hw_GetCanBaseAddr(u8CanIndex);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            /* Check if the controller is mapped on current partition */
            if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
            {
#else
            (void)u8CurrentCore;
#endif
                /*  Poll only the Tx MB which is referenced by Can_Hal_MainFunctionMultipleWritePoll */
                if ((writepoll ==
                     s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr[u16HohIndex]
                         .u8CanMainFuncRWPeriodRef) &&
                    (FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                    (E_OK == Can_Hw_CheckTxPolling(u8ControllerId)) &&
                    (CAN_TRANSMIT ==
                     (s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr[u16HohIndex].eMBType)))
                {
                    if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u8ControllerId))
                    {
                        u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);
                        u32MbAddr = Can_Hw_GetMbAddr(u32CanAddr, u16HohIndex);
                        if (E_OK == Can_Hw_CheckTxMaskPolling(u8ControllerId, u32CanAddr, u8MbIndex))
                        {
                            /* Enabled & TxPoll used. Process Tx interrupt flags. */
                            Can_ML_ProcessTx(u32CanAddr, u8ControllerId, u8MbIndex, u32MbAddr);
                        }
                    }
                }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            }
#endif
        }
    }
}
#endif /* #if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON) */
#endif /* #ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE */
#endif /* (CAN_TXPOLL_SUPPORTED == STD_ON) */

#if (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON)

/**
 * @brief Process Receive Interrupt. [SWDESG_CAN_142]
 *
 * @param u8ControllerId Controller id
 * @param u32CanAddr  Can address
 */
CAN_TEXT_SECTION void Can_Hal_ProcessRx(const uint8 u8ControllerId, uint32 u32CanAddr)
{
    uint16 u16HohIndex;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex;
    /* Variable for storing the value of IFLAG register. */
    uint32 u32IflagReg;
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    uint32 u32Option;
#endif

    const uint16 *pHohList;
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    u32Option = (g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions);
#endif
    if (E_OK == Can_Hw_CheckRxInterrupt(u8ControllerId))
    {

        /* Get the content of IFLAG register for which corresponds this MB. */
        u32IflagReg = Can_Hw_GetIFlag1(u32CanAddr);
        u32IflagReg &= Can_Hw_GetIMask1(u32CanAddr);
        u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[0];
        pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
        u8MbIndex = 0U;

        /* check for MBs that are Rx Interrupt and has flag set and inside the range of this ISR */
        while ((u32IflagReg != 0U))
        {

            if ((u32IflagReg & 0x01U) == 0x01U)
            {
                u16HohIndex = pHohList[u8MbIndex];
                Can_LL_ProcessRxNormal(u8ControllerId, u32CanAddr, u16HohIndex);
            }

            u8MbIndex++;
            u32IflagReg = u32IflagReg >> 1;
        }
#if CAN_IFLAG_IMASK_NUM > 1U
        if ((FLEXCAN_MB_64_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums) ||
            (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums))
        {
            /* Get the content of IFLAG register for which corresponds this MB. */
            u32IflagReg = Can_Hw_GetIFlag2(u32CanAddr);
            u32IflagReg &= Can_Hw_GetIMask2(u32CanAddr);
            u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[1];
            pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
            u8MbIndex = 32U;

            /* check for MBs that are Rx Interrupt and has flag set and inside the range of this ISR */
            while ((u32IflagReg != 0U))
            {

                if ((u32IflagReg & 0x01U) == 0x01U)
                {
                    u16HohIndex = pHohList[u8MbIndex];
                    Can_LL_ProcessRxNormal(u8ControllerId, u32CanAddr, u16HohIndex);
                }

                u8MbIndex++;
                u32IflagReg = u32IflagReg >> 1;
            }
        }
#endif

#if CAN_IFLAG_IMASK_NUM > 2U
        if (FLEXCAN_MB_96_U8 == g_aCanHwUserdControllerTable[u8ControllerId].u8MbNums)
        {
            /* Get the content of IFLAG register for which corresponds this MB. */
            u32IflagReg = Can_Hw_GetIFlag3(u32CanAddr);
            u32IflagReg &= Can_Hw_GetIMask3(u32CanAddr);
            u32IflagReg &= g_aCanHwUserdControllerTable[u8ControllerId].u32MBInterruptRxMask[2];
            pHohList  = (const uint16 *)g_aCanHwUserdControllerTable[u8ControllerId].aHohIndex;
            u8MbIndex = 64U;

            /* check for MBs that are Rx Interrupt and has flag set and inside the range of this ISR */
            while ((u32IflagReg != 0U))
            {

                if ((u32IflagReg & 0x01U) == 0x01U)
                {
                    u16HohIndex = pHohList[u8MbIndex];
                    Can_LL_ProcessRxNormal(u8ControllerId, u32CanAddr, u16HohIndex);
                }

                u8MbIndex++;
                u32IflagReg = u32IflagReg >> 1;
            }
        }
#endif

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

        if (CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 == (u32Option & CAN_CONTROLLER_CFG_LEGACY_FIFO_U32))
        {
            Can_LL_ProcessRxLegacyFifo(u8ControllerId, u32CanAddr);
        }
        else
        {
        }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/* For Enhanced fifo read */
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        if ((CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
             (u32Option & CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32)))
        {
            uint32 u32TempFlag;
            u32TempFlag = Can_Hw_GetEnhancedFifoInterruptStatus(u32CanAddr);
            Can_LL_ProcessRxEnhancedFifo(u8ControllerId, u32CanAddr, u32TempFlag);
        }
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
    }
}
#endif /* (CAN_TX_RX_INTRRUPT_SUPPORTED == STD_ON) */

#if (CAN_RXPOLL_SUPPORTED == STD_ON)

/**
 * @brief Polling Check If received Message and Indicate to CanIf. [SWDESG_CAN_143]
 *
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionReadPoll(uint8 u8CurrentCore)
{

    /* Variable for indexing the controllers. */
    uint8  u8ControllerId = 0U;
    uint16 u16HohIndex    = 0U;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex = 0U;

    uint8  u8CanIndex;
    uint32 u32CanAddr;

    /* Loop through all configured controller descriptors. */

    for (u16HohIndex = 0U; u16HohIndex < (uint16)s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex;
         u16HohIndex++)
    {
        u8ControllerId = g_aCanHwUsedHohTable[u16HohIndex].u8ControllerId;
        u8CanIndex     = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
        u32CanAddr     = Can_Hw_GetCanBaseAddr(u8CanIndex);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            /* The function Can_MainFunction_Read shall perform the polling of RX indications when
             * CanRxProcessing is set to POLLING. [SWS_Can_00108][SWDESG_CAN_096]*/
            if ((FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                (E_OK == Can_Hw_CheckRxPolling(u8ControllerId)))
            {
                if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u16HohIndex))
                {
                    u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);

                    if (E_OK == Can_Hw_CheckRxMaskPolling(u8ControllerId, u32CanAddr, u8MbIndex))
                    {
                        Can_LL_ProcessRxNormal(u8ControllerId, u32CanAddr, u16HohIndex);
                    }
                }
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    for (u8ControllerId = 0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
            u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
            /* The function Can_MainFunction_Read shall perform the polling of RX indications when
             * CanRxProcessing is set to POLLING. */
            if ((FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                (E_OK == Can_Hw_CheckRxPolling(u8ControllerId)))
            {
/* For Legacy fifo read */
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
                if ((CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 ==
                     ((g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions) &
                      CAN_CONTROLLER_CFG_LEGACY_FIFO_U32)))
                {
                    if (E_NOT_OK == Can_Hw_CheckLegacyFifoInterrupt(u8ControllerId))
                    {
                        Can_LL_ProcessRxLegacyFifo(u8ControllerId, u32CanAddr);
                    }
                }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/* For Enhanced fifo read */
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                if ((CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
                     ((g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions) &
                      CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32)))
                {
                    if (E_NOT_OK == Can_Hw_CheckEnhancedFifoInterrupt(u8ControllerId))
                    {
                        uint32 u32IflagReg, u32ImaskReg;

                        u32IflagReg = Can_Hw_GetERFSR(u32CanAddr) & FLEXCAN_ENHANCED_INT_MASK_U32;
                        u32ImaskReg = Can_Hw_GetERFIER(u32CanAddr);
                        if ((uint32)0x0U != (u32IflagReg & (~u32ImaskReg)))
                        {
                            Can_LL_ProcessRxEnhancedFifo(u8ControllerId, u32CanAddr, u32IflagReg);
                        }
                    }
                }
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
}

#ifdef CAN_MAINFUNCTION_MULTIPLE_READ

#if (CAN_MAINFUNCTION_MULTIPLE_READ == STD_ON)
/**
 * @brief Multi-Polling for diffreent thread with thread id, used in multi-core process( Different
 * MainRwmainFunction set in EB ). [SWDESG_CAN_144]
 *
 * @param readpoll
 */
CAN_TEXT_SECTION void Can_Hal_MainFunctionMultipleReadPoll(uint8 readpoll, uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers. */
    uint8  u8ControllerId = 0U;
    uint16 u16HohIndex    = 0U;
    /* Variable for indexing the MBs. */
    uint8 u8MbIndex = 0U;

    uint8  u8CanIndex;
    uint32 u32CanAddr;

    /* Loop through all configured controller descriptors. */

    for (u16HohIndex = 0U; u16HohIndex < (uint16)s_pCanHal_pConfigCurrent->u16CanFirstHTHIndex;
         u16HohIndex++)
    {
        u8ControllerId = g_aCanHwUsedHohTable[u16HohIndex].u8ControllerId;
        u8CanIndex     = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
        u32CanAddr     = Can_Hw_GetCanBaseAddr(u8CanIndex);
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            /* The function Can_MainFunction_Read shall perform the polling of RX indications when
             * CanRxProcessing is set to POLLING. */
            if ((readpoll == s_pCanHal_pConfigCurrent->tMBCfgContainer.pMsgBufCfgsPtr[u16HohIndex]
                                 .u8CanMainFuncRWPeriodRef) &&
                (FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                (E_OK == Can_Hw_CheckRxPolling(u8ControllerId)))
            {
                if (E_NOT_OK == Can_Hw_CheckMBInterrupt(u8ControllerId))
                {
                    u8MbIndex = Can_Hw_GetMbIndexFromHoh(u16HohIndex);

                    if (E_OK == Can_Hw_CheckRxMaskPolling(u8ControllerId, u32CanAddr, u8MbIndex))
                    {
                        Can_LL_ProcessRxNormal(u8ControllerId, u32CanAddr, u16HohIndex);
                    }
                }
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    for (u8ControllerId = 0U;
         u8ControllerId < s_pCanHal_pConfigCurrent->tControllerContainer.u16InstanceCfgCnt;
         u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
            u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
            /* The function Can_MainFunction_Read shall perform the polling of RX indications when
             * CanRxProcessing is set to POLLING. */
            if ((FLEXCAN_NULL_INDEX_U8 != u8CanIndex) &&
                (E_OK == Can_Hw_CheckRxPolling(u8ControllerId)))
            {
/* For Legacy fifo read */
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
                if (readpoll ==
                    s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]
                        .u8LegacyCanMainFuncRWPeriodRef)
                {
                    if ((CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 ==
                         ((g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions) &
                          CAN_CONTROLLER_CFG_LEGACY_FIFO_U32)))
                    {
                        if (E_NOT_OK == Can_Hw_CheckLegacyFifoInterrupt(u8ControllerId))
                        {
                            Can_LL_ProcessRxLegacyFifo(u8ControllerId, u32CanAddr);
                        }
                    }
                }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/* For Enhanced fifo read */
#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                if (readpoll ==
                    s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8ControllerId]
                        .u8EnhancedCanMainFuncRWPeriodRef)
                {
                    if ((CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 ==
                         ((g_aCanHwUserdControllerTable[u8ControllerId].u32InsOptions) &
                          CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32)))
                    {
                        if (E_NOT_OK == Can_Hw_CheckEnhancedFifoInterrupt(u8ControllerId))
                        {
                            uint32 u32IflagReg, u32ImaskReg;

                            u32IflagReg = Can_Hw_GetERFSR(u32CanAddr) & FLEXCAN_ENHANCED_INT_MASK_U32;
                            u32ImaskReg = Can_Hw_GetERFIER(u32CanAddr);
                            if ((uint32)0x0U != (u32IflagReg & (~u32ImaskReg)))
                            {
                                Can_LL_ProcessRxEnhancedFifo(u8ControllerId, u32CanAddr, u32IflagReg);
                            }
                        }
                    }
                }
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) || (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
}
#endif /* #if (CAN_MAINFUNCTION_MULTIPLE_WRITE==STD_ON) */
#endif /* #ifdef CAN_MAINFUNCTION_MULTIPLE_WRITE */
#endif /* (CAN_RXPOLL_SUPPORTED == STD_ON) */

/* PRQA S 2877 ++ #Misra-C:2012 Dir-4.1 This loop will never be executed more than once.
 * Reason: this macro is changed when EB configured with more than one */
/**
 * @brief Polling Check MCR Mode. [SWDESG_CAN_145]
 *
 */
CAN_TEXT_SECTION void Can_Hal_ModePoll(uint8 u8CurrentCore)
{
    /* Variable for indexing the controllers. */
    uint8 u8ControllerId = 0U;
    /* controller hardware offset on chip. */
    uint8  u8CanIndex = 0U;
    uint32 u32CanAddr;
    /* Old and new MCR status Register*/

    /* Loop through all configured controller descriptors. [SWS_Can_00369]*/
    for (u8ControllerId = (uint8)0U; u8ControllerId < CAN_MAXCONTROLLERCOUNT_0; u8ControllerId++)
    {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        /* Check if the controller is mapped on current partition */
        if (u8CurrentCore == g_aCanHwUserdControllerTable[u8ControllerId].u8CoreIndex)
        {
#else
        (void)u8CurrentCore;
#endif
            /* Get the hardware offset for this controller. */
            u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
            u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
            if (FLEXCAN_NULL_INDEX_U8 != u8CanIndex)
            {
                if (CAN_CS_SLEEP != g_aCanHwUserdControllerTable[u8ControllerId].eControllerState)
                {
                    /*
                        The function Can_Mainfunction_Mode shall call the function
                       CanIf_ControllerModeIndication to notify the upper layer about a successful
                                 state transition of the CAN controller, in case the state transition
                       was triggered by function Can_SetControllerMode. [SWS_Can_00370][SWS_Can_00373]
                    */

                    /*Check if logical state is synchronized with hardware state*/
                    if ((E_OK != Can_Hw_CheckReadyMode(u32CanAddr)) &&
                        (CAN_CS_STARTED ==
                         g_aCanHwUserdControllerTable[u8ControllerId].eControllerState))
                    {
                        g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STOPPED;
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
                        CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_STOPPED);
#else
                    CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_STOPPED);
#endif
                    }
                    else if ((E_OK == Can_Hw_CheckReadyMode(u32CanAddr)) &&
                             (CAN_CS_STOPPED ==
                              g_aCanHwUserdControllerTable[u8ControllerId].eControllerState))
                    {

                        g_aCanHwUserdControllerTable[u8ControllerId].eControllerState = CAN_CS_STARTED;
#if (CAN_USE_LEGACY_CANIF_API == STD_ON)
                        CanIf_ControllerModeIndication(u8ControllerId, CANIF_CS_STARTED);
#else
                    CanIf_ControllerModeIndication(u8ControllerId, CAN_CS_STARTED);
#endif
                    }
                    else
                    {
                        /* do nothing for Misra */
                    }
                }
            }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
    /* PRQA S 2877 -- */
}

#ifdef CAN_WAKEUPPOLL_SUPPORTED
#if (CAN_WAKEUPPOLL_SUPPORTED == STD_ON)
/**
 * @brief Polling Wakeup
 *
 */
CAN_TEXT_SECTION void Can_Hal_WakeupPoll(uint8 u8CurrentCore)
{
    (void)u8CurrentCore;
}
#endif /* (CAN_WAKEUPPOLL_SUPPORTED  == STD_ON) */
#endif

/**
 * @brief Check if the HW CAN instance support CANFD mode. [SWDESG_CAN_147]
 *
 * @param u8controller Can Controller Id
 */
CAN_TEXT_SECTION boolean Can_Hal_CheckCanFdSupport(const uint8 u8controller)
{
    return s_pCanHal_pConfigCurrent->tControllerContainer.pInstanceCfgsPtr[u8controller].bSupportFD;
}

/**
 * @brief Get the Can rx error counter. [SWDESG_CAN_148]
 *
 * @param u8controller Can Controller Id
 * @return uint8 Rx error counter
 */
CAN_TEXT_SECTION uint8 Can_Hal_GetControllerRxErrorCounter(uint8 u8ControllerId)
{
    uint8  u8CanIndex;
    uint32 u32CanAddr;
    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
    return Can_LL_GetRxErrorCounter(u32CanAddr);
}

/**
 * @brief Get the Can tx error counter. [SWDESG_CAN_149]
 *
 * @param u8controller Can Controller Id
 * @return uint8 Tx error counter
 */
CAN_TEXT_SECTION uint8 Can_Hal_GetControllerTxErrorCounter(uint8 u8ControllerId)
{
    uint8  u8CanIndex;
    uint32 u32CanAddr;
    /* Get the hardware offset for this controller. */
    u8CanIndex = Can_Hw_GetCanIndexFromControllerId(u8ControllerId);
    u32CanAddr = Can_Hw_GetCanBaseAddr(u8CanIndex);
    return Can_LL_GetTxErrorCounter(u32CanAddr);
}

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

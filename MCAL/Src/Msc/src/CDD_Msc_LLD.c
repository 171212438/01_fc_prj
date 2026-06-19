/**
 *   @file    CDD_Msc_LLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - Isolation level file for MSC driver.
 *   @details Implementation file for function definition on isolation level between high and low
 * level driver.
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

#ifdef __cplusplus
extern "C"
{
#endif

#include "Mcal.h"
#include "CDD_Msc.h"
#include "CDD_Msc_LLD.h"
#include "CDD_Msc_Hw.h"
#include "SchM_Msc.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define CDD_MSC_START_SEC_CONST_32
#include "Msc_MemMap.h"

CDD_MSC_DATA_SECTION static MSC_Type *const s_apMsc_HwInstances[MSC_INSTANCE_COUNT] = MSC_BASE_PTRS;
CDD_MSC_DATA_SECTION static volatile uint32 *const s_apMscRdrxBase[MSC_INSTANCE_COUNT][4] =
    MSC_RDRx_PTRS;

#define CDD_MSC_STOP_SEC_CONST_32
#include "Msc_MemMap.h"

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* PRQA S 1503 EOF #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */

/**
 * @brief   Initialize a MSC channel.
 * @details This function initializes all hardware registers needed to
 *          start the MSC functionality on the selected channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 *
 * @return            Std_ReturnType.
 * @retval E_NOT_OK   In case of a timeout situation only.
 * @retval E_OK       Otherwise.
 */
CDD_MSC_TEXT_SECTION void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)
{
    const Msc_ChannelConfigType *pInitConfig  = pChannelConfig;
    MSC_Type *const              pMscInstance = s_apMsc_HwInstances[pChannelConfig->u8ChannelId];
    uint32 u32TempValue0, u32TempValue1, u32TempValue2, u32TempValue3, u32TempValue4, u32TempValue5;
    uint8  u8i;

    /* PRQA S 2985, 2986 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
     * Reason: To make code readable*/
    u32TempValue0 = MSC_TCCTR_PL(pInitConfig->u8PassiveLength);
    u32TempValue0 |= MSC_TCCTR_WM(pInitConfig->eWorkMode);
    u32TempValue0 |= MSC_TCCTR_SELH(pInitConfig->u8SelSRH);
    u32TempValue0 |= MSC_TCCTR_SELL(pInitConfig->u8SelSRL);
    u32TempValue0 |= MSC_TCCTR_NHBS(pInitConfig->u8SRHDataBitLength);
    u32TempValue0 |= MSC_TCCTR_NLBS(pInitConfig->u8SRLDataBitLength);

    u32TempValue1 = MSC_RCCSR_RFT(pInitConfig->eRsvFrameType);
    u32TempValue1 |= MSC_RCCSR_RBR(pInitConfig->eBaudDiv);
    u32TempValue1 |= MSC_RCCSR_PCTL(pInitConfig->eParity);
    u32TempValue1 |= MSC_RCCSR_HIDC(pInitConfig->u8DelayControl);

    u32TempValue2 = MSC_IOCR_IDS(pInitConfig->eSDIsel);
    u32TempValue2 |= MSC_IOCR_IPS(pInitConfig->u8SDIPolarity);
    u32TempValue2 |= MSC_IOCR_FCLCTRL(pInitConfig->eFclCtrl);
    u32TempValue2 |= MSC_IOCR_ESC(pInitConfig->eENC);
    u32TempValue2 |= MSC_IOCR_ESH(pInitConfig->eENH);
    u32TempValue2 |= MSC_IOCR_ESL(pInitConfig->eENL);

    if (pInitConfig->ePolarity == MSC_TX_NMPOL)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_IDENTICAL);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_FSC)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_INVERTED);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_SO)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_IDENTICAL);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_EN)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_IDENTICAL);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_FSC_EN)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_INVERTED);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_FSC_SO)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_IDENTICAL);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_INVERTED);
    }
    else if (pInitConfig->ePolarity == MSC_TX_INVPOL_EN_SO)
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_IDENTICAL);
    }
    else
    {
        u32TempValue2 |= MSC_IOCR_ENP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_SOP(MSC_POLARITY_INVERTED);
        u32TempValue2 |= MSC_IOCR_FCLP(MSC_POLARITY_INVERTED);
    }

    u32TempValue3 = 0U;
    for (u8i = 0U; u8i < 16U; u8i++)
    {
        u32TempValue3 |= (uint32)(pInitConfig->tTransSelConfig.u8DataSource[u8i]) << (u8i * 2U);
    }

    u32TempValue4 = 0U;
    for (u8i = 0U; u8i < 16U; u8i++)
    {
        u32TempValue4 |= (uint32)(pInitConfig->tTransSelConfig.u8DataSource[u8i + 16U]) << (u8i * 2U);
    }

    u32TempValue5 = 0U;
    u32TempValue5 |= MSC_TCCTR1_INJP0(pInitConfig->u8InjPosition0);
    u32TempValue5 |= MSC_TCCTR1_INJE0(pInitConfig->u8InjEnable0);
    u32TempValue5 |= MSC_TCCTR1_INJP1(pInitConfig->u8InjPosition1);
    u32TempValue5 |= MSC_TCCTR1_INJE1(pInitConfig->u8InjEnable1);

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_00();
    {
        MSC_HWA_SetTcctr(pMscInstance, u32TempValue0);
        MSC_HWA_SetRccsr(pMscInstance, u32TempValue1);
        MSC_HWA_SetIocr(pMscInstance, u32TempValue2);
        MSC_HWA_SetTcslr(pMscInstance, u32TempValue3);
        MSC_HWA_SetTcshr(pMscInstance, u32TempValue4);
#if (MSC_POLLING_USED == STD_OFF)
        MSC_HWA_SetIncr(pMscInstance, MSC_INCR_RFIE(1U));
#endif
        MSC_HWA_SetRtor(pMscInstance, MSC_RTOR_TOIE(0) | MSC_RTOR_TOV(pInitConfig->u16TimeoutValue));
        MSC_HWA_SetNp(pMscInstance, pInitConfig->u8PTFNumber);
        MSC_HWA_SetTcelr(pMscInstance, pInitConfig->u32Emergencyload);
        MSC_HWA_SetTcctr1(pMscInstance, u32TempValue5);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_00();
    /* PRQA S 2985 -- */
    return;
}

/**
 * @brief   DeInitialize a MSC channel.
 * @details This function De-initializes all hardware registers
 *          involved by the selected channel.
 *
 * @param[in] u8Channel MSC channel to be De-initialized.
 *
 * @return            void.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_LLD_DeInitChannel(uint8 u8Channel)
{
    uint32          u32TempTryCount = 0U;
    uint32          CoreId          = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];
    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_01();
    (void)Msc_LLD_StopChannel(u8Channel);
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_01();
    {
        pMscInstance->MSR = 1U;
        do
        {
            if ((pMscInstance->MSR & MSC_MSR_RDONE_MASK) == MSC_MSR_RDONE_MASK)
            {
                pMscInstance->SRCR = MSC_SRCR_RCLR_MASK;
                break;
            }
            else
            {
                u32TempTryCount++;
            }
        }
        while (u32TempTryCount < 65535U);
    }
}

/**
 * @brief   Set a data on the MSC bus.
 * @details This function is responsible to send data on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 * @param[in] DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @return            void.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_LLD_SetData(uint8 u8Channel, const uint32 *DataBufferPtr)
{
    uint32          CoreId = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_02();
    {
        MSC_HWA_SetTcdar(pMscInstance, *DataBufferPtr);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_02();
}

/**
 * @brief   Send a data on the MSC bus.
 * @details This function is responsible to send data on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 * @param[in] DataBufferPtr Pointer to data to be transmitter in the data frame.
 *
 * @return            void.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_LLD_SendData(uint8 u8Channel, const uint32 *DataBufferPtr)
{
    uint32          CoreId = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_03();
    {
        MSC_HWA_SetTcdar(pMscInstance, *DataBufferPtr);
        MSC_HWA_SetDataNeedSend(pMscInstance);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_03();
}

/**
 * @brief   Start to transmit serialized PWM.
 * @details This function is responsible of starting transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 *
 * @return            Std_ReturnType.
 * @retval E_NOT_OK   In case of a timeout situation only.
 * @retval E_OK       Otherwise.
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_StartChannel(uint8 u8Channel)
{
    uint32         CoreId    = MSC_GetCoreID();
    Std_ReturnType tmpReturn = (uint8)E_NOT_OK;
    uint32         u32TempValue;
    uint32         u32TempTryCount = 0u;

    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_04();
    {
        MSC_HWA_SetMscEnable(pMscInstance, TRUE);
        MSC_HWA_ClearTcdis(pMscInstance);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_04();

    do
    {
        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_16();
        {
            u32TempValue = (uint32)MSC_HWA_GetTcdis(pMscInstance);
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_16();

        /* check tranmist disable flag */
        if (u32TempValue == FALSE)
        {
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount < MSC_TIMEOUT_LOOPS);

    if (u32TempTryCount != MSC_TIMEOUT_LOOPS)
    {
        tmpReturn = E_OK;
    }

    return tmpReturn;
}

/**
 * @brief   Stop transmitting serialized PWM.
 * @details This function is responsible to stop transmission
 *          of serialized PMW on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 *
 * @return            Std_ReturnType.
 * @retval E_NOT_OK   In case of a timeout situation only.
 * @retval E_OK       Otherwise.
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)
{
    uint32          CoreId = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_05();
    {
        MSC_HWA_SetTcdis(pMscInstance);
        MSC_HWA_SetMscEnable(pMscInstance, FALSE);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_05();

    return E_OK;
}

/**
 * @brief   Send a command on the MSC bus.
 * @details This function is responsible to send command on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 * @param[in] CommandBufferPtr Pointer to command to be transmitter in the command frame.
 * @param[in] CommandBufferBitLength length in bits of the command frame.
 *
 * @return            void.
 *
 */
CDD_MSC_TEXT_SECTION void Msc_LLD_SendCommand(uint8         u8Channel,
                                              const uint32 *CommandBufferPtr,
                                              uint8         CommandBufferBitLength)
{
    uint32          CoreId = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_06();
    {
        MSC_HWA_SetTcctrNbs(pMscInstance, CommandBufferBitLength);
        MSC_HWA_SetTccor(pMscInstance, *CommandBufferPtr);
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_06();
}

/**
 * @brief   Get the status of the command transmission on the MSC bus.
 * @details This function is responsible to give the transmission status
 *          of a command on the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 *
 * @return                  Msc_StatusType .
 * @retval MSC_TX_BUSY      MSC command transmission in progress.
 * @retval MSC_TX_OK        MSC command transmission successful.
 *
 */
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel)
{
    uint32                CoreId     = MSC_GetCoreID();
    Msc_StatusType        tempReturn = MSC_TX_OK;
    const MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];
    uint8 u8CmdNeedSend;
    uint8 u8CmdFrameBusy;

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_07();
    {
        u8CmdFrameBusy = MSC_HWA_GetCfb(pMscInstance);
        u8CmdNeedSend  = MSC_HWA_GetCmdNeedSend(pMscInstance);

        if ((u8CmdFrameBusy == TRUE) || (u8CmdNeedSend == TRUE))
        {
            tempReturn = MSC_TX_BUSY;
        }
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_07();

    return (tempReturn);
}

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception status
 *          of the MSC channel.
 *          If the reception of a response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 * @param[in] eRxindex MSC Rx register index.
 * @param[out] pRxDataBufferPtr Pointer to data to be received.
 *
 * @return            Msc_StatusType.
 * @retval MSC_RX_IDLE      MSC waiting for data reception.
 * @retval MSC_RX_BUSY      MSC data reception in progress.
 * @retval MSC_RX_OK        MSC data reception successful.
 * @retval MSC_RX_ERROR     MSC data reception error.
 * @retval MSC_RX_OVERFLOW  Previous data overwritten by MSC current data reception.
 *
 */
#if (MSC_POLLING_USED == STD_ON)
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetRxStatus(uint8             u8Channel,
                                                        MSC_RDRxIndexType eRxindex,
                                                        uint16           *pRxDataBufferPtr,
                                                        uint8            *pLogicAddr)
{
    Msc_StatusType               tempReturn = MSC_RX_IDLE;
    uint8                        u8Valid;
    MSC_ReceiveStatusType        ErrorCheck;
    const Msc_ChannelConfigType *pInitConfig = NULL_PTR;
    volatile uint32             *pRdrx;
    uint32                       CoreId = MSC_GetCoreID();
    MSC_Type                    *pMscInstance;
    uint8                        u8HwChannel = 0;

    pInitConfig = Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel];
    if (pInitConfig != NULL_PTR)
    {
        u8HwChannel  = Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId;
        pRdrx        = s_apMscRdrxBase[u8HwChannel][eRxindex];
        pMscInstance = s_apMsc_HwInstances[u8HwChannel];
        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_08();
        {
            u8Valid = MSC_HWA_GetRdrxVld(pRdrx);
            /* Check Errors.*/
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
            to an inappropriate essential type. Reason: The number of return value will not exceed
            the limit. */
            ErrorCheck = (MSC_ReceiveStatusType)MSC_HWA_GetRdrxRerr(pRdrx);
            /* PRQA S 4342 -- */
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_08();

        if (u8Valid == TRUE)
        {
            if (ErrorCheck == MSC_RSV_SUCCESS)
            {
                SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_09();
                {
                    if (MSC_RX_12_BIT_LENGTH == pInitConfig->eRsvFrameType)
                    {
                        if (pRxDataBufferPtr != NULL_PTR)
                        {
                            *pRxDataBufferPtr = MSC_HWA_GetRdrxData(pRdrx);
                        }
                    }
                    else /* MSC_RX_12_BIT_LENGTH */
                    {
                        if (pRxDataBufferPtr != NULL_PTR)
                        {
                            *pRxDataBufferPtr = MSC_HWA_GetRdrxData(pRdrx);
                        }
                        if (pLogicAddr != NULL_PTR)
                        {
                            *pLogicAddr = MSC_HWA_GetRdrxAddr(pRdrx);
                        }
                    }
                    MSC_HWA_ClearRdrxVld(pRdrx);
                }
                SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_09();
                tempReturn = MSC_RX_OK;
            }
            else
            {
                tempReturn = MSC_RX_ERROR;
            }

            if (((MSC_HWA_GetRtorToie(pMscInstance) == TRUE) &&
                 (pInitConfig->u8TOIntEnable != 0U)) == FALSE)
            {
                MSC_HWA_ClearRtorTof(pMscInstance);
                /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
                The value of the result is always that of the left-hand operand.
                Reason: In register operation macros, there is a macro definition that shifts left
                by 0 bits. For code maintainability, this redundant writing style needs to be
                preserved. */
                MSC_HWA_SetRtor(pMscInstance,
                                MSC_RTOR_TOIE(1U) | MSC_RTOR_TOV(pInitConfig->u16TimeoutValue));
                /* PRQA S 2985 -- */
            }
        }
        else
        {
        }
    }
    else
    {
        tempReturn = MSC_RX_ERROR;
    }

    return (tempReturn);
}
#endif /* (MSC_POLLING_USED == STD_ON) */

/**
 * @brief   Get the status of a reception on the MSC bus.
 * @details This function is responsible to give the reception error status
 *          of the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be initialized.
 * @param[in] u8Rxindex MSC Rx register index.
 *
 * @return            Msc_StatusType.
 * @retval MSC_RX_OK        MSC data reception successful.
 * @retval MSC_RX_ERROR     MSC data reception error.
 * @retval MSC_RX_OVERFLOW  Previous data overwritten by MSC current data reception.
 *
 */
/* PRQA S 1505 ++ #Misra-C:2012 Rule-8.7
 * Reason: It will used in CDD_Msc.c while MSC_POLLING_USED is STD_ON*/
CDD_MSC_TEXT_SECTION Msc_StatusType Msc_LLD_GetRxErrorStatus(uint8 u8Channel, uint8 u8Rxindex)
/* PRQA S 1505 -- */
{
    Msc_StatusType         eTempStatus;
    uint8                  u8Valid;
    MSC_ReceiveStatusType  ErrorCheck;
    uint32                 CoreId = MSC_GetCoreID();
    volatile const uint32 *pRdrx =
        s_apMscRdrxBase[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId][u8Rxindex];

    SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_10();
    {
        u8Valid = MSC_HWA_GetRdrxVld(pRdrx);
        /* Check Errors.*/
        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.3
         * Reason: Enumeration is identical with value in register*/
        ErrorCheck = (MSC_ReceiveStatusType)MSC_HWA_GetRdrxRerr(pRdrx);
        /* PRQA S 4442 -- */
    }
    SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_10();

    if (u8Valid == TRUE)
    {
        if (ErrorCheck == MSC_RSV_SUCCESS)
        {
            eTempStatus = MSC_RX_OK;
        }
        else
        {
            eTempStatus = MSC_RX_ERROR;
        }
    }
    else
    {
        eTempStatus = MSC_RX_IDLE;
    }

    return (eTempStatus);
}

/**
 * @brief   Change the SDI.
 * @details This function is responsible to change the SDI
 *          of the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be changed.
 * @param[in] eSDIChannel MSC SDI channel to be selected.
 *
 * @return Std_ReturnType.
 * @retval E_OK   MSC SDI channel switches successfully.
 * @retval E_NOT_OK       MSC SDI channel switches failed..
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8                u8Channel,
                                                             MSC_SDISelectionType eSDIChannel)
{
    Std_ReturnType  eTempReturn = E_NOT_OK;
    uint32          u32TempValue;
    uint32          u32TempTryCount = 0u;
    uint32          CoreId          = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];

    do
    {
        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_16();
        {
#if (MSC_RXBUSY_AVAILABLE == STD_OFF)
            u32TempValue = MSC_HWA_GetRccsrRc(pMscInstance);
#else
            u32TempValue = MSC_HWA_GetRccsrRxBusy(pMscInstance);
#endif
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_16();

        /* check receive rc flag */
        if (u32TempValue == 0U)
        {
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount < MSC_TIMEOUT_LOOPS);

    if (u32TempTryCount != MSC_TIMEOUT_LOOPS)
    {
        SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_17();
        {
            u32TempValue = (MSC_HWA_GetIocr(pMscInstance) & ~MSC_IOCR_IDS_MASK) |
                           MSC_IOCR_IDS(eSDIChannel);
            MSC_HWA_SetIocr(pMscInstance, u32TempValue);
        }
        SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_17();

        eTempReturn = E_OK;
    }
    return eTempReturn;
}

/**
 * @brief   Change the EN.
 * @details This function is responsible to change the EN
 *          of the MSC channel.
 *
 * @param[in] u8Channel MSC channel to be changed.
 * @param[in] eENx MSC  EN type to be selected.
 * @param[in] eENn MSC  EN channel to be selected.
 *
 * @return            Std_ReturnType.
 * @retval E_OK   MSC EN channel switches successfully.
 * @retval E_NOT_OK       MSC EN channel switches failed..
 *
 */
CDD_MSC_TEXT_SECTION Std_ReturnType Msc_LLD_SwitchEN(uint8             u8Channel,
                                                     Msc_ENxType       eEnx,
                                                     Msc_ENxActiveType eENn)
{
    Std_ReturnType  eTempReturn = E_NOT_OK;
    uint32          u32TempValue;
    uint32          u32TempTryCount = 0u;
    uint32          CoreId          = MSC_GetCoreID();
    MSC_Type *const pMscInstance =
        s_apMsc_HwInstances[Msc_CfgPtr[CoreId]->Msc_Channel[u8Channel]->u8ChannelId];
    uint8 u8CmdNeedSend;
    uint8 u8CmdFrameBusy;
    uint8 u8DataNeedSend;
    uint8 u8DataFrameBusy;

    if (eEnx == MSC_ENC)
    {
        do
        {
            SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_18();
            {
                u8CmdFrameBusy = MSC_HWA_GetCfb(pMscInstance);
                u8CmdNeedSend  = MSC_HWA_GetCmdNeedSend(pMscInstance);

                if ((u8CmdNeedSend == TRUE) || (u8CmdFrameBusy == TRUE))
                {
                    u32TempValue = TRUE;
                }
                else
                {
                    u32TempValue = FALSE;
                }
            }
            SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_18();

            /* check receive rc flag */
            if (u32TempValue == FALSE)
            {
                break;
            }
            else
            {
                u32TempTryCount++;
            }
        }
        while (u32TempTryCount < MSC_TIMEOUT_LOOPS);

        if (u32TempTryCount != MSC_TIMEOUT_LOOPS)
        {
            SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_19();
            {
                u32TempValue = (MSC_HWA_GetIocr(pMscInstance) & ~MSC_IOCR_ESC_MASK) |
                               MSC_IOCR_ESC(eENn);
                MSC_HWA_SetIocr(pMscInstance, u32TempValue);
            }
            SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_19();
            eTempReturn = E_OK;
        }
    }
    else
    {
        do
        {
            SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_20();
            {
                u8DataFrameBusy = MSC_HWA_GetDfb(pMscInstance);
                u8DataNeedSend  = MSC_HWA_GetDataNeedSend(pMscInstance);

                if ((u8DataFrameBusy == TRUE) || (u8DataNeedSend == TRUE))
                {
                    u32TempValue = TRUE;
                }
                else
                {
                    u32TempValue = FALSE;
                }
            }
            SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_20();

            /* check receive rc flag */
            if (u32TempValue == FALSE)
            {
                break;
            }
            else
            {
                u32TempTryCount++;
            }
        }
        while (u32TempTryCount < MSC_TIMEOUT_LOOPS);

        if (u32TempTryCount != MSC_TIMEOUT_LOOPS)
        {
            if (eEnx == MSC_ENH)
            {
                SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_21();
                {
                    u32TempValue = (MSC_HWA_GetIocr(pMscInstance) & ~MSC_IOCR_ESH_MASK) |
                                   MSC_IOCR_ESH(eENn);
                    MSC_HWA_SetIocr(pMscInstance, u32TempValue);
                }
                SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_21();
            }
            else
            {
                SchM_Enter_Msc_MSC_EXCLUSIVE_AREA_22();
                {
                    u32TempValue = (MSC_HWA_GetIocr(pMscInstance) & ~MSC_IOCR_ESL_MASK) |
                                   MSC_IOCR_ESL(eENn);
                    MSC_HWA_SetIocr(pMscInstance, u32TempValue);
                }
                SchM_Exit_Msc_MSC_EXCLUSIVE_AREA_22();
            }
            eTempReturn = E_OK;
        }
    }

    return eTempReturn;
}

CDD_MSC_TEXT_SECTION static Std_ReturnType Msc_LLD_InterruptChannelCheck(
    uint8                     u8HwChannel,
    uint8                    *pChannel,
    Msc_ChannelConfigTypePtr *pConfig)
{
    Std_ReturnType           ret         = E_NOT_OK;
    uint32                   CoreId      = MSC_GetCoreID();
    Msc_ChannelConfigTypePtr pChannelCfg = NULL_PTR;
    uint8                    u8Channel   = 0;

    if ((Msc_CfgPtr[CoreId] != NULL_PTR) && (Msc_CfgPtr[CoreId]->PartitionCoreId == CoreId) &&
        (Msc_DrvStatus[CoreId] == MSC_INIT))
    {
        /* PRQA S 2877 ++ #QAC Dir 4.1 This loop will never be executed more than once.
        Reason:  In different chip, MSC Has different quantities.*/
        for (uint8 i = 0; i < MSC_HW_MAX_MODULES; i++)
        /* PRQA S 2877 -- */
        {
            if (Msc_CfgPtr[CoreId]->Msc_Channel[i]->u8ChannelId == u8HwChannel)
            {
                u8Channel   = i;
                pChannelCfg = Msc_CfgPtr[CoreId]->Msc_Channel[i];
                break;
            }
        }

        if ((pChannelCfg != NULL_PTR) && (pChannelCfg->u32ChannelCoreId == CoreId))
        {
            if (Msc_ChStatus[u8Channel] == MSC_CHANNEL_ACTIVE)
            {
                *pChannel = u8Channel;
                *pConfig  = pChannelCfg;
                ret       = E_OK;
            }
        }
    }

    return ret;
}

/**
 * @brief   Interrupt handler for RX timeout on Msc.
 * @details This function shall manage all the RX ISRs on the
 *          addressed channel.
 *
 * @param[in]   channel of the logical MSC channel to be addressed.
 *
 * @return       void.
 *
 *
 * @note         Internal driver function.
 */
CDD_MSC_TEXT_SECTION static void Msc_LLD_ToInterruptHandler(uint8 u8HwChannel)
{
    const MSC_Type          *pMscInstance;
    Msc_ChannelConfigTypePtr pChannelCfg = NULL_PTR;
    uint8                    u8Channel   = 0U;

    if (Msc_LLD_InterruptChannelCheck(u8HwChannel, &u8Channel, &pChannelCfg) == E_OK)
    {
        pMscInstance = s_apMsc_HwInstances[u8HwChannel];
        if (MSC_HWA_GetRtorToie(pMscInstance) == TRUE)
        {
            Msc_ChStatusRx[u8Channel] = MSC_RX_TIMEOUT;
            if (pChannelCfg->pMscToNotification != NULL_PTR)
            {
                pChannelCfg->pMscToNotification();
            }
        }
    }

    return; /* exit function with no return */
}

#if (MSC_POLLING_USED == STD_OFF)
/**
 * @brief   Interrupt handler for RX on Msc.
 * @details This function shall manage all the RX ISRs on the
 *          addressed channel.
 *
 * @param[in]   channel of the logical MSC channel to be addressed.
 *
 * @return       void.
 *
 *
 * @note         Internal driver function.
 */
CDD_MSC_TEXT_SECTION static void Msc_LLD_RxInterruptHandler(uint8 u8HwChannel)
{
    uint8                    u8Channel = 0U;
    MSC_Type                *pMscInstance;
    volatile uint32         *pRdrx;
    Msc_StatusType           ErrorCheck;
    uint8                    u8Rxindex;
    Msc_ChannelConfigTypePtr pChannelCfg = NULL_PTR;

    if (Msc_LLD_InterruptChannelCheck(u8HwChannel, &u8Channel, &pChannelCfg) == E_OK)
    {
        pMscInstance = s_apMsc_HwInstances[u8HwChannel];

        for (u8Rxindex = 0u; u8Rxindex < MSC_RDRx_COUNT; u8Rxindex++)
        {
            pRdrx      = s_apMscRdrxBase[u8HwChannel][u8Rxindex];
            ErrorCheck = Msc_LLD_GetRxErrorStatus(u8Channel, u8Rxindex);

            if (ErrorCheck == MSC_RX_OK)
            {
                if (Msc_RDRxStatus[u8Channel][u8Rxindex] == MSC_RX_OK)
                {
                    ErrorCheck = MSC_RX_OVERFLOW;
                }
                Msc_RDRxLogicAddr[u8Channel][u8Rxindex]  = MSC_HWA_GetRdrxAddr(pRdrx);
                Msc_RDRxDataBuffer[u8Channel][u8Rxindex] = MSC_HWA_GetRdrxData(pRdrx);
                MSC_HWA_ClearRdrxVld(pRdrx);
            }
            else if (ErrorCheck == MSC_RX_ERROR)
            {
                MSC_HWA_ClearRdrxVld(pRdrx);
            }
            else
            {
                /*ErrorCheck==MSC_RX_IDLE*/
            }
            Msc_RDRxStatus[u8Channel][u8Rxindex] = ErrorCheck;
        }
        for (u8Rxindex = 0u; u8Rxindex < MSC_RDRx_COUNT; u8Rxindex++)
        {
            if ((Msc_RDRxStatus[u8Channel][u8Rxindex] == MSC_RX_OK) ||
                (Msc_RDRxStatus[u8Channel][u8Rxindex] == MSC_RX_OVERFLOW))
            {
                Msc_ChStatusRx[u8Channel] = MSC_RX_OK;
                break;
            }
        }
        if (pChannelCfg->pMscRxNotification != NULL_PTR)
        {
            pChannelCfg->pMscRxNotification();
        }

        if ((MSC_HWA_GetRtorToie(pMscInstance) == FALSE) && (pChannelCfg->u8TOIntEnable != 0U))
        {
            MSC_HWA_ClearRtorTof(pMscInstance);
            /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
            The value of the result is always that of the left-hand operand.
            Reason: In register operation macros, there is a macro definition that shifts by 0 bits.
            For code maintainability, this redundant writing style needs to be preserved. */
            MSC_HWA_SetRtor(pMscInstance,
                            MSC_RTOR_TOIE(pChannelCfg->u8TOIntEnable) |
                                MSC_RTOR_TOV(pChannelCfg->u16TimeoutValue));
            /* PRQA S 2985 -- */
        }
    }

    return; /* exit function with no return */
}
#endif

CDD_MSC_TEXT_SECTION void Msc_LLD_InterruptHandler(uint8 u8Channel)
{
    MSC_Type *pMscInstance;
    pMscInstance = s_apMsc_HwInstances[u8Channel];
#if (MSC_POLLING_USED == STD_OFF)
    if (MSC_HWA_GetRfi(pMscInstance) == TRUE)
    {
        MSC_HWA_ClearCrfi(pMscInstance);
        Msc_LLD_RxInterruptHandler(u8Channel);
    }
#endif
    if (MSC_HWA_GetRtorTof(pMscInstance) == TRUE)
    {
        MSC_HWA_ClearRtorTof(pMscInstance);
        Msc_LLD_ToInterruptHandler(u8Channel);
    }
}

#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */

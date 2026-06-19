#include "Bsp_Lin.h"

/************ Local Variables *******************/

/************ Interrupt Map *******************/
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined Reason: It is just for testing or demonstration */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The hardware will call the function */
#ifdef LIN_FCUART_6_ISR_USED
extern void Lin_IsrTxRx_FCUART_6(void);

void FCUART6_RxTx_IRQHandler(void)
{
    Lin_IsrTxRx_FCUART_6();
}
#endif

#ifdef LIN_FCUART_2_ISR_USED
extern void Lin_IsrTxRx_FCUART_2(void);

void FCUART2_RxTx_IRQHandler(void)
{
    Lin_IsrTxRx_FCUART_2();
}
#endif

#ifdef LIN_FCUART_17_ISR_USED
extern void Lin_IsrTxRx_FCUART_17(void);

void FCUART17_RxTx_IRQHandler(void)
{
    Lin_IsrTxRx_FCUART_17();
}
#endif

#ifdef LIN_FCUART_7_ISR_USED
extern void Lin_IsrTxRx_FCUART_7(void);

void FCUART7_RxTx_IRQHandler(void)
{
    Lin_IsrTxRx_FCUART_7();
}
#endif
/* PRQA S 1503 -- */
/* PRQA S 3408 -- */
/************ Callback functions *******************/
/************ Global functions *******************/
void Bsp_Lin_Init(void)
{
    uint32 CoreId = GET_CPU_ID();
#if (LIN_PRECOMPILE_SUPPORT == STD_ON)
    Lin_Init(NULL_PTR);
#else
    Lin_Init(Lin_Config[CoreId]);
#endif
    (void)Lin_WakeupInternal(Lin_Config[CoreId]->pLin_CoreConfig[0]->pLinChannel->u8LinChannelID);
    (void)Lin_WakeupInternal(Lin_Config[CoreId]->pLin_CoreConfig[1]->pLinChannel->u8LinChannelID);

    if (CoreId == 0)
    {
        IntMgr_SetPriority(FCUART6_IRQn, 1);
        IntMgr_EnableInterrupt(FCUART6_IRQn);
    }
    if (CoreId == 1)
    {
        IntMgr_SetPriority(FCUART2_IRQn, 1);
        IntMgr_EnableInterrupt(FCUART2_IRQn);
    }
}

void Bsp_Lin_1s_Task_Event(void)
{
    Lin_PduType  tPduData;
    static uint8 aBuffer[8]     = { 0x1, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };
    uint8        aBufferSend[8] = { 0 };
    static uint8 u8Count        = 1;
#if (LIN_PRECOMPILE_SUPPORT == STD_ON)
    uint8 u8ChannelId = Lin_PBCfgVarPredef[0]->pLin_CoreConfig[0]->pLinChannel->u8LinChannelID;
#else
    uint8 u8ChannelId = Lin_Config[0]->pLin_CoreConfig[0]->pLinChannel->u8LinChannelID;
#endif
    Lin_StatusType tStatus;
    const uint8   *pRcvBuffer;

    if ((u8Count % 2U) == 0U)
    {
        tStatus = Lin_GetStatus(u8ChannelId, &pRcvBuffer);
        if (tStatus == LIN_RX_OK)
        {
            for (uint8 i = 0U; i < 8U; i++)
            {
                aBufferSend[i] = pRcvBuffer[i];
            }
        }
        else
        {
            for (uint8 i = 0U; i < 8U; i++)
            {
                aBufferSend[i] = aBuffer[i];
            }
        }
        tPduData.Pid = 0xA6U;
        tPduData.Cs  = LIN_ENHANCED_CS;
        tPduData.Drc = LIN_FRAMERESPONSE_TX;
        tPduData.Dl  = 8;
        aBuffer[0]   = u8Count;
        u8Count++;
        tPduData.SduPtr = aBufferSend;

        (void)Lin_SendFrame(u8ChannelId, &tPduData);
    }
    else
    {
        tPduData.Pid = 0x85U;
        tPduData.Cs  = LIN_ENHANCED_CS;
        tPduData.Drc = LIN_FRAMERESPONSE_RX;
        tPduData.Dl  = 8;
        aBuffer[0]   = u8Count;
        u8Count++;
        tPduData.SduPtr = aBuffer;

        (void)Lin_SendFrame(u8ChannelId, &tPduData);
    }
}

/**
 *
 * @brief   LIN callback Handle.
 * @details This callback function is used to signal the events to the HLD layer.
 *
 * @param[in]       u8Channel LIN hardware number.
 *       [in-out]   LinStateStruct Lin driver state structure.
 * @return          void.
 *
 * @note    Non-Autosar Service.
 */
/* [FUNC_Lin_0010] */
void Lin_Callback_Handle(uint8 u8Channel, Lin_StateStructType *LinStateStruct)
{
    (void)u8Channel;
    (void)LinStateStruct;
}

void LinIf_LinErrorIndication(NetworkHandleType Channel, Lin_SlaveErrorType ErrorStatus)
{
    (void)Channel;
    (void)ErrorStatus;
}

Std_ReturnType LinIf_HeaderIndication(NetworkHandleType Channel, Lin_PduType *PduPtr)
{
    if (PduPtr->Pid == 0x85)
    {
        static uint8 TxBuffer[8] = { 0x67, 0x22, 0x33, 0x04, 0x05, 0x06, 0x07, 0x08 };
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
        PduPtr->Drc = LIN_MASTER_RESPONSE;
#else
        PduPtr->Drc = LIN_FRAMERESPONSE_TX;
#endif
        PduPtr->SduPtr = TxBuffer;
        PduPtr->Dl     = 8u;
    }
    else if (PduPtr->Pid == 0x06)
    {
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
        PduPtr->Drc = LIN_SLAVE_TO_SLAVE;
#else
        PduPtr->Drc = LIN_FRAMERESPONSE_IGNORE;
#endif
        PduPtr->Dl = 1u;
    }
    else
    {
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
        PduPtr->Drc = LIN_SLAVE_RESPONSE;
#else
        PduPtr->Drc = LIN_FRAMERESPONSE_RX;
#endif
        PduPtr->Dl = 8u;
    }

    (void)Channel;
    (void)PduPtr;
    return E_OK;
}

uint8 Lin_Slave_Receive[8];
void  LinIf_RxIndication(NetworkHandleType Channel, uint8 *Lin_SduPtr)
{
    (void)Channel;
    for (uint8 i = 0; i < 8; i++)
    {
        Lin_Slave_Receive[i] = Lin_SduPtr[i];
    }
}

void LinIf_TxConfirmation(NetworkHandleType Channel)
{
    (void)Channel;
}

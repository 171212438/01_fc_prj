#include "Bsp_Uart.h"

/************ Local Variables *******************/
#define UART_TX_CHANNEL 0
#define UART_RX_CHANNEL 0

#define WELCOME_UART "Hello, This is a Uart Demo!"

/* Length of the message to be received*/
#define DATA_LEN  30U
/************ Interrupt Map *******************/
#ifdef UART_INSTANCE_USING_1
extern void UART_1_IRQHandler(void);
void FCUART1_RxTx_IRQHandler(void)
{
    UART_1_IRQHandler();
}

#if (UART_HAS_DMA_ENABLED == STD_ON)
extern void Uart_1_DmaRxCompleteCallback(void);
extern void Uart_1_DmaTxCompleteCallback(void);
#endif

#endif

/************ Local functions *******************/
#if 0
static Std_ReturnType Uart_SyncTransmitData(uint8 sendChannel, uint8 recvChannel, const uint8* pBuffer, uint32 length)
{
    Std_ReturnType ReturnVal = E_NOT_OK;
    Uart_StatusType eStatus;
    uint8 Rx_Buffer[DATA_LEN];

    while(ReturnVal != E_OK)
    {
        ReturnVal = Uart_SyncSend(sendChannel, pBuffer, length, 30000);
    }
    ReturnVal = E_NOT_OK;

    while(ReturnVal != E_OK)
    {
        ReturnVal = Uart_SyncReceive(recvChannel, Rx_Buffer, length, 30000);
    }

    return ReturnVal;
}

static Std_ReturnType Uart_AsyncTransmitData(uint8 sendChannel, uint8 recvChannel, const uint8* pBuffer, uint32 length)
{
    Std_ReturnType ReturnVal = E_NOT_OK;
    Uart_StatusType eStatus = UART_STATUS_TIMEOUT;
    uint32 BytesTransfer;
    uint8 Rx_Buffer[DATA_LEN];

    ReturnVal = Uart_AsyncSend(sendChannel, pBuffer, length);
    if(ReturnVal == E_NOT_OK)
    {
        return E_NOT_OK;
    }

    ReturnVal = Uart_AsyncReceive(recvChannel, Rx_Buffer, length);
    if(ReturnVal == E_NOT_OK)
    {
        return E_NOT_OK;
    }

    while(eStatus != UART_STATUS_SUCCESS)
    {
        eStatus = Uart_GetStatus(0, &BytesTransfer, UART_SEND);
    }

    eStatus = UART_STATUS_TIMEOUT;

    while(eStatus != UART_STATUS_SUCCESS)
    {
        eStatus = Uart_GetStatus(0, &BytesTransfer, UART_RECEIVE);
    }

    return E_OK;
}
#endif

/************ Global functions *******************/
#if UART_MULTICORE_SUPPORT == STD_ON
void Bsp_Uart_Init(void)
{
    uint32 CoreId = GET_CPU_ID();

    if (CoreId == 0)
    {
    #if (UART_PRECOMPILE_SUPPORT == STD_ON)
        Uart_Init(NULL_PTR);
    #else
        Uart_Init(&Uart_Config_EcucPartition_0);
    #endif
        IntMgr_SetPriority(FCUART1_IRQn, 1);
        IntMgr_EnableInterrupt(FCUART1_IRQn);
    }
    else if (CoreId == 1)
    {

    }
    else if (CoreId == 2)
    {

    }

}
#else
void Bsp_Uart_Init(void)
{
    #if (UART_PRECOMPILE_SUPPORT == STD_ON)
    Uart_Init(NULL_PTR);
    #else
    Uart_Init(&Uart_Config);
    #endif

    IntMgr_SetPriority(FCUART1_IRQn, 1);
    IntMgr_EnableInterrupt(FCUART1_IRQn);

}
#endif

void Uart_Callback(const uint8 HwInstance,
        const uint16 size,
		  const uint8 *DataBuffer,
        const Uart_EventType Event)
{
    if(HwInstance == UART_INSTANCE_USING_1)
    {
        if(Event == UART_EVENT_END_TRANSFER)
        {
            /* Do something */
        }
        else if(Event == UART_EVENT_ERROR)
        {
            /* Do something */
        }
    }
}

#if (UART_HAS_DMA_ENABLED == STD_ON)
void FCUart_DMARxIsr(void)
{
    Uart_1_DmaRxCompleteCallback();

}

void FCUart_DMATxIsr(void)
{
    Uart_1_DmaTxCompleteCallback();
}
#endif

#if UART_MULTICORE_SUPPORT == STD_ON

#else

#endif

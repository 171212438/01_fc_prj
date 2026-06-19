#include "Bsp_Uart.h"

/************ Local Variables *******************/
#define UART_TX_CHANNEL 0
#define UART_RX_CHANNEL 0

#define WELCOME_UART "Hello, This is a Uart Demo!"

/* Length of the message to be received*/
#define DATA_LEN  30U
/************ Interrupt Map *******************/
#ifdef UART_INSTANCE_USING_2
extern void UART_2_IRQHandler(void);
void FCUART2_RxTx_IRQHandler(void)
{
    UART_2_IRQHandler();
}

#if (UART_HAS_DMA_ENABLED == STD_ON)
extern void Uart_2_DmaRxCompleteCallback(void);
extern void Uart_2_DmaTxCompleteCallback(void);
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
void Bsp_Uart_Init(void)
{
    #if (UART_PRECOMPILE_SUPPORT == STD_ON)
    Uart_Init(NULL_PTR);
    #else
    Uart_Init(&Uart_Config);
    #endif

    IntMgr_SetPriority(FCUART2_IRQn, 1);
    IntMgr_EnableInterrupt(FCUART2_IRQn);
}

void Uart_Callback(const uint8 HwInstance,const uint16 size,const uint8 *DataBuffer, const Uart_EventType Event)
{
    if(HwInstance == UART_INSTANCE_USING_2)
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
    Uart_2_DmaRxCompleteCallback();

}

void FCUart_DMATxIsr(void)
{
    Uart_2_DmaTxCompleteCallback();
}
#endif

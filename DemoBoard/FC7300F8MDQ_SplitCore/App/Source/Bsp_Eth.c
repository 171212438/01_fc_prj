#include "Bsp_Eth.h"

/************ Interrupt handlers *******************/
extern ISR(Eth_System_ISR);
extern ISR(Eth_Rx_CHannel0_ISR);
extern ISR(Eth_Tx_CHannel0_ISR);
extern ISR(Eth_Rx_CHannel1_ISR);
extern ISR(Eth_Tx_CHannel1_ISR);

void ENET_System_IRQHandler(void)
{
    Eth_System_ISR();
}

void ENET_Tx0_IRQHandler(void)
{
    Eth_Tx_CHannel0_ISR();
}

void ENET_Rx0_IRQHandler(void)
{
    Eth_Rx_CHannel0_ISR();
}

void ENET_Tx1_IRQHandler(void)
{
    Eth_Tx_CHannel1_ISR();
}

void ENET_Rx1_IRQHandler(void)
{
    Eth_Rx_CHannel1_ISR();
}

void Bsp_Eth_Init(void)
{
    if (EthPartitionCoreIdMatched())
    {
        /* Enable NVIC ENET interrupts */
        IntMgr_SetPriority(ENET_Tx0_IRQn, 2U);
        IntMgr_EnableInterrupt(ENET_Tx0_IRQn);
        IntMgr_SetPriority(ENET_Tx1_IRQn, 2U);
        IntMgr_EnableInterrupt(ENET_Tx1_IRQn);
        IntMgr_SetPriority(ENET_Rx0_IRQn, 2U);
        IntMgr_EnableInterrupt(ENET_Rx0_IRQn);
        IntMgr_SetPriority(ENET_Rx1_IRQn, 2U);
        IntMgr_EnableInterrupt(ENET_Rx1_IRQn);
        IntMgr_SetPriority(ENET_System_IRQn, 2U);
        IntMgr_EnableInterrupt(ENET_System_IRQn);
    }

#if (STD_ON == ETH_PRECOMPILE_SUPPORT)
    Eth_Init(NULL_PTR);
#else
    Eth_Init(BSP_ETH_CONFIG_PTR);
#endif
}

void Bsp_Eth_100ms_Task_Event(void)
{
    if (EthPartitionCoreIdMatched())
    {
        Eth_MainFunction();
    }
}

void Bsp_Eth_GetCurrentTime(void)
{
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    Eth_TimeStampQualType timeQual  = ETH_UNCERTAIN;
    Eth_TimeStampType     timeStamp = { 0U, 0U, 0U };
    if (E_OK == Eth_GetCurrentTime(BSP_ETH_INSTANCE, &timeQual, &timeStamp))
    {

        DEBUG_INFO("\r\nGetCurrentTime %s: %d s, %d ns\r\n",
                   (timeQual == ETH_VALID) ? "valid" : "invalid",
                   (int)timeStamp.seconds,
                   (int)timeStamp.nanoseconds);
    }
    else
    {
        DEBUG_INFO("\r\nGetCurrentTime: return E_NOT_OK\r\n");
    }
#endif
}

#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
void Eth_Fatal_Error_Callback(uint8 CtrlIdx, Eth_FatalErrorType ErrType)
{
}
#endif

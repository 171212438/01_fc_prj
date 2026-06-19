#include "Bsp_EthTrcv.h"

static void Bsp_EthTrcv_Delay(uint32 count);

void Bsp_EthTrcv_Reset(void)
{
    Dio_WriteChannel(DioConf_DioChannel_ETH_PHYRESET, STD_HIGH);
    Bsp_EthTrcv_Delay(10000000U);
    Dio_WriteChannel(DioConf_DioChannel_ETH_PHYRESET, STD_LOW);
    Bsp_EthTrcv_Delay(10000000U);
}

static void Bsp_EthTrcv_Delay(uint32 count)
{
    volatile unsigned int i;
    for (i = 0U; i < count; ++i)
    {
        __asm("nop");
    }
}

void Bsp_EthTrcv_Init(void)
{
    if (EthTrcvPartitionCoreIdMatched())
    {
#if (STD_ON == ETHTRCV_PRECOMPILE_SUPPORT)
        EthTrcv_Init(NULL_PTR);
#else
        EthTrcv_Init(BSP_ETHTRCV_CONFIG_PTR);
#endif
    }
}

/* Select the MDC/MDIO pin connected to automotive phy (TRUE) or industrial phy (FALSE) */
void MiiPinSelect(boolean BaseT1Phy)
{

    if (BaseT1Phy)
    {
        Dio_WriteChannel(DioConf_DioChannel_ETH_MDIOSEL, STD_HIGH);
    }
    else
    {
        Dio_WriteChannel(DioConf_DioChannel_ETH_MDIOSEL, STD_LOW);
    }
    /* delay some ticks */
    Bsp_EthTrcv_Delay(50U);
}

void Bsp_EthTrcv_100ms_Task_Event(void)
{
    if (EthTrcvPartitionCoreIdMatched())
    {
        EthTrcv_MainFunction();
    }
}

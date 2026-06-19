#include "Bsp_EthTrcv.h"

static void Bsp_EthTrcv_Delay(uint32 count);

#ifdef ETHTRCV_BRIDGE_MODE
static void Bsp_EthTrcv_HardwareConfigPinMode(void);
static void Bsp_EthTrcv_NormalFunctionPinMode(void);

static void Bsp_EthTrcv_HardwareConfigPinMode(void)
{
    Port_SetPinMode(PortConf_PortContainer_2_ETH_RXD1, PORT_GPIO_MODE);
    Port_SetPinMode(PortConf_PortContainer_2_ETH_RXD3, PORT_GPIO_MODE);
    Bsp_EthTrcv_Delay(100U);
    // DEBUG_INFO("pc0 mode %x, pc15 mode %x\r\n",PORTC->PCR[0u],PORTC->PCR[15u]);

    Port_SetPinDirection(PortConf_PortContainer_2_ETH_RXD1, PORT_PIN_OUT);
    Port_SetPinDirection(PortConf_PortContainer_2_ETH_RXD3, PORT_PIN_OUT);
    Bsp_EthTrcv_Delay(100U);
    // DEBUG_INFO("pc dir %x\r\n",GPIOC->PDDR);

    Dio_WriteChannel(DioConf_DioChannel_ETH_PMYMODECFG0, STD_HIGH);
    Dio_WriteChannel(DioConf_DioChannel_ETH_PMYMODECFG2, STD_HIGH);
    Bsp_EthTrcv_Delay(100U);
    // DEBUG_INFO("pc data %x\r\n",GPIOC->PDOR);
}

static void Bsp_EthTrcv_NormalFunctionPinMode(void)
{
    Port_SetPinMode(PortConf_PortContainer_2_ETH_RXD1, PORT64_ENET_RXD1);
    Port_SetPinMode(PortConf_PortContainer_2_ETH_RXD3, PORT79_ENET_RXD3);
    // DEBUG_INFO("pc0 mode %x, pc15 mode %x\r\n",PORTC->PCR[0u],PORTC->PCR[15u]);
}
#endif

void Bsp_EthTrcv_Reset(void)
{
#ifdef ETHTRCV_BRIDGE_MODE
    Bsp_EthTrcv_HardwareConfigPinMode();
#endif

    Dio_WriteChannel(DioConf_DioChannel_ETH_PHYRESET, STD_HIGH);
    Bsp_EthTrcv_Delay(10000000U);
    Dio_WriteChannel(DioConf_DioChannel_ETH_PHYRESET, STD_LOW);
    Bsp_EthTrcv_Delay(10000000U);

#ifdef ETHTRCV_BRIDGE_MODE
    Bsp_EthTrcv_NormalFunctionPinMode();
#endif
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

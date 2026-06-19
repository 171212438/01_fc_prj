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
        switch (EthTrcvDerivateType())
        {
            case ETHTRCV_JL311X:
            case ETHTRCV_YT8512H:
                MiiPinSelect((boolean)TRUE);
                break;
            case ETHTRCV_YT8010A:
                MiiPinSelect((boolean)FALSE);
                break;
            default:
                break;
        }

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

static Std_ReturnType Eth_Trcv_PreInit_JL311x(uint8 CtrlIdx, Eth_PreInitMdioFunctionsType *MdioFuncs)
{
    uint16         RegVal;
    Std_ReturnType RetStatus = E_NOT_OK;
    uint32         TryTimes  = 65535;
    uint8          MiiIdx    = EthTrcvMiiIdx();

    /* Select PIN mux to 100BaseT1, configure PHY to MII mode */
    MiiPinSelect((boolean)TRUE);

    RetStatus =
        MdioFuncs->ReadMmd(CtrlIdx, MiiIdx, ETHTRCV_JL311X_MMD_PCS, ETHTRCV_JL311X_COMM_UCFG0, &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_COMM_UCFG0_MODE_MASK)) |
                          ETHTRCV_JL311X_COMM_UCFG0_MODE_MII);
        MdioFuncs->WriteMmd(CtrlIdx, MiiIdx, ETHTRCV_JL311X_MMD_PCS, ETHTRCV_JL311X_COMM_UCFG0, RegVal);
        RetStatus = MdioFuncs->ReadMmd(CtrlIdx,
                                       MiiIdx,
                                       ETHTRCV_JL311X_MMD_PMA_PMD,
                                       ETHTRCV_JL311X_BASIC_CONTROL,
                                       &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal |= ETHTRCV_JL311X_RESET_MASK;
            RetStatus = MdioFuncs->WriteMmd(CtrlIdx,
                                            MiiIdx,
                                            ETHTRCV_JL311X_MMD_PMA_PMD,
                                            ETHTRCV_JL311X_BASIC_CONTROL,
                                            RegVal);
            if (RetStatus == E_OK)
            {
                do
                {
                    RetStatus = MdioFuncs->ReadMmd(CtrlIdx,
                                                   MiiIdx,
                                                   ETHTRCV_JL311X_MMD_PMA_PMD,
                                                   ETHTRCV_JL311X_BASIC_CONTROL,
                                                   &RegVal);
                    if ((RetStatus != E_OK) || (TryTimes == 0U))
                    {
                        RetStatus = E_NOT_OK;
                        break;
                    }

                    --TryTimes;
                }
                while ((RegVal & ETHTRCV_JL311X_RESET_MASK) != 0U);
            }
        }
    }

    return RetStatus;
}

static Std_ReturnType Eth_Trcv_PreInit_YT8512H(uint8 CtrlIdx, Eth_PreInitMdioFunctionsType *MdioFuncs)
{
    /* Select PIN mux to 100BaseTX */
    MiiPinSelect((boolean)TRUE);
    return E_OK;
}

static Std_ReturnType Eth_Trcv_PreInit_YT8010A(uint8 CtrlIdx, Eth_PreInitMdioFunctionsType *MdioFuncs)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    uint32         TryTimes = 65535;
    uint8          MiiIdx   = EthTrcvMiiIdx();

    /* Select PIN mux to 100BaseT1, configure PHY to RMII2 mode */
    MiiPinSelect((boolean)FALSE);

    RetStatus = MdioFuncs->WriteMii(CtrlIdx,
                                    MiiIdx,
                                    ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                    ETHTRCV_YT8010A_EXTCOMBO_CTRL);
    if (RetStatus == E_OK)
    {
        RetStatus = MdioFuncs->ReadMii(CtrlIdx, MiiIdx, ETHTRCV_YT8010A_EXTREG_DATA, &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_YT8010A_MODE_SEL_MASK)) |
                              ETHTRCV_YT8010A_MODE_SEL_RMII2);
            RetStatus = MdioFuncs->WriteMii(CtrlIdx,
                                            MiiIdx,
                                            ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                            ETHTRCV_YT8010A_EXTCOMBO_CTRL);
            if (RetStatus == E_OK)
            {
                RetStatus = MdioFuncs->WriteMii(CtrlIdx, MiiIdx, ETHTRCV_YT8010A_EXTREG_DATA, RegVal);
                if (RetStatus == E_OK)
                {
                    RetStatus =
                        MdioFuncs->ReadMii(CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
                    if (RetStatus == E_OK)
                    {
                        RegVal |= ETHTRCV_UTP_BCR_SOFT_RESET;
                        RetStatus =
                            MdioFuncs->WriteMii(CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, RegVal);
                        if (RetStatus == E_OK)
                        {
                            do
                            {
                                RetStatus = MdioFuncs->ReadMii(CtrlIdx,
                                                               MiiIdx,
                                                               ETHTRCV_UTP_BASIC_CONTROL,
                                                               &RegVal);
                                if ((RetStatus != E_OK) || (TryTimes == 0U))
                                {
                                    RetStatus = E_NOT_OK;
                                    break;
                                }

                                --TryTimes;
                            }
                            while ((RegVal & ETHTRCV_UTP_BCR_SOFT_RESET) != 0U);
                        }
                    }
                }
            }
        }
    }

    MdioFuncs->WriteMii(CtrlIdx, MiiIdx, ETHTRCV_YT8010A_EXTREG_ADDRESS, ETHTRCV_YT8010A_EXTCOMBO_CTRL);
    MdioFuncs->ReadMii(CtrlIdx, MiiIdx, ETHTRCV_YT8010A_EXTREG_DATA, &RegVal);
    DEBUG_INFO("%s mode %d\r\n", __func__, RegVal >> 13U);

    return E_OK;
}

Std_ReturnType Eth_Trcv_PreInit_F4MDD_Demo(uint8 CtrlIdx, Eth_PreInitMdioFunctionsType *MdioFuncs)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    switch (EthTrcvDerivateType())
    {
        case ETHTRCV_JL311X:
            RetStatus = Eth_Trcv_PreInit_JL311x(CtrlIdx, MdioFuncs);
            break;
        case ETHTRCV_YT8512H:
            RetStatus = Eth_Trcv_PreInit_YT8512H(CtrlIdx, MdioFuncs);
            break;
        case ETHTRCV_YT8010A:
            RetStatus = Eth_Trcv_PreInit_YT8010A(CtrlIdx, MdioFuncs);
            break;
        default:
            break;
    }

    return RetStatus;
}

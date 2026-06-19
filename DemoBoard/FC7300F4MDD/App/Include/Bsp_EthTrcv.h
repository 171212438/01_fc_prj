#ifndef _BSP_ETHTRCV_H_
#define _BSP_ETHTRCV_H_

#include "EthTrcv_Reg.h"
#include "Bsp_McalHeader.h"

#define BSP_ETHTRCV_INSTANCE 0U

extern const EthTrcv_ConfigType EthTrcv_Config;

#define BSP_ETHTRCV_CONFIG_PTR (&EthTrcv_Config)

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
#define EthTrcvPartitionCoreIdMatched() \
    (BSP_ETHTRCV_CONFIG_PTR->TrcvCfgPtr[0U].EcucPartition == GET_CPU_ID())
#else
#define EthTrcvPartitionCoreIdMatched() 1U
#endif

#define EthTrcvMiiIdx()       (BSP_ETHTRCV_CONFIG_PTR->TrcvCfgPtr[0U].MiiIfPtr->MiiIdx)

#define EthTrcvDerivateType() (BSP_ETHTRCV_CONFIG_PTR->TrcvCfgPtr[0U].DerivateType)

/************ Global functions *******************/

void Bsp_EthTrcv_Reset(void);

/* Should only be called by the configured core */
void Bsp_EthTrcv_Init(void);

/* Should only be called by the configured core */
void Bsp_EthTrcv_100ms_Task_Event(void);

/* Call back function configured in EB tresos */
void MiiPinSelect(boolean BaseT1Phy);

Std_ReturnType Eth_Trcv_PreInit_F4MDD_Demo(uint8 CtrlIdx, Eth_PreInitMdioFunctionsType *MdioFuncs);
#endif /* _BSP_ETHTRCV_H_ */

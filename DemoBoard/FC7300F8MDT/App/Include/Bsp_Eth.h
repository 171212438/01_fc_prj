#ifndef _BSP_ETH_H_
#define _BSP_ETH_H_

#include "Bsp_McalHeader.h"
#include "SchM_Eth.h"

#define BSP_ETH_INSTANCE   0U

#define BSP_ETH_CONFIG_PTR (&Eth_Config)

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
#define EthPartitionCoreIdMatched() (BSP_ETH_CONFIG_PTR->CtrlPtr[0U].EcucPartition == GET_CPU_ID())
#else
#define EthPartitionCoreIdMatched() 1U
#endif

/************ Global functions *******************/
/* Can be called by all cores */
void Bsp_Eth_Init(void);

/* Should only be called by the configured core */
void Bsp_Eth_100ms_Task_Event(void);

/* Can be called by all cores */
void Bsp_Eth_GetCurrentTime(void);

#endif /* _BSP_ETH_H_ */

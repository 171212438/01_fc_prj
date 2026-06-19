#ifndef _BSP_ETHIF_H_
#define _BSP_ETHIF_H_

#include "Bsp_McalHeader.h"
#include "EthIf.h"

/************ Global functions *******************/
/* Should only be called by the configured core */
void Bsp_EthIf_Init(void);

Std_ReturnType Bsp_EthIf_SetControllerMode(void);

/* Should only be called by the configured core */
void Bsp_EthIf_500us_Task_Event(void);

/* Should only be called by the configured core */
void Bsp_EthIf_1s_Task_Event(void);

#endif /* _BSP_ETHIF_H_ */

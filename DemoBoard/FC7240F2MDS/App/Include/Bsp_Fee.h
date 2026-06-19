#ifndef _BSP_FEE_H_
#define _BSP_FEE_H_

#include "Bsp_McalHeader.h"

#define WRITE_TIMES  1U

typedef enum
{
	BSP_FEE_WRITE = 0U,
	BSP_FEE_READ,
	BSP_FEE_IDLE
} BSP_Fee_JobType;


/************ Global functions *******************/
void Bsp_Fee_Init(void);
void Bsp_Fee_5ms_Task_Event(void);
void Bsp_Fee_1s_Task_Event(void);
extern uint16 Fee_GetBlockIndex(uint16 u16BlockNumber);
#endif /* _BSP_FEE_H_ */

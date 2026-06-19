#ifndef _BSP_IO_H_
#define _BSP_IO_H_

#include "Bsp_McalHeader.h"

/************ Enum *******************/
typedef enum
{
    BSP_IO_KEY1 = 0U,
    BSP_IO_KEY2,
    BSP_IO_KEY3
} Bsp_KeyType;


/************ Global functions *******************/
void Bsp_Port_Init(void);
void Bsp_FlipLed(void);
void Bsp_IO_Task_1s_Event(void);

#endif /* _BSP_IO_H_ */

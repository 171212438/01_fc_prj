#include "Bsp_io.h"

/************ Global functions *******************/
void Bsp_Port_Init(void)
{
    Port_Init(&Port_Config);
}

void Bsp_IO_Task_1s_Event(void)
{
    if (0 == GET_CPU_ID())
    {
        Dio_FlipChannel(DioConf_DioChannel_LED1);
        Dio_FlipChannel(DioConf_DioChannel_LED3);
    }
    else if (1 == GET_CPU_ID())
    {
        Dio_FlipChannel(DioConf_DioChannel_LED2);
    }
    else
    {
        /* Nothing for Misra */
    }
}

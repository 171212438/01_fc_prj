#include "Bsp_io.h"

/************ Global functions *******************/
void Bsp_Port_Init(void)
{
    Port_Init(&Port_Config);
}

void Bsp_FlipLed(void)
{
    Dio_FlipChannel(DioConf_DioChannel_LED1);
    Dio_FlipChannel(DioConf_DioChannel_LED2);
    Dio_FlipChannel(DioConf_DioChannel_LED3);
}

void Bsp_IO_Task_1s_Event(void)
{
    if (1U == GET_CPU_ID())
    {
        Dio_FlipChannel(DioConf_DioChannel_LED1);
    }
    else if (2U == GET_CPU_ID())
    {
        Dio_FlipChannel(DioConf_DioChannel_LED2);
    }
    else if (3U == GET_CPU_ID())
    {
        Dio_FlipChannel(DioConf_DioChannel_LED3);
    }
}

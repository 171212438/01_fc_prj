#include "Bsp_io.h"

/************ Global functions *******************/
void Bsp_Port_Init(void)
{
    Port_Init(&Port_Config);
}

void Bsp_IO_Task_1s_Event(void)
{
    Dio_FlipChannel(DioConf_DioChannel_LED1);
    Dio_FlipChannel(DioConf_DioChannel_LED2);
    Dio_FlipChannel(DioConf_DioChannel_LED3);
}

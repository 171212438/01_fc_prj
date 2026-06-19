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

Dio_LevelType Bsp_ReadKey(const Bsp_KeyType eKey)
{
    Dio_LevelType u8Level = 0;
    switch(eKey)
    {
    case BSP_IO_KEY1:
        u8Level = Icu_GetInputLevel(IcuConf_IcuChannel_IcuChannel_Key1);
        break;
    case BSP_IO_KEY2:
        u8Level = Icu_GetInputLevel(IcuConf_IcuChannel_IcuChannel_Key2);
        break;
    case BSP_IO_KEY3:
        u8Level = Icu_GetInputLevel(IcuConf_IcuChannel_IcuChannel_Key3);
        break;
    default:
        /* Do nothing */
        break;
    }
    return u8Level;
}

void Bsp_IO_Task_1s_Event(void)
{
    Bsp_FlipLed();

#if 0
	if (Bsp_ReadKey(BSP_IO_KEY1))
		Dio_WriteChannel(DioConf_DioChannel_LED2,1);
	else
		Dio_WriteChannel(DioConf_DioChannel_LED2,0);
#endif

}



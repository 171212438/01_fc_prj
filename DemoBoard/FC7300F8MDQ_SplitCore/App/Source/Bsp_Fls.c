#include "Bsp_Fls.h"

#ifdef FLASH_SELFTEST
#define TEST_BUFF_LEN                 160

uint8 fls_test_buff_w[TEST_BUFF_LEN];

static void Buff_Init(uint8* ptr, uint32 len)
{
    for(uint32 u32Index=0U; u32Index <len; u32Index++)
    {
        ptr[u32Index]=(uint8)(u32Index+1U);
    }
}

static void Bsp_Fls_Delay(void)
{
	uint32 j = 0;
    for(uint32 i = 0; i<100; i++)
    {
    	for(j= 0; j<200; j++)
    	{

    	}
    }
}
#endif
/************ Global functions *******************/
void Bsp_Fls_Init(void)
{
	if(0U == GET_CPU_ID())
	{
		Fls_Init(NULL_PTR);
	#ifdef FLASH_SELFTEST
		uint32 count = 10;
		Buff_Init(fls_test_buff_w, TEST_BUFF_LEN);
		Fls_Erase(0,0x4000);
		while(count--)
		{
			Bsp_Fls_Delay();
			Fls_MainFunction();
		}
		count = 1000;
		Fls_Write(0, fls_test_buff_w, 160);
		while(count--)
		{
			Bsp_Fls_Delay();
			Fls_MainFunction();
		}
	#endif
	}
}

void Bsp_Fls_5ms_Task_Event(void)
{
	if(0U == GET_CPU_ID())
	{
		Fls_MainFunction();
	}
}

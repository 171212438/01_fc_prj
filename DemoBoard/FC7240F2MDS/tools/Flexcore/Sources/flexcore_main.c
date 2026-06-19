#include "flexcore_main.h"
#include "mb.h"
#include <stdio.h>
#include <string.h>


int main(void)
{
	uint32_t u32Data0, u32Data1;
	Bsp_MB_Init();
	while (1)
	{
		Bsp_MB_Receive(&u32Data0, &u32Data1);
		Bsp_MB_Done();
		Bsp_MB_Send(u32Data0, u32Data1);
		Bsp_MB_WaitDone();
	}
    return 0;
}



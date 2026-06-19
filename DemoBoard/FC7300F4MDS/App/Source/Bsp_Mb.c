#include "Bsp_Mb.h"

extern ISR(MAILBOX_ISR);
void MB0_IRQHandler(void)
{
    MAILBOX_ISR();
}

void Bsp_Mb_Init(void)
{
    Mb_Init(&Mb_Config);
    IntMgr_SetPriority(MB0_IRQn, 5);
    IntMgr_EnableInterrupt(MB0_IRQn);
}

void Bsp_Mb_1s_Task_Event(void)
{
}

void Bsp_Mb_100ms_Task_Event(void)
{
}

#include "Bsp_Qdt.h"

/************ Local Variables *******************/
static boolean bQD0Ch0EventFlag = FALSE;
static float fSpeed = 0.0f;
/************ Interrupt Map *******************/

extern ISR(Qdt_IsrQDT0_ALL);
void QDT0_IRQHandler(void)
{
	//QDT_IsrQDT0_ALL();
}

/************ Callback functions *******************/
void QDT0_Channel0_Event_Callback(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
        if(FALSE == bQD0Ch0EventFlag)
        {
        	bQD0Ch0EventFlag = TRUE;
        }
    }
}

/************ Global functions *******************/
void Bsp_Qdt_Init(void)
{
	Qdt_Init(NULL_PTR);
    IntMgr_SetPriority(QDT0_IRQn, 4);
    IntMgr_EnableInterrupt(QDT0_IRQn);
}

void Bsp_Qdt_1s_Task_Event(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
    	DEBUG_INFO("QDT0 Speed is %f\r\n", fSpeed);
    }
}

void Bsp_Qdt_500us_Task_Event(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
    	Qdt_GetSpeed(0U, &fSpeed);
    }
}


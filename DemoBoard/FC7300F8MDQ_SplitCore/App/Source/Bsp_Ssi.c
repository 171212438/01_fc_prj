#include "Bsp_Ssi.h"

/************ Local Variables *******************/

/************ Interrupt Map *******************/
#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
extern ISR(SSI_IsrSSI0_ALL);
void SSI0_IRQHandler(void)
{
    SSI_IsrSSI0_ALL();
}
#endif

/************ Callback functions *******************/
void SsiNotification(Ssi_MessageDataType *pMsg)
{

}
/************ Global functions *******************/
void Bsp_Ssi_Init(void)
{
    Ssi_Init(NULL_PTR);
#if (defined(SSI_INSTANCE0_INT) && (SSI_INSTANCE0_INT == STD_ON))
    IntMgr_SetPriority(SSI_IRQn, 4);
    IntMgr_EnableInterrupt(SSI_IRQn);
#endif
}

void Bsp_Ssi_1s_Task_Event(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
        Ssi_MainFunctionMessageRead();
    }
}



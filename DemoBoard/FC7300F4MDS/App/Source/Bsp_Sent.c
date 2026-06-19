#include "Bsp_Sent.h"

/************ Local Variables *******************/
static boolean bSent1FastMsg = FALSE;
static boolean bSent1SlowMsg = FALSE;
static boolean bSent2FastMsg = FALSE;
static boolean bSent2SlowMsg = FALSE;
/************ Interrupt Map *******************/

extern ISR(SENT_IsrSENT0_ALL);
void SENT0_IRQHandler(void)
{
    SENT_IsrSENT0_ALL();
}

/************ Callback functions *******************/
void SentFastNotification_MLX90367LDC(Sent_FastMessageDataType *pMsg)
{
    (void)pMsg;
    if (FALSE == bSent1FastMsg)
    {
        bSent1FastMsg = TRUE;
        DEBUG_INFO("Sent1 receive fast message from MLX90367LDC");
    }
}

void SentSlowNotification_MLX90367LDC(Sent_SlowMessageDataType *pMsg)
{
    (void)pMsg;
    if (FALSE == bSent1SlowMsg)
    {
        bSent1SlowMsg = TRUE;
        DEBUG_INFO("Sent1 receive slow message from MLX90367LDC");
    }
}

void SentFastNotification_TLE4998C8D(Sent_FastMessageDataType *pMsg)
{
    (void)pMsg;
    if (FALSE == bSent2FastMsg)
    {
        bSent2FastMsg = TRUE;
        DEBUG_INFO("Sent2 receive fast message from MLX90367LDC");
    }
}

void SentSlowNotification_TLE4998C8D(Sent_FastMessageDataType *pMsg)
{
    (void)pMsg;
    if (FALSE == bSent2SlowMsg)
    {
        bSent2SlowMsg = TRUE;
        DEBUG_INFO("Sent2 receive slow message from MLX90367LDC");
    }
}
/************ Global functions *******************/
void Bsp_Sent_Init(void)
{
    Sent_Init(NULL_PTR);
    IntMgr_SetPriority(SENT0_IRQn, 4);
    IntMgr_EnableInterrupt(SENT0_IRQn);
}

void Bsp_Sent_1s_Task_Event(void)
{
    Sent_RequestSpcPulse(0U, 0U);
}

void Bsp_Sent_5ms_Task_Event(void)
{
    Sent_MainFunctionFastMessageRead();
    Sent_MainFunctionSlowMessageRead();
}

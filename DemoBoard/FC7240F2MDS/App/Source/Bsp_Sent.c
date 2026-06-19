#include "Bsp_Sent.h"

/************ Local Variables *******************/
static boolean bSent1FastMsg = FALSE;
static boolean bSent1SlowMsg = FALSE;
/************ Interrupt Map *******************/

/************ Callback functions *******************/
void SentFastNotification_MLX90367LDC(Sent_FastMessageDataType *pMsg)
{
    (void)pMsg;
	if(FALSE == bSent1FastMsg)
	{
		bSent1FastMsg = TRUE;
		DEBUG_INFO("Sent1 receive fast message from MLX90367LDC");
	}
}

void SentSlowNotification_MLX90367LDC(Sent_SlowMessageDataType *pMsg)
{
    (void)pMsg;
	if(FALSE == bSent1SlowMsg)
	{
		bSent1SlowMsg = TRUE;
		DEBUG_INFO("Sent1 receive slow message from MLX90367LDC");
	}
}


/************ Global functions *******************/
void Bsp_Sent_Init(void)
{
    Sent_Init(NULL_PTR);
}

void Bsp_Sent_5ms_Task_Event(void)
{
	Sent_MainFunctionFastMessageRead();
	Sent_MainFunctionSlowMessageRead();
}



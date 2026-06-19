/*******************************************************************************
*   File Name       : NvM_Cbk.c
*******************************************************************************/


/******************************************************************************
*   Include
*******************************************************************************/
#include "NvM_Cbk.h"


/*******************************************************************************
* Function Name: NvM_JobEndNotification
*
* Description:  Function to be used by the underlying memory abstraction to
                signal end of job without error.
********************************************************************************/
void NvM_JobEndNotification( void )
{
    asm("nop");
}


/********************************************************************************
* Function Name: NvM_JobErrorNotification
*
* Description:  Function to be used by the underlying memory abstraction to
                signal end of job with error.
********************************************************************************/
void NvM_JobErrorNotification( void )
{
	asm("nop");
}



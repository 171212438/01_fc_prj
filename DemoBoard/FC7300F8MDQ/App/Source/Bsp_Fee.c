#include "Bsp_Fee.h"
#include "Bsp_CrashRecord.h"

#ifndef BSP_FEE_DEMO_SEQUENCE_SUPPORT
#define BSP_FEE_DEMO_SEQUENCE_SUPPORT STD_OFF
#endif

#if (BSP_FEE_DEMO_SEQUENCE_SUPPORT == STD_ON)
uint16 Bsp_au8FeeBlcokNumber[FEE_CFG_NUM_OF_BLOCKS] = { FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0,
		                                                 FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1,
														 FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3,
														 FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2};

uint8 Bsp_au8FeeWriteData[FEE_CFG_NUM_OF_BLOCKS][1024] = {{0U}, {0U}, {0U}, {0U}};
uint8 Bsp_au8FeeReadData[FEE_CFG_NUM_OF_BLOCKS][1024]  = {{0U}, {0U}, {0U}, {0U}};

uint16 u16BlockIndex = 0U;
BSP_Fee_JobType Bsp_eJob = BSP_FEE_WRITE;

/************ Global functions *******************/
static void Bsp_Fee_UpdateData(uint16 u16Index)
{
	uint16 i;
	for(i=0; i<Fee_Cfg_BlockConfig[u16Index].u16BlockSize; i++)
	{
		Bsp_au8FeeWriteData[u16Index][i] = i;
	}
}


static void Bsp_Fee_WriteBlockSequence(void)
{
	MemIf_StatusType eStatus;

	eStatus = Fee_GetStatus();
	if(MEMIF_IDLE == eStatus)
	{
	    if(u16BlockIndex < FEE_CFG_NUM_OF_BLOCKS)
	    {
	    	Bsp_Fee_UpdateData(u16BlockIndex);
	    	if((Std_ReturnType)E_OK == Fee_Write(Bsp_au8FeeBlcokNumber[u16BlockIndex], Bsp_au8FeeWriteData[u16BlockIndex]))
	        {
	        	/* No Deal With */
	        }
	        else
	        {
	        	DEBUG_INFO("Fee Write Failed!\n");
	        }
	        u16BlockIndex++;
	    }
	    else if(u16BlockIndex == FEE_CFG_NUM_OF_BLOCKS)
	    {
	    	u16BlockIndex = 0U;
	    	Bsp_eJob = BSP_FEE_READ;
	        DEBUG_INFO("Fee Write Finish, Start Fee Read!\n");
	    }
	    else
	    {
			/* No Deal With */
	    }
	}
	else
	{
		/* No Deal With */
	}
}

static void Bsp_ReadBlockSequence(void)
{
	MemIf_StatusType eStatus;
	uint16 u16Index1 = 0U;
	uint16 u16Index2 = 0U;

    eStatus = Fee_GetStatus();
	if(MEMIF_IDLE == eStatus)
	{
		if(u16BlockIndex < FEE_CFG_NUM_OF_BLOCKS)
		{
			if((Std_ReturnType)E_OK == Fee_Read(Bsp_au8FeeBlcokNumber[u16BlockIndex], 0U, Bsp_au8FeeReadData[u16BlockIndex], Fee_Cfg_BlockConfig[u16BlockIndex].u16BlockSize))
			{
				/* No Deal With */
			}
			else
			{
				DEBUG_INFO("Fee Read Failed!\n");
			}
			u16BlockIndex++;
		}
		else
		{
			DEBUG_INFO("Fee Read Finish!\n");

		    for (u16Index1 = 0U; u16Index1 < FEE_CFG_NUM_OF_BLOCKS; u16Index1++)
		    {
		    	DEBUG_INFO("Fee Write Block%d data is:\r\n", u16Index1);
		    	for (u16Index2 = 0U; u16Index2 < Fee_Cfg_BlockConfig[u16Index1].u16BlockSize; u16Index2++)
		    	{
		    		DEBUG_INFO("%X", Bsp_au8FeeWriteData[u16Index1][u16Index2]);
		    	}
		    	DEBUG_INFO("\r\n");
		    }

		    for (u16Index1 = 0U; u16Index1 < FEE_CFG_NUM_OF_BLOCKS; u16Index1++)
		    {
		    	DEBUG_INFO("Fee Read Block%d data is:\r\n ", u16Index1);
		    	for (u16Index2 = 0U; u16Index2 < Fee_Cfg_BlockConfig[u16Index1].u16BlockSize; u16Index2++)
		    	{
		    		DEBUG_INFO("%X", Bsp_au8FeeReadData[u16Index1][u16Index2]);
		    	}
		    	DEBUG_INFO("\r\n");
		    }
			Bsp_eJob = BSP_FEE_IDLE;
		}
    }
	else
	{
		/* No Deal With */
	}

}

#endif

void Bsp_Fee_Init(void)
{
	if(0U == GET_CPU_ID())
	{
		Fee_Init(NULL_PTR);
	}
}

void Bsp_Fee_5ms_Task_Event(void)
{
	if(0U == GET_CPU_ID())
	{
		Fee_MainFunction();
		Bsp_CrashRecord_MainFunction();
	}
}

void Bsp_Fee_1s_Task_Event(void)
{
	if(0U == GET_CPU_ID())
	{

#if (BSP_FEE_DEMO_SEQUENCE_SUPPORT == STD_ON)
		if(Bsp_eJob == BSP_FEE_WRITE)
		{
			Bsp_Fee_WriteBlockSequence();
		}
		else if(Bsp_eJob == BSP_FEE_READ)
		{
			Bsp_ReadBlockSequence();
		}
		else
		{
			/* Idle */
		}
#endif


	}
}

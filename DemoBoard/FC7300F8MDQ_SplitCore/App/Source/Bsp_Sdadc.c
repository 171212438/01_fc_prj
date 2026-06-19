#include "Bsp_Sdadc.h"

/************ Local Variables *******************/

/************ Interrupt Map *******************/
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined
 * Reason: It is just for testing or demonstration */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The hardware will call the function */
#define SDADC_BUFFER_SIZE 16

#define SDADC0_CIRCULAR_BUFFER_SIZE 16
#define SDADC1_CIRCULAR_BUFFER_SIZE 8

Sdadc_ChannelCalibInfoType Sdadc0_Ch0CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc0_Ch1CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc0_Ch2CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc1_Ch0CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc1_Ch1CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc1_Ch2CalibInfo;

volatile uint8 u8C1ReadSemaphore=0;
uint32 In0Ch2BufferCnt=0;
uint32 In1Ch2BufferCnt=0;

Sdadc_ResultType Sdadc0_Ch0Result=0;
Sdadc_ResultType Sdadc1_Ch0Result=0;

Sdadc_ResultType Sdadc0_Ch1Buffer[SDADC_BUFFER_SIZE];
Sdadc_ResultType Sdadc0_Ch1BufferCopy[SDADC_BUFFER_SIZE];
Sdadc_ResultType Sdadc0_Ch2Buffer[SDADC_BUFFER_SIZE];
Sdadc_ResultType Sdadc0_Ch2BufferCopy[SDADC_BUFFER_SIZE];
Sdadc_ResultType Sdadc1_Ch1Buffer[SDADC0_CIRCULAR_BUFFER_SIZE];
Sdadc_ResultType Sdadc1_Ch1BufferCopy[SDADC0_CIRCULAR_BUFFER_SIZE];
Sdadc_ResultType Sdadc1_Ch2Buffer[SDADC1_CIRCULAR_BUFFER_SIZE];
Sdadc_ResultType Sdadc1_Ch2BufferCopy[SDADC1_CIRCULAR_BUFFER_SIZE];

uint8                   TimstampValid1 = 0;
Sdadc_TimestampInfoType Sdadc0_Ch0TimestampInfo;
Sdadc_TimestampInfoType Sdadc0_Ch1TimestampInfo;
Sdadc_TimestampInfoType Sdadc0_Ch2TimestampInfo;


uint32 SDADC0_Ch0COCCnt = 0;
uint32 SDADC0_Ch1COCCnt = 0;
uint32 SDADC0_Ch2COCCnt = 0;
uint32 SDADC1_Ch0COCCnt = 0;
uint32 SDADC1_Ch1COCCnt = 0;
uint32 SDADC1_Ch2COCCnt = 0;

uint32 SDADC0_Ch1BFCnt = 0;
uint32 SDADC0_Ch2BFCnt = 0;
uint32 SDADC1_Ch1BFCnt = 0;
uint32 SDADC1_Ch2BFCnt = 0;

uint32 SDADC0_Ch1BFFlag = 0;
uint32 SDADC1_Ch1BFFlag = 0;

extern ISR(Sdadc0_Ch0_ISR_Handler);
extern ISR(Sdadc0_Ch1_ISR_Handler);
extern ISR(Sdadc0_Ch2_ISR_Handler);
extern ISR(Sdadc1_Ch0_ISR_Handler);
extern ISR(Sdadc1_Ch1_ISR_Handler);
extern ISR(Sdadc1_Ch2_ISR_Handler);

void SDADC0_0_IRQHandler(void);
void SDADC0_1_IRQHandler(void);
void SDADC0_2_IRQHandler(void);
void SDADC1_0_IRQHandler(void);
void SDADC1_1_IRQHandler(void);
void SDADC1_2_IRQHandler(void);

void SDADC1_0_IRQHandler(void)
{
    Sdadc1_Ch0_ISR_Handler();
}

void SDADC1_1_IRQHandler(void)
{
    Sdadc1_Ch1_ISR_Handler();
}

void SDADC1_2_IRQHandler(void)
{
    Sdadc1_Ch2_ISR_Handler();
}

void SDADC0_0_IRQHandler(void)
{
    Sdadc0_Ch0_ISR_Handler();
}

void SDADC0_1_IRQHandler(void)
{
    Sdadc0_Ch1_ISR_Handler();
}

void SDADC0_2_IRQHandler(void)
{
    Sdadc0_Ch2_ISR_Handler();
}

void SDADC0_CH0_COC_Notification(void)
{
    SDADC0_Ch0COCCnt++;
}

void SDADC0_CH0_TimeStamp_Notification(void)
{
    Sdadc_GetTimestamp(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, &Sdadc0_Ch0TimestampInfo);
    Sdadc_GetTimestamp(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, &Sdadc0_Ch1TimestampInfo);
    Sdadc_GetTimestamp(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_2, &Sdadc0_Ch2TimestampInfo);
    TimstampValid1 = 1;
}

void SDADC0_CH1_COC_Notification(void)
{
    SDADC0_Ch1COCCnt++;
}

//void SDADC0_CH1_TimeStamp_Notification(void)
//{
//
//}

void SDADC0_CH1_BF_Notification(void)
{
    SDADC0_Ch1BFCnt++;
    Sdadc_ReadStreamResults(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, Sdadc0_Ch1BufferCopy);
    SDADC0_Ch1BFFlag = 1;
}

void SDADC0_CH2_COC_Notification(void)
{
    SDADC0_Ch2COCCnt++;
}

//void SDADC0_CH2_TimeStamp_Notification(void)
//{
//
//}

void SDADC0_CH2_BF_Notification(void)
{
    SDADC0_Ch2BFCnt++;
}


void SDADC1_CH0_COC_Notification(void)
{
    SDADC1_Ch0COCCnt++;
}

void SDADC1_CH0_TimeStamp_Notification(void)
{

}

void SDADC1_CH1_COC_Notification(void)
{
    SDADC1_Ch1COCCnt++;
}

void SDADC1_CH1_TimeStamp_Notification(void)
{

}

void SDADC1_CH1_BF_Notification(void)
{
    SDADC1_Ch1BFCnt++;
    Sdadc_ReadStreamResults(SdadcConf_SdadcInstance_1, SdadcConf_Ins1_SdadcChannel_1, Sdadc1_Ch1BufferCopy);
    SDADC1_Ch1BFFlag = 1;
}

void SDADC1_CH2_COC_Notification(void)
{
    SDADC1_Ch2COCCnt++;
}

void SDADC1_CH2_TimeStamp_Notification(void)
{

}

void SDADC1_CH2_BF_Notification(void)
{
    SDADC1_Ch2BFCnt++;
}

/* PRQA S 1503 -- */
/* PRQA S 3408 -- */
/************ Callback functions *******************/
/************ Global functions *******************/

void Bsp_Sdadc_SwTrg3(void);
void Bsp_Sdadc_400ms_Task_Event(void);

void Bsp_Sdadc_Init(void)
{
    uint32 CoreId = GET_CPU_ID();
    if (0U == GET_CPU_ID())
    {
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
        Sdadc_Init(NULL_PTR);
#else
        Sdadc_Init(&Sdadc_Config_EcucPartition_0);
#endif
        IntMgr_SetPriority(SDADC0_CH0_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC0_CH0_IRQn);
        IntMgr_SetPriority(SDADC0_CH1_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC0_CH1_IRQn);
        IntMgr_SetPriority(SDADC0_CH2_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC0_CH2_IRQn);


        Sdadc_SetupResultBuffer(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, Sdadc0_Ch1Buffer, SDADC_BUFFER_SIZE);
        Sdadc_SetupResultBuffer(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_2, Sdadc0_Ch2Buffer, SDADC0_CIRCULAR_BUFFER_SIZE);
        Sdadc_StartModulation(SdadcConf_SdadcInstance_0);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
        Sdadc_StartCalibration(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, 0);

        while(Sdadc_GetCalibrationStatus(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, &Sdadc0_Ch0CalibInfo) != SDADC_CALIBRATION_DONE)
            ;
        Sdadc_StartCalibration(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, 0);
        while(Sdadc_GetCalibrationStatus(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, &Sdadc0_Ch1CalibInfo) != SDADC_CALIBRATION_DONE)
            ;
        Sdadc_StartCalibration(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_2, 0);
        while(Sdadc_GetCalibrationStatus(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_2, &Sdadc0_Ch2CalibInfo) != SDADC_CALIBRATION_DONE)
            ;
#endif
        DEBUG_INFO("SDADC0 Calib Ch0: CBR 0x%x CGNR 0x%x\r\n",Sdadc0_Ch0CalibInfo.u32CBRReg, Sdadc0_Ch0CalibInfo.u32CGNRReg);
        DEBUG_INFO("SDADC0 Calib Ch1: CBR 0x%x CGNR 0x%x\r\n",Sdadc0_Ch1CalibInfo.u32CBRReg, Sdadc0_Ch1CalibInfo.u32CGNRReg);
        DEBUG_INFO("SDADC0 Calib Ch2: CBR 0x%x CGNR 0x%x\r\n",Sdadc0_Ch2CalibInfo.u32CBRReg, Sdadc0_Ch2CalibInfo.u32CGNRReg);
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
        const Sdadc_ConfigType *pSdadc_Config_EcucPartition_0;
        pSdadc_Config_EcucPartition_0 = Sdadc_ConfigPredefine[CoreId];
        *(pSdadc_Config_EcucPartition_0->apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_0]->pCalibPtr) = &Sdadc0_Ch0CalibInfo;
        *(pSdadc_Config_EcucPartition_0->apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_1]->pCalibPtr) = &Sdadc0_Ch1CalibInfo;
        *(pSdadc_Config_EcucPartition_0->apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_2]->pCalibPtr) = &Sdadc0_Ch2CalibInfo;
#else

        *(Sdadc_Config_EcucPartition_0.apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_0]->pCalibPtr) = &Sdadc0_Ch0CalibInfo;
        *(Sdadc_Config_EcucPartition_0.apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_1]->pCalibPtr) = &Sdadc0_Ch1CalibInfo;
        *(Sdadc_Config_EcucPartition_0.apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_2]->pCalibPtr) = &Sdadc0_Ch2CalibInfo;
#endif
        Sdadc_EnableChannel(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL, SDADC_CHANNEL_RELOAD_CFG);
        Sdadc_StartChannelSWConversion(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL);
        Sdadc_StartChannelIntgSWConversion(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL);
    }
    else if (1U == GET_CPU_ID())
    {
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
        Sdadc_Init(NULL_PTR);
#else
        Sdadc_Init(&Sdadc_Config_EcucPartition_1);
#endif
        IntMgr_SetPriority(SDADC1_CH0_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC1_CH0_IRQn);
        IntMgr_SetPriority(SDADC1_CH1_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC1_CH1_IRQn);
        IntMgr_SetPriority(SDADC1_CH2_IRQn, 5);
        IntMgr_EnableInterrupt(SDADC1_CH2_IRQn);
        Sdadc_SetupResultBuffer(SdadcConf_SdadcInstance_1, SdadcConf_Ins1_SdadcChannel_1, Sdadc1_Ch1Buffer, SDADC_BUFFER_SIZE);
        Sdadc_SetupResultBuffer(SdadcConf_SdadcInstance_1, SdadcConf_Ins1_SdadcChannel_2, Sdadc1_Ch2Buffer, SDADC1_CIRCULAR_BUFFER_SIZE);
        Sdadc_StartModulation(SdadcConf_SdadcInstance_1);

        Sdadc_EnableChannel(SdadcConf_SdadcInstance_1, SDADC_ALL_CHANNEL, SDADC_CHANNEL_NOT_RELOAD_CFG);
        Sdadc_StartChannelSWConversion(SdadcConf_SdadcInstance_1, SDADC_ALL_CHANNEL);
        Sdadc_StartChannelIntgSWConversion(SdadcConf_SdadcInstance_1, SDADC_ALL_CHANNEL);
    }

}

void Bsp_Sdadc_400ms_Task_Event(void)
{
	Bsp_Sdadc_SwTrg3();
	while(TimstampValid1==0)
		;
	TimstampValid1 = 0;
	DEBUG_INFO("SDADC0 Ch0 Ts : 0x%x deltaT %d\r\n", Sdadc0_Ch0TimestampInfo.u16DataTrunc,Sdadc0_Ch0TimestampInfo.u16TimeStamp);
	DEBUG_INFO("SDADC0 Ch1 Ts : 0x%x deltaT %d\r\n", Sdadc0_Ch1TimestampInfo.u16DataTrunc,Sdadc0_Ch1TimestampInfo.u16TimeStamp);
	DEBUG_INFO("SDADC0 Ch2 Ts : 0x%x deltaT %d\r\n", Sdadc0_Ch2TimestampInfo.u16DataTrunc,Sdadc0_Ch2TimestampInfo.u16TimeStamp);
}

void Bsp_Sdadc_100ms_Task_Event(void)
{
	static uint8 TaskCnt400ms = 0;
	uint32 CoreId = GET_CPU_ID();
    if (0U == GET_CPU_ID())
    {
        TaskCnt400ms++;
        if (TaskCnt400ms == 4)
        {
            TaskCnt400ms = 0;
            Bsp_Sdadc_400ms_Task_Event();
        }
    }
    else if (1U == GET_CPU_ID())
    {
    	Sdadc_StartChannelSWConversion(SdadcConf_SdadcInstance_1, SDADC_ALL_CHANNEL);
    }
}


void Bsp_Sdadc_1s_Task_Event(void)
{
    uint32 CoreId = GET_CPU_ID();

    if (0U == GET_CPU_ID())
    {
        while(u8C1ReadSemaphore)
        {
            u8C1ReadSemaphore=0;
        }

        Sdadc_ReadResult(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, &Sdadc0_Ch0Result);
        In0Ch2BufferCnt = Sdadc_ReadStreamResults(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_2, Sdadc0_Ch2BufferCopy);

        DEBUG_INFO("SDADC0 single   Ch0 %d: 0x%x!\r\n", SDADC0_Ch0COCCnt, Sdadc0_Ch0Result);
        DEBUG_INFO("SDADC0 linear   Ch1 %d:", SDADC0_Ch1BFCnt);
        if(SDADC0_Ch1BFFlag)
        {
            SDADC0_Ch1BFFlag = 0;
            for (uint8 i = 0; i < SDADC_BUFFER_SIZE; i++)
            {
            	if(i%4==0)
            	{
            		DEBUG_INFO("\r\n");
            	}
                DEBUG_INFO("0x%x ", Sdadc0_Ch1BufferCopy[i]);
            }
        }
        else
        {
        	DEBUG_INFO("not ready");
        }
        DEBUG_INFO("\r\n");

        DEBUG_INFO("SDADC0 circular Ch2 %d: ", SDADC0_Ch2BFCnt);
        for (uint8 i = 0; i < In0Ch2BufferCnt; i++)
        {
        	if(i%4==0)
			{
				DEBUG_INFO("\r\n");
			}
            DEBUG_INFO("0x%x ", Sdadc0_Ch2BufferCopy[i]);
        }
        DEBUG_INFO("\r\n");

        DEBUG_INFO("SDADC1 single   Ch0 %d: 0x%x!\r\n", SDADC1_Ch0COCCnt, Sdadc1_Ch0Result);
        DEBUG_INFO("SDADC1 linear   Ch1 %d: ", SDADC1_Ch1BFCnt);
        if(SDADC1_Ch1BFFlag)
        {
            SDADC1_Ch1BFFlag = 0;
            for (uint8 i = 0; i < SDADC_BUFFER_SIZE; i++)
            {
            	if(i%4==0)
				{
					DEBUG_INFO("\r\n");
				}
                DEBUG_INFO("0x%x ", Sdadc1_Ch1BufferCopy[i]);
            }
        }
        else
		{
			DEBUG_INFO("not ready");
		}
        DEBUG_INFO("\r\n");

        DEBUG_INFO("SDADC1 circular Ch2 %d: ", SDADC1_Ch2BFCnt);
        for (uint8 i = 0; i < In1Ch2BufferCnt; i++)
        {
        	if(i%4==0)
			{
				DEBUG_INFO("\r\n");
			}
            DEBUG_INFO("0x%x ", Sdadc1_Ch2BufferCopy[i]);
        }
        DEBUG_INFO("\r\n");

    }
    else if (1U == GET_CPU_ID())
    {
        Sdadc_ReadResult(SdadcConf_SdadcInstance_1, SdadcConf_Ins1_SdadcChannel_0, &Sdadc1_Ch0Result);
        In1Ch2BufferCnt = Sdadc_ReadStreamResults(SdadcConf_SdadcInstance_1, SdadcConf_Ins1_SdadcChannel_2, Sdadc1_Ch2BufferCopy);
        u8C1ReadSemaphore=1;
    }

}

void Bsp_Sdadc_SwTrg3(void)
{
    SCM->SOCMISC |= 0x8u;
    SCM->SOCMISC &= ~0x8u;
}

#include "Bsp_Sdadc.h"

/************ Local Variables *******************/

/************ Interrupt Map *******************/
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined Reason: It is just for testing or demonstration */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The hardware will call the function */
#define SDADC_BUFFER_SIZE           16

#define SDADC0_CIRCULAR_BUFFER_SIZE 16
Sdadc_ChannelCalibInfoType Sdadc0_Ch0CalibInfo;
Sdadc_ChannelCalibInfoType Sdadc0_Ch1CalibInfo;

Sdadc_ResultType Sdadc0_Ch0Result = 0;

Sdadc_ResultType Sdadc0_Ch1Buffer[SDADC_BUFFER_SIZE];
Sdadc_ResultType Sdadc0_Ch1BufferCopy[SDADC_BUFFER_SIZE];

uint8                   TimstampValid1 = 0;
Sdadc_TimestampInfoType Sdadc0_Ch0TimestampInfo;
Sdadc_TimestampInfoType Sdadc0_Ch1TimestampInfo;

uint32 SDADC0_Ch0COCCnt = 0;
uint32 SDADC0_Ch1COCCnt = 0;

uint32 SDADC0_Ch1BFCnt = 0;

uint32 SDADC0_Ch1BFFlag = 0;

extern ISR(Sdadc0_Ch0_ISR_Handler);
extern ISR(Sdadc0_Ch1_ISR_Handler);

void SDADC0_0_IRQHandler(void);
void SDADC0_1_IRQHandler(void);

void SDADC0_0_IRQHandler(void)
{
    Sdadc0_Ch0_ISR_Handler();
}

void SDADC0_1_IRQHandler(void)
{
    Sdadc0_Ch1_ISR_Handler();
}

void SDADC0_CH0_COC_Notification(void)
{
    SDADC0_Ch0COCCnt++;
}

void SDADC0_CH0_TimeStamp_Notification(void)
{
    TimstampValid1 = 1;
}

void SDADC0_CH1_COC_Notification(void)
{
    SDADC0_Ch1COCCnt++;
}

// void SDADC0_CH1_TimeStamp_Notification(void)
//{
//
// }

void SDADC0_CH1_BF_Notification(void)
{
    SDADC0_Ch1BFCnt++;
    Sdadc_ReadStreamResults(SdadcConf_SdadcInstance_0,
                            SdadcConf_Ins0_SdadcChannel_1,
                            Sdadc0_Ch1BufferCopy);
    SDADC0_Ch1BFFlag = 1;
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

        Sdadc_SetupResultBuffer(SdadcConf_SdadcInstance_0,
                                SdadcConf_Ins0_SdadcChannel_1,
                                Sdadc0_Ch1Buffer,
                                SDADC_BUFFER_SIZE);
        Sdadc_StartModulation(SdadcConf_SdadcInstance_0);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
        Sdadc_StartCalibration(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, 0);

        while (Sdadc_GetCalibrationStatus(SdadcConf_SdadcInstance_0,
                                          SdadcConf_Ins0_SdadcChannel_0,
                                          &Sdadc0_Ch0CalibInfo) != SDADC_CALIBRATION_DONE)
            ;
        Sdadc_StartCalibration(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_1, 0);
        while (Sdadc_GetCalibrationStatus(SdadcConf_SdadcInstance_0,
                                          SdadcConf_Ins0_SdadcChannel_1,
                                          &Sdadc0_Ch1CalibInfo) != SDADC_CALIBRATION_DONE)
            ;
#endif
        DEBUG_INFO("SDADC0 Calib Ch0: CBR 0x%x CGNR 0x%x\r\n",
                   Sdadc0_Ch0CalibInfo.u32CBRReg,
                   Sdadc0_Ch0CalibInfo.u32CGNRReg);
        DEBUG_INFO("SDADC0 Calib Ch1: CBR 0x%x CGNR 0x%x\r\n",
                   Sdadc0_Ch1CalibInfo.u32CBRReg,
                   Sdadc0_Ch1CalibInfo.u32CGNRReg);
#if (SDADC_PRECOMPILE_SUPPORT == STD_ON)
        const Sdadc_ConfigType *pSdadc_Config_EcucPartition_0;
        pSdadc_Config_EcucPartition_0 = Sdadc_ConfigPredefine[CoreId];
        *(pSdadc_Config_EcucPartition_0->apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]
              ->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_0]
              ->pCalibPtr)            = &Sdadc0_Ch0CalibInfo;
        *(pSdadc_Config_EcucPartition_0->apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]
              ->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_1]
              ->pCalibPtr)            = &Sdadc0_Ch1CalibInfo;
#else

        *(Sdadc_Config_EcucPartition_0.apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]
              ->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_0]
              ->pCalibPtr) = &Sdadc0_Ch0CalibInfo;
        *(Sdadc_Config_EcucPartition_0.apSdadcInstanceCfg[SdadcConf_SdadcInstance_0]
              ->paSdadcChannelCfg[SdadcConf_Ins0_SdadcChannel_1]
              ->pCalibPtr) = &Sdadc0_Ch1CalibInfo;
#endif
        Sdadc_EnableChannel(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL, SDADC_CHANNEL_RELOAD_CFG);
        Sdadc_StartChannelSWConversion(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL);
        Sdadc_StartChannelIntgSWConversion(SdadcConf_SdadcInstance_0, SDADC_ALL_CHANNEL);
    }
}

void Bsp_Sdadc_400ms_Task_Event(void)
{
    Bsp_Sdadc_SwTrg3();
    while (TimstampValid1 == 0)
        ;
    TimstampValid1 = 0;
    Sdadc_GetTimestamp(SdadcConf_SdadcInstance_0,
                       SdadcConf_Ins0_SdadcChannel_0,
                       &Sdadc0_Ch0TimestampInfo);
    Sdadc_GetTimestamp(SdadcConf_SdadcInstance_0,
                       SdadcConf_Ins0_SdadcChannel_1,
                       &Sdadc0_Ch1TimestampInfo);
    DEBUG_INFO("SDADC0 Ch0 Ts : 0x%x deltaT %d\r\n",
               Sdadc0_Ch0TimestampInfo.u16DataTrunc,
               Sdadc0_Ch0TimestampInfo.u16TimeStamp);
    DEBUG_INFO("SDADC0 Ch1 Ts : 0x%x deltaT %d\r\n",
               Sdadc0_Ch1TimestampInfo.u16DataTrunc,
               Sdadc0_Ch1TimestampInfo.u16TimeStamp);
}

void Bsp_Sdadc_100ms_Task_Event(void)
{
    static uint8 TaskCnt400ms = 0;
    if (0U == GET_CPU_ID())
    {
        TaskCnt400ms++;
        if (TaskCnt400ms == 4)
        {
            TaskCnt400ms = 0;
            Bsp_Sdadc_400ms_Task_Event();
        }
    }
}

void Bsp_Sdadc_1s_Task_Event(void)
{
    uint32 CoreId = GET_CPU_ID();

    if (0U == GET_CPU_ID())
    {
        Sdadc_ReadResult(SdadcConf_SdadcInstance_0, SdadcConf_Ins0_SdadcChannel_0, &Sdadc0_Ch0Result);

        DEBUG_INFO("SDADC0 single   Ch0 %d: 0x%x!\r\n", SDADC0_Ch0COCCnt, Sdadc0_Ch0Result);
        DEBUG_INFO("SDADC0 linear   Ch1 %d:", SDADC0_Ch1BFCnt);
        if (SDADC0_Ch1BFFlag)
        {
            SDADC0_Ch1BFFlag = 0;
            for (uint8 i = 0; i < SDADC_BUFFER_SIZE; i++)
            {
                if (i % 4 == 0)
                {
                    DEBUG_INFO("\r\n");
                }
                DEBUG_INFO("0x%x ", Sdadc0_Ch1BufferCopy[i]);
            }
            DEBUG_INFO("\r\n");
        }
        else
        {
            DEBUG_INFO("not ready");
        }
    }
}

void Bsp_Sdadc_SwTrg3(void)
{
    SCM->SOCMISC |= 0x8u;
    SCM->SOCMISC &= ~0x8u;
}

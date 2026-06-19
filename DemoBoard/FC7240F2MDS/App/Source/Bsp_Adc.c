#include "Bsp_Adc.h"

#define ADC_REFERENCE_VOLTAGE (5.0f)

/************ Local Variables *******************/
static boolean Adc0_Group0_Ready = FALSE;
static boolean Adc0_Group1_Ready = FALSE;

Adc_ValueGroupType Adc0_Group0_Buffer[ADC_CFGSET_GROUP_0_CHANNELS]  = { 0 };
Adc_ValueGroupType Adc0_Group0_Results[ADC_CFGSET_GROUP_0_CHANNELS] = { 0 };

Adc_ValueGroupType Adc0_Group1_Buffer[ADC_CFGSET_GROUP_1_CHANNELS]  = { 0 };
Adc_ValueGroupType Adc0_Group1_Results[ADC_CFGSET_GROUP_1_CHANNELS] = { 0 };

static float Temperature;

/************ Interrupt Map *******************/
extern ISR(Adc_ISR_EndGroupConvUnit0);
void ADC0_IRQHandler(void)
{
    Adc_ISR_EndGroupConvUnit0();
}

/************ Callback functions *******************/
void IoHwAb_Adc_Notification_0(void)
{
    Adc0_Group0_Ready = TRUE;
}

void IoHwAb_Adc_Notification_1(void)
{
    Adc0_Group1_Ready = TRUE;
}

/************ Global functions *******************/
void Bsp_Adc_Init(void)
{
    Adc_Init(&Adc_Config);
    IntMgr_SetPriority(ADC0_IRQn, 5);
    IntMgr_EnableInterrupt(ADC0_IRQn);
    Adc_SetupResultBuffer(AdcGroup_0, Adc0_Group0_Buffer);
    Adc_SetupResultBuffer(AdcGroup_1, Adc0_Group1_Buffer);
    Adc_EnableGroupNotification(AdcGroup_0);
    Adc_EnableGroupNotification(AdcGroup_1);
    Adc_StartGroupConversion(AdcGroup_0);
    Adc_StartGroupConversion(AdcGroup_1);
}

void Bsp_Adc_20ms_Task_Event(void)
{
    float TmuVoltage;
    sint32 s32DiffVal;
    if (Adc0_Group0_Ready == TRUE)
    {
        Adc0_Group0_Ready = FALSE;
        Adc_ReadGroup(AdcGroup_0, Adc0_Group0_Results);
        Adc_StartGroupConversion(AdcGroup_0);
    }
    if (Adc0_Group1_Ready == TRUE)
    {
        Adc0_Group1_Ready = FALSE;
        Adc_ReadGroup(AdcGroup_1, Adc0_Group1_Results);
        Adc_StartGroupConversion(AdcGroup_1);
        s32DiffVal = ((sint32)Adc0_Group1_Results[0] << 20) >> 20;
        TmuVoltage  = (float)(s32DiffVal) / 2048.0f * ADC_REFERENCE_VOLTAGE;
        Temperature = Adc_CalcTemperature(TmuVoltage);
    }
}

void Bsp_Adc_1s_Task_Event(void)
{
    for (uint8 u8Index = 0U; u8Index < ADC_CFGSET_GROUP_0_CHANNELS; u8Index++)
    {
        DEBUG_INFO("Adc0_Group0_Results[%d]: %d!\n", u8Index, (int)Adc0_Group0_Results[u8Index]);
    }
    DEBUG_INFO("MCU Temperature: %f!\r\n", Temperature);
}

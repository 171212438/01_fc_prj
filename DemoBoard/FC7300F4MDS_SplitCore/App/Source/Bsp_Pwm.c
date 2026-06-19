#include "Bsp_Pwm.h"

/************ Macro *******************/
#define PWM_MAX_DUTY 0x8000

/************ Local variable *******************/
uint16 s_u16Rgb1DutyVal    = 0U;
uint16 s_u16Rgb1Step       = PWM_MAX_DUTY / 50;
uint8  s_u8BreathDirection = 0U;

uint16          s_u16Rgb2DutyVal   = 0U;
uint16          s_u16Rgb2Step      = PWM_MAX_DUTY / 200;
uint8           s_u8Rgb2OrderIndex = 0U;
Pwm_ChannelType s_u32Rgb2Order[3]  = { PwmConf_PwmChannel_RGB2_BLUE,
                                       PwmConf_PwmChannel_RGB2_GREEN,
                                       PwmConf_PwmChannel_RGB2_RED };

/************ Global functions *******************/
void Bsp_Pwm_Init(void)
{
    Pwm_Init(NULL_PTR);
}

void Bsp_Pwm_20ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (0 == GET_CPU_ID())
    {
#endif
        Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_BLUE, s_u16Rgb1DutyVal);
        Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_GREEN, s_u16Rgb1DutyVal);
        Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_RED, s_u16Rgb1DutyVal);
        if (0U == s_u8BreathDirection)
        {
            s_u16Rgb1DutyVal += s_u16Rgb1Step;
            if (s_u16Rgb1DutyVal > PWM_MAX_DUTY)
            {
                s_u16Rgb1DutyVal    = PWM_MAX_DUTY;
                s_u8BreathDirection = 1U;
            }
        }
        else
        {
            if (s_u16Rgb1DutyVal > s_u16Rgb1Step)
            {
                s_u16Rgb1DutyVal -= s_u16Rgb1Step;
            }
            else
            {
                s_u16Rgb1DutyVal    = 0U;
                s_u8BreathDirection = 0U;
            }
        }
#if (PWM_MULTICORE_ENABLED == STD_ON)
    }
#endif
}

void Bsp_Pwm_5ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (0 == GET_CPU_ID())
    {
#endif
        if (s_u16Rgb2DutyVal > PWM_MAX_DUTY)
        {
            s_u16Rgb2DutyVal = 0U;
            Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], 0);
            s_u8Rgb2OrderIndex++;
            if (s_u8Rgb2OrderIndex > 2)
            {
                s_u8Rgb2OrderIndex = 0U;
            }
        }
        else
        {
            s_u16Rgb2DutyVal += s_u16Rgb2Step;
            if (s_u16Rgb2DutyVal > PWM_MAX_DUTY)
            {
                Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], PWM_MAX_DUTY);
            }
            else
            {
                Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], s_u16Rgb2DutyVal);
            }
        }
#if (PWM_MULTICORE_ENABLED == STD_ON)
    }
#endif
}

#include "Bsp_Pwm.h"
#include "Cdd_PwmWave.h"

/************ Macro *******************/
#define PWM_MAX_DUTY 0x8000

/************ Local variable *******************/
uint16 s_u16Rgb1DutyVal = 0U;
uint16 s_u16Rgb1Step = PWM_MAX_DUTY / 50;
uint8 s_u8BreathDirection = 0U;

uint16 s_u16Rgb2DutyVal = 0U;
uint16 s_u16Rgb2Step = PWM_MAX_DUTY / 200;
uint8 s_u8Rgb2OrderIndex = 0U;
Pwm_ChannelType s_u32Rgb2Order[3] = {PwmConf_PwmChannel_RGB2_BLUE, PwmConf_PwmChannel_RGB2_GREEN, PwmConf_PwmChannel_RGB2_RED};

/************ Local functions *******************/
static void Bsp_Pwm_SetOutputPinModes(void)
{
  /* PWM5: eFTU1 TOM0 CH3 direct output. */
  Port_SetPinMode(PortConf_PortContainer_7_PortPin_22, PORT246_eFTU1_OUT_S3); /* PTH22 */

  /* PWM1-PWM4: eFTU1 TOM0 CH4-CH7 through DTM1 complementary outputs. */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_7, PORT71_eFTU1_OUT_S4);    /* PTC7 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_11, PORT139_eFTU1_OUT_S5);  /* PTE11 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_10, PORT138_eFTU1_OUT_S6);  /* PTE10 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_13, PORT141_eFTU1_OUT_S7);  /* PTE13 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_25, PORT89_eFTU1_OUT_S20);  /* PTC25 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_23, PORT87_eFTU1_OUT_S21);  /* PTC23 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_19, PORT117_eFTU1_OUT_S22); /* PTD21 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_4, PORT100_eFTU1_OUT_S23);  /* PTD4 */
}

/************ Global functions *******************/
void Bsp_Pwm_Init(void)
{
  Pwm_Init(NULL_PTR);

#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0U == GET_CPU_ID())
#endif
  {
    if (CDD_PWM_WAVE_OK == Cdd_PwmWave_Init()) {
      Bsp_Pwm_SetOutputPinModes();
    } else {
      /* Fail closed: Port_Init keeps all nine output pins as GPIO low. */
      DEBUG_INFO("Bsp_Pwm: CDD ARMED_LOW failed, output pins remain GPIO low.\r\n");
    }
  }
}

void Bsp_Pwm_20ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0 == GET_CPU_ID()) {
#endif
    Cdd_PwmWave_MainFunction();
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_BLUE, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_GREEN, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_RED, s_u16Rgb1DutyVal);
    if (0U == s_u8BreathDirection) {
      s_u16Rgb1DutyVal += s_u16Rgb1Step;
      if (s_u16Rgb1DutyVal > PWM_MAX_DUTY) {
        s_u16Rgb1DutyVal = PWM_MAX_DUTY;
        s_u8BreathDirection = 1U;
      }
    } else {
      if (s_u16Rgb1DutyVal > s_u16Rgb1Step) {
        s_u16Rgb1DutyVal -= s_u16Rgb1Step;
      } else {
        s_u16Rgb1DutyVal = 0U;
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
  if (2 == GET_CPU_ID()) {
#endif
    if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
      s_u16Rgb2DutyVal = 0U;
      Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], 0);
      s_u8Rgb2OrderIndex++;
      if (s_u8Rgb2OrderIndex > 2) {
        s_u8Rgb2OrderIndex = 0U;
      }
    } else {
      s_u16Rgb2DutyVal += s_u16Rgb2Step;
      if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
        Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], PWM_MAX_DUTY);
      } else {
        Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], s_u16Rgb2DutyVal);
      }
    }
#if (PWM_MULTICORE_ENABLED == STD_ON)
  }
#endif
}

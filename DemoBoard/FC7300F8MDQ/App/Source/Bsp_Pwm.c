#include "Bsp_Pwm.h"
#include "Cdd_PwmWave.h"
#include "Gpio_Reg.h"
#include "Port_Reg.h"

/************ Macro *******************/
#define PWM_MAX_DUTY 0x8000
#define BSP_PWM_GPIOC_OUTPUT_MASK (0x02800080U)
#define BSP_PWM_GPIOD_OUTPUT_MASK (0x00200010U)
#define BSP_PWM_GPIOE_OUTPUT_MASK (0x00002C00U)
#define BSP_PWM_GPIOH_OUTPUT_MASK (0x00400000U)

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

static boolean Bsp_Pwm_AreOutputPinsGpioLow(void)
{
  return ((((PORTC->PCR[7U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTC->PCR[23U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTC->PCR[25U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTD->PCR[4U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTD->PCR[21U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[10U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[11U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[13U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTH->PCR[22U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((GPIOC->PDDR & BSP_PWM_GPIOC_OUTPUT_MASK) == BSP_PWM_GPIOC_OUTPUT_MASK) &&
           ((GPIOD->PDDR & BSP_PWM_GPIOD_OUTPUT_MASK) == BSP_PWM_GPIOD_OUTPUT_MASK) &&
           ((GPIOE->PDDR & BSP_PWM_GPIOE_OUTPUT_MASK) == BSP_PWM_GPIOE_OUTPUT_MASK) &&
           ((GPIOH->PDDR & BSP_PWM_GPIOH_OUTPUT_MASK) == BSP_PWM_GPIOH_OUTPUT_MASK) &&
           ((GPIOC->PIDR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PIDR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
           ((GPIOH->PIDR & BSP_PWM_GPIOH_OUTPUT_MASK) == 0U) &&
           ((GPIOC->PDIR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PDIR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PDIR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
           ((GPIOH->PDIR & BSP_PWM_GPIOH_OUTPUT_MASK) == 0U)))
              ? TRUE
              : FALSE;
}

static boolean Bsp_Pwm_ForceOutputPinsGpioLow(void)
{
  /* Prepare a driven-low GPIO state before reconnecting the pads to GPIO. */
  GPIOC->PCOR = BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PCOR = BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PCOR = BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PCOR = BSP_PWM_GPIOH_OUTPUT_MASK;
  GPIOC->PDDR |= BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PDDR |= BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PDDR |= BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PDDR |= BSP_PWM_GPIOH_OUTPUT_MASK;
  GPIOC->PIDR &= ~BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PIDR &= ~BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PIDR &= ~BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PIDR &= ~BSP_PWM_GPIOH_OUTPUT_MASK;
  MCAL_DATA_SYNC_BARRIER();

  Port_SetPinMode(PortConf_PortContainer_7_PortPin_22, PORT246_GPIO); /* PTH22 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_7, PORT71_GPIO);   /* PTC7 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_11, PORT139_GPIO); /* PTE11 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_10, PORT138_GPIO); /* PTE10 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_13, PORT141_GPIO); /* PTE13 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_25, PORT89_GPIO);  /* PTC25 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_23, PORT87_GPIO);  /* PTC23 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_19, PORT117_GPIO); /* PTD21 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_4, PORT100_GPIO);  /* PTD4 */
  MCAL_DATA_SYNC_BARRIER();

  return Bsp_Pwm_AreOutputPinsGpioLow();
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
      if (CDD_PWM_WAVE_OK != Cdd_PwmWave_ConfirmArmedLow()) {
        (void)Cdd_PwmWave_EmergencyShutdown();
        if (TRUE == Bsp_Pwm_ForceOutputPinsGpioLow()) {
          DEBUG_INFO("Bsp_Pwm: physical ARMED_LOW check failed; GPIO-low fallback verified.\r\n");
        } else {
          DEBUG_INFO("Bsp_Pwm: GPIO-low fallback verification failed; outputs remain fault-latched.\r\n");
        }
      }
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

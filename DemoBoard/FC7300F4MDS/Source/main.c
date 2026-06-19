#include "Bsp_Adc.h"
#include "Bsp_Can.h"
#include "Bsp_Crc.h"
#include "Bsp_Crypto.h"
#include "Bsp_Dma.h"
#include "Bsp_Fee.h"
#include "Bsp_Fls.h"
#include "Bsp_Pfls.h"
#include "Bsp_Gpt.h"
#include "Bsp_I2c.h"
#include "Bsp_Icu.h"
#include "Bsp_Lin.h"
#include "Bsp_Mb.h"
#include "Bsp_Mcu.h"
#include "Bsp_Msc.h"
#include "Bsp_Ocu.h"
#include "Bsp_Pwm.h"
#include "Bsp_Sent.h"
#include "Bsp_Spi.h"
#include "Bsp_Trgsel.h"
#include "Bsp_Uart.h"
#include "Bsp_Wdg.h"
#include "Bsp_io.h"
#include "Bsp_Ssi.h"
#include "Common_Cfg.h"
#include "Mcu_Rgm_Regs.h"
#include "Mpu.h"
#include "Scm_Reg.h"
#include "SpinLock.h"

#define FEE_DEMO_SUPPORT                  (STD_ON)
#define PFLS_DEMO_SUPPORT                 (STD_ON)
#define TRGSEL_DEMO_SUPPORT               (STD_ON)
#define GPT_DEMO_SUPPORT                  (STD_ON)
#define WDG_DEMO_SUPPORT                  (STD_ON)
#define CAN_DEMO_SUPPORT                  (STD_ON)
#define PWM_DEMO_SUPPORT                  (STD_ON)
#define DMA_DEMO_SUPPORT                  (STD_ON)
#define ADC_DEMO_SUPPORT                  (STD_ON)
#define LIN_DEMO_SUPPORT                  (STD_ON)
#define SPI_DEMO_SUPPORT                  (STD_ON)
#define ICU_DEMO_SUPPORT                  (STD_ON)
#define I2C_DEMO_SUPPORT                  (STD_ON)
#define OCU_DEMO_SUPPORT                  (STD_ON)
#define MB_DEMO_SUPPORT                   (STD_ON)
#define CRYPTO_DEMO_SUPPORT               (STD_ON)
#define SENT_DEMO_SUPPORT                 (STD_ON)
#define CRC_DEMO_SUPPORT                  (STD_ON)
#define MSC_DEMO_SUPPORT                  (STD_ON)
#define IO_DEMO_SUPPORT                   (STD_ON)
#define SSI_DEMO_SUPPORT                  (STD_ON)

#define SCM_CPUVTOR_CPU_INIT_VECTOR_MASK  0xFFFFFF8u

#define SCM_CPUVTOR_CPU_INIT_VECTOR_SHIFT 3u

#define SCM_CPUVTOR_CPU_INIT_VECTOR_WIDTH 25u

#define SCM_CPUVTOR_CPU_INIT_VECTOR(x)                                \
    (((uint32)(((uint32)(x)) << SCM_CPUVTOR_CPU_INIT_VECTOR_SHIFT)) & \
     SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)

/************** global variables **************/
#if (defined RTT_PRINTF)
extern char u8C1Buf[1024];
extern char u8C2Buf[1024];
const char  cCore1Buf[] = { "Core1 buffer" };
const char  cCore2Buf[] = { "Core2 buffer" };
#endif

/************** extern function ***************/
extern ISR(Systick_Reload_ISR);

#define BSP_START_SEC_RAMCODE
#include "Bsp_MemMap.h"

/********** systick interrupt handler *********/
BSP_TEXT_SECTION void SysTick_Handler(void)
{
    Systick_Reload_ISR();
}

/*************** task functions ***************/
BSP_TEXT_SECTION void task_5000ms(void)
{
#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
    Bsp_Mcu_LowPowerEntry_Task();
#else
    __asm("nop");
#endif
}

BSP_TEXT_SECTION void task_1000ms(void)
{
#if (IO_DEMO_SUPPORT == STD_ON)
    Bsp_IO_Task_1s_Event();
#endif
#if (ADC_DEMO_SUPPORT == STD_ON)
    Bsp_Adc_1s_Task_Event();
#endif
#if (LIN_DEMO_SUPPORT == STD_ON)
    Bsp_Lin_1s_Task_Event();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
    Bsp_Can_1s_Task_Event();
#endif
#if (SPI_DEMO_SUPPORT == STD_ON)
    Bsp_Spi_1s_Task_Event();
#endif
#if (SSI_DEMO_SUPPORT == STD_ON)
    Bsp_Ssi_1s_Task_Event();
#endif
#if (FEE_DEMO_SUPPORT == STD_ON)
    Bsp_Fee_1s_Task_Event();
#endif
#if (MB_DEMO_SUPPORT == STD_ON)
    Bsp_Mb_1s_Task_Event();
#endif
#if (SENT_DEMO_SUPPORT == STD_ON)
    Bsp_Sent_1s_Task_Event();
#endif
#if (I2C_DEMO_SUPPORT == STD_ON)
    Bsp_I2c_1s_Task_Event();
#endif
#if (CRYPTO_DEMO_SUPPORT == STD_ON)
    Bsp_Crypto_1s_Task_Event();
#endif
#if 1
    DEBUG_INFO("core ID %d Running!\r\n", GET_CPU_ID());
#endif
}

BSP_TEXT_SECTION void task_100ms(void)
{
#if (MB_DEMO_SUPPORT == STD_ON)
    Bsp_Mb_100ms_Task_Event();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
    Bsp_Can_100ms_Task_Event();
#endif
#if (MSC_DEMO_SUPPORT == STD_ON)
    Bsp_Msc_100ms_Task_Event();
#endif
#if (MB_DEMO_SUPPORT == STD_ON)
    Bsp_Mb_100ms_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_20ms(void)
{
#if (PWM_DEMO_SUPPORT == STD_ON)
    Bsp_Pwm_20ms_Task_Event();
#endif
#if (ADC_DEMO_SUPPORT == STD_ON)
    Bsp_Adc_20ms_Task_Event();
#endif
#if (DMA_DEMO_SUPPORT == STD_ON)
    Bsp_Dma_20ms_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_10ms(void)
{
    __asm("nop");
}

BSP_TEXT_SECTION void task_5ms(void)
{
#if (PFLS_DEMO_SUPPORT == STD_ON)
    Bsp_Pfls_5ms_Task_Event();
#endif
#if (FEE_DEMO_SUPPORT == STD_ON)
    Bsp_Fee_5ms_Task_Event();
    Bsp_Fls_5ms_Task_Event();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
    Bsp_Can_5ms_Task_Event();
#endif
#if (SENT_DEMO_SUPPORT == STD_ON)
    Bsp_Sent_5ms_Task_Event();
#endif
#if (PWM_DEMO_SUPPORT == STD_ON)
    Bsp_Pwm_5ms_Task_Event();
#endif
}

/* Initialize the UART or SEGGER_RTT for debug print. */
BSP_TEXT_SECTION static void core0_print_init(void)
{
#ifdef UART_PRINTF
    Bsp_Uart_Init();
#endif
#if (defined RTT_PRINTF)
    SEGGER_RTT_Init();
    SEGGER_RTT_ConfigUpBuffer(0, cCore1Buf, u8C1Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
    SEGGER_RTT_ConfigUpBuffer(1, cCore2Buf, u8C2Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
#endif
}

/**************** main function ***************/
BSP_TEXT_SECTION int main(void)
{
    boolean bReturnFlag = TRUE;

    Bsp_Mpu_Init();
    Bsp_Mcu_Init();
    Bsp_Port_Init();

#if (TRGSEL_DEMO_SUPPORT == STD_ON)
    Bsp_Trgsel_Init();
#endif

    /* Debug print initialization */
    core0_print_init();

#if (GPT_DEMO_SUPPORT == STD_ON)
    Bsp_Gpt_Init();
#endif
#if (WDG_DEMO_SUPPORT == STD_ON)
    Bsp_Wdg_Init();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
    Bsp_Can_Init();
#endif
#if (PWM_DEMO_SUPPORT == STD_ON)
    Bsp_Pwm_Init();
#endif
#if (DMA_DEMO_SUPPORT == STD_ON)
    Bsp_Dma_Init();
#endif
#if (ADC_DEMO_SUPPORT == STD_ON)
    Bsp_Adc_Init();
#endif
#if (LIN_DEMO_SUPPORT == STD_ON)
    Bsp_Lin_Init();
#endif
#if (SPI_DEMO_SUPPORT == STD_ON)
    Bsp_Spi_Init();
#endif
#if (ICU_DEMO_SUPPORT == STD_ON)
    Bsp_Icu_Init();
#endif
#if (PFLS_DEMO_SUPPORT == STD_ON)
    Bsp_Pfls_Init();
#endif
#if (FEE_DEMO_SUPPORT == STD_ON)
    Bsp_Fls_Init();
    Bsp_Fee_Init();
#endif
#if (I2C_DEMO_SUPPORT == STD_ON)
    Bsp_I2c_Init();
#endif
#if (OCU_DEMO_SUPPORT == STD_ON)
    Bsp_Ocu_Init();
#endif

#if (MB_DEMO_SUPPORT == STD_ON)
    Bsp_Mb_Init();
#endif
#if (CRYPTO_DEMO_SUPPORT == STD_ON)
    Bsp_Crypto_Init();
#endif
#if (SENT_DEMO_SUPPORT == STD_ON)
    Bsp_Sent_Init();
#endif
#if (CRC_DEMO_SUPPORT == STD_ON)
    Bsp_Crc_Init();
#endif

#if (SSI_DEMO_SUPPORT == STD_ON)
    Bsp_Ssi_Init();
#endif

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
    Bsp_Mcu_ResetReason_Print();
#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

    Systick_Init(&Systick_Config);
    Systick_Enable();

    while (bReturnFlag)
    {
        Systick_RunTask();
    }
    return 0;
}

#define BSP_STOP_SEC_RAMCODE
#include "Bsp_MemMap.h"

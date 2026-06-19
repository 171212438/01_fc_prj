#include "Common_Cfg.h"
#include "Bsp_Mcu.h"
#include "Mpu.h"
#include "Bsp_io.h"
#include "Bsp_Pwm.h"
#include "Bsp_Gpt.h"
#include "Bsp_Wdg.h"
#include "Bsp_Adc.h"
#include "Bsp_Lin.h"
#include "Bsp_Dma.h"
#include "Bsp_Spi.h"
#include "Bsp_Icu.h"
#include "Bsp_I2c.h"
#include "Bsp_Can.h"
#include "Bsp_Trgsel.h"
#include "Bsp_Fls.h"
#include "Bsp_Fee.h"
#include "Bsp_Mb.h"
#include "Bsp_Msc.h"
#include "Bsp_Ocu.h"
#include "Bsp_Sent.h"
#include "Bsp_Crc.h"
#include "Bsp_Crypto.h"
#include "Bsp_Uart.h"
#include "Bsp_Pfls.h"

/************** global variables **************/
#if (defined RTT_PRINTF)
extern char u8C1Buf[1024];
const char  cCore1Buf[] = { "Core1 buffer" };
#endif

#define BSP_START_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"

BSP_DATA_SECTION uint16 g_u16Count = 0U;

#define BSP_STOP_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"

/************** extern function ***************/
extern ISR(Systick_Reload_ISR);

#define BSP_START_SEC_RAMCODE
#include "Bsp_MemMap.h"

/********** systick interrupt handler *********/
BSP_TEXT_SECTION void SysTick_Handler(void);
void                  SysTick_Handler(void)
{
    Systick_Reload_ISR();
}

/*************** task functions ***************/
BSP_TEXT_SECTION void task_5000ms(void)
{
#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
    Bsp_Mcu_LowPowerEntry();
#else
    __asm("nop");
#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/
}

BSP_TEXT_SECTION void task_1000ms(void)
{
    Bsp_IO_Task_1s_Event();
    Bsp_Adc_1s_Task_Event();
    Bsp_Trgsel_1s_Task_Event();
    Bsp_Spi_1s_Task_Event();
    Bsp_Lin_1s_Task_Event();
    Bsp_I2c_1s_Task_Event();
    Bsp_Can_1s_Task_Event();
    // Bsp_Mb_1s_Task_Event();
    Bsp_Fee_1s_Task_Event();
    Bsp_Msc_1s_Task_Event();
    // Bsp_Crypto_1s_Task_Event();//User should load firmware first
    DEBUG_INFO("Runing tick %d!\r\n", g_u16Count++);
}

BSP_TEXT_SECTION void task_100ms(void)
{
    Bsp_Msc_100ms_Task_Event();
    Bsp_Can_100ms_Task_Event();
}

BSP_TEXT_SECTION void task_20ms(void)
{
    Bsp_Pwm_20ms_Task_Event();
    //	Bsp_Dma_20ms_Task_Event();
    Bsp_Adc_20ms_Task_Event();
    Bsp_Msc_20ms_Task_Event();
    __asm("nop");
}

BSP_TEXT_SECTION void task_10ms(void)
{
    __asm("nop");
}

BSP_TEXT_SECTION void task_5ms(void)
{
    Bsp_Pwm_5ms_Task_Event();
    Bsp_Fee_5ms_Task_Event();
    Bsp_Fls_5ms_Task_Event();
    Bsp_Msc_5ms_Task_Event();
    Bsp_Sent_5ms_Task_Event();
    Bsp_Can_5ms_Task_Event();
}

/* Initialize the UART or SEGGER_RTT for debug print. */
BSP_TEXT_SECTION static void DebugPrint_Init(void)
{
#ifdef UART_PRINTF
    Bsp_Uart_Init();
#endif
#if (defined RTT_PRINTF)
    SEGGER_RTT_Init();
    SEGGER_RTT_ConfigUpBuffer(1, cCore1Buf, u8C1Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
#endif
}

/**************** main function ***************/
BSP_TEXT_SECTION int main(void)
{
    boolean bReturnFlag = TRUE;
    Bsp_Mpu_Init();
    Bsp_Mcu_Init();
    Bsp_Port_Init();
    Bsp_Mb_Init();
    // Bsp_Crypto_Init();
    Bsp_Dma_Init();
    Bsp_Gpt_Init();
    Bsp_Wdg_Init();
    Bsp_Adc_Init();
    Bsp_Pwm_Init();
    Bsp_Can_Init();
    Bsp_Lin_Init();
    Bsp_Trgsel_Init();
    Bsp_Crc_Init();
    Bsp_Ocu_Init();
    Bsp_Spi_Init();
    Bsp_I2c_Init();
    Bsp_Pfls_Init();
    Bsp_Fls_Init();
    Bsp_Fee_Init();
    Bsp_Icu_Init();
    Bsp_Sent_Init();
    // /* Debug print initialization */
    DebugPrint_Init();

    Bsp_Msc_Init();

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

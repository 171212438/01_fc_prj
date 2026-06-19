#include "Common_Cfg.h"
#include "Bsp_Mcu.h"
#include "Mpu.h"
#include "Bsp_io.h"
#include "Bsp_Mcu.h"
#include "Bsp_Pwm.h"
#include "Bsp_Gpt.h"
#include "Bsp_Wdg.h"
#include "Bsp_Adc.h"
#include "Bsp_Lin.h"
#include "Bsp_Dma.h"
#include "Bsp_Spi.h"
#include "Bsp_Can.h"
#include "Bsp_Icu.h"
#include "Bsp_I2c.h"
#include "Bsp_Trgsel.h"
#include "Bsp_Fls.h"
#include "Bsp_Fee.h"
#include "Bsp_EthIf.h"
#include "Bsp_Eth.h"
#include "Bsp_EthSM.h"
#include "Bsp_EthTrcv.h"
#include "Bsp_Mb.h"
#include "Bsp_Msc.h"
#include "Scm_Reg.h"
#include "Mcu_Rgm_Regs.h"
#include "SpinLock.h"
#include "Bsp_Msc.h"
#include "Bsp_Ocu.h"
#include "Bsp_Sent.h"
#include "Bsp_Ssi.h"
#include "Bsp_Crc.h"
#include "Bsp_Crypto.h"
#include "Bsp_Uart.h"
#include "Bsp_Sdadc.h"
#include "Bsp_Qdt.h"
#include "Bsp_Ssi.h"
#include "Bsp_Pfls.h"

#define ETH_DEMO_SUPPORT                  (STD_ON)
#define PFLS_DEMO_SUPPORT                 (STD_ON)
#define FEE_DEMO_SUPPORT                  (STD_ON)
#define TRGSEL_DEMO_SUPPORT               (STD_ON)
#define QDT_DEMO_SUPPORT                  (STD_ON)
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
#define SDADC_DEMO_SUPPORT                (STD_ON)
#define MB_DEMO_SUPPORT                   (STD_ON)
#define CRYPTO_DEMO_SUPPORT               (STD_ON)
#define SENT_DEMO_SUPPORT                 (STD_ON)
#define SSI_DEMO_SUPPORT                  (STD_ON)
#define CRC_DEMO_SUPPORT                  (STD_ON)
#define MSC_DEMO_SUPPORT                  (STD_ON)
#define IO_DEMO_SUPPORT                   (STD_ON)

#define SCM_CPUVTOR_CPU_INIT_VECTOR_MASK  0xFFFFFF8u

#define SCM_CPUVTOR_CPU_INIT_VECTOR_SHIFT 3u

#define SCM_CPUVTOR_CPU_INIT_VECTOR_WIDTH 25u

#define SCM_CPUVTOR_CPU_INIT_VECTOR(x)                                \
    (((uint32)(((uint32)(x)) << SCM_CPUVTOR_CPU_INIT_VECTOR_SHIFT)) & \
     SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)

/* C1_RST Bit Fields */
#define RGM_C1_RST_C1_OUT_OF_RST_MASK  0x2u
#define RGM_C1_RST_C1_OUT_OF_RST_SHIFT 1u
#define RGM_C1_RST_C1_OUT_OF_RST_WIDTH 1u
#define RGM_C1_RST_C1_OUT_OF_RST(x) \
    (((uint32)(((uint32)(x)) << RGM_C1_RST_C1_OUT_OF_RST_SHIFT)) & RGM_C1_RST_C1_OUT_OF_RST_MASK)
#define RGM_C1_RST_C1_SWRST_MASK  0x1u
#define RGM_C1_RST_C1_SWRST_SHIFT 0u
#define RGM_C1_RST_C1_SWRST_WIDTH 1u
#define RGM_C1_RST_C1_SWRST(x) \
    (((uint32)(((uint32)(x)) << RGM_C1_RST_C1_SWRST_SHIFT)) & RGM_C1_RST_C1_SWRST_MASK)
/* C2_RST Bit Fields */
#define RGM_C2_RST_C2_OUT_OF_RST_MASK  0x2u
#define RGM_C2_RST_C2_OUT_OF_RST_SHIFT 1u
#define RGM_C2_RST_C2_OUT_OF_RST_WIDTH 1u
#define RGM_C2_RST_C2_OUT_OF_RST(x) \
    (((uint32)(((uint32)(x)) << RGM_C2_RST_C2_OUT_OF_RST_SHIFT)) & RGM_C2_RST_C2_OUT_OF_RST_MASK)
#define RGM_C2_RST_C2_SWRST_MASK  0x1u
#define RGM_C2_RST_C2_SWRST_SHIFT 0u
#define RGM_C2_RST_C2_SWRST_WIDTH 1u
#define RGM_C2_RST_C2_SWRST(x) \
    (((uint32)(((uint32)(x)) << RGM_C2_RST_C2_SWRST_SHIFT)) & RGM_C2_RST_C2_SWRST_MASK)

/************** global variables **************/
#if (defined RTT_PRINTF)
extern char u8C1Buf[1024];
extern char u8C2Buf[1024];
extern char u8C3Buf[1024];
const char  cCore1Buf[] = { "Core1 buffer" };
const char  cCore2Buf[] = { "Core2 buffer" };
const char  cCore3Buf[] = { "Core3 buffer" };
#endif

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)

#define BSP_START_SEC_VAR_INIT_SHARABLE
#include "Bsp_MemMap.h"

BSP_DATA_SECTION volatile Bsp_EntryLowPowerCmdType eCommand = BSP_TX_STANDBY_CMD;

#define BSP_STOP_SEC_VAR_INIT_SHARABLE
#include "Bsp_MemMap.h"

#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

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
    Bsp_Mcu_LowPowerEntry_Task(&eCommand);
#else
    if (0U == GET_CPU_ID())
    {
        __asm("nop");
    }
    else if (1U == GET_CPU_ID())
    {
        __asm("nop");
    }
    else if (2U == GET_CPU_ID())
    {
        __asm("nop");
    }
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
#if (FEE_DEMO_SUPPORT == STD_ON)
    Bsp_Fee_1s_Task_Event();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
    Bsp_EthIf_1s_Task_Event();
    Bsp_EthSM_1s_Task_Event();
    Bsp_Eth_GetCurrentTime();
#endif
#if 0
    DEBUG_INFO("core ID %d Running!\r\n", u32CoreID);
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
#if (MSC_DEMO_SUPPORT == STD_ON)
    Bsp_Msc_1s_Task_Event();
#endif
#if (CRYPTO_DEMO_SUPPORT == STD_ON)
    Bsp_Crypto_1s_Task_Event();
#endif
#if (SDADC_DEMO_SUPPORT == STD_ON)
    Bsp_Sdadc_1s_Task_Event();
#endif
#if (QDT_DEMO_SUPPORT == STD_ON)
    Bsp_Qdt_1s_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_100ms(void)
{
#if (CAN_DEMO_SUPPORT == STD_ON)
    Bsp_Can_100ms_Task_Event();
#endif
#if (MSC_DEMO_SUPPORT == STD_ON)
    Bsp_Msc_100ms_Task_Event();
#endif
#if (MB_DEMO_SUPPORT == STD_ON)
    Bsp_Mb_100ms_Task_Event();
#endif
#if (SDADC_DEMO_SUPPORT == STD_ON)
    Bsp_Sdadc_100ms_Task_Event();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
    Bsp_Eth_100ms_Task_Event();
    Bsp_EthTrcv_100ms_Task_Event();
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
#if (MSC_DEMO_SUPPORT == STD_ON)
    Bsp_Msc_20ms_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_10ms(void)
{
    if (0U == GET_CPU_ID())
    {
        __asm("nop");
    }
    else if (1U == GET_CPU_ID())
    {
        __asm("nop");
    }
    else if (2U == GET_CPU_ID())
    {
        __asm("nop");
    }
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
#if (MSC_DEMO_SUPPORT == STD_ON)
    Bsp_Msc_5ms_Task_Event();
#endif
#if (PWM_DEMO_SUPPORT == STD_ON)
    Bsp_Pwm_5ms_Task_Event();
#endif
#if (ICU_DEMO_SUPPORT == STD_ON)
    Bsp_Icu_5ms_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_500us(void)
{
#if (QDT_DEMO_SUPPORT == STD_ON)
    Bsp_Qdt_500us_Task_Event();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
    Bsp_EthIf_500us_Task_Event();
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
    SEGGER_RTT_ConfigUpBuffer(2, cCore3Buf, u8C3Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
#endif
}

/* Perform release of other cores in core0. */
BSP_TEXT_SECTION static void core0_release_other_cores(void)
{
#if defined(__GNUC__) || defined(__ghs__) || defined(__TASKING__)
    extern uint32 __rom_intvec_start[];
#elif defined(__ICCARM__)
#pragma section = "ISR_VECTOR"
#define __rom_intvec_start (__section_begin("ISR_VECTOR"))
#endif
    uint32 u32RegVal;

    u32RegVal     = SCM->CPU1VTOR;
    SCM->CPU1VTOR = ((u32RegVal & (~(uint32)SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)) |
                     SCM_CPUVTOR_CPU_INIT_VECTOR(((uint32)__rom_intvec_start) >> 7));
    SCM->CORE_HOLD &= ~((uint32)0x2u);
    RGM->C1_RLS |= (uint32)RGM_C1_RLS_C1_RELEASE_MASK;

    u32RegVal     = SCM->CPU2VTOR;
    SCM->CPU2VTOR = ((u32RegVal & (~(uint32)SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)) |
                     SCM_CPUVTOR_CPU_INIT_VECTOR((uint32)__rom_intvec_start >> 7));
    SCM->CORE_HOLD &= ~((uint32)0x4u);
    RGM->C2_RLS |= (uint32)RGM_C2_RLS_C2_RELEASE_MASK;
}

/**************** main function ***************/
BSP_TEXT_SECTION int main(void)
{
    boolean bReturnFlag = TRUE;

    if (0U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
        Bsp_Port_Init();
#if (TRGSEL_DEMO_SUPPORT == STD_ON)
        Bsp_Trgsel_Init();
#endif

        /* Debug print initialization */
        core0_print_init();

#if (QDT_DEMO_SUPPORT == STD_ON)
        Bsp_Qdt_Init();
#endif
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
#if (SDADC_DEMO_SUPPORT == STD_ON)
        Bsp_Sdadc_Init();
#endif

        /* Release core1 and core2 */
        core0_release_other_cores();

#if (MB_DEMO_SUPPORT == STD_ON)
        Bsp_Mb_Init();
#endif
#if (CRYPTO_DEMO_SUPPORT == STD_ON)
        Bsp_Crypto_Init();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
        Bsp_EthIf_Init();
        Bsp_Eth_Init();
        Bsp_EthTrcv_Init();
#endif
#if (SENT_DEMO_SUPPORT == STD_ON)
        Bsp_Sent_Init();
#endif
#if (SSI_DEMO_SUPPORT == STD_ON)
        Bsp_Ssi_Init();
#endif
#if (CRC_DEMO_SUPPORT == STD_ON)
        Bsp_Crc_Init();
#endif

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
        Bsp_Mcu_ResetReason_Print();
#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/
    }
    else if (1U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
#if (LIN_DEMO_SUPPORT == STD_ON)
        Bsp_Lin_Init();
#endif
#if (PWM_DEMO_SUPPORT == STD_ON)
        Bsp_Pwm_Init();
#endif
#if (ADC_DEMO_SUPPORT == STD_ON)
        Bsp_Adc_Init();
#endif
#if (MB_DEMO_SUPPORT == STD_ON)
        Bsp_Mb_Init();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
        Bsp_Can_Init();
#endif
#if (ICU_DEMO_SUPPORT == STD_ON)
        Bsp_Icu_Init();
#endif
#if (GPT_DEMO_SUPPORT == STD_ON)
        Bsp_Gpt_Init();
#endif
#if (WDG_DEMO_SUPPORT == STD_ON)
        Bsp_Wdg_Init();
#endif
#if (DMA_DEMO_SUPPORT == STD_ON)
        Bsp_Dma_Init();
#endif
#if (SPI_DEMO_SUPPORT == STD_ON)
        Bsp_Spi_Init();
#endif
#if (MSC_DEMO_SUPPORT == STD_ON)
        Bsp_Msc_Init();
#endif
#if (OCU_DEMO_SUPPORT == STD_ON)
        Bsp_Ocu_Init();
#endif
#if (I2C_DEMO_SUPPORT == STD_ON)
        Bsp_I2c_Init();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
        Bsp_Eth_Init(); /* Init for Eth_GetCurrentTime */
#endif
#if (CRC_DEMO_SUPPORT == STD_ON)
        Bsp_Crc_Init();
#endif
#if (CRYPTO_DEMO_SUPPORT == STD_ON)
        Bsp_Crypto_Init();
#endif
#if (SDADC_DEMO_SUPPORT == STD_ON)
        Bsp_Sdadc_Init();
#endif
    }
    else if (2U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
#if (DMA_DEMO_SUPPORT == STD_ON)
        Bsp_Dma_Init();
#endif
#if (LIN_DEMO_SUPPORT == STD_ON)
        Bsp_Lin_Init();
#endif
#if (PWM_DEMO_SUPPORT == STD_ON)
        Bsp_Pwm_Init();
#endif
#if (MB_DEMO_SUPPORT == STD_ON)
        Bsp_Mb_Init();
#endif
#if (CAN_DEMO_SUPPORT == STD_ON)
        Bsp_Can_Init();
#endif
#if (GPT_DEMO_SUPPORT == STD_ON)
        Bsp_Gpt_Init();
#endif
#if (WDG_DEMO_SUPPORT == STD_ON)
        Bsp_Wdg_Init();
#endif
#if (ETH_DEMO_SUPPORT == STD_ON)
        Bsp_Eth_Init(); /* Init for Eth_GetCurrentTime */
#endif
#if (CRC_DEMO_SUPPORT == STD_ON)
        Bsp_Crc_Init();
#endif
#if (SDADC_DEMO_SUPPORT == STD_ON)
        Bsp_Sdadc_Init();
#endif
    }

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

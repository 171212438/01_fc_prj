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

#define USE_ETH_TEST

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
#define BSP_START_SEC_VAR_INIT_SHAREABLE
#include "Bsp_MemMap.h"

BSP_DATA_SECTION volatile uint32 g_u32CoreRunCount[4U] = { 0U, 0U, 0U, 0U };

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
BSP_DATA_SECTION volatile Bsp_EntryLowPowerCmdType eCommand = BSP_TX_STANDBY_CMD;
#endif /* (MCU_LOW_POWER_MODE_TEST == STD_ON) */

#define BSP_STOP_SEC_VAR_INIT_SHAREABLE
#include "Bsp_MemMap.h"

/************** Function Declaration ***************/

/************** extern function ***************/
extern ISR(Systick_Reload_ISR);

#if (defined RTT_PRINTF)
extern char u8C1Buf[1024];
extern char u8C2Buf[1024];
extern char u8C3Buf[1024];
const char  cCore1Buf[] = { "Core1 buffer" };
const char  cCore2Buf[] = { "Core2 buffer" };
const char  cCore3Buf[] = { "Core3 buffer" };
#endif

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)

#define BSP_START_SEC_VAR_INIT_SHAREABLE
#include "Bsp_MemMap.h"
// GCC define
//__attribute__((section(".data_shareable"))) volatile Bsp_EntryLowPowerCmdType eCommand =
//BSP_TX_STANDBY_CMD;
BSP_DATA_SECTION volatile Bsp_EntryLowPowerCmdType eCommand = BSP_TX_STANDBY_CMD;

#define BSP_STOP_SEC_VAR_INIT_SHAREABLE
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
    __asm("nop");
#endif
}

BSP_TEXT_SECTION void task_1000ms(void)
{
    Bsp_IO_Task_1s_Event();
    Bsp_Adc_1s_Task_Event();
    Bsp_Lin_1s_Task_Event();
    Bsp_Can_1s_Task_Event();
    Bsp_Spi_1s_Task_Event();
#ifdef USE_FEE_TEST
    Bsp_Fee_1s_Task_Event();
#endif
#ifdef USE_ETH_TEST
    Bsp_EthIf_1s_Task_Event();
    Bsp_EthSM_1s_Task_Event();
    Bsp_Eth_GetCurrentTime();
#endif
#if 0
    uint8 u8CoreId = GET_CPU_ID();
    DEBUG_INFO("core ID %d Running!\r\n", u32CoreID);
#endif
    Bsp_Mb_1s_Task_Event();
    Bsp_Sent_1s_Task_Event();
    Bsp_I2c_1s_Task_Event();
    Bsp_Msc_1s_Task_Event();
    Bsp_Crypto_1s_Task_Event();
    Bsp_Sdadc_1s_Task_Event();
    Bsp_Qdt_1s_Task_Event();
}

BSP_TEXT_SECTION void task_100ms(void)
{
    Bsp_Can_100ms_Task_Event();
    Bsp_Msc_100ms_Task_Event();
    Bsp_Mb_100ms_Task_Event();
    Bsp_Sdadc_100ms_Task_Event();
#ifdef USE_ETH_TEST
    Bsp_Eth_100ms_Task_Event();
    Bsp_EthTrcv_100ms_Task_Event();
#endif
}

BSP_TEXT_SECTION void task_20ms(void)
{
    Bsp_Pwm_20ms_Task_Event();
    Bsp_Adc_20ms_Task_Event();
    Bsp_Dma_20ms_Task_Event();
    Bsp_Msc_20ms_Task_Event();
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
#ifdef USE_FEE_TEST
    Bsp_Fee_5ms_Task_Event();
    Bsp_Fls_5ms_Task_Event();
#endif
    Bsp_Can_5ms_Task_Event();
    Bsp_Sent_5ms_Task_Event();
    Bsp_Msc_5ms_Task_Event();
    Bsp_Pwm_5ms_Task_Event();
    Bsp_Icu_5ms_Task_Event();
}

BSP_TEXT_SECTION void task_500us(void)
{
    Bsp_Qdt_500us_Task_Event();
#ifdef USE_ETH_TEST
    Bsp_EthIf_500us_Task_Event();
#endif
}

#define BSP_STOP_SEC_RAMCODE
#include "Bsp_MemMap.h"

#define BSP_START_SEC_TCMCODE_CORE0
#include "Bsp_MemMap.h"
/* Initialize the UART or SEGGER_RTT for debug print. */
BSP_TEXT_SECTION static void core0_print_init(void)
{
#ifdef UART_PRINTF
    Bsp_Uart_Init();

    DEBUG_INFO("/*******************************/\r\n");
    DEBUG_INFO("/* FC7300F8MDQ Split Demo      */\r\n");
    DEBUG_INFO("/* LED1: Toggled by CPU0       */\r\n");
    DEBUG_INFO("/* LED2: Toggled by CPU1       */\r\n");
    DEBUG_INFO("/* LED3: Toggled by CPU2       */\r\n");
    DEBUG_INFO("/* RGB2: Toggled by CPU3       */\r\n");
    DEBUG_INFO("/*******************************/\r\n");

#endif
#if (defined RTT_PRINTF)
    SEGGER_RTT_Init();
    SEGGER_RTT_ConfigUpBuffer(1, cCore1Buf, u8C1Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
    SEGGER_RTT_ConfigUpBuffer(2, cCore2Buf, u8C2Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
    SEGGER_RTT_ConfigUpBuffer(3, cCore3Buf, u8C3Buf, 1024, SEGGER_RTT_MODE_NO_BLOCK_SKIP);
#endif
}

/* Perform release of other cores in core0. */
BSP_TEXT_SECTION static void core0_release_other_cores(void)
{
#if defined(__GNUC__) || defined(__ghs__)
    extern uint32 __rom_intvec_start_core0[];
    extern uint32 __rom_intvec_start_core1[];
    extern uint32 __rom_intvec_start_core2[];
    extern uint32 __rom_intvec_start_core3[];
#elif defined(__ICCARM__)
#pragma section = "ISR_VECTOR_CORE0"
#pragma section = "ISR_VECTOR_CORE1"
#pragma section = "ISR_VECTOR_CORE2"
#pragma section = "ISR_VECTOR_CORE3"
#define __rom_intvec_start_core0 (__section_begin("ISR_VECTOR_CORE0"))
#define __rom_intvec_start_core1 (__section_begin("ISR_VECTOR_CORE1"))
#define __rom_intvec_start_core2 (__section_begin("ISR_VECTOR_CORE2"))
#define __rom_intvec_start_core3 (__section_begin("ISR_VECTOR_CORE3"))
#endif
    uint32 u32RegVal;

    u32RegVal     = SCM->CPU1VTOR;
    SCM->CPU1VTOR = ((u32RegVal & (~(uint32)SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)) |
                     SCM_CPUVTOR_CPU_INIT_VECTOR(((uint32)__rom_intvec_start_core1) >> 7));
    SCM->CORE_HOLD &= ~((uint32)0x2u);
    RGM->C1_RLS |= (uint32)RGM_C1_RLS_C1_RELEASE_MASK;

    u32RegVal     = SCM->CPU2VTOR;
    SCM->CPU2VTOR = ((u32RegVal & (~(uint32)SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)) |
                     SCM_CPUVTOR_CPU_INIT_VECTOR((uint32)__rom_intvec_start_core2 >> 7));
    SCM->CORE_HOLD &= ~((uint32)0x4u);
    RGM->C2_RLS |= (uint32)RGM_C2_RLS_C2_RELEASE_MASK;

    u32RegVal     = SCM->CPU3VTOR;
    SCM->CPU3VTOR = ((u32RegVal & (~(uint32)SCM_CPUVTOR_CPU_INIT_VECTOR_MASK)) |
                     SCM_CPUVTOR_CPU_INIT_VECTOR((uint32)__rom_intvec_start_core3 >> 7));
    SCM->CORE_HOLD &= ~((uint32)0x8u);
    RGM->C3_RLS |= (uint32)RGM_C3_RLS_C3_RELEASE_MASK;
}

/**************** main function ***************/
BSP_TEXT_SECTION int main_core0(void)
{
    boolean bReturnFlag = TRUE;

    if (0U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
        Bsp_Port_Init();
        Bsp_Trgsel_Init();

        /* Debug print initialization */
        core0_print_init();

        Bsp_Qdt_Init();
        Bsp_Gpt_Init();
        Bsp_Wdg_Init();
        Bsp_Can_Init();

        Bsp_Pwm_Init();
        Bsp_Dma_Init();
        Bsp_Adc_Init();
        Bsp_Lin_Init();
        Bsp_Spi_Init();
        Bsp_Icu_Init();
#ifdef USE_FEE_TEST
        Bsp_Fls_Init();
        Bsp_Fee_Init();
#endif
        Bsp_I2c_Init();
        Bsp_Ocu_Init();
        Bsp_Sdadc_Init();

        /* Release core1 and core2 */
        core0_release_other_cores();

        Bsp_Mb_Init();
        Bsp_Crypto_Init();
#ifdef USE_ETH_TEST
        Bsp_Eth_Init(); /* Init for Eth_GetCurrentTime */
#endif
        Bsp_Sent_Init();
        Bsp_Ssi_Init();
        Bsp_Crc_Init();

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
        Bsp_Mcu_ResetReason_Print();
#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/
    }

    Systick_Init(&Systick_Config);
    Systick_Enable();

    while (bReturnFlag)
    {
        Systick_RunTask();
    }
    return 0;
}
#define BSP_STOP_SEC_TCMCODE_CORE0
#include "Bsp_MemMap.h"

#define BSP_START_SEC_TCMCODE_CORE1
#include "Bsp_MemMap.h"
/**************** main function ***************/
BSP_TEXT_SECTION int main_core1(void)
{
    boolean bReturnFlag = TRUE;
    DEBUG_INFO("Core1 start.");
    if (1U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
        Bsp_Lin_Init();
        Bsp_Pwm_Init();
        Bsp_Adc_Init();
        Bsp_Mb_Init();
        Bsp_Can_Init();
        Bsp_Icu_Init();
        Bsp_Gpt_Init();
        Bsp_Wdg_Init();
        Bsp_Dma_Init();
        Bsp_Spi_Init();
        Bsp_Msc_Init();
        Bsp_Ocu_Init();
        Bsp_I2c_Init();
#ifdef USE_ETH_TEST
        Bsp_Eth_Init(); /* Init for Eth_GetCurrentTime */
#endif
        Bsp_Crc_Init();
        Bsp_Crypto_Init();
        Bsp_Sdadc_Init();
    }

    Systick_Init(&Systick_Config);
    Systick_Enable();

    while (bReturnFlag)
    {
        Systick_RunTask();
    }
    return 0;
}
#define BSP_STOP_SEC_TCMCODE_CORE1
#include "Bsp_MemMap.h"

#define BSP_START_SEC_TCMCODE_CORE2
#include "Bsp_MemMap.h"
/**************** main function ***************/
BSP_TEXT_SECTION int main_core2(void)
{
    boolean bReturnFlag = TRUE;
    DEBUG_INFO("Core2 start.");
    if (2U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
        Bsp_Dma_Init();
        Bsp_Lin_Init();
        Bsp_Pwm_Init();
        Bsp_Mb_Init();
        Bsp_Can_Init();
        Bsp_Gpt_Init();
        Bsp_Wdg_Init();
#ifdef USE_ETH_TEST
        Bsp_Eth_Init(); /* Init for Eth_GetCurrentTime */
#endif
        Bsp_Crc_Init();
        Bsp_Sdadc_Init();
    }

    Systick_Init(&Systick_Config);
    Systick_Enable();

    while (bReturnFlag)
    {
        Systick_RunTask();
    }
    return 0;
}
#define BSP_STOP_SEC_TCMCODE_CORE2
#include "Bsp_MemMap.h"

#define BSP_START_SEC_TCMCODE_CORE3
#include "Bsp_MemMap.h"
/**************** main function ***************/
BSP_TEXT_SECTION int main_core3(void)
{
    boolean bReturnFlag = TRUE;
    DEBUG_INFO("Core3 start.");
    if (3U == GET_CPU_ID())
    {
        Bsp_Mpu_Init();
        Bsp_Mcu_Init();
        Bsp_Gpt_Init();
        Bsp_Wdg_Init();
#ifdef USE_ETH_TEST
        Bsp_EthIf_Init();
        Bsp_Eth_Init();
        Bsp_EthTrcv_Init();
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
#define BSP_STOP_SEC_TCMCODE_CORE3
#include "Bsp_MemMap.h"

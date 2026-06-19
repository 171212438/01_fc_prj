#include "Bsp_Mcu.h"

/************ Global functions *******************/
void Bsp_Mcu_Init(void)
{
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuConf_McuClockSettingConfig_MCU_Demo_FOSC24M);

    if (0 == GET_CPU_ID())
    {
        while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
        {
        }
        Mcu_DistributePllClock();
    }
    else if (1 == GET_CPU_ID())
    {
        /* INTM1 */
        *((volatile uint32 *)(PCC_BASE + 0x2D4)) &= (uint32)(~PCC_CGC_MASK);
        /*   Set PCC register     */
        *((volatile uint32 *)(PCC_BASE + 0x2D4))  = 0x20800000UL;
    }
}

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
void Bsp_Mcu_ResetReason_Print(void)
{
    //Core0 reset reason
    DEBUG_INFO("Core0 Reset reason value: %x\r\n", *(volatile uint32*)RGM_C0_SRS_ADDR);
    //Core1 reset reason
    DEBUG_INFO("Core1 Reset reason value: %x\r\n", *(volatile uint32*)RGM_C1_SRS_ADDR);
}


static void Bsp_Mcu_Core0_LowPowerEntry(void)
{
    uint8 u8Index;
    boolean bCore1SleepStatus;
    uint32 u32Timeout = 0U;

    /**
      *   @brief Prepare to entry STANDBY mode
      *          Step 0. Polling other core sleeping status(timeout determined by application)
      *          Step 1. Close all interrupt(including WKU source)
      *          Step 2. De-Init all GPIO to High-Z(except WKU source)
      *          Step 3. Set STANDBY mode
      *   @note This example demos how to entry/exit STANDBY mode,
      *         FC7300-EVB Key3(PTA11) is used for wake up source
      */

    /* Step 0:  Polling other core sleeping status */
    do
    {
        bCore1SleepStatus = (boolean)( ((*(volatile uint32*)SCM_CCM1_STATUS)&SCM_CCM_DEEPSLEEP_MASK)>>SCM_CCM_DEEPSLEEP_SHIFT );
        u32Timeout++;
    } while( (bCore1SleepStatus == FALSE) && (u32Timeout < POLLING_TIMEOUT) );


    if(POLLING_TIMEOUT == u32Timeout)
    {
        /* Timeout now reset shall be called */
    }
    else
    {
        /* Step 1: Close all interrupt(except WKU source) */
        for(u8Index=0U; u8Index<(uint8)IRQn_MAX; u8Index++)
        {
            IntMgr_DisableInterrupt((IRQn_Type)u8Index);
        }

        Systick_Disable();

        DEBUG_INFO(" Core0 Entry Standby Mode!\r\n");

        /* Step 2: De-Init all GPIO to High-Z(except WKU source  Key3(PTA11) ) */
        for(u8Index=0U; u8Index<32; u8Index++)
        {
            if( (JTAG_TDO != u8Index) && (JTAG_TMS_SWD_DIO != u8Index) && (PTA11 != u8Index))
            {
                /* PORTA-PCRx*/
                *(volatile uint32*)(PORTA_BASE_ADDR + u8Index*4) = (uint32)0U;
            }

            if( (XTAL != u8Index) && (EXTAL != u8Index) )
            {
                /* PORTB-PCRx*/
                *(volatile uint32*)(PORTB_BASE_ADDR + u8Index*4) = (uint32)0U;
            }

            if( (JTAG_TDI != u8Index) && (JTAG_TCLK_SWD_CLK != u8Index) )
            {
                /* PORTC-PCRx*/
                *(volatile uint32*)(PORTC_BASE_ADDR + u8Index*4) = (uint32)0U;
            }

            /* PORTD-PCRx*/
            *(volatile uint32*)(PORTD_BASE_ADDR + u8Index*4) = (uint32)0U;

            if( (OSC32K_XTAL != u8Index) && (OSC32K_EXTAL != u8Index) )
            {
                /* PORTE-PCRx*/
                *(volatile uint32*)(PORTE_BASE_ADDR + u8Index*4) = (uint32)0U;
            }

            /* PORTF-PCRx*/
            *(volatile uint32*)(PORTF_BASE_ADDR + u8Index*4) = (uint32)0U;
            /* PORTG-PCRx*/
            *(volatile uint32*)(PORTG_BASE_ADDR + u8Index*4) = (uint32)0U;
            /* PORTH-PCRx*/
            *(volatile uint32*)(PORTH_BASE_ADDR + u8Index*4) = (uint32)0U;
            /* PORTI-PCRx*/
            *(volatile uint32*)(PORTI_BASE_ADDR + u8Index*4) = (uint32)0U;
        }

        /* Step 4: Set STANDBY mode */
        Mcu_SetMode(McuModeSettingConf_4);
    }

    Mcu_PerformReset();
}

static void Bsp_Mcu_Core1_LowPowerEntry(void)
{
    uint8 u8Index;

    /* Close all interrupt(except WKU source) */
    for(u8Index=0U; u8Index<(uint8)IRQn_MAX; u8Index++)
    {
        IntMgr_DisableInterrupt((IRQn_Type)u8Index);
    }

    Systick_Disable();

    Mcu_SetMode(McuModeSettingConf_4);

    /* Can not arrive here normally.  */
    Mcu_PerformReset();
}

void Bsp_Mcu_LowPowerEntry_Task(Bsp_EntryLowPowerCmdType* pCmd)
{
    uint8 u8CoreId = GET_CPU_ID();

    if( (0U == u8CoreId) && (*pCmd == BSP_TX_STANDBY_CMD) )
    {
        *pCmd = BSP_CORE1_ENTRY;
    }
    else if( (1U == u8CoreId) && (*pCmd == BSP_CORE1_ENTRY) )
    {
        *pCmd = BSP_CORE0_ENTRY;
        Bsp_Mcu_Core1_LowPowerEntry();
    }
    else if( (0U == u8CoreId) && (*pCmd == BSP_CORE0_ENTRY) )
    {
        *pCmd = BSP_DEFAULT_CMD;
        Bsp_Mcu_Core0_LowPowerEntry();
    }
    else
    {
        __asm("nop");
    }
}

#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

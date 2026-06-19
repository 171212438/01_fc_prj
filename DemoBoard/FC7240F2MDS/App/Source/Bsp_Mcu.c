#include "Bsp_Mcu.h"


/************ Global functions *******************/
void Bsp_Mcu_Init(void)
{
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuConf_McuClockSettingConfig_MCU_Demo_FOSC24M);

    while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
    {
    }
    Mcu_DistributePllClock();

}

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
void Bsp_Mcu_LowPowerEntry(void)
{
    uint8 u8Index;

    /**
      *   @brief Prepare to entry STANDBY mode
      *          Step 1. Close all interrupt
      *          Step 2. De-Init all GPIO to High-Z(except WKU source Key1(PTA9))
      *          Step 3. Set STANDBY mode
      *   @note This example demos how to entry/exit STANDBY mode,
      *         FC7240-EVB Key1(PTA9) is used for wake up source
      */

    /* Step 1: Close all interrupt(except WKU source) */
    for(u8Index=0U; u8Index<(uint8)IRQn_MAX; u8Index++)
    {
        IntMgr_DisableInterrupt((IRQn_Type)u8Index);
    }

    Systick_Disable();

    DEBUG_INFO("Entry Standby0 Mode!\r\n");

    /* Step 2: De-Init all GPIO to High-Z(except WKU source) */
    for(u8Index=0U; u8Index<32; u8Index++)
    {
        if( (JTAG_TDO != u8Index) && (JTAG_TMS_SWD_DIO != u8Index) && (PTA9 != u8Index) )
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
    }

    /* Step 3: Set STANDBY mode */
    Mcu_SetMode(McuModeSettingConf_3);

    Mcu_PerformReset();
}

void Bsp_Mcu_ResetReason_Print(void)
{
    Mcu_RawResetType eResetVal;

    /* Get reset reason */
    eResetVal = Mcu_GetResetRawValue();

    DEBUG_INFO("Reset Value is:%d\r\n",(uint32)eResetVal);
}

#endif  /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

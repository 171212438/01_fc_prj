#include "Bsp_Mcu.h"

static Bsp_Mcu_ResetDiagType Bsp_Mcu_tResetDiag;

/************ Global functions *******************/
void Bsp_Mcu_ResetReason_Capture(void)
{
    Bsp_Mcu_ResetDiagType tDiag;
    uint32 u32Index;

    tDiag.valid = FALSE;
    tDiag.core_id = GET_CPU_ID();
    tDiag.reset_reason = MCU_RESET_UNDEFINED;
    tDiag.reset_raw_value = (Mcu_RawResetType)0U;
    tDiag.startup_snapshot_valid = FALSE;
    tDiag.startup_snapshot.magic = 0U;
    tDiag.startup_snapshot.version = 0U;
    tDiag.startup_snapshot.length = 0U;
    tDiag.startup_snapshot.reset_srs = 0U;
    tDiag.startup_snapshot.reset_ssrs = 0U;
    tDiag.startup_snapshot.sticky_cleared = 0U;
    tDiag.boot_failure_snapshot_valid = FALSE;
    tDiag.boot_failure_snapshot.magic = 0U;
    tDiag.boot_failure_snapshot.version = 0U;
    tDiag.boot_failure_snapshot.length = 0U;
    tDiag.boot_failure_snapshot.reason = BSP_CRASH_RECORD_BOOT_FAILURE_NONE;
    tDiag.boot_failure_snapshot.reset_srs = 0U;
    tDiag.boot_failure_snapshot.stcu_status = 0U;
    tDiag.boot_failure_snapshot.stcu_done_status = 0U;
    tDiag.boot_failure_snapshot.stcu_sel = 0U;
    tDiag.boot_failure_snapshot.stcu_ctrl = 0U;
    tDiag.boot_failure_snapshot.selected_mask = 0U;
    tDiag.boot_failure_snapshot.expected_done_mask = 0U;
    tDiag.boot_failure_snapshot.reset_requested = 0U;

    for (u32Index = 0U; u32Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u32Index++)
    {
        tDiag.startup_snapshot.core_srs[u32Index] = 0U;
        tDiag.startup_snapshot.core_ssrs[u32Index] = 0U;
    }

    if (E_OK == Bsp_CrashRecord_GetResetSnapshot(&tDiag.startup_snapshot))
    {
        tDiag.startup_snapshot_valid = TRUE;
    }

    if (E_OK == Bsp_CrashRecord_GetBootFailureSnapshot(&tDiag.boot_failure_snapshot))
    {
        tDiag.boot_failure_snapshot_valid = TRUE;
    }

    tDiag.reset_reason = Mcu_GetResetReason();
    tDiag.reset_raw_value = Mcu_GetResetRawValue();
    tDiag.valid = TRUE;

    Bsp_Mcu_tResetDiag = tDiag;
}

Std_ReturnType Bsp_Mcu_GetResetReasonDiag(Bsp_Mcu_ResetDiagType* pDiag)
{
    Std_ReturnType eStatus = E_NOT_OK;

    if (NULL_PTR != pDiag)
    {
        *pDiag = Bsp_Mcu_tResetDiag;
        if (TRUE == Bsp_Mcu_tResetDiag.valid)
        {
            eStatus = E_OK;
        }
    }

    return eStatus;
}

void Bsp_Mcu_ResetReason_Print(void)
{
    Bsp_Mcu_ResetDiagType tDiag;
    uint32 u32Index;

    if (E_OK == Bsp_Mcu_GetResetReasonDiag(&tDiag))
    {
        DEBUG_INFO("MCU reset diag: core=%d reason=%d raw=0x%x\r\n",
                   tDiag.core_id,
                   (uint32)tDiag.reset_reason,
                   (uint32)tDiag.reset_raw_value);

        if (TRUE == tDiag.startup_snapshot_valid)
        {
            DEBUG_INFO("Startup reset snapshot: SRS=0x%x SSRS=0x%x sticky_cleared=%d\r\n",
                       tDiag.startup_snapshot.reset_srs,
                       tDiag.startup_snapshot.reset_ssrs,
                       tDiag.startup_snapshot.sticky_cleared);

            for (u32Index = 0U; u32Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u32Index++)
            {
                DEBUG_INFO("Startup reset core%d: SRS=0x%x SSRS=0x%x\r\n",
                           u32Index,
                           tDiag.startup_snapshot.core_srs[u32Index],
                           tDiag.startup_snapshot.core_ssrs[u32Index]);
            }
        }
        else
        {
            DEBUG_INFO("Startup reset snapshot unavailable\r\n");
        }

        if (TRUE == tDiag.boot_failure_snapshot_valid)
        {
            DEBUG_INFO("Startup boot failure: reason=%d reset_srs=0x%x stcu_status=0x%x stcu_done=0x%x\r\n",
                       tDiag.boot_failure_snapshot.reason,
                       tDiag.boot_failure_snapshot.reset_srs,
                       tDiag.boot_failure_snapshot.stcu_status,
                       tDiag.boot_failure_snapshot.stcu_done_status);
            DEBUG_INFO("Startup boot failure STCU: sel=0x%x ctrl=0x%x selected=0x%x expected=0x%x reset_requested=%d\r\n",
                       tDiag.boot_failure_snapshot.stcu_sel,
                       tDiag.boot_failure_snapshot.stcu_ctrl,
                       tDiag.boot_failure_snapshot.selected_mask,
                       tDiag.boot_failure_snapshot.expected_done_mask,
                       tDiag.boot_failure_snapshot.reset_requested);
        }
    }
    else
    {
        DEBUG_INFO("MCU reset diag unavailable\r\n");
    }
}

void Bsp_Mcu_Init(void)
{
    Mcu_Init(&Mcu_Config);
    if (0U == GET_CPU_ID())
    {
        Bsp_Mcu_ResetReason_Capture();
    }

    Mcu_InitClock(McuConf_McuClockSettingConfig_MCU_Demo_FOSC24M);

    if (0U == GET_CPU_ID())
    {
        while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
        {
        }
        Mcu_DistributePllClock();
    }
}

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
static void Bsp_Mcu_Core0_LowPowerEntry(void)
{
    uint8 u8Index;
    boolean bCore1SleepStatus;
    boolean bCore2SleepStatus;
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
        bCore2SleepStatus = (boolean)( ((*(volatile uint32*)SCM_CCM2_STATUS)&SCM_CCM_DEEPSLEEP_MASK)>>SCM_CCM_DEEPSLEEP_SHIFT );
        u32Timeout++;
    } while( ((bCore1SleepStatus == FALSE) || (bCore2SleepStatus == FALSE)) && (u32Timeout < POLLING_TIMEOUT) );


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

static void Bsp_Mcu_Core2_LowPowerEntry(void)
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
        *pCmd = BSP_CORE2_ENTRY;
        Bsp_Mcu_Core1_LowPowerEntry();
    }
    else if( (2U == u8CoreId) && (*pCmd == BSP_CORE2_ENTRY) )
    {
        *pCmd = BSP_CORE0_ENTRY;
        Bsp_Mcu_Core2_LowPowerEntry();
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

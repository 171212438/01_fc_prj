#include "Bsp_Fls.h"

#ifdef FLASH_SELFTEST

#define TEST_BUFF_LEN 160
#define ECC_INJECT_TEST
#ifdef ECC_INJECT_TEST

#define FLASHDRV_ADDR 0x04810200U

typedef struct
{
    uint32 data1;
    uint32 data2;
    uint32 data3;
    uint32 data4;
    uint32 data5;
    uint32 size;
    uint32 dest;
} FLASH_API_ECC_CHECK_CFG_TYPE;

/**
 * @brief Structure representing the ROM API entry points for flash operations.
 */
typedef struct
{
    uint32 RESERVED1[21U];
    uint32 (*ecc_injection)(FLASH_API_ECC_CHECK_CFG_TYPE *flash_api_cfg, uint32 size);
    uint32 (*ecc_injection_close)(void);
    uint32 RESERVED2[5U];
    uint32 (*ecc_injection_open)(void);
} flash_rom_api_entry_t;

static flash_rom_api_entry_t *s_pFlashDriver_RomApiHeader = (flash_rom_api_entry_t *)FLASHDRV_ADDR;

static void Open_Inject_Ecc_Error(void)
{
    FLASH_API_ECC_CHECK_CFG_TYPE flash_api_cfg;
    flash_api_cfg.data1 = 0x994CD030;
    flash_api_cfg.data2 = 0x781279F1;
    flash_api_cfg.data3 = 0x8D36371A;
    flash_api_cfg.data4 = 0x09FAE313;
    flash_api_cfg.data5 = 0x030031d1;
    flash_api_cfg.size  = 0x0;
    flash_api_cfg.dest  = 0x4000000;

    /* Close FMC buffer */
    *(volatile uint32 *)0x4001E000 = 0;
    *(volatile uint32 *)0x4001E004 = 0;
    *(volatile uint32 *)0x4001E008 = 0;
    s_pFlashDriver_RomApiHeader->ecc_injection_open();
    s_pFlashDriver_RomApiHeader->ecc_injection(&flash_api_cfg, 0x0);
}

static void Close_Inject_Ecc_Error(void)
{
    s_pFlashDriver_RomApiHeader->ecc_injection_close();
    /* Enable FMC buffer */
    *(volatile uint32 *)0x4001E000 = 0x03U;
    *(volatile uint32 *)0x4001E004 = 0x03U;
    *(volatile uint32 *)0x4001E008 = 0x03U;
}
#endif

uint8 fls_test_buff_w[TEST_BUFF_LEN];
uint8 fls_test_buff_r[TEST_BUFF_LEN];

static void Buff_Init(uint8 *ptr, uint32 len)
{
    for (uint32 u32Index = 0U; u32Index < len; u32Index++)
    {
        ptr[u32Index] = (uint8)(u32Index + 1U);
    }
}

static void Bsp_Fls_Delay(void)
{
    uint32 j = 0;
    for (uint32 i = 0; i < 100; i++)
    {
        for (j = 0; j < 200; j++)
        {
        }
    }
}
#endif
/************ Global functions *******************/
void Bsp_Fls_Init(void)
{
    if (0 == GET_CPU_ID())
    {
        Fls_Init(NULL_PTR);
#ifdef FLASH_SELFTEST
        Buff_Init(fls_test_buff_w, TEST_BUFF_LEN);
        Fls_Read(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#if (FLS_COMPARE_API == STD_ON)
        Fls_Compare(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
#if (FLS_BLANK_CHECK_API == STD_ON)
        Fls_BlankCheck(0, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
        Fls_Erase(0, 0x4000);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#if (FLS_COMPARE_API == STD_ON)
        Fls_Compare(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
#if (FLS_BLANK_CHECK_API == STD_ON)
        Fls_BlankCheck(0, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
        Fls_Write(0, fls_test_buff_w, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#ifdef ECC_INJECT_TEST
        Open_Inject_Ecc_Error();
        Fls_Read(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#if (FLS_COMPARE_API == STD_ON)
        Fls_Compare(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
#if (FLS_BLANK_CHECK_API == STD_ON)
        Fls_BlankCheck(0, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
        Close_Inject_Ecc_Error();
#endif
        Fls_Read(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#if (FLS_COMPARE_API == STD_ON)
        Fls_Compare(0, fls_test_buff_r, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
#if (FLS_BLANK_CHECK_API == STD_ON)
        Fls_BlankCheck(0, TEST_BUFF_LEN);
        while (Fls_GetStatus() != MEMIF_IDLE)
        {
            Bsp_Fls_Delay();
            Fls_MainFunction();
        }
#endif
#endif
    }
}

void Bsp_Fls_5ms_Task_Event(void)
{
    if (0 == GET_CPU_ID())
    {
        Fls_MainFunction();
    }
}

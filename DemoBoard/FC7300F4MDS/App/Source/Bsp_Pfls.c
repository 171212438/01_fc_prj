#include "Bsp_Pfls.h"

#ifdef FLASH_SELFTEST
#define TEST_BUFF_LEN 160

uint8 Pfls_test_buff_w[TEST_BUFF_LEN];
uint8 Pfls_test_buff_r[TEST_BUFF_LEN];

static void Buff_Init(uint8 *ptr, uint32 len)
{
    for (uint32 u32Index = 0U; u32Index < len; u32Index++)
    {
        ptr[u32Index] = (uint8)(u32Index + 1U);
    }
}

#endif
/************ Global functions *******************/
void Bsp_Pfls_Init(void)
{
#ifdef FLASH_SELFTEST
    uint32 u32Cnt;
    uint32 u32Addr;
    uint32 u32Len;
#endif

    Pfls_Init(NULL_PTR);
#ifdef FLASH_SELFTEST
    u32Addr = 0x80000;
    u32Len  = 0x380000;
    Buff_Init(Pfls_test_buff_w, TEST_BUFF_LEN);
    Pfls_Erase(u32Addr, u32Len);
    while (Pfls_GetStatus() != MEMIF_IDLE)
    {
        Pfls_MainFunction();
    }
    u32Cnt  = u32Len / 128;
    u32Addr = 0x80000;
    while (u32Cnt--)
    {
        if (u32Addr == 0x1c2000)
        {
            Pfls_MainFunction();
        }
        Pfls_Write(u32Addr, Pfls_test_buff_w, 128);
        while (Pfls_GetStatus() != MEMIF_IDLE)
        {
            Pfls_MainFunction();
        }
        u32Addr = u32Addr + 128;
    }
    u32Cnt  = u32Len / 128;
    u32Addr = 0x80000;
    while (u32Cnt--)
    {
        Pfls_Read(u32Addr, Pfls_test_buff_r, 128);
        while (Pfls_GetStatus() != MEMIF_IDLE)
        {
            Pfls_MainFunction();
        }
        if (memcmp(Pfls_test_buff_r, Pfls_test_buff_w, 128))
        {
            while (1)
                ;
        }
        u32Addr = u32Addr + 128;
    }
#endif
}

void Bsp_Pfls_5ms_Task_Event(void)
{
    Pfls_MainFunction();
}

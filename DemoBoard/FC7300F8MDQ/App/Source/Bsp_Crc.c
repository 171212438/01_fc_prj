#include "Bsp_Crc.h"

#define DATASIZE (4U)

uint64 Crc_ChannelCaculateRun(uint8        u8Channel,
                              const uint8 *pIndata,
                              uint32       u32Length,
                              uint64       u64InitialValue,
                              uint64       u64ExceptedValue,
                              boolean      IsFirstCall)
{
    uint64              CRC_SetChannel;
    Crc_CalculationType eType;

    DEBUG_INFO("Crc_CalculateChannel\r\n");
    for (uint32 idx = 0; idx < u32Length; idx++)
    {
        DEBUG_INFO("%x ", pIndata[idx]);
    }
    DEBUG_INFO("\r\n");

    eType = (*Crc_Config.pCrcChannelsConfig)[u8Channel].eCalType;
    CRC_SetChannel =
        Crc_CalculateChannel(u8Channel, &Crc_Config, pIndata, u32Length, u64InitialValue, IsFirstCall);
    if (CRC_SetChannel != u64ExceptedValue)
    {
        DEBUG_INFO("Crc_CalculateChannel %d type %d ERROR 0x%llx exp 0x%llx !!!.\r\n",
                   u8Channel,
                   eType,
                   CRC_SetChannel,
                   u64ExceptedValue);
    }
    else
    {
        DEBUG_INFO("Crc_CalculateChannel %d type %d caculate passed 0x%llx.\r\n",
                   u8Channel,
                   eType,
                   CRC_SetChannel);
    }
    return CRC_SetChannel;
}

/************ Global functions *******************/
void Bsp_Crc_Init(void)
{
    uint64              temp;
    uint8               CRC8_RESULT;
    uint16              CRC16_RESULT;
    uint32              CRC32_RESULT;
    uint64              CRC64_RESULT;
    static const uint8  s_aU8InputData[4]  = { 0x12, 0x34, 0x56, 0x78 };
    static const uint16 s_aU16InputData[4] = { 0x1234U, 0x5678U, 0x9abcU, 0xdef0U };

    static const uint32 s_aU32InputData[4] = { 0x12345678U, 0x87654321U, 0x12345678U, 0x87654321U };

    static const uint64 s_aU64InputData[4] = { 0x123456789abcdef0U,
                                               0x123456789abcdef0U,
                                               0x123456789abcdef0U,
                                               0x123456789abcdef0U };

    if (0 == GET_CPU_ID())
    {
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_0,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0x2f,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_0,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xd,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_2,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0x2f,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_2,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xd,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_3,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0x2f,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_3,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xd,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_4,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0xe3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_4,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xc9,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_5,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0xe3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_5,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xc9,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_6,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      0xFF,
                                      0xe3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_6,
                                      s_aU8InputData,
                                      sizeof(s_aU8InputData),
                                      temp,
                                      0xc9,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_7,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x8717,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_7,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xa28f,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_8,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x8717,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_8,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xa28f,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_9,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x8717,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_9,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xa28f,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_10,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x75b3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_10,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xd3dc,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_11,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x75b3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_11,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xd3dc,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_12,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      0xFFFF,
                                      0x75b3,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_12,
                                      (uint8 *)s_aU16InputData,
                                      sizeof(s_aU16InputData),
                                      temp,
                                      0xd3dc,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_13,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0xc8376064,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_13,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0xee866d22,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_14,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0xc8376064,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_14,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0xee866d22,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_15,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0xc8376064,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_15,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0xee866d22,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_16,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0x2875417a,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_16,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0x607eacd1,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_17,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0x2875417a,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_17,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0x607eacd1,
                                      FALSE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_18,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      0xFFFFFFFF,
                                      0x2875417a,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_18,
                                      (uint8 *)s_aU32InputData,
                                      sizeof(s_aU32InputData),
                                      temp,
                                      0x607eacd1,
                                      FALSE);

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_20,
                                      (uint8 *)s_aU64InputData,
                                      sizeof(s_aU64InputData),
                                      0xFFFFFFFFFFFFFFFF,
                                      0xd1d2e15ee8e07580,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_20,
                                      (uint8 *)s_aU64InputData,
                                      sizeof(s_aU64InputData),
                                      temp,
                                      0x4a55118924bdbbbb,
                                      FALSE);

        CRC8_RESULT = (uint8)
            Crc_CalculateCRC8((const uint8 *)s_aU8InputData, sizeof(s_aU8InputData), 0xFF, TRUE);
        if (CRC8_RESULT != 0x2f)
        {
            DEBUG_INFO("Crc_CalculateCRC8 error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8 passed: 0x%X\r\n", CRC8_RESULT);
        }
        CRC8_RESULT = (uint8)Crc_CalculateCRC8((const uint8 *)s_aU8InputData,
                                               sizeof(s_aU8InputData),
                                               CRC8_RESULT,
                                               FALSE);
        if (CRC8_RESULT != 0xD)
        {
            DEBUG_INFO("Crc_CalculateCRC8 continue error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8 continue passed: 0x%X\r\n", CRC8_RESULT);
        }

        CRC8_RESULT = (uint8)
            Crc_CalculateCRC8H2F((const uint8 *)s_aU8InputData, sizeof(s_aU8InputData), 0xFF, TRUE);
        if (CRC8_RESULT != 0xE3)
        {
            DEBUG_INFO("Crc_CalculateCRC8H2F error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8H2F passed: 0x%X\r\n", CRC8_RESULT);
        }
        CRC8_RESULT = (uint8)Crc_CalculateCRC8H2F((const uint8 *)s_aU8InputData,
                                                  sizeof(s_aU8InputData),
                                                  CRC8_RESULT,
                                                  FALSE);
        if (CRC8_RESULT != 0xC9)
        {
            DEBUG_INFO("Crc_CalculateCRC8H2F continue error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8H2F continue passed: 0x%X\r\n", CRC8_RESULT);
        }

        CRC16_RESULT = Crc_CalculateCRC16ARC((const uint8 *)s_aU16InputData,
                                             sizeof(s_aU16InputData),
                                             0xFFFF,
                                             TRUE);

        CRC8_RESULT = (uint8)
            Crc_CalculateCRC8((const uint8 *)s_aU8InputData, sizeof(s_aU8InputData), 0xFF, TRUE);
        if (CRC8_RESULT != 0x2f)
        {
            DEBUG_INFO("Crc_CalculateCRC8 error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8 passed: 0x%X\r\n", CRC8_RESULT);
        }
        CRC8_RESULT = (uint8)Crc_CalculateCRC8((const uint8 *)s_aU8InputData,
                                               sizeof(s_aU8InputData),
                                               CRC8_RESULT,
                                               FALSE);
        if (CRC8_RESULT != 0xD)
        {
            DEBUG_INFO("Crc_CalculateCRC8 continue error 0x%X\r\n", CRC8_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC8 continue passed: 0x%X\r\n", CRC8_RESULT);
        }

        if (CRC16_RESULT != 0x75b3)
        {
            DEBUG_INFO("Crc_CalculateCRC16ARC error 0x%X\r\n", CRC16_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC16ARC passed: 0x%X\r\n", CRC16_RESULT);
        }
        CRC16_RESULT = Crc_CalculateCRC16ARC((const uint8 *)s_aU16InputData,
                                             sizeof(s_aU16InputData),
                                             CRC16_RESULT,
                                             FALSE);
        if (CRC16_RESULT != 0xD3DC)
        {
            DEBUG_INFO("Crc_CalculateCRC16ARC continue error 0x%X\r\n", CRC16_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC16ARC continue passed: 0x%X\r\n", CRC16_RESULT);
        }

        CRC16_RESULT =
            Crc_CalculateCRC16((const uint8 *)s_aU16InputData, sizeof(s_aU16InputData), 0xFFFF, TRUE);
        if (CRC16_RESULT != 0x8717)
        {
            DEBUG_INFO("Crc_CalculateCRC16 error 0x%X\r\n", CRC16_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC16 passed: 0x%X\r\n", CRC16_RESULT);
        }
        CRC16_RESULT = Crc_CalculateCRC16((const uint8 *)s_aU16InputData,
                                          sizeof(s_aU16InputData),
                                          CRC16_RESULT,
                                          FALSE);
        if (CRC16_RESULT != 0xA28F)
        {
            DEBUG_INFO("Crc_CalculateCRC16 continue error 0x%X\r\n", CRC16_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC16 continue passed: 0x%X\r\n", CRC16_RESULT);
        }

        CRC32_RESULT = Crc_CalculateCRC32((const uint8 *)s_aU32InputData,
                                          sizeof(s_aU32InputData),
                                          0xFFFFFFFF,
                                          TRUE);
        if (CRC32_RESULT != 0xc8376064)
        {
            DEBUG_INFO("Crc_CalculateCRC32 error 0x%X\r\n", CRC32_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC32 passed: 0x%X\r\n", CRC32_RESULT);
        }
        CRC32_RESULT = Crc_CalculateCRC32((const uint8 *)s_aU32InputData,
                                          sizeof(s_aU32InputData),
                                          CRC32_RESULT,
                                          FALSE);
        if (CRC32_RESULT != 0xEE866D22)
        {
            DEBUG_INFO("Crc_CalculateCRC32 continue error 0x%X\r\n", CRC32_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC32 continue passed: 0x%X\r\n", CRC32_RESULT);
        }

        CRC32_RESULT = Crc_CalculateCRC32P4((const uint8 *)s_aU32InputData,
                                            sizeof(s_aU32InputData),
                                            0xFFFFFFFF,
                                            TRUE);
        if (CRC32_RESULT != 0x2875417a)
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 error 0x%X\r\n", CRC32_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 passed: 0x%X\r\n", CRC32_RESULT);
        }
        CRC32_RESULT = Crc_CalculateCRC32P4((const uint8 *)s_aU32InputData,
                                            sizeof(s_aU32InputData),
                                            CRC32_RESULT,
                                            FALSE);
        if (CRC32_RESULT != 0x607EACD1)
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 continue error 0x%X\r\n", CRC32_RESULT);
        }
        else
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 continue passed: 0x%X\r\n", CRC32_RESULT);
        }
    }
    else if (1 == GET_CPU_ID())
    {

        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_1,
                               (uint8 *)s_aU32InputData,
                               sizeof(s_aU32InputData),
                               0xFFFFFFFF,
                               0x2875417a,
                               TRUE);
    }
    else if (2 == GET_CPU_ID())
    {

        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_19,
                                      (uint8 *)s_aU64InputData,
                                      sizeof(s_aU64InputData),
                                      0xFFFFFFFFFFFFFFFF,
                                      0xd1d2e15ee8e07580,
                                      TRUE);
        temp = Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_19,
                                      (uint8 *)s_aU64InputData,
                                      sizeof(s_aU64InputData),
                                      temp,
                                      0x4a55118924bdbbbb,
                                      FALSE);
    }
}

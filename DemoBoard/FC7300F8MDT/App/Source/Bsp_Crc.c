#include "Bsp_Crc.h"

#define  DATASIZE   (5U)
/************ Global functions *******************/
void Bsp_Crc_Init(void)
{
    if (0 == GET_CPU_ID())
    {
        static const uint8 s_aU8InputData[DATASIZE] =
        {
            0xBB, 0xCC, 0xDD, 0xEE, 0xFF
        };
        uint8 CRC8_SetChannel = Crc_CalculateChannel(CrcConf_CrcChannelConfig_CrcChannelConfig_0, &Crc_Config, (const uint8 *)s_aU8InputData, DATASIZE, 0xF3, FALSE);
        if (CRC8_SetChannel != 0xCB)
        {
            DEBUG_INFO("Crc_CalculateChannel error\n");
        }

        uint8 CRC8_RESULT = Crc_CalculateCRC8((const uint8 *)s_aU8InputData, DATASIZE, 0xF3, FALSE);
        if (CRC8_RESULT != 0xCB)
        {
            DEBUG_INFO("Crc_CalculateCRC8 error\n");
        }

        uint32 CRC32_RESULT = Crc_CalculateCRC32((const uint8 *)s_aU8InputData, DATASIZE, 0x9dcf93a, FALSE);
        if (CRC32_RESULT != 0xB0AE863D)
        {
            DEBUG_INFO("Crc_CalculateCRC32 error\n");
        }
    }
    else if (1 == GET_CPU_ID())
    {
        static const uint8 s_aU8InputData[DATASIZE] =
        {
            0xBB, 0xCC, 0xDD, 0xEE, 0xFF
        };
        uint16 CRC16_RESULT = Crc_CalculateCRC16((const uint8 *)s_aU8InputData, DATASIZE, 0x3EB9, FALSE);
        if (CRC16_RESULT != 0xF53F)
        {
            DEBUG_INFO("Crc_CalculateCRC16 error\n");
        }

        uint32 CRC32P4_RESULT = Crc_CalculateCRC32P4((const uint8 *)s_aU8InputData, DATASIZE, 0xb76d90f4, FALSE);
        if (CRC32P4_RESULT != 0xA65A343D)
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 error\n");
        }

        uint32 CRC32_SetChannel = Crc_CalculateChannel(CrcConf_CrcChannelConfig_CrcChannelConfig_1, &Crc_Config, (const uint8 *)s_aU8InputData, DATASIZE, 0xb76d90f4, FALSE);
        if (CRC32_SetChannel != 0xA65A343D)
        {
            DEBUG_INFO("Crc_CalculateChannel error\n");
        }
    }
    else if (2 == GET_CPU_ID())
    {
        static const uint8 s_aU8InputData[DATASIZE] =
        {
            0xBB, 0xCC, 0xDD, 0xEE, 0xFF
        };
        uint8 CRC8_RESULT = Crc_CalculateCRC8((const uint8 *)s_aU8InputData, DATASIZE, 0xF3, FALSE);
        if (CRC8_RESULT != 0xCB)
        {
            DEBUG_INFO("Crc_CalculateCRC8 error\n");
        }
    }
}






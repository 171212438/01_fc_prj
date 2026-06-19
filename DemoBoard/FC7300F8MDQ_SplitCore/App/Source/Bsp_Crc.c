#include "Bsp_Crc.h"

#define  DATASIZE   (4U)

void Crc_ChannelCaculateRun(uint8 u8Channel, const uint8 *pIndata, uint32 u32Length, uint64 u64InitialValue, uint64 u64ExceptedValue)
{
	uint64 CRC_SetChannel;
	Crc_CalculationType eType;

	eType = (*Crc_Config.pCrcChannelsConfig)[u8Channel].eCalType;
	CRC_SetChannel = Crc_CalculateChannel(u8Channel, &Crc_Config, pIndata, u32Length, u64InitialValue, TRUE);
	if (CRC_SetChannel != u64ExceptedValue)
	{
		DEBUG_INFO("Crc_CalculateChannel %d type %d error.\r\n", u8Channel, eType);
	}
	else
	{
		DEBUG_INFO("Crc_CalculateChannel %d type %d caculate passed.\r\n", u8Channel, eType);
	}
}

/************ Global functions *******************/
void Bsp_Crc_Init(void)
{
	static const uint8 s_aU8InputData[4] =
	{
		0x00, 0x00, 0x00, 0x00
	};
	static const uint8 s_aU16InputData[4] =
	{
		0x00, 0x00, 0x00, 0x00
	};

	static const uint8 s_aU32InputData[4] =
	{
		0x00, 0x00, 0x00, 0x00
	};

	static const uint8 s_aU64InputData[4] =
	{
		0x00, 0x00, 0x00, 0x00
	};

    if (0 == GET_CPU_ID())
    {
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_0, s_aU8InputData, 4, 0xFF, 0x59);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_2, s_aU8InputData, 4, 0xFF, 0x59);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_3, s_aU8InputData, 4, 0xFF, 0x59);

        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_4, s_aU8InputData, 4, 0xFF, 0x12);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_5, s_aU8InputData, 4, 0xFF, 0x12);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_6, s_aU8InputData, 4, 0xFF, 0x12);

        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_7, s_aU16InputData, 4, 0xFFFF, 0x84C0);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_8, s_aU16InputData, 4, 0xFFFF, 0x84C0);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_9, s_aU16InputData, 4, 0xFFFF, 0x84C0);

        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_10, s_aU16InputData, 4, 0xFFFF, 0x0000);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_11, s_aU16InputData, 4, 0xFFFF, 0x0000);
        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_12, s_aU16InputData, 4, 0xFFFF, 0x0000);

		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_13, s_aU32InputData, 4, 0xFFFFFFFF, 0x2144DF1C);
		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_14, s_aU32InputData, 4, 0xFFFFFFFF, 0x2144DF1C);
		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_15, s_aU32InputData, 4, 0xFFFFFFFF, 0x2144DF1C);

		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_16, s_aU16InputData, 4, 0xFFFFFFFF, 0x6FB32240);
		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_17, s_aU16InputData, 4, 0xFFFFFFFF, 0x6FB32240);
		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_18, s_aU16InputData, 4, 0xFFFFFFFF, 0x6FB32240);


		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_19, s_aU64InputData, 4, 0xFFFFFFFFFFFFFFFF, 0xF4A586351E1B9F4B);
		Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_20, s_aU64InputData, 4, 0xFFFFFFFFFFFFFFFF, 0xF4A586351E1B9F4B);

    }
    else if (1 == GET_CPU_ID())
    {
        uint16 CRC16_RESULT = Crc_CalculateCRC16((const uint8 *)s_aU16InputData, 4, 0xFFFF, TRUE);
        if (CRC16_RESULT != 0x84C0)
        {
            DEBUG_INFO("Crc_CalculateCRC16 error\n");
        }

        uint32 CRC32P4_RESULT = Crc_CalculateCRC32P4((const uint8 *)s_aU32InputData, 4, 0xFFFFFFFF, TRUE);
        if (CRC32P4_RESULT != 0x6FB32240)
        {
            DEBUG_INFO("Crc_CalculateCRC32P4 error\n");
        }

        Crc_ChannelCaculateRun(CrcConf_CrcChannelConfig_CrcChannelConfig_1, s_aU32InputData, 4, 0xFFFFFFFF, 0x6FB32240);
    }
    else if (2 == GET_CPU_ID())
    {
        uint8 CRC8_RESULT = (uint8)Crc_CalculateCRC8((const uint8 *)s_aU8InputData, 4, 0xFF, TRUE);
        if (CRC8_RESULT != 0x59)
        {
            DEBUG_INFO("Crc_CalculateCRC8 error\n");
        }
    }
}






#include "Bsp_Spi.h"

/* 0x90:Read Manufacture ID/ Device ID command.(reference to GD25Q32 Data sheet for details) */
ALIGN(4) Spi_DataBufferType DataSend_CH0[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH1[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH2[2] = {0,0};
ALIGN(4) Spi_DataBufferType DataRecv_CH2[2] = {0};

void Bsp_Spi_Init(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
        Spi_Init(&Spi_Config_EcucPartition_0);

        /* Default Async mode in LEVEL 2 is polling, set it to Interrupt */
		Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

        IntMgr_EnableInterrupt(FCSPI3_IRQn);
    }
    else if (1 == Cpm_HWA_GetCoreId())
    {
    	Spi_Init(&Spi_Config_EcucPartition_1);
    }
}

extern ISR(SPI_FCSPI3_FifoIsr);
void FCSPI3_IRQHandler(void)
{
	SPI_FCSPI3_FifoIsr();
}

void Bsp_Spi_1s_Task_Event(void)
{

    if (0 == Cpm_HWA_GetCoreId())
    {
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_0, DataSend_CH0);

		Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_0);   /* User should check signal waveform by logic analyzer connected with SPI3 in demo board */
		while (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_3_HWUNIT))
		{
			/* Wait transmit complete */
		}
    }
    else
    {
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_1, DataSend_CH1);
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_2, DataSend_CH2);

		Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_1_Flash_SPI2);

		Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_2, DataRecv_CH2);   /* Device ID in DataRecv_CH2[2] should be {0xEF, 0x15} */
    }
}

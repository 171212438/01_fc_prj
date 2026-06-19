/**********************************************************************************************************************************************************************************
 *
 *     'Bsp_Spi.c' is use for two demo project: The first is 'Mcal_DemoBoard_Project_FC7300',the second is 'Mcal_DemoBoard_Project_FC7300_multicore'.
 *     But demo code in this two project is different, macro 'SPI_MULTICORE_ENABLED' is used to separate the code used in each project.
 *
 *     For single core project:'Mcal_DemoBoard_Project_FC7300',
     =============================================================================================================================================================
 *      SPI HWUnit     External Device connected                          Sync or ASync    FIFO or DMA    Corresponding Sequence     Job List      Channel List
 *      ------------   ----------------------------------------------     -------------    -----------    ----------------------     ---------     -------------
 *      SPI3(master)   Empty (need Logic Analyzer to check wave form)     Sync             FIFO           Sequence_0                 Job_0         Channel_0/1/2
 *      SPI2(master)   SPI Flash on Board (GD25Q32CSIGR)                  ASync            FIFO           Sequence_1                 Job_1         Channel_0/1
 *      SPI6(master)   Empty (need Logic Analyzer to check wave form)     ASync            DMA            Sequence_2                 Job_2/3       Channel_0/1/0
 *      SPI5(master)   SPI7(slave)                                        ASync            DMA            Sequence_3                 Job_4         Channel_3
 *      SPI7(slave)    SPI5(master)                                       ASync            DMA            Sequence_4                 Job_5         Channel_4
 *   =============================================================================================================================================================
 *
 *     For multi-core project:'Mcal_DemoBoard_Project_FC7300_multicore',
     =============================================================================================================================================================================
 *      SPI HWUnit    Core assigned to  External Device connected                          Sync or ASync    FIFO or DMA    Corresponding Sequence     Job List      Channel List
 *      ------------  ----------------  ----------------------------------------------     -------------    -----------    ----------------------     ---------     -------------
 *      SPI3(master)  Core0             Empty (need Logic Analyzer to check wave form)     ASync            FIFO           Sequence_0                 Job_0         Channel_0
 *      SPI2(master)  Core1             SPI Flash on Board (GD25Q32CSIGR)                  Sync             FIFO           Sequence_1                 Job_1         Channel_2/3
 *      SPI6(master)  Core1             SPI7(slave)                                        ASync            FIFO           Sequence_2                 Job_2         Channel_4
 *      SPI7(slave)   Core1             SPI6(master)                                       ASync            FIFO           Sequence_3                 Job_3         Channel_5
 *      SPI4(master)  Core1             SPI5(slave)                                        ASync            DMA            Sequence_4                 Job_4         Channel_6
 *      SPI5(slave)   Core1             SPI4(master)                                       ASync            DMA            Sequence_5                 Job_5         Channel_7
 *   =============================================================================================================================================================================
 *
 * *     For single core project:'Mcal_DemoBoard_Project_FC7240',
     =============================================================================================================================================================
 *      SPI HWUnit     External Device connected                          Sync or ASync    FIFO or DMA    Corresponding Sequence     Job List      Channel List
 *      ------------   ----------------------------------------------     -------------    -----------    ----------------------     ---------     -------------
 *      SPI1(master)   SPI Flash on Board (GD25Q32CSIGR)                    Sync            FIFO           Sequence_0                 Job_0         Channel_0/1
 *      SPI2(master)   Empty (need Logic Analyzer to check wave form)       ASync           FIFO           Sequence_1                 Job_1         Channel 2
 *      SPI5(slave)    Empty (need Logic Analyzer to check wave form)       ASync           DMA            Sequence_2                 Job_2         Channel 3
 *   ===
 **********************************************************************************************************************************************************************************/

#include "Bsp_Spi.h"

/* 0x90:Read Manufacture ID/ Device ID command.(reference to GD25Q32 Data sheet for details) */
ALIGN(4) Spi_DataBufferType DataSend_CH0[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH1[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH2[2] = {0,0};
ALIGN(4) Spi_DataBufferType DataRecv_CH2[2] = {0};

void Bsp_Spi_Init(void)
{
    Spi_Init(&Spi_Config);
    IntMgr_EnableInterrupt(FCSPI3_IRQn);
}

void FCSPI3_IRQHandler(void)
{
	SPI_FCSPI3_FifoIsr();
}

void Bsp_Spi_1s_Task_Event(void)
{
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_0, DataSend_CH0);

        /* Default Async mode in LEVEL 2 is polling, set it to Interrupt */
		Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

		Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_0);   /* User should check signal waveform by logic analyzer connected with SPI3 in demo board */
		while (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_3_HWUNIT))
		{
			/* Wait transmit complete */
		}

		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_1, DataSend_CH1);
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_2, DataSend_CH2);

		Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_1_Flash_SPI2);
		Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_2, DataRecv_CH2);   /* Device ID in DataRecv_CH2[2] should be {0xEF, 0x15} */
}

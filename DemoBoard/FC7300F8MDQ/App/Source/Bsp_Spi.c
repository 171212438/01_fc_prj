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

/************ Local Variables *******************/

/************ Interrupt Map *******************/


/************ Callback functions *******************/

/************ Global functions *******************/
void Bsp_Spi_Init(void)
{
    if (0 == GET_CPU_ID())
    {
         Spi_Init(&Spi_Config_EcucPartition_0);

         IntMgr_EnableInterrupt(FCSPI3_IRQn);
    }
    else if(1 == GET_CPU_ID())
	{
         Spi_Init(&Spi_Config_EcucPartition_1);

         IntMgr_EnableInterrupt(FCSPI6_IRQn);
         IntMgr_EnableInterrupt(FCSPI7_IRQn);
	}
    else  /* 2 == GET_CPU_ID() */
    {
    	/* Do nothing cause no SPI HWUnit is assigned to core2 */
    }
}


void FCSPI3_IRQHandler(void)
{
	SPI_FCSPI3_FifoIsr();
}

void FCSPI6_IRQHandler(void)
{
	SPI_FCSPI6_FifoIsr();
}

void FCSPI7_IRQHandler(void)
{
	SPI_FCSPI7_FifoIsr();
}

/*****************************************************************************************
 *  Multi-core demo:
 *
 * **************************************************************************************
 */
Spi_DataBufferType DataSend_CH0[4] = {0x90, 0x00, 0x88, 0x00};
//Spi_DataBufferType DataRecv_CH0[4] = {0x00};

Spi_DataBufferType DataSend_CH1[2] = {0x12, 0x34};
//Spi_DataBufferType DataRecv_CH1[2] = {0x00};

Spi_DataBufferType DataSend_CH2[4] = {0x90, 0x00, 0x00, 0x00};
//Spi_DataBufferType DataRecv_CH2[4] = {0x00};

Spi_DataBufferType DataSend_CH3[2] = {0x00};
Spi_DataBufferType DataRecv_CH3[2] = {0x00};

Spi_DataBufferType DataSend_CH4_Master_FIFO[3] = {0x07, 0x01, 0x04};
Spi_DataBufferType DataRecv_CH4_Master_FIFO[3] = {0x00};

Spi_DataBufferType DataSend_CH5_Slave_FIFO[3] = {0x03, 0x09, 0x06};
Spi_DataBufferType DataRecv_CH5_Slave_FIFO[3] = {0x00};

Spi_DataBufferType DataSend_CH6_Master_DMA[3] = {0x07, 0x01, 0x04};
Spi_DataBufferType DataRecv_CH6_Master_DMA[3] = {0x00};

Spi_DataBufferType DataSend_CH7_Slave_DMA[3] = {0x03, 0x09, 0x06};
Spi_DataBufferType DataRecv_CH7_Slave_DMA[3] = {0x00};

void Bsp_Spi_1s_Task_Event(void)
{
     if (0 == GET_CPU_ID())
    {
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_0_Core0, DataSend_CH0);
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_1_Core0, DataSend_CH1);

        /* Default Async mode in LEVEL 2 is polling, set it to Interrupt */
		Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

		Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_0_Core0);   /* User should check signal waveform by logic analyzer connected with SPI3 in demo board */
		while (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_3_HWUNIT))
		{
			/* Wait transmit complete */
		}
    }
    else if (1 == GET_CPU_ID())
    {
    	{
			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_2_Core1, DataSend_CH2);
			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_3_Core1, DataSend_CH3);

			Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_1_Core1_Flash_SPI2);
			Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_3_Core1, DataRecv_CH3);   /* Device ID in DataRecv_CH3[2] should be {0xEF, 0x15} */
    	}

#if 0
        /*      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      WARNING       !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    	 *      If enable this part of the code, the user must connect the pins of SPI6 and SPI7 on the demo board together
         *      according to the SPI communication protocol, otherwise program will enter an infinite loop.                  */

    	/* Master:SPI6(FIFO)    Slave:SPI7(FIFO) */
    	{
    		/* Clear Receive Array */
    		for(int i = 0; i < 3; i++)
    		{
    			DataRecv_CH5_Slave_FIFO[i] = 0;
    			DataRecv_CH4_Master_FIFO[i] = 0;
    		}

            /* Default Asynchronous transferring mode in LEVEL 2 is polling, set it to Interrupt */
    		Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_5_Core1_FIFO_Slave, DataSend_CH5_Slave_FIFO);
			Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_3_Core1_FIFO_Slave_SPI7);

			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_4_Core1_FIFO_Master, DataSend_CH4_Master_FIFO);
			Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_2_Core1_FIFO_Master_SPI6);

			while ((SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_6_HWUNIT)) || (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_7_HWUNIT)))
			{
				/* Wait transmit complete */
			}

			Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_5_Core1_FIFO_Slave, DataRecv_CH5_Slave_FIFO);     /* DataRecv_CH5_Slave_FIFO[3] should be {7, 1, 4}   */
			Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_4_Core1_FIFO_Master, DataRecv_CH4_Master_FIFO);   /* DataRecv_CH4_Master_FIFO[3] should be {3, 9, 6}  */
    	}
#endif

    }
    else /* 2 == GET_CPU_ID() */
    {
        /* Do nothing cause no SPI HWUnit is assigned to core2 */
    }
}


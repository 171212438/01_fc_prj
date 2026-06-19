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

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F8MDTxxxxT1B)|| \
      (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B)|| \
      (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1C))
#if(STD_OFF == SPI_MULTICORE_ENABLED)

/* 0x90:Read Manufacture ID/ Device ID command.(reference to GD25Q32 Data sheet for details) */
ALIGN(4) Spi_DataBufferType DataSend_CH0[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH1[4] = {0x12, 0x34};

/* buffer to store id read from channel 1 */
ALIGN(4) Spi_DataBufferType DataRecv_CH1[2] = {0};

ALIGN(4) Spi_DataBufferType DataSend_CH2[4] = {0x01, 0x02, 0x03, 0x04};
ALIGN(4) Spi_DataBufferType DataRecv_CH2[4] = {0};

/* buffer arrays for SPI5 & SPI7 */
Spi_DataBufferType DataSend_Master[3] = {0x07, 0x01, 0x04};
Spi_DataBufferType DataRecv_Master[3] = {0x00};
Spi_DataBufferType DataSend_Slave[3]  = {0x03, 0x09, 0x06};
Spi_DataBufferType DataRecv_Slave[3]  = {0x00};

#endif

/************ Local Variables *******************/

/************ Interrupt Map *******************/


/************ Callback functions *******************/

/************ Global functions *******************/
void Bsp_Spi_Init(void)
{
#if(STD_OFF == SPI_MULTICORE_ENABLED)
    Spi_Init(&Spi_Config);
    IntMgr_EnableInterrupt(FCSPI2_IRQn);
#endif

#if(STD_ON == SPI_MULTICORE_ENABLED)

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

#endif
}

#if(STD_OFF == SPI_MULTICORE_ENABLED)

void FCSPI2_IRQHandler(void)
{
	SPI_FCSPI2_FifoIsr();
}

#endif

#if(STD_ON == SPI_MULTICORE_ENABLED)

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

#endif

#if(STD_OFF == SPI_MULTICORE_ENABLED)
void Bsp_Spi_1s_Task_Event(void)
{
    /* Read Device ID using AsyncMode & internal buffer */
    Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_0, DataSend_CH0);
    Spi_SetAsyncMode(SPI_INTERRUPT_MODE);
    Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_1_FIFO_Flash);
    while (SPI_IDLE != Spi_GetStatus())
    {
        /* Wait transmit complete */
    }
    Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_1, DataRecv_CH1);   /* Device ID in DataRecv_CH1[2] should be {0xEF, 0x15} */

    /* Test external buffer & Sync mode */
    Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_2_ExternalBuffer, DataSend_CH2, DataRecv_CH2, 4);
    Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_0_FIFO_EB);   /* User should check signal waveform by logic analyzer connected with SPI3 */

    /* Test DMA mode */
    Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_2_Dma);     /* User should check signal waveform by logic analyzer connected with SPI6 */

    /* Test master(SPI5) communicates with slave(SPI7). Master(SPI5) and Slave(SPI7) both is in DMA mode */
#if 0
    /*      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      WARNING       !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 *      If enable this part of the code, the user must connect the pins of SPI5 and SPI7 on the demo board together
     *      according to the SPI communication protocol, otherwise program will enter an infinite loop.                  */
    {
    	/* Clear receive buffer */
    	for(int i = 0; i < 3; i++)
    	{
			DataRecv_Master[i] = 0;
			DataRecv_Slave[i]  = 0;
    	}

        Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

        /* salve */
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_SPI7_Slave, DataSend_Slave);
		Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_4_SPI7_Slave);

		/* master */
		Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_SPI5_Master, DataSend_Master);
		Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_3_SPI5_Master);

		while (SPI_IDLE != Spi_GetStatus())
		{
			/* Wait transmit complete */
		}

		Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_SPI7_Slave, DataRecv_Slave);     /* DataRecv_Slave[3] should be {7, 1, 4}   */
		Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_SPI5_Master, DataRecv_Master);   /* DataRecv_Master[3] should be {3, 9, 6}  */

    }
#endif

}
#endif /* (STD_OFF == SPI_MULTICORE_ENABLED) */


#if(STD_ON == SPI_MULTICORE_ENABLED)
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

#if 0
        /*      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      WARNING       !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    	 *      If enable this part of the code, the user must connect the pins of SPI4 and SPI5 on the demo board together
         *      according to the SPI communication protocol, otherwise program will enter an infinite loop.                  */

    	/* Master:SPI4(DMA)    Slave:SPI5(DMA) */
    	{
    		/* Clear Receive Array */
    		for(int i = 0; i < 3; i++)
    		{
    			DataRecv_CH7_Slave_DMA[i] = 0;
    			DataRecv_CH6_Master_DMA[i] = 0;
    		}

            /* Default Asynchronous transferring mode in LEVEL 2 is polling, set it to Interrupt */
    		Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_7_Core1_Dma_Slave, DataSend_CH7_Slave_DMA);
			Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_5_Core1_Dma_Slave_SPI5);

			Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_6_Core1_Dma_Master, DataSend_CH6_Master_DMA);
			Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_4_Core1_Dma_Master_SPI4);

			/* Wait transmit complete, than check receive data by "Spi_ReadIB". */
			while ( (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_4_HWUNIT)) || (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_5_HWUNIT)) )
			{
				/*      !!!!!!     WARNING       !!!!!!!! */
				/* Core0 must be full-speed running, otherwise program will running in this 'While' loop all the time */
			}
			Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_7_Core1_Dma_Slave, DataRecv_CH7_Slave_DMA);     /* DataRecv_CH7_Slave_DMA[3] should be {7, 1, 4}   */
			Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_6_Core1_Dma_Master, DataRecv_CH6_Master_DMA);   /* DataRecv_CH6_Master_DMA[3] should be {3, 9, 6}  */
    	}
#endif
    }
    else /* 2 == GET_CPU_ID() */
    {
        /* Do nothing cause no SPI HWUnit is assigned to core2 */
    }
}

#endif /* (STD_OFF == SPI_MULTICORE_ENABLED) */

#elif (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
/* 0x90:Read Manufacture ID/ Device ID command.(reference to GD25Q32 Data sheet for details) */
ALIGN(4) Spi_DataBufferType DataSend_CH0[4] = {0x90, 0x00, 0x00, 0x00};

ALIGN(4) Spi_DataBufferType DataSend_CH1[4] = {0x00, 0x00};

/* buffer to store id read from channel 1 */
ALIGN(4) Spi_DataBufferType DataRecv_CH1[2] = {0};

/* buffer to store id read from channel 2 */
ALIGN(4) uint16 DataSend_CH2[2] = {0x0102,0x0304};
ALIGN(4) uint16 DataRecv_CH2[2] = {0x00,0x00};

/* buffer to store id read from channel 3 */
ALIGN(4) uint16 DataSend_CH3[2] = {0x0506,0x0708};
ALIGN(4) uint16 DataRecv_CH3[2] = {0x00,0x00};

void FCSPI2_IRQHandler(void)
{
	SPI_FCSPI2_FifoIsr();
}

/************ Global functions *******************/
void Bsp_Spi_Init(void)
{
    Spi_Init(&Spi_Config);
    IntMgr_EnableInterrupt(FCSPI2_IRQn);
}

void Bsp_Spi_1s_Task_Event(void)
{
	uint32 u32Timeout = 0;

	Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_0, DataSend_CH0);
	Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_1, DataSend_CH1);

	Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_0_Spi_Flash);
	Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_1, DataRecv_CH1);   /* Device ID in DataRecv_CH1[2] should be {0xc8, 0x15} */

	Spi_SetAsyncMode(SPI_INTERRUPT_MODE);
	Spi_WriteIB(SpiConf_SpiChannel_SpiChannel_3, (Spi_DataBufferType *)DataSend_CH3);
	Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_2_Spi5_Slave);
	Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_2,(const Spi_DataBufferType*)DataSend_CH2,(Spi_DataBufferType *)DataRecv_CH2,4);
	Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_1_Spi2_Master);

	while (((SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_2_HWUNIT)) || (SPI_IDLE != Spi_GetHWUnitStatus(FCSPI_5_HWUNIT)))&&u32Timeout<1000u)
	{
		u32Timeout++;
	}

	Spi_ReadIB(SpiConf_SpiChannel_SpiChannel_3,(Spi_DataBufferType *)DataRecv_CH3);
}

#endif

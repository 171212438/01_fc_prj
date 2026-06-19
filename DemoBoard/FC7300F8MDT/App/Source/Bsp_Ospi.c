#include "Bsp_Ospi.h"

#define TEST_WORD_SIZE 1200

#define OSPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Ospi_MemMap.h"

OSPI_DATA_SECTION ALIGN(4) uint32  write_buf[TEST_WORD_SIZE];
OSPI_DATA_SECTION ALIGN(4) uint32  read_buf[TEST_WORD_SIZE];

#define OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Ospi_MemMap.h"

boolean   g_bErrFlg = FALSE;

const uint32 LUT_WRITE[4] = {
    OSPI_LUT_SEQ(OSPI_CFG_DRV_DDR,   OCTAL_IO, WRITE_OPCODE,  OSPI_CFG_ADDR_DDR, OCTAL_IO, ADDR_BIT_NUM),
    OSPI_LUT_SEQ(OSPI_CFG_CADDR_DDR, OCTAL_IO, CADDR_BIT_NUM, OSPI_CMD_DUMMY,    OCTAL_IO, DUMMY_CYCLE),
    OSPI_LUT_SEQ(OSPI_WRITE_DRV_DDR, OCTAL_IO, CMD_SIZE,      OSPI_CMD_STOP,     OCTAL_IO, 0x00),
};

const uint32 LUT_READ[4] = {
    OSPI_LUT_SEQ(OSPI_CFG_DRV_DDR,   OCTAL_IO, READ_OPCODE,   OSPI_CFG_ADDR_DDR, OCTAL_IO, ADDR_BIT_NUM),
    OSPI_LUT_SEQ(OSPI_CFG_CADDR_DDR, OCTAL_IO, CADDR_BIT_NUM, OSPI_CMD_DUMMY,    OCTAL_IO, DUMMY_CYCLE),
    OSPI_LUT_SEQ(OSPI_READ_DRV_DDR,  OCTAL_IO, CMD_SIZE,      OSPI_CMD_STOP,     OCTAL_IO, 0x00),
};

void Bsp_Ospi_Init(void){
	Ospi_Init(&OspiConfigSet_0);
	IntMgr_EnableInterrupt(OSPI_IRQn);
}


void Bsp_HyperRam_CmdSet(void)
{
    Ospi_UpdateLUT(WRITE_LUT_IDX, LUT_WRITE, 4);
    Ospi_UpdateLUT(READ_LUT_IDX, LUT_READ, 4);
}

void Bsp_HyperRam_Test(void)
{
	uint32  u32Loop,u32ProgData,u32IncData;

	g_bErrFlg   = FALSE;
	u32ProgData = 0x00345678;
	u32IncData  = 0x01020304;

	/* prepare test data */
	DEBUG_INFO("Hyperram test with %d words data.\r\n",TEST_WORD_SIZE);
	for(u32Loop = 0; u32Loop < (uint32)TEST_WORD_SIZE; u32Loop++)
	{
		write_buf[u32Loop]= u32ProgData + (u32Loop * u32IncData);
	}

	/* write to hyperram */
	if(E_OK != Ospi_HyperBusSyncCommandWrite(WRITE_LUT_IDX, (uint32 *)write_buf, TEST_WORD_SIZE))
	{
		DEBUG_INFO("Write Data Fail.\r\n");
	}

	/* read from hyperram */
	if(E_OK != Ospi_HyperBusSyncCommandRead(READ_LUT_IDX, (uint32 *)read_buf, TEST_WORD_SIZE))
	{
		DEBUG_INFO("Read Data Fail.\r\n");
	}

	/* Check data */
	for(u32Loop = 0; u32Loop < (uint32)TEST_WORD_SIZE; u32Loop++)
	{
		if(write_buf[u32Loop] != read_buf[u32Loop])
		{
			g_bErrFlg = TRUE;
			DEBUG_INFO("Data compare Fail,index is %d:w.data 0x%x,r.data 0x%x\r\n", u32Loop, write_buf[u32Loop], read_buf[u32Loop]);
		}
	}

	if(g_bErrFlg)
	{
		DEBUG_INFO("Test Fail.\r\n");
	}
	else
	{
		DEBUG_INFO("Test Pass.\r\n");
	}

}
#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
void Bsp_HyperRam_Dma_Test(void)
{
	uint32  u32Loop,u32ProgData,u32IncData;

	g_bErrFlg   = FALSE;
	u32ProgData = 0x00345678;
	u32IncData  = 0x01010101;

	/* prepare test data */
	DEBUG_INFO("Hyperram test with %d words data.\r\n",TEST_WORD_SIZE);
	for(u32Loop = 0; u32Loop < (uint32)TEST_WORD_SIZE; u32Loop++)
	{
		write_buf[u32Loop]= u32ProgData + (u32Loop * u32IncData);
	}

	Ospi_DmaInit((uint32 *)write_buf, (uint32 *)read_buf, TEST_WORD_SIZE);
	Ospi_SetTxFifoWatermark();

	/* dma mode write to hyperram */
	Ospi_EnableTxDma();
	if(E_OK != Ospi_HyperBusAsyncCommandDmaWrite(WRITE_LUT_IDX, TEST_WORD_SIZE))
	{
		DEBUG_INFO("Write Data Fail.\r\n");
	}
	while(Ospi_GetStatus() != OSPI_IDLE);
	
	Ospi_SetRxFifoWatermark();
	/* dma mode read from hyperram */
	Ospi_EnableRxDma();
	if(E_OK != Ospi_HyperBusAsyncCommandDmaRead(READ_LUT_IDX, TEST_WORD_SIZE))
	{
		DEBUG_INFO("Read Data Fail.\r\n");
	}
	while(Ospi_GetStatus() != OSPI_IDLE);

	/* Check data */
	for(u32Loop = 0; u32Loop < (uint32)TEST_WORD_SIZE; u32Loop++)
	{
		if(write_buf[u32Loop] != read_buf[u32Loop])
		{
			g_bErrFlg = TRUE;
			DEBUG_INFO("Data compare Fail,index is %d:w.data 0x%x,r.data 0x%x\r\n", u32Loop, write_buf[u32Loop], read_buf[u32Loop]);
		}
	}

	if(g_bErrFlg)
	{
		DEBUG_INFO("Test Fail.\r\n");
	}
	else
	{
		DEBUG_INFO("Test Pass.\r\n");

	}
}
#endif

void OSPI_IRQHandler(void)
{
	Ospi_IsrTransferError();
	Ospi_IsrTransferComplete();
}

/*
 * Bsp_I2c.c
 *
 *  Created on: 2025_01_17
 *      Author: qxw0120
 */

#include "Bsp_I2c.h"

/*
 * 0: Master Sync mode
 * 1: Master Async mode
 * 2: Slave mode
 */
#define TEST_MODE   1
#define DATA_LEN 512



uint8 u8I2cTestTimes = 0x0U;
uint32 u32CMD_ID = 0x0U;
static uint8 u8I2cData[DATA_LEN] __attribute__((section(".mcal_nocacheable_data"))) = {0x00};
static uint8 u8I2cReadData[DATA_LEN] __attribute__((section(".mcal_nocacheable_data"))) = {0x00};


volatile boolean transmit = FALSE;
volatile boolean receive = FALSE;

void Bsp_I2c_Init(void)
{
    if (0 != GET_CPU_ID())
    {
        return;
    }
    I2c_Init(&I2c_Config);
    IntMgr_EnableInterrupt(FCIIC1_IRQn);
    DEBUG_INFO("IIC init success\r\n");
    Init_Data();

}

void Init_Data(void)
{
    uint16 u16Index;
    for (u16Index = 0; u16Index < DATA_LEN; u16Index++)
    {
        u8I2cData[u16Index] = (uint8)(u16Index % 256);
        u8I2cReadData[u16Index] = 0x00;
    }
}

void Is_Success(const I2c_RequestType *pRequestPtr)
{
    uint16 u16DataIndex = 0x0U;
    while (transmit == TRUE && receive == FALSE)
    {
        u8I2cTestTimes = 0;
    }
    transmit = FALSE;
    receive = FALSE;
    u16DataIndex = 0x00;
    while ((u16DataIndex <= pRequestPtr->u16Len) && (u8I2cData[u16DataIndex] == u8I2cReadData[u16DataIndex]))
    {
        u16DataIndex++;
    }
    if (u16DataIndex >= pRequestPtr->u16Len)
    {
        DEBUG_INFO("IIC write and read success\r\n");
    }
    else
    {
        DEBUG_INFO("IIC write and read fail,u16DataIndex:%d %d!=%d\r\n", u16DataIndex, u8I2cData[u16DataIndex], u8I2cData[u16DataIndex]);
    }
}
void Bsp_I2c_1s_Task_Event(void)
{
    I2c_RequestType tRequestType;

    if (0 != GET_CPU_ID())
    {
        return;
    }
    uint8 u8IicIndex = 0x0U;

    switch (u8I2cTestTimes & 0xF)
    {
    #if (TEST_MODE == 0)
        /* Master polling Test for sub register */
        case 0://sync send
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_ERROR_PRESENT)
            {
                I2c_ClearStatus(u8IicIndex);
            }
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_IDLE)
            {
                tRequestType.u8Direction = I2C_DIR_WRITE;
                tRequestType.u16Len = 16;
                tRequestType.BufferPtr = u8I2cData;
                tRequestType.u8SlaveAddress = 0x50;
                tRequestType.subAddress = 0x00;
                tRequestType.subAddressSize = 0x2u;
                I2c_SyncTransmit(u8IicIndex, &tRequestType);
                u8I2cTestTimes = 1;
            }
            break;
        case 1://sync read
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_ERROR_PRESENT)
            {
                I2c_ClearStatus(u8IicIndex);
            }
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_IDLE)
            {
                tRequestType.u8Direction = I2C_DIR_READ;
                tRequestType.u16Len = 16;
                tRequestType.BufferPtr = u8I2cReadData;
                tRequestType.u8SlaveAddress = 0x50;
                tRequestType.subAddress = 0x00;
                tRequestType.subAddressSize = 0x2u;
                I2c_SyncTransmit(u8IicIndex, &tRequestType);
                u8I2cTestTimes = 0;
                Is_Success(&tRequestType);
            }
            break;
    #elif (TEST_MODE == 1)
        /* Master Interrupt/DMA Test for sub register*/
        case 0://async send
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_ERROR_PRESENT)
            {
                I2c_ClearStatus(u8IicIndex);
            }
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_IDLE)
            {
                tRequestType.u8Direction = I2C_DIR_WRITE;
                tRequestType.u16Len = 16;
                tRequestType.BufferPtr = u8I2cData;
                tRequestType.u8SlaveAddress = 0x50;
                tRequestType.subAddress = 0x00U;
                tRequestType.subAddressSize = 0x2u;
                I2c_AsyncTransmit(u8IicIndex, &tRequestType);
                u8I2cTestTimes = 1;
            }
            break;
        case 1://async read
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_ERROR_PRESENT)
            {
                I2c_ClearStatus(u8IicIndex);
            }
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_IDLE)
            {
                tRequestType.u8Direction = I2C_DIR_READ;
                tRequestType.u16Len = 16;
                tRequestType.BufferPtr = u8I2cReadData;
                tRequestType.u8SlaveAddress = 0x50;
                tRequestType.subAddress = 0x00U;
                tRequestType.subAddressSize = 0x2u;
                I2c_AsyncTransmit(u8IicIndex, &tRequestType);
                u8I2cTestTimes = 0;
                Is_Success(&tRequestType);
            }
            break;
    #elif (TEST_MODE == 2)
        /* Slave Test*/
        case 0://listing
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_ERROR_PRESENT)
            {
                I2c_ClearStatus(u8IicIndex);
            }
            if (I2c_GetStatus(u8IicIndex) == I2C_CH_IDLE)
            {
                tRequestType.BufferPtr = u8I2cData;
                /* Only Interrupt mode is supported, DMA mode note supported */
                tRequestType.subAddressSize = 0x2U;
                tRequestType.u16BufferSize = DATA_LEN;
                I2c_StartListening(u8IicIndex, &tRequestType);
                u8I2cTestTimes = 0;
                DEBUG_INFO("IIC slave  prepare\r\n");
            }
            break;
    #endif
        default:
            break;
    }

}

void Bsp_I2c_5ms_Task_Event_ForCheckTimeout(void)
{
    uint8 u8Channel = 0x0U;
    if (E_NOT_OK == I2c_IsTimeout(u8Channel, 1))
    {
        DEBUG_INFO("IIC timeout\r\n");
    }
}

void FCIIC1_IRQHandler(void)
{
    FCI2C_1_ISR();
}

void I2c_ErrorNotification(uint8 u8Channel, uint8 u8ErrorCode)
{
    DEBUG_INFO("IIC error u8Channel[%d] u8ErrorCode[%d]\r\n", u8Channel, u8ErrorCode);
}

void I2c_MasterTransmitCompleteNotification(uint8 u8Channel, uint16 u16NumberOfBytes)
{
    (void)u8Channel;
    (void)u16NumberOfBytes;
    transmit = TRUE;
}

void I2c_MasterReceiveCompleteNotification(uint8 u8Channel, uint16 u16NumberOfBytes)
{
    (void)u8Channel;
    (void)u16NumberOfBytes;
    receive = TRUE;
}

void I2c_SlaveSubAddressReadNotification(uint8 u8Channel, uint8 **pBufferAddress, uint16 *pBufferSize, uint32 u32SubAddress)
{
   (void)u8Channel;
   *pBufferAddress = (uint8 *)&u8I2cData;
   *pBufferSize = 100U;
   u32CMD_ID = u32SubAddress;
}

void I2c_SlaveSubAddressWriteNotification(uint8 u8Channel, uint8 **pBufferAddress, uint16 *pBufferSize, uint32 u32SubAddress)
{
    (void)u8Channel;
    *pBufferAddress = (uint8 *)&u8I2cData;
    *pBufferSize = 100U;
    u32CMD_ID = u32SubAddress;
}

void I2c_SlaveAddressMatchNotification(uint8 u8Channel, I2c_DataDirectionType eDirection)
{
    (void)u8Channel;
    (void)eDirection;
}

void I2c_SlaveTransmitCompleteNotification(uint8 u8Channel, uint16 u16NumberOfBytes)
{
    (void)u8Channel;
    (void)u16NumberOfBytes;
}

void I2c_SlaveReceiveCompleteNotification(uint8 u8Channel, uint16 u16NumberOfBytes)
{
    (void)u8Channel;
    (void)u16NumberOfBytes;
}

void I2c_SlaveByteReceiveNotification(uint8 u8IicIndex)
{
    (void)u8IicIndex;
}

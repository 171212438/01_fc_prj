/* EthIf test
 * Test Steps:
 * 1. Connect the RJ45 on the demo board to a personal computer.
 * 2. Debug this project on the demo board.
 * 3. Open a network tool, such as netassist.
 * 4. Use network tool to send udp packets to the 239.69.16.32 multicast address and port 23456.
 * 5. The demo board will send back packets using unicast, with the source ipv4 address 192.168.1.200 and source port 23456.
 */
#include "Bsp_EthIf.h"
#include "Bsp_Eth.h"
#include "Bsp_EthTrcv.h"


/* Test IPV4 multicast address "239.69.16.32" in network order */
#define BSP_ETHIF_TEST_IPV4ADDR         0x201045EFU
#define BSP_ETHIF_TEST_PORT             23456

/* Local IPV4 address "192.168.1.200" in network order */
#define BSP_ETHIF_LOCAL_IPV4ADDR        0xC801A8C0U

#define BSP_ETHIF_INSTANCE              0U
#define BSP_ETHIF_BUFFER_COUNT          16U

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
static Eth_TimeStampType RxTimeStamp;
static Eth_TimeStampType TxTimeStamp;
#endif

typedef struct
{
    uint16 Length;
    uint8 mac[6U];
    uint8 data[1536U];
}BspEthIfBuffer_t;


/* Test ring buffer */
static uint8 BspEthIfBufWpos = 0U;
static uint8 BspEthIfBufRpos = 0U;
static BspEthIfBuffer_t BspEthIfBuffers[BSP_ETHIF_BUFFER_COUNT];




/* Local functions */
static void EthIf_MainFunctionRx(void);
static void EthIf_MainFunctionTx(void);
static void EthIf_MainFunctionState(void);
static void Bsp_EthIf_GlobalTimePrint(void);
static void Bsp_EthIf_DataInput(Eth_FrameType FrameType, boolean IsBroadcast, const uint8* PhysAddrPtr, const Eth_DataType* DataPtr, uint16 LenByte);
static void Bsp_EthIf_DataOutput(void);
#if (STD_OFF == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP)
static uint32 Bsp_EthIf_Pseudo_Checksum(uint32 srcip, uint32 dstip, uint16 length);
static uint16 Bsp_EthIf_Checksum(uint32 sum, const uint8 *buf, uint32 size);
#endif

void Bsp_EthIf_500us_Task_Event(void)
{
    if (EthPartitionCoreIdMatched())
    {
        EthIf_MainFunctionRx();
        EthIf_MainFunctionTx();
    }
}

void Bsp_EthIf_1s_Task_Event(void)
{
    if (EthPartitionCoreIdMatched())
    {
        EthIf_MainFunctionState();
        Bsp_EthIf_GlobalTimePrint();
    }
}

void Bsp_EthIf_Init(void)
{
    BspEthIfBufWpos = 0U;
    BspEthIfBufRpos = 0U;

    Bsp_EthTrcv_Reset();
    /* Wait for PHY output clock stable */
    volatile unsigned int i;
    for (i = 0U; i < 5000000U; ++i)
    {
        __asm("nop");
    }
}

Std_ReturnType Bsp_EthIf_SetControllerMode(void)
{
    DEBUG_INFO("Bsp_EthIf_SetControllerMode\r\n");

    if (E_OK != Eth_SetControllerMode(BSP_ETH_INSTANCE, ETH_MODE_ACTIVE))
    {
        DEBUG_INFO("Eth_SetControllerMode failed\r\n");
    }
    else
    {
#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
        /* BSP_ETHIF_TEST_IPV4ADDR to Hash filter */
        uint8 mac_addr[6U] =
        {
            0x01u,
            0x00u,
            0x5Eu,
            (BSP_ETHIF_TEST_IPV4ADDR >> 8U) & 0x7FU,
            (BSP_ETHIF_TEST_IPV4ADDR >> 16U) & 0xFFU,
            (BSP_ETHIF_TEST_IPV4ADDR >> 24U) & 0xFFU
        };
        Eth_UpdatePhysAddrFilter(BSP_ETH_INSTANCE, mac_addr, ETH_ADD_TO_FILTER);
#endif
        DEBUG_INFO("Eth_SetControllerMode success\r\n");
    }

    return E_OK;
}

static void Bsp_EthIf_GlobalTimePrint(void)
{
    #if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    DEBUG_INFO("Frame timestamp Rx %d.%d.%d, Tx %d.%d.%d\r\n",
            (int)RxTimeStamp.secondsHi, (int)RxTimeStamp.seconds, (int)RxTimeStamp.nanoseconds,
            (int)TxTimeStamp.secondsHi, (int)TxTimeStamp.seconds, (int)TxTimeStamp.nanoseconds);
    #endif
}

static void EthIf_MainFunctionRx(void)
{
    Eth_RxStatusType rxstatus = ETH_RECEIVED_MORE_DATA_AVAILABLE;
    while (rxstatus == ETH_RECEIVED_MORE_DATA_AVAILABLE)
    {
        Eth_Receive(BSP_ETH_INSTANCE, 0U, &rxstatus);
    }
    rxstatus = ETH_RECEIVED_MORE_DATA_AVAILABLE;
    while (rxstatus == ETH_RECEIVED_MORE_DATA_AVAILABLE)
    {
        Eth_Receive(BSP_ETH_INSTANCE, 1U, &rxstatus);
    }
}

static void EthIf_MainFunctionTx(void)
{
    Bsp_EthIf_DataOutput();
    Eth_TxConfirmation(BSP_ETH_INSTANCE);
}

static void EthIf_MainFunctionState(void)
{

}

/* EthIf callback functions */
void EthIf_RxIndication
(
    uint8 CtrlIdx,
    Eth_FrameType FrameType,
    boolean IsBroadcast,
    const uint8 *PhysAddrPtr,
    const Eth_DataType *DataPtr,
    uint16 LenByte
)
{
    Bsp_EthIf_DataInput(FrameType, IsBroadcast, PhysAddrPtr, DataPtr, LenByte);

    (void)CtrlIdx;
}

void EthIf_TxConfirmation
(
    uint8 CtrlIdx,
    Eth_BufIdxType BufIdx,
    Std_ReturnType Result
)
{
    #if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    Eth_TimeStampQualType timeQual;
    Eth_TimeStampType timeStamp;

    Eth_GetEgressTimeStamp(CtrlIdx, BufIdx, &timeQual, &timeStamp);
    if (timeQual == ETH_VALID)
    {
        TxTimeStamp.secondsHi = timeStamp.secondsHi;
        TxTimeStamp.seconds = timeStamp.seconds;
        TxTimeStamp.nanoseconds = timeStamp.nanoseconds;
    }
    #endif

    (void)CtrlIdx;
    (void)BufIdx;
    (void)Result;
}

void EthIf_CtrlModeIndication
(
    uint8 CtrlIdx,
    Eth_ModeType CtrlMode
)
{
    Std_ReturnType RetVal;

    if (ETH_MODE_DOWN == CtrlMode)
    {
        (void)EthTrcv_SetTransceiverMode(BSP_ETHTRCV_INSTANCE, ETH_MODE_DOWN);
    }
    else
    {
        RetVal = EthTrcv_SetTransceiverMode(BSP_ETHTRCV_INSTANCE, ETH_MODE_ACTIVE);
#if (STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API)
        if (E_OK == RetVal)
        {
           RetVal = EthTrcv_TransceiverLinkStateRequest(BSP_ETHTRCV_INSTANCE, ETHTRCV_LINK_STATE_ACTIVE);
        }
#endif /* STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API */

        if (E_OK == RetVal)
        {
            DEBUG_INFO("EthTrcv_SetTransceiverMode success\r\n");
        }
        else
        {
            DEBUG_INFO("EthTrcv_SetTransceiverMode failed\r\n");
        }
    }
}

void EthIf_TrcvModeIndication
(
    uint8 TrcvIdx,
    Eth_ModeType TrcvMode
)
{
    EthTrcv_LinkStateType LinkState;
    /* Stub function */
    (void)TrcvIdx;

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
    if (TrcvMode == ETH_MODE_ACTIVE)
    {
        (void)EthTrcv_GetLinkState(BSP_ETHTRCV_INSTANCE, &LinkState);
        DEBUG_INFO("Transceiver %s mode indication: link is %s\r\n",
                    (TrcvMode == ETH_MODE_DOWN) ? "down" : "active",
           (LinkState == ETHTRCV_LINK_STATE_DOWN) ? "down" : "up");
    }
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

}

static void Bsp_EthIf_DataInput(Eth_FrameType FrameType, boolean IsBroadcast, const uint8 *PhysAddrPtr, const Eth_DataType *DataPtr, uint16 LenByte)
{
    uint8 tmp;
    uint16 i;
    uint16 port;

    if ((FrameType == 0x0800U) && ((boolean)FALSE == IsBroadcast) && (LenByte > 28U))
    {
        port = (uint16)(((uint32)DataPtr[22U] << 8U) | (uint32)DataPtr[23U]);
        if (port == BSP_ETHIF_TEST_PORT)
        {
            tmp = ((BspEthIfBufWpos + 1U) < BSP_ETHIF_BUFFER_COUNT) ? (uint8)(BspEthIfBufWpos + 1U) : (uint8)0U;
            if (tmp != BspEthIfBufRpos)
            {
                BspEthIfBuffers[BspEthIfBufWpos].Length = LenByte;
                BspEthIfBuffers[BspEthIfBufWpos].mac[0U] = PhysAddrPtr[0U];
                BspEthIfBuffers[BspEthIfBufWpos].mac[1U] = PhysAddrPtr[1U];
                BspEthIfBuffers[BspEthIfBufWpos].mac[2U] = PhysAddrPtr[2U];
                BspEthIfBuffers[BspEthIfBufWpos].mac[3U] = PhysAddrPtr[3U];
                BspEthIfBuffers[BspEthIfBufWpos].mac[4U] = PhysAddrPtr[4U];
                BspEthIfBuffers[BspEthIfBufWpos].mac[5U] = PhysAddrPtr[5U];

                for (i = 0U; i < LenByte; ++i)
                {
                    BspEthIfBuffers[BspEthIfBufWpos].data[i] = DataPtr[i];
                }
                BspEthIfBufWpos = tmp;

                #if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
                Eth_TimeStampQualType timeQual;
                Eth_TimeStampType timeStamp;
                Eth_GetIngressTimeStamp(BSP_ETH_INSTANCE, DataPtr, &timeQual, &timeStamp);
                if (timeQual == ETH_VALID)
                {
                    RxTimeStamp.secondsHi = timeStamp.secondsHi;
                    RxTimeStamp.seconds = timeStamp.seconds;
                    RxTimeStamp.nanoseconds = timeStamp.nanoseconds;
                }
                #endif
            }
        }
    }
}

static void Bsp_EthIf_DataOutput(void)
{
    uint8 wpos;
    uint8 Channel = 0U;
    BufReq_ReturnType BufReq;
    Eth_BufIdxType BufIdx;
    uint8 *BufPtr;
    uint8 *pData;
    uint16 LenByte;
    uint16 i;
#if (STD_OFF == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP)
    uint32 pseudosum;
#endif
    uint32 ipv4addr;

    wpos = BspEthIfBufWpos;
    while (BspEthIfBufRpos != wpos)
    {
        LenByte = BspEthIfBuffers[BspEthIfBufRpos].Length;

        Channel = BspEthIfBufRpos & 1U;
        BufReq = Eth_ProvideTxBuffer(BSP_ETH_INSTANCE, Channel, &BufIdx, &BufPtr, &LenByte);
        if (BUFREQ_OK == BufReq)
        {

            pData = BspEthIfBuffers[BspEthIfBufRpos].data;
            LenByte = (uint16)(((uint32)pData[2U] << (uint32)8U) | (uint32)pData[3U]);

            for (i = 0U; i < LenByte; ++i)
            {
                BufPtr[i] = pData[i];
            }

            /* Set time to live */
            BufPtr[8U] = 64U;
            /* Set source and destination IP address */
            ipv4addr = ((uint32)(*(uint16 *)&BufPtr[12U])) | (((uint32)(*(uint16 *)&BufPtr[14U])) << 16U);
            *(uint16 *)&BufPtr[12U] = BSP_ETHIF_LOCAL_IPV4ADDR & 0xFFFFU;
            *(uint16 *)&BufPtr[14U] = (BSP_ETHIF_LOCAL_IPV4ADDR >> 16U) & 0xFFFFU;
            *(uint16 *)&BufPtr[16U] = ipv4addr & 0xFFFFU;
            *(uint16 *)&BufPtr[18U] = (uint16)((ipv4addr >> 16U) & 0xFFFFU);

            /* Calculate IP checksum */
            BufPtr[10U] = 0U;
            BufPtr[11U] = 0U;
#if (STD_OFF == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP)
            *(uint16 *)&BufPtr[10U] = Bsp_EthIf_Checksum(0U, BufPtr, 20U);
#endif

            *(uint16 *)&BufPtr[22U] = *(uint16 *)&BufPtr[20U];
            BufPtr[20U] = BSP_ETHIF_TEST_PORT >> 8U;
            BufPtr[21U] = BSP_ETHIF_TEST_PORT & 0xFF;
            /* Calculate UDP checksum */
            BufPtr[26U] = 0U;
            BufPtr[27U] = 0U;
#if (STD_OFF == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP)
            pseudosum = Bsp_EthIf_Pseudo_Checksum(BSP_ETHIF_LOCAL_IPV4ADDR, ipv4addr, (uint16)(LenByte - 20U));
            *(uint16 *)&BufPtr[26U] = Bsp_EthIf_Checksum(pseudosum, &BufPtr[20U], LenByte - 20U);
#endif

            #if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
            Eth_EnableEgressTimeStamp(BSP_ETH_INSTANCE, BufIdx);
            #endif
            Eth_Transmit(BSP_ETH_INSTANCE, BufIdx, 0x0800U, TRUE, LenByte, BspEthIfBuffers[BspEthIfBufRpos].mac);

            BspEthIfBufRpos = ((BspEthIfBufRpos + 1U) < BSP_ETHIF_BUFFER_COUNT) ? (uint8)(BspEthIfBufRpos + 1U) : (uint8)0U;
        }
    }

}

#if (STD_OFF == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP)
/* Checksum functions */
static uint32 Bsp_EthIf_Pseudo_Checksum(uint32 srcip, uint32 dstip, uint16 length)
{
    uint32 pseudo_sum = 0U;
    uint32 i;
    struct __pseudo_h
    {
        uint32 dst;
        uint32 src;
        uint8 zero;
        uint8 proto;
        uint16 length;
    } pseudo_h;

    uint16 *ph = (uint16 *)&pseudo_h;
    pseudo_h.dst = dstip;
    pseudo_h.src = srcip;
    pseudo_h.zero = 0U;
    pseudo_h.proto = 17U;
    pseudo_h.length = (uint16)((length << 8U) | (length >> 8U));

    for (i = 0; i < sizeof(pseudo_h) / 2U; ++i)
    {
        pseudo_sum +=  ph[i];
    }

    return pseudo_sum;
}

static uint16 Bsp_EthIf_Checksum(uint32 sum, const uint8 *buffer, uint32 size)
{
    uint16 cksum;
    uint16 *buf = (uint16 *)buffer;

    //printf("\nsum=%x,%02x,%02x\n",sum,buffer[0],buffer[size - 1]);
    while (size > 1)
    {
        sum += *buf++;
        size -= 2;
    }
    if (size > 0)
    {
        //unsigned char last_word[2] = { *(unsigned char*)buf, 0 };
        //sum += *((unsigned short *)last_word);
        sum += *(uint8 *)buf;
    }
    //printf("sum1=%x\n",sum);
    while (sum >> 16)
    {
        sum = (sum >> 16) + (sum & 0xffff);
    }
    //printf("sum2=%x\n",sum);
    cksum  = (uint16)(~sum);
    if (!cksum)
    {
        cksum = 0xFFFF;
    }

    //printf("cksum=%x\n",cksum);
    return cksum;
}
#endif

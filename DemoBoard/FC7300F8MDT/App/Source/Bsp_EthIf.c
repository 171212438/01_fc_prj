/* EthIf test
 * Test Steps:
 * 1. Connect the RJ45 on the demo board to a personal computer.
 * 2. Debug this project on the demo board.
 * 3. Open a network tool, such as netassist.
 * 4. Use network tool to send udp packets to the 239.69.16.32 multicast address and port 23456.
 * 5. The demo board will send back packets using unicast, with the source ipv4 address 192.168.1.200 and source port 23456.
 */
#include "Bsp_EthIf.h"


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

static Eth_TimeStampType MultiCastSendTime;
static Eth_TimeStampType MultiCastTimeStamp;
#endif

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK >= 2U))
static Eth_TimeStampType Ch0ScheduleErrTimeStamp;
static Eth_TimeStampType Ch1ScheduleErrTimeStamp;
#endif

typedef struct
{
    uint16 Length;
    uint8 mac[6U];
    uint8 data[1536U];
}BspEthIfBuffer_t;

static EthTrcv_LinkStateType BspEthIfTrcvState = ETHTRCV_LINK_STATE_DOWN;

/* Test ring buffer */
static uint8 BspEthIfBufWpos = 0U;
static uint8 BspEthIfBufRpos = 0U;
static BspEthIfBuffer_t BspEthIfBuffers[BSP_ETHIF_BUFFER_COUNT];

static uint8 BspEthPeriodMulticastPacket[] =
{
    0x45, 0x00, 0x00, 0x3c, 0x00, 0x01, 0x00, 0x00,
    0x01, 0x11, 0xf7, 0xd9, 0xc0, 0xa8, 0x01, 0xc8,
    0xef, 0x45, 0x10, 0x21, 0x5b, 0xa1, 0x5b, 0xa1,
    0x00, 0x28, 0x94, 0x82, 0x10, 0x11, 0x12, 0x13,
    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b,
    0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23,
    0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b,
    0x2c, 0x2d, 0x2e, 0x2f
};


/* Local functions */
static void EthIf_MainFunctionRx(void);
static void EthIf_MainFunctionTx(void);
static void EthIf_MainFunctionState(void);
static void Bsp_EthIf_GlobalTimePrint(void);
static void Bsp_EthIf_DataInput(Eth_FrameType FrameType, boolean IsBroadcast, const uint8* PhysAddrPtr, const Eth_DataType* DataPtr, uint16 LenByte);
static void Bsp_EthIf_DataOutput(void);
static void Bsp_EthIf_Send_Multicast_Packet(void);
static uint32 Bsp_EthIf_Pseudo_Checksum(uint32 srcip, uint32 dstip, uint16 length);
static uint16 Bsp_EthIf_Checksum(uint32 sum, const uint8 *buf, uint32 size);

void Bsp_EthIf_5ms_Task_Event(void)
{
    static uint32 count = 20U;

    if (EthPartitionCoreIdMatched())
    {
        EthIf_MainFunctionRx();
        EthIf_MainFunctionTx();

        if (BspEthIfTrcvState == ETHTRCV_LINK_STATE_ACTIVE)
        {
            if (--count == 0U)
            {
                Bsp_EthIf_Send_Multicast_Packet();
                count = 20U + ((uint32)rand() & 7U);
            }
        }
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
    DEBUG_INFO("Channel0 timestamp Rx: %d.%d, Tx: %d.%d\r\n",
            (int)RxTimeStamp.seconds, (int)RxTimeStamp.nanoseconds,
            (int)TxTimeStamp.seconds, (int)TxTimeStamp.nanoseconds);

    DEBUG_INFO("Channel1 before send: %d.%d, Tx timestamp: %d.%d\r\n",
            (int)MultiCastSendTime.seconds, (int)MultiCastSendTime.nanoseconds,
            (int)MultiCastTimeStamp.seconds, (int)MultiCastTimeStamp.nanoseconds);

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK >= 2U))
    DEBUG_INFO("Ch0 schedule error time %d.%d, Ch1 schedule error time %d.%d\r\n",
            (int)Ch0ScheduleErrTimeStamp.seconds, (int)Ch0ScheduleErrTimeStamp.nanoseconds,
            (int)Ch1ScheduleErrTimeStamp.seconds, (int)Ch1ScheduleErrTimeStamp.nanoseconds);
#endif
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
    EthTrcv_LinkStateType TrcvState;
    (void)EthTrcv_GetLinkState(BSP_ETHTRCV_INSTANCE, &TrcvState);
    if (BspEthIfTrcvState != TrcvState)
    {
        BspEthIfTrcvState = TrcvState;
        DEBUG_INFO("Transceiver link state changed to link %s\r\n",
           (TrcvState == ETHTRCV_LINK_STATE_DOWN) ? "down" : "up");
    }
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
        if (BUFIDX_TO_CHANNEL(BufIdx) == 0U)
        {
            TxTimeStamp.secondsHi = timeStamp.secondsHi;
            TxTimeStamp.seconds = timeStamp.seconds;
            TxTimeStamp.nanoseconds = timeStamp.nanoseconds;

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK >= 2U))
            if (((TxTimeStamp.nanoseconds / NANOSEC_PER_MILLISEC) % TEST_TAS_CYCLETIME_MS) == TEST_CHANNEL1_GCLTIME_MS)
            {
                Ch0ScheduleErrTimeStamp.seconds = TxTimeStamp.seconds;
                Ch0ScheduleErrTimeStamp.nanoseconds = TxTimeStamp.nanoseconds;
            }
#endif
        }
        else
        {
            MultiCastTimeStamp.secondsHi = timeStamp.secondsHi;
            MultiCastTimeStamp.seconds = timeStamp.seconds;
            MultiCastTimeStamp.nanoseconds = timeStamp.nanoseconds;

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 2U))
            if (((timeStamp.nanoseconds / NANOSEC_PER_MILLISEC) % TEST_TAS_CYCLETIME_MS) != TEST_CHANNEL1_GCLTIME_MS)
            {
                Ch1ScheduleErrTimeStamp.seconds = timeStamp.seconds;
                Ch1ScheduleErrTimeStamp.nanoseconds = timeStamp.nanoseconds;
            }
#endif

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 3U))
            if (((timeStamp.nanoseconds / NANOSEC_PER_SUBMILLISEC) % TEST_TAS_CYCLETIME_SUBMS) != TEST_CHANNEL1_TBSTIME_SUNMS)
            {
                Ch1ScheduleErrTimeStamp.seconds = timeStamp.seconds;
                Ch1ScheduleErrTimeStamp.nanoseconds = timeStamp.nanoseconds;
            }
#endif
        }
    }
#endif

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

#if ((STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK >= 2U))
            Eth_TimeAwareShaperInit(BSP_ETH_INSTANCE, 0U);
#endif

#if ((STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 1U))
            Eth_TBSCfgType TbsCfg = {0x3B9AC9U, 0U, (boolean)TRUE, (boolean)FALSE};
            Eth_TBSConfigureCtrl(BSP_ETH_INSTANCE, &TbsCfg);
#endif

#if ((STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 3U))
            Eth_TBSCfgType TbsCfg = {0U, 1U, (boolean)TRUE, (boolean)TRUE};
            Eth_TBSConfigureCtrl(BSP_ETH_INSTANCE, &TbsCfg);
#endif
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
    /* Stub function */
    (void)TrcvIdx;

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
    if (TrcvMode == ETH_MODE_ACTIVE)
    {
        (void)EthTrcv_GetLinkState(BSP_ETHTRCV_INSTANCE, &BspEthIfTrcvState);
        DEBUG_INFO("Transceiver %s mode indication: link is %s\r\n",
                    (TrcvMode == ETH_MODE_DOWN) ? "down" : "active",
           (BspEthIfTrcvState == ETHTRCV_LINK_STATE_DOWN) ? "down" : "up");
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
    BufReq_ReturnType BufReq;
    Eth_BufIdxType BufIdx;
    uint8 *BufPtr;
    uint8 *pData;
    uint16 LenByte;
    uint16 i;
    uint32 pseudosum;
    uint32 ipv4addr;

    wpos = BspEthIfBufWpos;
    while (BspEthIfBufRpos != wpos)
    {
        LenByte = BspEthIfBuffers[BspEthIfBufRpos].Length;

        BufReq = Eth_ProvideTxBuffer(BSP_ETH_INSTANCE, TEST_CHANNEL0_PRIORITY, &BufIdx, &BufPtr, &LenByte);
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
            *(uint16 *)&BufPtr[10U] = Bsp_EthIf_Checksum(0U, BufPtr, 20U);

            *(uint16 *)&BufPtr[22U] = *(uint16 *)&BufPtr[20U];
            BufPtr[20U] = BSP_ETHIF_TEST_PORT >> 8U;
            BufPtr[21U] = BSP_ETHIF_TEST_PORT & 0xFF;
            /* Calculate UDP checksum */
            BufPtr[26U] = 0U;
            BufPtr[27U] = 0U;
            pseudosum = Bsp_EthIf_Pseudo_Checksum(BSP_ETHIF_LOCAL_IPV4ADDR, ipv4addr, (uint16)(LenByte - 20U));
            *(uint16 *)&BufPtr[26U] = Bsp_EthIf_Checksum(pseudosum, &BufPtr[20U], LenByte - 20U);

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
            Eth_EnableEgressTimeStamp(BSP_ETH_INSTANCE, BufIdx);
#endif

            Eth_Transmit(BSP_ETH_INSTANCE, BufIdx, 0x0800U, TRUE, LenByte, BspEthIfBuffers[BspEthIfBufRpos].mac);

            BspEthIfBufRpos = ((BspEthIfBufRpos + 1U) < BSP_ETHIF_BUFFER_COUNT) ? (uint8)(BspEthIfBufRpos + 1U) : (uint8)0U;
        }
    }
}

void Bsp_EthIf_Send_Multicast_Packet(void)
{
    uint8 dstmac[6] = {0x01, 0x00, 0x5E, 0x45, 0x10, 0x21};
    BufReq_ReturnType BufReq;
    Eth_BufIdxType BufIdx;
    Eth_TimeStampQualType timeQual;
    uint8 *BufPtr;
    uint16 LenByte;
    uint16 i;

    LenByte = sizeof(BspEthPeriodMulticastPacket);
    BufReq = Eth_ProvideTxBuffer(BSP_ETH_INSTANCE, TEST_CHANNEL1_PRIORITY, &BufIdx, &BufPtr, &LenByte);
    if (BUFREQ_OK == BufReq)
    {
        LenByte = sizeof(BspEthPeriodMulticastPacket);
        for (i = 0U; i < LenByte; ++i)
        {
            BufPtr[i] = BspEthPeriodMulticastPacket[i];
        }

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
        Eth_GetCurrentTime(BSP_ETH_INSTANCE, &timeQual, &MultiCastSendTime);
        Eth_EnableEgressTimeStamp(BSP_ETH_INSTANCE, BufIdx);
#endif

        /* Force the launch time at the begining of each milliseconds */
#if ((STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 1U))
        Eth_TBSLaunchTimeType LaunchTime = {(boolean)TRUE, 0U, 0U, 0U};
        LaunchTime.LaunchtimeNanoSec = MultiCastSendTime.nanoseconds + NANOSEC_PER_MILLISEC - (MultiCastSendTime.nanoseconds % NANOSEC_PER_MILLISEC);
        LaunchTime.LaunchtimeSec = MultiCastSendTime.seconds;
        if (LaunchTime.LaunchtimeNanoSec >= NANOSEC_PER_SECOND)
        {
            LaunchTime.LaunchtimeNanoSec -= NANOSEC_PER_SECOND;
            LaunchTime.LaunchtimeSec += 1U;
        }
        Eth_TBSSetLaunchTime(BSP_ETH_INSTANCE, BufIdx, &LaunchTime);
#endif

#if ((STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT) && (TEST_TIME_SENSITIVE_NETWORK == 3U))
        Eth_TBSLaunchTimeType LaunchTime;
        LaunchTime.LaunchtimeValid = (boolean)TRUE;
        LaunchTime.LaunchtimeSec = 0U;
        LaunchTime.LaunchtimeNanoSec = TEST_CHANNEL1_TBSTIME_NS;
        if ((MultiCastSendTime.nanoseconds % TEST_TAS_CYCLETIME_NS) < TEST_CHANNEL1_GCLTIME_NS)
        {
            LaunchTime.GCLSlotOffset = 0U;
        }
        else
        {
            LaunchTime.GCLSlotOffset = 1U;
        }
        Eth_TBSSetLaunchTime(BSP_ETH_INSTANCE, BufIdx, &LaunchTime);
#endif

        Eth_Transmit(BSP_ETH_INSTANCE, BufIdx, 0x0800U, TRUE, LenByte, dstmac);
    }
}

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

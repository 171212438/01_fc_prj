#include "Bsp_Can.h"
#include "SchM_Can.h"
#include "Bsp_InterruptManager.h"

/************ Local Variables *******************/

/************ Interrupt Map *******************/
extern ISR(Can_IsrCAN0_All);
void CAN0_IRQHandler(void)
{
    Can_IsrCAN0_All();
}

extern ISR(Can_IsrErrorCAN0_All);
void CAN0_Error_IRQHandler(void)
{
    Can_IsrErrorCAN0_All();
}

extern ISR(Can_IsrCAN1_All);
void CAN1_IRQHandler(void)
{
    Can_IsrCAN1_All();
}

extern ISR(Can_IsrErrorCAN1_All);
void CAN1_Error_IRQHandler(void)
{
    Can_IsrErrorCAN1_All();
}

extern ISR(Can_IsrCAN2_All);
void CAN2_IRQHandler(void)
{
    Can_IsrCAN2_All();
}

extern ISR(Can_IsrErrorCAN2_All);
void CAN2_Error_IRQHandler(void)
{
    Can_IsrErrorCAN2_All();
}

extern ISR(Can_IsrCAN3_All);
void CAN3_IRQHandler(void)
{
    Can_IsrCAN3_All();
}

extern ISR(Can_IsrErrorCAN3_All);
void CAN3_Error_IRQHandler(void)
{
    Can_IsrErrorCAN3_All();
}

extern ISR(Can_IsrCAN4_All);
void CAN4_IRQHandler(void)
{
    Can_IsrCAN4_All();
}

extern ISR(Can_IsrErrorCAN4_All);
void CAN4_Error_IRQHandler(void)
{
    Can_IsrErrorCAN4_All();
}

extern ISR(Can_IsrCAN5_All);
void CAN5_IRQHandler(void)
{
    Can_IsrCAN5_All();
}

extern ISR(Can_IsrErrorCAN5_All);
void CAN5_Error_IRQHandler(void)
{
    Can_IsrErrorCAN5_All();
}

extern ISR(Can_IsrCAN6_All);
void CAN6_IRQHandler(void)
{
    Can_IsrCAN6_All();
}

extern ISR(Can_IsrErrorCAN6_All);
void CAN6_Error_IRQHandler(void)
{
    Can_IsrErrorCAN6_All();
}

extern ISR(Can_IsrCAN7_All);
void CAN7_IRQHandler(void)
{
    Can_IsrCAN7_All();
}

extern ISR(Can_IsrErrorCAN7_All);
void CAN7_Error_IRQHandler(void)
{
    Can_IsrErrorCAN7_All();
}

/************ Callback functions *******************/

void CanIf_ControllerModeIndication(uint8 ControllerId, Can_ControllerStateType ControllerMode)
{
    (void)ControllerId;
    (void)ControllerMode;
}

void CanIf_RxIndication(P2CONST(Can_HwType, AUTOMATIC, CANIF_APPL_DATA) Mailbox,
                        P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_DATA) PduInfoPtr)
{
    Can_PduType tPduInfo;
    tPduInfo.id          = Mailbox->CanId + 1U;
    tPduInfo.swPduHandle = 0U;
    tPduInfo.length      = (uint8)PduInfoPtr->SduLength;
    tPduInfo.sdu         = PduInfoPtr->SduDataPtr;

    if ((0 == Cpm_HWA_GetCoreId()))
    {
        Can_Write(CanController1_Transmit0, &tPduInfo);
    }

    if ((1 == Cpm_HWA_GetCoreId()) && (1U == Mailbox->Hoh))
    {
        Can_Write(CanController5_Transmit0, &tPduInfo);
    }

    if ((2 == Cpm_HWA_GetCoreId()) && (1U == Mailbox->Hoh))
    {
        //        Can_Write(CanController8_Transmit0,&tPduInfo);
    }
}

void CanIf_TxConfirmation(PduIdType CanTxPduId)
{
    (void)CanTxPduId;
}

void CanIf_ControllerBusOff(uint8 ControllerId)
{

    (void)ControllerId;
}
/************ Global functions *******************/
void Bsp_Can_Init(void)
{
    if (0 == Cpm_HWA_GetCoreId())
    {
        BSP_SetInterrupt(0, FlexCAN0_IRQn);
        BSP_SetInterrupt(0, FlexCAN1_IRQn);
        BSP_SetInterrupt(0, FlexCAN2_IRQn);
        BSP_SetInterrupt(0, FlexCAN3_IRQn);
        BSP_SetInterrupt(1, FlexCAN4_IRQn);
        BSP_SetInterrupt(1, FlexCAN5_IRQn);
        BSP_SetInterrupt(1, FlexCAN6_IRQn);
        BSP_SetInterrupt(2, FlexCAN7_IRQn);
        BSP_SetInterrupt(2, FlexCAN8_IRQn);
        BSP_SetInterrupt(2, FlexCAN9_IRQn);

        Can_Init(&Can_Config);
        Can_SetControllerMode(CanConf_CanController_CanController_0, CAN_CS_STARTED);
        Can_SetControllerMode(CanConf_CanController_CanController_1, CAN_CS_STARTED);
        Can_SetControllerMode(CanConf_CanController_CanController_2, CAN_CS_STARTED);
        Can_SetControllerMode(CanConf_CanController_CanController_3, CAN_CS_STARTED);

        IntMgr_SetPriority(FlexCAN0_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN0_IRQn);
        IntMgr_SetPriority(FlexCAN1_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN1_IRQn);
        IntMgr_SetPriority(FlexCAN2_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN2_IRQn);
        IntMgr_SetPriority(FlexCAN3_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN3_IRQn);
    }
    if (1 == Cpm_HWA_GetCoreId())
    {
        Can_Init(&Can_Config);
        Can_SetControllerMode(CanConf_CanController_CanController_4, CAN_CS_STARTED);
        Can_SetControllerMode(CanConf_CanController_CanController_5, CAN_CS_STARTED);
        Can_SetControllerMode(CanConf_CanController_CanController_6, CAN_CS_STARTED);
        IntMgr_SetPriority(FlexCAN4_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN4_IRQn);
        IntMgr_SetPriority(FlexCAN5_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN5_IRQn);
        IntMgr_SetPriority(FlexCAN6_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN6_IRQn);
    }
    if (2 == Cpm_HWA_GetCoreId())
    {
        Can_Init(&Can_Config);
        Can_SetControllerMode(CanConf_CanController_CanController_7, CAN_CS_STARTED);
        //        Can_SetControllerMode(CanConf_CanController_CanController_8,CAN_CS_STARTED);
        //        Can_SetControllerMode(CanConf_CanController_CanController_9,CAN_CS_STARTED);
        IntMgr_SetPriority(FlexCAN7_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN7_IRQn);
        IntMgr_SetPriority(FlexCAN8_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN8_IRQn);
        IntMgr_SetPriority(FlexCAN9_IRQn, 5);
        IntMgr_EnableInterrupt(FlexCAN9_IRQn);
    }
}

void Bsp_Can_1s_Task_Event(void)
{
    if (2 == Cpm_HWA_GetCoreId())
    {
        Can_PduType tPduInfo;
        uint8       aData[8] = { 0xaaU, 0x55U, 0x55U, 0xaaU, 0xaaU, 0x55U, 0x55U, 0xaaU };
        tPduInfo.swPduHandle = 0U;
        tPduInfo.length      = 8U;
        tPduInfo.sdu         = aData;
        tPduInfo.id          = 0x677U;
        Can_Write(CanController7_Transmit0, &tPduInfo);
        tPduInfo.id = 0x688U;
        //        Can_Write(CanController8_Transmit0,&tPduInfo);
    }
}

void Bsp_Can_100ms_Task_Event(void)
{

    if (1 == Cpm_HWA_GetCoreId())
    {
        Can_PduType tPduInfo;
        uint8       aData[8] = { 0xaaU, 0x55U, 0x55U, 0xaaU, 0xaaU, 0x55U, 0x55U, 0xaaU };
        tPduInfo.swPduHandle = 0U;
        tPduInfo.length      = 8U;
        tPduInfo.sdu         = aData;
        tPduInfo.id          = 0x555U;
        Can_Write(CanController5_Transmit0, &tPduInfo);
        tPduInfo.id = 0x666U;
        Can_Write(CanController6_Transmit0, &tPduInfo);
    }
}

void Bsp_Can_5ms_Task_Event(void)
{
    Std_ReturnType eRet;
    if (0 == Cpm_HWA_GetCoreId())
    {
        Can_PduType tPduInfo;
        uint8       aData[64] = { 0x01U, 0x02U, 0x05U, 0x04U, 0x03U, 0x06U, 0x07U, 0x08U };
        tPduInfo.swPduHandle  = 0U;
        tPduInfo.length       = 64U;
        tPduInfo.sdu          = aData;

        tPduInfo.id = 0x111 | 0x40000000;
        eRet        = Can_Write(CanController1_Transmit0, &tPduInfo);
        tPduInfo.id = 0x222;
        eRet        = Can_Write(CanController2_Transmit0, &tPduInfo);

        // GPIOB->PTOR = 0x400;
        // GPIOB->PTOR = 0x400;
        //		BspCan1Write(g_kaCanIdList[g_u32CanIdIndex]);
        //		g_u32CanIdIndex++;
        //
        //		GPIOB->PTOR = 0x400;
        //		BspCan1Write(g_kaCanIdList[g_u32CanIdIndex]);
        //		g_u32CanIdIndex++;

        //		GPIOB->PTOR = 0x400;
        //		BspCan1Write(g_kaCanIdList[g_u32CanIdIndex]);
        //		g_u32CanIdIndex++;
    }

    Can_MainFunction_Read();
    Can_MainFunction_Write();
    Can_MainFunction_Mode();
    Can_MainFunction_BusOff();
    Can_MainFunction_Error();
    (void)eRet;
}

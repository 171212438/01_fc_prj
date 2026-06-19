#include "Bsp_Msc.h"
#include "CDD_Msc.h"
#include "Pwm_Cfg.h"
#include "Pwm.h"
#include "Scm_Reg.h"
#include "IRQRouter.h"

#define REG_DIAREG6 0x04U
#define CMD_RD_DATA 0x13U

#define REG_CONREG1     0x80U
#define REG_OUTREG_EVEN 0x02U
#define REG_OUTREG_ODD  0x01U
#define CMD_RD_CONFIG   0x10U
#define CMD_WR_CONFIG1  0x01U

#define CMD_WR_RESET          0x08U
#define CMD_WR_START          0x0BU
#define POWER_STAGES_PATTERN1 0xAAAAU
#define POWER_STAGES_PATTERN2 0x5555U

#define MSCInstance1          0u

typedef enum
{
    MSC_READ_SM_NOT_START,
    MSC_READ_SM_READ_NONE,
    MSC_READ_SM_READ_CONFIG_OUTPUT_EVEN,
    MSC_READ_SM_READ_CONFIG_OUTPUT_ODD,
    MSC_READ_SM_READ_DATA6,
} BSP_MSC_ReadSMType;

/************ Local Variables *******************/

uint32             u32MscData;
Msc_StatusType     eMscTxStatus           = MSC_TX_OK;
Msc_StatusType     eMscRxStatus           = MSC_RX_IDLE;
uint16            *pRxdataPtr             = NULL_PTR;
uint8              RxFlag                 = FALSE;
uint32             Rxdata                 = 0U;
uint8              RxdataReady            = FALSE;
uint32             u32OutputStagesPattern = 0;
BSP_MSC_ReadSMType eBsp_Msc_ReadSM        = MSC_READ_SM_NOT_START;

#define PWM_MAX_DUTY 0x8000U
static uint16 s_u16Rgb1DutyVal    = 0U;
static uint16 s_u16Rgb1Step       = PWM_MAX_DUTY / 50U;
static uint8  s_u8BreathDirection = 0U;

/************ Interrupt Map *******************/

#ifdef MSC_0_ISR_USED
extern void Msc_Isr_MSC_0(void);
void        MSC0_IRQHandler(void)
{
    Msc_Isr_MSC_0();
}
#endif

#ifdef MSC_1_ISR_USED
extern void Msc_Isr_MSC_1(void);
void        MSC1_IRQHandler(void)
{
    Msc_Isr_MSC_1();
}
#endif

/************ Callback functions *******************/
/************ Global functions *******************/

void Msc_ReceiveNotification0(void)
{}

void Msc_ReceiveNotification1(void)
{
    RxFlag = TRUE;
}

void Bsp_Msc_SendStart(void)
{
    uint32   u32Temp = 0;
    u32Temp          = CMD_WR_START;
    Msc_SendCommandFrame(MSCInstance1, &u32Temp, 16U);
}

void Bsp_Msc_ReadConfigOutputEven(void)
{
    uint32   u32Temp = 0;
    u32Temp          = CMD_RD_CONFIG | (REG_OUTREG_EVEN << 5);
    Msc_SendCommandFrame(MSCInstance1, &u32Temp, 16U);
}

void Bsp_Msc_ReadConfigOutputOdd(void)
{
    uint32   u32Temp = 0;
    u32Temp          = CMD_RD_CONFIG | (REG_OUTREG_ODD << 5);
    Msc_SendCommandFrame(MSCInstance1, &u32Temp, 16U);
}

void Bsp_Msc_ReadData6(void)
{
    uint32   u32Temp = 0;
    u32Temp          = CMD_RD_DATA | (REG_DIAREG6 << 5);
    Msc_SendCommandFrame(MSCInstance1, &u32Temp, 16U);
}

void Bsp_Msc_Init(void)
{
    uint32 CoreId = MSC_GetCoreID();
    Msc_Init(NULL_PTR);

#if (MSC_MULTICORE_SUPPORT == STD_ON)
    if(CoreId==0U)
    {
        IRQRouter_SetNVIC(IRQROUTER_CPU0_CPU1_CPU2,MSC0_IRQn,FALSE);
        IRQRouter_SetNVIC(IRQROUTER_CPU0, MSC0_IRQn, TRUE);
        SCM->MSC0_ROUTING = 0x22220000U;
    }
    else if (CoreId==1U)
    {
    	IntMgr_SetPriority(MSC0_IRQn, 4);
    	IntMgr_EnableInterrupt(MSC0_IRQn);
    }
#else
    IntMgr_SetPriority(MSC0_IRQn, 4);
    IntMgr_EnableInterrupt(MSC0_IRQn);
    SCM->MSC0_ROUTING = 0x22220000U;
#endif

    u32MscData = POWER_STAGES_PATTERN1;
    Msc_SetDataFrame(MSCInstance1, &u32MscData);

    Msc_StartChannel(MSCInstance1);

}

void Bsp_Msc_Set_Pwm_20ms_Task_Event(void)
{
    Pwm_SetDutyCycle(Msc_Pwm_0, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_1, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_2, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_3, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_4, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_5, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_6, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(Msc_Pwm_7, s_u16Rgb1DutyVal);
    if (0U == s_u8BreathDirection)
    {
        s_u16Rgb1DutyVal = (uint16)(s_u16Rgb1DutyVal + s_u16Rgb1Step);
        if (s_u16Rgb1DutyVal > PWM_MAX_DUTY)
        {
            s_u16Rgb1DutyVal    = PWM_MAX_DUTY;
            s_u8BreathDirection = 1U;
        }
    }
    else
    {
        if (s_u16Rgb1DutyVal > s_u16Rgb1Step)
        {
            s_u16Rgb1DutyVal = (uint16)(s_u16Rgb1DutyVal - s_u16Rgb1Step);
        }
        else
        {
            s_u16Rgb1DutyVal    = 0U;
            s_u8BreathDirection = 0U;
        }
    }
}

void Bsp_Msc_20ms_Task_Event(void)
{
    Bsp_Msc_Set_Pwm_20ms_Task_Event();
}

void Bsp_Msc_5ms_Task_Event(void)
{
    eMscTxStatus = Msc_GetTxStatus(MSCInstance1);
    if (RxFlag)
    {
        RxFlag       = FALSE;
        pRxdataPtr   = NULL_PTR;
        eMscRxStatus = Msc_GetRxStatus(MSCInstance1, &pRxdataPtr);
        if (pRxdataPtr)
        {
            RxdataReady = TRUE;
            Rxdata      = *pRxdataPtr;
        }
    }
}

void Bsp_Msc_200ms_Task_Event(void)
{
    if (eMscTxStatus != MSC_TX_OK)
    {
        return;
    }

    switch (eBsp_Msc_ReadSM)
    {
        case MSC_READ_SM_NOT_START:
            if (RxdataReady)
            {
                RxdataReady = FALSE;
                DEBUG_INFO("read dia data6 %x\r\n", Rxdata);
                if (Rxdata & 0x1U)
                {
                    DEBUG_INFO("Need Clear Output STB\r\n");
                    Bsp_Msc_SendStart();
                }
                else
                {
                    DEBUG_INFO("No Need Clear Output STB\r\n");
                    eBsp_Msc_ReadSM = MSC_READ_SM_READ_NONE;
                }
            }
            else
            {
                Bsp_Msc_ReadData6();
            }
            break;

        case MSC_READ_SM_READ_NONE:
            eBsp_Msc_ReadSM = MSC_READ_SM_READ_DATA6;
            break;
        case MSC_READ_SM_READ_DATA6:
            if (RxdataReady)
            {
                RxdataReady = FALSE;
                DEBUG_INFO("read data6 %lx\r\n", Rxdata);
                Bsp_Msc_ReadConfigOutputEven();
                eBsp_Msc_ReadSM = MSC_READ_SM_READ_CONFIG_OUTPUT_EVEN;
            }
            else
            {
                Bsp_Msc_ReadData6();
            }
            break;
        case MSC_READ_SM_READ_CONFIG_OUTPUT_EVEN:
            if (RxdataReady)
            {
                RxdataReady = FALSE;
                DEBUG_INFO("read even %x\r\n", Rxdata);
                Bsp_Msc_ReadConfigOutputOdd();
                eBsp_Msc_ReadSM = MSC_READ_SM_READ_CONFIG_OUTPUT_ODD;
            }
            break;
        case MSC_READ_SM_READ_CONFIG_OUTPUT_ODD:
            if (RxdataReady)
            {
                RxdataReady = FALSE;
                DEBUG_INFO("read odd %x\r\n", Rxdata);
                Bsp_Msc_ReadConfigOutputEven();
                eBsp_Msc_ReadSM = MSC_READ_SM_READ_CONFIG_OUTPUT_EVEN;
            }
            break;
        default:
            break;
    }
}

void Bsp_Msc_100ms_Task_Event(void)
{
    static uint8 u8Counter = 0U;

    if (u8Counter == 2U)
    {
        u8Counter = 0U;
        Bsp_Msc_200ms_Task_Event();
    }
    else
    {
        u8Counter++;
    }
}

void Bsp_Msc_1s_Task_Event(void)
{
    if (u32OutputStagesPattern == POWER_STAGES_PATTERN1)
    {
        u32OutputStagesPattern = POWER_STAGES_PATTERN2;
    }
    else
    {
        u32OutputStagesPattern = POWER_STAGES_PATTERN1;
    }
    /* Invert data frame bits. */
    Msc_SetDataFrame(MSCInstance1, &u32OutputStagesPattern);
}

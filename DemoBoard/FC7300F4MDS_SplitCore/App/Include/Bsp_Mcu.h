#ifndef _BSP_MCU_H_
#define _BSP_MCU_H_

#include "Bsp_McalHeader.h"

#define  MCU_LOW_POWER_MODE_TEST   STD_OFF

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
    #define PORTA_BASE_ADDR 0x40047000
    #define PORTB_BASE_ADDR 0x40048000
    #define PORTC_BASE_ADDR 0x40049000
    #define PORTD_BASE_ADDR 0x4004A000
    #define PORTE_BASE_ADDR 0x4004B000
    #define PORTF_BASE_ADDR 0x4004C000
    #define PORTG_BASE_ADDR 0x4004D000
    #define PORTH_BASE_ADDR 0x4004E000
    #define PORTI_BASE_ADDR 0x4004F000

    #define PTA11              11   //PA11

    #define OSC32K_XTAL        14  //PTE14
    #define OSC32K_EXTAL       3   //PTE3

    #define XTAL               6   //PTB6
    #define EXTAL              7   //PTB7

    #define JTAG_TDO           10  //PTA10
    #define JTAG_TMS_SWD_DIO   4   //PTA4

    #define JTAG_TDI           5   //PTC5
    #define JTAG_TCLK_SWD_CLK  4   //PTC4

    #define RGM_C0_SRS_ADDR    0x40046108
    #define RGM_C1_SRS_ADDR    0x40046208

    #define SCM_CCM1_STATUS    0x40072084
    #define SCM_CCM_DEEPSLEEP_MASK  0x2
    #define SCM_CCM_DEEPSLEEP_SHIFT 1
    #define POLLING_TIMEOUT   65535U

typedef enum
{
	BSP_TX_STANDBY_CMD = 0,
	BSP_CORE1_ENTRY,
	BSP_CORE0_ENTRY,
	BSP_DEFAULT_CMD
} Bsp_EntryLowPowerCmdType;



#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

/************ Global functions *******************/
void Bsp_Mcu_Init(void);

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
void Bsp_Mcu_LowPowerEntry_Task(Bsp_EntryLowPowerCmdType* pCmd);
void Bsp_Mcu_ResetReason_Print(void);
#endif /*(MCU_LOW_POWER_MODE_TEST == STD_ON)*/

#endif /* _BSP_MCU_H_ */

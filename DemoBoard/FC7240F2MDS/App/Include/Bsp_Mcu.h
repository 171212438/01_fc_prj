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
    
    #define PTA9               9   //PTA9

    #define OSC32K_XTAL        14  //PTE14
    #define OSC32K_EXTAL       3   //PTE3

    #define XTAL               6   //PTB6
    #define EXTAL              7   //PTB7

    #define JTAG_TDO           10  //PTA10
    #define JTAG_TMS_SWD_DIO   4   //PTA4

    #define JTAG_TDI           5   //PTC5
    #define JTAG_TCLK_SWD_CLK  4   //PTC4

#endif


/************ Global functions *******************/
void Bsp_Mcu_Init(void);

#if (MCU_LOW_POWER_MODE_TEST == STD_ON)
void Bsp_Mcu_LowPowerEntry(void);
void Bsp_Mcu_ResetReason_Print(void);
#endif

#endif /* _BSP_MCU_H_ */

#ifndef _BSP_MCALHEADER_H_
#define _BSP_MCALHEADER_H_

#include "UART.h"
#include "Interrupt_manager.h"
#include "Mcu.h"
#include "Systick.h"
#include "Port.h"
#include "Dio.h"
#include "Eth.h"
#include "EthTrcv.h"
#include "Pwm.h"
#include "Pfls.h"
#include "Gpt.h"
#include "Wdg_174_Instance0.h"
#include "Wdg_174_Instance1.h"
#include "Wdg_174_Instance2.h"
#include "Adc.h"
#include "Lin.h"
#include "Spi.h"
#include "Can.h"
#include "CanIf_Types.h"
#include "Icu.h"
#include "Fls.h"
#include "Fee.h"
#include "Crypto.h"
#include "CryIf.h"
#include "CDD_Ospi.h"
#include "CDD_I2c.h"
#include "CDD_TrgSel.h"
#include "CDD_Dma.h"
#include "CDD_Mb.h"
#include "CDD_Sent.h"
#include "Ocu.h"
#include "Crc.h"
#include "CDD_Uart.h"

#if (defined RTT_PRINTF)
#include "SEGGER_RTT.h"
#endif

#if (defined RTT_PRINTF)
    #define DEBUG_INFO(str, ...) SEGGER_RTT_printf(Cpm_HWA_GetCoreId(), str, ##__VA_ARGS__)
#elif (defined UART_PRINTF)
    #define DEBUG_INFO(str,...) FCUART_Printf(0U,str, ##__VA_ARGS__)
#else
    #define DEBUG_INFO(str,...)
#endif

#endif /* _BSP_MCALHEADER_H_ */

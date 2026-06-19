#ifndef INCLUDE_BSP_UART_H_
#define INCLUDE_BSP_UART_H_

#include "string.h"
#include "stdio.h"
#include "stdarg.h"
#include "stdint.h"
#include "Std_Types.h"
#include "CDD_Uart.h"

/********* Local typedef ************/
typedef enum
{
    UART_PRINT_RADIX_BIN = 2U,
    UART_PRINT_RADIX_OCT = 8U,
    UART_PRINT_RADIX_DEC = 10U,
    UART_PRINT_RADIX_HEX = 16U
} UART_PrintIntType;

/********* Macro ************/
#define ESCAPE_CHARACTER   (char)0x5c
#define ENTER              (uint8)0x0d
#define NEW_LINE           (uint8)0x0a
#define SPACE              (uint8)0x20
#define FLOAT_ZERO         0.00000001

Std_ReturnType FCUART_Printf(uint8 Channel, char *fmt, ...);

#endif /* INCLUDE_BSP_UART_H_ */

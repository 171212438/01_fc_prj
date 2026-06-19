#include "UART.h"

/* ################################################################################## */
/* ################################ Local Functions ################################# */
static uint8 FCUART_Int2Char(int i32Value, char *pOutStr, UART_PrintIntType eRadix, boolean bHexUpper);

static uint8 FCUART_Float2Char(double Value, char *pOutStr, uint32 u32Eps);

/* ################################################################################## */
/* ################################# Global Functions ############################### */

/**
 * @brief This Function is used to print ASCII char from UART
 *
 * @param u8UartIndex is UART instance, 0U..(FCUART_INSTANCE_COUNT-1U)
 * @param fmt is char format
 * @return FCUART_ERROR_OK is ok, others are not ok
 */
Std_ReturnType FCUART_Printf(uint8 Channel, char *fmt, ...)
{
    Std_ReturnType tRetVal;
    const char    *pStr;
    int            i32Temp;
    unsigned char  TxData;
    uint8          u8Number;
    uint8          u8LenthNumber = 4U;
    char           TempBuffer[16];
    va_list        ap;

    va_start(ap, fmt);

    while (*fmt != (char)0)
    {
        /* Escape character */
        if ((*fmt) == ESCAPE_CHARACTER)
        {
            switch (*(++fmt))
            {
                case 'r':
                {
                    TxData  = ENTER;
                    tRetVal = Uart_SyncSend(Channel, &TxData, 1U, 0xFFFFFFFFU);
                    fmt++;
                }
                break;

                case 'n':
                {
                    TxData  = NEW_LINE;
                    tRetVal = Uart_SyncSend(Channel, &TxData, 1U, 0xFFFFFFFFU);
                    fmt++;
                }
                break;

                default:
                    fmt++;
                    break;
            }
        }
        else if ((*fmt) == (char)'%')
        {
            switch (*(++fmt))
            {
                case 's':
                {
                    pStr = va_arg(ap, const char *);
                    for (; *pStr; pStr++)
                    {
                        tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                    }
                    fmt++;
                }
                break;

                case 'd':
                {
                    i32Temp = va_arg(ap, int);
                    if (0U == FCUART_Int2Char(i32Temp, TempBuffer, UART_PRINT_RADIX_DEC, FALSE))
                    {
                        for (pStr = TempBuffer; *pStr; pStr++)
                        {
                            tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                        }
                    }
                    fmt++;
                }
                break;

                case 'x':
                {
                    i32Temp = va_arg(ap, int);
                    if (0U == FCUART_Int2Char(i32Temp, TempBuffer, UART_PRINT_RADIX_HEX, FALSE))
                    {
                        for (pStr = TempBuffer; *pStr; pStr++)
                        {
                            tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                        }
                    }
                    fmt++;
                }
                break;

                case 'X':
                {
                    i32Temp = va_arg(ap, int);
                    if (0U == FCUART_Int2Char(i32Temp, TempBuffer, UART_PRINT_RADIX_HEX, TRUE))
                    {
                        for (pStr = TempBuffer; *pStr; pStr++)
                        {
                            tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                        }
                    }
                    fmt++;
                }
                break;

                case '.':
                {
                    u8Number = (uint8)(*(++fmt) - '0');
                    if ((*(++fmt)) == 'f')
                    {
                        double num = va_arg(ap, double);
                        if (0U == FCUART_Float2Char(num, TempBuffer, u8Number))
                        {
                            for (pStr = TempBuffer; *pStr; pStr++)
                            {
                                tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                            }
                        }
                        fmt++;
                    }
                }
                break;

                case 'f':
                {
                    double num = va_arg(ap, double);
                    if (0U == FCUART_Float2Char(num, TempBuffer, u8LenthNumber))
                    {
                        for (pStr = TempBuffer; *pStr; pStr++)
                        {
                            tRetVal = Uart_SyncSend(Channel, (const uint8 *)pStr, 1U, 0xFFFFFFFFU);
                        }
                    }
                    fmt++;
                }
                break;

                default:
                    fmt++;
                    break;
            }
        }
        else
        {
            tRetVal = Uart_SyncSend(Channel, (const uint8 *)fmt, 1U, 0xFFFFFFFFU);

            if (tRetVal != E_OK)
            {
                break;
            }

            fmt++;
        }
    }

    va_end(ap);

    return tRetVal;
}

/**
 * @brief  Convert integer to char
 *
 * @param  i32Value
 * @param  pOutStr
 * @param  eRadix
 * @return 0 is ok
 */
static uint8 FCUART_Int2Char(int i32Value, char *pOutStr, UART_PrintIntType eRadix, boolean bHexUpper)
{
    uint8  u8Retval;
    char   aCharListUpper[] = "0123456789ABCDEF";
    char   aCharListLower[] = "0123456789abcdef";
    char   aNumList[]       = "0123456789";
    char  *pCharList;
    uint32 u32Temp;
    uint8  u8Index      = 0U;
    uint8  u8ValueStart = 0U;
    char   Temp         = 0;
    uint32 j;

    if (NULL == pOutStr)
    {
        u8Retval = 1U;
    }
    else
    {
        u8Retval = 0U;
        if ((UART_PRINT_RADIX_DEC == eRadix) && (i32Value < 0))
        {
            /* Decimal and negative */
            u32Temp            = (uint32)(0 - i32Value);
            pOutStr[u8Index++] = '-';
            u8ValueStart       = 1U;
            pCharList          = aNumList;
        }
        else
        {
            if (TRUE == bHexUpper)
            {
                pCharList = aCharListUpper;
            }
            else
            {
                pCharList = aCharListLower;
            }
            u32Temp = (uint32)i32Value;
        }

        /* Data is converted to a string and stored in reverse order */
        do
        {
            pOutStr[u8Index++] = pCharList[u32Temp % (uint8)eRadix];
            u32Temp /= (uint8)eRadix;
        }
        while (u32Temp);

        pOutStr[u8Index] = '\0';

        /* Convert the string with reverse order to positive */
        for (j = u8ValueStart; j < (u8Index + u8ValueStart) / 2U; j++)
        {
            Temp                                     = pOutStr[j];
            pOutStr[j]                               = pOutStr[u8Index - j - 1U + u8ValueStart];
            pOutStr[u8Index - j - 1U + u8ValueStart] = Temp;
        }
    }
    return u8Retval;
}

/**
 * @brief  Convert float to char
 *
 * @param  Value
 * @param  pOutStr
 * @param  U32Eps
 * @return 0 is ok
 */
static uint8 FCUART_Float2Char(double Value, char *pOutStr, uint32 u32Eps)
{
    uint32 u32Integer;
    double Decimal;
    char   aCharList[]  = "0123456789";
    uint8  u8ValueStart = 0U;
    uint32 u32TempCnt   = 1U;
    char   Temp         = 0;
    double TempFactor   = 0.1;
    uint8  u8Index      = 0U;
    uint32 u32TempDecimal;
    uint8  u8Retval;
    uint32 j;

    if (NULL == pOutStr)
    {
        u8Retval = 1U;
    }
    else
    {
        u8Retval = 0U;
        /* Extract integer and decimal from the input number */
        if (Value < FLOAT_ZERO)
        {
            Decimal            = (double)((sint32)Value - Value);
            u32Integer         = (uint32)(0.0 - Value);
            pOutStr[u8Index++] = '-';
            u8ValueStart       = 1U;
        }
        else
        {
            u32Integer = (uint32)Value;
            Decimal    = (double)(Value - u32Integer);
        }

        /* The integer part of the data is converted into a string and stored in reverse order */
        do
        {
            pOutStr[u8Index++] = aCharList[u32Integer % 10U];
            u32Integer /= 10U;
        }
        while (0U != u32Integer);

        pOutStr[u8Index] = '\0';

        /* Convert the string with reverse order to positive */
        for (j = u8ValueStart; j < (u8Index + u8ValueStart) / 2U; j++)
        {
            Temp                                     = pOutStr[j];
            pOutStr[j]                               = pOutStr[u8Index - j - 1U + u8ValueStart];
            pOutStr[u8Index - j - 1U + u8ValueStart] = Temp;
        }

        /* Accuracy problem, preventing input 1.2 and output 1.19 */
        for (j = 0U; j <= u32Eps; j++)
        {
            TempFactor *= 0.1;
        }
        Decimal += TempFactor;

        for (j = 0; j < u32Eps; j++)
        {
            Decimal *= (double)10.0;
            u32TempCnt *= 10U;
        }

        u32TempDecimal     = (uint32)Decimal;
        pOutStr[u8Index++] = '.';
        for (j = 0; j < u32Eps; j++)
        {
            u32TempCnt /= 10U;
            if (0U != u32TempCnt)
            {
                pOutStr[u8Index++] = u32TempDecimal / u32TempCnt + '0';
                u32TempDecimal %= u32TempCnt;
            }
        }
        pOutStr[u8Index] = '\0';
    }
    return u8Retval;
}

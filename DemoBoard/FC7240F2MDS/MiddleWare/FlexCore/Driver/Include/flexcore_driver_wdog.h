/**
 * @file flexcore_driver_wdog.h
 * @author Flagchip
 * @brief flexcore WDOG driver type definition and API
 * @version 0.1.0
 * @date 2023-12-28
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */

/********************************************************************************
*   Revision History:
*
*   Version     Date          Initials       CR#          Descriptions
*   ---------   ----------    ------------   ----------   ---------------
*   0.1.0       2023-12-28    Flagchip099    N/A          Initial version
********************************************************************************/

#ifndef _FLEXCORE_DRIVER_WDOG_H_
#define _FLEXCORE_DRIVER_WDOG_H_
#include "flexcore_HwA_wdog.h"

/**
 * @addtogroup driver_wdog
 * @{
 */

/** @brief  WDOG clock instance declaration. */
typedef enum{
    WDOG_INSTANCE_0 = 0U,  /*!< ADC instance 0 is selected */
} WDOG_InstanceType;

/** @brief  WDOG clock source select, mapping with WDOG_CS[CLK_SEL] bit filed definition. */
typedef enum
{
    WDOG_FCG_CLK               = 0x00U, /*  */
    WDOG_LPO_CLK               = 0x01U, /* 128k */
    WDOG_INT_CLK               = 0x02U, /*  */
    WDOG_EXT_CLK               = 0x03U  /*  */
} WDOG_ClkSelType;

/** @brief  WDOG test mode, mapping with WDOG_CS[TST] bit filed definition. */
typedef enum
{
    WDOG_TST_DISABLED                      = 0x00U, /* Test mode disabled */
    WDOG_USER_MODE                         = 0x01U, /* User mode enabled. (Test mode disabled.) */
    WDOG_TST_MODE_LOW                      = 0x02U, /* Test mode enabled, only the low byte is used. */
    WDOG_TST_MODE_HIGH                     = 0x03U  /* Test mode enabled, only the high byte is used. */
} WDOG_TestType;



/** @brief WDOG init module type, include register setting for WDOG_CS/WDOG_TIMEOUT/WDOG_WINDOW. */
typedef struct
{
    bool                 bWinEnable;         /**@  windowed watch dog mode */
    bool                 bPrescalerEnable;   /**@  fixed 256 prescaler from clock input */
    WDOG_ClkSelType      eClkSource;         /**@  WDOG clock source  */
    bool                 bInterruptEnable;   /**@  WDOG Interrupt,W1C bit */
    bool                 bEnable;            /**@  WDOG enable bit */
    WDOG_TestType        eTesttype;          /**@  WDOG_CS[TST] */
    bool                 bEnableInDebug;     /**@  WDOG_CS[DBG] */
    bool                 bEnableInWait;      /**@  WDOG_CS[WAIT] */
    bool                 bEnableInStop;      /**@  WDOG_CS[STOP] */
    uint16_t             u16WindowValue;     /**@  The window value */
    uint16_t             u16TimeoutValue;    /**@  The timeout value */
} WDOG_CfgType;

/**
 * @brief unlock the wdog before Watch dog reconfigure set.
 * @param eInstance: WDOG module instance: WDOG0/WDOG1 defined in FC4150.
 */
void WDOG_Unlock(void);

/**
 * @brief feed the watch dog by writing typical CMD to counter.
 * @param eInstance: WDOG module instance: WDOG0/WDOG1 defined in FC4150.
 */
void WDOG_Refresh(void);

/**
 * @brief Initialize the WDOG configuration setting.
 * @param eInstance: WDOG module instance: WDOG0/WDOG1 defined in FC4150.
 * @param pWdogCfg: point to WDOG initial module type.
 */
void WDOG_Init(WDOG_CfgType* pWdogCfg);

/**
 * @brief WDOG_ReInit reserved. *
 * @param eInstance Wdog instance for re-init.
 */
void WDOG_ReInit(WDOG_InstanceType eInstance);
/** @}*/ /* fc4xxx_driver_wdog */


#endif  /* #ifndef _FLEXCORE_DRIVER_WDOG_H_ */



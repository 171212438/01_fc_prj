#ifndef __FLEXCORE_SYSTEM_H__
#define __FLEXCORE_SYSTEM_H__

#include "hsm_macro_common.h"
/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 32                 /**< Number of interrupts in the Vector table */

typedef enum  {
    /* auxiliary constants */
    NotAvail_IRQn       = -128,             /**< Not available device specific interrupt */

    /* device specific interrupts */
    RGM_RESET_IRQn      = 0,
    BUS_ERR_IRQn        = 1,
    IRAM_ECC_IRQn       = 2,
    DRAM_ECC_IRQn       = 3,
    TPU_IRQn            = 4,
    TPU_HSR_IRQn        = 5,
    HSM0_IRQn           = 6,
    MAILBOX_IRQn        = 7,
    TSTAMP_IRQn         = 8,
    DMA_IRQn            = 9,
    WDOG_IRQn           = 10,
    STOP_REQ_IRQn       = 11,
    FLASH_ALT_IRQn      = 12,
    FlexCAN3_IRQn       = 13,
    FlexCAN2_IRQn       = 14,
    FTU0_IRQn           = 15,
    FTU1_IRQn           = 16,
    ADC0_IRQn           = 17,
    ADC1_IRQn           = 18,
    GPIO_A_IRQn         = 19, /* only use for event, hw not support isr, HSM Subsystem internal use for monitoring the isr when enter wfi, hw should not use this */
    GPIO_B_IRQn         = 20,
    GPIO_C_IRQn         = 21,
    GPIO_D_IRQn         = 22,
    GPIO_E_IRQn         = 23,
    CMP0_IRQn           = 24,
    CMP1_IRQn           = 25,
    IMPU_IRQn           = 26,
    DMPU_IRQn           = 27,
    RESV_28_IRQn        = 28,
    RESV_29_IRQn        = 29,
    RESV_30_IRQn        = 30,
    RESV_31_IRQn        = 31
} FlexCore_IRQn_Type;

#define FLEXCORE_ISR_INT2FLAG(isrNum) ((0x1u) << (isrNum))
#define FLEXCORE_IRQn2U32BIT(x)    ((uint32_t)(0x1u << (x)))


#define FLEXCORE_STATUS                REG32(0x40072114)
#define FLEXCORE_STATUS_VIRGIN_MSK_U32 (0x100u)
#define FLEXCORE_STATUS_VIRGIN_TRUE    (0x100u)
#define FLEXCORE_STATUS_VIRGIN_FALSE   (0x000u)

#define FLEXCORE_STATUS_FT_MSK_U32     (0x200u)
#define FLEXCORE_STATUS_FT_TRUE        (0x200u)
#define FLEXCORE_STATUS_FT_FALSE       (0x000u)

#define FLEXCORE_SCR REG32(0x42022020u)


#define FLEXCORE_EER REG32(0x42022010u)

#define FLEXCORE_IER REG32(0x42022000u)

#define FLEXCORE_CLOCK_ENABLE_MASK_U32 (0xCf3u)
#define FLEXCORE_CLOCK_ENABLE REG32(0x42023004u)

#define FLEXCORE_EER REG32(0x42022010u)
#define FLEXCORE_SEC_BASE                  (0x40014000u)
#define FLEXCORE_BOOT_ADDR  REG32(0x42023000u)


#define RGM_RESET_ISR_BIT_U32       (FLEXCORE_IRQn2U32BIT(RGM_RESET_IRQn))
#define FLASH_ALT_ISR_BIT_U32       (FLEXCORE_IRQn2U32BIT(FLASH_ALT_IRQn))
#define STOP_REQ_ISR_BIT_U32        (FLEXCORE_IRQn2U32BIT(STOP_REQ_IRQn))
#define DMA_ISR_BIT_U32             (FLEXCORE_IRQn2U32BIT(DMA_IRQn))
#define HSM0_ISR_BIT_U32            (FLEXCORE_IRQn2U32BIT(HSM0_IRQn))
#define MAILBOX_ISR_BIT_U32         (FLEXCORE_IRQn2U32BIT(MAILBOX_IRQn))
#define TSTMP_ISR_BIT_U32           (FLEXCORE_IRQn2U32BIT(TSTAMP_IRQn))
#define BUS_ERR_ISR_BIT_U32         (FLEXCORE_IRQn2U32BIT(BUS_ERR_IRQn))
#define WDOG_ISR_BIT_U32            (FLEXCORE_IRQn2U32BIT(WDOG_IRQn))




typedef enum {
    TPU_CLK_ENn = 0,
    WDG_CLK_ENn = 1,
    TSTMP_CLK_ENn = 4,
    CNT_CLK_ENn = 5, /* MONIOTONIC COUNTER */
    DMA_CLK_ENn = 6,
    BEM_CLK_ENn = 7, /* BUS ERROR MONITOR */
    HSM_CLK_ENn = 8,
    DBG_CLK_ENn = 9
} HSM_CLKENnType;




#define TPU_CLK_EN_BIT_U32 ((uint32_t)(0x1u << TPU_CLK_ENn))
#define WDOG_CLK_EN_BIT_U32 ((uint32_t)(0x1u << WDG_CLK_ENn))
#define TSTMP_CLK_EN_BIT_U32 ((uint32_t)(0x1u << TSTMP_CLK_ENn))
#define CNT_CLK_EN_BIT_U32 ((uint32_t)(0x1u << CNT_CLK_ENn)) /* no exist */
#define DMA_CLK_EN_BIT_U32 ((uint32_t)(0x1u << DMA_CLK_ENn))
#define BEM_CLK_EN_BIT_U32 ((uint32_t)(0x1u << BEM_CLK_ENn))
#define HSM_CLK_EN_BIT_U32 ((uint32_t)(0x1u << HSM_CLK_ENn))
#define DBG_CLK_EN_BIT_U32 ((uint32_t)(0x1u << DBG_CLK_ENn))


#define FLEXCORE_SEC_BCS                       REG32(FLEXCORE_SEC_BASE + 0x60)
#define FLEXCORE_SEC_BCS_PARTMODE_MSK_U32      (0x80u)
#define FLEXCORE_SEC_BCS_PARTMODE_HSM_U32      (0x80u)
#define FLEXCORE_SEC_BCS_PARTMODE_FLEXCORE_U32 (0x00u)

#define FLEXCORE_SEC_FLEX_CODE_ADDR            REG32(FLEXCORE_SEC_BASE + 0x98)


#define FLEXCORE_SEC_BRC0                      REG32(FLEXCORE_SEC_BASE + 0x68)
#define FLEXCORE_SEC_BRC0_USER_CODE_PASS_MSK   (0x40000)
#define FLEXCORE_SEC_BRC0_USER_CODE_PASS       (0x40000)



#define FLEXCORE_ERROR_REPORT                  REG32(0x42023084)
#define FLEXCORE_ERROR_REPORT_APP_BUS_ERR      (0x1U << 7)
#define FLEXCORE_ERROR_REPORT_MAGIC_NUM_ERR    (0x1U << 6)
#define FLEXCORE_ERROR_REPORT_LSU              (0x1U << 5)
#define FLEXCORE_ERROR_REPORT_ECALL            (0x1U << 4)
#define FLEXCORE_ERROR_REPORT_WDG_TIMEOUT      (0x1U << 3)
#define FLEXCORE_ERROR_REPORT_ILGL_INSTR       (0x1U << 2)
#define FLEXCORE_ERROR_REPORT_BUS_ERR          (0x1U << 1)
#define FLEXCORE_ERROR_REPORT_INSTR_FETCH      (0x1U)

typedef struct {
    uint32_t u32MagicWord0; /* Flag */
    uint32_t u32MagicWord1; /* chip */
    uint32_t u32Address;
    uint32_t u32Size;
    uint32_t u32MagicWord2; /* From */
    uint32_t u32MagicWord3; /* 2020 */
} FLEXCORE_UserAppInfType;

typedef FLEXCORE_BoolType (*FIRMWARE_ISREntryType)(uint32_t u32MStatus);
typedef void (*irq_handler_t)(void);

void SystemIrqClrPending(uint32_t u32Flag);
void SystemSleepEnable(uint32_t u32Flag);
void SystemEnterWFI(void);
void SystemEventEnable(uint32_t u32Flag);
uint32_t SystemIrqEnStatGet(void);
void SystemIrqEnable(uint32_t u32Flag);
uint32_t SystemEventEnStatGet(void);
uint32_t SystemSwitchAllInterrupt(uint32_t u32Flag);
void SystemClockEnableSpecific(uint32_t u32Flag);
void SystemEnableSpecificEvent(uint32_t u32Flag);
void SystemEnableSpecificIsr(uint32_t u32Flag);
void IntMgr_EnableInterrupt(FlexCore_IRQn_Type eIrq);
void SystemDisableSpecificInterrupt(uint32_t u32Flag);
#endif

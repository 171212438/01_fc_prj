#include "Interrupt_manager.h"

/* clang-format off */
/** FC7XXX_NVIC - Size of Registers Arrays */
#define FC7XXX_NVIC_ISER_COUNT                      8u
#define FC7XXX_NVIC_ICER_COUNT                      8u
#define FC7XXX_NVIC_ISPR_COUNT                      8u
#define FC7XXX_NVIC_ICPR_COUNT                      8u
#define FC7XXX_NVIC_IABR_COUNT                      8u
#define FC7XXX_NVIC_IP_COUNT                        240u

/** FC7XXX_NVIC - Register Layout Typedef */
typedef struct {
  __IO uint32 ISER[FC7XXX_NVIC_ISER_COUNT];         /**< Interrupt Set Enable Register n, array offset: 0x0, array step: 0x4 */
       uint8 RESERVED_0[96];
  __IO uint32 ICER[FC7XXX_NVIC_ICER_COUNT];         /**< Interrupt Clear Enable Register n, array offset: 0x80, array step: 0x4 */
       uint8 RESERVED_1[96];
  __IO uint32 ISPR[FC7XXX_NVIC_ISPR_COUNT];         /**< Interrupt Set Pending Register n, array offset: 0x100, array step: 0x4 */
       uint8 RESERVED_2[96];
  __IO uint32 ICPR[FC7XXX_NVIC_ICPR_COUNT];         /**< Interrupt Clear Pending Register n, array offset: 0x180, array step: 0x4 */
       uint8 RESERVED_3[96];
  __IO uint32 IABR[FC7XXX_NVIC_IABR_COUNT];         /**< Interrupt Active bit Register n, array offset: 0x200, array step: 0x4 */
       uint8 RESERVED_4[224];
  __IO uint8 IP[FC7XXX_NVIC_IP_COUNT];              /**< Interrupt Priority Register n, array offset: 0x300, array step: 0x1 */
       uint8 RESERVED_5[2576];
  __O  uint32 STIR;                                 /**< Software Trigger Interrupt Register, offset: 0xE00 */
} FC7XXX_NVIC_Type, *FC7XXX_NVIC_MemMapPtr;

 /** Number of instances of the FC7XXX_NVIC module. */
#define FC7XXX_NVIC_INSTANCE_COUNT                  (1u)


/* FC7XXX_NVIC - Peripheral instance base addresses */
/** Peripheral FC7XXX_NVIC base address */
#define FC7XXX_NVIC_BASE                            (0xE000E100u)
/** Peripheral FC7XXX_NVIC base pointer */
#define FC7XXX_NVIC                                 ((FC7XXX_NVIC_Type *)FC7XXX_NVIC_BASE)
/** Array initializer of FC7XXX_NVIC peripheral base addresses */
#define FC7XXX_NVIC_BASE_ADDRS                      { FC7XXX_NVIC_BASE }
/** Array initializer of FC7XXX_NVIC peripheral base pointers */
#define FC7XXX_NVIC_BASE_PTRS                       { FC7XXX_NVIC }
 /** Number of interrupt vector arrays for the FC7XXX_NVIC module. */
#define FC7XXX_NVIC_IRQS_ARR_COUNT                  (1u)
 /** Number of interrupt channels for the FC7XXX_NVIC module. */
#define FC7XXX_NVIC_IRQS_CH_COUNT                   (1u)
/** Interrupt vectors for the FC7XXX_NVIC peripheral type */
#define FC7XXX_NVIC_IRQS                            { SWI_IRQn }
/* clang-format on */

/*******************************************************************************
 * Code
 ******************************************************************************/
void IntMgr_EnableInterrupt(IRQn_Type eIrqNumber)
{
    /* Enable interrupt */
    FC7XXX_NVIC->ISER[(uint32)(eIrqNumber) >> 5U] = (uint32)(1UL << ((uint32)(eIrqNumber) &
                                                                     (uint32)0x1FU));
}

void IntMgr_DisableInterrupt(IRQn_Type eIrqNumber)
{
    /* Disable interrupt */
    FC7XXX_NVIC->ICER[((uint32)(eIrqNumber) >> 5U)] = (uint32)(1UL << ((uint32)(eIrqNumber) &
                                                                       (uint32)0x1FU));
}

/**
 * @brief set the interrupt service Priority
 *
 * @param eIrqNumber is interrupt number
 * @param u8Priority is u8Priority number
 */
void IntMgr_SetPriority(IRQn_Type eIrqNumber, uint8 u8Priority)
{
    uint8 u8Shift = (uint8)(8U - FC7XXX_NVIC_PRIO_BITS);

    if ((sint32)eIrqNumber < 0)
    {
        FC7XXX_SCB->SHPR[(((uint32)eIrqNumber) & 0xFUL) - 4UL] =
            (uint8)(((uint32)u8Priority << u8Shift) & (uint32)0xFFUL);
    }
    else
    {
        /* Set Priority for device specific Interrupts */
        FC7XXX_NVIC->IP[(uint32)(eIrqNumber)] = (uint8)(((((uint32)u8Priority) << u8Shift)) & 0xFFUL);
    }
}

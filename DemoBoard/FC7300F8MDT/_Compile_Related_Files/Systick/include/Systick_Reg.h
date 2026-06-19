#ifndef SYSTICK_REG_H
#define SYSTICK_REG_H

#include "Std_Types.h"

/* ----------------------------------------------------------------------------
   -- FC100_SysTick Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FC100_SysTick_Peripheral_Access_Layer FC100_SysTick Peripheral Access Layer
 * @{
 */


/** FC100_SysTick - Size of Registers Arrays */

/** FC100_SysTick - Register Layout Typedef */
typedef struct {
  __IO uint32 CSR;                               /**< SysTick Control and Status Register, offset: 0x0 */
  __IO uint32 RVR;                               /**< SysTick Reload Value Register, offset: 0x4 */
  __IO uint32 CVR;                               /**< SysTick Current Value Register, offset: 0x8 */
  __I  uint32 CALIB;                             /**< SysTick Calibration Value Register, offset: 0xC */
} FC100_SysTick_Type, *FC100_SysTick_MemMapPtr;

 /** Number of instances of the FC100_SysTick module. */
#define FC100_SysTick_INSTANCE_COUNT               (1u)


/* FC100_SysTick - Peripheral instance base addresses */
/** Peripheral FC100_SysTick base address */
#define FC100_SysTick_BASE                         (0xE000E010u)
/** Peripheral FC100_SysTick base pointer */
#define FC100_SysTick                              ((FC100_SysTick_Type *)FC100_SysTick_BASE)
/** Array initializer of FC100_SysTick peripheral base addresses */
#define FC100_SysTick_BASE_ADDRS                   { FC100_SysTick_BASE }
/** Array initializer of FC100_SysTick peripheral base pointers */
#define FC100_SysTick_BASE_PTRS                    { FC100_SysTick }
 /** Number of interrupt vector arrays for the FC100_SysTick module. */
#define FC100_SysTick_IRQS_ARR_COUNT               (1u)
 /** Number of interrupt channels for the FC100_SysTick module. */
#define FC100_SysTick_IRQS_CH_COUNT                (1u)
/** Interrupt vectors for the FC100_SysTick peripheral type */
#define FC100_SysTick_IRQS                         { SysTick_IRQn }

/* ----------------------------------------------------------------------------
   -- FC100_SysTick Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FC100_SysTick_Register_Masks FC100_SysTick Register Masks
 * @{
 */

/* CSR Bit Fields */
#define FC100_SysTick_CSR_ENABLE_MASK              0x1u
#define FC100_SysTick_CSR_ENABLE_SHIFT             0u
#define FC100_SysTick_CSR_ENABLE_WIDTH             1u
#define FC100_SysTick_CSR_ENABLE(x)                (((uint32)(((uint32)(x))<<FC100_SysTick_CSR_ENABLE_SHIFT))&FC100_SysTick_CSR_ENABLE_MASK)
#define FC100_SysTick_CSR_TICKINT_MASK             0x2u
#define FC100_SysTick_CSR_TICKINT_SHIFT            1u
#define FC100_SysTick_CSR_TICKINT_WIDTH            1u
#define FC100_SysTick_CSR_TICKINT(x)               (((uint32)(((uint32)(x))<<FC100_SysTick_CSR_TICKINT_SHIFT))&FC100_SysTick_CSR_TICKINT_MASK)
#define FC100_SysTick_CSR_CLKSOURCE_MASK           0x4u
#define FC100_SysTick_CSR_CLKSOURCE_SHIFT          2u
#define FC100_SysTick_CSR_CLKSOURCE_WIDTH          1u
#define FC100_SysTick_CSR_CLKSOURCE(x)             (((uint32)(((uint32)(x))<<FC100_SysTick_CSR_CLKSOURCE_SHIFT))&FC100_SysTick_CSR_CLKSOURCE_MASK)
#define FC100_SysTick_CSR_COUNTFLAG_MASK           0x10000u
#define FC100_SysTick_CSR_COUNTFLAG_SHIFT          16u
#define FC100_SysTick_CSR_COUNTFLAG_WIDTH          1u
#define FC100_SysTick_CSR_COUNTFLAG(x)             (((uint32)(((uint32)(x))<<FC100_SysTick_CSR_COUNTFLAG_SHIFT))&FC100_SysTick_CSR_COUNTFLAG_MASK)
/* RVR Bit Fields */
#define FC100_SysTick_RVR_RELOAD_MASK              0xFFFFFFu
#define FC100_SysTick_RVR_RELOAD_SHIFT             0u
#define FC100_SysTick_RVR_RELOAD_WIDTH             24u
#define FC100_SysTick_RVR_RELOAD(x)                (((uint32)(((uint32)(x))<<FC100_SysTick_RVR_RELOAD_SHIFT))&FC100_SysTick_RVR_RELOAD_MASK)
/* CVR Bit Fields */
#define FC100_SysTick_CVR_CURRENT_MASK             0xFFFFFFu
#define FC100_SysTick_CVR_CURRENT_SHIFT            0u
#define FC100_SysTick_CVR_CURRENT_WIDTH            24u
#define FC100_SysTick_CVR_CURRENT(x)               (((uint32)(((uint32)(x))<<FC100_SysTick_CVR_CURRENT_SHIFT))&FC100_SysTick_CVR_CURRENT_MASK)
/* CALIB Bit Fields */
#define FC100_SysTick_CALIB_TENMS_MASK             0xFFFFFFu
#define FC100_SysTick_CALIB_TENMS_SHIFT            0u
#define FC100_SysTick_CALIB_TENMS_WIDTH            24u
#define FC100_SysTick_CALIB_TENMS(x)               (((uint32)(((uint32)(x))<<FC100_SysTick_CALIB_TENMS_SHIFT))&FC100_SysTick_CALIB_TENMS_MASK)
#define FC100_SysTick_CALIB_SKEW_MASK              0x40000000u
#define FC100_SysTick_CALIB_SKEW_SHIFT             30u
#define FC100_SysTick_CALIB_SKEW_WIDTH             1u
#define FC100_SysTick_CALIB_SKEW(x)                (((uint32)(((uint32)(x))<<FC100_SysTick_CALIB_SKEW_SHIFT))&FC100_SysTick_CALIB_SKEW_MASK)
#define FC100_SysTick_CALIB_NOREF_MASK             0x80000000u
#define FC100_SysTick_CALIB_NOREF_SHIFT            31u
#define FC100_SysTick_CALIB_NOREF_WIDTH            1u
#define FC100_SysTick_CALIB_NOREF(x)               (((uint32)(((uint32)(x))<<FC100_SysTick_CALIB_NOREF_SHIFT))&FC100_SysTick_CALIB_NOREF_MASK)

/*!
 * @}
 */ /* end of group FC100_SysTick_Register_Masks */


/*!
 * @}
 */ /* end of group FC100_SysTick_Peripheral_Access_Layer */

#endif /* SYSTICK_REG_H */

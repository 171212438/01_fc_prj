#include "Bsp_Pwm_Internal.h"

#include "CDD_TrgSel.h"
#include "Eftu_Dtm_Reg.h"
#include "Eftu_Tom_Reg.h"
#include "Gpio_Reg.h"
#include "Interrupt_manager.h"
#include "Mcal.h"
#include "Port_Reg.h"
#include "Pwm.h"
#include "SchM_Pwm.h"
#include "TrgSel_Reg.h"


#if (BSP_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED != STD_ON)
  #error "The LU0/TrgSel/DTM CH0-synchronous start-stop path must remain enabled for the BSP PWM engine"
#endif

#if (BSP_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED != STD_OFF)
  #error "Implement and verify the real eFTU1 fault source, polarity, latch and raw-status path first"
#endif

#if (TRGSEL_CONFIG_TRGSEL_API != STD_ON)
  #error "TrgSel_ConfigInput must remain enabled for the BSP PWM software run request"
#endif

#if (PWM_NOTIFICATION_SUPPORTED != STD_ON)
  #error "PWM notification support must remain enabled for the CH0 boundary arm"
#endif

#define BSP_PWM_WAVE_TOM_MAX_VALUE               (0xFFFFFFU)
#define BSP_PWM_WAVE_HW_POLL_LIMIT               (10000U)
#define BSP_PWM_WAVE_MAX_BOUNDARY_WRAPS          (2U)
#define BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS        (2U)
#define BSP_PWM_WAVE_OUTPUT_RELEASE_VERIFY_WRAPS (3U)
#define BSP_PWM_WAVE_FRAME_APPLY_VERIFY_WRAPS    (4U)
#define BSP_PWM_WAVE_CARRIER_CHANNEL             (0U)
#define BSP_PWM_WAVE_PWM5_CHANNEL                (3U)
#define BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL        (3U)
#define BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL        (4U)
#define BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL         (7U)
#define BSP_PWM_WAVE_CARRIER_SIGNAL_LEVEL        (1U)
#define BSP_PWM_WAVE_PHASE_ARM_WINDOW_DIVISOR    (2U)
#define BSP_PWM_WAVE_PHASE_READ_TOLERANCE_TICKS  (0U)
#define BSP_PWM_WAVE_ARM_IRQ_MAX_EVENTS          (8U)

#define BSP_PWM_WAVE_GPIOC_OUTPUT_MASK       (0x02800080U)
#define BSP_PWM_WAVE_GPIOD_OUTPUT_MASK       (0x00200010U)
#define BSP_PWM_WAVE_GPIOE_OUTPUT_MASK       (0x00002C00U)
#define BSP_PWM_WAVE_GPIOH_OUTPUT_MASK       (0x00400000U)
#define BSP_PWM_WAVE_DTM_ACTIVITY_ALL_GROUPS (0x0FU)
#define BSP_PWM_WAVE_PWM5_ACTIVITY           (0x10U)

#define BSP_PWM_WAVE_DTM_ALL_LOW        (0x22222222U)
#define BSP_PWM_WAVE_DTM0_CH3_ALL_LOW   (0x22000000U)
#define BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK (0xFF000000U)
#define BSP_PWM_WAVE_DTM_DEAD_TIME_MASK (0x88888888U)
#define BSP_PWM_WAVE_DTM_EXPECTED_DTV \
  (EFTU_DTM_CHn_DTV_RELRISE(BSP_PWM_WAVE_DEAD_TIME_TICKS) | EFTU_DTM_CHn_DTV_RELFALL(BSP_PWM_WAVE_DEAD_TIME_TICKS))

#define BSP_PWM_WAVE_PCC_LU0_ADDRESS (0x400241C0U)
#define BSP_PWM_WAVE_PCC_CGC_MASK    (0x00800000U)
#define BSP_PWM_WAVE_PCC_SWR_MASK    (0x00010000U)

#define BSP_PWM_WAVE_LU0_LG_CFG0_ADDRESS   (0x40070000U)
#define BSP_PWM_WAVE_LU0_LG_CTRL0_ADDRESS  (0x40070008U)
#define BSP_PWM_WAVE_LU0_LG_FILT0_ADDRESS  (0x4007000CU)
#define BSP_PWM_WAVE_LU0_CTRL_ADDRESS      (0x40070080U)
#define BSP_PWM_WAVE_LU0_CFG_ADDRESS       (0x40070088U)
#define BSP_PWM_WAVE_LU0_LG_CFG0_DFF       (0xCCCCAAAAU)
#define BSP_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT (0x0000010EU)
#define BSP_PWM_WAVE_LU0_LG_CTRL0_DFF_RUN  (0x0000010CU)
#define BSP_PWM_WAVE_LU0_LG_CTRL0_MASK     (0x30003FFFU)

#define BSP_PWM_WAVE_NVIC_ICPR5_ADDRESS  (0xE000E294U)
#define BSP_PWM_WAVE_IRQ172_PENDING_MASK (0x00001000U)

#define BSP_PWM_WAVE_TRGSEL_FIELD_MASK  (0x7FU)
#define BSP_PWM_WAVE_TRGSEL_FIELD_WIDTH (8U)

#define BSP_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE (EFTU_DTM_CTRL2_SHUTOFF_SEL_0(4U) | EFTU_DTM_CTRL2_UPD_MODE_0(3U))
#define BSP_PWM_WAVE_DTM_SHUTOFF_WRITE_BYTE  (BSP_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE | EFTU_DTM_CTRL2_WR_EN_0(1U))
#define BSP_PWM_WAVE_DTM0_CTRL2_CONFIG       (0x34000000U)
#define BSP_PWM_WAVE_DTM0_CTRL2_WRITE        (0xB4000000U)
#define BSP_PWM_WAVE_DTM1_CTRL2_CONFIG       (0x34343434U)
#define BSP_PWM_WAVE_DTM1_CTRL2_WRITE        (0xB4B4B4B4U)
#define BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK                                                                                    \
  (EFTU_DTM_CTRL_CLK_SEL_MASK | EFTU_DTM_CTRL_DTM_SEL_MASK | EFTU_DTM_CTRL_UPD_MODE_MASK | EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK | \
   EFTU_DTM_CTRL_SR_UPD_EN_MASK)
#define BSP_PWM_WAVE_DTM_RUNTIME_CTRL    (EFTU_DTM_CTRL_CH_SHUTOFF_EN(1U))
#define BSP_PWM_WAVE_REG32(u32Address)   (*((volatile uint32 *)(u32Address)))
#define BSP_PWM_WAVE_IRQ_STATUS_MASK     (EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK | EFTU_TOM_CHn_IRQ_ST_CCU1TC_MASK)
#define BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK

#define BSP_PWM_WAVE_WINDOW_UPEN_DISABLE_COMMAND                                                                        \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(1U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(1U))

#define BSP_PWM_WAVE_WINDOW_UPEN_ENABLE_COMMAND                                                                         \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(2U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(2U))

#define BSP_PWM_WAVE_UPEN_DISABLE_COMMAND                                                                               \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(1U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(1U))

#define BSP_PWM_WAVE_UPEN_ENABLE_COMMAND                                                                                \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(2U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(2U))

#define BSP_PWM_WAVE_UPEN_COMMAND_MASK                                                                                     \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4_MASK | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7_MASK)

#define BSP_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND                                                                          \
  (EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL3(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL4(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL5(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL6(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL7(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH0(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH3(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH4(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH5(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH6(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH7(1U))

#define BSP_PWM_WAVE_CH3_7_DISABLE_COMMAND                                                                                       \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(1U) | \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(1U))

#define BSP_PWM_WAVE_CH3_7_ENABLE_COMMAND                                                                                        \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(2U) | \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(2U))

#define BSP_PWM_WAVE_OUT3_7_DISABLE_COMMAND                                                                                      \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(1U) | \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(1U))

#define BSP_PWM_WAVE_OUT3_7_ENABLE_COMMAND                                                                                       \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(2U) | \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(2U))

#define BSP_PWM_WAVE_CH3_7_STATUS_MASK                                                                                              \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_MASK | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_MASK)

#define BSP_PWM_WAVE_OUT3_7_STATUS_MASK                                                                                             \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_MASK | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_MASK)

#define BSP_PWM_WAVE_CH3_7_IMMEDIATE_DISABLE                                                                                     \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(1U) | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(1U))

#define BSP_PWM_WAVE_OUT3_7_IMMEDIATE_DISABLE                                                                                    \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(1U) | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(1U))

_Static_assert(BSP_PWM_WAVE_UPEN_DISABLE_COMMAND == 0x55410000U, "Unexpected CH0/CH3-CH7 UPEN disable encoding");
_Static_assert(BSP_PWM_WAVE_UPEN_ENABLE_COMMAND == 0xAA820000U, "Unexpected CH0/CH3-CH7 UPEN enable encoding");
_Static_assert(BSP_PWM_WAVE_UPEN_COMMAND_MASK == 0xFFC30000U, "Unexpected UPEN command-field mask encoding");
_Static_assert(BSP_PWM_WAVE_WINDOW_UPEN_DISABLE_COMMAND == 0x55000000U, "Unexpected CH4-CH7 UPEN disable encoding");
_Static_assert(BSP_PWM_WAVE_WINDOW_UPEN_ENABLE_COMMAND == 0xAA000000U, "Unexpected CH4-CH7 UPEN enable encoding");
_Static_assert(BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE == 0x00000002U, "Unexpected GLBEN_BYPASS encoding");
_Static_assert(BSP_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND == 0x55415541U, "Unexpected CH0/CH3-CH7 force-update disable encoding");
_Static_assert(BSP_PWM_WAVE_CH3_7_DISABLE_COMMAND == 0x00005540U, "Unexpected CH3-CH7 disable encoding");
_Static_assert(BSP_PWM_WAVE_CH3_7_ENABLE_COMMAND == 0x0000AA80U, "Unexpected CH3-CH7 enable encoding");
_Static_assert(BSP_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE == 0x34U, "Unexpected DTM AUX0 asynchronous-release encoding");
_Static_assert(BSP_PWM_WAVE_DTM_SHUTOFF_WRITE_BYTE == 0xB4U, "Unexpected DTM CTRL2 write-enable encoding");
_Static_assert(TRGSEL0_TARGET_LU0_INPUT0A == 0U, "Unexpected LU0 run-request target encoding");
_Static_assert(TRGSEL0_TARGET_TRGSEL0_OUTPUT2 == 18U, "Unexpected TRGSEL0 OUT2 target encoding");
_Static_assert(TRGSEL2_TARGET_eFTU1_FLT0 == 82U, "Unexpected eFTU1 FLT0 target encoding");
_Static_assert(TRGSEL0_SRC_eFTU1_TOM0 == 106U, "Unexpected eFTU1 TOM0 source encoding");
_Static_assert(TRGSEL0_SRC_LU0_OUT0B == 48U, "Unexpected LU0 OUT0B source encoding");
_Static_assert(TRGSEL2_SRC_TRGSEL0_OUT2 == 4U, "Unexpected TRGSEL0 OUT2 source encoding");
_Static_assert(eFTU1_TOM_0TO7_IRQn == 172U, "Unexpected eFTU1 TOM0-7 interrupt number");
_Static_assert(BSP_PWM_WAVE_PWM5_CARRIER_PERIODS == 2U, "PWM5 phase gate requires exactly two carrier periods");
_Static_assert(BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL == (BSP_PWM_WAVE_PWM5_CHANNEL + 1U), "PWM windows must start after PWM5");
_Static_assert((BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL + BSP_PWM_WAVE_WINDOW_COUNT - 1U) == BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL, "PWM windows must map exactly to TOM CH4-CH7");
_Static_assert(BSP_PWM_WAVE_PHASE_ARM_WINDOW_DIVISOR == 2U, "PWM5 arm window must stay within the old second carrier cycle");
_Static_assert(BSP_PWM_WAVE_PHASE_READ_TOLERANCE_TICKS == 0U, "PWM5 edges require an exact carrier-zero phase relation");
_Static_assert(BSP_PWM_WAVE_ARM_IRQ_MAX_EVENTS >= 2U, "PWM5 boundary notification must cover both carrier phases");
_Static_assert((BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * BSP_PWM_WAVE_MAX_PERIOD_TICKS) <= BSP_PWM_WAVE_TOM_MAX_VALUE, "PWM5 period exceeds TOM range");

static volatile boolean s_bInitialized = FALSE;            /* Set after BSP PWM initialization completes successfully. */
static volatile boolean s_bInitInProgress = FALSE;         /* Guards Bsp_PwmWave_InitInternal() against re-entry. */
static volatile boolean s_bFaultLatched = FALSE;           /* Blocks every later normal request while a fault is active. */
static volatile boolean s_bFrameConfigured = FALSE;        /* A complete Frame was synchronously verified in ARMED_LOW. */
static volatile boolean s_bOutputPadsConfirmed = FALSE;    /* Fixed eFTU pin mux and physical ARMED_LOW were confirmed. */
static volatile boolean s_bCommonUpdatePending = FALSE;    /* IRQ172 has not yet published UPEN for a CH0/CH3 common update. */

static boolean s_bDtmRunConfigCaptured = FALSE; /* Saved DTM0/DTM1 CH_CTRL2 run values are valid. */
static volatile Bsp_PwmWave_StateType s_eState = BSP_PWM_WAVE_STATE_RESET_SAFE;
static Bsp_PwmWave_Pwm5StateType s_eConfiguredPwm5State = BSP_PWM_WAVE_PWM5_LOW;
static volatile uint32 s_u32ConfiguredCarrierPeriod = 0U; /* Last carrier period accepted by the boundary ISR. */

static volatile uint32 s_u32TargetCarrierPeriod = 0U; /* Target period for common-update confirmation. */
static volatile uint32 s_u32ArmOldCarrierPeriod = 0U; /* Active period used to validate the IRQ arm window. */
static uint32 s_u32Dtm0RunCtrl2 = 0U;                 /* Validated DTM0 CH_CTRL2 run-state baseline. */
static uint32 s_u32DtmRunCtrl2 = 0U;                  /* Validated DTM1 CH_CTRL2 run-state baseline. */

static volatile uint32 s_u32FaultFlags = 0U; /* Accumulates BSP_PWM_WAVE_FAULT_* cause bits. */
static uint8 s_u8ArmInterruptCount = 0U; /* Bounds carrier notifications while seeking one common arm window. */

typedef struct {
  uint32 u32Ctrl;                     /* Saves the active CH_CTRL register value. */
  uint32 u32CtrlShadow;               /* Saves the shadow CH_CTRL_SR register value. */
  uint32 u32Cm0;                      /* Saves the active CM0 period/compare value. */
  uint32 u32Cm1;                      /* Saves the active CM1 compare value. */
  uint32 u32Sr0;                      /* Saves the SR0 shadow period/compare value. */
  uint32 u32Sr1;                      /* Saves the SR1 shadow compare value. */
  uint32 u32Cn0;                      /* Saves the current CN0 counter value. */
} Bsp_PwmWave_TomChannelSnapshotType; /* Saves and restores the PWM5 TOM CH3 initialization baseline. */

typedef struct {
  uint32 u32Pwm5Cm0;                               /* Prepared CH3 period shadow. */
  uint32 u32Pwm5Cm1;                               /* Prepared CH3 compare shadow. */
  uint32 au32WindowCm0[BSP_PWM_WAVE_WINDOW_COUNT]; /* Prepared CH4-CH7 CM0 shadows. */
  uint32 au32WindowCm1[BSP_PWM_WAVE_WINDOW_COUNT]; /* Prepared CH4-CH7 CM1 shadows. */
} Bsp_PwmWave_PreparedFrameType;                   /* Keeps arithmetic outside the short hardware commit section. */

static Bsp_PwmWave_ResultType Bsp_PwmWave_ReleaseOutputAtBoundary(void);
static Bsp_PwmWave_ResultType Bsp_PwmWave_RequestLowAtBoundary(void);

static uint32 Bsp_PwmWave_ReadTrgSelSource(uint32 u32BaseAddress, uint32 u32LocalOutput)
{
  uint32 u32Register = BSP_PWM_WAVE_REG32(u32BaseAddress + (4U * (u32LocalOutput / 4U)));
  uint32 u32Shift = BSP_PWM_WAVE_TRGSEL_FIELD_WIDTH * (u32LocalOutput % 4U);

  return (u32Register >> u32Shift) & BSP_PWM_WAVE_TRGSEL_FIELD_MASK;
}

static boolean Bsp_PwmWave_IsLuClockEnabled(void)
{
  uint32 u32PccLu0 = BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_PCC_LU0_ADDRESS);

  return (((u32PccLu0 & BSP_PWM_WAVE_PCC_CGC_MASK) != 0U) && ((u32PccLu0 & BSP_PWM_WAVE_PCC_SWR_MASK) == 0U)) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_IsStaticStopRouteValid(void)
{
  return ((Bsp_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 1U) == (uint32)TRGSEL0_SRC_eFTU1_TOM0) &&
          (Bsp_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 18U) == (uint32)TRGSEL0_SRC_LU0_OUT0B) &&
          (Bsp_PwmWave_ReadTrgSelSource(TRGSEL2_BASEADDR, 34U) == (uint32)TRGSEL2_SRC_TRGSEL0_OUT2))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_SetRunRequest(boolean bRun)
{
  TrgSel_SourceType u32Source = (TRUE == bRun) ? (TrgSel_SourceType)TRGSEL0_SRC_VDD : (TrgSel_SourceType)TRGSEL0_SRC_VSS;

  TrgSel_ConfigInput(TRGSEL0_TARGET_LU0_INPUT0A, u32Source);
  MCAL_DATA_SYNC_BARRIER();

  return (Bsp_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 0U) == u32Source) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_IsRunRequestSelected(boolean bRun)
{
  uint32 u32ExpectedSource = (TRUE == bRun) ? (uint32)TRGSEL0_SRC_VDD : (uint32)TRGSEL0_SRC_VSS;

  return (Bsp_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 0U) == u32ExpectedSource) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_IsLuStopSynchronizerConfigValid(void)
{
  uint32 u32LgCtrl = BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_CTRL0_ADDRESS) & BSP_PWM_WAVE_LU0_LG_CTRL0_MASK;

  return ((TRUE == Bsp_PwmWave_IsLuClockEnabled()) && (TRUE == Bsp_PwmWave_IsStaticStopRouteValid()) &&
          (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_CTRL_ADDRESS) == 0U) && (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_CFG_ADDRESS) == 0U) &&
          (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_CFG0_ADDRESS) == BSP_PWM_WAVE_LU0_LG_CFG0_DFF) &&
          (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_FILT0_ADDRESS) == 0U) &&
          ((u32LgCtrl == BSP_PWM_WAVE_LU0_LG_CTRL0_DFF_RUN) || (u32LgCtrl == BSP_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT)))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_ConfigureLuStopSynchronizer(void)
{
  if ((FALSE == Bsp_PwmWave_IsLuClockEnabled()) || (FALSE == Bsp_PwmWave_IsStaticStopRouteValid()) || (FALSE == Bsp_PwmWave_SetRunRequest(FALSE)) ||
      (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_CTRL_ADDRESS) != 0U) || (BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_CFG_ADDRESS) != 0U)) {
    return FALSE;
  }

  BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_FILT0_ADDRESS) = 0U;
  BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_CFG0_ADDRESS) = BSP_PWM_WAVE_LU0_LG_CFG0_DFF;
  BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_LU0_LG_CTRL0_ADDRESS) = BSP_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT;
  MCAL_DATA_SYNC_BARRIER();

  return ((TRUE == Bsp_PwmWave_IsRunRequestSelected(FALSE)) && (TRUE == Bsp_PwmWave_IsLuStopSynchronizerConfigValid())) ? TRUE : FALSE;
}

static void Bsp_PwmWave_ConfigureDtmShutoff(void)
{
  /*
   * CTRL2 mode 3 follows AUX_IN0 level. AUX_IN0 is LU0 OUT0B, whose only
   * transitions are CH0 rising edges, so normal assert/release is zero-aligned.
   */
  EFTU1_DTM0->CH_CTRL2_SR = (EFTU1_DTM0->CH_CTRL2_SR & (~BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | BSP_PWM_WAVE_DTM0_CH3_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2_SR = BSP_PWM_WAVE_DTM_ALL_LOW;

  EFTU1_DTM0->CH_CTRL2 = s_u32Dtm0RunCtrl2;
  EFTU1_DTM1->CH_CTRL2 = s_u32DtmRunCtrl2;
  EFTU1_DTM0->CTRL2 = BSP_PWM_WAVE_DTM0_CTRL2_WRITE;
  EFTU1_DTM1->CTRL2 = BSP_PWM_WAVE_DTM1_CTRL2_WRITE;
  EFTU1_DTM0->CTRL = (EFTU1_DTM0->CTRL & (~BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK)) | BSP_PWM_WAVE_DTM_RUNTIME_CTRL;
  EFTU1_DTM1->CTRL = (EFTU1_DTM1->CTRL & (~BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK)) | BSP_PWM_WAVE_DTM_RUNTIME_CTRL;
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Bsp_PwmWave_IsDtmShutoffConfigValid(void)
{
  uint8 u8Index;

  if (((EFTU1_DTM0->CTRL & BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != BSP_PWM_WAVE_DTM_RUNTIME_CTRL) ||
      ((EFTU1_DTM1->CTRL & BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != BSP_PWM_WAVE_DTM_RUNTIME_CTRL) ||
      ((EFTU1_DTM0->CTRL2 & 0x7F000000U) != BSP_PWM_WAVE_DTM0_CTRL2_CONFIG) ||
      ((EFTU1_DTM1->CTRL2 & 0x7F7F7F7FU) != BSP_PWM_WAVE_DTM1_CTRL2_CONFIG) ||
      ((EFTU1_DTM0->CH_CTRL2_SR & BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK) != BSP_PWM_WAVE_DTM0_CH3_ALL_LOW) ||
      (EFTU1_DTM1->CH_CTRL2_SR != BSP_PWM_WAVE_DTM_ALL_LOW) || (EFTU1_DTM0->CH_CTRL2 != s_u32Dtm0RunCtrl2) ||
      (EFTU1_DTM1->CH_CTRL2 != s_u32DtmRunCtrl2) || (EFTU1_DTM0->CH_CTRL1 != 0U) || (EFTU1_DTM0->CH_CTRL3 != 0U) || (EFTU1_DTM1->CH_CTRL1 != 0U) ||
      (EFTU1_DTM1->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < BSP_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU1_DTM1->CHn_DTV[u8Index] & (EFTU_DTM_CHn_DTV_RELRISE_MASK | EFTU_DTM_CHn_DTV_RELFALL_MASK)) != BSP_PWM_WAVE_DTM_EXPECTED_DTV) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Bsp_PwmWave_AreDtmChannelsForcedLow(void)
{
  return (((EFTU1_DTM0->CH_CTRL2_SR & BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK) == BSP_PWM_WAVE_DTM0_CH3_ALL_LOW) &&
          ((EFTU1_DTM0->CH_CTRL2 & BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK) == BSP_PWM_WAVE_DTM0_CH3_ALL_LOW) &&
          (EFTU1_DTM1->CH_CTRL2_SR == BSP_PWM_WAVE_DTM_ALL_LOW) && (EFTU1_DTM1->CH_CTRL2 == BSP_PWM_WAVE_DTM_ALL_LOW))
             ? TRUE
             : FALSE;
}

LOCAL_INLINE boolean Bsp_PwmWave_IsCore0(void)
{
  return (0U == GET_CPU_ID()) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_IsNotificationConfigValid(void)
{
  const Pwm_ConfigType *pPwmConfig = Pwm_ConfigPtr[0U];

  return ((NULL_PTR != pPwmConfig) && (PwmConf_PwmChannel_PWM_CARRIER < pPwmConfig->u32PwmChannelsCount) &&
          (PWM_INSTANCE_EFTU_1_TOM_0 == pPwmConfig->pPwmConfigChannels[PwmConf_PwmChannel_PWM_CARRIER].ePwmModuleInstance) &&
          (BSP_PWM_WAVE_CARRIER_CHANNEL == pPwmConfig->pPwmConfigChannels[PwmConf_PwmChannel_PWM_CARRIER].u8HwChannelId) &&
          (0U == pPwmConfig->pPwmConfigChannels[PwmConf_PwmChannel_PWM_CARRIER].u8CoreId) &&
          (Bsp_PwmWave_CarrierBoundaryNotification == pPwmConfig->pPwmConfigChannels[PwmConf_PwmChannel_PWM_CARRIER].pPwmChannelNotification))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_IsArmNotificationHwEnabled(void)
{
  uint32 u32IrqEnable = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN;

  return (((u32IrqEnable & EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK) != 0U) && ((u32IrqEnable & EFTU_TOM_CHn_IRQ_EN_CCU1TC_IRQ_EN_MASK) == 0U)) ? TRUE : FALSE;
}

LOCAL_INLINE void Bsp_PwmWave_DisableArmInterrupt(void)
{
  /* IRQ172 is owned exclusively by CH0 CCU0 in this BSP engine. Disable the source
   * before clearing the W1C peripheral status and any stale NVIC pending bit. */
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN = 0U;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = BSP_PWM_WAVE_IRQ_STATUS_MASK;
  BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_NVIC_ICPR5_ADDRESS) = BSP_PWM_WAVE_IRQ172_PENDING_MASK;
  s_u32ArmOldCarrierPeriod = 0U;
  s_u8ArmInterruptCount = 0U;
  MCAL_DATA_SYNC_BARRIER();
}

static void Bsp_PwmWave_EnableArmInterrupt(void)
{
  /* Publish all pending-frame/arm tokens before unmasking the peripheral. */
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN = 0U;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = BSP_PWM_WAVE_IRQ_STATUS_MASK;
  BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_NVIC_ICPR5_ADDRESS) = BSP_PWM_WAVE_IRQ172_PENDING_MASK;
  MCAL_DATA_SYNC_BARRIER();
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN = EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK;
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Bsp_PwmWave_IsTomPwmChannelConfigValid(uint8 u8Channel)
{
  uint32 u32ChannelCtrl = EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL;

  return ((((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_MODE_MASK) == EFTU_TOM_CHn_CTRL_MODE(2U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_UDMODE_MASK) == EFTU_TOM_CHn_CTRL_UDMODE(0U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_CLK_SRC_MASK) == EFTU_TOM_CHn_CTRL_CLK_SRC(1U)) &&
           ((u32ChannelCtrl & (EFTU_TOM_CHn_CTRL_ACB_MASK | EFTU_TOM_CHn_CTRL_EXT_FUPD_MASK | EFTU_TOM_CHn_CTRL_OSM_MASK |
                               EFTU_TOM_CHn_CTRL_TRIG_IN_USE_EXT_MASK | EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) == 0U) &&
           ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR_MASK) == EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR(1U)))
              ? TRUE
              : FALSE);
}

static boolean Bsp_PwmWave_IsTomTopologyValid(boolean bPwm5Independent)
{
  uint8 u8Index;
  uint32 u32ChannelCtrl;
  uint32 u32CarrierPeriod;

  if ((EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK) == 0U) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT & EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) != EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT & EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK) != EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK)) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT & (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT & (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_INT_TRIG & (EFTU_TOM_TGC_INT_TRIG_INT_TRIG1_MASK | EFTU_TOM_TGC_INT_TRIG_INT_TRIG2_MASK)) != 0U)) {
    return FALSE;
  }

  if (FALSE == Bsp_PwmWave_IsTomPwmChannelConfigValid(BSP_PWM_WAVE_CARRIER_CHANNEL)) {
    return FALSE;
  }
  for (u8Index = BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Index <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Index++) {
    if (FALSE == Bsp_PwmWave_IsTomPwmChannelConfigValid(u8Index)) {
      return FALSE;
    }
  }

  u32ChannelCtrl = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL;
  if ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) == 0U) {
    return FALSE;
  }
  if ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) != 0U) {
    return FALSE;
  }

  for (u8Index = 1U; u8Index <= 2U; u8Index++) {
    u32ChannelCtrl = EFTU_TOM_1_0->Channel[u8Index].CH_CTRL;
    if ((u32ChannelCtrl & (EFTU_TOM_CHn_CTRL_TRIGOUT_MASK | EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) != 0U) {
      return FALSE;
    }
  }

  u32ChannelCtrl = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL;
  if (((TRUE == bPwm5Independent) && ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) != 0U)) ||
      ((FALSE == bPwm5Independent) && ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) == 0U)) ||
      ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) != 0U)) {
    return FALSE;
  }

  for (u8Index = 4U; u8Index <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Index++) {
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) == 0U) {
      return FALSE;
    }
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) != 0U) {
      return FALSE;
    }
  }

  u32CarrierPeriod = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
  if ((u32CarrierPeriod < BSP_PWM_WAVE_MIN_PERIOD_TICKS) || (u32CarrierPeriod > BSP_PWM_WAVE_MAX_PERIOD_TICKS) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 != (u32CarrierPeriod >> 1U)) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 != u32CarrierPeriod) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 != (u32CarrierPeriod >> 1U)) ||
      ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) !=
       EFTU_TOM_CHn_CTRL_SL(BSP_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) ||
      ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) !=
       EFTU_TOM_CHn_CTRL_SR_SL_SR(BSP_PWM_WAVE_CARRIER_SIGNAL_LEVEL))) {
    return FALSE;
  }

  if ((TRUE == bPwm5Independent) &&
      ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 != (BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32CarrierPeriod)) ||
       (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0 != (BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32CarrierPeriod)))) {
    return FALSE;
  }

  return TRUE;
}

static boolean Bsp_PwmWave_IsInitialDtmConfigValid(uint32 u32Dtm0RunCtrl2, uint32 u32Dtm1RunCtrl2)
{
  uint8 u8Index;

  if (u32Dtm0RunCtrl2 != 0U) {
    return FALSE;
  }

  if ((EFTU1_DTM0->CTRL & BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != 0U) {
    return FALSE;
  }

  if ((EFTU1_DTM0->CH_CTRL1 != 0U) || (EFTU1_DTM0->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  if (u32Dtm1RunCtrl2 != BSP_PWM_WAVE_DTM_DEAD_TIME_MASK) {
    return FALSE;
  }

  if ((EFTU1_DTM1->CTRL & (EFTU_DTM_CTRL_CLK_SEL_MASK | EFTU_DTM_CTRL_DTM_SEL_MASK | EFTU_DTM_CTRL_UPD_MODE_MASK | EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK |
                           EFTU_DTM_CTRL_SR_UPD_EN_MASK)) != 0U) {
    return FALSE;
  }

  if ((EFTU1_DTM1->CH_CTRL1 != 0U) || (EFTU1_DTM1->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < BSP_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU1_DTM1->CHn_DTV[u8Index] & (EFTU_DTM_CHn_DTV_RELRISE_MASK | EFTU_DTM_CHn_DTV_RELFALL_MASK)) != BSP_PWM_WAVE_DTM_EXPECTED_DTV) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Bsp_PwmWave_IsHardwareConfigValid(uint32 u32Dtm0RunCtrl2, uint32 u32Dtm1RunCtrl2)
{
  return ((TRUE == Bsp_PwmWave_IsTomTopologyValid(FALSE)) && (TRUE == Bsp_PwmWave_IsInitialDtmConfigValid(u32Dtm0RunCtrl2, u32Dtm1RunCtrl2))) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_ConfigurePwm5Independent(void)
{
  uint32 u32ChannelCtrl = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL;
  uint32 u32CarrierPeriod = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
  uint32 u32Pwm5Period = BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32CarrierPeriod;

  /*
   * EB initializes PWM5 as a CH0-shifted channel so CH3 keeps TRIGOUT=0 and
   * passes the CH0 trigger to CH4-CH7. With TOM outputs already disabled, the
   * The BSP engine removes only the CH0 counter reset and owns CH3 as an independent 2*P
   * continuous-up channel. LOW is staged until a frame is submitted; later
   * carrier-period changes are armed only before a common CH0/CH3 zero.
   */
  u32ChannelCtrl &= ~(EFTU_TOM_CHn_CTRL_RST_CCU0_MASK | EFTU_TOM_CHn_CTRL_TRIGOUT_MASK);
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL = (u32ChannelCtrl & (~EFTU_TOM_CHn_CTRL_SL_MASK)) | EFTU_TOM_CHn_CTRL_SL(1U);
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR =
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(1U);
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 = u32Pwm5Period;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM1 = 0U;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0 = u32Pwm5Period;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR1 = 0U;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CN0 = 0U;
  MCAL_DATA_SYNC_BARRIER();

  return Bsp_PwmWave_IsTomTopologyValid(TRUE);
}

static void Bsp_PwmWave_CapturePwm5Baseline(Bsp_PwmWave_TomChannelSnapshotType *pSnapshot)
{
  pSnapshot->u32Ctrl = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL;
  pSnapshot->u32CtrlShadow = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR;
  pSnapshot->u32Cm0 = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0;
  pSnapshot->u32Cm1 = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM1;
  pSnapshot->u32Sr0 = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0;
  pSnapshot->u32Sr1 = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR1;
  pSnapshot->u32Cn0 = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CN0;
}

static void Bsp_PwmWave_RestorePwm5Baseline(const Bsp_PwmWave_TomChannelSnapshotType *pSnapshot)
{
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 = pSnapshot->u32Cm0;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM1 = pSnapshot->u32Cm1;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0 = pSnapshot->u32Sr0;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR1 = pSnapshot->u32Sr1;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CN0 = pSnapshot->u32Cn0;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR = pSnapshot->u32CtrlShadow;
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL = pSnapshot->u32Ctrl;
  MCAL_DATA_SYNC_BARRIER();
}

static void Bsp_PwmWave_RestoreInitialDtmRunConfig(void)
{
  EFTU1_DTM0->CTRL &= ~BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK;
  EFTU1_DTM1->CTRL &= ~BSP_PWM_WAVE_DTM_RUNTIME_CTRL_MASK;
  EFTU1_DTM0->CH_CTRL2 = s_u32Dtm0RunCtrl2;
  EFTU1_DTM1->CH_CTRL2 = s_u32DtmRunCtrl2;
  MCAL_DATA_SYNC_BARRIER();
}

static void Bsp_PwmWave_DisableFrameUpdate(void)
{
  /* Force update remains disabled for all owned channels. Normal Frames must
   * load synchronously from shadow registers at a channel boundary. */
  EFTU_TOM_1_0->TGC_FUPD_CTRL = BSP_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_UPEN_DISABLE_COMMAND;
  MCAL_DATA_SYNC_BARRIER();
}

LOCAL_INLINE void Bsp_PwmWave_ArmFrameUpdate(void)
{
  MCAL_DATA_SYNC_BARRIER();
  EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_UPEN_ENABLE_COMMAND;
}

static void Bsp_PwmWave_ImmediateDisableAll(void)
{
  EFTU_TOM_1_0->TGC_ENDIS_CTRL = BSP_PWM_WAVE_CH3_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_OUTEN_CTRL = BSP_PWM_WAVE_OUT3_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_ENDIS_STAT = BSP_PWM_WAVE_CH3_7_IMMEDIATE_DISABLE;
  EFTU_TOM_1_0->TGC_OUTEN_STAT = BSP_PWM_WAVE_OUT3_7_IMMEDIATE_DISABLE;
  MCAL_DATA_SYNC_BARRIER();
}

static void Bsp_PwmWave_EnableAllAtCarrierBoundary(void)
{
  /* CH3 is disabled here; start its independent counter at the next CH0 zero. */
  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CN0 = 0U;
  EFTU_TOM_1_0->TGC_ENDIS_CTRL = BSP_PWM_WAVE_CH3_7_ENABLE_COMMAND;
  EFTU_TOM_1_0->TGC_OUTEN_CTRL = BSP_PWM_WAVE_OUT3_7_ENABLE_COMMAND;
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Bsp_PwmWave_AreAllOutputsEnabled(void)
{
  return (((EFTU_TOM_1_0->TGC_ENDIS_STAT & BSP_PWM_WAVE_CH3_7_STATUS_MASK) == BSP_PWM_WAVE_CH3_7_STATUS_MASK) &&
          ((EFTU_TOM_1_0->TGC_OUTEN_STAT & BSP_PWM_WAVE_OUT3_7_STATUS_MASK) == BSP_PWM_WAVE_OUT3_7_STATUS_MASK))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_AreAllOutputsDisabled(void)
{
  return (((EFTU_TOM_1_0->TGC_ENDIS_STAT & BSP_PWM_WAVE_CH3_7_STATUS_MASK) == 0U) &&
          ((EFTU_TOM_1_0->TGC_OUTEN_STAT & BSP_PWM_WAVE_OUT3_7_STATUS_MASK) == 0U))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_WaitForOutputState(boolean bEnabled)
{
  uint32 u32PollCount = BSP_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;

  while (u32PollCount > 0U) {
    if (((TRUE == bEnabled) && (TRUE == Bsp_PwmWave_AreAllOutputsEnabled())) ||
        ((FALSE == bEnabled) && (TRUE == Bsp_PwmWave_AreAllOutputsDisabled()))) {
      return TRUE;
    }
    u32CurrentCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if (u8BoundaryWraps >= BSP_PWM_WAVE_MAX_BOUNDARY_WRAPS) {
        return FALSE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return FALSE;
}

static boolean Bsp_PwmWave_WaitForCarrierWraps(uint8 u8RequiredWraps)
{
  uint32 u32PollCount = BSP_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;

  while (u32PollCount > 0U) {
    u32CurrentCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if (u8BoundaryWraps >= u8RequiredWraps) {
        return TRUE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return (0U == u8RequiredWraps) ? TRUE : FALSE;
}

/* The CCU0 callback must finish in the first half of CH0's new cycle. This
 * leaves at least half of the old carrier period before the next CH0/CH3
 * common zero. */
LOCAL_INLINE boolean Bsp_PwmWave_CheckPwm5CommonBoundaryArmWindow(uint32 u32CarrierPeriod)
{
  uint32 u32CarrierBefore;
  uint32 u32CarrierAfter;
  uint32 u32Pwm5Counter;
  uint32 u32Pwm5Phase;
  uint32 u32ArmWindow = u32CarrierPeriod / BSP_PWM_WAVE_PHASE_ARM_WINDOW_DIVISOR;
  uint32 u32Pwm5Period = BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32CarrierPeriod;

  u32CarrierBefore = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  u32Pwm5Counter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  u32CarrierAfter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;

  if ((u32CarrierAfter < u32CarrierBefore) || (u32CarrierAfter > u32ArmWindow) || (u32Pwm5Counter < u32CarrierPeriod) ||
      (u32Pwm5Counter >= u32Pwm5Period)) {
    return FALSE;
  }

  u32Pwm5Phase = u32Pwm5Counter - u32CarrierPeriod;
  return (((u32Pwm5Phase + BSP_PWM_WAVE_PHASE_READ_TOLERANCE_TICKS) >= u32CarrierBefore) &&
          (u32Pwm5Phase <= (u32CarrierAfter + BSP_PWM_WAVE_PHASE_READ_TOLERANCE_TICKS)))
             ? TRUE
             : FALSE;
}

static void Bsp_PwmWave_SelectCarrierBoundaryTrigger(boolean bEnable)
{
  uint32 u32InternalTrigger = EFTU_TOM_1_0->TGC_INT_TRIG;

  EFTU_TOM_1_0->TGC_INT_TRIG =
      (u32InternalTrigger & (~EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK)) | EFTU_TOM_TGC_INT_TRIG_INT_TRIG0((TRUE == bEnable) ? 2U : 1U);
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Bsp_PwmWave_IsCarrierBoundaryTriggerSelected(void)
{
  return ((EFTU_TOM_1_0->TGC_INT_TRIG & EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK) == EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_IsRuntimeTopologyValid(boolean bRunRequest)
{
  return ((TRUE == Bsp_PwmWave_IsTomTopologyValid(TRUE)) && (TRUE == Bsp_PwmWave_IsLuStopSynchronizerConfigValid()) &&
          (TRUE == Bsp_PwmWave_IsDtmShutoffConfigValid()) && (TRUE == Bsp_PwmWave_IsCarrierBoundaryTriggerSelected()) &&
          (TRUE == Bsp_PwmWave_AreAllOutputsEnabled()) && (TRUE == Bsp_PwmWave_IsRunRequestSelected(bRunRequest)))
             ? TRUE
             : FALSE;
}

static uint32 Bsp_PwmWave_GetRunSignalLevel(uint8 u8Channel, const Bsp_PwmWave_FrameType *pFrame)
{
  uint32 u32Level;

  if ((BSP_PWM_WAVE_PWM5_CHANNEL == u8Channel) && (NULL_PTR != pFrame) && (BSP_PWM_WAVE_PWM5_TOGGLE == pFrame->ePwm5State)) {
    /* SOMP drives the inverse of SL first: SL=0 gives LOW to CM1, then HIGH to CM0. */
    u32Level = 0U;
  } else {
    switch (u8Channel) {
      case 4U:
      case 7U:
        u32Level = 0U;
        break;
      default:
        u32Level = 1U;
        break;
    }
  }
  return u32Level;
}

static void Bsp_PwmWave_SetShadowSignalLevels(const Bsp_PwmWave_FrameType *pFrame, boolean bRunSignalLevels)
{
  uint8 u8Channel;
  uint32 u32Level;

  EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR =
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
      EFTU_TOM_CHn_CTRL_SR_SL_SR(BSP_PWM_WAVE_CARRIER_SIGNAL_LEVEL);

  for (u8Channel = BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32Level = (TRUE == bRunSignalLevels) ? Bsp_PwmWave_GetRunSignalLevel(u8Channel, pFrame) : 1U;
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(u32Level);
  }
}

static void Bsp_PwmWave_SetActiveAndShadowSafeSignalLevels(void)
{
  uint8 u8Channel;

  for (u8Channel = 3U; u8Channel <= 7U; u8Channel++) {
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL = (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & (~EFTU_TOM_CHn_CTRL_SL_MASK)) | EFTU_TOM_CHn_CTRL_SL(1U);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR = (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(1U);
  }
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Bsp_PwmWave_AreTomSafeSignalLevels(void)
{
  uint8 u8Channel;

  for (u8Channel = BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    if (((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) != EFTU_TOM_CHn_CTRL_SL(1U)) ||
        ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) != EFTU_TOM_CHn_CTRL_SR_SL_SR(1U))) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Bsp_PwmWave_AreOutputPinModesValid(void)
{
  return ((((PORTC->PCR[7U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTC->PCR[23U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTC->PCR[25U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTD->PCR[4U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) &&
           ((PORTD->PCR[21U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTE->PCR[10U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTE->PCR[11U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) && ((PORTE->PCR[13U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTH->PCR[22U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U))))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_AreOutputPadsLow(void)
{
  return ((((GPIOC->PIDR & BSP_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PIDR & BSP_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & BSP_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PIDR & BSP_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U) &&
           ((GPIOC->PDIR & BSP_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PDIR & BSP_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PDIR & BSP_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PDIR & BSP_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U)))
             ? TRUE
             : FALSE;
}

static boolean Bsp_PwmWave_AreOutputPadInputsEnabled(void)
{
  return ((((GPIOC->PIDR & BSP_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PIDR & BSP_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & BSP_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PIDR & BSP_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U)))
             ? TRUE
             : FALSE;
}

static uint8 Bsp_PwmWave_GetOutputActivityMask(void)
{
  uint32 u32GpioC = GPIOC->PDIR;
  uint32 u32GpioD = GPIOD->PDIR;
  uint32 u32GpioE = GPIOE->PDIR;
  uint32 u32GpioH = GPIOH->PDIR;
  uint8 u8ActivityMask = 0U;

  /* Bits 0-3 prove each DTM complementary pair moved. */
  if ((u32GpioC & 0x02000080U) != 0U) { /* CH4: PTC7/S4, PTC25/S20 */
    u8ActivityMask |= 0x01U;
  }
  if (((u32GpioE & 0x00000800U) != 0U) || ((u32GpioC & 0x00800000U) != 0U)) { /* CH5: PTE11/S5, PTC23/S21 */
    u8ActivityMask |= 0x02U;
  }
  if (((u32GpioE & 0x00000400U) != 0U) || ((u32GpioD & 0x00200000U) != 0U)) { /* CH6: PTE10/S6, PTD21/S22 */
    u8ActivityMask |= 0x04U;
  }
  if (((u32GpioE & 0x00002000U) != 0U) || ((u32GpioD & 0x00000010U) != 0U)) { /* CH7: PTE13/S7, PTD4/S23 */
    u8ActivityMask |= 0x08U;
  }
  if ((u32GpioH & BSP_PWM_WAVE_GPIOH_OUTPUT_MASK) != 0U) { /* CH3/PWM5: PTH22/S3 */
    u8ActivityMask |= BSP_PWM_WAVE_PWM5_ACTIVITY;
  }

  return u8ActivityMask;
}

static boolean Bsp_PwmWave_WaitForOutputActivity(uint8 u8RequiredWraps, boolean bRequirePwm5, boolean bRequirePwm5Low)
{
  uint32 u32PollCount = BSP_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;
  uint8 u8ActivityObserved = 0U;
  uint8 u8CurrentActivity;
  uint8 u8RequiredActivity = BSP_PWM_WAVE_DTM_ACTIVITY_ALL_GROUPS;
  boolean bPwm5LowObserved = FALSE;
  boolean bPwm5HighObserved = FALSE;

  if (TRUE == bRequirePwm5) {
    u8RequiredActivity |= BSP_PWM_WAVE_PWM5_ACTIVITY;
  }

  while (u32PollCount > 0U) {
    u8CurrentActivity = Bsp_PwmWave_GetOutputActivityMask();
    u8ActivityObserved |= u8CurrentActivity;
    if (TRUE == bRequirePwm5) {
      if (0U != (u8CurrentActivity & BSP_PWM_WAVE_PWM5_ACTIVITY)) {
        bPwm5HighObserved = TRUE;
      } else {
        bPwm5LowObserved = TRUE;
      }
    }

    u32CurrentCounter = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if ((u8BoundaryWraps == BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS) && (u8RequiredWraps > BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS)) {
        /* Discard settle-time observations; verify only the next complete cycle. */
        u8ActivityObserved = 0U;
        bPwm5LowObserved = FALSE;
        bPwm5HighObserved = FALSE;
      }
      if (u8BoundaryWraps >= u8RequiredWraps) {
        return (((u8ActivityObserved & u8RequiredActivity) == u8RequiredActivity) && ((FALSE == bRequirePwm5) || (TRUE == bPwm5HighObserved)) &&
                ((FALSE == bRequirePwm5Low) || (TRUE == bPwm5LowObserved))) ? TRUE : FALSE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return FALSE;
}

LOCAL_INLINE boolean Bsp_PwmWave_IsPhysicalArmedLowValid(void)
{
  return ((TRUE == Bsp_PwmWave_AreOutputPinModesValid()) && (TRUE == Bsp_PwmWave_AreOutputPadsLow())) ? TRUE : FALSE;
}

static void Bsp_PwmWave_SetActiveAndShadowRunSignalLevels(void)
{
  uint8 u8Channel;
  uint32 u32Level;

  for (u8Channel = BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32Level = Bsp_PwmWave_GetRunSignalLevel(u8Channel, NULL_PTR);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & (~EFTU_TOM_CHn_CTRL_SL_MASK)) | EFTU_TOM_CHn_CTRL_SL(u32Level);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(u32Level);
  }
  MCAL_DATA_SYNC_BARRIER();
}

LOCAL_INLINE void Bsp_PwmWave_GetPwm5TimerValues(const Bsp_PwmWave_FrameType *pFrame, uint32 *pCm0, uint32 *pCm1)
{
  /* CH3 is independent so it can span two CH0 cycles, but its timer values
   * always follow the current carrier period. */
  *pCm0 = BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * pFrame->u32PeriodTicks;
  if (BSP_PWM_WAVE_PWM5_LOW == pFrame->ePwm5State) {
    *pCm1 = 0U;
  } else if (BSP_PWM_WAVE_PWM5_HIGH == pFrame->ePwm5State) {
    *pCm1 = *pCm0;
  } else if (BSP_PWM_WAVE_PWM5_TOGGLE == pFrame->ePwm5State) {
    *pCm1 = pFrame->u32PeriodTicks;
  } else {
    /* Internal corruption must remain fail-closed even though public entry points validate first. */
    *pCm1 = 0U;
  }
}

LOCAL_INLINE void Bsp_PwmWave_GetWindowTimerValues(uint8 u8Index, const Bsp_PwmWave_FrameType *pFrame, uint32 *pCm0, uint32 *pCm1)
{
  uint8 u8Channel = u8Index + BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL;
  uint32 u32WindowWidth = pFrame->aWindow[u8Index].u32CmpB - pFrame->aWindow[u8Index].u32CmpA;

  if (0U == u32WindowWidth) {
    /* A zero-width window is the exact 0% endpoint. Select the constant-low
     * SOMP encoding for the channel's SL. */
    if (1U == Bsp_PwmWave_GetRunSignalLevel(u8Channel, pFrame)) {
      *pCm0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      *pCm1 = 0U;
    } else {
      *pCm0 = 0U;
      *pCm1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    }
  } else if (u32WindowWidth < BSP_PWM_WAVE_DEAD_TIME_TICKS) {
    /* A positive pulse narrower than the dead time cannot be reproduced by
     * DTM. Clamp it to main 100% / complementary 0%. Synchronized SOMP uses
     * 0/MAX as constant high when SL=1; SL=0 inverts that encoding. */
    if (1U == Bsp_PwmWave_GetRunSignalLevel(u8Channel, pFrame)) {
      *pCm0 = 0U;
      *pCm1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    } else {
      *pCm0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      *pCm1 = 0U;
    }
  } else {
    *pCm0 = pFrame->aWindow[u8Index].u32CmpA;
    *pCm1 = pFrame->aWindow[u8Index].u32CmpB;
  }
}

static Bsp_PwmWave_ResultType Bsp_PwmWave_ValidateAndPrepareFrame(const Bsp_PwmWave_FrameType *pFrame,
                                                                  Bsp_PwmWave_PreparedFrameType *pPrepared)
{
  uint8 u8Index;

  if (NULL_PTR == pFrame) {
    return BSP_PWM_WAVE_E_PARAM_POINTER;
  }
  if ((pFrame->u32PeriodTicks < BSP_PWM_WAVE_MIN_PERIOD_TICKS) || (pFrame->u32PeriodTicks > BSP_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return BSP_PWM_WAVE_E_PERIOD;
  }

  for (u8Index = 0U; u8Index < BSP_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((pFrame->aWindow[u8Index].u32CmpA >= pFrame->u32PeriodTicks) || (pFrame->aWindow[u8Index].u32CmpB >= pFrame->u32PeriodTicks) ||
        (pFrame->aWindow[u8Index].u32CmpA > pFrame->aWindow[u8Index].u32CmpB)) {
      return BSP_PWM_WAVE_E_CMP;
    }
    if (NULL_PTR != pPrepared) {
      Bsp_PwmWave_GetWindowTimerValues(u8Index, pFrame, &pPrepared->au32WindowCm0[u8Index], &pPrepared->au32WindowCm1[u8Index]);
    }
  }

  if ((BSP_PWM_WAVE_PWM5_LOW != pFrame->ePwm5State) && (BSP_PWM_WAVE_PWM5_HIGH != pFrame->ePwm5State) &&
      (BSP_PWM_WAVE_PWM5_TOGGLE != pFrame->ePwm5State)) {
    return BSP_PWM_WAVE_E_PWM5;
  }
  if (NULL_PTR != pPrepared) {
    Bsp_PwmWave_GetPwm5TimerValues(pFrame, &pPrepared->u32Pwm5Cm0, &pPrepared->u32Pwm5Cm1);
  }

  return BSP_PWM_WAVE_OK;
}

LOCAL_INLINE uint32 Bsp_PwmWave_EnterFastCommit(void)
{
#if defined(AUTOSAR_OS_NOT_USED) && !defined(MCAL_ENABLE_USER_MODE_SUPPORT)
  uint32 u32Primask;

  ASM_KEYWORD volatile("mrs %0, primask" : "=r"(u32Primask) : : "memory");
  ASM_KEYWORD volatile("cpsid i" : : : "memory");
  return u32Primask;
#else
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  return 0U;
#endif
}

LOCAL_INLINE void Bsp_PwmWave_ExitFastCommit(uint32 u32InterruptState)
{
#if defined(AUTOSAR_OS_NOT_USED) && !defined(MCAL_ENABLE_USER_MODE_SUPPORT)
  if (0U == (u32InterruptState & 1U)) {
    ASM_KEYWORD volatile("cpsie i" : : : "memory");
  }
#else
  (void)u32InterruptState;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
#endif
}

static boolean Bsp_PwmWave_IsFrameApplied(const Bsp_PwmWave_FrameType *pFrame, boolean bRunSignalLevels)
{
  uint8 u8Index;
  uint8 u8Channel;
  uint32 u32Pwm5Cm0;
  uint32 u32Pwm5Cm1;
  uint32 u32WindowCm0;
  uint32 u32WindowCm1;
  uint32 u32ExpectedSignalLevel;

  Bsp_PwmWave_GetPwm5TimerValues(pFrame, &u32Pwm5Cm0, &u32Pwm5Cm1);

  if ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM0 != pFrame->u32PeriodTicks) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 != (pFrame->u32PeriodTicks >> 1U)) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 != u32Pwm5Cm0) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM1 != u32Pwm5Cm1)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < BSP_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    Bsp_PwmWave_GetWindowTimerValues(u8Index, pFrame, &u32WindowCm0, &u32WindowCm1);
    if ((EFTU_TOM_1_0->Channel[u8Index + BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL].CH_CM0 != u32WindowCm0) ||
        (EFTU_TOM_1_0->Channel[u8Index + BSP_PWM_WAVE_FIRST_WINDOW_CHANNEL].CH_CM1 != u32WindowCm1)) {
      return FALSE;
    }
  }

  if ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) !=
      EFTU_TOM_CHn_CTRL_SL(BSP_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) {
    return FALSE;
  }

  for (u8Channel = BSP_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= BSP_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32ExpectedSignalLevel = (TRUE == bRunSignalLevels) ? Bsp_PwmWave_GetRunSignalLevel(u8Channel, pFrame) : 1U;
    if ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) != EFTU_TOM_CHn_CTRL_SL(u32ExpectedSignalLevel)) {
      return FALSE;
    }
  }

  return TRUE;
}

static void Bsp_PwmWave_CancelCommonUpdate(void)
{
  Bsp_PwmWave_DisableArmInterrupt();
  Bsp_PwmWave_DisableFrameUpdate();
  s_bCommonUpdatePending = FALSE;
  s_u32TargetCarrierPeriod = 0U;
}

static boolean Bsp_PwmWave_ForceSafeHardware(void)
{
  boolean bRunRequestLow;

  /* Clamp all DTM outputs before disabling TOM, avoiding a transient from !SL. */
  EFTU1_DTM1->CH_CTRL2_SR = BSP_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2 = BSP_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM0->CH_CTRL2_SR = (EFTU1_DTM0->CH_CTRL2_SR & (~BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | BSP_PWM_WAVE_DTM0_CH3_ALL_LOW;
  EFTU1_DTM0->CH_CTRL2 = (EFTU1_DTM0->CH_CTRL2 & (~BSP_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | BSP_PWM_WAVE_DTM0_CH3_ALL_LOW;
  MCAL_DATA_SYNC_BARRIER();

  /* CH3-CH7 covers PWM5 and all four DTM inputs in one immediate command. */
  Bsp_PwmWave_ImmediateDisableAll();
  bRunRequestLow = Bsp_PwmWave_SetRunRequest(FALSE);
  Bsp_PwmWave_CancelCommonUpdate();
  Bsp_PwmWave_SetActiveAndShadowSafeSignalLevels();
  MCAL_DATA_SYNC_BARRIER();

  return ((TRUE == bRunRequestLow) && (TRUE == Bsp_PwmWave_AreDtmChannelsForcedLow()) && (TRUE == Bsp_PwmWave_AreAllOutputsDisabled()) &&
          (TRUE == Bsp_PwmWave_AreTomSafeSignalLevels()) && ((FALSE == s_bOutputPadsConfirmed) || (TRUE == Bsp_PwmWave_IsPhysicalArmedLowValid()))) ? TRUE : FALSE;
}

static boolean Bsp_PwmWave_EnterFault(uint32 u32FaultFlags)
{
  boolean bSafeStateValid;

  /* Publish the latch before touching slower routing/configuration registers.
   * ApplyRequest rechecks this latch in its final short commit section. */
  s_bFaultLatched = TRUE;
  s_u32FaultFlags |= u32FaultFlags;
  s_bFrameConfigured = FALSE;
  s_eState = BSP_PWM_WAVE_STATE_FAULT_LATCHED;
  MCAL_DATA_SYNC_BARRIER();

  bSafeStateValid = Bsp_PwmWave_ForceSafeHardware();
  if (FALSE == bSafeStateValid) {
    s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
  }
  MCAL_DATA_SYNC_BARRIER();

  return bSafeStateValid;
}

/* Called with AREA_19 held after all common-update shadows are complete. */
static Bsp_PwmWave_ResultType Bsp_PwmWave_ScheduleFrameAtCommonBoundaryLocked(uint32 u32OldCarrierPeriod)
{
  if (TRUE == s_bFaultLatched) {
    return BSP_PWM_WAVE_E_FAULT_ACTIVE;
  }
  if ((FALSE == s_bCommonUpdatePending) || ((BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (BSP_PWM_WAVE_STATE_RUN != s_eState)) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM0 != u32OldCarrierPeriod) ||
      (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 != (BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32OldCarrierPeriod)) ||
      ((EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) != 0U)) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    return BSP_PWM_WAVE_E_HW_CONFIG;
  }

  Bsp_PwmWave_DisableArmInterrupt();
  s_u32ArmOldCarrierPeriod = u32OldCarrierPeriod;
  s_u8ArmInterruptCount = 0U;
  MCAL_DATA_SYNC_BARRIER();

  Bsp_PwmWave_EnableArmInterrupt();
  if (FALSE == Bsp_PwmWave_IsArmNotificationHwEnabled()) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    return BSP_PWM_WAVE_E_HW_CONFIG;
  }

  return BSP_PWM_WAVE_OK;
}

void Bsp_PwmWave_CarrierBoundaryNotification(void)
{
  if (FALSE == s_bCommonUpdatePending) {
    Bsp_PwmWave_DisableArmInterrupt();
  } else if ((TRUE == Bsp_PwmWave_gbEmergencyLatched) || (TRUE == s_bFaultLatched)) {
    Bsp_PwmWave_DisableArmInterrupt();
  } else if ((BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (BSP_PWM_WAVE_STATE_RUN != s_eState)) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
  } else {
    s_u8ArmInterruptCount++;

    /* No diagnostics or configuration reads are allowed between the valid
     * phase gate and UPEN. IRQ172 preempts the lower-priority 20 us task. */
    if (TRUE == Bsp_PwmWave_CheckPwm5CommonBoundaryArmWindow(s_u32ArmOldCarrierPeriod)) {
      Bsp_PwmWave_ArmFrameUpdate();
      Bsp_PwmWave_DisableArmInterrupt();
      s_u32ConfiguredCarrierPeriod = s_u32TargetCarrierPeriod;
      s_u32TargetCarrierPeriod = 0U;
      s_bCommonUpdatePending = FALSE;
      MCAL_DATA_SYNC_BARRIER();
    } else if (s_u8ArmInterruptCount >= BSP_PWM_WAVE_ARM_IRQ_MAX_EVENTS) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_TIMEOUT);
    }
  }
}

Bsp_PwmWave_ResultType Bsp_PwmWave_InitInternal(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;
  Bsp_PwmWave_TomChannelSnapshotType tPwm5Baseline = {0U};
  boolean bHardwareConfigValid = FALSE;
  boolean bOutputsEnabled = FALSE;
  boolean bPwm5BaselineCaptured = FALSE;
  boolean bStopTimingElapsed = FALSE;
  uint32 u32Dtm0RunCtrl2;
  uint32 u32Dtm1RunCtrl2;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (TRUE == Bsp_PwmWave_gbEmergencyLatched) {
    return BSP_PWM_WAVE_E_FAULT_ACTIVE;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((TRUE == s_bInitialized) || (TRUE == s_bInitInProgress)) {
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
    return BSP_PWM_WAVE_E_STATE;
  }

  s_bInitInProgress = TRUE;
  s_eState = BSP_PWM_WAVE_STATE_RESET_SAFE;
  Bsp_PwmWave_DisableArmInterrupt();
  bHardwareConfigValid = Bsp_PwmWave_IsNotificationConfigValid();

  if ((TRUE == bHardwareConfigValid) && (FALSE == s_bDtmRunConfigCaptured)) {
    u32Dtm0RunCtrl2 = EFTU1_DTM0->CH_CTRL2;
    u32Dtm1RunCtrl2 = EFTU1_DTM1->CH_CTRL2;
    if (TRUE == Bsp_PwmWave_IsInitialDtmConfigValid(u32Dtm0RunCtrl2, u32Dtm1RunCtrl2)) {
      s_u32Dtm0RunCtrl2 = u32Dtm0RunCtrl2;
      s_u32DtmRunCtrl2 = u32Dtm1RunCtrl2;
      s_bDtmRunConfigCaptured = TRUE;
    }
  }

  Bsp_PwmWave_DisableFrameUpdate();
  Bsp_PwmWave_ImmediateDisableAll();
  Bsp_PwmWave_SetActiveAndShadowSafeSignalLevels();
  if ((TRUE == bHardwareConfigValid) && (TRUE == s_bDtmRunConfigCaptured)) {
    Bsp_PwmWave_RestoreInitialDtmRunConfig();
    bHardwareConfigValid = Bsp_PwmWave_IsHardwareConfigValid(s_u32Dtm0RunCtrl2, s_u32DtmRunCtrl2);
  }

  if ((TRUE == bHardwareConfigValid) && (FALSE == Bsp_PwmWave_AreAllOutputsDisabled())) {
    bHardwareConfigValid = FALSE;
  }
  if (TRUE == bHardwareConfigValid) {
    Bsp_PwmWave_CapturePwm5Baseline(&tPwm5Baseline);
    bPwm5BaselineCaptured = TRUE;
    bHardwareConfigValid = Bsp_PwmWave_ConfigurePwm5Independent();
  }
  if (TRUE == bHardwareConfigValid) {
    bHardwareConfigValid = Bsp_PwmWave_ConfigureLuStopSynchronizer();
  }
  if (TRUE == bHardwareConfigValid) {
    Bsp_PwmWave_ConfigureDtmShutoff();
    Bsp_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
    bHardwareConfigValid = ((TRUE == Bsp_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Bsp_PwmWave_IsDtmShutoffConfigValid()) &&
                            (TRUE == Bsp_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Bsp_PwmWave_IsRunRequestSelected(FALSE))) ? TRUE : FALSE;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (TRUE == bHardwareConfigValid) {
    bStopTimingElapsed = Bsp_PwmWave_WaitForCarrierWraps(BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == bStopTimingElapsed) {
    Bsp_PwmWave_SetActiveAndShadowRunSignalLevels();
    Bsp_PwmWave_EnableAllAtCarrierBoundary();
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if ((TRUE == bHardwareConfigValid) && (TRUE == bStopTimingElapsed)) {
    bOutputsEnabled = Bsp_PwmWave_WaitForOutputState(TRUE);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == bHardwareConfigValid) {
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = BSP_PWM_WAVE_FAULT_HW_CONFIG;
  } else if ((FALSE == bOutputsEnabled) || (FALSE == bStopTimingElapsed)) {
    eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
    s_u32FaultFlags = BSP_PWM_WAVE_FAULT_HW_TIMEOUT;
  } else if (FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(FALSE)) {
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = BSP_PWM_WAVE_FAULT_HW_CONFIG;
  } else {
    s_bFrameConfigured = FALSE;
    s_bOutputPadsConfirmed = FALSE;
    s_bFaultLatched = FALSE;
    s_bCommonUpdatePending = FALSE;
    s_eConfiguredPwm5State = BSP_PWM_WAVE_PWM5_LOW;
    s_u32ConfiguredCarrierPeriod = 0U;
    s_u32TargetCarrierPeriod = 0U;
    s_u32FaultFlags = 0U;
    s_eState = BSP_PWM_WAVE_STATE_ARMED_LOW;
    s_bInitialized = TRUE;
  }

  if (BSP_PWM_WAVE_OK != eResult) {
    if (FALSE == Bsp_PwmWave_ForceSafeHardware()) {
      s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
    }
    Bsp_PwmWave_SelectCarrierBoundaryTrigger(FALSE);
    if (TRUE == bPwm5BaselineCaptured) {
      Bsp_PwmWave_RestorePwm5Baseline(&tPwm5Baseline);
      if (FALSE == Bsp_PwmWave_IsTomTopologyValid(FALSE)) {
        s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
      }
    }
    s_bInitialized = FALSE;
    s_bFrameConfigured = FALSE;
    s_bOutputPadsConfirmed = FALSE;
    s_bFaultLatched = FALSE;
    s_eState = BSP_PWM_WAVE_STATE_RESET_SAFE;
  }

  s_bInitInProgress = FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;
}

static Bsp_PwmWave_ResultType Bsp_PwmWave_ApplyRequestCold(Bsp_PwmWave_OutputRequestType eOutputRequest, const Bsp_PwmWave_FrameType *pFrame)
{
  Bsp_PwmWave_PreparedFrameType tPreparedFrame;
  Bsp_PwmWave_ResultType eResult;
  Bsp_PwmWave_StateType eSubmitState = BSP_PWM_WAVE_STATE_RESET_SAFE;
  uint32 u32OldCarrierPeriod;
  boolean bArmedLowSubmit = FALSE;
  boolean bPeriodChange = FALSE;
  boolean bPwm5Change = FALSE;
  boolean bCommonBoundaryChange = FALSE;
  boolean bFrameApplied = FALSE;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (TRUE == Bsp_PwmWave_gbEmergencyLatched) {
    return BSP_PWM_WAVE_E_FAULT_ACTIVE;
  }
  if (BSP_PWM_WAVE_OUTPUT_LOW == eOutputRequest) {
    return Bsp_PwmWave_RequestLowAtBoundary();
  }
  if (BSP_PWM_WAVE_OUTPUT_FRAME != eOutputRequest) {
    return BSP_PWM_WAVE_E_OUTPUT_REQUEST;
  }

  eResult = Bsp_PwmWave_ValidateAndPrepareFrame(pFrame, &tPreparedFrame);
  if (BSP_PWM_WAVE_OK != eResult) {
    return eResult;
  }
  if (FALSE == s_bInitialized) {
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if ((BSP_PWM_WAVE_STATE_RUN != s_eState) && (BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState)) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bCommonUpdatePending) {
    eResult = BSP_PWM_WAVE_E_BUSY;
  } else if ((BSP_PWM_WAVE_STATE_RUN == s_eState) && (FALSE == s_bFrameConfigured)) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else {
    u32OldCarrierPeriod = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
    if ((0U == u32OldCarrierPeriod) ||
        (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CM0 != (BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32OldCarrierPeriod))) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    } else {
      eSubmitState = s_eState;
      bArmedLowSubmit = (BSP_PWM_WAVE_STATE_ARMED_LOW == s_eState) ? TRUE : FALSE;
      bPeriodChange = (u32OldCarrierPeriod != pFrame->u32PeriodTicks) ? TRUE : FALSE;
      bPwm5Change = (pFrame->ePwm5State != s_eConfiguredPwm5State) ? TRUE : FALSE;
      bCommonBoundaryChange = ((TRUE == bPeriodChange) || ((BSP_PWM_WAVE_STATE_RUN == s_eState) && (TRUE == bPwm5Change))) ? TRUE : FALSE;
      if ((TRUE == bArmedLowSubmit) || (TRUE == bCommonBoundaryChange)) {
        Bsp_PwmWave_DisableArmInterrupt();
        EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_UPEN_DISABLE_COMMAND;
      } else {
        EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_WINDOW_UPEN_DISABLE_COMMAND;
      }
      eResult = BSP_PWM_WAVE_OK;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (BSP_PWM_WAVE_OK != eResult) {
    return eResult;
  }

  /* Arithmetic and validation are complete. Keep the eight normal window
   * stores outside the interrupt mask; only the final publish is serialized. */
  if ((TRUE == bArmedLowSubmit) || (TRUE == bCommonBoundaryChange)) {
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 = pFrame->u32PeriodTicks;
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 = pFrame->u32PeriodTicks >> 1U;
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0 = tPreparedFrame.u32Pwm5Cm0;
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR1 = tPreparedFrame.u32Pwm5Cm1;
  }
  /* The mapping is fixed and intentionally unrolled: the 50 kHz normal path
   * performs exactly eight window-shadow stores without a wrapper call. */
  EFTU_TOM_1_0->Channel[4U].CH_SR0 = tPreparedFrame.au32WindowCm0[0U];
  EFTU_TOM_1_0->Channel[4U].CH_SR1 = tPreparedFrame.au32WindowCm1[0U];
  EFTU_TOM_1_0->Channel[5U].CH_SR0 = tPreparedFrame.au32WindowCm0[1U];
  EFTU_TOM_1_0->Channel[5U].CH_SR1 = tPreparedFrame.au32WindowCm1[1U];
  EFTU_TOM_1_0->Channel[6U].CH_SR0 = tPreparedFrame.au32WindowCm0[2U];
  EFTU_TOM_1_0->Channel[6U].CH_SR1 = tPreparedFrame.au32WindowCm1[2U];
  EFTU_TOM_1_0->Channel[7U].CH_SR0 = tPreparedFrame.au32WindowCm0[3U];
  EFTU_TOM_1_0->Channel[7U].CH_SR1 = tPreparedFrame.au32WindowCm1[3U];
  if (TRUE == bArmedLowSubmit) {
    Bsp_PwmWave_SetShadowSignalLevels(pFrame, TRUE);
  } else if (TRUE == bPwm5Change) {
    /* CM0/CM1 alone are insufficient when PWM5 enters or leaves TOGGLE:
     * publish CH3 SL with the same common-boundary UPEN transaction. */
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
        EFTU_TOM_CHn_CTRL_SR_SL_SR((BSP_PWM_WAVE_PWM5_TOGGLE == pFrame->ePwm5State) ? 0U : 1U);
  }
  MCAL_DATA_SYNC_BARRIER();

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if ((s_eState != eSubmitState) || (TRUE == s_bCommonUpdatePending)) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if (TRUE == bCommonBoundaryChange) {
    s_eConfiguredPwm5State = pFrame->ePwm5State;
    s_u32TargetCarrierPeriod = pFrame->u32PeriodTicks;
    s_bCommonUpdatePending = TRUE;
    eResult = Bsp_PwmWave_ScheduleFrameAtCommonBoundaryLocked(u32OldCarrierPeriod);
  } else {
    if (TRUE == bArmedLowSubmit) {
      s_eConfiguredPwm5State = pFrame->ePwm5State;
      Bsp_PwmWave_ArmFrameUpdate();
    } else {
      EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_WINDOW_UPEN_ENABLE_COMMAND;
    }
    eResult = BSP_PWM_WAVE_OK;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if ((BSP_PWM_WAVE_OK == eResult) && (TRUE == bArmedLowSubmit)) {
    if (TRUE == Bsp_PwmWave_WaitForCarrierWraps(BSP_PWM_WAVE_FRAME_APPLY_VERIFY_WRAPS)) {
      bFrameApplied = Bsp_PwmWave_IsFrameApplied(pFrame, TRUE);
    }

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) {
      eResult = BSP_PWM_WAVE_E_STATE;
    } else if (FALSE == bFrameApplied) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
    } else {
      Bsp_PwmWave_CancelCommonUpdate();
      s_eConfiguredPwm5State = pFrame->ePwm5State;
      s_u32ConfiguredCarrierPeriod = pFrame->u32PeriodTicks;
      s_bFrameConfigured = TRUE;
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  if ((BSP_PWM_WAVE_OK == eResult) && (TRUE == bArmedLowSubmit)) {
    eResult = Bsp_PwmWave_ReleaseOutputAtBoundary();
  }

  return eResult;
}

Bsp_PwmWave_ResultType Bsp_PwmWave_ApplyRequest(Bsp_PwmWave_OutputRequestType eOutputRequest, const Bsp_PwmWave_FrameType *pFrame)
{
  Bsp_PwmWave_ResultType eResult;
  uint32 u32InterruptState;
  uint32 u32OldCarrierPeriod;
  uint32 u32NewCarrierPeriod;
  uint32 u32Pwm5Cm0 = 0U;
  uint32 u32Pwm5Cm1 = 0U;
  uint32 u32WindowWidth;
  boolean bPeriodChange;

  /* The 50 kHz RUN path trusts the single Core0 owner and the minimum 20 us
   * inter-submit interval declared by the public contract. Fixed and period-
   * change Frames both stop after Shadow publication; neither reads working
   * CMx registers. Lifecycle transitions and PWM5 mode changes stay cold. */
  if ((BSP_PWM_WAVE_OUTPUT_FRAME == eOutputRequest) && (NULL_PTR != pFrame) && (FALSE == Bsp_PwmWave_gbEmergencyLatched) &&
      (BSP_PWM_WAVE_STATE_RUN == s_eState) && (pFrame->ePwm5State == s_eConfiguredPwm5State)) {
    if (TRUE == s_bCommonUpdatePending) {
      return BSP_PWM_WAVE_E_BUSY;
    }

    u32OldCarrierPeriod = s_u32ConfiguredCarrierPeriod;
    u32NewCarrierPeriod = pFrame->u32PeriodTicks;
    bPeriodChange = (u32NewCarrierPeriod != u32OldCarrierPeriod) ? TRUE : FALSE;
    if ((TRUE == bPeriodChange) && ((u32NewCarrierPeriod < BSP_PWM_WAVE_MIN_PERIOD_TICKS) || (u32NewCarrierPeriod > BSP_PWM_WAVE_MAX_PERIOD_TICKS))) {
      return BSP_PWM_WAVE_E_PERIOD;
    }

    if (TRUE == bPeriodChange) {
      u32Pwm5Cm0 = BSP_PWM_WAVE_PWM5_CARRIER_PERIODS * u32NewCarrierPeriod;
      if (BSP_PWM_WAVE_PWM5_LOW == s_eConfiguredPwm5State) {
        u32Pwm5Cm1 = 0U;
      } else if (BSP_PWM_WAVE_PWM5_HIGH == s_eConfiguredPwm5State) {
        u32Pwm5Cm1 = u32Pwm5Cm0;
      } else {
        u32Pwm5Cm1 = u32NewCarrierPeriod;
      }
      EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_UPEN_DISABLE_COMMAND;
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 = u32NewCarrierPeriod;
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 = u32NewCarrierPeriod >> 1U;
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR0 = u32Pwm5Cm0;
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_PWM5_CHANNEL].CH_SR1 = u32Pwm5Cm1;
    } else {
      EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_WINDOW_UPEN_DISABLE_COMMAND;
    }
    /* The RUN owner guarantees CmpA <= CmpB < Period. Normal windows take one
     * compare and two stores; only zero/narrow endpoints need the second test. */
    u32WindowWidth = pFrame->aWindow[0U].u32CmpB - pFrame->aWindow[0U].u32CmpA;
    if (u32WindowWidth >= BSP_PWM_WAVE_DEAD_TIME_TICKS) {
      EFTU_TOM_1_0->Channel[4U].CH_SR0 = pFrame->aWindow[0U].u32CmpA;
      EFTU_TOM_1_0->Channel[4U].CH_SR1 = pFrame->aWindow[0U].u32CmpB;
    } else if (0U == u32WindowWidth) {
      EFTU_TOM_1_0->Channel[4U].CH_SR0 = 0U;
      EFTU_TOM_1_0->Channel[4U].CH_SR1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    } else {
      EFTU_TOM_1_0->Channel[4U].CH_SR0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      EFTU_TOM_1_0->Channel[4U].CH_SR1 = 0U;
    }

    u32WindowWidth = pFrame->aWindow[1U].u32CmpB - pFrame->aWindow[1U].u32CmpA;
    if (u32WindowWidth >= BSP_PWM_WAVE_DEAD_TIME_TICKS) {
      EFTU_TOM_1_0->Channel[5U].CH_SR0 = pFrame->aWindow[1U].u32CmpA;
      EFTU_TOM_1_0->Channel[5U].CH_SR1 = pFrame->aWindow[1U].u32CmpB;
    } else if (0U == u32WindowWidth) {
      EFTU_TOM_1_0->Channel[5U].CH_SR0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      EFTU_TOM_1_0->Channel[5U].CH_SR1 = 0U;
    } else {
      EFTU_TOM_1_0->Channel[5U].CH_SR0 = 0U;
      EFTU_TOM_1_0->Channel[5U].CH_SR1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    }

    u32WindowWidth = pFrame->aWindow[2U].u32CmpB - pFrame->aWindow[2U].u32CmpA;
    if (u32WindowWidth >= BSP_PWM_WAVE_DEAD_TIME_TICKS) {
      EFTU_TOM_1_0->Channel[6U].CH_SR0 = pFrame->aWindow[2U].u32CmpA;
      EFTU_TOM_1_0->Channel[6U].CH_SR1 = pFrame->aWindow[2U].u32CmpB;
    } else if (0U == u32WindowWidth) {
      EFTU_TOM_1_0->Channel[6U].CH_SR0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      EFTU_TOM_1_0->Channel[6U].CH_SR1 = 0U;
    } else {
      EFTU_TOM_1_0->Channel[6U].CH_SR0 = 0U;
      EFTU_TOM_1_0->Channel[6U].CH_SR1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    }

    u32WindowWidth = pFrame->aWindow[3U].u32CmpB - pFrame->aWindow[3U].u32CmpA;
    if (u32WindowWidth >= BSP_PWM_WAVE_DEAD_TIME_TICKS) {
      EFTU_TOM_1_0->Channel[7U].CH_SR0 = pFrame->aWindow[3U].u32CmpA;
      EFTU_TOM_1_0->Channel[7U].CH_SR1 = pFrame->aWindow[3U].u32CmpB;
    } else if (0U == u32WindowWidth) {
      EFTU_TOM_1_0->Channel[7U].CH_SR0 = 0U;
      EFTU_TOM_1_0->Channel[7U].CH_SR1 = BSP_PWM_WAVE_TOM_MAX_VALUE;
    } else {
      EFTU_TOM_1_0->Channel[7U].CH_SR0 = BSP_PWM_WAVE_TOM_MAX_VALUE;
      EFTU_TOM_1_0->Channel[7U].CH_SR1 = 0U;
    }
    MCAL_DATA_SYNC_BARRIER();

    /* Emergency may preempt the Shadow stores. Serialize only the final UPEN
     * or IRQ publication and recheck the permanent latch before committing. */
    u32InterruptState = Bsp_PwmWave_EnterFastCommit();
    if ((TRUE == Bsp_PwmWave_gbEmergencyLatched) || (TRUE == s_bFaultLatched)) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (TRUE == bPeriodChange) {
      /* Direct one-shot IRQ172 arm: no SchM nesting, topology readback or
       * generic Pwm notification dispatch is allowed in this hot branch. */
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN = 0U;
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = BSP_PWM_WAVE_IRQ_STATUS_MASK;
      BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_NVIC_ICPR5_ADDRESS) = BSP_PWM_WAVE_IRQ172_PENDING_MASK;
      s_u32TargetCarrierPeriod = u32NewCarrierPeriod;
      s_u32ArmOldCarrierPeriod = u32OldCarrierPeriod;
      s_u8ArmInterruptCount = 0U;
      s_bCommonUpdatePending = TRUE;
      MCAL_DATA_SYNC_BARRIER();
      EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN = EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK;
      MCAL_DATA_SYNC_BARRIER();
      eResult = BSP_PWM_WAVE_OK;
    } else {
      EFTU_TOM_1_0->TGC_GLB_CTRL = BSP_PWM_WAVE_GLB_CTRL_OWNED_BASE | BSP_PWM_WAVE_WINDOW_UPEN_ENABLE_COMMAND;
      eResult = BSP_PWM_WAVE_OK;
    }
    Bsp_PwmWave_ExitFastCommit(u32InterruptState);
    return eResult;
  }

  return Bsp_PwmWave_ApplyRequestCold(eOutputRequest, pFrame);
}

Bsp_PwmWave_ResultType Bsp_PwmWave_ConfirmArmedLowInternal(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (TRUE == Bsp_PwmWave_gbEmergencyLatched) {
    return BSP_PWM_WAVE_E_FAULT_ACTIVE;
  }
  if (FALSE == s_bInitialized) {
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if ((BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) || (TRUE == s_bCommonUpdatePending)) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if ((FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Bsp_PwmWave_IsPhysicalArmedLowValid())) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_bOutputPadsConfirmed = TRUE;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

static Bsp_PwmWave_ResultType Bsp_PwmWave_ReleaseOutputAtBoundary(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;
  boolean bOutputActivity = FALSE;
  boolean bRequirePwm5Activity = FALSE;
  boolean bRequirePwm5LowActivity = FALSE;
  uint8 u8RequiredVerifyWraps = BSP_PWM_WAVE_OUTPUT_RELEASE_VERIFY_WRAPS;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bCommonUpdatePending) {
    eResult = BSP_PWM_WAVE_E_BUSY;
  } else if (FALSE == s_bFrameConfigured) {
    eResult = BSP_PWM_WAVE_E_NO_FRAME;
  } else if (FALSE == s_bOutputPadsConfirmed) {
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else if ((FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Bsp_PwmWave_IsPhysicalArmedLowValid())) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else {
    bRequirePwm5Activity = (BSP_PWM_WAVE_PWM5_LOW != s_eConfiguredPwm5State) ? TRUE : FALSE;
    bRequirePwm5LowActivity = (BSP_PWM_WAVE_PWM5_TOGGLE == s_eConfiguredPwm5State) ? TRUE : FALSE;
    if (BSP_PWM_WAVE_PWM5_TOGGLE == s_eConfiguredPwm5State) {
      /* After two settle wraps, observe one complete two-carrier-period PWM5 cycle. */
      u8RequiredVerifyWraps = (uint8)(BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS + BSP_PWM_WAVE_PWM5_CARRIER_PERIODS);
    }

    if (FALSE == Bsp_PwmWave_SetRunRequest(TRUE)) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (BSP_PWM_WAVE_OK == eResult) {
    bOutputActivity = Bsp_PwmWave_WaitForOutputActivity(u8RequiredVerifyWraps, bRequirePwm5Activity, bRequirePwm5LowActivity);

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (BSP_PWM_WAVE_STATE_ARMED_LOW != s_eState) {
      eResult = BSP_PWM_WAVE_E_STATE;
    } else if ((FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(TRUE)) || (FALSE == Bsp_PwmWave_AreOutputPinModesValid()) ||
               (FALSE == Bsp_PwmWave_AreOutputPadInputsEnabled())) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    } else if (FALSE == bOutputActivity) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
    } else {
      s_eState = BSP_PWM_WAVE_STATE_RUN;
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  return eResult;
}

static Bsp_PwmWave_ResultType Bsp_PwmWave_RequestLowAtBoundary(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;
  boolean bBoundaryTimingElapsed = FALSE;
  boolean bCommonUpdateDrainRequired;
  boolean bAlreadyLow = FALSE;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return BSP_PWM_WAVE_E_UNINIT;
  }

  /* The lifecycle owner stops producing Frames first. Same-period shadow data
   * needs no bookkeeping; only a CH0/CH3 common update must be drained. */
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    bCommonUpdateDrainRequired = FALSE;
  } else if (BSP_PWM_WAVE_STATE_ARMED_LOW == s_eState) {
    Bsp_PwmWave_CancelCommonUpdate();
    bCommonUpdateDrainRequired = FALSE;
    bAlreadyLow = TRUE;
  } else {
    bCommonUpdateDrainRequired = s_bCommonUpdatePending;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((BSP_PWM_WAVE_OK != eResult) || (TRUE == bAlreadyLow)) {
    return eResult;
  }
  if (TRUE == bCommonUpdateDrainRequired) {
    (void)Bsp_PwmWave_WaitForCarrierWraps(BSP_PWM_WAVE_FRAME_APPLY_VERIFY_WRAPS);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (TRUE == s_bCommonUpdatePending) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_TIMEOUT);
    eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
  } else if (BSP_PWM_WAVE_STATE_RUN != s_eState) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if (FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(TRUE)) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else {
    if (FALSE == Bsp_PwmWave_SetRunRequest(FALSE)) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (BSP_PWM_WAVE_OK == eResult) {
    bBoundaryTimingElapsed = Bsp_PwmWave_WaitForCarrierWraps(BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS);

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (BSP_PWM_WAVE_STATE_RUN != s_eState) {
      eResult = BSP_PWM_WAVE_E_STATE;
    } else if (FALSE == bBoundaryTimingElapsed) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
    } else if ((FALSE == Bsp_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Bsp_PwmWave_IsPhysicalArmedLowValid())) {
      (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    } else {
      s_eState = BSP_PWM_WAVE_STATE_ARMED_LOW;
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  return eResult;
}

Bsp_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }

  /* Publish the system-lifetime latch before touching the hardware. This also
   * blocks a later Bsp_Pwm_Init() if initialization has not completed. */
  Bsp_PwmWave_gbEmergencyLatched = TRUE;
  MCAL_DATA_SYNC_BARRIER();
  if (FALSE == s_bInitialized) {
    s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST;
    s_bFaultLatched = TRUE;
    s_eState = BSP_PWM_WAVE_STATE_FAULT_LATCHED;
    MCAL_DATA_SYNC_BARRIER();
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST)) {
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Bsp_PwmWave_ResultType Bsp_PwmWave_ClearFault(void)
{
  Bsp_PwmWave_ResultType eResult = BSP_PWM_WAVE_OK;
  boolean bHardwareConfigValid = FALSE;
  boolean bEnableIssued = FALSE;
  boolean bOutputsEnabled = FALSE;
  boolean bStopTimingElapsed = FALSE;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return BSP_PWM_WAVE_E_WRONG_CORE;
  }
  if (TRUE == Bsp_PwmWave_gbEmergencyLatched) {
    return BSP_PWM_WAVE_E_FAULT_ACTIVE;
  }
  if (FALSE == s_bInitialized) {
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == s_bFaultLatched) {
    eResult = BSP_PWM_WAVE_E_STATE;
  } else if (0U != (s_u32FaultFlags & BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST)) {
    /* EmergencyShutdown is a system-lifetime latch. Only a system reset may
     * permit PWM output again; ClearFault must never re-enable the channels. */
    eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (FALSE == s_bOutputPadsConfirmed) {
    /* The fixed eFTU pin-mux or startup ARMED_LOW state was never confirmed;
     * recovery requires a reset/re-initialization sequence. */
    s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
    eResult = BSP_PWM_WAVE_E_HW_CONFIG;
  } else {
    bHardwareConfigValid = Bsp_PwmWave_ForceSafeHardware();
    if (TRUE == bHardwareConfigValid) {
      bHardwareConfigValid = Bsp_PwmWave_ConfigureLuStopSynchronizer();
    }
    if (TRUE == bHardwareConfigValid) {
      Bsp_PwmWave_ConfigureDtmShutoff();
      Bsp_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
      bHardwareConfigValid = ((TRUE == Bsp_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Bsp_PwmWave_IsDtmShutoffConfigValid()) &&
                              (TRUE == Bsp_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Bsp_PwmWave_IsRunRequestSelected(FALSE)))
                                 ? TRUE
                                 : FALSE;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if ((BSP_PWM_WAVE_OK == eResult) && (TRUE == bHardwareConfigValid)) {
    /* No interrupt masking while the request crosses the CH0 zero boundaries. */
    bStopTimingElapsed = Bsp_PwmWave_WaitForCarrierWraps(BSP_PWM_WAVE_REQUEST_SETTLE_WRAPS);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (BSP_PWM_WAVE_OK == eResult) {
    if (0U != (s_u32FaultFlags & BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST)) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (FALSE == s_bFaultLatched) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (FALSE == bHardwareConfigValid) {
      s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    } else if (FALSE == bStopTimingElapsed) {
      s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_TIMEOUT;
      eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
    } else if ((FALSE == Bsp_PwmWave_IsLuStopSynchronizerConfigValid()) || (FALSE == Bsp_PwmWave_IsDtmShutoffConfigValid()) ||
               (FALSE == Bsp_PwmWave_IsCarrierBoundaryTriggerSelected()) || (FALSE == Bsp_PwmWave_IsRunRequestSelected(FALSE)) ||
               (FALSE == Bsp_PwmWave_AreAllOutputsDisabled())) {
      s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = BSP_PWM_WAVE_E_HW_CONFIG;
    } else {
      Bsp_PwmWave_SetActiveAndShadowRunSignalLevels();
      Bsp_PwmWave_EnableAllAtCarrierBoundary();
      bEnableIssued = TRUE;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (TRUE == bEnableIssued) {
    bOutputsEnabled = Bsp_PwmWave_WaitForOutputState(TRUE);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((BSP_PWM_WAVE_OK == eResult) && (TRUE == bEnableIssued)) {
    if (0U != (s_u32FaultFlags & BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST)) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (FALSE == s_bFaultLatched) {
      eResult = BSP_PWM_WAVE_E_FAULT_ACTIVE;
    } else if ((TRUE == bOutputsEnabled) && (TRUE == Bsp_PwmWave_IsRuntimeTopologyValid(FALSE)) && (TRUE == s_bOutputPadsConfirmed) &&
               (TRUE == Bsp_PwmWave_IsPhysicalArmedLowValid())) {
      s_bFrameConfigured = FALSE;
      s_bCommonUpdatePending = FALSE;
      s_bFaultLatched = FALSE;
      s_eConfiguredPwm5State = BSP_PWM_WAVE_PWM5_LOW;
      s_u32ConfiguredCarrierPeriod = 0U;
      s_u32TargetCarrierPeriod = 0U;
      s_u32FaultFlags = 0U;
      s_eState = BSP_PWM_WAVE_STATE_ARMED_LOW;
    } else {
      if (FALSE == bOutputsEnabled) {
        s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_TIMEOUT;
        eResult = BSP_PWM_WAVE_E_HW_TIMEOUT;
      } else {
        s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
        eResult = BSP_PWM_WAVE_E_HW_CONFIG;
      }
    }
  }

  if ((BSP_PWM_WAVE_OK != eResult) && (TRUE == s_bFaultLatched)) {
    if (FALSE == Bsp_PwmWave_ForceSafeHardware()) {
      s_u32FaultFlags |= BSP_PWM_WAVE_FAULT_HW_CONFIG;
    }
    s_bFaultLatched = TRUE;
    s_eState = BSP_PWM_WAVE_STATE_FAULT_LATCHED;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Bsp_PwmWave_ResultType Bsp_PwmWave_GetStatus(Bsp_PwmWave_StatusType *pStatus)
{
  Bsp_PwmWave_ResultType eResult;

  if (NULL_PTR == pStatus) {
    return BSP_PWM_WAVE_E_PARAM_POINTER;
  }
  if (FALSE == s_bInitialized) {
    pStatus->eState = (TRUE == Bsp_PwmWave_gbEmergencyLatched) ? BSP_PWM_WAVE_STATE_FAULT_LATCHED : s_eState;
    pStatus->bFrameConfigured = FALSE;
    pStatus->bCommonUpdatePending = FALSE;
    pStatus->bFaultLatched = Bsp_PwmWave_gbEmergencyLatched;
    pStatus->u32FaultFlags = s_u32FaultFlags;
    return BSP_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  pStatus->eState = s_eState;
  pStatus->bFrameConfigured = s_bFrameConfigured;
  pStatus->bCommonUpdatePending = s_bCommonUpdatePending;
  pStatus->bFaultLatched = s_bFaultLatched;
  pStatus->u32FaultFlags = s_u32FaultFlags;
  eResult = (TRUE == s_bInitialized) ? BSP_PWM_WAVE_OK : BSP_PWM_WAVE_E_UNINIT;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}


/************ Interrupt Map *******************/
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
void EFTU1_TOM_0_7_IRQHandler(void)
{
  uint32 u32StartCycles;
  uint32 u32RawCycles;
  uint32 u32OverheadCycles;
  uint32 u32NetCycles;
  uint32 u32MaxNetCycles;
  uint64 u64ElapsedNanoseconds;
  uint32 u32IrqEnable;
  uint32 u32IrqStatus;

  u32StartCycles = Bsp_Dwt_MeasureStart();

  Bsp_PwmWave_gu32Irq172MeasureCount++;
  u32IrqEnable = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN;
  u32IrqStatus = EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST;

  /* IRQ172 is dedicated to CH0 CCU0. The fast handler acknowledges before
   * phase checking and disables the one-shot source after a successful arm. */
  if (((u32IrqEnable & EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK) != 0U) && ((u32IrqStatus & EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK) != 0U)) {
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK;
    Bsp_PwmWave_CarrierBoundaryNotification();
  } else if ((TRUE == s_bCommonUpdatePending) && (FALSE == Bsp_PwmWave_IsArmNotificationHwEnabled())) {
    (void)Bsp_PwmWave_EnterFault(BSP_PWM_WAVE_FAULT_HW_CONFIG);
  } else {
    EFTU_TOM_1_0->Channel[BSP_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = BSP_PWM_WAVE_IRQ_STATUS_MASK;
    BSP_PWM_WAVE_REG32(BSP_PWM_WAVE_NVIC_ICPR5_ADDRESS) = BSP_PWM_WAVE_IRQ172_PENDING_MASK;
    MCAL_DATA_SYNC_BARRIER();
  }

  u32RawCycles = Bsp_Dwt_MeasureElapsedCycles(u32StartCycles);
  if (TRUE == g_tDwtIrq172Result.bInitOk) {
    u32OverheadCycles = g_tDwtIrq172Result.u32OverheadCycles;
    if (u32RawCycles >= u32OverheadCycles) {
      u32NetCycles = u32RawCycles - u32OverheadCycles;
    } else {
      u32NetCycles = 0U;
    }
    u32MaxNetCycles = g_tDwtIrq172Result.u32MaxNetCycles;
    if (u32NetCycles > u32MaxNetCycles) {
      u32MaxNetCycles = u32NetCycles;
    }
    u64ElapsedNanoseconds = Bsp_Dwt_CyclesToNanoseconds(u32NetCycles, BSP_PWM_DWT_CORE_CLOCK_HZ);
    g_tDwtIrq172Result.u32RawCycles = u32RawCycles;
    g_tDwtIrq172Result.u32NetCycles = u32NetCycles;
    g_tDwtIrq172Result.u32MaxNetCycles = u32MaxNetCycles;
    g_tDwtIrq172Result.u64ElapsedNanoseconds = u64ElapsedNanoseconds;
    g_tDwtIrq172Result.u32SampleCount++;
  }

  EXIT_INTERRUPT();
}
#endif

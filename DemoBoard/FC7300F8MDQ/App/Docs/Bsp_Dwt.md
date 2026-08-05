# Bsp_Dwt

`Bsp_Dwt` 是基于每个 Cortex-M7 Core 私有 DWT `CYCCNT` 的短区间运行耗时测量工具。它不在启动期自动使能，使用方应在当前 Core 的 `Bsp_Mcu_Init()` 完成后显式调用 `Bsp_Dwt_Init()`，再用强制内联的 `Bsp_Dwt_MeasureStart()` 和 `Bsp_Dwt_MeasureElapsedCycles()` 包住目标代码。原始 `cycles` 是权威结果；纳秒值依赖调用者传入的实际 Core 时钟。

当前配置交叉验证结果为 Core `300 MHz`、Bus `150 MHz`：`Mcu.xdm` 的 `McuCoreClockFrequency` 和 `McuClockReferencePoint_Sys` 均为 `3.0E8`，生成的 `Mcu_PBcfg.c` 使用 PLL0 且 Core Divider 为 1。因此当前配置下 1 cycle 约为 `3.333 ns`，32 位计数器约每 `14.3166 s` 回绕一次。若 EB 时钟配置改变，必须传入新的实际 Core 时钟；测量窗口内若发生动态调频，单一频率不能准确换算时间。

推荐用法如下。先执行一次待测路径完成 Cache/分支预测 warm-up，再校准空测量窗口的最小开销；原始值保留，净值只在不小于开销时做饱和扣减：

```c
#include "Bsp_Dwt.h"

uint32 u32OverheadCycles;
uint32 u32StartCycles;
uint32 u32RawCycles;
uint32 u32NetCycles;
uint64 u64ElapsedNanoseconds;

if (TRUE == Bsp_Dwt_Init()) {
  TargetCode(); /* Warm-up；必须确保结果被使用，避免目标代码被优化掉。 */
  u32OverheadCycles = Bsp_Dwt_CalibrateOverheadCycles();

  u32StartCycles = Bsp_Dwt_MeasureStart();
  TargetCode();
  u32RawCycles = Bsp_Dwt_MeasureElapsedCycles(u32StartCycles);

  u32NetCycles = (u32RawCycles >= u32OverheadCycles) ? (u32RawCycles - u32OverheadCycles) : 0U;
  u64ElapsedNanoseconds = Bsp_Dwt_CyclesToNanoseconds(u32NetCycles, 300000000U);
}
```

测量边界在开始和结束读数前执行 `DSB+ISB`：排空此前显式内存访问并同步流水线，空窗口开销由校准值表征。默认不屏蔽中断，因此 IRQ、异常和抢占周期会计入，代表包含系统干扰的实际完成延迟；如果只评估纯代码成本，应由测试调用者在极短窗口内正确保存并恢复中断状态，不能无条件 `cpsie i`。断点进入 Debug Halt 的时间不计入，因为 Arm 规定 Halt 时 `CYCCNT` 停止。不同 Core 的 DWT 计数器彼此独立，开始和结束必须在同一 Core 上读取，跨核快照不能直接比较。

手册证据链如下：Armv7-M Architecture Reference Manual 原 PDF 第 706～707 页说明 `DEMCR.TRCENA[24]` 是 DWT/ITM 全局使能，且 `TRCENA=0` 时 DWT 读值为 UNKNOWN；第 731 页说明 `CYCCNT` 是每个 processor clock 周期递增、溢出回零、Debug Halt 时暂停的自由运行 32 位计数器；第 738、740～741 页分别定义 `NOCYCCNT[25]`、`CYCCNTENA[0]` 和 `DWT_CYCCNT=0xE0001004`。Cortex-M7 TRM 原 PDF 第 131 页给出同一地址和复位值。FC7300F8MDQ Reference Manual 原 PDF 第 82、84 页确认当前芯片实现 DWT；第 413 页说明 debug/trace 寄存器默认在 system reset 中保留。

FC7300F8MDQ Errata V0.5 原 PDF 第 10 页的 `ERR_Debug_3514112` 是硬边界：Debug Halt、CYCCNT 活动时复位、复位后读取可能触发 lockstep error。当前 FC_Project 的 `system_init()` 已同步为先保留式置 `TRCENA`、再清 `DWT_CTRL.CYCCNTENA`、最后清 `CYCCNT`；主动调试复位前仍应调用 `Bsp_Dwt_DeInit()`，若 Core 已经 Halt 无法执行应用代码，则由 Ozone/J-Link 复位流程在 reset 前清 `CYCCNTENA`。这些是 Manual、PDF、当前源码和配置的静态交叉验证，不能替代 Windows FC IDE Build、Ozone 寄存器读回或板级运行测试。

`Bsp_Dwt_Init()` 在当前 Core 上初始化并验证周期计数器。它先以读改写方式置 `DEMCR.TRCENA`，保留调试器可能设置的 vector-catch/DebugMonitor 位；随后保存 `DWT_CTRL`、清 `CYCCNTENA`、检查 `NOCYCCNT`，再把计数值清零并重新使能。最后执行一次完整空测量窗口，确认 `CYCCNT` 实际递增；若递增失败，会重新关闭计数器。

该函数没有输入参数和输出参数。初始化会把当前 Core 的 `CYCCNT` 清零，并可能影响调试器正在进行的 DWT profiling；不要与其他 CYCCNT 使用者并发管理同一 Core 的计数器。

| 返回值 | 含义 |
| --- | --- |
| `TRUE` | 当前 Core 支持 CYCCNT，使能位写回成功，且两次同步读数之间计数器实际递增 |
| `FALSE` | `NOCYCCNT` 表示不支持，`CYCCNTENA` 写入未生效，或使能后计数器没有递增；最后一种失败会重新清除 `CYCCNTENA` |

当前源码中的直接调用场景如下：

1. 当前工作树尚无业务调用点；使用方应在对应 Core 的 `Bsp_Mcu_Init()` 完成后显式调用，并检查返回值后再测量。

```c
boolean Bsp_Dwt_Init(void)
{
  uint32 u32DwtCtrl;  // 保存置 TRCENA 后读到的 DWT_CTRL，用于能力检查并保留其他 DWT 配置位
  uint32 u32StartCycles;  // 保存启用后的首次同步读数，用于确认计数器确实递增

  // 先全局开放 DWT 寄存器访问；使用 RMW，避免覆盖调试器设置的 DEMCR 其他位。
  REG_BIT_SET32(BSP_DWT_DEMCR_ADDRESS, BSP_DWT_DEMCR_TRCENA_MASK);

  u32DwtCtrl = REG_READ32(BSP_DWT_CTRL_ADDRESS);  // TRCENA 已置位，此时读取 NOCYCCNT 才有可靠语义
  REG_WRITE32(BSP_DWT_CTRL_ADDRESS, u32DwtCtrl & (~BSP_DWT_CTRL_CYCCNTENA_MASK));  // 先停止可能跨复位保留的计数
  // 不支持周期计数时保持 CYCCNTENA 清零，不访问未实现的 CYCCNT 值。
  if (0U != (u32DwtCtrl & BSP_DWT_CTRL_NOCYCCNT_MASK)) {
    return FALSE;
  }

  // 从确定的零值开始，并只改变 DWT_CTRL 的 CYCCNTENA 位。
  REG_WRITE32(BSP_DWT_CYCCNT_ADDRESS, 0U);  // 计数器已停止，清零不会污染正在进行的测量
  REG_BIT_SET32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);  // 开始按当前 Core processor clock 计数
  // 写回失败通常意味着寄存器被锁或实现不可用，不能继续给出伪测量结果。
  if (0U == (REG_READ32(BSP_DWT_CTRL_ADDRESS) & BSP_DWT_CTRL_CYCCNTENA_MASK)) {
    return FALSE;
  }

  // 用完整同步边界验证实际递增；若失败则恢复为禁用，避免留下“已初始化”的假象。
  u32StartCycles = Bsp_Dwt_MeasureStart();  // 取得验证窗口起点
  if (0U == Bsp_Dwt_MeasureElapsedCycles(u32StartCycles)) {
    REG_BIT_CLEAR32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);  // 失败回退，保持复位安全状态
    return FALSE;
  }

  return TRUE;  // 能力、使能写回和运行检查均通过
}
```

`Bsp_Dwt_DeInit()` 关闭当前 Core 的 `CYCCNT`，用于停止测量以及在可执行应用代码时为调试复位做准备。它只清 `DWT_CTRL.CYCCNTENA`，不清 `DEMCR.TRCENA`，因此不会主动关闭 ITM 或其他 DWT 功能；若全局 DWT 已禁用，则不读取语义不确定的 DWT_CTRL。

该函数返回类型为 `void`，没有输入、返回值或输出参数。它不能在 Core 已 Halt 后自行执行，因此 Ozone/J-Link 发起的 Halt+Reset 仍需由调试脚本在 reset 前清计数使能。

当前源码中的直接调用场景如下：

1. 当前工作树尚无直接调用点；完成测量或主动复位前由使用方显式调用。

```c
void Bsp_Dwt_DeInit(void)
{
  // TRCENA 已为 0 时 DWT 整体停止，不再读取语义不确定的 DWT_CTRL。
  // 不清全局 TRCENA，避免影响调试器或其他 ITM/DWT 使用者。
  if (0U != (REG_READ32(BSP_DWT_DEMCR_ADDRESS) & BSP_DWT_DEMCR_TRCENA_MASK)) {  // 判断 DWT 访问是否有效
    REG_BIT_CLEAR32(BSP_DWT_CTRL_ADDRESS, BSP_DWT_CTRL_CYCCNTENA_MASK);  // 关闭当前 Core 的周期计数
  }
}
```

`Bsp_Dwt_CalibrateOverheadCycles()` 连续执行 16 次完整的空测量窗口，并返回最小周期数，用于估计当前构建、当前 Core 和当前 Cache 状态下的起止边界开销。取最小值可降低偶发中断或抢占对校准的抬高，但不能消除 Cache、Flash wait-state、总线争用和测量位置差异。

该函数没有输入参数和输出参数，调用前必须已经成功执行 `Bsp_Dwt_Init()`。它不会自动从后续原始测量中扣减开销，使用方应保留 raw cycles，并在 `raw >= overhead` 时做饱和扣减。

| 返回值 | 含义 |
| --- | --- |
| `0U` | 16 个空窗口的最小差值为零，通常表示 CYCCNT 未运行或初始化前误调用；不能据此当作“零开销” |
| `1U`～`UINT32_MAX` | 16 个完整空测量窗口中的最小周期数；只对当前构建和运行条件具有代表性 |

当前源码中的直接调用场景如下：

1. 当前工作树尚无业务调用点；推荐在 warm-up 后、正式采样前调用一次。

```c
uint32 Bsp_Dwt_CalibrateOverheadCycles(void)
{
  uint32 u32MinimumCycles = 0xFFFFFFFFU;  // 保存目前观察到的最小完整空窗口开销
  uint32 u32StartCycles;  // 保存每个校准样本的起点
  uint32 u32ElapsedCycles;  // 保存每个空窗口的原始周期差
  uint8 u8Sample;  // 遍历固定的 16 个校准样本

  // 多次采样并取最小值，使被中断或抢占抬高的样本不会决定最终开销。
  for (u8Sample = 0U; u8Sample < BSP_DWT_OVERHEAD_SAMPLES; u8Sample++) {
    u32StartCycles = Bsp_Dwt_MeasureStart();  // 执行与正式测量相同的起点屏障和读数
    u32ElapsedCycles = Bsp_Dwt_MeasureElapsedCycles(u32StartCycles);  // 空窗口仍包含终点屏障和读数
    if (u32ElapsedCycles < u32MinimumCycles) {
      u32MinimumCycles = u32ElapsedCycles;  // 保存当前更小、受干扰更少的样本
    }
  }

  return u32MinimumCycles;  // 返回 raw overhead，由调用者决定是否饱和扣减
}
```

`Bsp_Dwt_CyclesToNanoseconds()` 按调用者给出的 Core 时钟把周期数换算为整数纳秒，并通过加半个分母做四舍五入。乘法使用 `uint64`，`uint32` 最大周期数乘 `10^9` 仍在当前 `uint64` 范围内。该函数不读取硬件时钟，也不验证传入频率是否与测量窗口一致。

该函数没有输出参数。`u32Cycles` 是已经决定是否扣除开销的周期数；`u32CoreClockHz` 必须是测量期间的 processor clock，而不是当前配置中的 150 MHz Bus/eFTU 时钟。

| 返回值 | 含义 |
| --- | --- |
| `0ULL` | `u32CoreClockHz == 0U`，或零周期/四舍五入后结果为零 |
| 其他 `uint64` 值 | 按 `round(cycles × 10^9 / coreClockHz)` 得到的整数纳秒 |

当前源码中的直接调用场景如下：

1. 当前工作树尚无业务调用点；示例按当前 EB 配置传入 `300000000U`。

```c
uint64 Bsp_Dwt_CyclesToNanoseconds(uint32 u32Cycles, uint32 u32CoreClockHz)
{
  uint64 u64Nanoseconds;  // 保存使用 64 位中间值计算出的整数纳秒

  // 零频率没有换算意义；提前返回也避免整数除零。
  // 调用者负责保证该频率在整个测量窗口内真实有效。
  if (0U == u32CoreClockHz) {
    return 0ULL;  // 与零周期结果相同，调用者必须结合输入参数解释
  }

  // 先乘 10^9，再加半个分母实现最近整数舍入；当前 uint32 周期上界不会溢出 uint64。
  u64Nanoseconds = (((uint64)u32Cycles * 1000000000ULL) + ((uint64)u32CoreClockHz / 2ULL)) / (uint64)u32CoreClockHz;
  return u64Nanoseconds;  // raw cycles 仍是权威值，纳秒精度受输入时钟准确度约束
}
```

`Bsp_Dwt_MeasureStart()` 是定义在头文件中的强制内联起点快照函数。它先执行 `DSB+ISB`，确保前序显式内存访问完成并同步流水线，再读取当前 Core 的 `DWT_CYCCNT`；读取后的编译器屏障阻止待测代码被编译器移动到起点之前。函数不检查初始化状态，以保持热路径最小开销。

该函数没有输入参数和输出参数。

| 返回值 | 含义 |
| --- | --- |
| `0U`～`UINT32_MAX` | 当前 Core 的 32 位 CYCCNT 起点快照；数值本身不是时长，也不能与其他 Core 的快照直接比较 |

当前源码中的直接调用场景如下：

1. `Bsp_Dwt_Init()` 用它取得运行检查窗口的起点。
2. `Bsp_Dwt_CalibrateOverheadCycles()` 每个空窗口调用一次，形成与正式测量一致的起点开销。

```c
LOCAL_INLINE uint32 Bsp_Dwt_MeasureStart(void)
{
  uint32 u32StartCycles;  // 保存完成起点同步后的 CYCCNT 快照

  // 排空前序显式内存访问并同步流水线，使起点不包含调用前尚未完成的工作。
  BSP_DWT_MEASUREMENT_BARRIER();
  u32StartCycles = REG_READ32(BSP_DWT_CYCCNT_ADDRESS);  // 读取当前 Core 私有的 32 位自由运行计数器
  BSP_DWT_COMPILER_BARRIER();  // 禁止编译器把后续待测代码上移到读数之前

  return u32StartCycles;  // 原样返回快照，回绕由终点的无符号减法处理
}
```

`Bsp_Dwt_MeasureElapsedCycles()` 是定义在头文件中的强制内联终点函数。它先阻止编译器把待测代码下移，再执行 `DSB+ISB` 使待测代码发起的显式内存访问完成并同步流水线，随后读取终点并计算 `uint32(end - start)`。无符号减法可自然处理一次回绕，但调用者必须保证窗口小于 `2^32` 个 Core cycles。

该函数没有输出参数；输入 `u32StartCycles` 必须来自同一 Core、同一次测量的 `Bsp_Dwt_MeasureStart()`。

| 返回值 | 含义 |
| --- | --- |
| `0U` | 起止快照相同、计数器未运行，或真实区间恰为 `2^32` 的整数倍；后两类情形不能作为有效短区间测量 |
| `1U`～`UINT32_MAX` | 含终点同步边界、ISR/异常抢占在内的原始周期差；尚未扣除空窗口开销 |

当前源码中的直接调用场景如下：

1. `Bsp_Dwt_Init()` 用它确认计数器实际递增。
2. `Bsp_Dwt_CalibrateOverheadCycles()` 用它结束每个空校准窗口。

```c
LOCAL_INLINE uint32 Bsp_Dwt_MeasureElapsedCycles(uint32 u32StartCycles)
{
  uint32 u32EndCycles;  // 保存完成终点同步后的 CYCCNT 快照

  BSP_DWT_COMPILER_BARRIER();  // 禁止编译器把待测代码下移到终点边界之后
  // 等待待测代码的显式内存访问完成并同步流水线，再采集终点。
  BSP_DWT_MEASUREMENT_BARRIER();
  u32EndCycles = REG_READ32(BSP_DWT_CYCCNT_ADDRESS);  // 读取与起点相同 Core 的自由运行计数器
  BSP_DWT_COMPILER_BARRIER();  // 防止终点之后的代码被上移到读数之前

  return (uint32)(u32EndCycles - u32StartCycles);  // 模 2^32 差值自然覆盖一次回绕
}
```

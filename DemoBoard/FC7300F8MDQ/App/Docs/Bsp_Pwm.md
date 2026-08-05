`Bsp_PwmWave_GetCommandEpoch()` 是 BSP 内部读取 PWM 波形命令代次的静态辅助函数。它在 `PWM_EXCLUSIVE_AREA_19` 临界区内取得 `s_u32PwmWaveCommandEpoch` 的时点快照，供普通控制接口在 CDD 操作结束后调用 `Bsp_PwmWave_RecordJobIfCurrent()` 复核：只有命令代次仍等于进入控制流程时的快照，才发布本次普通作业结果。这样，当 `Bsp_PwmWave_EmergencyShutdown()` 在普通命令执行期间抢先通过 `Bsp_PwmWave_RecordJob()` 更新作业账本并推进代次时，旧命令不会再覆盖较新的紧急关断记录。

该函数没有输入参数和输出参数，也不检查 Core、初始化状态或作业状态。返回值是内部 `uint32` 命令代次的原始快照，不是 CDD 帧序列号、作业编号、时间戳或错误码；函数本身只读共享变量，不调用 CDD/MCAL，也不产生 PWM 硬件副作用。当前代次只在 `Bsp_PwmWave_RecordJob()` 无条件发布作业以及 `Bsp_PwmWave_RecordJobIfCurrent()` 成功发布当前作业时递增，`Bsp_PwmWave_FinishPendingJob()` 把同一 pending 作业更新为完成或失败时不会递增。

| 返回值 | 含义 |
| --- | --- |
| `0U` | 静态初始化后尚未发布首个作业时的初值，或 `uint32` 自增回绕后的值；不表示失败。当前 Core0 初始化路径通常会通过 `Bsp_PwmWave_RecordJob()` 把初值推进为 `1U` |
| `1U`～`UINT32_MAX` | 进入临界区时观察到的当前命令代次；具体数值不直接表示作业类型、作业状态或 CDD 执行结果 |

临界区保证本次读取不会落在 `Bsp_PwmWave_RecordJob()` 或 `Bsp_PwmWave_RecordJobIfCurrent()` 的作业字段更新与代次递增之间，但退出临界区后快照可以立即变旧。它与随后单独执行的 `Bsp_PwmWave_IsJobPending()` 不构成原子的“检查并预留命令槽”，也不会撤销已经发生的 CDD 操作或回收已经写入调用者输出参数的序列号；`Bsp_PwmWave_RecordJobIfCurrent()` 仅在代次失配时跳过 BSP 作业记录，而且没有把是否跳过反馈给调用者。计数器按无符号 `uint32` 自然回绕，当前实现没有额外的回绕或 ABA 防护。

手册事实与项目实现边界如下：PWM Integration Manual 原 PDF 第 9 页说明 PWM 使用 SchM 临界区，并把 `PWM_EXCLUSIVE_AREA_19` 对应到标准 PWM 通知路径；它没有定义本 BSP 函数、命令代次或作业账本，当前复用该临界区属于项目源码实现。MCAL User Manual 原 PDF 第 38～39 页说明真正的跨核互斥通常需要 Mailbox spinlock，并提示共享数据的内存可见性和缓存维护要求；当前 `SchM_Pwm` 实现只是按当前核保存中断状态并执行 `SuspendAllInterrupts()`，不是跨核锁。当前七个调用者及两个代次写路径均受 Core0 调用链约束，因此这里说明的是 Core0 任务/中断间的软件保护，不据此声称跨核安全。当前 Errata V0.5 原 PDF 第 4～5 页的条目汇总中未发现 PWM、SchM 或命令代次相关直接条目；这只表示本次检索无直接勘误依据，不表示不存在其他集成风险。

当前已有如下直接调用场景：

1. `Bsp_PwmWave_FixedTestStop()` 在确认 Core0 后取得代次快照；若 CDD 已处于无故障、无 pending 的 `ARMED_LOW`，则重新确认物理低态，并以该快照条件发布幂等 `STOP` 结果。其他状态会转调 `Bsp_PwmWave_Stop()`，后者重新取得自己的快照。
2. `Bsp_PwmWave_RequestStart()` 在 pending 检查和 CDD 状态门禁前取得快照；提交首帧后以该快照条件发布 `START_WITH_FRAME` 的 `PENDING` 或 `FAILED` 结果。
3. `Bsp_PwmWave_RequestUpdate()` 在调用 `Cdd_PwmWave_SubmitFrame()` 前取得快照，随后条件发布 `FRAME_UPDATE` 的 `PENDING` 或 `FAILED` 结果。
4. `Bsp_PwmWave_RequestPeriodChange()` 在调用 `Cdd_PwmWave_SubmitPeriodChange()` 前取得快照，随后条件发布 `PERIOD_CHANGE` 的 `PENDING` 或 `FAILED` 结果。
5. `Bsp_PwmWave_Start()` 在调用 `Cdd_PwmWave_Start()` 前取得快照，随后条件发布 `START_ACTIVE_FRAME` 的同步完成或失败结果。
6. `Bsp_PwmWave_Stop()` 在调用 `Cdd_PwmWave_Stop()` 前取得快照，随后条件发布 `STOP` 的同步完成或失败结果。
7. `Bsp_PwmWave_ClearFault()` 在调用 `Cdd_PwmWave_ClearFault()` 前取得快照，随后条件发布 `CLEAR_FAULT` 的同步完成或失败结果。

```c
static uint32 Bsp_PwmWave_GetCommandEpoch(void)
{
  uint32 u32Epoch;  // 保存锁内读取的命令代次快照，供调用者后续校验结果是否仍属于当前命令

  // 与两个作业记录写路径使用同一 AREA_19，避免读取落在作业字段更新与代次递增之间。
  // 临界区只取得时点快照，不预留命令槽，也不覆盖随后执行的 CDD 操作。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  u32Epoch = s_u32PwmWaveCommandEpoch;  // 仅读取当前代次，不推进计数器或修改作业状态
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return u32Epoch;  // 返回后快照可能变旧，调用者通过 RecordJobIfCurrent() 再次比较
}
```

`Bsp_PwmWave_CarrierTestAbort()` 是载波频率测试异常路径的统一收尾函数。它先调用 `Bsp_PwmWave_ResetTestState()`，清除固定测试与载波测试各自的 Stop 请求、固定测试等待标志和序列，以及共用测试 owner、载波测试状态、序列、频点索引和保持计数，再调用 `Bsp_PwmWave_TestForceLow()` 尝试压低输出：优先执行 BSP/CDD 紧急关断，只有该路径返回非 `OK` 时才把九路 PWM Pad 切换为 GPIO 低电平并读回确认。最后根据低状态是否确认记录普通或 `CRITICAL` 日志。测试软件状态在尝试压低输出之前已经清除；即使最终无法确认低状态，本函数也不会恢复中止前的测试上下文。

该函数返回类型为 `void`，没有返回值和输出参数。输入参数 `pReason` 只作为中止原因写入日志，不参与关断决策；当前唯一直接调用者传入的都是字符串字面量，而本函数本身没有空指针检查。关断确认结果只保存在局部变量 `bLowConfirmed` 中并决定日志内容，两条路径均未确认时不会在本函数内重试，也不会向调用者返回错误。

`bLowConfirmed == TRUE` 可能来自 CDD 紧急关断成功，也可能来自紧急关断失败后的 GPIO 回退成功，因此它不表示两条路径都执行成功，也不表示此前记录的 emergency 作业失败已改写、CDD 故障已清除或 GPIO PinMux 已恢复为 eFTU。日志中的“confirmed low”表示当前软件通过 DTM/TOM 状态，或 GPIO 模式、方向和数字输入读回满足低状态判据；不等同于已经使用示波器或外部电压测量确认 Pad 物理电平。

当前已有如下直接调用场景：

1. `Bsp_PwmWave_CarrierFrequencyTestMonitor()` 是唯一直接调用者，共有 13 个异常出口调用本函数，覆盖 owner/状态不变量破坏、正常 Stop 失败、初始 Start 或周期请求失败、作业/序列被替换、初始 `RUN`/活动帧/目标周期确认失败、测试点索引越界、`HOLD` 阶段失去运行归属、下一频点请求失败以及进入未知状态。

```c
static void Bsp_PwmWave_CarrierTestAbort(const char *pReason)
{
  boolean bLowConfirmed;  // 保存 CDD 紧急关断或 GPIO 回退最终是否确认九路输出为低

  // 先清除固定、载波两类测试的 Stop 请求、owner、序列、状态、索引及保持计数，
  // 使周期任务不再推进旧上下文；即使后续压低失败也不会恢复这些测试状态。
  Bsp_PwmWave_ResetTestState();
  // 再优先执行 CDD 故障锁存式紧急关断；返回非 OK 时才改用九路 Pad 的 GPIO 低电平回退。
  bLowConfirmed = Bsp_PwmWave_TestForceLow();  // TRUE 可能来自任一路径，只代表当前软件读回满足低状态判据
  // pReason 只补充中止原因文本，不改变关断路径或测试状态。
  // 确认结果只决定日志级别；失败时记录 CRITICAL，但本函数不重试也不返回错误。
  if (TRUE == bLowConfirmed) {
    DEBUG_INFO("PWM carrier frequency test %s; all outputs confirmed low.\r\n", pReason);
  } else {
    DEBUG_INFO("CRITICAL: PWM carrier frequency test %s; output-low state unconfirmed.\r\n", pReason);
  }
}
```

`Bsp_Pwm_Init()` 是标准 MCAL PWM 与项目私有 PWM 波形控制的板级初始化编排入口。当前 `PWM_PRECOMPILE_SUPPORT == STD_ON`、`PWM_MULTICORE_ENABLED == STD_ON`，因此 `main()` 中 Core0、Core1、Core2 的三个调用点都会先通过 `Pwm_Init(NULL_PTR)` 初始化当前核的标准 MCAL PWM 上下文及被分配通道；只有 Core0 继续配置 eFTU1 TOM0 共用中断、复位板级测试状态和作业账本，并初始化 `Cdd_PwmWave`。CDD 建立安全的 `ARMED_LOW` 拓扑后，本函数才把 PWM1～PWM5 的九路 Pad 从 GPIO 切换为 eFTU 输出复用，再重新确认拓扑和低状态，确认成功后才开放共用中断。

该函数返回类型为 `void`，没有输入参数、返回值或输出参数。`Pwm_Init()` 的错误由 MCAL DET 路径处理，本函数不能取得其执行结果；Core0 的 CDD 初始化、`ARMED_LOW` 确认或缺少 ISR 配置形成的最终结果会在 SchM 临界区内写入 `s_ePwmWaveLastResult`，供后续控制状态查询使用。确认失败时，本函数忽略 `Cdd_PwmWave_EmergencyShutdown()` 自身的返回值，并继续强制九路 Pad 回到 GPIO 低电平及执行软件读回；即使 GPIO 回退确认成功，原始错误也不会被改写为 `CDD_PWM_WAVE_OK`。

该函数按当前调用链设计为启动期一次性初始化入口，不具备重复初始化语义。它依赖 `main()` 已完成 MCU、Port 以及当前配置启用的 eFTU、TrgSel 初始化，并应在固定测试或载波测试启动之前调用。CDD 初始化失败发生在 `Bsp_Pwm_SetOutputPinModes()` 之前，因此当前首次启动路径不会把 Pad 切换为 eFTU；日志所述“remain GPIO low”还依赖此前 `Bsp_Port_Init()` 和当前生成 Port 配置已经建立 GPIO 低电平初态。重复调用可能触发 MCAL 已初始化 DET 和 CDD 状态错误，不能用作运行期重新初始化接口。

手册事实与项目实现边界如下：PWM Integration Manual 原 PDF 第 14 页把 `Pwm_Init(NULL_PTR)` 列为启动阶段 API；PWM User Manual 原 PDF 第 25～26 页说明 `Pwm_Init` 用于 PWM 模块初始化且无返回值；Port User Manual 原 PDF 第 15 页说明 `Port_SetPinMode` 用于设置引脚模式。多核分工、Core0 的 CDD/IRQ 初始化顺序、九路 Pad 范围和 GPIO 安全回退属于当前项目源码及生成配置事实，不是上述手册直接规定。CDD 状态检查和 GPIO 数字输入读回只能证明当前软件判据成立，不能替代示波器或外部电压测量对 Pad 物理波形的确认。

当前已有如下直接调用场景：

1. `main()` 是唯一直接调用者，在 `PWM_DEMO_SUPPORT == STD_ON` 条件下分别从 Core0、Core1、Core2 分支调用本函数。Core0 调用位于板级 MCU、Port、eFTU 和 TrgSel 初始化之后、可选 PWM 固定/载波测试启动之前；Core1、Core2 调用只完成当前核的标准 MCAL PWM 初始化，当前多核条件会阻止它们进入 Core0 专属的 CDD、PinMux、IRQ 和安全回退流程。

```c
void Bsp_Pwm_Init(void)
{
  Cdd_PwmWave_ResultType ePwmWaveResult;  // 保存 CDD 初始化、低状态确认或 IRQ 配置阶段形成的最终结果

  // 先初始化当前核的标准 MCAL PWM 实例；当前 PreCompile 配置要求传入 NULL_PTR。
  Pwm_Init(NULL_PTR);  // main() 的 Core0、Core1、Core2 三个分支调用本函数时都会执行此步骤

  // PWM 多核开启时，以下板级 CDD、PinMux 和 IRQ 初始化只允许 Core0 执行。
  // 若关闭 PWM 多核，预处理会移除 CPU 判断，后续初始化块改为无条件执行。
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0U == GET_CPU_ID())
#endif
  {
    // TOM0 共用中断存在时，先屏蔽 IRQ，再完成 Core0 路由和优先级配置。
    // IRQ 保持关闭，直到 CDD 初始化和 ARMED_LOW 状态确认均成功；失败路径不会提前进入 ISR。
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
    IntMgr_DisableInterrupt(eFTU1_TOM_0TO7_IRQn);  // 关闭配置窗口内的中断入口，后续失败时不会重新使能
    BSP_SetInterrupt(0U, (uint32)eFTU1_TOM_0TO7_IRQn);  // 将 eFTU1 TOM0 CH0～CH7 共用 IRQ 路由至 Core0
    IntMgr_SetPriority(eFTU1_TOM_0TO7_IRQn, BSP_PWM_WAVE_IRQ_PRIORITY);  // 设置波形边界中断优先级
#endif
    // 清理测试 owner、Stop 请求、序列和阶段状态，防止旧测试上下文进入运行期。
    // 随后把 BSP 作业账本初始化为 NONE/IDLE/UNINIT/0，并推进 command epoch。
    Bsp_PwmWave_ResetTestState();
    Bsp_PwmWave_RecordJob(BSP_PWM_WAVE_JOB_NONE, BSP_PWM_WAVE_JOB_IDLE, CDD_PWM_WAVE_E_UNINIT, 0U);

    // CDD 初始化成功时建立安全的 eFTU 运行拓扑和 ARMED_LOW 状态；失败时不切换输出 Pad 复用。
    ePwmWaveResult = Cdd_PwmWave_Init();  // 后续确认和配置分支沿用该变量保存初始化终态
    if (CDD_PWM_WAVE_OK == ePwmWaveResult) {
      Bsp_Pwm_SetOutputPinModes();  // 仅在 CDD 就绪后才把九路 Pad 切换为 eFTU 输出复用

      // PinMux 切换后重新检查运行拓扑和低状态，成功后 CDD 才允许后续启动波形。
      ePwmWaveResult = Cdd_PwmWave_ConfirmArmedLow();  // 非 OK 将进入紧急关断及 GPIO-low 回退
      // TOM0 IRQ 只能在 ARMED_LOW 确认成功后开放；缺少对应 ISR 的构建按配置错误处理。
      if (CDD_PWM_WAVE_OK == ePwmWaveResult) {
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
        IntMgr_EnableInterrupt(eFTU1_TOM_0TO7_IRQn);  // 允许后续载波边界通知进入共用 ISR
#else
        ePwmWaveResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 不在缺少所需 ISR 时继续报告初始化成功
#endif
      }
      // ARMED_LOW 确认失败或缺少 ISR 时，统一尝试 CDD 关断，再强制 Pad 回到 GPIO 低电平。
      if (CDD_PWM_WAVE_OK != ePwmWaveResult) {
        (void)Cdd_PwmWave_EmergencyShutdown();  // 请求 CDD 进入故障锁存式紧急关断；本函数忽略其返回值
        if (TRUE == Bsp_Pwm_ForceOutputPinsGpioLow()) {  // 无论关断结果如何，都切换九路 GPIO 并读回低状态
          DEBUG_INFO("Bsp_Pwm: physical ARMED_LOW check failed; GPIO-low fallback verified.\r\n");
        } else {
          DEBUG_INFO("Bsp_Pwm: GPIO-low fallback verification failed; outputs remain fault-latched.\r\n");
        }
      }
    } else {
      DEBUG_INFO("Bsp_Pwm: CDD ARMED_LOW failed, output pins remain GPIO low.\r\n");  // 未执行 eFTU PinMux 切换，仅记录 CDD 初始化失败
    }

    // 发布初始化终态；GPIO-low 回退即使验证成功，也不会把原始错误改写为 OK。
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 保护共享的 last-result 字段
    s_ePwmWaveLastResult = ePwmWaveResult;  // 保存 CDD 初始化、ARMED_LOW 确认或 IRQ 配置链的最终结果
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }
}
```

`Bsp_PwmWave_CarrierFrequencyTestStart()` 是载波频率板级测试的异步启动入口。它本身不直接写 eFTU/Port 寄存器或调用标准 PWM API，也不直接从 130 kHz 开始循环，更不会转调 `Bsp_PwmWave_FixedTestStart()`；入口门禁通过后，它把 `s_tPwmWaveFixedTestFrame` 交给 `Bsp_PwmWave_RequestStart()`，先提交周期为 `750 ticks`、四组比较窗口均为 `[100, 475)`、PWM5 为 `TEST_TOGGLE` 的 200 kHz 种子帧。请求被接受后，本函数才清除两类历史 Stop 请求，复位频点索引和保持计数，保存初始请求序列，把载波测试状态切换为 `WAIT_START`，并取得共用测试 owner。后续 `Bsp_PwmWave_CarrierFrequencyTestMonitor()` 必须先确认该 `START_WITH_FRAME` 作业、CDD `RUN` 状态、活动序列和活动帧全部匹配，才会请求索引 `0` 对应的约 130 kHz 首个动态频点，并继续 130/200/250/300 kHz 循环。

`pSequence` 是可选输出参数，可以传入 `NULL_PTR`。只有函数返回 `CDD_PWM_WAVE_OK` 时，非空 `pSequence` 才会在测试上下文建立完成后写入初始 200 kHz `START_WITH_FRAME` 请求的序列号；所有失败返回均保持调用者原值不变。该序列号不代表帧已经成为 active，也不是后续 130/200/250/300 kHz 周期请求的序列号；后续每次变更产生的新序列只保存在模块内部。返回 `OK` 仅表示初始请求已被接受且状态机进入 `WAIT_START`，不能证明 CDD 已进入 `RUN`、130 kHz 已经提交或 Pad 上已经输出目标频率。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 200 kHz 种子帧请求已被接受，本函数已建立 `CARRIER/WAIT_START` 上下文；非空 `pSequence` 已写入初始请求序列，仍需周期监控确认帧生效和进入 `RUN` |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0；函数在检查测试 owner、提交初始帧和修改测试上下文前返回 |
| `CDD_PWM_WAVE_E_BUSY` | 已有固定或载波测试占用 owner、载波测试状态不是 `IDLE`，或者下层已有 BSP/CDD pending 作业或 Start 正在处理 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化；初始帧未提交，本函数不建立载波测试上下文 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 状态查询或锁内提交时发现 CDD fault 已锁存 |
| `CDD_PWM_WAVE_E_STATE` | CDD 当前不是可接受初始帧的 `ARMED_LOW` 状态 |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 初始帧提交时发现载波边界触发、通知或相关 TOM 同步拓扑不满足当前 CDD 要求；部分路径会同时进入故障锁存 |

固定种子帧的周期、比较窗口、最小窗口宽度和 PWM5 枚举均由当前编译期断言约束，因此帧参数类错误、`CDD_PWM_WAVE_E_PARAM_POINTER`、`CDD_PWM_WAVE_E_NO_FRAME`、`CDD_PWM_WAVE_E_HW_TIMEOUT` 和 `CDD_PWM_WAVE_E_NOT_SUPPORTED` 在当前调用路径中不可达，未列入返回表。若 `Bsp_PwmWave_RequestStart()` 失败，本函数不会修改自身的 owner、载波测试状态、索引、保持计数、Stop 请求或输出参数，但下层可能已经登记失败作业，硬件配置失败路径也可能锁存 CDD fault，不能把失败一概理解为“没有任何副作用”。

该函数对测试 owner、状态和成功上下文的读写没有使用 SchM，依赖头文件约定的“普通控制 API 由单一 Core0 任务上下文拥有且非重入”。入口检查、异步请求和 owner/state 发布不是一个原子事务，不能把本接口当作可并发调用的资源获取 API。`Bsp_PwmWave_RequestStart()` 使用命令代次避免旧的普通作业结果覆盖抢占式紧急关断记录，但条件发布是否被跳过不会反馈给本函数；若紧急关断在启动窗口内抢占，本函数仍可能基于 `OK` 建立 `CARRIER/WAIT_START`，随后由 monitor 通过作业和序列失配识别并走安全中止。成功路径也没有调用 `Bsp_PwmWave_ResetTestState()`，不会主动清除固定测试的 awaiting-run 标志和保存序列，其正确性依赖入口 owner 不变量。

手册事实与项目实现边界如下：已在 Reference Manual、PWM User/Integration Manual 和 Errata manifest 中检索目标函数名、载波测试、TOM 时钟及周期更新，未找到本 BSP API 或测试状态机的直接定义。Reference Manual 原 PDF 第 1892～1893 页说明 TOM 通道从所在 eFTU cluster 的八路时钟源中选择功能时钟，并由 TGC 的 `UPEN_CTRL` 控制 `SR0/SR1` 等 shadow 内容更新到 `CM0/CM1` 工作寄存器；第 2033～2034 页给出 `CN0`、`CM0` 和 `SR0` 的 24 位寄存器字段。当前 `Eftu.xdm` 把引用时钟 1 配置为 `1.5E8 Hz`，`Pwm.xdm` 和生成的 `Pwm_PBcfg.c` 把 `PWM_CARRIER` 配置为 eFTU1 TOM0 CH0、`750 ticks/200000 Hz`；因此“200 kHz 种子帧”是当前配置与源码交叉验证结果，而不是手册对本函数的规定。当前 Errata V0.5 原 PDF 第 4～5 页汇总中没有直接针对 PWM/eFTU 载波启动路径的条目。源码原注释中的 `board-proven` 是项目命名和设计意图，本次静态核对不能替代示波器或板级测试证据。

当前源码中的直接调用场景如下：

1. `main()` 是唯一直接调用者。当前 `PWM_DEMO_SUPPORT == STD_ON`、`PWM_WAVE_CARRIER_FREQUENCY_TEST_AUTOSTART == STD_ON` 且固定测试自动启动为 `STD_OFF`，因此 Core0 在 `Bsp_Pwm_Init()` 之后调用本函数；成功日志打印初始序列和后续四频点循环计划，失败日志只打印返回码。预处理检查禁止固定测试和载波测试同时自动启动。

```c
Cdd_PwmWave_ResultType Bsp_PwmWave_CarrierFrequencyTestStart(Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_SequenceType u32Sequence;  // 接收初始 START_WITH_FRAME 请求成功后生成的序列号
  Cdd_PwmWave_ResultType eResult;  // 保存启动请求的最终受理结果

  // 载波测试只能由 Core0 在没有其他测试所有者且状态机为空闲时启动。
  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 错误核不得提交 PWM 作业或建立测试所有权
  }
  if ((BSP_PWM_WAVE_TEST_OWNER_NONE != s_ePwmWaveTestOwner) || (BSP_PWM_WAVE_CARRIER_TEST_IDLE != s_ePwmWaveCarrierTestState)) {
    return CDD_PWM_WAVE_E_BUSY;  // 防止固定测试、已有载波测试或残留非空闲状态被覆盖
  }

  /* Start from the board-proven 200 kHz frame. After RUN confirmation the
   * monitor submits 130 kHz as the first dynamic period change. */
  eResult = Bsp_PwmWave_RequestStart(&s_tPwmWaveFixedTestFrame, &u32Sequence);  // 提交种子帧；仅 OK 时局部序列有效
  // 只有初始请求已经被接受，才建立载波测试监控上下文并向外发布序列号。
  if (CDD_PWM_WAVE_OK == eResult) {
    // 清除固定测试和载波测试的历史停止请求，避免新测试继承旧的终止意图。
    g_bPwmWaveFixedTestStopRequest = FALSE;
    g_bPwmWaveCarrierTestStopRequest = FALSE;
    s_u8PwmWaveCarrierTestIndex = 0U;  // 后续动态周期循环从测试点表首项 130 kHz 开始
    s_u16PwmWaveCarrierTestHold10msCycles = 0U;  // 清零频点确认后的 10 ms 保持计数
    s_u32PwmWaveCarrierTestSequence = u32Sequence;  // 保存初始序列，供 monitor 交叉确认作业归属
    s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_WAIT_START;  // 等待初始作业、RUN 和活动帧共同确认
    s_ePwmWaveTestOwner = BSP_PWM_WAVE_TEST_OWNER_CARRIER;  // 阻止其他板级测试并发占用同一 PWM 资源
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;  // 可选输出仅在成功时写入初始请求序列
    }
  }
  return eResult;  // OK 只表示请求已受理，尚未证明 RUN 或任何目标频率已在 Pad 生效
}
```

`Bsp_PwmWave_CarrierFrequencyTestMonitor()` 是载波频率板级测试的周期状态机驱动函数。它不直接写 TOM 寄存器，而是先确认初始 200 kHz 固定测试帧已经进入 `RUN`，再按测试表循环请求约 130 kHz（1154 ticks，按当前 eFTU 150 MHz 时钟配置计算约为 129.983 kHz）、200 kHz、250 kHz 和 300 kHz 载波周期，并在每个频点的软件确认完成后保持一个 10 ms 监控周期。函数还负责处理外部 Stop、异步请求等待、作业或序列被替换、活动帧失配和非法测试状态；异常时统一复位测试上下文，并尝试紧急关断或 GPIO 低电平回退。

该函数返回类型为 `void`，没有返回值，也没有输入/输出参数。每次调用最多推进一个状态阶段；尚未完成的异步请求通过提前 `return` 留待下一周期继续检查，成功进度记录在测试状态、索引和保持计数器中，失败结果通过日志和 `Bsp_PwmWave_CarrierTestAbort()` 内部处理，不向调用者返回错误码。

这里的“活动帧确认”是软件确认：`Bsp_PwmWave_GetControlStatus()` 和 `Bsp_PwmWave_GetActiveFrame()` 最终都会触发 CDD 刷新 pending 状态；CDD 先用 `s_tPendingFrame` 逐项匹配 TOM 活动比较寄存器 `CM0/CM1` 和活动信号电平，匹配通过后才把该 pending 软件快照提升为 `s_tActiveFrame`。本函数随后继续交叉核对 BSP 作业、请求序列、CDD 活动序列、驱动状态和帧内容。它能证明当前软件读回链路一致，但不能替代示波器对 Pad 物理波形的确认。

当前已有如下直接调用场景：

1. `Bsp_Pwm_10ms_Task_Event()` 在 Core0 条件范围内每次直接调用本函数。这是载波测试的常规轮询入口，也是 `HOLD` 状态软件保持计数的 10 ms 监控周期基准。
2. `Bsp_Pwm_20ms_Task_Event()` 先调用 `Cdd_PwmWave_MainFunction()` 和 `Bsp_PwmWave_MainFunction()`，再仅在 `WAIT_START` 或 `WAIT_PERIOD` 状态调用本函数。当前源码事实是该入口只处理两个等待状态；从调用顺序可以推断，其设计目的是及时检查刚由 MainFunction 推进完成的异步请求。该条件不包含 `HOLD`，因此不会让频点保持计数在 20 ms 任务中额外累加。

```c
static void Bsp_PwmWave_CarrierFrequencyTestMonitor(void)
{
  Bsp_PwmWave_ControlStatusType tStatus;               // 保存 BSP 作业与 CDD 驱动状态快照
  Cdd_PwmWave_FrameType tActiveFrame;                  // 保存读取成功后的当前活动帧
  Cdd_PwmWave_ResultType eResult;                      // 保存状态查询、Stop 或周期请求结果
  Cdd_PwmWave_ResultType eFrameResult;                 // 单独保存活动帧读取结果
  const Bsp_PwmWave_CarrierTestPointType *pTestPoint;  // 指向索引校验后的当前测试点

  // Core0 条件成立时，10 ms 入口不按载波测试状态筛选；20 ms 入口只在 WAIT_START/WAIT_PERIOD 补充轮询。
  // owner 与状态矛盾时执行安全中止；下文所有 Abort 均会复位测试状态并尝试紧急关断或 GPIO 低电平回退。
  if (BSP_PWM_WAVE_TEST_OWNER_CARRIER != s_ePwmWaveTestOwner) {
    return;  // 无关周期轮询，不改变任何载波测试状态
  }
  if (BSP_PWM_WAVE_CARRIER_TEST_IDLE == s_ePwmWaveCarrierTestState) {
    Bsp_PwmWave_CarrierTestAbort("lost test state ownership");  // 正常 Start/Reset 不应留下 owner=CARRIER 且 state=IDLE，按不变量破坏处理
    return;  // Abort 已清除 owner 和测试状态，必须退出，避免落入后续 Stop/WAIT 分支
  }

  // Stop 请求优先于状态机推进，本阶段复用正常 Stop 流程尝试停止一次。
  // 本分支只处理停止结果，不再继续推进 WAIT_START、WAIT_PERIOD 或 HOLD。
  if (TRUE == g_bPwmWaveCarrierTestStopRequest) {
    eResult = Bsp_PwmWave_FixedTestStop();  // 共用板级测试正常 Stop 流程，成功时会复位测试状态
    if (CDD_PWM_WAVE_E_BUSY == eResult) {  // 当前异步作业尚未结束，暂时不能插入 Stop
      return;  // 保留 Stop 请求，下一周期重试
    }

    g_bPwmWaveCarrierTestStopRequest = FALSE;  // 已得到非 BUSY 终态，不再重试
    if (CDD_PWM_WAVE_OK == eResult) {
      DEBUG_INFO("PWM carrier frequency test Stop complete; all outputs confirmed low.\r\n");
    } else {
      DEBUG_INFO("PWM carrier frequency test Stop rejected, result %d.\r\n", (int)eResult);
      Bsp_PwmWave_CarrierTestAbort("normal Stop failed");  // 正常 Stop 失败，改走安全中止路径
    }
    return;  // Stop helper 或 Abort 已完成状态收尾，禁止继续推进停止前的测试状态
  }

  // WAIT_START 先确认状态可读、作业仍为 START_WITH_FRAME，且请求序列属于本次测试。
  // 作业失配即中止；作业完成后进入活动帧交叉确认。
  if (BSP_PWM_WAVE_CARRIER_TEST_WAIT_START == s_ePwmWaveCarrierTestState) {  // 初始 Start 请求已受理，等待异步作业收敛
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);  // 读取 BSP 作业字段，并触发 CDD pending/active 状态刷新
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence)) {
      Bsp_PwmWave_CarrierTestAbort("aborted before initial RUN");  // 查询失败或 Start 作业/序列已被替换，保存序列不再能证明本次请求
    } else if (BSP_PWM_WAVE_JOB_PENDING == tStatus.eJobState) {
      return;  // 保持 WAIT_START，下一周期继续轮询
    } else if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {  // BSP 作业完成不等于驱动已 RUN 或活动帧已确认
      // Start 完成后读取活动帧并刷新状态，交叉确认作业成功、请求/活动序列一致、
      // 驱动处于 RUN，且活动帧仍为初始固定测试帧；任一不满足即中止。
      eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);  // 刷新 pending 后取得 CDD 活动帧软件快照
      eResult = Bsp_PwmWave_GetControlStatus(&tStatus);  // 活动帧读取后刷新状态，避免沿用旧快照
      if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) ||
          (BSP_PWM_WAVE_JOB_COMPLETED != tStatus.eJobState) || (CDD_PWM_WAVE_OK != tStatus.eLastResult) ||
          (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence) || (CDD_PWM_WAVE_STATE_RUN != tStatus.tDriverStatus.eState) ||
          (s_u32PwmWaveCarrierTestSequence != tStatus.tDriverStatus.u32ActiveSequence) || (CDD_PWM_WAVE_OK != eFrameResult) ||
          (FALSE == Bsp_PwmWave_IsFixedTestFrame(&tActiveFrame))) {
        Bsp_PwmWave_CarrierTestAbort("initial RUN confirmation failed");  // 固定帧基线门禁失败，阻止在未确认 RUN 上提交动态周期
        return;  // Abort 已复位 owner 和索引，不能以复位后的索引 0 继续提交首个频点
      }

      // 初始固定帧确认后，提交索引 0 对应的首个周期变更。
      // OK 只表示请求已接受，活动帧是否生效仍需在 WAIT_PERIOD 中确认。
      eResult = Bsp_PwmWave_CarrierTestRequestCurrentPoint();  // 成功时保存新序列并转入 WAIT_PERIOD
      if (CDD_PWM_WAVE_OK == eResult) {
        DEBUG_INFO("PWM carrier frequency test requested target %d kHz, period %d ticks, sequence %d.\r\n",
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u16TargetFrequencyKHz,
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u32PeriodTicks, (int)s_u32PwmWaveCarrierTestSequence);
      } else {
        DEBUG_INFO("PWM carrier frequency test first period request rejected, result %d.\r\n", (int)eResult);
        Bsp_PwmWave_CarrierTestAbort("first period request failed");  // 首个频点请求失败，结束本次测试
      }
    } else {
      DEBUG_INFO("PWM carrier frequency test initial Start failed, result %d.\r\n", (int)tStatus.eLastResult);
      Bsp_PwmWave_CarrierTestAbort("initial Start failed");  // 作业状态既非 PENDING 也非 COMPLETED，按失败或异常状态中止
    }
    return;  // 本次只处理 WAIT_START，不立即继续处理刚切换的新状态
  }

  // WAIT_PERIOD 和 HOLD 在核对作业及活动帧前，必须共享同一个有效测试点上下文。
  // 上下文完整性校验失败属于内部状态异常，后续不得访问测试表。
  if (s_u8PwmWaveCarrierTestIndex >= BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT) {  // 防止后续 pTestPoint 越界
    Bsp_PwmWave_CarrierTestAbort("test index is invalid");  // 索引不变量破坏时安全中止，不把越界自动回绕为索引 0
    return;  // Abort 已复位索引和 owner，必须退出，避免继续形成 pTestPoint
  }
  pTestPoint = &s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex];

  // WAIT_PERIOD 在接收周期作业结果前，先将作业类型和请求序列绑定到当前测试点。
  // 失配即中止；作业完成后进入活动结果确认。
  if (BSP_PWM_WAVE_CARRIER_TEST_WAIT_PERIOD == s_ePwmWaveCarrierTestState) {  // 当前频点请求已受理且序列号已保存
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);  // 核对当前周期作业及请求序列归属
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE != tStatus.eJob) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence)) {
      Bsp_PwmWave_CarrierTestAbort("period request was replaced");  // 旧序列已失去归属，后续活动帧不能归因于当前测试点
    } else if (BSP_PWM_WAVE_JOB_PENDING == tStatus.eJobState) {
      return;  // 保持 WAIT_PERIOD，下一周期继续轮询
    } else if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {  // 作业完成不等于活动帧已更新，仍需执行读回确认
      // 作业完成后读取活动帧并刷新状态，确认作业结果、请求/活动序列和 RUN 状态一致。
      // 同时确认活动帧采用目标周期、PWM5 测试模式且整帧合法；任一失败即中止。
      eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);  // 取得当前活动帧软件快照并保留独立结果
      eResult = Bsp_PwmWave_GetControlStatus(&tStatus);  // 活动帧读取后再取得最新状态
      if ((CDD_PWM_WAVE_OK == eResult) && (BSP_PWM_WAVE_JOB_PERIOD_CHANGE == tStatus.eJob) &&
          (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) && (CDD_PWM_WAVE_OK == tStatus.eLastResult) &&
          (s_u32PwmWaveCarrierTestSequence == tStatus.u32RequestedSequence) && (CDD_PWM_WAVE_STATE_RUN == tStatus.tDriverStatus.eState) &&
          (s_u32PwmWaveCarrierTestSequence == tStatus.tDriverStatus.u32ActiveSequence) && (CDD_PWM_WAVE_OK == eFrameResult) &&
          (TRUE == Bsp_PwmWave_IsCarrierTestFrame(&tActiveFrame, pTestPoint->u32PeriodTicks))) {
        s_u16PwmWaveCarrierTestHold10msCycles = 0U;                   // 从完整保持窗口重新计数
        s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_HOLD;  // 周期确认完成，进入 HOLD
        DEBUG_INFO(  // 仅记录软件确认成功，不代表 Pad 波形已经实测
            "PWM carrier frequency test confirmed target %d kHz, period %d ticks; about 10 ms hold starts, PWM5 LOW/HIGH follows one "
            "carrier period.\r\n",
            (int)pTestPoint->u16TargetFrequencyKHz, (int)pTestPoint->u32PeriodTicks);
      } else {
        Bsp_PwmWave_CarrierTestAbort("active period confirmation failed");  // 拒绝进入 HOLD，避免给未确认或错误频点累计保持时间
      }
    } else {  // 作业状态非 PENDING/COMPLETED，按异常终态处理
      DEBUG_INFO("PWM carrier frequency test period update failed, result %d.\r\n", (int)tStatus.eLastResult);
      Bsp_PwmWave_CarrierTestAbort("period update failed");  // FAILED、IDLE 或未知终态都不能继续轮询，必须结束本次测试
    }
    return;  // 即使刚切入 HOLD，本轮也不累计保持时间
  }

  // HOLD 每个 10 ms 监控周期重新核对作业结果、序列归属、RUN 状态和活动帧。
  // 任一证据失配即中止；达到保持阈值后切换索引并提交下一频点请求。
  if (BSP_PWM_WAVE_CARRIER_TEST_HOLD == s_ePwmWaveCarrierTestState) {  // 当前调用关系中只有 10 ms 入口会执行 HOLD
    eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);  // 每个 HOLD 周期重新读取活动帧
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);  // 同步刷新作业、序列和驱动状态
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE != tStatus.eJob) ||
        (BSP_PWM_WAVE_JOB_COMPLETED != tStatus.eJobState) || (CDD_PWM_WAVE_OK != tStatus.eLastResult) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence) || (CDD_PWM_WAVE_STATE_RUN != tStatus.tDriverStatus.eState) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.tDriverStatus.u32ActiveSequence) || (CDD_PWM_WAVE_OK != eFrameResult) ||
        (FALSE == Bsp_PwmWave_IsCarrierTestFrame(&tActiveFrame, pTestPoint->u32PeriodTicks))) {
      Bsp_PwmWave_CarrierTestAbort("lost RUN ownership while holding a test point");  // 防止依据已被外部替换的活动帧继续推进下一频点
      return;  // 当前频点已不可信，不再累计保持时间
    }

    // 只有完整交叉确认通过才累计 HOLD 监控周期。
    // 阈值命中后先清零再推进索引，使每个频点都从独立的完整保持窗口开始。
    s_u16PwmWaveCarrierTestHold10msCycles++;  // 当前调用关系下每次递增代表一个 10 ms 监控周期
    if (s_u16PwmWaveCarrierTestHold10msCycles >= BSP_PWM_WAVE_CARRIER_TEST_HOLD_10MS_CYCLES) {  // 阈值单位为 10 ms 周期，当前配置为 1
      s_u16PwmWaveCarrierTestHold10msCycles = 0U;
      s_u8PwmWaveCarrierTestIndex++;
      if (s_u8PwmWaveCarrierTestIndex >= BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT) {
        s_u8PwmWaveCarrierTestIndex = 0U;  // 末频点之后回绕到索引 0
      }

      eResult = Bsp_PwmWave_CarrierTestRequestCurrentPoint();  // 成功时保存新序列并切回 WAIT_PERIOD
      if (CDD_PWM_WAVE_OK == eResult) {  // 请求已受理，后续由 WAIT_PERIOD 异步确认
        DEBUG_INFO("PWM carrier frequency test requested target %d kHz, period %d ticks, sequence %d.\r\n",
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u16TargetFrequencyKHz,
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u32PeriodTicks, (int)s_u32PwmWaveCarrierTestSequence);
      } else {
        DEBUG_INFO("PWM carrier frequency test next period request rejected, result %d.\r\n", (int)eResult);
        Bsp_PwmWave_CarrierTestAbort("next period request failed");  // 下一频点请求失败，结束循环测试
      }
    }
    return;
  }

  // 所有已知状态分支均已返回，只有无效状态会执行到这里。
  // 不再按具体状态继续分支处理，统一由 Abort 复位测试状态并执行安全收尾。
  Bsp_PwmWave_CarrierTestAbort("entered an invalid test state");
}
```

`Bsp_PwmWave_MainFunction()` 是 Core0 上的 BSP PWM 波形异步作业轮询与收尾函数。正常路径中，它处理 `Bsp_PwmWave_RequestStart()`、`Bsp_PwmWave_RequestUpdate()` 和 `Bsp_PwmWave_RequestPeriodChange()` 成功提交后留下的 `PENDING` 作业：先在短临界区内认领当前作业并保存作业类型、请求序列，再读取 CDD 状态判断目标帧仍在等待装载、已经成为活动帧、已被其他序列替换或已经进入故障。序列匹配的 pending 帧尚未生效时，本函数保持作业为 `PENDING`，留待下一周期继续轮询；活动帧及序列确认后，`START_WITH_FRAME` 作业执行延后的同步 `Cdd_PwmWave_Start()`，帧更新和周期更新作业则直接发布完成结果。作业归属、活动帧或允许状态失配时，本函数请求 CDD 紧急关断，并尝试将原作业结束为 `CDD_PWM_WAVE_E_HW_CONFIG`；其他作业异常地以 `PENDING` 进入时，也按内部不变量破坏执行相同失败收尾。

该函数返回类型为 `void`，没有输入参数、返回值或输出参数。非 Core0 调用、当前没有 `PENDING` 作业或已有一轮调用正在处理时，函数静默返回；作业的 `PENDING`、`COMPLETED`、`FAILED` 状态及最终错误码保存在 BSP 共享作业状态中，可由 `Bsp_PwmWave_GetControlStatus()` 查询。`Bsp_PwmWave_FinishPendingJob()` 只有在共享作业仍为 `PENDING`，且作业类型和请求序列仍与本轮快照一致时才写入结果，避免抢占式 BSP 紧急关断或其他命令已经替换作业后，旧轮询结果反向覆盖新状态。

本函数不会调用 `Cdd_PwmWave_MainFunction()`，因此自身不会累计 CDD pending 超时周期；当前 20 ms 调用入口先执行 CDD MainFunction，再执行本函数。`Cdd_PwmWave_GetStatus()` 会刷新 pending 状态，只有 CDD 读回的 TOM 活动比较值和活动信号电平与目标帧一致时，才把 pending 帧及序列提升为 active。因此这里的“帧已生效”属于当前软件寄存器读回链路的确认，不等同于已经使用示波器确认 PWM Pad 的物理波形。作业或序列归属、活动帧以及允许状态失配的异常分支直接调用 `Cdd_PwmWave_EmergencyShutdown()` 且忽略其返回值，所以只能表述为“请求 CDD 紧急关断”，不能据此断言关断已经成功。

Manual 证据只覆盖底层机制：`PWM_Integration_Manual.pdf` 物理页 9 说明 PWM 使用 SchM 进入和退出临界区；`FC7300F8MDQ_Reference_Manual_V0.5.pdf` 物理页 1996～1997 说明 TOM `UPEN_CTRLn` 控制 `CM0`、`CM1`、`CTRL[SL]`、`SR0`、`SR1` 等字段的更新。两份手册都没有定义本项目私有的 `Bsp_PwmWave_MainFunction()` 状态机；上面的作业类型、序列匹配、延后 Start、故障映射和 CDD 紧急关断请求均为当前源码事实，不能外推为芯片手册规定或板级实测结论。

当前已有如下直接调用场景：

1. `Bsp_Pwm_20ms_Task_Event()` 是当前工作树中的唯一直接调用者。它在 Core0 条件范围内先调用 `Cdd_PwmWave_MainFunction()` 刷新 pending，并在刷新后仍未生效时累计超时周期，再调用本函数收敛 BSP 异步作业；随后才处理载波测试等待态和固定测试监控。头文件注释允许未来由更快的 Core0 控制任务调用本函数以降低命令完成延迟，但当前源码中没有第二个直接调用点。

```c
void Bsp_PwmWave_MainFunction(void)
{
  Cdd_PwmWave_StatusType tStatus;            // 保存 CDD 状态快照，仅在 GetStatus 成功后用于判定帧和驱动状态
  Bsp_PwmWave_JobType eJob;                  // 保存本轮在临界区内认领的 BSP 异步作业类型
  Cdd_PwmWave_SequenceType u32Sequence;       // 保存作业对应序列号，作为后续 pending/active 帧的归属凭据
  Cdd_PwmWave_ResultType eResult;             // 承载 CDD 状态查询或延后 Start 的执行结果

  // PWM 波形运行期资源归 Core0 管理，其他核调用时不得读取或推进异步作业。
  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return;                                   // 非所有者核直接退出，不改变作业状态和重入门禁
  }

  // 短临界区原子认领一个 PENDING 作业，并在调用 CDD 前取得稳定的作业类型和序列快照。
  // 请求侧 command epoch 阻止过期 API 结果回写；此处再用重入门禁隔离重叠的 MainFunction 轮询。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((FALSE == s_bPwmWaveMainInProgress) && (BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState)) {
    s_bPwmWaveMainInProgress = TRUE;           // 占用本轮处理权，重叠调用只能观察到门禁已占用
    eJob = s_ePwmWaveJob;                      // 临界区内快照避免后续判断读取到不同一代作业
    u32Sequence = s_u32PwmWaveRequestedSequence; // 序列号与作业一起快照，形成当前轮询的归属身份
  } else {                                    // 没有待处理作业或已有调用正在处理时统一转为空作业
    eJob = BSP_PWM_WAVE_JOB_NONE;
    u32Sequence = 0U;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();       // 在 CDD 查询和控制前释放 BSP 临界区，避免跨层长时间占用

  if (BSP_PWM_WAVE_JOB_NONE == eJob) {
    return;                                   // 本轮未取得处理权，因此无需执行末尾的门禁释放
  }

  // GetStatus 会刷新 CDD pending 状态；成功后才能判断影子更新仍在等待还是已提升为 active。
  eResult = Cdd_PwmWave_GetStatus(&tStatus);   // 查询失败时 tStatus 不作为后续帧归属或状态判定依据
  // 分支顺序定义处理优先级：查询错误和故障先结束，匹配的 pending 等待，active 后再按作业类型收尾。
  if (CDD_PWM_WAVE_OK != eResult) {
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, eResult); // 仅在作业身份仍匹配时发布状态查询失败
  } else if (TRUE == tStatus.bFaultLatched) {
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, Bsp_PwmWave_GetFaultResult(&tStatus)); // 按 HW_CONFIG、HW_TIMEOUT、一般故障的优先级映射结果
  } else if (TRUE == tStatus.bPendingFrameValid) { // 序列匹配时保持 PENDING，释放门禁后由下一周期继续确认
    if (u32Sequence != tStatus.u32PendingSequence) { // CDD pending 已属于另一序列，本轮 BSP 快照失去帧所有权
      (void)Cdd_PwmWave_EmergencyShutdown();      // 归属异常时尝试 CDD 级紧急关断；这里不验证实际 Pad 电平
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG); // 身份仍当前时以配置错误结束，抢占结果不会被覆盖
    }
  } else if ((FALSE == tStatus.bActiveFrameValid) || (u32Sequence != tStatus.u32ActiveSequence)) {
    /* The accepted frame disappeared or was replaced outside this owner. */
    (void)Cdd_PwmWave_EmergencyShutdown();        // 没有匹配 active 帧时阻止继续启动或确认更新成功
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG); // 将已接收帧消失或被替换归类为硬件配置异常
  } else if (BSP_PWM_WAVE_JOB_START_WITH_FRAME == eJob) {
    // 只有提交帧已成为同序列 active 帧后，才允许执行 Start 的第二阶段。
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) || (TRUE == tStatus.bStartPending)) { // Start 前要求 ARMED_LOW 且不存在另一启动等待
      (void)Cdd_PwmWave_EmergencyShutdown();      // 启动前置不变量破坏时尝试关断，避免在未知状态下进入 RUN
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      eResult = Cdd_PwmWave_Start();              // 在目标帧确认生效后执行原请求的延后启动阶段
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, eResult); // 将同步 Start 结果发布为该异步作业的最终结果
    }
  } else if ((BSP_PWM_WAVE_JOB_FRAME_UPDATE == eJob) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE == eJob)) {
    // 更新类作业以同序列帧已成为 active 为完成依据，不再向 CDD 提交第二条命令。
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) && (CDD_PWM_WAVE_STATE_RUN != tStatus.eState)) { // 生效后仅允许保持停机就绪或运行状态
      (void)Cdd_PwmWave_EmergencyShutdown();      // 帧虽生效但驱动状态异常时尝试安全关断
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_OK); // active 序列和驱动状态均一致，确认更新完成
    }
  } else {                                      // 其他作业本应同步完成，不应以 PENDING 状态进入本函数
    (void)Cdd_PwmWave_EmergencyShutdown();
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
  }

  // 在同一临界区释放重入门禁；FinishPendingJob 已用 PENDING、作业类型和序列号拒绝抢占后的陈旧结果。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  s_bPwmWaveMainInProgress = FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}
```

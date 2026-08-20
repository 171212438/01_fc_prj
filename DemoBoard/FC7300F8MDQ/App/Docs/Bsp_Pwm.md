`Bsp_PwmWave_GetCommandEpoch()` 是 BSP 内部读取 PWM 波形命令代次的静态辅助函数。它在 `PWM_EXCLUSIVE_AREA_19` 临界区内取得 `s_u32PwmWaveCommandEpoch` 的时点快照，供普通控制接口在 CDD 操作结束后调用 `Bsp_PwmWave_RecordJobIfCurrent()` 复核：只有命令代次仍等于进入控制流程时的快照，才发布本次普通作业结果。这样，当 `Bsp_PwmWave_EmergencyShutdown()` 在普通命令执行期间抢先通过 `Bsp_PwmWave_RecordJob()` 更新作业账本并推进代次时，旧命令不会再覆盖较新的紧急关断记录。

该函数没有输入参数和输出参数，也不检查 Core、初始化状态或作业状态。返回值是内部 `uint32` 命令代次的原始快照，不是 CDD 帧序列号、作业编号、时间戳或错误码；函数本身只读共享变量，不调用 CDD/MCAL，也不产生 PWM 硬件副作用。当前代次只在 `Bsp_PwmWave_RecordJob()` 无条件发布作业以及 `Bsp_PwmWave_RecordJobIfCurrent()` 成功发布当前作业时递增，`Bsp_PwmWave_FinishPendingJob()` 把同一 pending 作业更新为完成或失败时不会递增。

| 返回值 | 含义 |
| --- | --- |
| `0U` | 静态初始化后尚未发布首个作业时的初值，或 `uint32` 自增回绕后的值；不表示失败。当前 Core0 初始化路径通常会通过 `Bsp_PwmWave_RecordJob()` 把初值推进为 `1U` |
| `1U`～`UINT32_MAX` | 进入临界区时观察到的当前命令代次；具体数值不直接表示作业类型、作业状态或 CDD 执行结果 |

临界区保证本次读取不会落在 `Bsp_PwmWave_RecordJob()` 或 `Bsp_PwmWave_RecordJobIfCurrent()` 的作业字段更新与代次递增之间，但退出临界区后快照可以立即变旧。它与随后单独执行的 `Bsp_PwmWave_IsJobPending()` 不构成原子的“检查并预留命令槽”，也不会撤销已经发生的 CDD 操作或回收已经写入调用者输出参数的序列号；`Bsp_PwmWave_RecordJobIfCurrent()` 仅在代次失配时跳过 BSP 作业记录，而且没有把是否跳过反馈给调用者。计数器按无符号 `uint32` 自然回绕，当前实现没有额外的回绕或 ABA 防护。

手册事实与项目实现边界如下：PWM Integration Manual 原 PDF 第 9 页说明 PWM 使用 SchM 临界区，并把 `PWM_EXCLUSIVE_AREA_19` 对应到标准 PWM 通知路径；它没有定义本 BSP 函数、命令代次或作业账本，当前复用该临界区属于项目源码实现。MCAL User Manual 原 PDF 第 38～39 页说明真正的跨核互斥通常需要 Mailbox spinlock，并提示共享数据的内存可见性和缓存维护要求；当前 `SchM_Pwm` 实现只是按当前核保存中断状态并执行 `SuspendAllInterrupts()`，不是跨核锁。当前三个调用者及两个代次写路径均受 Core0 调用链约束，因此这里说明的是 Core0 任务/中断间的软件保护，不据此声称跨核安全。当前 Errata V0.5 原 PDF 第 4～5 页的条目汇总中未发现 PWM、SchM 或命令代次相关直接条目；这只表示本次检索无直接勘误依据，不表示不存在其他集成风险。

当前已有如下直接调用场景：

1. `Bsp_PwmWave_RequestStartFrame()` 仅为同步 `Start` 保存命令代次，并登记 `START_WITH_FRAME` 的 `PENDING/FAILED` 结果；高频 `RequestUpdate` 不进入 BSP 作业账本。
2. `Bsp_PwmWave_Stop()` 在调用 `Cdd_PwmWave_Stop()` 前取得快照，随后条件发布 `STOP` 的同步完成或失败结果。
3. `Bsp_PwmWave_ClearFault()` 在调用 `Cdd_PwmWave_ClearFault()` 前取得快照，随后条件发布 `CLEAR_FAULT` 的同步完成或失败结果。

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

`Bsp_Pwm_Init()` 是标准 MCAL PWM 与项目私有 PWM 波形控制的板级初始化编排入口。当前 `PWM_PRECOMPILE_SUPPORT == STD_ON`、`PWM_MULTICORE_ENABLED == STD_ON`，因此 `main()` 中 Core0、Core1、Core2 的调用路径都会先通过 `Pwm_Init(NULL_PTR)` 初始化当前核的标准 MCAL PWM 上下文及被分配通道；只有 Core0 继续配置 eFTU1 TOM0 共用中断、初始化作业账本并初始化 `Cdd_PwmWave`。Core0 当前只会在两组 HSADC 已武装且块式 DMA 捕获已经启动后调用本函数；CDD 建立安全的 `ARMED_LOW` 拓扑后，本函数才把 PWM1～PWM5 的九路 Pad 从 GPIO 切换为 eFTU 输出复用，再重新确认拓扑和低状态，确认成功后才开放共用中断。调用者随后查询控制状态并等待首个完整 HSADC 采样块；门禁成功后先保持 `ARMED_LOW`，待 Core0 完成其余板级初始化和 SysTick 初始化后，由统一的 `Bsp_PwmWave_Start()` 同步提交零窗口默认帧并启动输出。

该函数返回类型为 `void`，没有输入参数、返回值或输出参数。`Pwm_Init()` 的错误由 MCAL DET 路径处理，本函数不能取得其执行结果；Core0 的 CDD 初始化、`ARMED_LOW` 确认或缺少 ISR 配置形成的最终结果会在 SchM 临界区内写入 `s_ePwmWaveLastResult`，供后续控制状态查询使用。确认失败时，本函数忽略 `Cdd_PwmWave_EmergencyShutdown()` 自身的返回值，并继续强制九路 Pad 回到 GPIO 低电平及执行软件读回；即使 GPIO 回退确认成功，原始错误也不会被改写为 `CDD_PWM_WAVE_OK`。

该函数按当前调用链设计为启动期一次性初始化入口，不具备重复初始化语义。它依赖 `main()` 已完成 MCU、Port 以及当前配置启用的 eFTU、TrgSel 初始化，并应在任何正式波形控制请求之前调用。CDD 初始化失败发生在 `Bsp_Pwm_SetOutputPinModes()` 之前，因此当前首次启动路径不会把 Pad 切换为 eFTU；日志所述“remain GPIO low”还依赖此前 `Bsp_Port_Init()` 和当前生成 Port 配置已经建立 GPIO 低电平初态。重复调用可能触发 MCAL 已初始化 DET 和 CDD 状态错误，不能用作运行期重新初始化接口。

手册事实与项目实现边界如下：PWM Integration Manual 原 PDF 第 14 页把 `Pwm_Init(NULL_PTR)` 列为启动阶段 API；PWM User Manual 原 PDF 第 25～26 页说明 `Pwm_Init` 用于 PWM 模块初始化且无返回值；Port User Manual 原 PDF 第 15 页说明 `Port_SetPinMode` 用于设置引脚模式。多核分工、Core0 的 CDD/IRQ 初始化顺序、九路 Pad 范围和 GPIO 安全回退属于当前项目源码及生成配置事实，不是上述手册直接规定。CDD 状态检查和 GPIO 数字输入读回只能证明当前软件判据成立，不能替代示波器或外部电压测量对 Pad 物理波形的确认。

当前已有如下直接调用场景：

1. `main()` 是唯一直接调用者，在 `PWM_DEMO_SUPPORT == STD_ON` 条件下分别从 Core0、Core1、Core2 分支调用本函数。Core0 调用位于板级 MCU、Port、eFTU、TrgSel、ADC 和 DMA 捕获初始化之后；返回后，`main()` 必须确认 `ARMED_LOW` 且在 0.5 ms 内收到首个完整 HSADC 块，否则执行 PWM 紧急关断、停止采集并解除 ADC 硬件触发。门禁成功时，Core0 在其余初始化及 SysTick 初始化完成后调用 `Bsp_PwmWave_Start()`；Core1、Core2 调用只完成当前核的标准 MCAL PWM 初始化，当前多核条件会阻止它们进入 Core0 专属的 CDD、PinMux、IRQ 和安全回退流程。

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
    // 把 BSP 作业账本初始化为 NONE/IDLE/UNINIT/0，并推进 command epoch。
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

`Bsp_PwmWave_Start()` 是 Core0 的唯一同步启动接口。它要求 CDD 处于无 fault、无 pending 的 `ARMED_LOW`：若正常 Stop 后仍保留活动帧，则读取并重新提交该活动帧；若初始化或清故障后没有活动帧，则从当前已加载的 `PWM_CARRIER` 配置取得默认 Period，构造 PWM1～PWM4 零宽 0% 窗口及 PWM5 LOW 的默认帧。两种情况都通过 `Bsp_PwmWave_RequestStartFrame() -> Bsp_PwmWave_RequestUpdate() -> Cdd_PwmWave_SubmitFrame()` 这一条提交链登记 `START_WITH_FRAME`；只有目标序列已经成为活动帧后，`Bsp_PwmWave_MainFunction()` 才调用唯一的 `Cdd_PwmWave_Start()` 硬件启动点。

该接口有界轮询 BSP 作业完成状态，并且不调用 `Cdd_PwmWave_MainFunction()`，因此不会把启动期的快速轮询误计为多个 20 ms pending 周期。返回 `CDD_PWM_WAVE_OK` 前还要求作业完成、CDD 已进入 `RUN`、活动帧有效且序列匹配；状态查询、作业归属或完成不变量异常以及轮询超时时会请求紧急关断。`Bsp_PwmWave_StartDefault()`、`BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME` 和直接从 BSP 调用 `Cdd_PwmWave_Start()` 的旁路已删除。

当前直接调用者是 `main()` 的 Core0 初始化尾部。运行期需要从正常 Stop 重启时也调用同一接口；项目不再对外提供异步 `RequestStart`，所有启动请求统一经过同步 `Bsp_PwmWave_Start()` 和同一个最终硬件 Start 点。

`Bsp_PwmWave_RequestUpdate()` 是唯一的完整帧更新接口。需要改变 `u32PeriodTicks`、任一 `aWindow[]` 或两者同时变化时，上层必须构造完整、自洽的 `Cdd_PwmWave_FrameType`，显式给出与新周期相容的全部窗口和 PWM5 状态，再一次性提交。该函数直接且唯一地调用 `Cdd_PwmWave_SubmitFrame()`，不创建 `FRAME_UPDATE` 作业、不等待 20 ms MainFunction，也不提供只接收周期的旁路。运行期采用单 Core0 任务所有权、任意 20 us 内最多一次成功提交；同周期更新允许 latest-wins 覆盖尚未由慢诊断观察的序列。

`Bsp_PwmWave_MainFunction()` 现在只轮询和收尾冷启动的 `START_WITH_FRAME` 作业。它在短临界区内认领作业和序列，调用 `Cdd_PwmWave_GetStatus()` 确认目标帧已经成为同序列 active 帧后，再执行唯一的同步 `Cdd_PwmWave_Start()`。Frame Update 从不进入该状态机；若其他作业异常地以 `PENDING` 进入，按内部不变量破坏请求紧急关断。

该函数返回类型为 `void`，没有输入参数、返回值或输出参数。非 Core0 调用、当前没有 `PENDING` 作业或已有一轮调用正在处理时，函数静默返回；作业的 `PENDING`、`COMPLETED`、`FAILED` 状态及最终错误码保存在 BSP 共享作业状态中，可由 `Bsp_PwmWave_GetControlStatus()` 查询。`Bsp_PwmWave_FinishPendingJob()` 只有在共享作业仍为 `PENDING`，且作业类型和请求序列仍与本轮快照一致时才写入结果，避免抢占式 BSP 紧急关断或其他命令已经替换作业后，旧轮询结果反向覆盖新状态。

本函数不会调用 `Cdd_PwmWave_MainFunction()`，也不由当前 20 ms 任务调度；同步 `Bsp_PwmWave_Start()` 在自己的有界轮询中直接调用它。20 ms 入口只执行 CDD 慢诊断。`Cdd_PwmWave_GetStatus()` 会刷新 pending 状态，只有 CDD 读回的 TOM 活动比较值和活动信号电平与目标帧一致时，才把 pending 帧及序列提升为 active。因此这里的“帧已生效”属于当前软件寄存器读回链路的确认，不等同于示波器确认的 Pad 波形。

Manual 证据只覆盖底层机制：`PWM_Integration_Manual.pdf` 物理页 9 说明 PWM 使用 SchM 进入和退出临界区；`FC7300F8MDQ_Reference_Manual_V0.5.pdf` 物理页 1996～1997 说明 TOM `UPEN_CTRLn` 控制 `CM0`、`CM1`、`CTRL[SL]`、`SR0`、`SR1` 等字段的更新。两份手册都没有定义本项目私有的 `Bsp_PwmWave_MainFunction()` 状态机；上面的作业类型、序列匹配、延后 Start、故障映射和 CDD 紧急关断请求均为当前源码事实，不能外推为芯片手册规定或板级实测结论。

当前已有如下直接调用场景：

1. `Bsp_PwmWave_Start()` 的有界轮询是当前唯一直接调用场景；`Bsp_Pwm_20ms_Task_Event()` 只调用 `Cdd_PwmWave_MainFunction()`，不再调用本函数。

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

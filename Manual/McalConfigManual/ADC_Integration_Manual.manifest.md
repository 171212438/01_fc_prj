---
manifest_schema_version: "1.1"
source_pdf: "ADC_Integration_Manual.pdf"
source_pdf_sha256: "0bb9518acfa5dff8d77f8622e6da09a8892b4318c31e63f62b775c0ed0115208"
source_pdf_size_bytes: 1086949
pdf_page_count: 16
generated_at: "2026-06-19T07:48:34Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.4.1"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: ADC_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `ADC_Integration_Manual.pdf`
- `source_pdf_sha256`: `0bb9518acfa5dff8d77f8622e6da09a8892b4318c31e63f62b775c0ed0115208`
- `source_pdf_size_bytes`: `1086949`
- `pdf_page_count`: `16`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx ADC Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/07/14 / Initial release for MCAL V0.1.0`
- `generated_at`: `2026-06-19T07:48:34Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.4.1`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `no formal images detected; index table/list anchors and quality warnings`

## 2. Global Summary

- `topic`: FC7xxx AUTOSAR MCAL ADC module integration manual.
- `module_scope`: ADC integration dependencies, compile files, EB tresos plug-in setup, memory map sections, SchM exclusive areas, ISR mapping, DET/DEM error reporting, function-call phases, notification and OS macro requirements, integration steps.
- `key_chapters`: Chapter 2 Building; Chapter 3 Memory; Chapter 4 Exclusive Area; Chapter 5 ISR; Chapter 6 Error Report; Chapter 9 Integration Steps.
- `key_terms`: ADC, MCAL, EB tresos, Mcu, Port, Common, Rte, Det, Dem, SchM, ADC_START_SEC, ADC_STOP_SEC, ADC0_IRQHandler, AUTOSAR_OS_NOT_USED.
- `summary`: This 16-page document describes how to integrate the FC7xxx ADC MCAL module into a project, including module dependencies, required source/header files, memory-section mapping, critical-section allocation, IRQ vector mapping, DET error codes, startup calls and final integration steps.
- `retrieval_note`: Use the Page Segment Index to reach the relevant physical page, then verify exact file names, memory sections, ISR IDs and DET error lists in the source PDF.

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: `Cover`
- `path`: `Cover`
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["FC7xxx ADC Integration Manual", "Rev.0.1"]
- `anchor`: `FC7xxx ADC Integration Manual`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: `Revision History`
- `path`: `Revision History`
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Revision", "2023/07/14", "MCAL V0.1.0"]
- `anchor`: `Revision History`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: `Table of Contents`
- `path`: `Table of Contents`
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Table of Contents", "Chapter 1", "Chapter 9"]
- `anchor`: `Table of Contents`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["integration requirements", "ADC module"]
- `anchor`: `Chapter 1 Introduction`

### SEC-001-001
- `source_number`: `1.1`
- `title`: `Introduction`
- `path`: `Chapter 1 Introduction / 1.1 Introduction`
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ADC module", "integration requirements"]
- `anchor`: `This integration manual describes`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: `Building`
- `path`: `Chapter 2 Building`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["dependencies", "compile files", "EB tresos", "plug-ins"]
- `anchor`: `Chapter 2 Building`

### SEC-002-001
- `source_number`: `2.1`
- `title`: `Dependencies on Other Modules`
- `path`: `Chapter 2 Building / 2.1 Dependencies on Other Modules`
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MCU", "Port", "Common", "Rte", "Det"]
- `anchor`: `Dependencies on Other Modules`

### SEC-002-002
- `source_number`: `2.2`
- `title`: `Files Required for Compile`
- `path`: `Chapter 2 Building / 2.2 Files Required for Compile`
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Adc.c", "Adc_Hw.c", "Adc_Lld.c", "Adc_Cfg.h", "SchM_Adc.h"]
- `anchor`: `Files Required for Compile`

### SEC-002-003
- `source_number`: `2.3`
- `title`: `Add Plug-ins`
- `path`: `Chapter 2 Building / 2.3 Add Plug-ins`
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["EB tresos", "plugins", "generated source"]
- `anchor`: `Add Plug-ins`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: `Memory`
- `path`: `Chapter 3 Memory`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["memory map", "ADC_START_SEC", "ADC_STOP_SEC"]
- `anchor`: `Chapter 3 Memory`

### SEC-003-001
- `source_number`: `3.1`
- `title`: `Sections in Memory Map`
- `path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["CONFIG_DATA", "CONST", "CODE", "VAR_NO_INIT", "VAR_INIT"]
- `anchor`: `Sections in Memory Map`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: `Exclusive Area`
- `path`: `Chapter 4 Exclusive Area`
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["SchM", "exclusive area", "critical regions", "Adc_HL", "Adc_LL"]
- `anchor`: `Chapter 4 Exclusive Area`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: `Interrupt Service Routine (ISR)`
- `path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["ADC0_IRQHandler", "NVIC", "IRQ"]
- `anchor`: `Interrupt Service Routine`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: `Error Report`
- `path`: `Chapter 6 Error Report`
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Det", "Dem", "ADC_E_UNINIT", "ADC_E_PARAM_GROUP"]
- `anchor`: `Chapter 6 Error Report`

### SEC-006-001
- `source_number`: `6.1`
- `title`: `Det`
- `path`: `Chapter 6 Error Report / 6.1 Det`
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["Development Error", "ADC_E_*", "Adc_Init"]
- `anchor`: `6.1 Det`

### SEC-006-002
- `source_number`: `6.2`
- `title`: `Dem`
- `path`: `Chapter 6 Error Report / 6.2 Dem`
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Dem", "None"]
- `anchor`: `6.2 Dem`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: `Function Calls`
- `path`: `Chapter 7 Function Calls`
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Startup", "Shutdown", "Wake-up", "Runtime", "Adc_Init"]
- `anchor`: `Chapter 7 Function Calls`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: `Other Requirements`
- `path`: `Chapter 8 Other Requirements`
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Notification", "Callback", "Callout", "AUTOSAR_OS_NOT_USED"]
- `anchor`: `Chapter 8 Other Requirements`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: `Integration Steps`
- `path`: `Chapter 9 Integration Steps`
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["configure", "generate", "linker", "interrupt", "build"]
- `anchor`: `Chapter 9 Integration Steps`

## 4. Page Locator Map

Each `PAGE-*` item maps one 1-based PDF physical page to its auxiliary printed page label and current inferred section path.

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `keywords`: ["ADC", "FC7xxx", "Integration"]
- `anchors`: ["Rev.0.1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `keywords`: ["ADC", "MCAL", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial"]
- `anchors`: ["Revision History", "Revision", "Date", "Changes"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `keywords`: ["ADC", "ISR", "FC7xxx", "Integration", "Table", "Contents", "Introduction", "Building"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .................................................................................................................................................... 4", "1.1", "Introduction ..................................................................................................................................................... 4"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `keywords`: ["ADC", "FC7xxx", "Integration", "Introduction", "integration", "describes", "requirements", "module"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the ADC module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: `Chapter 2 Building`
- `content_types`: ["text"]
- `keywords`: ["Adc_Hw", "Adc_Lld", "Adc_Irq", "Adc_Ptimer_Hw", "Adc_Ptimer_Irq", "Adc_RegOps", "Adc_Reg", "Adc_Ptimer_RegOps"]
- `anchors`: ["Chapter 2 Building", "2.1", "Dependencies on Other Modules", "Module configuration dependency"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: `Chapter 2 Building`
- `content_types`: ["text"]
- `keywords`: ["Adc_CfgDefines", "ADC", "FC7xxx", "Integration", "include", "Common", "module", "files"]
- `anchors`: ["•", "_MCAL_generate/include/Adc_CfgDefines.h", "Common module files:", "•"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_START_SEC_CONFIG_DATA_8", "ADC_STOP_SEC_CONFIG_DATA_8", "ADC_START_SEC_CONFIG_DATA_16", "ADC_STOP_SEC_CONFIG_DATA_16", "ADC_START_SEC_CONFIG_DATA_32", "ADC_STOP_SEC_CONFIG_DATA_32", "ADC_START_SEC_CONFIG_DATA_UNSPECIFIED", "ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `anchors`: ["Chapter 3 Memory", "3.1", "Sections in Memory Map", "Section Name"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_START_SEC_VAR", "ADC_STOP_SEC_VAR", "ADC", "UNSPECIFIED", "FC7xxx", "Integration", "startup"]
- `anchors`: ["Section Name", "Section Type", "ADC_START_SEC_VAR _INIT_16", "ADC_STOP_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `keywords`: ["Adc_DeInit", "Adc_StartGroupConversion", "Adc_StopGroupConversion", "Adc_ReadGroup", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_GetGroupStatus", "Adc_GetStreamLastPointer"]
- `anchors`: ["Chapter 4 Exclusive Area", "ADC module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the Adc driver:", "•"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `keywords`: ["Adc_LL_DeInitUnitHardware", "Adc_LL_StartHwTrigConversion", "Adc_LL_EnableHardwareTrigger", "Adc_LL_DisableHardwareTrigger", "Adc_LL_StartNormalConversion", "Adc_LL_ClearConvCompleteFlag", "Adc_LL_ConfigurePartialConversion", "Adc_LL_StopCurrentConversion"]
- `anchors`: ["-", "Adc_LL_DeInitUnitHardware : exclusive area 31", "-", "Adc_LL_StartHwTrigConversion : exclusive area 32"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `keywords`: ["ADC", "ISR", "IRQ", "NVIC", "ADC0", "ADC1", "ADC2", "ADC3"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: `Chapter 6 Error Report`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_E_ALREADY_INITIALIZED", "ADC_E_PARAM_CONFIG", "ADC_E_UNINIT", "ADC_E_PARAM_POINTER", "ADC_E_PARAM_GROUP", "ADC_E_BUSY", "ADC_E_WRONG_TRIGG_SRC", "ADC_E_BUFFER_UNINIT"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: `Chapter 6 Error Report`
- `content_types`: ["table_like"]
- `keywords`: ["ADC_E_NOTIF_CAPABILITY", "ADC_E_UNINIT", "ADC_E_PARAM_GROUP", "ADC_E_IDLE", "ADC_E_PARAM_POINTER", "Adc_GetGroupStatus", "Adc_GetStreamLastPointer", "Adc_GetVersionInfo"]
- `anchors`: ["Function Name", "Error Type", "ADC_E_NOTIF_CAPABILITY", "Adc_GetGroupStatus"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: `Chapter 7 Function Calls`
- `content_types`: ["text"]
- `keywords`: ["Adc_Init", "Adc_ConfigType", "Adc_SetupResultBuffer", "Adc_GroupType", "Adc_ValueGroupType", "ADC", "API", "FC7xxx"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs be called is Adc_Init(const Adc_ConfigType *ConfigPtr) and Adc_SetupResultBuffer(Adc_GroupType Group,"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: `Chapter 8 Other Requirements`
- `content_types`: ["text"]
- `keywords`: ["Adc_ISR_EndGroupConvUnit0", "ADC", "NULL_PTR", "NULL", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "ISR", "FC7xxx"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "•"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `keywords`: ["ADC", "ISR", "FC7xxx", "Integration", "Steps", "Configure", "module", "generate"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the ADC module and generate configuration files (please refer to Building chapter for details).", "2)"]

## 5. Page Segment Index

Page segments are one page each for deterministic coverage and easy grep/ripgrep lookup.

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: `Cover`
- `content_types`: ["cover"]
- `summary`: Cover page identifying the FC7xxx ADC Integration Manual and revision 0.1.
- `keywords`: ["ADC", "FC7xxx", "Integration"]
- `anchors`: ["Rev.0.1"]
- `quality_flags`: []

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `content_types`: ["revision_history", "table_like"]
- `summary`: Revision history table; revision 0.1 dated 2023/07/14, initial release for MCAL V0.1.0.
- `keywords`: ["ADC", "MCAL", "FC7xxx", "Integration", "Revision", "History", "Changes", "Initial", "release"]
- `anchors`: ["Revision History", "Revision", "Date"]
- `quality_flags`: []

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `content_types`: ["toc"]
- `summary`: Table of contents for chapters 1-9, including building, memory, exclusive areas, ISR, error reporting, function calls, and integration steps.
- `keywords`: ["ADC", "ISR", "FC7xxx", "Integration", "Table", "Contents", "Introduction", "Building", "Dependencies", "Other"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction .................................................................................................................................................... 4", "1.1"]
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: `Chapter 1 Introduction / 1.1 Introduction`
- `content_types`: ["text"]
- `summary`: Introduction states that the manual describes integration requirements for the ADC module.
- `keywords`: ["ADC", "FC7xxx", "Integration", "Introduction", "integration", "describes", "requirements", "module"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction"]
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: `Chapter 2 Building`
- `content_types`: ["text"]
- `summary`: Build dependencies: MCU clock reference, Port ADC channels, Common chip variant; build dependencies Common/Rte/Det; initialization dependencies Mcu and Port. Starts ADC module file list.
- `keywords`: ["Adc_Hw", "Adc_Lld", "Adc_Irq", "Adc_Ptimer_Hw", "Adc_Ptimer_Irq", "Adc_RegOps", "Adc_Reg", "Adc_Ptimer_RegOps", "Adc_Ptimer_Reg", "Adc_Types"]
- `anchors`: ["Chapter 2 Building", "2.1", "Dependencies on Other Modules"]
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: `Chapter 2 Building`
- `content_types`: ["text"]
- `summary`: Continues compile file requirements for ADC, Common, Det and Rte; describes EB tresos plug-in installation and generated source/header output location.
- `keywords`: ["Adc_CfgDefines", "ADC", "FC7xxx", "Integration", "include", "Common", "module", "files", "Std_Types", "Platform_Types"]
- `anchors`: ["•", "_MCAL_generate/include/Adc_CfgDefines.h", "Common module files:"]
- `quality_flags`: []

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["table_like"]
- `summary`: Memory map sections table, including CONFIG_DATA, CONST, CODE/RAMCODE/CODE_AC, VAR_NO_INIT and VAR_INIT memory sections.
- `keywords`: ["ADC_START_SEC_CONFIG_DATA_8", "ADC_STOP_SEC_CONFIG_DATA_8", "ADC_START_SEC_CONFIG_DATA_16", "ADC_STOP_SEC_CONFIG_DATA_16", "ADC_START_SEC_CONFIG_DATA_32", "ADC_STOP_SEC_CONFIG_DATA_32", "ADC_START_SEC_CONFIG_DATA_UNSPECIFIED", "ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED", "ADC_START_SEC_CONST_BOOLEAN", "ADC_STOP_SEC_CONST_BOOLEAN"]
- `anchors`: ["Chapter 3 Memory", "3.1", "Sections in Memory Map"]
- `quality_flags`: []

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `content_types`: ["table_like"]
- `summary`: Continuation of the memory section table for ADC_START_SEC_VAR_INIT_* and ADC_STOP_SEC_VAR_INIT_* entries.
- `keywords`: ["ADC_START_SEC_VAR", "ADC_STOP_SEC_VAR", "ADC", "UNSPECIFIED", "FC7xxx", "Integration", "startup"]
- `anchors`: ["Section Name", "Section Type", "ADC_START_SEC_VAR _INIT_16"]
- `quality_flags`: []

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `summary`: Exclusive areas 0-30 for Adc.c, Adc_Hw.c and the beginning of Adc_Lld.c functions protected by SchM critical sections.
- `keywords`: ["Adc_DeInit", "Adc_StartGroupConversion", "Adc_StopGroupConversion", "Adc_ReadGroup", "Adc_EnableHardwareTrigger", "Adc_DisableHardwareTrigger", "Adc_GetGroupStatus", "Adc_GetStreamLastPointer", "Adc_Hw", "Adc_HL_RemoveFromQueue"]
- `anchors`: ["Chapter 4 Exclusive Area", "ADC module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the Adc driver:"]
- `quality_flags`: []

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: `Chapter 4 Exclusive Area`
- `content_types`: ["text"]
- `summary`: Continuation of exclusive areas 31-48 for Adc_Lld.c and Adc_Ptimer_Hw.c functions.
- `keywords`: ["Adc_LL_DeInitUnitHardware", "Adc_LL_StartHwTrigConversion", "Adc_LL_EnableHardwareTrigger", "Adc_LL_DisableHardwareTrigger", "Adc_LL_StartNormalConversion", "Adc_LL_ClearConvCompleteFlag", "Adc_LL_ConfigurePartialConversion", "Adc_LL_StopCurrentConversion", "Adc_LL_RestartContinuousConversion", "Adc_LL_CheckConversionSequenceStatus"]
- `anchors`: ["-", "Adc_LL_DeInitUnitHardware : exclusive area 31", "-"]
- `quality_flags`: []

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `content_types`: ["text"]
- `summary`: ISR mapping table for ADC0-ADC3 IRQ handlers and NVIC interrupt IDs 131-134.
- `keywords`: ["ADC", "ISR", "IRQ", "NVIC", "ADC0", "ADC1", "ADC2", "ADC3", "FC7xxx", "Integration"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name"]
- `quality_flags`: []

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: `Chapter 6 Error Report`
- `content_types`: ["table_like"]
- `summary`: DET error report table start: Adc_Init, Adc_SetupResultBuffer, Adc_DeInit, conversion control and hardware trigger APIs mapped to ADC_E_* errors.
- `keywords`: ["ADC_E_ALREADY_INITIALIZED", "ADC_E_PARAM_CONFIG", "ADC_E_UNINIT", "ADC_E_PARAM_POINTER", "ADC_E_PARAM_GROUP", "ADC_E_BUSY", "ADC_E_WRONG_TRIGG_SRC", "ADC_E_BUFFER_UNINIT", "ADC_E_QUEUE_FULL", "ADC_E_IDLE"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det"]
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: `Chapter 6 Error Report`
- `content_types`: ["table_like"]
- `summary`: DET error report table continuation: notification, status, stream pointer and version APIs; DEM reporting is marked None.
- `keywords`: ["ADC_E_NOTIF_CAPABILITY", "ADC_E_UNINIT", "ADC_E_PARAM_GROUP", "ADC_E_IDLE", "ADC_E_PARAM_POINTER", "Adc_GetGroupStatus", "Adc_GetStreamLastPointer", "Adc_GetVersionInfo", "ADC", "FC7xxx"]
- `anchors`: ["Function Name", "Error Type", "ADC_E_NOTIF_CAPABILITY"]
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: `Chapter 7 Function Calls`
- `content_types`: ["text"]
- `summary`: Function call requirements: startup requires Adc_Init and Adc_SetupResultBuffer; shutdown, wake-up and runtime have no additional calls.
- `keywords`: ["Adc_Init", "Adc_ConfigType", "Adc_SetupResultBuffer", "Adc_GroupType", "Adc_ValueGroupType", "ADC", "API", "FC7xxx", "Integration", "Function"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup"]
- `quality_flags`: []

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: `Chapter 8 Other Requirements`
- `content_types`: ["text"]
- `summary`: Other requirements: notification function implementation if configured; macros and OS switch behavior including AUTOSAR_OS_NOT_USED and ISR vector mapping example.
- `keywords`: ["Adc_ISR_EndGroupConvUnit0", "ADC", "NULL_PTR", "NULL", "AUTOSAR_OS_NOT_USED", "USE_SW_VECTOR_MODE", "ISR", "FC7xxx", "Integration", "Other"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout"]
- `quality_flags`: []

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: `Chapter 9 Integration Steps`
- `content_types`: ["text"]
- `summary`: Integration steps: configure/generate ADC, configure linker memory sections, map interrupt notifications, and build with dependent modules.
- `keywords`: ["ADC", "ISR", "FC7xxx", "Integration", "Steps", "Configure", "module", "generate", "configuration", "files"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the ADC module and generate configuration files (please refer to Building chapter for details)."]
- `quality_flags`: []

## 6. Table Index

### TBL-0002-001
- `caption`: `Revision History`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0002-001`
- `physical_pages`: [2]
- `primary_page`: `2`
- `printed_pages`: ["2"]
- `section_path`: `Revision History`
- `bbox`: `null`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: Revision 0.1 initial release for MCAL V0.1.0.
- `anchor`: `Revision Date Changes`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.96`
- `quality_flags`: []

### TBL-0003-001
- `caption`: `Table of Contents`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0003-001`
- `physical_pages`: [3]
- `primary_page`: `3`
- `printed_pages`: ["3"]
- `section_path`: `Table of Contents`
- `bbox`: `null`
- `key_fields`: ["Chapter", "Title", "Printed page"]
- `summary`: Lists chapters 1-9 and subsections for the ADC Integration Manual.
- `anchor`: `Table of Contents`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.95`
- `quality_flags`: ["toc_table_like"]

### TBL-0007-0008
- `caption`: `Sections in Memory Map`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0007-0008`
- `physical_pages`: [7, 8]
- `primary_page`: `7`
- `printed_pages`: ["7", "8"]
- `section_path`: `Chapter 3 Memory / 3.1 Sections in Memory Map`
- `bbox`: `null`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: Maps ADC_START_SEC_* and ADC_STOP_SEC_* memory sections to variable/config/code categories.
- `anchor`: `Section Name Section Type Description`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.90`
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0011-001
- `caption`: `ADC ISR mapping`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0011-001`
- `physical_pages`: [11]
- `primary_page`: `11`
- `printed_pages`: ["11"]
- `section_path`: `Chapter 5 Interrupt Service Routine (ISR)`
- `bbox`: `null`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: Maps ADC0-ADC3 handlers to NVIC interrupt IDs 131-134.
- `anchor`: `Instance Interrupt Name IRQ Number`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.95`
- `quality_flags`: []

### TBL-0012-0013
- `caption`: `DET error report mapping`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0012-0013`
- `physical_pages`: [12, 13]
- `primary_page`: `12`
- `printed_pages`: ["12", "13"]
- `section_path`: `Chapter 6 Error Report / 6.1 Det`
- `bbox`: `null`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: Maps ADC APIs to development error codes such as ADC_E_UNINIT, ADC_E_PARAM_GROUP and ADC_E_BUSY.
- `anchor`: `Function Name Error Type`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.89`
- `quality_flags`: ["table_spans_multiple_pages"]

### TBL-0013-001
- `caption`: `DEM error report`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0013-001`
- `physical_pages`: [13]
- `primary_page`: `13`
- `printed_pages`: ["13"]
- `section_path`: `Chapter 6 Error Report / 6.2 Dem`
- `bbox`: `null`
- `key_fields`: ["Dem"]
- `summary`: DEM error reporting is explicitly marked None.
- `anchor`: `6.2 Dem None`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.98`
- `quality_flags`: []

### TBL-0014-001
- `caption`: `Function call requirements`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0014-001`
- `physical_pages`: [14]
- `primary_page`: `14`
- `printed_pages`: ["14"]
- `section_path`: `Chapter 7 Function Calls`
- `bbox`: `null`
- `key_fields`: ["Startup", "Shutdown", "Wake-up", "Runtime"]
- `summary`: Startup calls Adc_Init and Adc_SetupResultBuffer; other phases are None.
- `anchor`: `Function Calls during Startup`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.82`
- `quality_flags`: ["list_as_table_like_index"]

### TBL-0009-0010
- `caption`: `Exclusive area mapping`
- `source_table_number`: `null`
- `generated_table_number`: `TBL-0009-0010`
- `physical_pages`: [9, 10]
- `primary_page`: `9`
- `printed_pages`: ["9", "10"]
- `section_path`: `Chapter 4 Exclusive Area`
- `bbox`: `null`
- `key_fields`: ["Source file", "Function", "Exclusive area number"]
- `summary`: Lists exclusive area IDs 0-48 for Adc.c, Adc_Hw.c, Adc_Lld.c and Adc_Ptimer_Hw.c functions.
- `anchor`: `The following critical regions are used in the Adc driver`
- `extraction_method`: `text-layer anchor + generated table-like index`
- `confidence`: `0.86`
- `quality_flags`: ["generated_from_bulleted_list", "spans_multiple_pages"]

## 7. Figure / Image Index

- `figure_index_status`: `no formal figures or raster image blocks detected by PyMuPDF text/image extraction`
- `quality_note`: `The source appears text/table/list oriented; no semantic figures are indexed.`

## 8. Term / API / Config / Requirement Index

### API-ADC-CFG
- `name`: `Adc_Cfg`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL_generate/src/Adc_Cfg.c"]
- `aliases`: ["Adc Cfg", "Adc_Cfg()"]

### API-ADC-CFGDEFINES
- `name`: `Adc_CfgDefines`
- `type`: `api_or_function`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p6: _MCAL_generate/include/Adc_CfgDefines.h"]
- `aliases`: ["Adc CfgDefines", "Adc_CfgDefines()"]

### API-ADC-CONFIGTYPE
- `name`: `Adc_ConfigType`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 7 Function Calls"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: The API needs be called is Adc_Init(const Adc_ConfigType *ConfigPtr) and Adc_SetupResultBuffer(Adc_GroupType Group,"]
- `aliases`: ["Adc ConfigType", "Adc_ConfigType()"]

### API-ADC-DEINIT
- `name`: `Adc_DeInit`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_DeInit : exclusive area 0"]
- `aliases`: ["Adc DeInit", "Adc_DeInit()"]

### API-ADC-DISABLEGROUPNOTIFICATION
- `name`: `Adc_DisableGroupNotification`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_DisableGroupNotification"]
- `aliases`: ["Adc DisableGroupNotification", "Adc_DisableGroupNotification()"]

### API-ADC-DISABLEHARDWARETRIGGER
- `name`: `Adc_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_DisableHardwareTrigger : exclusive area 5"]
- `aliases`: ["Adc DisableHardwareTrigger", "Adc_DisableHardwareTrigger()"]

### API-ADC-ENABLEGROUPNOTIFICATION
- `name`: `Adc_EnableGroupNotification`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_EnableGroupNotification"]
- `aliases`: ["Adc EnableGroupNotification", "Adc_EnableGroupNotification()"]

### API-ADC-ENABLEHARDWARETRIGGER
- `name`: `Adc_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_EnableHardwareTrigger : exclusive area 4"]
- `aliases`: ["Adc EnableHardwareTrigger", "Adc_EnableHardwareTrigger()"]

### API-ADC-GETGROUPSTATUS
- `name`: `Adc_GetGroupStatus`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 13]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_GetGroupStatus : exclusive area 6"]
- `aliases`: ["Adc GetGroupStatus", "Adc_GetGroupStatus()"]

### API-ADC-GETSTREAMLASTPOINTER
- `name`: `Adc_GetStreamLastPointer`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 13]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_GetStreamLastPointer : exclusive area 7"]
- `aliases`: ["Adc GetStreamLastPointer", "Adc_GetStreamLastPointer()"]

### API-ADC-GETVERSIONINFO
- `name`: `Adc_GetVersionInfo`
- `type`: `api_or_function`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p13: Adc_GetVersionInfo"]
- `aliases`: ["Adc GetVersionInfo", "Adc_GetVersionInfo()"]

### API-ADC-GROUPTYPE
- `name`: `Adc_GroupType`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 7 Function Calls"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: The API needs be called is Adc_Init(const Adc_ConfigType *ConfigPtr) and Adc_SetupResultBuffer(Adc_GroupType Group,"]
- `aliases`: ["Adc GroupType", "Adc_GroupType()"]

### API-ADC-HL-DISABLEHARDWARETRIGGER
- `name`: `Adc_HL_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_DisableHardwareTrigger : exclusive area 20"]
- `aliases`: ["Adc HL DisableHardwareTrigger", "Adc_HL_DisableHardwareTrigger()"]

### API-ADC-HL-ENABLEHARDWARETRIGGER
- `name`: `Adc_HL_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_EnableHardwareTrigger : exclusive area 19"]
- `aliases`: ["Adc HL EnableHardwareTrigger", "Adc_HL_EnableHardwareTrigger()"]

### API-ADC-HL-ENDPARTIALCONVERSION
- `name`: `Adc_HL_EndPartialConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_EndPartialConversion : exclusive area 21, 22"]
- `aliases`: ["Adc HL EndPartialConversion", "Adc_HL_EndPartialConversion()"]

### API-ADC-HL-READRESULTBUFFER
- `name`: `Adc_HL_ReadResultBuffer`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_ReadResultBuffer : exclusive area 9"]
- `aliases`: ["Adc HL ReadResultBuffer", "Adc_HL_ReadResultBuffer()"]

### API-ADC-HL-REMOVEFROMQUEUE
- `name`: `Adc_HL_RemoveFromQueue`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_RemoveFromQueue : exclusive area 8"]
- `aliases`: ["Adc HL RemoveFromQueue", "Adc_HL_RemoveFromQueue()"]

### API-ADC-HL-STARTCONVERSION
- `name`: `Adc_HL_StartConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_StartConversion : exclusive area 14, 15, 16"]
- `aliases`: ["Adc HL StartConversion", "Adc_HL_StartConversion()"]

### API-ADC-HL-STOPCONVERSION
- `name`: `Adc_HL_StopConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_StopConversion : exclusive area 17, 18"]
- `aliases`: ["Adc HL StopConversion", "Adc_HL_StopConversion()"]

### API-ADC-HL-UPDATESTATUSGETDATA
- `name`: `Adc_HL_UpdateStatusGetData`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_UpdateStatusGetData : exclusive area 12"]
- `aliases`: ["Adc HL UpdateStatusGetData", "Adc_HL_UpdateStatusGetData()"]

### API-ADC-HL-UPDATESTATUSREADGROUP
- `name`: `Adc_HL_UpdateStatusReadGroup`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_UpdateStatusReadGroup : exclusive area 13"]
- `aliases`: ["Adc HL UpdateStatusReadGroup", "Adc_HL_UpdateStatusReadGroup()"]

### API-ADC-HL-UPDATESWQUEUE
- `name`: `Adc_HL_UpdateSwQueue`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_HL_UpdateSwQueue : exclusive area10, 11"]
- `aliases`: ["Adc HL UpdateSwQueue", "Adc_HL_UpdateSwQueue()"]

### API-ADC-HW
- `name`: `Adc_Hw`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Hw.c"]
- `aliases`: ["Adc Hw", "Adc_Hw()"]

### API-ADC-HW-TYPES
- `name`: `Adc_Hw_Types`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Hw_Types.h"]
- `aliases`: ["Adc Hw Types", "Adc_Hw_Types()"]

### API-ADC-INIT
- `name`: `Adc_Init`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12, 14]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_Init"]
- `aliases`: ["Adc Init", "Adc_Init()"]

### API-ADC-IRQ
- `name`: `Adc_Irq`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Irq.c"]
- `aliases`: ["Adc Irq", "Adc_Irq()"]

### API-ADC-ISR-ENDGROUPCONVUNIT0
- `name`: `Adc_ISR_EndGroupConvUnit0`
- `type`: `api_or_function`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p15: extern ISR(Adc_ISR_EndGroupConvUnit0);"]
- `aliases`: ["Adc ISR EndGroupConvUnit0", "Adc_ISR_EndGroupConvUnit0()"]

### API-ADC-LL-CHECKCONVERSIONSEQUENCESTATUS
- `name`: `Adc_LL_CheckConversionSequenceStatus`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_CheckConversionSequenceStatus : exclusive area 40"]
- `aliases`: ["Adc LL CheckConversionSequenceStatus", "Adc_LL_CheckConversionSequenceStatus()"]

### API-ADC-LL-CLEARCONVCOMPLETEFLAG
- `name`: `Adc_LL_ClearConvCompleteFlag`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_ClearConvCompleteFlag : exclusive area 36"]
- `aliases`: ["Adc LL ClearConvCompleteFlag", "Adc_LL_ClearConvCompleteFlag()"]

### API-ADC-LL-CONFIGUREDMACHANNEL
- `name`: `Adc_LL_ConfigureDmaChannel`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_LL_ConfigureDmaChannel : exclusive area 27"]
- `aliases`: ["Adc LL ConfigureDmaChannel", "Adc_LL_ConfigureDmaChannel()"]

### API-ADC-LL-CONFIGUREPARTIALCONVERSION
- `name`: `Adc_LL_ConfigurePartialConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_ConfigurePartialConversion : exclusive area 37"]
- `aliases`: ["Adc LL ConfigurePartialConversion", "Adc_LL_ConfigurePartialConversion()"]

### API-ADC-LL-CONFIGUREPRESCALER
- `name`: `Adc_LL_ConfigurePrescaler`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_LL_ConfigurePrescaler : exclusive area 23, 24"]
- `aliases`: ["Adc LL ConfigurePrescaler", "Adc_LL_ConfigurePrescaler()"]

### API-ADC-LL-DEINITUNITHARDWARE
- `name`: `Adc_LL_DeInitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_DeInitUnitHardware : exclusive area 31"]
- `aliases`: ["Adc LL DeInitUnitHardware", "Adc_LL_DeInitUnitHardware()"]

### API-ADC-LL-DISABLEHARDWARETRIGGER
- `name`: `Adc_LL_DisableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_DisableHardwareTrigger : exclusive area 34"]
- `aliases`: ["Adc LL DisableHardwareTrigger", "Adc_LL_DisableHardwareTrigger()"]

### API-ADC-LL-DISABLEUNITCHECKTIMEOUT
- `name`: `Adc_LL_DisableUnitCheckTimeout`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_LL_DisableUnitCheckTimeout : exclusive area 26"]
- `aliases`: ["Adc LL DisableUnitCheckTimeout", "Adc_LL_DisableUnitCheckTimeout()"]

### API-ADC-LL-ENABLEHARDWARETRIGGER
- `name`: `Adc_LL_EnableHardwareTrigger`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_EnableHardwareTrigger : exclusive area 33"]
- `aliases`: ["Adc LL EnableHardwareTrigger", "Adc_LL_EnableHardwareTrigger()"]

### API-ADC-LL-GETCONVERSIONSEQUENCERESULTS
- `name`: `Adc_LL_GetConversionSequenceResults`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_GetConversionSequenceResults : exclusive area 41"]
- `aliases`: ["Adc LL GetConversionSequenceResults", "Adc_LL_GetConversionSequenceResults()"]

### API-ADC-LL-INITUNITHARDWARE
- `name`: `Adc_LL_InitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_LL_InitUnitHardware : exclusive area 28, 29, 30"]
- `aliases`: ["Adc LL InitUnitHardware", "Adc_LL_InitUnitHardware()"]

### API-ADC-LL-RECONFIGUREDMA
- `name`: `Adc_LL_ReConfigureDma`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_ReConfigureDma : exclusive area 42"]
- `aliases`: ["Adc LL ReConfigureDma", "Adc_LL_ReConfigureDma()"]

### API-ADC-LL-RESTARTCONTINUOUSCONVERSION
- `name`: `Adc_LL_RestartContinuousConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_RestartContinuousConversion : exclusive area 39"]
- `aliases`: ["Adc LL RestartContinuousConversion", "Adc_LL_RestartContinuousConversion()"]

### API-ADC-LL-STARTHWTRIGCONVERSION
- `name`: `Adc_LL_StartHwTrigConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_StartHwTrigConversion : exclusive area 32"]
- `aliases`: ["Adc LL StartHwTrigConversion", "Adc_LL_StartHwTrigConversion()"]

### API-ADC-LL-STARTNORMALCONVERSION
- `name`: `Adc_LL_StartNormalConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_StartNormalConversion : exclusive area 35"]
- `aliases`: ["Adc LL StartNormalConversion", "Adc_LL_StartNormalConversion()"]

### API-ADC-LL-STOPCONVERSIONCHECKTIMEOUT
- `name`: `Adc_LL_StopConversionCheckTimeout`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_LL_StopConversionCheckTimeout : exclusive area 25"]
- `aliases`: ["Adc LL StopConversionCheckTimeout", "Adc_LL_StopConversionCheckTimeout()"]

### API-ADC-LL-STOPCURRENTCONVERSION
- `name`: `Adc_LL_StopCurrentConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_LL_StopCurrentConversion : exclusive area 38"]
- `aliases`: ["Adc LL StopCurrentConversion", "Adc_LL_StopCurrentConversion()"]

### API-ADC-LLD
- `name`: `Adc_Lld`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5, 9]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Lld.c"]
- `aliases`: ["Adc Lld", "Adc_Lld()"]

### API-ADC-MEMMAP
- `name`: `Adc_MemMap`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_MemMap.h"]
- `aliases`: ["Adc MemMap", "Adc_MemMap()"]

### API-ADC-PBCFG
- `name`: `Adc_PBcfg`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL_generate/src/Adc_PBcfg.c"]
- `aliases`: ["Adc PBcfg", "Adc_PBcfg()"]

### API-ADC-PTIMER-CONFIGUREPARTIALCONVERSION
- `name`: `Adc_Ptimer_ConfigurePartialConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_ConfigurePartialConversion : exclusive area 45"]
- `aliases`: ["Adc Ptimer ConfigurePartialConversion", "Adc_Ptimer_ConfigurePartialConversion()"]

### API-ADC-PTIMER-DEINITUNITHARDWARE
- `name`: `Adc_Ptimer_DeInitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_DeInitUnitHardware : exclusive area 44"]
- `aliases`: ["Adc Ptimer DeInitUnitHardware", "Adc_Ptimer_DeInitUnitHardware()"]

### API-ADC-PTIMER-HW
- `name`: `Adc_Ptimer_Hw`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5, 10]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Ptimer_Hw.c"]
- `aliases`: ["Adc Ptimer Hw", "Adc_Ptimer_Hw()"]

### API-ADC-PTIMER-HW-TYPES
- `name`: `Adc_Ptimer_Hw_Types`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_Hw_Types.h"]
- `aliases`: ["Adc Ptimer Hw Types", "Adc_Ptimer_Hw_Types()"]

### API-ADC-PTIMER-INITUNITHARDWARE
- `name`: `Adc_Ptimer_InitUnitHardware`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_InitUnitHardware : exclusive area 43"]
- `aliases`: ["Adc Ptimer InitUnitHardware", "Adc_Ptimer_InitUnitHardware()"]

### API-ADC-PTIMER-IRQ
- `name`: `Adc_Ptimer_Irq`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Ptimer_Irq.c"]
- `aliases`: ["Adc Ptimer Irq", "Adc_Ptimer_Irq()"]

### API-ADC-PTIMER-REG
- `name`: `Adc_Ptimer_Reg`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_RegOps.h"]
- `aliases`: ["Adc Ptimer Reg", "Adc_Ptimer_Reg()"]

### API-ADC-PTIMER-REGOPS
- `name`: `Adc_Ptimer_RegOps`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_RegOps.h"]
- `aliases`: ["Adc Ptimer RegOps", "Adc_Ptimer_RegOps()"]

### API-ADC-PTIMER-SETPTIMERMODE
- `name`: `Adc_Ptimer_SetPtimerMode`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_SetPtimerMode : exclusive area 47"]
- `aliases`: ["Adc Ptimer SetPtimerMode", "Adc_Ptimer_SetPtimerMode()"]

### API-ADC-PTIMER-STARTSOFTWARECONVERSION
- `name`: `Adc_Ptimer_StartSoftwareConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_StartSoftwareConversion : exclusive area 46"]
- `aliases`: ["Adc Ptimer StartSoftwareConversion", "Adc_Ptimer_StartSoftwareConversion()"]

### API-ADC-PTIMER-STOPCONVERSION
- `name`: `Adc_Ptimer_StopConversion`
- `type`: `api_or_function`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p10: Adc_Ptimer_StopConversion : exclusive area 48"]
- `aliases`: ["Adc Ptimer StopConversion", "Adc_Ptimer_StopConversion()"]

### API-ADC-READGROUP
- `name`: `Adc_ReadGroup`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_ReadGroup : exclusive area 3"]
- `aliases`: ["Adc ReadGroup", "Adc_ReadGroup()"]

### API-ADC-REG
- `name`: `Adc_Reg`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_RegOps.h"]
- `aliases`: ["Adc Reg", "Adc_Reg()"]

### API-ADC-REGOPS
- `name`: `Adc_RegOps`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_RegOps.h"]
- `aliases`: ["Adc RegOps", "Adc_RegOps()"]

### API-ADC-SETUPRESULTBUFFER
- `name`: `Adc_SetupResultBuffer`
- `type`: `api_or_function`
- `primary_page`: `12`
- `physical_pages`: [12, 14]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p12: Adc_SetupResultBuffer"]
- `aliases`: ["Adc SetupResultBuffer", "Adc_SetupResultBuffer()"]

### API-ADC-STARTGROUPCONVERSION
- `name`: `Adc_StartGroupConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_StartGroupConversion : exclusive area 1"]
- `aliases`: ["Adc StartGroupConversion", "Adc_StartGroupConversion()"]

### API-ADC-STOPGROUPCONVERSION
- `name`: `Adc_StopGroupConversion`
- `type`: `api_or_function`
- `primary_page`: `9`
- `physical_pages`: [9, 12]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p9: Adc_StopGroupConversion : exclusive area 2"]
- `aliases`: ["Adc StopGroupConversion", "Adc_StopGroupConversion()"]

### API-ADC-TYPES
- `name`: `Adc_Types`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Types.h"]
- `aliases`: ["Adc Types", "Adc_Types()"]

### API-ADC-VALUEGROUPTYPE
- `name`: `Adc_ValueGroupType`
- `type`: `api_or_function`
- `primary_page`: `14`
- `physical_pages`: [14]
- `section_paths`: ["Chapter 7 Function Calls"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p14: Adc_ValueGroupType *DataBufferPtr)."]
- `aliases`: ["Adc ValueGroupType", "Adc_ValueGroupType()"]

### API-ADC-VERSION
- `name`: `Adc_Version`
- `type`: `api_or_function`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: ADC driver API or internal function; use pages for signature, parameters, or call-flow context.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Version.h"]
- `aliases`: ["Adc Version", "Adc_Version()"]

### CFG-ADC-C
- `name`: `Adc.c`
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Tresos/ECUC ADC configuration container or parameter.
- `anchors`: ["p9: Adc.c:"]
- `aliases`: ["ADC .c"]

### ERR-ADC-E-ALREADY-INITIALIZED
- `name`: `ADC_E_ALREADY_INITIALIZED`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_ALREADY_INITIALIZED;"]
- `aliases`: ["ADC error ALREADY_INITIALIZED", "adc_e_already_initialized"]

### ERR-ADC-E-BUFFER-UNINIT
- `name`: `ADC_E_BUFFER_UNINIT`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_BUFFER_UNINIT;"]
- `aliases`: ["ADC error BUFFER_UNINIT", "adc_e_buffer_uninit"]

### ERR-ADC-E-BUSY
- `name`: `ADC_E_BUSY`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_BUSY"]
- `aliases`: ["ADC error BUSY", "adc_e_busy"]

### ERR-ADC-E-IDLE
- `name`: `ADC_E_IDLE`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_IDLE"]
- `aliases`: ["ADC error IDLE", "adc_e_idle"]

### ERR-ADC-E-NOTIF-CAPABILITY
- `name`: `ADC_E_NOTIF_CAPABILITY`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_NOTIF_CAPABILITY"]
- `aliases`: ["ADC error NOTIF_CAPABILITY", "adc_e_notif_capability"]

### ERR-ADC-E-PARAM-CONFIG
- `name`: `ADC_E_PARAM_CONFIG`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_PARAM_CONFIG"]
- `aliases`: ["ADC error PARAM_CONFIG", "adc_e_param_config"]

### ERR-ADC-E-PARAM-GROUP
- `name`: `ADC_E_PARAM_GROUP`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_PARAM_GROUP;"]
- `aliases`: ["ADC error PARAM_GROUP", "adc_e_param_group"]

### ERR-ADC-E-PARAM-POINTER
- `name`: `ADC_E_PARAM_POINTER`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_PARAM_POINTER;"]
- `aliases`: ["ADC error PARAM_POINTER", "adc_e_param_pointer"]

### ERR-ADC-E-QUEUE-FULL
- `name`: `ADC_E_QUEUE_FULL`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_QUEUE_FULL"]
- `aliases`: ["ADC error QUEUE_FULL", "adc_e_queue_full"]

### ERR-ADC-E-UNINIT
- `name`: `ADC_E_UNINIT`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_UNINIT;"]
- `aliases`: ["ADC error UNINIT", "adc_e_uninit"]

### ERR-ADC-E-WRONG-CONV-MODE
- `name`: `ADC_E_WRONG_CONV_MODE`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_WRONG_CONV_MODE;"]
- `aliases`: ["ADC error WRONG_CONV_MODE", "adc_e_wrong_conv_mode"]

### ERR-ADC-E-WRONG-TRIGG-SRC
- `name`: `ADC_E_WRONG_TRIGG_SRC`
- `type`: `error_code`
- `primary_page`: `12`
- `physical_pages`: [12]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: ADC development or production error code / DET-related symbol.
- `anchors`: ["p12: ADC_E_WRONG_TRIGG_SRC;"]
- `aliases`: ["ADC error WRONG_TRIGG_SRC", "adc_e_wrong_trigg_src"]

### MEM-ADC-START-SEC
- `name`: `ADC_START_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONFIG_DATA_8"]
- `aliases`: []

### MEM-ADC-START-SEC-CODE
- `name`: `ADC_START_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CODE"]
- `aliases`: []

### MEM-ADC-START-SEC-CODE-AC
- `name`: `ADC_START_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CODE_AC"]
- `aliases`: []

### MEM-ADC-START-SEC-CONFIG-DATA-16
- `name`: `ADC_START_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONFIG_DATA_16"]
- `aliases`: []

### MEM-ADC-START-SEC-CONFIG-DATA-32
- `name`: `ADC_START_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONFIG_DATA_32"]
- `aliases`: []

### MEM-ADC-START-SEC-CONFIG-DATA-8
- `name`: `ADC_START_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONFIG_DATA_8"]
- `aliases`: []

### MEM-ADC-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `ADC_START_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONFIG_DATA_UNSPECIFIED"]
- `aliases`: []

### MEM-ADC-START-SEC-CONST
- `name`: `ADC_START_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONST_BOOLEAN"]
- `aliases`: []

### MEM-ADC-START-SEC-CONST-16
- `name`: `ADC_START_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONST_16"]
- `aliases`: []

### MEM-ADC-START-SEC-CONST-32
- `name`: `ADC_START_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONST_32"]
- `aliases`: []

### MEM-ADC-START-SEC-CONST-8
- `name`: `ADC_START_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONST_8"]
- `aliases`: []

### MEM-ADC-START-SEC-CONST-BOOLEAN
- `name`: `ADC_START_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_CONST_BOOLEAN"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR
- `name`: `ADC_START_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p8: ADC_START_SEC_VAR _INIT_16"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-P0007
- `name`: `ADC_START_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-NO-INIT
- `name`: `ADC_START_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-NO-INIT-16
- `name`: `ADC_START_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_16"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-NO-INIT-32
- `name`: `ADC_START_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_32"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-NO-INIT-8
- `name`: `ADC_START_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_8"]
- `aliases`: []

### MEM-ADC-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `ADC_START_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_START_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### MEM-ADC-STOP-SEC
- `name`: `ADC_STOP_SEC_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONFIG_DATA_8"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CODE
- `name`: `ADC_STOP_SEC_CODE`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CODE"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CODE-AC
- `name`: `ADC_STOP_SEC_CODE_AC`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CODE_AC"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONFIG-DATA-16
- `name`: `ADC_STOP_SEC_CONFIG_DATA_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONFIG_DATA_16"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONFIG-DATA-32
- `name`: `ADC_STOP_SEC_CONFIG_DATA_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONFIG_DATA_32"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONFIG-DATA-8
- `name`: `ADC_STOP_SEC_CONFIG_DATA_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONFIG_DATA_8"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONST
- `name`: `ADC_STOP_SEC_CONST_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONST_BOOLEAN"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONST-16
- `name`: `ADC_STOP_SEC_CONST_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONST_16"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONST-32
- `name`: `ADC_STOP_SEC_CONST_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONST_32"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONST-8
- `name`: `ADC_STOP_SEC_CONST_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONST_8"]
- `aliases`: []

### MEM-ADC-STOP-SEC-CONST-BOOLEAN
- `name`: `ADC_STOP_SEC_CONST_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_CONST_BOOLEAN"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR
- `name`: `ADC_STOP_SEC_VAR`
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p8: ADC_STOP_SEC_VAR _INIT_16"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-P0007
- `name`: `ADC_STOP_SEC_VAR_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-NO-INIT
- `name`: `ADC_STOP_SEC_VAR_NO_INIT_`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-NO-INIT-16
- `name`: `ADC_STOP_SEC_VAR_NO_INIT_16`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_16"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-NO-INIT-32
- `name`: `ADC_STOP_SEC_VAR_NO_INIT_32`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_32"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-NO-INIT-8
- `name`: `ADC_STOP_SEC_VAR_NO_INIT_8`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_8"]
- `aliases`: []

### MEM-ADC-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: [7]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: ADC memory-map section marker used with MemMap/linker integration.
- `anchors`: ["p7: ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN"]
- `aliases`: []

### FILE-MCAL-EB-PLUGINS-ECLIPSE-PLUGINS-ADC
- `name`: `_MCAL/EB_Plugins/eclipse/plugins/Adc`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: Copy the ADC module(_MCAL/EB_Plugins/eclipse/plugins/Adc) folder to EB tresos plug-ins (EB/tresos/plugins/)"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-H
- `name`: `_MCAL/Src/Adc/include/Adc.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-HW-H
- `name`: `_MCAL/Src/Adc/include/Adc_Hw.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Hw.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-HW-TYPES-H
- `name`: `_MCAL/Src/Adc/include/Adc_Hw_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Hw_Types.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-LLD-H
- `name`: `_MCAL/Src/Adc/include/Adc_Lld.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Lld.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-MEMMAP-H
- `name`: `_MCAL/Src/Adc/include/Adc_MemMap.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_MemMap.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-PTIMER-HW-H
- `name`: `_MCAL/Src/Adc/include/Adc_Ptimer_Hw.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_Hw.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-PTIMER-HW-TYPES-H
- `name`: `_MCAL/Src/Adc/include/Adc_Ptimer_Hw_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_Hw_Types.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-PTIMER-REG-H
- `name`: `_MCAL/Src/Adc/include/Adc_Ptimer_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_Reg.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-PTIMER-REGOPS-H
- `name`: `_MCAL/Src/Adc/include/Adc_Ptimer_RegOps.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Ptimer_RegOps.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-REG-H
- `name`: `_MCAL/Src/Adc/include/Adc_Reg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Reg.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-REGOPS-H
- `name`: `_MCAL/Src/Adc/include/Adc_RegOps.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_RegOps.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-TYPES-H
- `name`: `_MCAL/Src/Adc/include/Adc_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Types.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-INCLUDE-ADC-VERSION-H
- `name`: `_MCAL/Src/Adc/include/Adc_Version.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/include/Adc_Version.h"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-C
- `name`: `_MCAL/Src/Adc/Src/Adc.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc.c"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-HW-C
- `name`: `_MCAL/Src/Adc/Src/Adc_Hw.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Hw.c"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-IRQ-C
- `name`: `_MCAL/Src/Adc/Src/Adc_Irq.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Irq.c"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-LLD-C
- `name`: `_MCAL/Src/Adc/Src/Adc_Lld.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Lld.c"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-PTIMER-HW-C
- `name`: `_MCAL/Src/Adc/Src/Adc_Ptimer_Hw.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Ptimer_Hw.c"]
- `aliases`: []

### FILE-MCAL-SRC-ADC-SRC-ADC-PTIMER-IRQ-C
- `name`: `_MCAL/Src/Adc/Src/Adc_Ptimer_Irq.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Ptimer_Irq.c"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: `_MCAL/Src/Common/include/Compiler.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/Compiler.h"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: `_MCAL/Src/Common/include/Compiler_Cfg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/Compiler_Cfg.h"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: `_MCAL/Src/Common/include/CompilerDefinition.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/CompilerDefinition.h"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: `_MCAL/Src/Common/include/Mcal.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/Mcal.h"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: `_MCAL/Src/Common/include/Platform_Types.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/Platform_Types.h"]
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: `_MCAL/Src/Common/include/Std_Types.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL/Src/Common/include/Std_Types.h"]
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-ADC-CFG-H
- `name`: `_MCAL_generate/include/Adc_Cfg.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL_generate/include/Adc_Cfg.h"]
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-ADC-CFGDEFINES-H
- `name`: `_MCAL_generate/include/Adc_CfgDefines.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: _MCAL_generate/include/Adc_CfgDefines.h"]
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-ADC-CFG-C
- `name`: `_MCAL_generate/src/Adc_Cfg.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL_generate/src/Adc_Cfg.c"]
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-ADC-PBCFG-C
- `name`: `_MCAL_generate/src/Adc_PBcfg.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p5: _MCAL_generate/src/Adc_PBcfg.c"]
- `aliases`: []

### FILE-ADC-HW-C
- `name`: `Adc_Hw.c`
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p9: Adc_Hw.c:"]
- `aliases`: ["Adc Hw.c", "Adc_Hw.c()"]

### FILE-ADC-LLD-C
- `name`: `Adc_Lld.c`
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: [9]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p9: Adc_Lld.c:"]
- `aliases`: ["Adc Lld.c", "Adc_Lld.c()"]

### FILE-ADC-PTIMER-HW-C
- `name`: `Adc_Ptimer_Hw.c`
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: [10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p10: Adc_Ptimer_Hw.c:"]
- `aliases`: ["Adc Ptimer Hw.c", "Adc_Ptimer_Hw.c()"]

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: Det.h"]
- `aliases`: []

### FILE-MCAL-H
- `name`: `Mcal.h`
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p15: Please check various definitions available in Common module's include file Mcal.h for details."]
- `aliases`: []

### FILE-SCHM-ADC-H
- `name`: `SchM_Adc.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: [6]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Source/header file or generated file path referenced by the document.
- `anchors`: ["p6: SchM_Adc.h"]
- `aliases`: []

### TERM-ADC
- `name`: `ADC`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: [1, 2, 3, 4, 5]
- `section_paths`: ["Cover"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p1: FC7xxx ADC Integration Manual"]
- `aliases`: ["Analog-to-Digital Converter", "ADC module", "ADC driver", "模数转换器", "ADC模块"]

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: [15]
- `section_paths`: ["Chapter 8 Other Requirements"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p15: AUTOSAR_OS_NOT_USED need defined."]
- `aliases`: ["AUTOSAR Classic", "AUTOSAR_SWS_ADCDriver", "R20-11"]

### TERM-DEM
- `name`: `DEM`
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 6 Error Report"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p13: DEM"]
- `aliases`: []

### TERM-DET
- `name`: `DET`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 12, 13]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p5: DET"]
- `aliases`: []

### TERM-DMA
- `name`: `DMA`
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: [9, 10]
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p9: DMA"]
- `aliases`: []

### TERM-MCAL
- `name`: `MCAL`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: [2]
- `section_paths`: ["Revision History"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p2: Initial release for MCAL V0.1.0"]
- `aliases`: []

### TERM-PTIMER
- `name`: `Ptimer`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: [5, 10]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Domain term or module name used as a retrieval alias.
- `anchors`: ["p5: _MCAL/Src/Adc/Src/Adc_Ptimer_Hw.c"]
- `aliases`: ["PTIMER", "programmable timer", "pre-trigger timer", "Ptimer module"]

### SYM-SCHM
- `name`: `SchM`
- `type`: `symbol`
- `primary_page`: `6`
- `physical_pages`: [6, 9]
- `section_paths`: ["Chapter 2 Building"]
- `brief`: Technical symbol detected in the source text.
- `anchors`: ["p6: SchM_Adc.h"]
- `aliases`: []

## 9. Search Aliases

### ALIAS-ADC
- `canonical`: `ADC`
- `aliases`: ["Analog-to-Digital Converter", "ADC module", "ADC driver", "模数转换器", "ADC模块"]
- `related_ids`: ["TERM-ADC"]

### ALIAS-MCAL
- `canonical`: `MCAL`
- `aliases`: ["Microcontroller Abstraction Layer", "AUTOSAR MCAL", "底层驱动", "微控制器抽象层"]
- `related_ids`: ["TERM-MCAL"]

### ALIAS-EB-TRESOS
- `canonical`: `EB tresos`
- `aliases`: ["Tresos", "EB tresos Studio", "EB插件", "配置工具"]
- `related_ids`: ["TERM-EB-TRESOS"]

### ALIAS-DET
- `canonical`: `DET`
- `aliases`: ["Development Error Tracer", "development error detection", "开发错误检测"]
- `related_ids`: ["TERM-DET"]

### ALIAS-DEM
- `canonical`: `DEM`
- `aliases`: ["Diagnostic Event Manager", "diagnostic event", "生产错误报告"]
- `related_ids`: ["TERM-DEM"]

### ALIAS-PTIMER
- `canonical`: `Ptimer`
- `aliases`: ["PTIMER", "Ptimer module", "programmable timer", "pre-trigger timer"]
- `related_ids`: ["TERM-PTIMER"]

### ALIAS-EXCLUSIVE-AREA
- `canonical`: `Exclusive Area`
- `aliases`: ["SchM critical section", "critical region", "exclusive area", "临界区"]
- `related_ids`: ["TERM-SCHM"]

### ALIAS-ISR
- `canonical`: `ISR`
- `aliases`: ["interrupt service routine", "IRQ handler", "NVIC interrupt", "中断服务例程"]
- `related_ids`: ["TERM-ISR"]

### ALIAS-MEMMAP
- `canonical`: `ADC MemMap`
- `aliases`: ["ADC_START_SEC", "ADC_STOP_SEC", "memory section", "linker section", "MemMap"]
- `related_ids`: ["MEM-ADC-START-SEC"]

### ALIAS-OS-NOT-USED
- `canonical`: `AUTOSAR_OS_NOT_USED`
- `aliases`: ["no OS", "OS not used", "bare metal", "无OS"]
- `related_ids`: ["MACRO-AUTOSAR-OS-NOT-USED"]

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between ADC_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `ADC_Integration_Manual.pdf`
- `source_pdf_sha256`: `0bb9518acfa5dff8d77f8622e6da09a8892b4318c31e63f62b775c0ed0115208`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `68`
- `technical_missing_terms_added`: `9`
- `pages_with_added_terms`: `15`
- `supplemented_missing_token_count`: `68`
- `supplemented_missing_technical_token_count`: `9`
- `supplemented_physical_pages_count`: `15`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "7.2"
  - "7.3"
  - "7.4"
  - "8.2"
  - "Confidential"
  - "Flagchip"
  - "Macros"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "Areas"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "basic"
  - "choose"
  - "common"
  - "connected"
  - "enabling"
  - "external"
  - "first"
  - "initialize"
  - "interrupts"
  - "necessary"
  - "parts"
  - "pin"
  - "point"
  - "port"
  - "ports"
  - "protect"
  - "provides"
  - "some"
  - "unprotect"
  - "user"
  - "which"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "add"
  - "developed"
  - "first"
  - "user"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Code"
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "INIT_8"
  - "INIT_BOOLEAN"
  - "Proprietary"
  - "Start"
  - "These"
  - "Variables"
  - "aligned"
  - "all"
  - "bit"
  - "boolean"
  - "bss"
  - "cleared"
  - "initialized"
  - "never"
  - "read"
  - "rodata"
  - "stop"
  - "variables"
  - "which"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "_INIT_"
  - "_INIT_32"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "ADC1_IRQHandler"
  - "ADC2_IRQHandler"
  - "ADC3_IRQHandler"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "7.2"
  - "7.3"
  - "7.4"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "8.2"
  - "Confidential"
  - "Flagchip"
  - "Macros"
  - "Proprietary"
  - "case"
  - "configures"
  - "define"
  - "implement"
  - "shall"
  - "user"
  - "value"
  - "void"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "appropriate"
  - "locations"
  - "their"

## 10. Quality Warnings

### WARN-GLOBAL-001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
- `affected_ids`: []
- `message`: PDF has an extractable text layer; OCR was not executed.
- `recommended_action`: Use source PDF rendering for visual verification of screenshots, diagrams and complex table layout.

### WARN-GLOBAL-002
- `severity`: `medium`
- `category`: `toc_outline`
- `physical_pages`: []
- `affected_ids`: ["SEC-*"]
- `message`: PDF has no internal outline/bookmarks; Manifest section ranges were generated from visible table-of-contents text and headings.
- `recommended_action`: Use physical_page and anchors, not PDF bookmarks, as the primary locator.

### WARN-GLOBAL-003
- `severity`: `low`
- `category`: `sparse_text`
- `physical_pages`: [1]
- `affected_ids`: ["PAGE-0001"]
- `message`: Detected sparse-text pages: [1].
- `recommended_action`: Verify visually if sparse pages are queried.

### WARN-0007-0008
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: [7, 8]
- `affected_ids`: ["TBL-0007-0008"]
- `message`: Memory-map table spans multiple pages; Manifest indexes its caption, fields and anchors but does not reconstruct every cell.
- `recommended_action`: Use source PDF pages 7-8 for exact rows and spacing-sensitive section names.

### WARN-0012-0013
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: [12, 13]
- `affected_ids`: ["TBL-0012-0013"]
- `message`: DET error table spans multiple pages; long error lists are indexed for navigation, not treated as a complete structured data export.
- `recommended_action`: Verify exact API-to-error mappings against the source PDF.

### WARN-GLOBAL-004
- `severity`: `info`
- `category`: `figure_detection`
- `physical_pages`: []
- `affected_ids`: ["Figure / Image Index"]
- `message`: No formal numbered figures or raster image blocks were detected in this PDF.
- `recommended_action`: Use table/list indexes for navigation.

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: `ADC_Integration_Manual.pdf`
- `source_pdf_sha256`: `0bb9518acfa5dff8d77f8622e6da09a8892b4318c31e63f62b775c0ed0115208`
- `pdf_page_count`: `16`
- `indexed_physical_pages_count`: `16`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `page_coverage_status`: `pass`
- `physical_page_numbering`: `1-based PDF physical page numbers only`
- `printed_page_policy`: `printed_page is auxiliary and equal to visible footer number when present; page 1 uses cover`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `sha256_recorded`: `true`
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `68`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `manifest_staleness_check`: `compare local PDF SHA256 to source_pdf_sha256 before use`
- `table_confidence_present`: `true`
- `figure_confidence_present`: `true`
- `stable_id_policy`: `DOC/SEC/PAGE/SEG/TBL/FIG/REQ/API/CFG/TERM IDs generated deterministically from page numbers and source names`
- `overall_status`: `pass_with_warnings`
